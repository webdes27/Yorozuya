// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include "./common/common.h"


START_ATF_NAMESPACE
    struct _param_cash_total_selling
    {
        unsigned int dwTotalSellCash;
    public:
        int size()
        {
            using org_ptr = int (WINAPIV*)(struct _param_cash_total_selling*);
            return (org_ptr(0x140304bb0L))(this);
        };
    };
END_ATF_NAMESPACE