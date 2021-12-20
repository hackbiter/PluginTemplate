// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Scripting.hpp"
#include "ScriptObject.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class ScriptBlockInventoryComponent : public ScriptObject {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SCRIPTBLOCKINVENTORYCOMPONENT
public:
    class ScriptBlockInventoryComponent& operator=(class ScriptBlockInventoryComponent const&) = delete;
    ScriptBlockInventoryComponent(class ScriptBlockInventoryComponent const&) = delete;
    ScriptBlockInventoryComponent() = delete;
#endif

public:
    /*0*/ virtual ~ScriptBlockInventoryComponent();
    /*
    inline  ~ScriptBlockInventoryComponent(){
         (ScriptBlockInventoryComponent::*rv)();
        *((void**)&rv) = dlsym("??1ScriptBlockInventoryComponent@@UEAA@XZ");
        return (this->*rv)();
    }
    */
    MCAPI ScriptBlockInventoryComponent(class ScriptBlockInventoryComponent&&);
    MCAPI class Scripting::Result<class Scripting::StrongTypedObjectHandle<class ScriptBlockInventoryComponentContainer> > getOrCreateContainer();
    MCAPI class ScriptBlockInventoryComponent& operator=(class ScriptBlockInventoryComponent&&);
    MCAPI static class Scripting::ClassBindingBuilder<class ScriptBlockInventoryComponent> bind(struct Scripting::Version);
    MCAPI static class Scripting::StrongTypedObjectHandle<class ScriptBlockInventoryComponent> tryCreate(class BlockSource&, class BlockPos, class Scripting::WeakLifetimeScope const&);

protected:

private:

};