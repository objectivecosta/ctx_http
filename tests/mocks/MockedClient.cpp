#include "MockedClient.hpp"

CTXHTTP::Client* CTXHTTP::ClientProvider::provideClient() {
  return new Mock::MockedClient();
}

class Mock::MockedClient::Impl {
public:
   bool hasInvokedPerformValue;
   std::shared_ptr<CTXCommon::DataWrapper> performInvokedWith;
};

Mock::MockedClient::MockedClient() : _pimpl (std::make_unique<Mock::MockedClient::Impl>( Mock::MockedClient::Impl() )) {
   this->_pimpl->hasInvokedPerformValue = false;
}

bool Mock::MockedClient::hasInvokedPerform() {
  return this->_pimpl->hasInvokedPerformValue;
}
    std::unique_ptr<CTXCommon::DataWrapper> Mock::MockedClient::performWithData() {
      return std::make_unique<CTXCommon::DataWrapper>(CTXCommon::DataWrapper(nullptr, 0));
    }

    void Mock::MockedClient::performRequest(std::unique_ptr<CTXCommon::DataWrapper> request, std::function<void(std::unique_ptr<CTXCommon::DataWrapper> response)> callback) {
      this->_pimpl->hasInvokedPerformValue = true;
    }
    std::string Mock::MockedClient::description() {
      return std::string("MockedClient");
    }