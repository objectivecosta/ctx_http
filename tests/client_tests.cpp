#include "../src/http/client/Client.hpp"

#define BOOST_TEST_MODULE Client
#include <boost/test/included/unit_test.hpp>
#include <typeinfo>

BOOST_AUTO_TEST_CASE(Client_Alpine)
{
    CTXHTTP::Client *client = CTXHTTP::ClientProvider::provideClient();
    BOOST_CHECK(client != nullptr);

    // Since we're running on macOS, assume HTTP client will be ALPINE.
    BOOST_CHECK(client->description().compare(std::string("AlpineClientImpl")) == 0);
}

BOOST_AUTO_TEST_CASE(Returns_Mocked) 
{

    

}
