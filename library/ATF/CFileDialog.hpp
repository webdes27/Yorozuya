// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include "./common/common.h"
#include "ATL__CStringT.hpp"
#include "CCommonDialog.hpp"
#include "tagOFNA.hpp"


START_ATF_NAMESPACE
    struct  CFileDialog : CCommonDialog
    {
        tagOFNA *m_pOFN;
        int m_bOpenFileDialog;
        ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char> > > m_strFilter;
        char m_szFileTitle[64];
        char m_szFileName[260];
        tagOFNA *m_pofnTemp;
    };
END_ATF_NAMESPACE