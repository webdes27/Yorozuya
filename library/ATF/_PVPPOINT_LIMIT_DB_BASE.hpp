// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include "./common/common.h"


START_ATF_NAMESPACE
    #pragma pack(push, 2)
    struct  _PVPPOINT_LIMIT_DB_BASE
    {
        __int64 tUpdatedate;
        bool bUseUp;
        char byLimitRate;
        long double dOriginalPoint;
        long double dLimitPoint;
        long double dUsePoint;
    public:
        void Init()
        {
            using org_ptr = void (WINAPIV*)(struct _PVPPOINT_LIMIT_DB_BASE*);
            (org_ptr(0x140077ce0L))(this);
        };
        _PVPPOINT_LIMIT_DB_BASE()
        {
            using org_ptr = void (WINAPIV*)(struct _PVPPOINT_LIMIT_DB_BASE*);
            (org_ptr(0x1400776f0L))(this);
        };
        void ctor__PVPPOINT_LIMIT_DB_BASE()
        {
            using org_ptr = void (WINAPIV*)(struct _PVPPOINT_LIMIT_DB_BASE*);
            (org_ptr(0x1400776f0L))(this);
        };
        ~_PVPPOINT_LIMIT_DB_BASE()
        {
            using org_ptr = void (WINAPIV*)(struct _PVPPOINT_LIMIT_DB_BASE*);
            (org_ptr(0x140077750L))(this);
        };
        void dtor__PVPPOINT_LIMIT_DB_BASE()
        {
            using org_ptr = void (WINAPIV*)(struct _PVPPOINT_LIMIT_DB_BASE*);
            (org_ptr(0x140077750L))(this);
        };
    };
    #pragma pack(pop)
END_ATF_NAMESPACE