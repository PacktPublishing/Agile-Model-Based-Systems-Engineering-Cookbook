/********************************************************************
	Rhapsody	: 8.4 
	Login		: Bruce
	Component	: Control_ResistanceSim 
	Configuration 	: Animate
	Model Element	: ControlResistanceActorPkg
//!	Generated Date	: Thu, 20, Feb 2020  
	File Path	: Control_ResistanceSim/Animate/ControlResistanceActorPkg.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "ControlResistanceActorPkg.h"
//## auto_generated
#include "aCR_Rider.h"
//## auto_generated
#include "aCR_TrainingApp.h"
//#[ ignore
#define exStartPedaling_SERIALIZE OM_NO_OP

#define exStartPedaling_UNSERIALIZE OM_NO_OP

#define exStartPedaling_CONSTRUCTOR exStartPedaling()

#define exStopPedaling_SERIALIZE OM_NO_OP

#define exStopPedaling_UNSERIALIZE OM_NO_OP

#define exStopPedaling_CONSTRUCTOR exStopPedaling()

#define exSetGear_SERIALIZE OM_NO_OP

#define exSetGear_UNSERIALIZE OM_NO_OP

#define exSetGear_CONSTRUCTOR exSetGear()

#define exSetIncline_SERIALIZE OM_NO_OP

#define exSetIncline_UNSERIALIZE OM_NO_OP

#define exSetIncline_CONSTRUCTOR exSetIncline()

#define evSendWattsPerKgToApp_SERIALIZE OMADD_SER(wpk, x2String(myEvent->wpk))

#define evSendWattsPerKgToApp_UNSERIALIZE OMADD_UNSER(RhpReal, wpk, OMDestructiveString2X)

#define evSendWattsPerKgToApp_CONSTRUCTOR evSendWattsPerKgToApp(wpk)
//#]

//## package FunctionalAnalysisPkg::ControlResistancePkg::ControlResistanceActorPkg


#ifdef _OMINSTRUMENT
static void serializeGlobalVars(AOMSAttributes* /* aomsAttributes */);

IMPLEMENT_META_PACKAGE(FunctionalAnalysisPkg_ControlResistancePkg_ControlResistanceActorPkg, FunctionalAnalysisPkg::ControlResistancePkg::ControlResistanceActorPkg)

static void serializeGlobalVars(AOMSAttributes* /* aomsAttributes */) {
}
#endif // _OMINSTRUMENT

//## event exStartPedaling()
exStartPedaling::exStartPedaling() {
    NOTIFY_EVENT_CONSTRUCTOR(exStartPedaling)
    setId(exStartPedaling_ControlResistanceActorPkg_ControlResistancePkg_FunctionalAnalysisPkg_id);
}

bool exStartPedaling::isTypeOf(const short id) const {
    return (exStartPedaling_ControlResistanceActorPkg_ControlResistancePkg_FunctionalAnalysisPkg_id==id);
}

IMPLEMENT_META_EVENT_P(exStartPedaling, FunctionalAnalysisPkg_ControlResistancePkg_ControlResistanceActorPkg, FunctionalAnalysisPkg::ControlResistancePkg::ControlResistanceActorPkg, exStartPedaling())

//## event exStopPedaling()
exStopPedaling::exStopPedaling() {
    NOTIFY_EVENT_CONSTRUCTOR(exStopPedaling)
    setId(exStopPedaling_ControlResistanceActorPkg_ControlResistancePkg_FunctionalAnalysisPkg_id);
}

bool exStopPedaling::isTypeOf(const short id) const {
    return (exStopPedaling_ControlResistanceActorPkg_ControlResistancePkg_FunctionalAnalysisPkg_id==id);
}

IMPLEMENT_META_EVENT_P(exStopPedaling, FunctionalAnalysisPkg_ControlResistancePkg_ControlResistanceActorPkg, FunctionalAnalysisPkg::ControlResistancePkg::ControlResistanceActorPkg, exStopPedaling())

//## event exSetGear()
exSetGear::exSetGear() {
    NOTIFY_EVENT_CONSTRUCTOR(exSetGear)
    setId(exSetGear_ControlResistanceActorPkg_ControlResistancePkg_FunctionalAnalysisPkg_id);
}

bool exSetGear::isTypeOf(const short id) const {
    return (exSetGear_ControlResistanceActorPkg_ControlResistancePkg_FunctionalAnalysisPkg_id==id);
}

IMPLEMENT_META_EVENT_P(exSetGear, FunctionalAnalysisPkg_ControlResistancePkg_ControlResistanceActorPkg, FunctionalAnalysisPkg::ControlResistancePkg::ControlResistanceActorPkg, exSetGear())

//## event exSetIncline()
exSetIncline::exSetIncline() {
    NOTIFY_EVENT_CONSTRUCTOR(exSetIncline)
    setId(exSetIncline_ControlResistanceActorPkg_ControlResistancePkg_FunctionalAnalysisPkg_id);
}

bool exSetIncline::isTypeOf(const short id) const {
    return (exSetIncline_ControlResistanceActorPkg_ControlResistancePkg_FunctionalAnalysisPkg_id==id);
}

IMPLEMENT_META_EVENT_P(exSetIncline, FunctionalAnalysisPkg_ControlResistancePkg_ControlResistanceActorPkg, FunctionalAnalysisPkg::ControlResistancePkg::ControlResistanceActorPkg, exSetIncline())

//## event evSendWattsPerKgToApp(Real)
evSendWattsPerKgToApp::evSendWattsPerKgToApp() {
    NOTIFY_EVENT_CONSTRUCTOR(evSendWattsPerKgToApp)
    setId(evSendWattsPerKgToApp_ControlResistanceActorPkg_ControlResistancePkg_FunctionalAnalysisPkg_id);
}

evSendWattsPerKgToApp::evSendWattsPerKgToApp(Real p_wpk) : wpk(p_wpk) {
    NOTIFY_EVENT_CONSTRUCTOR(evSendWattsPerKgToApp)
    setId(evSendWattsPerKgToApp_ControlResistanceActorPkg_ControlResistancePkg_FunctionalAnalysisPkg_id);
}

bool evSendWattsPerKgToApp::isTypeOf(const short id) const {
    return (evSendWattsPerKgToApp_ControlResistanceActorPkg_ControlResistancePkg_FunctionalAnalysisPkg_id==id);
}

IMPLEMENT_META_EVENT_P(evSendWattsPerKgToApp, FunctionalAnalysisPkg_ControlResistancePkg_ControlResistanceActorPkg, FunctionalAnalysisPkg::ControlResistancePkg::ControlResistanceActorPkg, evSendWattsPerKgToApp(Real))

/*********************************************************************
	File Path	: Control_ResistanceSim/Animate/ControlResistanceActorPkg.cpp
*********************************************************************/
