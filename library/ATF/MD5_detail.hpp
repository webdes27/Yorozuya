// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include "./common/common.h"
#include "MD5_info.hpp"


START_ATF_NAMESPACE
    namespace detail
    {
        static info::MD5Decode2_ptr MD5Decode2_next(nullptr);
        static info::MD5Decode2_clbk MD5Decode2_user(nullptr);
        static info::MD5Encode4_ptr MD5Encode4_next(nullptr);
        static info::MD5Encode4_clbk MD5Encode4_user(nullptr);
        static info::MD5Finalize6_ptr MD5Finalize6_next(nullptr);
        static info::MD5Finalize6_clbk MD5Finalize6_user(nullptr);
        static info::MD5Init8_ptr MD5Init8_next(nullptr);
        static info::MD5Init8_clbk MD5Init8_user(nullptr);
        static info::MD5ctor_MD510_ptr MD5ctor_MD510_next(nullptr);
        static info::MD5ctor_MD510_clbk MD5ctor_MD510_user(nullptr);
        static info::MD5Transform12_ptr MD5Transform12_next(nullptr);
        static info::MD5Transform12_clbk MD5Transform12_user(nullptr);
        static info::MD5Update14_ptr MD5Update14_next(nullptr);
        static info::MD5Update14_clbk MD5Update14_user(nullptr);
        static info::MD5dtor_MD516_ptr MD5dtor_MD516_next(nullptr);
        static info::MD5dtor_MD516_clbk MD5dtor_MD516_user(nullptr);
        
        static void MD5Decode2_wrapper(struct MD5* _this, unsigned int* output, char* input, unsigned int size)
        {
           MD5Decode2_user(_this, output, input, size, MD5Decode2_next);
        };
        static void MD5Encode4_wrapper(struct MD5* _this, char* output, unsigned int* input, unsigned int size)
        {
           MD5Encode4_user(_this, output, input, size, MD5Encode4_next);
        };
        static void MD5Finalize6_wrapper(struct MD5* _this, char* digest)
        {
           MD5Finalize6_user(_this, digest, MD5Finalize6_next);
        };
        static void MD5Init8_wrapper(struct MD5* _this)
        {
           MD5Init8_user(_this, MD5Init8_next);
        };
        static void MD5ctor_MD510_wrapper(struct MD5* _this)
        {
           MD5ctor_MD510_user(_this, MD5ctor_MD510_next);
        };
        static void MD5Transform12_wrapper(struct MD5* _this, char* block)
        {
           MD5Transform12_user(_this, block, MD5Transform12_next);
        };
        static void MD5Update14_wrapper(struct MD5* _this, void* inputBuffer, unsigned int size)
        {
           MD5Update14_user(_this, inputBuffer, size, MD5Update14_next);
        };
        static void MD5dtor_MD516_wrapper(struct MD5* _this)
        {
           MD5dtor_MD516_user(_this, MD5dtor_MD516_next);
        };
        
        static hook_record MD5_functions[] = {
        {   (LPVOID)0x1404423a0L,
            (LPVOID *)&MD5Decode2_user,
            (LPVOID *)&MD5Decode2_next,
            (LPVOID)cast_pointer_function(MD5Decode2_wrapper),
            (LPVOID)cast_pointer_function((void(MD5::*)(unsigned int*, char*, unsigned int))&MD5::Decode) },
        {   (LPVOID)0x1404422a0L,
            (LPVOID *)&MD5Encode4_user,
            (LPVOID *)&MD5Encode4_next,
            (LPVOID)cast_pointer_function(MD5Encode4_wrapper),
            (LPVOID)cast_pointer_function((void(MD5::*)(char*, unsigned int*, unsigned int))&MD5::Encode) },
        {   (LPVOID)0x140443560L,
            (LPVOID *)&MD5Finalize6_user,
            (LPVOID *)&MD5Finalize6_next,
            (LPVOID)cast_pointer_function(MD5Finalize6_wrapper),
            (LPVOID)cast_pointer_function((void(MD5::*)(char*))&MD5::Finalize) },
        {   (LPVOID)0x140442210L,
            (LPVOID *)&MD5Init8_user,
            (LPVOID *)&MD5Init8_next,
            (LPVOID)cast_pointer_function(MD5Init8_wrapper),
            (LPVOID)cast_pointer_function((void(MD5::*)())&MD5::Init) },
        {   (LPVOID)0x1404421c0L,
            (LPVOID *)&MD5ctor_MD510_user,
            (LPVOID *)&MD5ctor_MD510_next,
            (LPVOID)cast_pointer_function(MD5ctor_MD510_wrapper),
            (LPVOID)cast_pointer_function((void(MD5::*)())&MD5::ctor_MD5) },
        {   (LPVOID)0x140442600L,
            (LPVOID *)&MD5Transform12_user,
            (LPVOID *)&MD5Transform12_next,
            (LPVOID)cast_pointer_function(MD5Transform12_wrapper),
            (LPVOID)cast_pointer_function((void(MD5::*)(char*))&MD5::Transform) },
        {   (LPVOID)0x140442470L,
            (LPVOID *)&MD5Update14_user,
            (LPVOID *)&MD5Update14_next,
            (LPVOID)cast_pointer_function(MD5Update14_wrapper),
            (LPVOID)cast_pointer_function((void(MD5::*)(void*, unsigned int))&MD5::Update) },
        {   (LPVOID)0x140442200L,
            (LPVOID *)&MD5dtor_MD516_user,
            (LPVOID *)&MD5dtor_MD516_next,
            (LPVOID)cast_pointer_function(MD5dtor_MD516_wrapper),
            (LPVOID)cast_pointer_function((void(MD5::*)())&MD5::dtor_MD5) },
        
        };
        
    }; // static end namespace detail
END_ATF_NAMESPACE