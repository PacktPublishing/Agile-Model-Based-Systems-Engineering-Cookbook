/********************************************************************
	Rhapsody	: 9.0 
	Login		: Bruce
	Component	: Emulate_Basic_GearingSim 
	Configuration 	: Animate
	Model Element	: EmulateBasicGearingInterfacesPkg
//!	Generated Date	: Wed, 25, Nov 2020  
	File Path	: Emulate_Basic_GearingSim/Animate/EmulateBasicGearingInterfacesPkg.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "EmulateBasicGearingInterfacesPkg.h"
//#[ ignore
#define decrementGear_SERIALIZE OM_NO_OP

#define decrementGear_UNSERIALIZE OM_NO_OP

#define decrementGear_CONSTRUCTOR decrementGear()

#define incrementGear_SERIALIZE OM_NO_OP

#define incrementGear_UNSERIALIZE OM_NO_OP

#define incrementGear_CONSTRUCTOR incrementGear()

#define gearing_SERIALIZE OMADD_SER(gear, x2String(myEvent->gear))

#define gearing_UNSERIALIZE OMADD_UNSER(RhpReal, gear, OMDestructiveString2X)

#define gearing_CONSTRUCTOR gearing(gear)
//#]

//## package FunctionalAnalysisPkg::EmulateBasicGearingPkg::EmulateBasicGearingInterfacesPkg


#ifdef _OMINSTRUMENT
static void serializeGlobalVars(AOMSAttributes* /* aomsAttributes */);

IMPLEMENT_META_PACKAGE(FunctionalAnalysisPkg_EmulateBasicGearingPkg_EmulateBasicGearingInterfacesPkg, FunctionalAnalysisPkg::EmulateBasicGearingPkg::EmulateBasicGearingInterfacesPkg)

static void serializeGlobalVars(AOMSAttributes* /* aomsAttributes */) {
}
#endif // _OMINSTRUMENT

//## event decrementGear()
decrementGear::decrementGear() {
    NOTIFY_EVENT_CONSTRUCTOR(decrementGear)
    setId(decrementGear_EmulateBasicGearingInterfacesPkg_EmulateBasicGearingPkg_FunctionalAnalysisPkg_id);
}

bool decrementGear::isTypeOf(const short id) const {
    return (decrementGear_EmulateBasicGearingInterfacesPkg_EmulateBasicGearingPkg_FunctionalAnalysisPkg_id==id);
}

IMPLEMENT_META_EVENT_P(decrementGear, FunctionalAnalysisPkg_EmulateBasicGearingPkg_EmulateBasicGearingInterfacesPkg, FunctionalAnalysisPkg::EmulateBasicGearingPkg::EmulateBasicGearingInterfacesPkg, decrementGear())

//## event incrementGear()
incrementGear::incrementGear() {
    NOTIFY_EVENT_CONSTRUCTOR(incrementGear)
    setId(incrementGear_EmulateBasicGearingInterfacesPkg_EmulateBasicGearingPkg_FunctionalAnalysisPkg_id);
}

bool incrementGear::isTypeOf(const short id) const {
    return (incrementGear_EmulateBasicGearingInterfacesPkg_EmulateBasicGearingPkg_FunctionalAnalysisPkg_id==id);
}

IMPLEMENT_META_EVENT_P(incrementGear, FunctionalAnalysisPkg_EmulateBasicGearingPkg_EmulateBasicGearingInterfacesPkg, FunctionalAnalysisPkg::EmulateBasicGearingPkg::EmulateBasicGearingInterfacesPkg, incrementGear())

//## event gearing(Real)
gearing::gearing() {
    NOTIFY_EVENT_CONSTRUCTOR(gearing)
    setId(gearing_EmulateBasicGearingInterfacesPkg_EmulateBasicGearingPkg_FunctionalAnalysisPkg_id);
}

gearing::gearing(Real p_gear) : gear(p_gear) {
    NOTIFY_EVENT_CONSTRUCTOR(gearing)
    setId(gearing_EmulateBasicGearingInterfacesPkg_EmulateBasicGearingPkg_FunctionalAnalysisPkg_id);
}

bool gearing::isTypeOf(const short id) const {
    return (gearing_EmulateBasicGearingInterfacesPkg_EmulateBasicGearingPkg_FunctionalAnalysisPkg_id==id);
}

IMPLEMENT_META_EVENT_P(gearing, FunctionalAnalysisPkg_EmulateBasicGearingPkg_EmulateBasicGearingInterfacesPkg, FunctionalAnalysisPkg::EmulateBasicGearingPkg::EmulateBasicGearingInterfacesPkg, gearing(Real))

/*********************************************************************
	File Path	: Emulate_Basic_GearingSim/Animate/EmulateBasicGearingInterfacesPkg.cpp
*********************************************************************/
