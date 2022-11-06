#include "MockedClient.hpp"

class MockedClient : public CTXHTTP::Client {
public:
    MockedClient();
    void performRequest(std::unique_ptr<CTXCommon::DataWrapper> request, std::function<void(std::unique_ptr<CTXCommon::DataWrapper> response)> callback);
    std::string description();
};

CTXHTTP::Client* CTXHTTP::ClientProvider::provideClient() {
  return new MockedClient();
}

// class CTXHTTP::MockedClient::Impl {
// public:
//    bool hasInvokedPerformValue;
//    std::shared_ptr<CTXCommon::DataWrapper> performInvokedWith;
// };

MockedClient()
{
  printf("%i", 123);
}

// bool CTXHTTP::MockedClient::hasInvokedPerform() {
//   return this->_pimpl->hasInvokedPerformValue;
// }
//     std::unique_ptr<CTXCommon::DataWrapper> performWithData() {
//       return std::make_unique<CTXCommon::DataWrapper>(CTXCommon::DataWrapper(nullptr, 0));
//     }

    void MockedClient::performRequest(std::unique_ptr<CTXCommon::DataWrapper> request, std::function<void(std::unique_ptr<CTXCommon::DataWrapper> response)> callback) {
      // this->_pimpl->hasInvokedPerformValue = true;
    }
    std::string MockedClient::description() {
      return std::string("MockedClient");
    }