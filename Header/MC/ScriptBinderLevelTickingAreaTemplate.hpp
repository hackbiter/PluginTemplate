// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class ScriptBinderLevelTickingAreaTemplate {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SCRIPTBINDERLEVELTICKINGAREATEMPLATE
public:
    class ScriptBinderLevelTickingAreaTemplate& operator=(class ScriptBinderLevelTickingAreaTemplate const&) = delete;
    ScriptBinderLevelTickingAreaTemplate(class ScriptBinderLevelTickingAreaTemplate const&) = delete;
#endif

public:
    /*0*/ virtual ~ScriptBinderLevelTickingAreaTemplate();
    /*1*/ virtual std::string const& getTemplateIdentifier() const;
    /*2*/ virtual void applyTemplate(class ScriptObjectBinder&) const;
    MCAPI ScriptBinderLevelTickingAreaTemplate();
    MCAPI static std::unique_ptr<class ScriptObjectBinder> build(class ITickingArea const&);

protected:

private:

};