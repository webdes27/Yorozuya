// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include "./common/common.h"
#include "ATL__CComCriticalSection.hpp"
#include "ATL___ATL_OBJMAP_ENTRY30.hpp"
#include "HINSTANCE__.hpp"


START_ATF_NAMESPACE
    namespace ATL
    {
        struct _ATL_COM_MODULE70
        {
            unsigned int cbSize;
            HINSTANCE__ *m_hInstTypeLib;
            _ATL_OBJMAP_ENTRY30 **m_ppAutoObjMapFirst;
            _ATL_OBJMAP_ENTRY30 **m_ppAutoObjMapLast;
            CComCriticalSection m_csObjMap;
        };
    }; // end namespace ATL
END_ATF_NAMESPACE