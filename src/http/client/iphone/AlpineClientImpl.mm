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
    
    [[nodiscard]] std::unique_ptr<Response> _responseFrom(std::unique_ptr<Request> request, NSHTTPURLResponse* alpineResponse, NSData* data) {
        
//        auto res = ;
        
        auto response = std::make_unique<Response>(
                                                   std::move(request),
                                                                
                                                   alpineResponse.statusCode,
                                                                
                                                   _headersFrom(alpineResponse.allHeaderFields),
                                                                
                                                   std::make_unique<CTXCommon::DataWrapper>(_dataFrom(data))
                                                                );
//        response->statusCode = alpineResponse.statusCode;
//        response->headers = _headersFrom(alpineResponse.allHeaderFields);
//        response->data = std::make_unique<CTXCommon::DataWrapper>(_dataFrom(data));
//        response->request = std::move(request);
        
        return response;
    }

    
public:
    AlpineClientImpl() {
        this->session = [NSURLSession sharedSession];
    }
    
//    ~AlpineClientImpl() override {
//        
//    }
    
    void performRequest(std::unique_ptr<Request> request, std::function<void(std::unique_ptr<Response> response)> callback) override {
        NSMutableURLRequest* alpineRequest = [[NSMutableURLRequest alloc] initWithURL:[NSURL URLWithString:_alpineStringFromCppString(request->url)] cachePolicy:NSURLRequestUseProtocolCachePolicy timeoutInterval:timeout_interval];
        
        for (auto &header : *(request->headers)) {
            [alpineRequest
             addValue:_alpineStringFromCppString(header.value)
             forHTTPHeaderField:_alpineStringFromCppString(header.key)
            ];
        }
        
        __block std::unique_ptr<Request> bl_request = std::move(request);
        NSURLSessionDataTask* task = [this->session dataTaskWithRequest:alpineRequest completionHandler:^(NSData * _Nullable data, NSURLResponse * _Nullable alpineResponse, NSError * _Nullable error) {
         auto response = _responseFrom(std::move(bl_request), (NSHTTPURLResponse*)alpineResponse, data);
         callback(std::move(response));
         }];
        
        [task resume];
    }
};
}
