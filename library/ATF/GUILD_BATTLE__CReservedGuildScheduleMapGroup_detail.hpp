// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include "./common/common.h"
#include "GUILD_BATTLE__CReservedGuildScheduleMapGroup_info.hpp"


START_ATF_NAMESPACE
    namespace GUILD_BATTLE
    {
        namespace detail
        {
            static info::GUILD_BATTLE__CReservedGuildScheduleMapGroupctor_CReservedGuildScheduleMapGroup2_ptr GUILD_BATTLE__CReservedGuildScheduleMapGroupctor_CReservedGuildScheduleMapGroup2_next(nullptr);
            static info::GUILD_BATTLE__CReservedGuildScheduleMapGroupctor_CReservedGuildScheduleMapGroup2_clbk GUILD_BATTLE__CReservedGuildScheduleMapGroupctor_CReservedGuildScheduleMapGroup2_user(nullptr);
            static info::GUILD_BATTLE__CReservedGuildScheduleMapGroupClear4_ptr GUILD_BATTLE__CReservedGuildScheduleMapGroupClear4_next(nullptr);
            static info::GUILD_BATTLE__CReservedGuildScheduleMapGroupClear4_clbk GUILD_BATTLE__CReservedGuildScheduleMapGroupClear4_user(nullptr);
            static info::GUILD_BATTLE__CReservedGuildScheduleMapGroupFind6_ptr GUILD_BATTLE__CReservedGuildScheduleMapGroupFind6_next(nullptr);
            static info::GUILD_BATTLE__CReservedGuildScheduleMapGroupFind6_clbk GUILD_BATTLE__CReservedGuildScheduleMapGroupFind6_user(nullptr);
            static info::GUILD_BATTLE__CReservedGuildScheduleMapGroupFlip8_ptr GUILD_BATTLE__CReservedGuildScheduleMapGroupFlip8_next(nullptr);
            static info::GUILD_BATTLE__CReservedGuildScheduleMapGroupFlip8_clbk GUILD_BATTLE__CReservedGuildScheduleMapGroupFlip8_user(nullptr);
            static info::GUILD_BATTLE__CReservedGuildScheduleMapGroupGetMaxPage10_ptr GUILD_BATTLE__CReservedGuildScheduleMapGroupGetMaxPage10_next(nullptr);
            static info::GUILD_BATTLE__CReservedGuildScheduleMapGroupGetMaxPage10_clbk GUILD_BATTLE__CReservedGuildScheduleMapGroupGetMaxPage10_user(nullptr);
            static info::GUILD_BATTLE__CReservedGuildScheduleMapGroupInit12_ptr GUILD_BATTLE__CReservedGuildScheduleMapGroupInit12_next(nullptr);
            static info::GUILD_BATTLE__CReservedGuildScheduleMapGroupInit12_clbk GUILD_BATTLE__CReservedGuildScheduleMapGroupInit12_user(nullptr);
            static info::GUILD_BATTLE__CReservedGuildScheduleMapGroupLoad14_ptr GUILD_BATTLE__CReservedGuildScheduleMapGroupLoad14_next(nullptr);
            static info::GUILD_BATTLE__CReservedGuildScheduleMapGroupLoad14_clbk GUILD_BATTLE__CReservedGuildScheduleMapGroupLoad14_user(nullptr);
            static info::GUILD_BATTLE__CReservedGuildScheduleMapGroupSend16_ptr GUILD_BATTLE__CReservedGuildScheduleMapGroupSend16_next(nullptr);
            static info::GUILD_BATTLE__CReservedGuildScheduleMapGroupSend16_clbk GUILD_BATTLE__CReservedGuildScheduleMapGroupSend16_user(nullptr);
            static info::GUILD_BATTLE__CReservedGuildScheduleMapGroupdtor_CReservedGuildScheduleMapGroup20_ptr GUILD_BATTLE__CReservedGuildScheduleMapGroupdtor_CReservedGuildScheduleMapGroup20_next(nullptr);
            static info::GUILD_BATTLE__CReservedGuildScheduleMapGroupdtor_CReservedGuildScheduleMapGroup20_clbk GUILD_BATTLE__CReservedGuildScheduleMapGroupdtor_CReservedGuildScheduleMapGroup20_user(nullptr);
            
            static void GUILD_BATTLE__CReservedGuildScheduleMapGroupctor_CReservedGuildScheduleMapGroup2_wrapper(struct GUILD_BATTLE::CReservedGuildScheduleMapGroup* _this)
            {
               GUILD_BATTLE__CReservedGuildScheduleMapGroupctor_CReservedGuildScheduleMapGroup2_user(_this, GUILD_BATTLE__CReservedGuildScheduleMapGroupctor_CReservedGuildScheduleMapGroup2_next);
            };
            static bool GUILD_BATTLE__CReservedGuildScheduleMapGroupClear4_wrapper(struct GUILD_BATTLE::CReservedGuildScheduleMapGroup* _this)
            {
               return GUILD_BATTLE__CReservedGuildScheduleMapGroupClear4_user(_this, GUILD_BATTLE__CReservedGuildScheduleMapGroupClear4_next);
            };
            static struct GUILD_BATTLE::CReservedGuildSchedulePage* GUILD_BATTLE__CReservedGuildScheduleMapGroupFind6_wrapper(struct GUILD_BATTLE::CReservedGuildScheduleMapGroup* _this, unsigned int dwGuildSerial)
            {
               return GUILD_BATTLE__CReservedGuildScheduleMapGroupFind6_user(_this, dwGuildSerial, GUILD_BATTLE__CReservedGuildScheduleMapGroupFind6_next);
            };
            static void GUILD_BATTLE__CReservedGuildScheduleMapGroupFlip8_wrapper(struct GUILD_BATTLE::CReservedGuildScheduleMapGroup* _this)
            {
               GUILD_BATTLE__CReservedGuildScheduleMapGroupFlip8_user(_this, GUILD_BATTLE__CReservedGuildScheduleMapGroupFlip8_next);
            };
            static char GUILD_BATTLE__CReservedGuildScheduleMapGroupGetMaxPage10_wrapper(struct GUILD_BATTLE::CReservedGuildScheduleMapGroup* _this)
            {
               return GUILD_BATTLE__CReservedGuildScheduleMapGroupGetMaxPage10_user(_this, GUILD_BATTLE__CReservedGuildScheduleMapGroupGetMaxPage10_next);
            };
            static bool GUILD_BATTLE__CReservedGuildScheduleMapGroupInit12_wrapper(struct GUILD_BATTLE::CReservedGuildScheduleMapGroup* _this, unsigned int uiMapInx)
            {
               return GUILD_BATTLE__CReservedGuildScheduleMapGroupInit12_user(_this, uiMapInx, GUILD_BATTLE__CReservedGuildScheduleMapGroupInit12_next);
            };
            static bool GUILD_BATTLE__CReservedGuildScheduleMapGroupLoad14_wrapper(struct GUILD_BATTLE::CReservedGuildScheduleMapGroup* _this, char byDayID, struct _worlddb_guild_battle_reserved_schedule_info* kInfo)
            {
               return GUILD_BATTLE__CReservedGuildScheduleMapGroupLoad14_user(_this, byDayID, kInfo, GUILD_BATTLE__CReservedGuildScheduleMapGroupLoad14_next);
            };
            static void GUILD_BATTLE__CReservedGuildScheduleMapGroupSend16_wrapper(struct GUILD_BATTLE::CReservedGuildScheduleMapGroup* _this, int n, unsigned int dwVer, char byPage, struct GUILD_BATTLE::CReservedGuildSchedulePage* pkSelfInfoPage)
            {
               GUILD_BATTLE__CReservedGuildScheduleMapGroupSend16_user(_this, n, dwVer, byPage, pkSelfInfoPage, GUILD_BATTLE__CReservedGuildScheduleMapGroupSend16_next);
            };
            static void GUILD_BATTLE__CReservedGuildScheduleMapGroupdtor_CReservedGuildScheduleMapGroup20_wrapper(struct GUILD_BATTLE::CReservedGuildScheduleMapGroup* _this)
            {
               GUILD_BATTLE__CReservedGuildScheduleMapGroupdtor_CReservedGuildScheduleMapGroup20_user(_this, GUILD_BATTLE__CReservedGuildScheduleMapGroupdtor_CReservedGuildScheduleMapGroup20_next);
            };
            
            static hook_record CReservedGuildScheduleMapGroup_functions[] = {
            {   (LPVOID)0x1403cc340L,
                (LPVOID *)&GUILD_BATTLE__CReservedGuildScheduleMapGroupctor_CReservedGuildScheduleMapGroup2_user,
                (LPVOID *)&GUILD_BATTLE__CReservedGuildScheduleMapGroupctor_CReservedGuildScheduleMapGroup2_next,
                (LPVOID)cast_pointer_function(GUILD_BATTLE__CReservedGuildScheduleMapGroupctor_CReservedGuildScheduleMapGroup2_wrapper),
                (LPVOID)cast_pointer_function((void(GUILD_BATTLE::CReservedGuildScheduleMapGroup::*)())&GUILD_BATTLE::CReservedGuildScheduleMapGroup::ctor_CReservedGuildScheduleMapGroup) },
            {   (LPVOID)0x1403cc4c0L,
                (LPVOID *)&GUILD_BATTLE__CReservedGuildScheduleMapGroupClear4_user,
                (LPVOID *)&GUILD_BATTLE__CReservedGuildScheduleMapGroupClear4_next,
                (LPVOID)cast_pointer_function(GUILD_BATTLE__CReservedGuildScheduleMapGroupClear4_wrapper),
                (LPVOID)cast_pointer_function((bool(GUILD_BATTLE::CReservedGuildScheduleMapGroup::*)())&GUILD_BATTLE::CReservedGuildScheduleMapGroup::Clear) },
            {   (LPVOID)0x1403cca30L,
                (LPVOID *)&GUILD_BATTLE__CReservedGuildScheduleMapGroupFind6_user,
                (LPVOID *)&GUILD_BATTLE__CReservedGuildScheduleMapGroupFind6_next,
                (LPVOID)cast_pointer_function(GUILD_BATTLE__CReservedGuildScheduleMapGroupFind6_wrapper),
                (LPVOID)cast_pointer_function((struct GUILD_BATTLE::CReservedGuildSchedulePage*(GUILD_BATTLE::CReservedGuildScheduleMapGroup::*)(unsigned int))&GUILD_BATTLE::CReservedGuildScheduleMapGroup::Find) },
            {   (LPVOID)0x1403ccb50L,
                (LPVOID *)&GUILD_BATTLE__CReservedGuildScheduleMapGroupFlip8_user,
                (LPVOID *)&GUILD_BATTLE__CReservedGuildScheduleMapGroupFlip8_next,
                (LPVOID)cast_pointer_function(GUILD_BATTLE__CReservedGuildScheduleMapGroupFlip8_wrapper),
                (LPVOID)cast_pointer_function((void(GUILD_BATTLE::CReservedGuildScheduleMapGroup::*)())&GUILD_BATTLE::CReservedGuildScheduleMapGroup::Flip) },
            {   (LPVOID)0x1403d0a80L,
                (LPVOID *)&GUILD_BATTLE__CReservedGuildScheduleMapGroupGetMaxPage10_user,
                (LPVOID *)&GUILD_BATTLE__CReservedGuildScheduleMapGroupGetMaxPage10_next,
                (LPVOID)cast_pointer_function(GUILD_BATTLE__CReservedGuildScheduleMapGroupGetMaxPage10_wrapper),
                (LPVOID)cast_pointer_function((char(GUILD_BATTLE::CReservedGuildScheduleMapGroup::*)())&GUILD_BATTLE::CReservedGuildScheduleMapGroup::GetMaxPage) },
            {   (LPVOID)0x1403cc420L,
                (LPVOID *)&GUILD_BATTLE__CReservedGuildScheduleMapGroupInit12_user,
                (LPVOID *)&GUILD_BATTLE__CReservedGuildScheduleMapGroupInit12_next,
                (LPVOID)cast_pointer_function(GUILD_BATTLE__CReservedGuildScheduleMapGroupInit12_wrapper),
                (LPVOID)cast_pointer_function((bool(GUILD_BATTLE::CReservedGuildScheduleMapGroup::*)(unsigned int))&GUILD_BATTLE::CReservedGuildScheduleMapGroup::Init) },
            {   (LPVOID)0x1403cc540L,
                (LPVOID *)&GUILD_BATTLE__CReservedGuildScheduleMapGroupLoad14_user,
                (LPVOID *)&GUILD_BATTLE__CReservedGuildScheduleMapGroupLoad14_next,
                (LPVOID)cast_pointer_function(GUILD_BATTLE__CReservedGuildScheduleMapGroupLoad14_wrapper),
                (LPVOID)cast_pointer_function((bool(GUILD_BATTLE::CReservedGuildScheduleMapGroup::*)(char, struct _worlddb_guild_battle_reserved_schedule_info*))&GUILD_BATTLE::CReservedGuildScheduleMapGroup::Load) },
            {   (LPVOID)0x1403ccad0L,
                (LPVOID *)&GUILD_BATTLE__CReservedGuildScheduleMapGroupSend16_user,
                (LPVOID *)&GUILD_BATTLE__CReservedGuildScheduleMapGroupSend16_next,
                (LPVOID)cast_pointer_function(GUILD_BATTLE__CReservedGuildScheduleMapGroupSend16_wrapper),
                (LPVOID)cast_pointer_function((void(GUILD_BATTLE::CReservedGuildScheduleMapGroup::*)(int, unsigned int, char, struct GUILD_BATTLE::CReservedGuildSchedulePage*))&GUILD_BATTLE::CReservedGuildScheduleMapGroup::Send) },
            {   (LPVOID)0x1403cc3c0L,
                (LPVOID *)&GUILD_BATTLE__CReservedGuildScheduleMapGroupdtor_CReservedGuildScheduleMapGroup20_user,
                (LPVOID *)&GUILD_BATTLE__CReservedGuildScheduleMapGroupdtor_CReservedGuildScheduleMapGroup20_next,
                (LPVOID)cast_pointer_function(GUILD_BATTLE__CReservedGuildScheduleMapGroupdtor_CReservedGuildScheduleMapGroup20_wrapper),
                (LPVOID)cast_pointer_function((void(GUILD_BATTLE::CReservedGuildScheduleMapGroup::*)())&GUILD_BATTLE::CReservedGuildScheduleMapGroup::dtor_CReservedGuildScheduleMapGroup) },
            
            };
            
        }; // static end namespace detail
    }; // end namespace GUILD_BATTLE
END_ATF_NAMESPACE