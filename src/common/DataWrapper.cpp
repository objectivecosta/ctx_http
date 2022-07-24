//
//  DataWrapper.cpp
//  Arachis
//
//  Created by Rafael Costa on 19/07/22.
//  Copyright © 2022 Rafael Costa. All rights reserved.
//

#include "DataWrapper.hpp"

CTXCommon::DataWrapper::DataWrapper(const void* data, int64_t size) {
    this->_data = malloc(size);
    this->_size = size;
    
    memcpy(this->_data, data, size);
}
