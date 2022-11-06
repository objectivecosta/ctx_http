//
//  CTXHTTP.hpp
//  Arachis
//
//  Created by Rafael Costa on 10/05/22.
//  Copyright © 2022 Rafael Costa. All rights reserved.
//

#ifndef CTXHTTP_hpp
#define CTXHTTP_hpp

#include <stdio.h>
#include "../models/Request.cpp"
#include "../../common/DataWrapper.hpp"

const static int timeout_interval = 30;

namespace CTXHTTP {

class Client {
public:
    // request: http_request.pb
    // response: http_response.pb
    virtual void performRequest(std::unique_ptr<CTXCommon::DataWrapper> request, std::function<void(std::unique_ptr<CTXCommon::DataWrapper> response)> callback) = 0;
    virtual std::string description() = 0;
    virtual ~Client() = default;
};

class ClientProvider {
public:
    static Client* provideClient();
};
}


#endif /* CTXHTTP_hpp */
