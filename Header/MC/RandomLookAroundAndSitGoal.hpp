// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class RandomLookAroundAndSitGoal {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_RANDOMLOOKAROUNDANDSITGOAL
public:
    class RandomLookAroundAndSitGoal& operator=(class RandomLookAroundAndSitGoal const&) = delete;
    RandomLookAroundAndSitGoal(class RandomLookAroundAndSitGoal const&) = delete;
    RandomLookAroundAndSitGoal() = delete;
#endif

public:
    /*0*/ virtual ~RandomLookAroundAndSitGoal();
    /*1*/ virtual bool canUse();
    /*2*/ virtual bool canContinueToUse();
    /*3*/ virtual void __unk_vfn_0();
    /*4*/ virtual void start();
    /*5*/ virtual void stop();
    /*6*/ virtual void tick();
    /*7*/ virtual void appendDebugInfo(std::string&) const;
    MCAPI RandomLookAroundAndSitGoal(class Mob&, int, int, int, int, float);

protected:

private:

};