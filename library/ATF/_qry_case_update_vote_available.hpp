// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include "./common/common.h"


START_ATF_NAMESPACE
    #pragma pack(push, 4)
    struct _qry_case_update_vote_available
    {
        char byVoteEnable;
        unsigned int dwAccountSerial;
        unsigned int dwCharSerial;
        char wszCharName[17];
    public:
        int size()
        {
            using org_ptr = int (WINAPIV*)(struct _qry_case_update_vote_available*);
            return (org_ptr(0x14007e130L))(this);
        };
    };
    #pragma pack(pop)
END_ATF_NAMESPACE