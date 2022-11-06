#ifndef MockedClient_hpp
#define MockedClient_hpp

#include <stdio.h>
#include "../../src/http/client/Client.hpp"
#include "../../src/http/models/Request.cpp"
#include "../../src/common/DataWrapper.hpp"

namespace Mock {
class MockedClient : public CTXHTTP::Client {
public:
    MockedClient();
    void performRequest(std::unique_ptr<CTXCommon::DataWrapper> request, std::function<void(std::unique_ptr<CTXCommon::DataWrapper> response)> callback);
    std::string description();

    bool hasInvokedPerform();
    std::unique_ptr<CTXCommon::DataWrapper> performWithData();
private:
    class Impl;
    std::unique_ptr<Impl> _pimpl;
};
}

#endif /* MockedClient_hpp */
