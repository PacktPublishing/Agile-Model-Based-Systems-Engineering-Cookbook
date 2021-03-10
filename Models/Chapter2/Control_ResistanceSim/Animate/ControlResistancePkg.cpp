/********************************************************************
	Rhapsody	: 8.4 
	Login		: Bruce
	Component	: Control_ResistanceSim 
	Configuration 	: Animate
	Model Element	: ControlResistancePkg
//!	Generated Date	: Wed, 19, Feb 2020  
	File Path	: Control_ResistanceSim/Animate/ControlResistancePkg.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "ControlResistancePkg.h"
//## auto_generated
#include "Uc_ControlResistance.h"
//#[ ignore
#define storeIncline_SERIALIZE OM_NO_OP

#define storeIncline_UNSERIALIZE OM_NO_OP

#define storeIncline_CONSTRUCTOR storeIncline()

#define reqOff_SERIALIZE OM_NO_OP

#define reqOff_UNSERIALIZE OM_NO_OP

#define reqOff_CONSTRUCTOR reqOff()
//#]

//## package FunctionalAnalysisPkg::ControlResistancePkg


#ifdef _OMINSTRUMENT
static void serializeGlobalVars(AOMSAttributes* /* aomsAttributes */);

IMPLEMENT_META_PACKAGE(FunctionalAnalysisPkg_ControlResistancePkg, FunctionalAnalysisPkg::ControlResistancePkg)

static void serializeGlobalVars(AOMSAttributes* /* aomsAttributes */) {
}
#endif // _OMINSTRUMENT

//## event storeIncline()
storeIncline::storeIncline() {
    NOTIFY_EVENT_CONSTRUCTOR(storeIncline)
    setId(storeIncline_ControlResistancePkg_FunctionalAnalysisPkg_id);
}

bool storeIncline::isTypeOf(const short id) const {
    return (storeIncline_ControlResistancePkg_FunctionalAnalysisPkg_id==id);
}

IMPLEMENT_META_EVENT_P(storeIncline, FunctionalAnalysisPkg_ControlResistancePkg, FunctionalAnalysisPkg::ControlResistancePkg, storeIncline())

//## event reqOff()
reqOff::reqOff() {
    NOTIFY_EVENT_CONSTRUCTOR(reqOff)
    setId(reqOff_ControlResistancePkg_FunctionalAnalysisPkg_id);
}

bool reqOff::isTypeOf(const short id) const {
    return (reqOff_ControlResistancePkg_FunctionalAnalysisPkg_id==id);
}

IMPLEMENT_META_EVENT_P(reqOff, FunctionalAnalysisPkg_ControlResistancePkg, FunctionalAnalysisPkg::ControlResistancePkg, reqOff())

/*********************************************************************
	File Path	: Control_ResistanceSim/Animate/ControlResistancePkg.cpp
*********************************************************************/
