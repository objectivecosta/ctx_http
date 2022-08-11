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
#include "../../protoc/proto/http_request.pb.h"
#include "../../protoc/proto/http_response.pb.h"

const static int timeout_interval = 30;

namespace CTXHTTP {

class Client {
public:
    virtual void performRequest(std::unique_ptr<HTTPRequest> request, std::function<void(std::unique_ptr<HTTPResponse> response)> callback) = 0;
    virtual ~Client() = default;
};

class ClientProvider {
public:
    static Client* provideClient();
};
}


#endif /* CTXHTTP_hpp */
