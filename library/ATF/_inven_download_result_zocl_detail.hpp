// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include "./common/common.h"
#include "_inven_download_result_zocl_info.hpp"


START_ATF_NAMESPACE
    namespace detail
    {
        static info::_inven_download_result_zoclctor__inven_download_result_zocl2_ptr _inven_download_result_zoclctor__inven_download_result_zocl2_next(nullptr);
        static info::_inven_download_result_zoclctor__inven_download_result_zocl2_clbk _inven_download_result_zoclctor__inven_download_result_zocl2_user(nullptr);
        static info::_inven_download_result_zoclsize4_ptr _inven_download_result_zoclsize4_next(nullptr);
        static info::_inven_download_result_zoclsize4_clbk _inven_download_result_zoclsize4_user(nullptr);
        
        static void _inven_download_result_zoclctor__inven_download_result_zocl2_wrapper(struct _inven_download_result_zocl* _this)
        {
           _inven_download_result_zoclctor__inven_download_result_zocl2_user(_this, _inven_download_result_zoclctor__inven_download_result_zocl2_next);
        };
        static int _inven_download_result_zoclsize4_wrapper(struct _inven_download_result_zocl* _this)
        {
           return _inven_download_result_zoclsize4_user(_this, _inven_download_result_zoclsize4_next);
        };
        
        static hook_record _inven_download_result_zocl_functions[] = {
        {   (LPVOID)0x1400ef330L,
            (LPVOID *)&_inven_download_result_zoclctor__inven_download_result_zocl2_user,
            (LPVOID *)&_inven_download_result_zoclctor__inven_download_result_zocl2_next,
            (LPVOID)cast_pointer_function(_inven_download_result_zoclctor__inven_download_result_zocl2_wrapper),
            (LPVOID)cast_pointer_function((void(_inven_download_result_zocl::*)())&_inven_download_result_zocl::ctor__inven_download_result_zocl) },
        {   (LPVOID)0x1400ef350L,
            (LPVOID *)&_inven_download_result_zoclsize4_user,
            (LPVOID *)&_inven_download_result_zoclsize4_next,
            (LPVOID)cast_pointer_function(_inven_download_result_zoclsize4_wrapper),
            (LPVOID)cast_pointer_function((int(_inven_download_result_zocl::*)())&_inven_download_result_zocl::size) },
        
        };
        
    }; // static end namespace detail
END_ATF_NAMESPACE