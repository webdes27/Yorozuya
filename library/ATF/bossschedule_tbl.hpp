// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include "./common/common.h"
#include "BossSchedule_Map.hpp"


START_ATF_NAMESPACE
    struct BossSchedule_TBL
    {
        int m_nCount;
		struct BossSchedule_Map **m_MapScheduleList;
    public:
        BossSchedule_TBL()
        {
            using org_ptr = void (WINAPIV*)(struct BossSchedule_TBL*);
            (org_ptr(0x14041b790L))(this);
        };
        void ctor_BossSchedule_TBL()
        {
            using org_ptr = void (WINAPIV*)(struct BossSchedule_TBL*);
            (org_ptr(0x14041b790L))(this);
        };
        ~BossSchedule_TBL()
        {
            using org_ptr = void (WINAPIV*)(struct BossSchedule_TBL*);
            (org_ptr(0x14041b2b0L))(this);
        };
        void dtor_BossSchedule_TBL()
        {
            using org_ptr = void (WINAPIV*)(struct BossSchedule_TBL*);
            (org_ptr(0x14041b2b0L))(this);
        };
    };
END_ATF_NAMESPACE