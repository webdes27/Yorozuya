// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include "./common/common.h"
#include "_post_result_zocl_info.hpp"


START_ATF_NAMESPACE
    namespace detail
    {
        static info::_post_result_zoclctor__post_result_zocl2_ptr _post_result_zoclctor__post_result_zocl2_next(nullptr);
        static info::_post_result_zoclctor__post_result_zocl2_clbk _post_result_zoclctor__post_result_zocl2_user(nullptr);
        
        static void _post_result_zoclctor__post_result_zocl2_wrapper(struct _post_result_zocl* _this)
        {
           _post_result_zoclctor__post_result_zocl2_user(_this, _post_result_zoclctor__post_result_zocl2_next);
        };
        
        static hook_record _post_result_zocl_functions[] = {
        {   (LPVOID)0x1400f0470L,
            (LPVOID *)&_post_result_zoclctor__post_result_zocl2_user,
            (LPVOID *)&_post_result_zoclctor__post_result_zocl2_next,
            (LPVOID)cast_pointer_function(_post_result_zoclctor__post_result_zocl2_wrapper),
            (LPVOID)cast_pointer_function((void(_post_result_zocl::*)())&_post_result_zocl::ctor__post_result_zocl) },
        
        };
        
    }; // static end namespace detail
END_ATF_NAMESPACE