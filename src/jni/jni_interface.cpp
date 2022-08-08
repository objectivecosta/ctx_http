#include <iostream>
#include "../http/client/Client.hpp"
#include <jni.h>

// class JNIInterface {
//   public:
//   void performHTTP() {

    
//   }
// };

extern "C" jstring Java_cos_tax_jnitest_JNIInterface_performHTTP(JNIEnv *env, jobject thiz) {
    return (*env).NewStringUTF("Hello, C++");
    // return ;
    // std::cout << "Java_cos_tax_jnitest_JNIInterface_performHTTP called !" << "\n";

    // std::string string = std::string("https://cos.tax/main.html");
    // auto request = std::make_unique<CTXHTTP::Request>(CTXHTTP::Request(string));

    // CTXHTTP::Client* client = CTXHTTP::ClientProvider::provideClient();
    // client->performRequest(std::move(request), [string](std::unique_ptr<CTXHTTP::Response> response){
    //   std::string body = std::string((char *)response->data->_data);
    //   std::cout << "Perform request called for " << string << ";\nReturned data:\n" << body;
    // });

    // return "Hello, C++";
}
