// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include "./common/common.h"
#include "_REGED_AVATOR_DB.hpp"
#include "_STORAGE_LIST.hpp"


START_ATF_NAMESPACE
    #pragma pack(push, 1)
    struct   _REGED : _REGED_AVATOR_DB
    {
        unsigned int m_dwFixEquipLv[8];
        unsigned int m_dwItemETSerial[8];
        unsigned __int64 m_lnUID[8];
        char m_byCsMethod[8];
        unsigned int m_dwET[8];
        unsigned int m_dwLendRegdTime[8];
    public:
        bool Release(char bySlot)
        {
            using org_ptr = bool (WINAPIV*)(struct _REGED*, char);
            return (org_ptr(0x140120660L))(this, bySlot);
        };
        bool Set(char bySlot, struct _STORAGE_LIST::_db_con* pItem)
        {
            using org_ptr = bool (WINAPIV*)(struct _REGED*, char, struct _STORAGE_LIST::_db_con*);
            return (org_ptr(0x14011fef0L))(this, bySlot, pItem);
        };
        void UpdateEquipLv()
        {
            using org_ptr = void (WINAPIV*)(struct _REGED*);
            (org_ptr(0x14011f5f0L))(this);
        };
        _REGED()
        {
            using org_ptr = void (WINAPIV*)(struct _REGED*);
            (org_ptr(0x140075420L))(this);
        };
        void ctor__REGED()
        {
            using org_ptr = void (WINAPIV*)(struct _REGED*);
            (org_ptr(0x140075420L))(this);
        };
        void init()
        {
            using org_ptr = void (WINAPIV*)(struct _REGED*);
            (org_ptr(0x1400755a0L))(this);
        };
    };
    #pragma pack(pop)
END_ATF_NAMESPACE