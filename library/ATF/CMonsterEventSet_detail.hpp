// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include "./common/common.h"
#include "CMonsterEventSet_info.hpp"


START_ATF_NAMESPACE
    namespace detail
    {
        static info::CMonsterEventSetctor_CMonsterEventSet2_ptr CMonsterEventSetctor_CMonsterEventSet2_next(nullptr);
        static info::CMonsterEventSetctor_CMonsterEventSet2_clbk CMonsterEventSetctor_CMonsterEventSet2_user(nullptr);
        static info::CMonsterEventSetCheckEventSetRespawn4_ptr CMonsterEventSetCheckEventSetRespawn4_next(nullptr);
        static info::CMonsterEventSetCheckEventSetRespawn4_clbk CMonsterEventSetCheckEventSetRespawn4_user(nullptr);
        static info::CMonsterEventSetGetEmptyEventSet6_ptr CMonsterEventSetGetEmptyEventSet6_next(nullptr);
        static info::CMonsterEventSetGetEmptyEventSet6_clbk CMonsterEventSetGetEmptyEventSet6_user(nullptr);
        static info::CMonsterEventSetGetEvenSetLooting8_ptr CMonsterEventSetGetEvenSetLooting8_next(nullptr);
        static info::CMonsterEventSetGetEvenSetLooting8_clbk CMonsterEventSetGetEvenSetLooting8_user(nullptr);
        static info::CMonsterEventSetGetMonsterSet10_ptr CMonsterEventSetGetMonsterSet10_next(nullptr);
        static info::CMonsterEventSetGetMonsterSet10_clbk CMonsterEventSetGetMonsterSet10_user(nullptr);
        static info::CMonsterEventSetIsINIFileChanged12_ptr CMonsterEventSetIsINIFileChanged12_next(nullptr);
        static info::CMonsterEventSetIsINIFileChanged12_clbk CMonsterEventSetIsINIFileChanged12_user(nullptr);
        static info::CMonsterEventSetLoadEventSet14_ptr CMonsterEventSetLoadEventSet14_next(nullptr);
        static info::CMonsterEventSetLoadEventSet14_clbk CMonsterEventSetLoadEventSet14_user(nullptr);
        static info::CMonsterEventSetLoadEventSetLooting16_ptr CMonsterEventSetLoadEventSetLooting16_next(nullptr);
        static info::CMonsterEventSetLoadEventSetLooting16_clbk CMonsterEventSetLoadEventSetLooting16_user(nullptr);
        static info::CMonsterEventSetStartEventSet18_ptr CMonsterEventSetStartEventSet18_next(nullptr);
        static info::CMonsterEventSetStartEventSet18_clbk CMonsterEventSetStartEventSet18_user(nullptr);
        static info::CMonsterEventSetStopEventSet20_ptr CMonsterEventSetStopEventSet20_next(nullptr);
        static info::CMonsterEventSetStopEventSet20_clbk CMonsterEventSetStopEventSet20_user(nullptr);
        static info::CMonsterEventSetdtor_CMonsterEventSet25_ptr CMonsterEventSetdtor_CMonsterEventSet25_next(nullptr);
        static info::CMonsterEventSetdtor_CMonsterEventSet25_clbk CMonsterEventSetdtor_CMonsterEventSet25_user(nullptr);
        
        static void CMonsterEventSetctor_CMonsterEventSet2_wrapper(struct CMonsterEventSet* _this)
        {
           CMonsterEventSetctor_CMonsterEventSet2_user(_this, CMonsterEventSetctor_CMonsterEventSet2_next);
        };
        static void CMonsterEventSetCheckEventSetRespawn4_wrapper(struct CMonsterEventSet* _this)
        {
           CMonsterEventSetCheckEventSetRespawn4_user(_this, CMonsterEventSetCheckEventSetRespawn4_next);
        };
        static struct _event_set* CMonsterEventSetGetEmptyEventSet6_wrapper(struct CMonsterEventSet* _this)
        {
           return CMonsterEventSetGetEmptyEventSet6_user(_this, CMonsterEventSetGetEmptyEventSet6_next);
        };
        static struct _event_set_looting* CMonsterEventSetGetEvenSetLooting8_wrapper(struct CMonsterEventSet* _this, char* pszCode)
        {
           return CMonsterEventSetGetEvenSetLooting8_user(_this, pszCode, CMonsterEventSetGetEvenSetLooting8_next);
        };
        static struct _event_set::_monster_set* CMonsterEventSetGetMonsterSet10_wrapper(struct CMonsterEventSet* _this, struct _event_set* pEventSet)
        {
           return CMonsterEventSetGetMonsterSet10_user(_this, pEventSet, CMonsterEventSetGetMonsterSet10_next);
        };
        static bool CMonsterEventSetIsINIFileChanged12_wrapper(struct CMonsterEventSet* _this, char* pszFileName, struct _FILETIME ftCurr)
        {
           return CMonsterEventSetIsINIFileChanged12_user(_this, pszFileName, ftCurr, CMonsterEventSetIsINIFileChanged12_next);
        };
        static bool CMonsterEventSetLoadEventSet14_wrapper(struct CMonsterEventSet* _this, char* pwszErrCode)
        {
           return CMonsterEventSetLoadEventSet14_user(_this, pwszErrCode, CMonsterEventSetLoadEventSet14_next);
        };
        static bool CMonsterEventSetLoadEventSetLooting16_wrapper(struct CMonsterEventSet* _this)
        {
           return CMonsterEventSetLoadEventSetLooting16_user(_this, CMonsterEventSetLoadEventSetLooting16_next);
        };
        static bool CMonsterEventSetStartEventSet18_wrapper(struct CMonsterEventSet* _this, char* pszEventCode, char* pwszErrCode, struct CPlayer* pOne)
        {
           return CMonsterEventSetStartEventSet18_user(_this, pszEventCode, pwszErrCode, pOne, CMonsterEventSetStartEventSet18_next);
        };
        static bool CMonsterEventSetStopEventSet20_wrapper(struct CMonsterEventSet* _this, char* pszEventCode, char* pwszErrCode)
        {
           return CMonsterEventSetStopEventSet20_user(_this, pszEventCode, pwszErrCode, CMonsterEventSetStopEventSet20_next);
        };
        static void CMonsterEventSetdtor_CMonsterEventSet25_wrapper(struct CMonsterEventSet* _this)
        {
           CMonsterEventSetdtor_CMonsterEventSet25_user(_this, CMonsterEventSetdtor_CMonsterEventSet25_next);
        };
        
        static hook_record CMonsterEventSet_functions[] = {
        {   (LPVOID)0x1402a7920L,
            (LPVOID *)&CMonsterEventSetctor_CMonsterEventSet2_user,
            (LPVOID *)&CMonsterEventSetctor_CMonsterEventSet2_next,
            (LPVOID)cast_pointer_function(CMonsterEventSetctor_CMonsterEventSet2_wrapper),
            (LPVOID)cast_pointer_function((void(CMonsterEventSet::*)())&CMonsterEventSet::ctor_CMonsterEventSet) },
        {   (LPVOID)0x1402a8a90L,
            (LPVOID *)&CMonsterEventSetCheckEventSetRespawn4_user,
            (LPVOID *)&CMonsterEventSetCheckEventSetRespawn4_next,
            (LPVOID)cast_pointer_function(CMonsterEventSetCheckEventSetRespawn4_wrapper),
            (LPVOID)cast_pointer_function((void(CMonsterEventSet::*)())&CMonsterEventSet::CheckEventSetRespawn) },
        {   (LPVOID)0x1402a8fa0L,
            (LPVOID *)&CMonsterEventSetGetEmptyEventSet6_user,
            (LPVOID *)&CMonsterEventSetGetEmptyEventSet6_next,
            (LPVOID)cast_pointer_function(CMonsterEventSetGetEmptyEventSet6_wrapper),
            (LPVOID)cast_pointer_function((struct _event_set*(CMonsterEventSet::*)())&CMonsterEventSet::GetEmptyEventSet) },
        {   (LPVOID)0x1402a90b0L,
            (LPVOID *)&CMonsterEventSetGetEvenSetLooting8_user,
            (LPVOID *)&CMonsterEventSetGetEvenSetLooting8_next,
            (LPVOID)cast_pointer_function(CMonsterEventSetGetEvenSetLooting8_wrapper),
            (LPVOID)cast_pointer_function((struct _event_set_looting*(CMonsterEventSet::*)(char*))&CMonsterEventSet::GetEvenSetLooting) },
        {   (LPVOID)0x1402a9030L,
            (LPVOID *)&CMonsterEventSetGetMonsterSet10_user,
            (LPVOID *)&CMonsterEventSetGetMonsterSet10_next,
            (LPVOID)cast_pointer_function(CMonsterEventSetGetMonsterSet10_wrapper),
            (LPVOID)cast_pointer_function((struct _event_set::_monster_set*(CMonsterEventSet::*)(struct _event_set*))&CMonsterEventSet::GetMonsterSet) },
        {   (LPVOID)0x1402a9150L,
            (LPVOID *)&CMonsterEventSetIsINIFileChanged12_user,
            (LPVOID *)&CMonsterEventSetIsINIFileChanged12_next,
            (LPVOID)cast_pointer_function(CMonsterEventSetIsINIFileChanged12_wrapper),
            (LPVOID)cast_pointer_function((bool(CMonsterEventSet::*)(char*, struct _FILETIME))&CMonsterEventSet::IsINIFileChanged) },
        {   (LPVOID)0x1402a79e0L,
            (LPVOID *)&CMonsterEventSetLoadEventSet14_user,
            (LPVOID *)&CMonsterEventSetLoadEventSet14_next,
            (LPVOID)cast_pointer_function(CMonsterEventSetLoadEventSet14_wrapper),
            (LPVOID)cast_pointer_function((bool(CMonsterEventSet::*)(char*))&CMonsterEventSet::LoadEventSet) },
        {   (LPVOID)0x1402a91e0L,
            (LPVOID *)&CMonsterEventSetLoadEventSetLooting16_user,
            (LPVOID *)&CMonsterEventSetLoadEventSetLooting16_next,
            (LPVOID)cast_pointer_function(CMonsterEventSetLoadEventSetLooting16_wrapper),
            (LPVOID)cast_pointer_function((bool(CMonsterEventSet::*)())&CMonsterEventSet::LoadEventSetLooting) },
        {   (LPVOID)0x1402a8210L,
            (LPVOID *)&CMonsterEventSetStartEventSet18_user,
            (LPVOID *)&CMonsterEventSetStartEventSet18_next,
            (LPVOID)cast_pointer_function(CMonsterEventSetStartEventSet18_wrapper),
            (LPVOID)cast_pointer_function((bool(CMonsterEventSet::*)(char*, char*, struct CPlayer*))&CMonsterEventSet::StartEventSet) },
        {   (LPVOID)0x1402a8870L,
            (LPVOID *)&CMonsterEventSetStopEventSet20_user,
            (LPVOID *)&CMonsterEventSetStopEventSet20_next,
            (LPVOID)cast_pointer_function(CMonsterEventSetStopEventSet20_wrapper),
            (LPVOID)cast_pointer_function((bool(CMonsterEventSet::*)(char*, char*))&CMonsterEventSet::StopEventSet) },
        {   (LPVOID)0x1402a79c0L,
            (LPVOID *)&CMonsterEventSetdtor_CMonsterEventSet25_user,
            (LPVOID *)&CMonsterEventSetdtor_CMonsterEventSet25_next,
            (LPVOID)cast_pointer_function(CMonsterEventSetdtor_CMonsterEventSet25_wrapper),
            (LPVOID)cast_pointer_function((void(CMonsterEventSet::*)())&CMonsterEventSet::dtor_CMonsterEventSet) },
        
        };
        
    }; // static end namespace detail
END_ATF_NAMESPACE