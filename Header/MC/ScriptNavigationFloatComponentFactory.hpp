// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Scripting.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class ScriptNavigationFloatComponentFactory {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SCRIPTNAVIGATIONFLOATCOMPONENTFACTORY
public:
    class ScriptNavigationFloatComponentFactory& operator=(class ScriptNavigationFloatComponentFactory const&) = delete;
    ScriptNavigationFloatComponentFactory(class ScriptNavigationFloatComponentFactory const&) = delete;
    ScriptNavigationFloatComponentFactory() = delete;
#endif

public:
    /*0*/ virtual ~ScriptNavigationFloatComponentFactory();
    /*1*/ virtual class Scripting::StrongTypedObjectHandle<class ScriptActorComponent> createComponent(class WeakEntityRef, class Scripting::WeakLifetimeScope const&, std::string const&);
    /*2*/ virtual bool hasComponent(class WeakEntityRef) const;

protected:

private:

};