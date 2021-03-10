/********************************************************************
	Rhapsody	: 8.4 
	Login		: Bruce
	Component	: Emulate_Front_and_Rear_GearingSim 
	Configuration 	: Animate
	Model Element	: EmulateFrontandRearGearingPkg
//!	Generated Date	: Mon, 2, Mar 2020  
	File Path	: Emulate_Front_and_Rear_GearingSim/Animate/EmulateFrontandRearGearingPkg.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "EmulateFrontandRearGearingPkg.h"
//## auto_generated
#include "Uc_EmulateFrontandRearGearing.h"
//#[ ignore
#define evSetCassetteRingTeeth_SERIALIZE \
    OMADD_SER(cr, x2String(myEvent->cr))\
    OMADD_SER(teeth, x2String(myEvent->teeth))
#define evSetCassetteRingTeeth_UNSERIALIZE \
    OMADD_UNSER(unsigned int, cr, OMDestructiveString2X)\
    OMADD_UNSER(unsigned int, teeth, OMDestructiveString2X)
#define evSetChainRingTeeth_SERIALIZE \
    OMADD_SER(cr, x2String(myEvent->cr))\
    OMADD_SER(teeth, x2String(myEvent->teeth))
#define evSetChainRingTeeth_UNSERIALIZE \
    OMADD_UNSER(unsigned int, cr, OMDestructiveString2X)\
    OMADD_UNSER(unsigned int, teeth, OMDestructiveString2X)
#define evConfigureGearing_SERIALIZE OM_NO_OP

#define evConfigureGearing_UNSERIALIZE OM_NO_OP

#define evConfigureGearing_CONSTRUCTOR evConfigureGearing()

#define evDoneConfiguring_SERIALIZE OM_NO_OP

#define evDoneConfiguring_UNSERIALIZE OM_NO_OP

#define evDoneConfiguring_CONSTRUCTOR evDoneConfiguring()

#define evBeginRiding_SERIALIZE OM_NO_OP

#define evBeginRiding_UNSERIALIZE OM_NO_OP

#define evBeginRiding_CONSTRUCTOR evBeginRiding()

#define evDoneRiding_SERIALIZE OM_NO_OP

#define evDoneRiding_UNSERIALIZE OM_NO_OP

#define evDoneRiding_CONSTRUCTOR evDoneRiding()

#define evSetNumberOfChainRings_SERIALIZE OMADD_SER(n, x2String(myEvent->n))

#define evSetNumberOfChainRings_UNSERIALIZE OMADD_UNSER(unsigned int, n, OMDestructiveString2X)

#define evSetNumberOfChainRings_CONSTRUCTOR evSetNumberOfChainRings(n)

#define evSetNumberOfCassetteRings_SERIALIZE OMADD_SER(n, x2String(myEvent->n))

#define evSetNumberOfCassetteRings_UNSERIALIZE OMADD_UNSER(unsigned int, n, OMDestructiveString2X)

#define evSetNumberOfCassetteRings_CONSTRUCTOR evSetNumberOfCassetteRings(n)

#define evSetCassetteRingTeeth_CONSTRUCTOR evSetCassetteRingTeeth(cr, teeth)

#define evAugmentFrontGear_SERIALIZE OM_NO_OP

#define evAugmentFrontGear_UNSERIALIZE OM_NO_OP

#define evAugmentFrontGear_CONSTRUCTOR evAugmentFrontGear()

#define evDecrementFrontGear_SERIALIZE OM_NO_OP

#define evDecrementFrontGear_UNSERIALIZE OM_NO_OP

#define evDecrementFrontGear_CONSTRUCTOR evDecrementFrontGear()

#define evAugmentRearGear_SERIALIZE OM_NO_OP

#define evAugmentRearGear_UNSERIALIZE OM_NO_OP

#define evAugmentRearGear_CONSTRUCTOR evAugmentRearGear()

#define evDecrementRearGear_SERIALIZE OM_NO_OP

#define evDecrementRearGear_UNSERIALIZE OM_NO_OP

#define evDecrementRearGear_CONSTRUCTOR evDecrementRearGear()

#define evSetChainRingTeeth_CONSTRUCTOR evSetChainRingTeeth(cr, teeth)

#define evShowGearing_SERIALIZE OM_NO_OP

#define evShowGearing_UNSERIALIZE OM_NO_OP

#define evShowGearing_CONSTRUCTOR evShowGearing()
//#]

//## package FunctionalAnalysisPkg::EmulateFrontandRearGearingPkg


#ifdef _OMINSTRUMENT
static void serializeGlobalVars(AOMSAttributes* /* aomsAttributes */);

IMPLEMENT_META_PACKAGE(FunctionalAnalysisPkg_EmulateFrontandRearGearingPkg, FunctionalAnalysisPkg::EmulateFrontandRearGearingPkg)

static void serializeGlobalVars(AOMSAttributes* /* aomsAttributes */) {
}
#endif // _OMINSTRUMENT

//## event evConfigureGearing()
evConfigureGearing::evConfigureGearing() {
    NOTIFY_EVENT_CONSTRUCTOR(evConfigureGearing)
    setId(evConfigureGearing_EmulateFrontandRearGearingPkg_FunctionalAnalysisPkg_id);
}

bool evConfigureGearing::isTypeOf(const short id) const {
    return (evConfigureGearing_EmulateFrontandRearGearingPkg_FunctionalAnalysisPkg_id==id);
}

IMPLEMENT_META_EVENT_P(evConfigureGearing, FunctionalAnalysisPkg_EmulateFrontandRearGearingPkg, FunctionalAnalysisPkg::EmulateFrontandRearGearingPkg, evConfigureGearing())

//## event evDoneConfiguring()
evDoneConfiguring::evDoneConfiguring() {
    NOTIFY_EVENT_CONSTRUCTOR(evDoneConfiguring)
    setId(evDoneConfiguring_EmulateFrontandRearGearingPkg_FunctionalAnalysisPkg_id);
}

bool evDoneConfiguring::isTypeOf(const short id) const {
    return (evDoneConfiguring_EmulateFrontandRearGearingPkg_FunctionalAnalysisPkg_id==id);
}

IMPLEMENT_META_EVENT_P(evDoneConfiguring, FunctionalAnalysisPkg_EmulateFrontandRearGearingPkg, FunctionalAnalysisPkg::EmulateFrontandRearGearingPkg, evDoneConfiguring())

//## event evBeginRiding()
evBeginRiding::evBeginRiding() {
    NOTIFY_EVENT_CONSTRUCTOR(evBeginRiding)
    setId(evBeginRiding_EmulateFrontandRearGearingPkg_FunctionalAnalysisPkg_id);
}

bool evBeginRiding::isTypeOf(const short id) const {
    return (evBeginRiding_EmulateFrontandRearGearingPkg_FunctionalAnalysisPkg_id==id);
}

IMPLEMENT_META_EVENT_P(evBeginRiding, FunctionalAnalysisPkg_EmulateFrontandRearGearingPkg, FunctionalAnalysisPkg::EmulateFrontandRearGearingPkg, evBeginRiding())

//## event evDoneRiding()
evDoneRiding::evDoneRiding() {
    NOTIFY_EVENT_CONSTRUCTOR(evDoneRiding)
    setId(evDoneRiding_EmulateFrontandRearGearingPkg_FunctionalAnalysisPkg_id);
}

bool evDoneRiding::isTypeOf(const short id) const {
    return (evDoneRiding_EmulateFrontandRearGearingPkg_FunctionalAnalysisPkg_id==id);
}

IMPLEMENT_META_EVENT_P(evDoneRiding, FunctionalAnalysisPkg_EmulateFrontandRearGearingPkg, FunctionalAnalysisPkg::EmulateFrontandRearGearingPkg, evDoneRiding())

//## event evSetNumberOfChainRings(unsigned int)
evSetNumberOfChainRings::evSetNumberOfChainRings() {
    NOTIFY_EVENT_CONSTRUCTOR(evSetNumberOfChainRings)
    setId(evSetNumberOfChainRings_EmulateFrontandRearGearingPkg_FunctionalAnalysisPkg_id);
}

evSetNumberOfChainRings::evSetNumberOfChainRings(unsigned int p_n) : n(p_n) {
    NOTIFY_EVENT_CONSTRUCTOR(evSetNumberOfChainRings)
    setId(evSetNumberOfChainRings_EmulateFrontandRearGearingPkg_FunctionalAnalysisPkg_id);
}

bool evSetNumberOfChainRings::isTypeOf(const short id) const {
    return (evSetNumberOfChainRings_EmulateFrontandRearGearingPkg_FunctionalAnalysisPkg_id==id);
}

IMPLEMENT_META_EVENT_P(evSetNumberOfChainRings, FunctionalAnalysisPkg_EmulateFrontandRearGearingPkg, FunctionalAnalysisPkg::EmulateFrontandRearGearingPkg, evSetNumberOfChainRings(unsigned int))

//## event evSetNumberOfCassetteRings(unsigned int)
evSetNumberOfCassetteRings::evSetNumberOfCassetteRings() {
    NOTIFY_EVENT_CONSTRUCTOR(evSetNumberOfCassetteRings)
    setId(evSetNumberOfCassetteRings_EmulateFrontandRearGearingPkg_FunctionalAnalysisPkg_id);
}

evSetNumberOfCassetteRings::evSetNumberOfCassetteRings(unsigned int p_n) : n(p_n) {
    NOTIFY_EVENT_CONSTRUCTOR(evSetNumberOfCassetteRings)
    setId(evSetNumberOfCassetteRings_EmulateFrontandRearGearingPkg_FunctionalAnalysisPkg_id);
}

bool evSetNumberOfCassetteRings::isTypeOf(const short id) const {
    return (evSetNumberOfCassetteRings_EmulateFrontandRearGearingPkg_FunctionalAnalysisPkg_id==id);
}

IMPLEMENT_META_EVENT_P(evSetNumberOfCassetteRings, FunctionalAnalysisPkg_EmulateFrontandRearGearingPkg, FunctionalAnalysisPkg::EmulateFrontandRearGearingPkg, evSetNumberOfCassetteRings(unsigned int))

//## event evSetCassetteRingTeeth(unsigned int,unsigned int)
evSetCassetteRingTeeth::evSetCassetteRingTeeth() {
    NOTIFY_EVENT_CONSTRUCTOR(evSetCassetteRingTeeth)
    setId(evSetCassetteRingTeeth_EmulateFrontandRearGearingPkg_FunctionalAnalysisPkg_id);
}

evSetCassetteRingTeeth::evSetCassetteRingTeeth(unsigned int p_cr, unsigned int p_teeth) : cr(p_cr),teeth(p_teeth) {
    NOTIFY_EVENT_CONSTRUCTOR(evSetCassetteRingTeeth)
    setId(evSetCassetteRingTeeth_EmulateFrontandRearGearingPkg_FunctionalAnalysisPkg_id);
}

bool evSetCassetteRingTeeth::isTypeOf(const short id) const {
    return (evSetCassetteRingTeeth_EmulateFrontandRearGearingPkg_FunctionalAnalysisPkg_id==id);
}

IMPLEMENT_META_EVENT_P(evSetCassetteRingTeeth, FunctionalAnalysisPkg_EmulateFrontandRearGearingPkg, FunctionalAnalysisPkg::EmulateFrontandRearGearingPkg, evSetCassetteRingTeeth(unsigned int,unsigned int))

//## event evAugmentFrontGear()
evAugmentFrontGear::evAugmentFrontGear() {
    NOTIFY_EVENT_CONSTRUCTOR(evAugmentFrontGear)
    setId(evAugmentFrontGear_EmulateFrontandRearGearingPkg_FunctionalAnalysisPkg_id);
}

bool evAugmentFrontGear::isTypeOf(const short id) const {
    return (evAugmentFrontGear_EmulateFrontandRearGearingPkg_FunctionalAnalysisPkg_id==id);
}

IMPLEMENT_META_EVENT_P(evAugmentFrontGear, FunctionalAnalysisPkg_EmulateFrontandRearGearingPkg, FunctionalAnalysisPkg::EmulateFrontandRearGearingPkg, evAugmentFrontGear())

//## event evDecrementFrontGear()
evDecrementFrontGear::evDecrementFrontGear() {
    NOTIFY_EVENT_CONSTRUCTOR(evDecrementFrontGear)
    setId(evDecrementFrontGear_EmulateFrontandRearGearingPkg_FunctionalAnalysisPkg_id);
}

bool evDecrementFrontGear::isTypeOf(const short id) const {
    return (evDecrementFrontGear_EmulateFrontandRearGearingPkg_FunctionalAnalysisPkg_id==id);
}

IMPLEMENT_META_EVENT_P(evDecrementFrontGear, FunctionalAnalysisPkg_EmulateFrontandRearGearingPkg, FunctionalAnalysisPkg::EmulateFrontandRearGearingPkg, evDecrementFrontGear())

//## event evAugmentRearGear()
evAugmentRearGear::evAugmentRearGear() {
    NOTIFY_EVENT_CONSTRUCTOR(evAugmentRearGear)
    setId(evAugmentRearGear_EmulateFrontandRearGearingPkg_FunctionalAnalysisPkg_id);
}

bool evAugmentRearGear::isTypeOf(const short id) const {
    return (evAugmentRearGear_EmulateFrontandRearGearingPkg_FunctionalAnalysisPkg_id==id);
}

IMPLEMENT_META_EVENT_P(evAugmentRearGear, FunctionalAnalysisPkg_EmulateFrontandRearGearingPkg, FunctionalAnalysisPkg::EmulateFrontandRearGearingPkg, evAugmentRearGear())

//## event evDecrementRearGear()
evDecrementRearGear::evDecrementRearGear() {
    NOTIFY_EVENT_CONSTRUCTOR(evDecrementRearGear)
    setId(evDecrementRearGear_EmulateFrontandRearGearingPkg_FunctionalAnalysisPkg_id);
}

bool evDecrementRearGear::isTypeOf(const short id) const {
    return (evDecrementRearGear_EmulateFrontandRearGearingPkg_FunctionalAnalysisPkg_id==id);
}

IMPLEMENT_META_EVENT_P(evDecrementRearGear, FunctionalAnalysisPkg_EmulateFrontandRearGearingPkg, FunctionalAnalysisPkg::EmulateFrontandRearGearingPkg, evDecrementRearGear())

//## event evSetChainRingTeeth(unsigned int,unsigned int)
evSetChainRingTeeth::evSetChainRingTeeth() {
    NOTIFY_EVENT_CONSTRUCTOR(evSetChainRingTeeth)
    setId(evSetChainRingTeeth_EmulateFrontandRearGearingPkg_FunctionalAnalysisPkg_id);
}

evSetChainRingTeeth::evSetChainRingTeeth(unsigned int p_cr, unsigned int p_teeth) : cr(p_cr),teeth(p_teeth) {
    NOTIFY_EVENT_CONSTRUCTOR(evSetChainRingTeeth)
    setId(evSetChainRingTeeth_EmulateFrontandRearGearingPkg_FunctionalAnalysisPkg_id);
}

bool evSetChainRingTeeth::isTypeOf(const short id) const {
    return (evSetChainRingTeeth_EmulateFrontandRearGearingPkg_FunctionalAnalysisPkg_id==id);
}

IMPLEMENT_META_EVENT_P(evSetChainRingTeeth, FunctionalAnalysisPkg_EmulateFrontandRearGearingPkg, FunctionalAnalysisPkg::EmulateFrontandRearGearingPkg, evSetChainRingTeeth(unsigned int,unsigned int))

//## event evShowGearing()
evShowGearing::evShowGearing() {
    NOTIFY_EVENT_CONSTRUCTOR(evShowGearing)
    setId(evShowGearing_EmulateFrontandRearGearingPkg_FunctionalAnalysisPkg_id);
}

bool evShowGearing::isTypeOf(const short id) const {
    return (evShowGearing_EmulateFrontandRearGearingPkg_FunctionalAnalysisPkg_id==id);
}

IMPLEMENT_META_EVENT_P(evShowGearing, FunctionalAnalysisPkg_EmulateFrontandRearGearingPkg, FunctionalAnalysisPkg::EmulateFrontandRearGearingPkg, evShowGearing())

/*********************************************************************
	File Path	: Emulate_Front_and_Rear_GearingSim/Animate/EmulateFrontandRearGearingPkg.cpp
*********************************************************************/
