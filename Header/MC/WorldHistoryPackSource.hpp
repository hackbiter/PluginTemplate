// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class WorldHistoryPackSource {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_WORLDHISTORYPACKSOURCE
public:
    class WorldHistoryPackSource& operator=(class WorldHistoryPackSource const&) = delete;
    WorldHistoryPackSource(class WorldHistoryPackSource const&) = delete;
    WorldHistoryPackSource() = delete;
#endif

public:
    /*0*/ virtual ~WorldHistoryPackSource();
    /*1*/ virtual void __unk_vfn_0();
    /*2*/ virtual void __unk_vfn_1();
    /*3*/ virtual enum PackOrigin getPackOrigin() const;
    /*4*/ virtual enum PackType getPackType() const;
    /*5*/ virtual class PackSourceReport load(class IPackManifestFactory&, class IContentKeyProvider const&);
    /*
    inline void forEachPack(class std::function<void (class Pack& )> a0){
        void (WorldHistoryPackSource::*rv)(class std::function<void (class Pack& )>);
        *((void**)&rv) = dlsym("?forEachPack@WorldHistoryPackSource@@UEAAXV?$function@$$A6AXAEAVPack@@@Z@std@@@Z");
        return (this->*rv)(std::forward<class std::function<void (class Pack& )>>(a0));
    }
    inline void forEachPackConst(class std::function<void (class Pack const& )> a0) const{
        void (WorldHistoryPackSource::*rv)(class std::function<void (class Pack const& )>) const;
        *((void**)&rv) = dlsym("?forEachPackConst@WorldHistoryPackSource@@UEBAXV?$function@$$A6AXAEBVPack@@@Z@std@@@Z");
        return (this->*rv)(std::forward<class std::function<void (class Pack const& )>>(a0));
    }
    */

protected:

private:
    MCAPI void _addPackFromHistoryPack(class WorldPackHistory const&);
    MCAPI std::unique_ptr<class Pack> _createPackFromHistoryPack(class WorldPackHistory const&);
    MCAPI bool _readWorldHistoryFile();

};