// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include "./common/common.h"


START_ATF_NAMESPACE
    struct _IMAGE_SEPARATE_DEBUG_HEADER
    {
        unsigned __int16 Signature;
        unsigned __int16 Flags;
        unsigned __int16 Machine;
        unsigned __int16 Characteristics;
        unsigned int TimeDateStamp;
        unsigned int CheckSum;
        unsigned int ImageBase;
        unsigned int SizeOfImage;
        unsigned int NumberOfSections;
        unsigned int ExportedNamesSize;
        unsigned int DebugDirectorySize;
        unsigned int SectionAlignment;
        unsigned int Reserved[2];
    };
END_ATF_NAMESPACE