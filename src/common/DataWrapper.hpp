//
//  DataWrapper.hpp
//  Arachis
//
//  Created by Rafael Costa on 19/07/22.
//  Copyright © 2022 Rafael Costa. All rights reserved.
//

#ifndef DataWrapper_hpp
#define DataWrapper_hpp

#include <stdio.h>
#include <stdlib.h>
#include <string>

namespace CTXCommon {

class DataWrapper {
public:
    void* _data;
    int64_t _size;
    DataWrapper(const void* data, int64_t size);
};

}

#endif /* DataWrapper_hpp */
