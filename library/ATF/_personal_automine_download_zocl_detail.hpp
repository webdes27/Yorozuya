// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include "./common/common.h"
#include "_personal_automine_download_zocl_info.hpp"


START_ATF_NAMESPACE
    namespace detail
    {
        static info::_personal_automine_download_zoclsize2_ptr _personal_automine_download_zoclsize2_next(nullptr);
        static info::_personal_automine_download_zoclsize2_clbk _personal_automine_download_zoclsize2_user(nullptr);
        
        static int _personal_automine_download_zoclsize2_wrapper(struct _personal_automine_download_zocl* _this)
        {
           return _personal_automine_download_zoclsize2_user(_this, _personal_automine_download_zoclsize2_next);
        };
        
        static hook_record _personal_automine_download_zocl_functions[] = {
        {   (LPVOID)0x1400ef3c0L,
            (LPVOID *)&_personal_automine_download_zoclsize2_user,
            (LPVOID *)&_personal_automine_download_zoclsize2_next,
            (LPVOID)cast_pointer_function(_personal_automine_download_zoclsize2_wrapper),
            (LPVOID)cast_pointer_function((int(_personal_automine_download_zocl::*)())&_personal_automine_download_zocl::size) },
        
        };
        
    }; // static end namespace detail
END_ATF_NAMESPACE