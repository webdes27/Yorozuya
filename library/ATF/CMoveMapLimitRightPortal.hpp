// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include "./common/common.h"
#include "CMoveMapLimitRight.hpp"
#include "CPlayer.hpp"
#include "MiningTicket.hpp"


START_ATF_NAMESPACE
    #pragma pack(push, 8)
    struct  CMoveMapLimitRightPortal : CMoveMapLimitRight
    {
        MiningTicket *m_pkRight;
        bool m_bNotifyForceMoveStartPosition;
    public:
        CMoveMapLimitRightPortal(int iType)
			: CMoveMapLimitRight(iType)
        {
            using org_ptr = void (WINAPIV*)(struct CMoveMapLimitRightPortal*, int);
            (org_ptr(0x1403ac7f0L))(this, iType);
        };
        void ctor_CMoveMapLimitRightPortal(int iType)
        {
            using org_ptr = void (WINAPIV*)(struct CMoveMapLimitRightPortal*, int);
            (org_ptr(0x1403ac7f0L))(this, iType);
        };
        void CreateComplete(struct CPlayer* pkPlayer)
        {
            using org_ptr = void (WINAPIV*)(struct CMoveMapLimitRightPortal*, struct CPlayer*);
            (org_ptr(0x1403ac890L))(this, pkPlayer);
        };
        bool IsHaveRight()
        {
            using org_ptr = bool (WINAPIV*)(struct CMoveMapLimitRightPortal*);
            return (org_ptr(0x1403ac6a0L))(this);
        };
        void Load(struct CPlayer* pkPlayer)
        {
            using org_ptr = void (WINAPIV*)(struct CMoveMapLimitRightPortal*, struct CPlayer*);
            (org_ptr(0x1403ac860L))(this, pkPlayer);
        };
        void LogOut(struct CPlayer* pkPlayer)
        {
            using org_ptr = void (WINAPIV*)(struct CMoveMapLimitRightPortal*, struct CPlayer*);
            (org_ptr(0x1403ac940L))(this, pkPlayer);
        };
        void SetFlag(int iType, bool bFlag)
        {
            using org_ptr = void (WINAPIV*)(struct CMoveMapLimitRightPortal*, int, bool);
            (org_ptr(0x1403ac790L))(this, iType, bFlag);
        };
    };
    #pragma pack(pop)
END_ATF_NAMESPACE