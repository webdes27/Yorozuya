// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include "./common/common.h"
#include "CPaintDC_info.hpp"


START_ATF_NAMESPACE
    namespace detail
    {
        static info::CPaintDCdtor_CPaintDC1_ptr CPaintDCdtor_CPaintDC1_next(nullptr);
        static info::CPaintDCdtor_CPaintDC1_clbk CPaintDCdtor_CPaintDC1_user(nullptr);
        
        static int64_t CPaintDCdtor_CPaintDC1_wrapper(struct CPaintDC* _this)
        {
           return CPaintDCdtor_CPaintDC1_user(_this, CPaintDCdtor_CPaintDC1_next);
        };
        
        static hook_record CPaintDC_functions[] = {
        {   (LPVOID)0x1404dbefeL,
            (LPVOID *)&CPaintDCdtor_CPaintDC1_user,
            (LPVOID *)&CPaintDCdtor_CPaintDC1_next,
            (LPVOID)cast_pointer_function(CPaintDCdtor_CPaintDC1_wrapper),
            (LPVOID)cast_pointer_function((int64_t(CPaintDC::*)())&CPaintDC::dtor_CPaintDC) },
        
        };
        
    }; // static end namespace detail
END_ATF_NAMESPACE