// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include "./common/common.h"
#include "./common/ATFCore.hpp"
#include "CHashMapPtrPool_detail.hpp"


START_ATF_NAMESPACE
    namespace registry
    {
        class CHashMapPtrPool<int,CNationCodeStr>_registry : public IRegistry
        {
            public: virtual void registry() {
                auto& hook_core = CATFCore::get_instance();
                for (auto& r : detail::CHashMapPtrPool<int,CNationCodeStr>_functions)
                    hook_core.reg_wrapper(r.pBind, r);
            }
        };
        
    }; // end namespace registry
END_ATF_NAMESPACE
#include "./common/ATFCore.hpp"
#include "CHashMapPtrPool_detail.hpp"


START_ATF_NAMESPACE
    namespace registry
    {
        class CHashMapPtrPool<int,CNationSettingFactory>_registry : public IRegistry
        {
            public: virtual void registry() {
                auto& hook_core = CATFCore::get_instance();
                for (auto& r : detail::CHashMapPtrPool<int,CNationSettingFactory>_functions)
                    hook_core.reg_wrapper(r.pBind, r);
            }
        };
        
    }; // end namespace registry
END_ATF_NAMESPACE