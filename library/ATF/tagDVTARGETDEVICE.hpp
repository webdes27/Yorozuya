// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include "./common/common.h"


START_ATF_NAMESPACE
    #pragma pack(push, 4)
    struct tagDVTARGETDEVICE
    {
        unsigned int tdSize;
        unsigned __int16 tdDriverNameOffset;
        unsigned __int16 tdDeviceNameOffset;
        unsigned __int16 tdPortNameOffset;
        unsigned __int16 tdExtDevmodeOffset;
        char tdData[1];
    };
    #pragma pack(pop)
END_ATF_NAMESPACE