// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Scripting.hpp"
#include "ScriptObject.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class ScriptBlockPistonComponent : public ScriptObject {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SCRIPTBLOCKPISTONCOMPONENT
public:
    class ScriptBlockPistonComponent& operator=(class ScriptBlockPistonComponent const&) = delete;
    ScriptBlockPistonComponent(class ScriptBlockPistonComponent const&) = delete;
    ScriptBlockPistonComponent() = delete;
#endif

public:
    /*0*/ virtual ~ScriptBlockPistonComponent();
    /*
    inline  ~ScriptBlockPistonComponent(){
         (ScriptBlockPistonComponent::*rv)();
        *((void**)&rv) = dlsym("??1ScriptBlockPistonComponent@@UEAA@XZ");
        return (this->*rv)();
    }
    */
    MCAPI ScriptBlockPistonComponent(class ScriptBlockPistonComponent&&);
    MCAPI class Scripting::Result<std::vector<class BlockPos> > getAttachedBlocks();
    MCAPI class Scripting::Result<bool> isExpanded();
    MCAPI class Scripting::Result<bool> isExpanding();
    MCAPI class Scripting::Result<bool> isMoving();
    MCAPI class Scripting::Result<bool> isRetracted();
    MCAPI class Scripting::Result<bool> isRetracting();
    MCAPI class ScriptBlockPistonComponent& operator=(class ScriptBlockPistonComponent&&);
    MCAPI static class Scripting::ClassBindingBuilder<class ScriptBlockPistonComponent> bind(struct Scripting::Version);
    MCAPI static class Scripting::StrongTypedObjectHandle<class ScriptBlockPistonComponent> tryCreate(class BlockSource&, class BlockPos, class Scripting::WeakLifetimeScope const&);

protected:

private:

};