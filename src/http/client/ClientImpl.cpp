//
//  CTXHTTP.cpp
//  Arachis
//
//  Created by Rafael Costa on 10/05/22.
//  Copyright © 2022 Rafael Costa. All rights reserved.
//

#include "Client.hpp"

#if IS_ALPINE
#include "iphone/AlpineClientImpl.mm"

CTXHTTP::Client* CTXHTTP::ClientProvider::provideClient() {
  return new AlpineClientImpl();
}
#endif

#if IS_ANDROID
CTXHTTP::Client* CTXHTTP::ClientProvider::provideClient() {
  exit(0);
}
#endif


