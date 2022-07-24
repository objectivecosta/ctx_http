//
//  Request.cpp
//  Arachis
//
//  Created by Rafael Costa on 10/05/22.
//  Copyright © 2022 Rafael Costa. All rights reserved.
//

#include <stdio.h>
#include <string>
#include <vector>
#include "../../common/DataWrapper.hpp"

namespace CTXHTTP {
class Header {
public:
    std::string key;
    std::string value;
    
    Header(std::string key, std::string value) : key{key}, value{value} {
        
    }
};

class Request {
public:
    std::string method;
    std::string url;
    std::unique_ptr<std::vector<Header>> headers;
    std::unique_ptr<CTXCommon::DataWrapper> data;
    
    Request(
            std::string url,
            std::vector<Header> headers = std::vector<Header>(),
            std::string method = "GET",
            std::unique_ptr<CTXCommon::DataWrapper> data = nullptr
    ) {
        this->url = url;
        this->headers = std::make_unique<std::vector<Header>>(headers);
        this->method = method;
        this->data = std::move(data);
    }
};

class Response {
public:
    const std::unique_ptr<const Request> request;
    const int64_t statusCode;
    const std::vector<const Header> headers;
    const std::unique_ptr<const CTXCommon::DataWrapper> data;
    
//    Response() {};
    
    Response(std::unique_ptr<Request> request, int64_t statusCode, std::vector<const Header> headers, std::unique_ptr<CTXCommon::DataWrapper> data) :
    statusCode { statusCode },
    headers { headers },
    request { std::move(request) },
    data { std::move(data) }
    {
        
    }
};
}


