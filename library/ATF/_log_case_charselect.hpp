// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include <common/common.h>


START_ATF_NAMESPACE
    #pragma pack(push, 2)
    struct _log_case_charselect
    {
        char szID[13];
        unsigned int dwIDSerial;
        char wszName[17];
        unsigned int dwNameSerial;
        unsigned __int16 dwYear;
        char byMonth;
        char byDay;
        char byHour;
        char byMin;
        char bySec;
    public:
        int size();
    };
    #pragma pack(pop)
    static_assert(ATF::checkSize<_log_case_charselect, 0x34>(), "_log_case_charselect");
END_ATF_NAMESPACE
