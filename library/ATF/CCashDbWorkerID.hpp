// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include "./common/common.h"
#include "CashDbWorker.hpp"
#include "_param_cash_update.hpp"


START_ATF_NAMESPACE
    struct  CCashDbWorkerID : CashDbWorker
    {
    public:
        CCashDbWorkerID()
        {
            using org_ptr = void (WINAPIV*)(struct CCashDbWorkerID*);
            (org_ptr(0x14022cca0L))(this);
        };
        void ctor_CCashDbWorkerID()
        {
            using org_ptr = void (WINAPIV*)(struct CCashDbWorkerID*);
            (org_ptr(0x14022cca0L))(this);
        };
        void GetUseCashQueryStr(struct _param_cash_update* rParam, int nIdx, char* wszQuery, uint64_t tBufferSize)
        {
            using org_ptr = void (WINAPIV*)(struct CCashDbWorkerID*, struct _param_cash_update*, int, char*, uint64_t);
            (org_ptr(0x14031fdd0L))(this, rParam, nIdx, wszQuery, tBufferSize);
        };
        ~CCashDbWorkerID()
        {
            using org_ptr = void (WINAPIV*)(struct CCashDbWorkerID*);
            (org_ptr(0x14022cd70L))(this);
        };
        void dtor_CCashDbWorkerID()
        {
            using org_ptr = void (WINAPIV*)(struct CCashDbWorkerID*);
            (org_ptr(0x14022cd70L))(this);
        };
    };
END_ATF_NAMESPACE