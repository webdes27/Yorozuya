// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include "./common/common.h"
#include "_guild_query_info_result_zocl_info.hpp"


START_ATF_NAMESPACE
    namespace detail
    {
        static info::_guild_query_info_result_zoclClear2_ptr _guild_query_info_result_zoclClear2_next(nullptr);
        static info::_guild_query_info_result_zoclClear2_clbk _guild_query_info_result_zoclClear2_user(nullptr);
        
        static void _guild_query_info_result_zoclClear2_wrapper(struct _guild_query_info_result_zocl* _this)
        {
           _guild_query_info_result_zoclClear2_user(_this, _guild_query_info_result_zoclClear2_next);
        };
        
        static hook_record _guild_query_info_result_zocl_functions[] = {
        {   (LPVOID)0x14025d190L,
            (LPVOID *)&_guild_query_info_result_zoclClear2_user,
            (LPVOID *)&_guild_query_info_result_zoclClear2_next,
            (LPVOID)cast_pointer_function(_guild_query_info_result_zoclClear2_wrapper),
            (LPVOID)cast_pointer_function((void(_guild_query_info_result_zocl::*)())&_guild_query_info_result_zocl::Clear) },
        
        };
        
    }; // static end namespace detail
END_ATF_NAMESPACE