// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include "./common/common.h"
#include "_db_cash_limited_sale.hpp"


START_ATF_NAMESPACE
    struct qry_case_cash_limsale
    {
        _db_cash_limited_sale NewSale;
        _db_cash_limited_sale OldSale;
    public:
        qry_case_cash_limsale()
        {
            using org_ptr = void (WINAPIV*)(struct qry_case_cash_limsale*);
            (org_ptr(0x140304c30L))(this);
        };
        void ctor_qry_case_cash_limsale()
        {
            using org_ptr = void (WINAPIV*)(struct qry_case_cash_limsale*);
            (org_ptr(0x140304c30L))(this);
        };
        int size()
        {
            using org_ptr = int (WINAPIV*)(struct qry_case_cash_limsale*);
            return (org_ptr(0x140304c20L))(this);
        };
    };
END_ATF_NAMESPACE