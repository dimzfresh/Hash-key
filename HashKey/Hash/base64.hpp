//
//  base64.hpp
//  HashExample
//
//  Created by Dmitrii Ziablikov on 05/12/2018.
//  Copyright © 2018 dimzfresh. All rights reserved.
//

#ifndef _BASE64_H_
#define _BASE64_H_

#include <vector>
#include <string>
typedef unsigned char BYTE;

std::string base64_encode(BYTE const* buf, unsigned int bufLen);
std::vector<BYTE> base64_decode(std::string const&);

#endif
