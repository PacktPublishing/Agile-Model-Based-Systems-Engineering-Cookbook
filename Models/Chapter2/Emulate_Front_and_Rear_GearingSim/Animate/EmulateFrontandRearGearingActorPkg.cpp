/********************************************************************
	Rhapsody	: 8.4 
	Login		: Bruce
	Component	: Emulate_Front_and_Rear_GearingSim 
	Configuration 	: Animate
	Model Element	: EmulateFrontandRearGearingActorPkg
//!	Generated Date	: Mon, 2, Mar 2020  
	File Path	: Emulate_Front_and_Rear_GearingSim/Animate/EmulateFrontandRearGearingActorPkg.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "EmulateFrontandRearGearingActorPkg.h"
//## auto_generated
#include "aEFRG_Rider.h"
//## auto_generated
#include "aEFRG_TrainingApp.h"
//#[ ignore
#define evCurrentGearing_SERIALIZE \
    OMADD_SER(front, x2String(myEvent->front))\
    OMADD_SER(rear, x2String(myEvent->rear))
#define evCurrentGearing_UNSERIALIZE \
    OMADD_UNSER(unsigned int, front, OMDestructiveString2X)\
    OMADD_UNSER(unsigned int, rear, OMDestructiveString2X)
#define evInitialSettings_SERIALIZE \
    OMADD_SER(chainRings, x2String(myEvent->chainRings))\
    OMADD_SER(cassetteRings, x2String(myEvent->cassetteRings))
#define evInitialSettings_UNSERIALIZE \
    OMADD_UNSER(unsigned int, chainRings, OMDestructiveString2X)\
    OMADD_UNSER(unsigned int, cassetteRings, OMDestructiveString2X)
#define exConfigure_SERIALIZE OM_NO_OP

#define exConfigure_UNSERIALIZE OM_NO_OP

#define exConfigure_CONSTRUCTOR exConfigure()

#define exDoneConfiguring_SERIALIZE OM_NO_OP

#define exDoneConfiguring_UNSERIALIZE OM_NO_OP

#define exDoneConfiguring_CONSTRUCTOR exDoneConfiguring()

#define exSetNChainRings_SERIALIZE OM_NO_OP

#define exSetNChainRings_UNSERIALIZE OM_NO_OP

#define exSetNChainRings_CONSTRUCTOR exSetNChainRings()

#define exSetChainRing_SERIALIZE OM_NO_OP

#define exSetChainRing_UNSERIALIZE OM_NO_OP

#define exSetChainRing_CONSTRUCTOR exSetChainRing()

#define exSetNCassetteRings_SERIALIZE OM_NO_OP

#define exSetNCassetteRings_UNSERIALIZE OM_NO_OP

#define exSetNCassetteRings_CONSTRUCTOR exSetNCassetteRings()

#define exSetCassetteRing_SERIALIZE OM_NO_OP

#define exSetCassetteRing_UNSERIALIZE OM_NO_OP

#define exSetCassetteRing_CONSTRUCTOR exSetCassetteRing()

#define exBeginRiding_SERIALIZE OM_NO_OP

#define exBeginRiding_UNSERIALIZE OM_NO_OP

#define exBeginRiding_CONSTRUCTOR exBeginRiding()

#define exDoneRiding_SERIALIZE OM_NO_OP

#define exDoneRiding_UNSERIALIZE OM_NO_OP

#define exDoneRiding_CONSTRUCTOR exDoneRiding()

#define exAugFront_SERIALIZE OM_NO_OP

#define exAugFront_UNSERIALIZE OM_NO_OP

#define exAugFront_CONSTRUCTOR exAugFront()

#define exDecFront_SERIALIZE OM_NO_OP

#define exDecFront_UNSERIALIZE OM_NO_OP

#define exDecFront_CONSTRUCTOR exDecFront()

#define exAugRear_SERIALIZE OM_NO_OP

#define exAugRear_UNSERIALIZE OM_NO_OP

#define exAugRear_CONSTRUCTOR exAugRear()

#define exDecRear_SERIALIZE OM_NO_OP

#define exDecRear_UNSERIALIZE OM_NO_OP

#define exDecRear_CONSTRUCTOR exDecRear()

#define evCurrentGearing_CONSTRUCTOR evCurrentGearing(front, rear)

#define exShowGearing_SERIALIZE OM_NO_OP

#define exShowGearing_UNSERIALIZE OM_NO_OP

#define exShowGearing_CONSTRUCTOR exShowGearing()

#define evInitialSettings_CONSTRUCTOR evInitialSettings(chainRings, cassetteRings)
//#]

//## package FunctionalAnalysisPkg::EmulateFrontandRearGearingPkg::EmulateFrontandRearGearingActorPkg


#ifdef _OMINSTRUMENT
static void serializeGlobalVars(AOMSAttributes* /* aomsAttributes */);

IMPLEMENT_META_PACKAGE(FunctionalAnalysisPkg_EmulateFrontandRearGearingPkg_EmulateFrontandRearGearingActorPkg, FunctionalAnalysisPkg::EmulateFrontandRearGearingPkg::EmulateFrontandRearGearingActorPkg)

static void serializeGlobalVars(AOMSAttributes* /* aomsAttributes */) {
}
#endif // _OMINSTRUMENT

//## event exConfigure()
exConfigure::exConfigure() {
    NOTIFY_EVENT_CONSTRUCTOR(exConfigure)
    setId(exConfigure_EmulateFrontandRearGearingActorPkg_EmulateFrontandRearGearingPkg_FunctionalAnalysisPkg_id);
}

bool exConfigure::isTypeOf(const short id) const {
    return (exConfigure_EmulateFrontandRearGearingActorPkg_EmulateFrontandRearGearingPkg_FunctionalAnalysisPkg_id==id);
}

IMPLEMENT_META_EVENT_P(exConfigure, FunctionalAnalysisPkg_EmulateFrontandRearGearingPkg_EmulateFrontandRearGearingActorPkg, FunctionalAnalysisPkg::EmulateFrontandRearGearingPkg::EmulateFrontandRearGearingActorPkg, exConfigure())

//## event exDoneConfiguring()
exDoneConfiguring::exDoneConfiguring() {
    NOTIFY_EVENT_CONSTRUCTOR(exDoneConfiguring)
    setId(exDoneConfiguring_EmulateFrontandRearGearingActorPkg_EmulateFrontandRearGearingPkg_FunctionalAnalysisPkg_id);
}

bool exDoneConfiguring::isTypeOf(const short id) const {
    return (exDoneConfiguring_EmulateFrontandRearGearingActorPkg_EmulateFrontandRearGearingPkg_FunctionalAnalysisPkg_id==id);
}

IMPLEMENT_META_EVENT_P(exDoneConfiguring, FunctionalAnalysisPkg_EmulateFrontandRearGearingPkg_EmulateFrontandRearGearingActorPkg, FunctionalAnalysisPkg::EmulateFrontandRearGearingPkg::EmulateFrontandRearGearingActorPkg, exDoneConfiguring())

//## event exSetNChainRings()
exSetNChainRings::exSetNChainRings() {
    NOTIFY_EVENT_CONSTRUCTOR(exSetNChainRings)
    setId(exSetNChainRings_EmulateFrontandRearGearingActorPkg_EmulateFrontandRearGearingPkg_FunctionalAnalysisPkg_id);
}

bool exSetNChainRings::isTypeOf(const short id) const {
    return (exSetNChainRings_EmulateFrontandRearGearingActorPkg_EmulateFrontandRearGearingPkg_FunctionalAnalysisPkg_id==id);
}

IMPLEMENT_META_EVENT_P(exSetNChainRings, FunctionalAnalysisPkg_EmulateFrontandRearGearingPkg_EmulateFrontandRearGearingActorPkg, FunctionalAnalysisPkg::EmulateFrontandRearGearingPkg::EmulateFrontandRearGearingActorPkg, exSetNChainRings())

//## event exSetChainRing()
exSetChainRing::exSetChainRing() {
    NOTIFY_EVENT_CONSTRUCTOR(exSetChainRing)
    setId(exSetChainRing_EmulateFrontandRearGearingActorPkg_EmulateFrontandRearGearingPkg_FunctionalAnalysisPkg_id);
}

bool exSetChainRing::isTypeOf(const short id) const {
    return (exSetChainRing_EmulateFrontandRearGearingActorPkg_EmulateFrontandRearGearingPkg_FunctionalAnalysisPkg_id==id);
}

IMPLEMENT_META_EVENT_P(exSetChainRing, FunctionalAnalysisPkg_EmulateFrontandRearGearingPkg_EmulateFrontandRearGearingActorPkg, FunctionalAnalysisPkg::EmulateFrontandRearGearingPkg::EmulateFrontandRearGearingActorPkg, exSetChainRing())

//## event exSetNCassetteRings()
exSetNCassetteRings::exSetNCassetteRings() {
    NOTIFY_EVENT_CONSTRUCTOR(exSetNCassetteRings)
    setId(exSetNCassetteRings_EmulateFrontandRearGearingActorPkg_EmulateFrontandRearGearingPkg_FunctionalAnalysisPkg_id);
}

bool exSetNCassetteRings::isTypeOf(const short id) const {
    return (exSetNCassetteRings_EmulateFrontandRearGearingActorPkg_EmulateFrontandRearGearingPkg_FunctionalAnalysisPkg_id==id);
}

IMPLEMENT_META_EVENT_P(exSetNCassetteRings, FunctionalAnalysisPkg_EmulateFrontandRearGearingPkg_EmulateFrontandRearGearingActorPkg, FunctionalAnalysisPkg::EmulateFrontandRearGearingPkg::EmulateFrontandRearGearingActorPkg, exSetNCassetteRings())

//## event exSetCassetteRing()
exSetCassetteRing::exSetCassetteRing() {
    NOTIFY_EVENT_CONSTRUCTOR(exSetCassetteRing)
    setId(exSetCassetteRing_EmulateFrontandRearGearingActorPkg_EmulateFrontandRearGearingPkg_FunctionalAnalysisPkg_id);
}

bool exSetCassetteRing::isTypeOf(const short id) const {
    return (exSetCassetteRing_EmulateFrontandRearGearingActorPkg_EmulateFrontandRearGearingPkg_FunctionalAnalysisPkg_id==id);
}

IMPLEMENT_META_EVENT_P(exSetCassetteRing, FunctionalAnalysisPkg_EmulateFrontandRearGearingPkg_EmulateFrontandRearGearingActorPkg, FunctionalAnalysisPkg::EmulateFrontandRearGearingPkg::EmulateFrontandRearGearingActorPkg, exSetCassetteRing())

//## event exBeginRiding()
exBeginRiding::exBeginRiding() {
    NOTIFY_EVENT_CONSTRUCTOR(exBeginRiding)
    setId(exBeginRiding_EmulateFrontandRearGearingActorPkg_EmulateFrontandRearGearingPkg_FunctionalAnalysisPkg_id);
}

bool exBeginRiding::isTypeOf(const short id) const {
    return (exBeginRiding_EmulateFrontandRearGearingActorPkg_EmulateFrontandRearGearingPkg_FunctionalAnalysisPkg_id==id);
}

IMPLEMENT_META_EVENT_P(exBeginRiding, FunctionalAnalysisPkg_EmulateFrontandRearGearingPkg_EmulateFrontandRearGearingActorPkg, FunctionalAnalysisPkg::EmulateFrontandRearGearingPkg::EmulateFrontandRearGearingActorPkg, exBeginRiding())

//## event exDoneRiding()
exDoneRiding::exDoneRiding() {
    NOTIFY_EVENT_CONSTRUCTOR(exDoneRiding)
    setId(exDoneRiding_EmulateFrontandRearGearingActorPkg_EmulateFrontandRearGearingPkg_FunctionalAnalysisPkg_id);
}

bool exDoneRiding::isTypeOf(const short id) const {
    return (exDoneRiding_EmulateFrontandRearGearingActorPkg_EmulateFrontandRearGearingPkg_FunctionalAnalysisPkg_id==id);
}

IMPLEMENT_META_EVENT_P(exDoneRiding, FunctionalAnalysisPkg_EmulateFrontandRearGearingPkg_EmulateFrontandRearGearingActorPkg, FunctionalAnalysisPkg::EmulateFrontandRearGearingPkg::EmulateFrontandRearGearingActorPkg, exDoneRiding())

//## event exAugFront()
exAugFront::exAugFront() {
    NOTIFY_EVENT_CONSTRUCTOR(exAugFront)
    setId(exAugFront_EmulateFrontandRearGearingActorPkg_EmulateFrontandRearGearingPkg_FunctionalAnalysisPkg_id);
}

bool exAugFront::isTypeOf(const short id) const {
    return (exAugFront_EmulateFrontandRearGearingActorPkg_EmulateFrontandRearGearingPkg_FunctionalAnalysisPkg_id==id);
}

IMPLEMENT_META_EVENT_P(exAugFront, FunctionalAnalysisPkg_EmulateFrontandRearGearingPkg_EmulateFrontandRearGearingActorPkg, FunctionalAnalysisPkg::EmulateFrontandRearGearingPkg::EmulateFrontandRearGearingActorPkg, exAugFront())

//## event exDecFront()
exDecFront::exDecFront() {
    NOTIFY_EVENT_CONSTRUCTOR(exDecFront)
    setId(exDecFront_EmulateFrontandRearGearingActorPkg_EmulateFrontandRearGearingPkg_FunctionalAnalysisPkg_id);
}

bool exDecFront::isTypeOf(const short id) const {
    return (exDecFront_EmulateFrontandRearGearingActorPkg_EmulateFrontandRearGearingPkg_FunctionalAnalysisPkg_id==id);
}

IMPLEMENT_META_EVENT_P(exDecFront, FunctionalAnalysisPkg_EmulateFrontandRearGearingPkg_EmulateFrontandRearGearingActorPkg, FunctionalAnalysisPkg::EmulateFrontandRearGearingPkg::EmulateFrontandRearGearingActorPkg, exDecFront())

//## event exAugRear()
exAugRear::exAugRear() {
    NOTIFY_EVENT_CONSTRUCTOR(exAugRear)
    setId(exAugRear_EmulateFrontandRearGearingActorPkg_EmulateFrontandRearGearingPkg_FunctionalAnalysisPkg_id);
}

bool exAugRear::isTypeOf(const short id) const {
    return (exAugRear_EmulateFrontandRearGearingActorPkg_EmulateFrontandRearGearingPkg_FunctionalAnalysisPkg_id==id);
}

IMPLEMENT_META_EVENT_P(exAugRear, FunctionalAnalysisPkg_EmulateFrontandRearGearingPkg_EmulateFrontandRearGearingActorPkg, FunctionalAnalysisPkg::EmulateFrontandRearGearingPkg::EmulateFrontandRearGearingActorPkg, exAugRear())

//## event exDecRear()
exDecRear::exDecRear() {
    NOTIFY_EVENT_CONSTRUCTOR(exDecRear)
    setId(exDecRear_EmulateFrontandRearGearingActorPkg_EmulateFrontandRearGearingPkg_FunctionalAnalysisPkg_id);
}

bool exDecRear::isTypeOf(const short id) const {
    return (exDecRear_EmulateFrontandRearGearingActorPkg_EmulateFrontandRearGearingPkg_FunctionalAnalysisPkg_id==id);
}

IMPLEMENT_META_EVENT_P(exDecRear, FunctionalAnalysisPkg_EmulateFrontandRearGearingPkg_EmulateFrontandRearGearingActorPkg, FunctionalAnalysisPkg::EmulateFrontandRearGearingPkg::EmulateFrontandRearGearingActorPkg, exDecRear())

//## event evCurrentGearing(unsigned int,unsigned int)
evCurrentGearing::evCurrentGearing() {
    NOTIFY_EVENT_CONSTRUCTOR(evCurrentGearing)
    setId(evCurrentGearing_EmulateFrontandRearGearingActorPkg_EmulateFrontandRearGearingPkg_FunctionalAnalysisPkg_id);
}

evCurrentGearing::evCurrentGearing(unsigned int p_front, unsigned int p_rear) : front(p_front),rear(p_rear) {
    NOTIFY_EVENT_CONSTRUCTOR(evCurrentGearing)
    setId(evCurrentGearing_EmulateFrontandRearGearingActorPkg_EmulateFrontandRearGearingPkg_FunctionalAnalysisPkg_id);
}

bool evCurrentGearing::isTypeOf(const short id) const {
    return (evCurrentGearing_EmulateFrontandRearGearingActorPkg_EmulateFrontandRearGearingPkg_FunctionalAnalysisPkg_id==id);
}

IMPLEMENT_META_EVENT_P(evCurrentGearing, FunctionalAnalysisPkg_EmulateFrontandRearGearingPkg_EmulateFrontandRearGearingActorPkg, FunctionalAnalysisPkg::EmulateFrontandRearGearingPkg::EmulateFrontandRearGearingActorPkg, evCurrentGearing(unsigned int,unsigned int))

//## event exShowGearing()
exShowGearing::exShowGearing() {
    NOTIFY_EVENT_CONSTRUCTOR(exShowGearing)
    setId(exShowGearing_EmulateFrontandRearGearingActorPkg_EmulateFrontandRearGearingPkg_FunctionalAnalysisPkg_id);
}

bool exShowGearing::isTypeOf(const short id) const {
    return (exShowGearing_EmulateFrontandRearGearingActorPkg_EmulateFrontandRearGearingPkg_FunctionalAnalysisPkg_id==id);
}

IMPLEMENT_META_EVENT_P(exShowGearing, FunctionalAnalysisPkg_EmulateFrontandRearGearingPkg_EmulateFrontandRearGearingActorPkg, FunctionalAnalysisPkg::EmulateFrontandRearGearingPkg::EmulateFrontandRearGearingActorPkg, exShowGearing())

//## event evInitialSettings(unsigned int,unsigned int)
evInitialSettings::evInitialSettings() {
    NOTIFY_EVENT_CONSTRUCTOR(evInitialSettings)
    setId(evInitialSettings_EmulateFrontandRearGearingActorPkg_EmulateFrontandRearGearingPkg_FunctionalAnalysisPkg_id);
}

evInitialSettings::evInitialSettings(unsigned int p_chainRings, unsigned int p_cassetteRings) : chainRings(p_chainRings),cassetteRings(p_cassetteRings) {
    NOTIFY_EVENT_CONSTRUCTOR(evInitialSettings)
    setId(evInitialSettings_EmulateFrontandRearGearingActorPkg_EmulateFrontandRearGearingPkg_FunctionalAnalysisPkg_id);
}

bool evInitialSettings::isTypeOf(const short id) const {
    return (evInitialSettings_EmulateFrontandRearGearingActorPkg_EmulateFrontandRearGearingPkg_FunctionalAnalysisPkg_id==id);
}

IMPLEMENT_META_EVENT_P(evInitialSettings, FunctionalAnalysisPkg_EmulateFrontandRearGearingPkg_EmulateFrontandRearGearingActorPkg, FunctionalAnalysisPkg::EmulateFrontandRearGearingPkg::EmulateFrontandRearGearingActorPkg, evInitialSettings(unsigned int,unsigned int))

/*********************************************************************
	File Path	: Emulate_Front_and_Rear_GearingSim/Animate/EmulateFrontandRearGearingActorPkg.cpp
*********************************************************************/
