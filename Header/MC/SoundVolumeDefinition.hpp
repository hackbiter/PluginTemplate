// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "JsonUtil.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

struct SoundVolumeDefinition {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SOUNDVOLUMEDEFINITION
public:
    struct SoundVolumeDefinition& operator=(struct SoundVolumeDefinition const&) = delete;
    SoundVolumeDefinition(struct SoundVolumeDefinition const&) = delete;
    SoundVolumeDefinition() = delete;
#endif

public:
    MCAPI void initialize(class EntityContext&);

protected:

private:

};