// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include "./common/common.h"


START_ATF_NAMESPACE
    struct _chat_multi_far_trans_zocl
    {
        unsigned __int16 wSize;
        char sData[500];
    public:
        _chat_multi_far_trans_zocl()
        {
            using org_ptr = void (WINAPIV*)(struct _chat_multi_far_trans_zocl*);
            (org_ptr(0x140095150L))(this);
        };
        void ctor__chat_multi_far_trans_zocl()
        {
            using org_ptr = void (WINAPIV*)(struct _chat_multi_far_trans_zocl*);
            (org_ptr(0x140095150L))(this);
        };
        int size()
        {
            using org_ptr = int (WINAPIV*)(struct _chat_multi_far_trans_zocl*);
            return (org_ptr(0x140095170L))(this);
        };
    };
END_ATF_NAMESPACE