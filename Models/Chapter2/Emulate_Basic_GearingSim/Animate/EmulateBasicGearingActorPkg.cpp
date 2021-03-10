/********************************************************************
	Rhapsody	: 8.4 
	Login		: Bruce
	Component	: Emulate_Basic_GearingSim 
	Configuration 	: Animate
	Model Element	: EmulateBasicGearingActorPkg
//!	Generated Date	: Fri, 27, Dec 2019  
	File Path	: Emulate_Basic_GearingSim/Animate/EmulateBasicGearingActorPkg.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "EmulateBasicGearingActorPkg.h"
//## auto_generated
#include "aEBG_Rider.h"
//## auto_generated
#include "aEBG_TrainingApp.h"
//#[ ignore
#define chResistance_SERIALIZE OM_NO_OP

#define chResistance_UNSERIALIZE OM_NO_OP

#define chResistance_CONSTRUCTOR chResistance()

#define exAugment_SERIALIZE OM_NO_OP

#define exAugment_UNSERIALIZE OM_NO_OP

#define exAugment_CONSTRUCTOR exAugment()

#define exDecrement_SERIALIZE OM_NO_OP

#define exDecrement_UNSERIALIZE OM_NO_OP

#define exDecrement_CONSTRUCTOR exDecrement()
//#]

//## package FunctionalAnalysisPkg::EmulateBasicGearingPkg::EmulateBasicGearingActorPkg


#ifdef _OMINSTRUMENT
static void serializeGlobalVars(AOMSAttributes* /* aomsAttributes */);

IMPLEMENT_META_PACKAGE(FunctionalAnalysisPkg_EmulateBasicGearingPkg_EmulateBasicGearingActorPkg, FunctionalAnalysisPkg::EmulateBasicGearingPkg::EmulateBasicGearingActorPkg)

static void serializeGlobalVars(AOMSAttributes* /* aomsAttributes */) {
}
#endif // _OMINSTRUMENT

//## event chResistance()
chResistance::chResistance() {
    NOTIFY_EVENT_CONSTRUCTOR(chResistance)
    setId(chResistance_EmulateBasicGearingActorPkg_EmulateBasicGearingPkg_FunctionalAnalysisPkg_id);
}

bool chResistance::isTypeOf(const short id) const {
    return (chResistance_EmulateBasicGearingActorPkg_EmulateBasicGearingPkg_FunctionalAnalysisPkg_id==id);
}

IMPLEMENT_META_EVENT_P(chResistance, FunctionalAnalysisPkg_EmulateBasicGearingPkg_EmulateBasicGearingActorPkg, FunctionalAnalysisPkg::EmulateBasicGearingPkg::EmulateBasicGearingActorPkg, chResistance())

//## event exAugment()
exAugment::exAugment() {
    NOTIFY_EVENT_CONSTRUCTOR(exAugment)
    setId(exAugment_EmulateBasicGearingActorPkg_EmulateBasicGearingPkg_FunctionalAnalysisPkg_id);
}

bool exAugment::isTypeOf(const short id) const {
    return (exAugment_EmulateBasicGearingActorPkg_EmulateBasicGearingPkg_FunctionalAnalysisPkg_id==id);
}

IMPLEMENT_META_EVENT_P(exAugment, FunctionalAnalysisPkg_EmulateBasicGearingPkg_EmulateBasicGearingActorPkg, FunctionalAnalysisPkg::EmulateBasicGearingPkg::EmulateBasicGearingActorPkg, exAugment())

//## event exDecrement()
exDecrement::exDecrement() {
    NOTIFY_EVENT_CONSTRUCTOR(exDecrement)
    setId(exDecrement_EmulateBasicGearingActorPkg_EmulateBasicGearingPkg_FunctionalAnalysisPkg_id);
}

bool exDecrement::isTypeOf(const short id) const {
    return (exDecrement_EmulateBasicGearingActorPkg_EmulateBasicGearingPkg_FunctionalAnalysisPkg_id==id);
}

IMPLEMENT_META_EVENT_P(exDecrement, FunctionalAnalysisPkg_EmulateBasicGearingPkg_EmulateBasicGearingActorPkg, FunctionalAnalysisPkg::EmulateBasicGearingPkg::EmulateBasicGearingActorPkg, exDecrement())

/*********************************************************************
	File Path	: Emulate_Basic_GearingSim/Animate/EmulateBasicGearingActorPkg.cpp
*********************************************************************/
