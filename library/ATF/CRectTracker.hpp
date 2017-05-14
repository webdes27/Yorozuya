// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include "./common/common.h"
#include "CRect.hpp"
#include "CRectTrackerVtbl.hpp"
#include "CSize.hpp"


START_ATF_NAMESPACE
    #pragma pack(push, 8)
    struct CRectTracker
    {
        enum StyleFlags
        {
            solidLine = 0x1,
            dottedLine = 0x2,
            hatchedBorder = 0x4,
            resizeInside = 0x8,
            resizeOutside = 0x10,
            hatchInside = 0x20,
        };
        enum TrackerHit
        {
            hitNothing = 0xFFFFFFFF,
            hitTopLeft = 0x0,
            hitTopRight = 0x1,
            hitBottomRight = 0x2,
            hitBottomLeft = 0x3,
            hitTop = 0x4,
            hitRight = 0x5,
            hitBottom = 0x6,
            hitLeft = 0x7,
            hitMiddle = 0x8,
        };
        CRectTrackerVtbl *vfptr;
        unsigned int m_nStyle;
        CRect m_rect;
        CSize m_sizeMin;
        int m_nHandleSize;
        int m_bAllowInvert;
        CRect m_rectLast;
        CSize m_sizeLast;
        int m_bErase;
        int m_bFinalErase;
    };
    #pragma pack(pop)
END_ATF_NAMESPACE