/********************************************************************
	Rhapsody	: 8.4 
	Login		: Bruce
	Component	: Emulate_Basic_GearingSim 
	Configuration 	: Animate
	Model Element	: EmulateBasicGearingPkg
//!	Generated Date	: Fri, 27, Dec 2019  
	File Path	: Emulate_Basic_GearingSim/Animate/EmulateBasicGearingPkg.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "EmulateBasicGearingPkg.h"
//## auto_generated
#include "Uc_EmulateBasicGearing.h"
//#[ ignore
#define chApplliedTorque_SERIALIZE OM_NO_OP

#define chApplliedTorque_UNSERIALIZE OM_NO_OP

#define chApplliedTorque_CONSTRUCTOR chApplliedTorque()

#define chAppliedTorque_SERIALIZE OM_NO_OP

#define chAppliedTorque_UNSERIALIZE OM_NO_OP

#define chAppliedTorque_CONSTRUCTOR chAppliedTorque()
//#]

//## package FunctionalAnalysisPkg::EmulateBasicGearingPkg


#ifdef _OMINSTRUMENT
static void serializeGlobalVars(AOMSAttributes* /* aomsAttributes */);

IMPLEMENT_META_PACKAGE(FunctionalAnalysisPkg_EmulateBasicGearingPkg, FunctionalAnalysisPkg::EmulateBasicGearingPkg)

static void serializeGlobalVars(AOMSAttributes* /* aomsAttributes */) {
}
#endif // _OMINSTRUMENT

//## event chApplliedTorque()
chApplliedTorque::chApplliedTorque() {
    NOTIFY_EVENT_CONSTRUCTOR(chApplliedTorque)
    setId(chApplliedTorque_EmulateBasicGearingPkg_FunctionalAnalysisPkg_id);
}

bool chApplliedTorque::isTypeOf(const short id) const {
    return (chApplliedTorque_EmulateBasicGearingPkg_FunctionalAnalysisPkg_id==id);
}

IMPLEMENT_META_EVENT_P(chApplliedTorque, FunctionalAnalysisPkg_EmulateBasicGearingPkg, FunctionalAnalysisPkg::EmulateBasicGearingPkg, chApplliedTorque())

//## event chAppliedTorque()
chAppliedTorque::chAppliedTorque() {
    NOTIFY_EVENT_CONSTRUCTOR(chAppliedTorque)
    setId(chAppliedTorque_EmulateBasicGearingPkg_FunctionalAnalysisPkg_id);
}

bool chAppliedTorque::isTypeOf(const short id) const {
    return (chAppliedTorque_EmulateBasicGearingPkg_FunctionalAnalysisPkg_id==id);
}

IMPLEMENT_META_EVENT_P(chAppliedTorque, FunctionalAnalysisPkg_EmulateBasicGearingPkg, FunctionalAnalysisPkg::EmulateBasicGearingPkg, chAppliedTorque())

/*********************************************************************
	File Path	: Emulate_Basic_GearingSim/Animate/EmulateBasicGearingPkg.cpp
*********************************************************************/
