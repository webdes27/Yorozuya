// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include "./common/common.h"
#include "_FILETIME.hpp"


START_ATF_NAMESPACE
    struct _BY_HANDLE_FILE_INFORMATION
    {
        unsigned int dwFileAttributes;
        _FILETIME ftCreationTime;
        _FILETIME ftLastAccessTime;
        _FILETIME ftLastWriteTime;
        unsigned int dwVolumeSerialNumber;
        unsigned int nFileSizeHigh;
        unsigned int nFileSizeLow;
        unsigned int nNumberOfLinks;
        unsigned int nFileIndexHigh;
        unsigned int nFileIndexLow;
    };
END_ATF_NAMESPACE