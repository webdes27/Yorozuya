// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include "./common/common.h"
#include "CObject.hpp"
#include "HDC__.hpp"


START_ATF_NAMESPACE
    #pragma pack(push, 8)
    struct  CDC : CObject
    {
        HDC__ *m_hDC;
        HDC__ *m_hAttribDC;
        int m_bPrinting;
    };
    #pragma pack(pop)
END_ATF_NAMESPACE