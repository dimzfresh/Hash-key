//
//  Hash.cpp
//  HashExample
//
//  Created by Dmitrii Ziablikov on 05/12/2018.
//  Copyright © 2018 dimzfresh. All rights reserved.
//

#include "Hash.hpp"
#include <iostream>
#include <string>
#include <CommonCrypto/CommonDigest.h>
#include "base64.hpp"
#include <vector>

int main() {
    std::string key = "cD6HwEaVSB+ooyJbVTHDAYa/VI6WAZfBThPi1q0u4eU=";
    std::string data = "3816602700";
    
    std::vector<BYTE> decodedData = base64_decode(key);
    
    
    
    //char d = '4';
    
    //std::byte = BYTE_ORDER;
    
    //byte[] hash = Base64.getDecoder().decode(key);
    
}

//static std::string base64_encode(const std::string &in) {
//
//    std::string out;
//
//    int val=0, valb=-6;
//    for (uchar c : in) {
//        val = (val<<8) + c;
//        valb += 8;
//        while (valb>=0) {
//            out.push_back("ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/"[(val>>valb)&0x3F]);
//            valb-=6;
//        }
//    }
//    if (valb>-6) out.push_back("ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/"[((val<<8)>>(valb+8))&0x3F]);
//    while (out.size()%4) out.push_back('=');
//    return out;
//}
//
//static std::string base64_decode(const std::string &in) {
//
//    std::string out;
//
//    std::vector<int> T(256,-1);
//    for (int i=0; i<64; i++) T["ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/"[i]] = i;
//
//    int val=0, valb=-8;
//    for (uchar c : in) {
//        if (T[c] == -1) break;
//        val = (val<<6) + T[c];
//        valb += 6;
//        if (valb>=0) {
//            out.push_back(char((val>>valb)&0xFF));
//            valb-=8;
//        }
//    }
//    return out;
//}
