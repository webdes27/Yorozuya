// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include "./common/common.h"
#include "DnBuffNode.hpp"


START_ATF_NAMESPACE
    #pragma pack(push, 8)
    struct  GMRequestData : DnBuffNode
    {
        unsigned int m_dwPlayerSerial;
        unsigned int m_dwCallTimer;
        char m_wszUserName[17];
    public:
        GMRequestData()
        {
            using org_ptr = void (WINAPIV*)(struct GMRequestData*);
            (org_ptr(0x1402ab250L))(this);
        };
        void ctor_GMRequestData()
        {
            using org_ptr = void (WINAPIV*)(struct GMRequestData*);
            (org_ptr(0x1402ab250L))(this);
        };
        void Set(unsigned int dwSerial, char* pwszName, unsigned int dwTime)
        {
            using org_ptr = void (WINAPIV*)(struct GMRequestData*, unsigned int, char*, unsigned int);
            (org_ptr(0x1402ab5e0L))(this, dwSerial, pwszName, dwTime);
        };
        ~GMRequestData()
        {
            using org_ptr = void (WINAPIV*)(struct GMRequestData*);
            (org_ptr(0x1402ab510L))(this);
        };
        void dtor_GMRequestData()
        {
            using org_ptr = void (WINAPIV*)(struct GMRequestData*);
            (org_ptr(0x1402ab510L))(this);
        };
    };
    #pragma pack(pop)
END_ATF_NAMESPACE