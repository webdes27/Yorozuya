// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include "./common/common.h"
#include "_PCBANG_FAVOR_ITEM_DB_BASE_info.hpp"


START_ATF_NAMESPACE
    namespace detail
    {
        static info::_PCBANG_FAVOR_ITEM_DB_BASEInit2_ptr _PCBANG_FAVOR_ITEM_DB_BASEInit2_next(nullptr);
        static info::_PCBANG_FAVOR_ITEM_DB_BASEInit2_clbk _PCBANG_FAVOR_ITEM_DB_BASEInit2_user(nullptr);
        static info::_PCBANG_FAVOR_ITEM_DB_BASEInsertItem4_ptr _PCBANG_FAVOR_ITEM_DB_BASEInsertItem4_next(nullptr);
        static info::_PCBANG_FAVOR_ITEM_DB_BASEInsertItem4_clbk _PCBANG_FAVOR_ITEM_DB_BASEInsertItem4_user(nullptr);
        static info::_PCBANG_FAVOR_ITEM_DB_BASEIsDeleteItem6_ptr _PCBANG_FAVOR_ITEM_DB_BASEIsDeleteItem6_next(nullptr);
        static info::_PCBANG_FAVOR_ITEM_DB_BASEIsDeleteItem6_clbk _PCBANG_FAVOR_ITEM_DB_BASEIsDeleteItem6_user(nullptr);
        
        static void _PCBANG_FAVOR_ITEM_DB_BASEInit2_wrapper(struct _PCBANG_FAVOR_ITEM_DB_BASE* _this)
        {
           _PCBANG_FAVOR_ITEM_DB_BASEInit2_user(_this, _PCBANG_FAVOR_ITEM_DB_BASEInit2_next);
        };
        static bool _PCBANG_FAVOR_ITEM_DB_BASEInsertItem4_wrapper(struct _PCBANG_FAVOR_ITEM_DB_BASE* _this, struct _STORAGE_LIST::_db_con* Item)
        {
           return _PCBANG_FAVOR_ITEM_DB_BASEInsertItem4_user(_this, Item, _PCBANG_FAVOR_ITEM_DB_BASEInsertItem4_next);
        };
        static bool _PCBANG_FAVOR_ITEM_DB_BASEIsDeleteItem6_wrapper(struct _PCBANG_FAVOR_ITEM_DB_BASE* _this, struct _STORAGE_LIST::_db_con* Item)
        {
           return _PCBANG_FAVOR_ITEM_DB_BASEIsDeleteItem6_user(_this, Item, _PCBANG_FAVOR_ITEM_DB_BASEIsDeleteItem6_next);
        };
        
        static hook_record _PCBANG_FAVOR_ITEM_DB_BASE_functions[] = {
        {   (LPVOID)0x140077df0L,
            (LPVOID *)&_PCBANG_FAVOR_ITEM_DB_BASEInit2_user,
            (LPVOID *)&_PCBANG_FAVOR_ITEM_DB_BASEInit2_next,
            (LPVOID)cast_pointer_function(_PCBANG_FAVOR_ITEM_DB_BASEInit2_wrapper),
            (LPVOID)cast_pointer_function((void(_PCBANG_FAVOR_ITEM_DB_BASE::*)())&_PCBANG_FAVOR_ITEM_DB_BASE::Init) },
        {   (LPVOID)0x14040cb90L,
            (LPVOID *)&_PCBANG_FAVOR_ITEM_DB_BASEInsertItem4_user,
            (LPVOID *)&_PCBANG_FAVOR_ITEM_DB_BASEInsertItem4_next,
            (LPVOID)cast_pointer_function(_PCBANG_FAVOR_ITEM_DB_BASEInsertItem4_wrapper),
            (LPVOID)cast_pointer_function((bool(_PCBANG_FAVOR_ITEM_DB_BASE::*)(struct _STORAGE_LIST::_db_con*))&_PCBANG_FAVOR_ITEM_DB_BASE::InsertItem) },
        {   (LPVOID)0x14040cc30L,
            (LPVOID *)&_PCBANG_FAVOR_ITEM_DB_BASEIsDeleteItem6_user,
            (LPVOID *)&_PCBANG_FAVOR_ITEM_DB_BASEIsDeleteItem6_next,
            (LPVOID)cast_pointer_function(_PCBANG_FAVOR_ITEM_DB_BASEIsDeleteItem6_wrapper),
            (LPVOID)cast_pointer_function((bool(_PCBANG_FAVOR_ITEM_DB_BASE::*)(struct _STORAGE_LIST::_db_con*))&_PCBANG_FAVOR_ITEM_DB_BASE::IsDeleteItem) },
        
        };
        
    }; // static end namespace detail
END_ATF_NAMESPACE