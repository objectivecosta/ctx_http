//
//  iphoneClientImpl.cpp
//  Arachis
//
//  Created by Rafael Costa on 10/05/22.
//  Copyright © 2022 Rafael Costa. All rights reserved.
//

#include <stdio.h>
#include "../Client.hpp"
#import <Foundation/Foundation.h>
#include "../../../proto/http_request.pb.h"
#include "../../../proto/http_response.pb.h"

using namespace CTXCommon;

namespace CTXHTTP {
class AlpineClientImpl : public Client {
private:
    NSURLSession *session;
    
    [[nodiscard]] std::string _cppStringFromAlpineString(NSString *alpineString) {
        return alpineString.UTF8String;
    }
    
    [[nodiscard]] NSString* _alpineStringFromCppString(const std::string &cppString) {
        return [NSString stringWithUTF8String:cppString.data()];
    }
    
    [[nodiscard]] std::vector<const Header> _headersFrom(NSDictionary* alpineHeaders) {
        std::vector<const Header> headers = {};
        
        for (int i = 0; i < alpineHeaders.allKeys.count; i++) {
            std::string key =  _cppStringFromAlpineString(alpineHeaders.allKeys[i]);
            std::string value =  _cppStringFromAlpineString(alpineHeaders.allKeys[i]);
            headers.emplace_back(Header(key, value));
        }
    
        return headers;
    }
    
    [[nodiscard]] CTXCommon::DataWrapper _dataFrom(NSData* alpineData) {
        return CTXCommon::DataWrapper(alpineData.bytes, (int64_t)alpineData.length);
    }

    [[nodiscard]] std::unique_ptr<CTXHTTP::HTTPRequest> _requestFrom(std::unique_ptr<CTXCommon::DataWrapper> request) {
        CTXHTTP::HTTPRequest *r = new CTXHTTP::HTTPRequest();
        if (!r->ParseFromArray(request->_data, request->_size)) {
            std::cerr << "Failed to parse address book." << std::endl;
        }
        return std::unique_ptr<CTXHTTP::HTTPRequest>(r);
    }

//     message HTTPResponse {
//   string url = 1;
//   string method = 2;
//   map<string, string> headers = 3;
//   optional bytes body = 4;
//   optional int32 statusCode = 5;
//   optional int32 tag = 6;
// }
    
    [[nodiscard]] std::unique_ptr<CTXHTTP::HTTPResponse> _responseFrom(int request_tag, NSHTTPURLResponse* alpineResponse, NSData* data) {
        CTXHTTP::HTTPResponse *response = new CTXHTTP::HTTPResponse();
        response->set_url(_cppStringFromAlpineString([[alpineResponse URL] absoluteString]));
        response->set_method(_cppStringFromAlpineString(@"GET"));
        response->set_body(data.bytes, (int64_t)data.length);
        return std::unique_ptr<CTXHTTP::HTTPResponse>(response);
    }

    
public:
    AlpineClientImpl() {
        this->session = [NSURLSession sharedSession];
    }
    
//    ~AlpineClientImpl() override {
//        
//    }
    
        virtual void performRequest(std::unique_ptr<DataWrapper> request, std::function<void(std::unique_ptr<DataWrapper> response)> callback) override {
        auto req = _requestFrom(std::move(request));

        NSMutableURLRequest* alpineRequest = [[NSMutableURLRequest alloc] initWithURL:[NSURL URLWithString:_alpineStringFromCppString(req->url())] cachePolicy:NSURLRequestUseProtocolCachePolicy timeoutInterval:timeout_interval];
        
        auto headers = req->headers();
        for (auto &header : headers) {
            [alpineRequest
             addValue:_alpineStringFromCppString(header.first)
             forHTTPHeaderField:_alpineStringFromCppString(header.second)
            ];
        }
        
        // __block std::unique_ptr<Request> bl_request = std::move(request);
        int tag = req->tag();
        NSURLSessionDataTask* task = [this->session dataTaskWithRequest:alpineRequest completionHandler:^(NSData * _Nullable data, NSURLResponse * _Nullable alpineResponse, NSError * _Nullable error) {
         std::unique_ptr<CTXHTTP::HTTPResponse> response = _responseFrom(tag, (NSHTTPURLResponse*)alpineResponse, data);
         int size = response->ByteSizeLong();
         char* array = new char[size];
         response->SerializeToArray(array, size);

         std::unique_ptr<CTXCommon::DataWrapper> dw = std::make_unique<CTXCommon::DataWrapper>(
            array,
            size
         );

         callback(std::move(dw));
         }];
        
        [task resume];
    }
};
}
