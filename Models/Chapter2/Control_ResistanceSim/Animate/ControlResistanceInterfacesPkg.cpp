/********************************************************************
	Rhapsody	: 8.4 
	Login		: Bruce
	Component	: Control_ResistanceSim 
	Configuration 	: Animate
	Model Element	: ControlResistanceInterfacesPkg
//!	Generated Date	: Thu, 20, Feb 2020  
	File Path	: Control_ResistanceSim/Animate/ControlResistanceInterfacesPkg.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "ControlResistanceInterfacesPkg.h"
//#[ ignore
#define reqSetGear_SERIALIZE \
    OMADD_SER(bigRing, x2String(myEvent->bigRing))\
    OMADD_SER(cassetteRing, x2String(myEvent->cassetteRing))
#define reqSetGear_UNSERIALIZE \
    OMADD_UNSER(int, bigRing, OMDestructiveString2X)\
    OMADD_UNSER(int, cassetteRing, OMDestructiveString2X)
#define reqOn_SERIALIZE OM_NO_OP

#define reqOn_UNSERIALIZE OM_NO_OP

#define reqOn_CONSTRUCTOR reqOn()

#define reqSetIncline_SERIALIZE OMADD_SER(inc, x2String(myEvent->inc))

#define reqSetIncline_UNSERIALIZE OMADD_UNSER(int, inc, OMDestructiveString2X)

#define reqSetIncline_CONSTRUCTOR reqSetIncline(inc)

#define reqSetGear_CONSTRUCTOR reqSetGear(bigRing, cassetteRing)

#define reqSetPedalPosition_SERIALIZE OMADD_SER(pos, x2String(myEvent->pos))

#define reqSetPedalPosition_UNSERIALIZE OMADD_UNSER(RhpReal, pos, OMDestructiveString2X)

#define reqSetPedalPosition_CONSTRUCTOR reqSetPedalPosition(pos)

#define reqSetPedalSpeed_SERIALIZE OMADD_SER(pSpeed, x2String(myEvent->pSpeed))

#define reqSetPedalSpeed_UNSERIALIZE OMADD_UNSER(RhpReal, pSpeed, OMDestructiveString2X)

#define reqSetPedalSpeed_CONSTRUCTOR reqSetPedalSpeed(pSpeed)

#define reqSetMeasuredPedalForce_SERIALIZE OMADD_SER(f, x2String(myEvent->f))

#define reqSetMeasuredPedalForce_UNSERIALIZE OMADD_UNSER(RhpReal, f, OMDestructiveString2X)

#define reqSetMeasuredPedalForce_CONSTRUCTOR reqSetMeasuredPedalForce(f)

#define evSendPedalCadenceToApp_SERIALIZE OMADD_SER(pCad, x2String(myEvent->pCad))

#define evSendPedalCadenceToApp_UNSERIALIZE OMADD_UNSER(RhpReal, pCad, OMDestructiveString2X)

#define evSendPedalCadenceToApp_CONSTRUCTOR evSendPedalCadenceToApp(pCad)

#define evSendFilteredPowerToApp_SERIALIZE OMADD_SER(pow, x2String(myEvent->pow))

#define evSendFilteredPowerToApp_UNSERIALIZE OMADD_UNSER(RhpReal, pow, OMDestructiveString2X)

#define evSendFilteredPowerToApp_CONSTRUCTOR evSendFilteredPowerToApp(pow)

#define evApplyResistance_SERIALIZE OMADD_SER(res, x2String(myEvent->res))

#define evApplyResistance_UNSERIALIZE OMADD_UNSER(RhpReal, res, OMDestructiveString2X)

#define evApplyResistance_CONSTRUCTOR evApplyResistance(res)

#define evSendSpeedToApp_SERIALIZE OMADD_SER(bSpeed, x2String(myEvent->bSpeed))

#define evSendSpeedToApp_UNSERIALIZE OMADD_UNSER(RhpReal, bSpeed, OMDestructiveString2X)

#define evSendSpeedToApp_CONSTRUCTOR evSendSpeedToApp(bSpeed)

#define evSendAccelerationToApp_SERIALIZE OMADD_SER(bAcceleration, x2String(myEvent->bAcceleration))

#define evSendAccelerationToApp_UNSERIALIZE OMADD_UNSER(RhpReal, bAcceleration, OMDestructiveString2X)

#define evSendAccelerationToApp_CONSTRUCTOR evSendAccelerationToApp(bAcceleration)
//#]

//## package FunctionalAnalysisPkg::ControlResistancePkg::ControlResistanceInterfacesPkg


#ifdef _OMINSTRUMENT
static void serializeGlobalVars(AOMSAttributes* /* aomsAttributes */);

IMPLEMENT_META_PACKAGE(FunctionalAnalysisPkg_ControlResistancePkg_ControlResistanceInterfacesPkg, FunctionalAnalysisPkg::ControlResistancePkg::ControlResistanceInterfacesPkg)

static void serializeGlobalVars(AOMSAttributes* /* aomsAttributes */) {
}
#endif // _OMINSTRUMENT

//## event reqOn()
reqOn::reqOn() {
    NOTIFY_EVENT_CONSTRUCTOR(reqOn)
    setId(reqOn_ControlResistanceInterfacesPkg_ControlResistancePkg_FunctionalAnalysisPkg_id);
}

bool reqOn::isTypeOf(const short id) const {
    return (reqOn_ControlResistanceInterfacesPkg_ControlResistancePkg_FunctionalAnalysisPkg_id==id);
}

IMPLEMENT_META_EVENT_P(reqOn, FunctionalAnalysisPkg_ControlResistancePkg_ControlResistanceInterfacesPkg, FunctionalAnalysisPkg::ControlResistancePkg::ControlResistanceInterfacesPkg, reqOn())

//## event reqSetIncline(int)
reqSetIncline::reqSetIncline() {
    NOTIFY_EVENT_CONSTRUCTOR(reqSetIncline)
    setId(reqSetIncline_ControlResistanceInterfacesPkg_ControlResistancePkg_FunctionalAnalysisPkg_id);
}

reqSetIncline::reqSetIncline(int p_inc) : inc(p_inc) {
    NOTIFY_EVENT_CONSTRUCTOR(reqSetIncline)
    setId(reqSetIncline_ControlResistanceInterfacesPkg_ControlResistancePkg_FunctionalAnalysisPkg_id);
}

bool reqSetIncline::isTypeOf(const short id) const {
    return (reqSetIncline_ControlResistanceInterfacesPkg_ControlResistancePkg_FunctionalAnalysisPkg_id==id);
}

IMPLEMENT_META_EVENT_P(reqSetIncline, FunctionalAnalysisPkg_ControlResistancePkg_ControlResistanceInterfacesPkg, FunctionalAnalysisPkg::ControlResistancePkg::ControlResistanceInterfacesPkg, reqSetIncline(int))

//## event reqSetGear(int,int)
reqSetGear::reqSetGear() {
    NOTIFY_EVENT_CONSTRUCTOR(reqSetGear)
    setId(reqSetGear_ControlResistanceInterfacesPkg_ControlResistancePkg_FunctionalAnalysisPkg_id);
}

reqSetGear::reqSetGear(int p_bigRing, int p_cassetteRing) : bigRing(p_bigRing),cassetteRing(p_cassetteRing) {
    NOTIFY_EVENT_CONSTRUCTOR(reqSetGear)
    setId(reqSetGear_ControlResistanceInterfacesPkg_ControlResistancePkg_FunctionalAnalysisPkg_id);
}

bool reqSetGear::isTypeOf(const short id) const {
    return (reqSetGear_ControlResistanceInterfacesPkg_ControlResistancePkg_FunctionalAnalysisPkg_id==id);
}

IMPLEMENT_META_EVENT_P(reqSetGear, FunctionalAnalysisPkg_ControlResistancePkg_ControlResistanceInterfacesPkg, FunctionalAnalysisPkg::ControlResistancePkg::ControlResistanceInterfacesPkg, reqSetGear(int,int))

//## event reqSetPedalPosition(Real)
reqSetPedalPosition::reqSetPedalPosition() {
    NOTIFY_EVENT_CONSTRUCTOR(reqSetPedalPosition)
    setId(reqSetPedalPosition_ControlResistanceInterfacesPkg_ControlResistancePkg_FunctionalAnalysisPkg_id);
}

reqSetPedalPosition::reqSetPedalPosition(Real p_pos) : pos(p_pos) {
    NOTIFY_EVENT_CONSTRUCTOR(reqSetPedalPosition)
    setId(reqSetPedalPosition_ControlResistanceInterfacesPkg_ControlResistancePkg_FunctionalAnalysisPkg_id);
}

bool reqSetPedalPosition::isTypeOf(const short id) const {
    return (reqSetPedalPosition_ControlResistanceInterfacesPkg_ControlResistancePkg_FunctionalAnalysisPkg_id==id);
}

IMPLEMENT_META_EVENT_P(reqSetPedalPosition, FunctionalAnalysisPkg_ControlResistancePkg_ControlResistanceInterfacesPkg, FunctionalAnalysisPkg::ControlResistancePkg::ControlResistanceInterfacesPkg, reqSetPedalPosition(Real))

//## event reqSetPedalSpeed(Real)
reqSetPedalSpeed::reqSetPedalSpeed() {
    NOTIFY_EVENT_CONSTRUCTOR(reqSetPedalSpeed)
    setId(reqSetPedalSpeed_ControlResistanceInterfacesPkg_ControlResistancePkg_FunctionalAnalysisPkg_id);
}

reqSetPedalSpeed::reqSetPedalSpeed(Real p_pSpeed) : pSpeed(p_pSpeed) {
    NOTIFY_EVENT_CONSTRUCTOR(reqSetPedalSpeed)
    setId(reqSetPedalSpeed_ControlResistanceInterfacesPkg_ControlResistancePkg_FunctionalAnalysisPkg_id);
}

bool reqSetPedalSpeed::isTypeOf(const short id) const {
    return (reqSetPedalSpeed_ControlResistanceInterfacesPkg_ControlResistancePkg_FunctionalAnalysisPkg_id==id);
}

IMPLEMENT_META_EVENT_P(reqSetPedalSpeed, FunctionalAnalysisPkg_ControlResistancePkg_ControlResistanceInterfacesPkg, FunctionalAnalysisPkg::ControlResistancePkg::ControlResistanceInterfacesPkg, reqSetPedalSpeed(Real))

//## event reqSetMeasuredPedalForce(Real)
reqSetMeasuredPedalForce::reqSetMeasuredPedalForce() {
    NOTIFY_EVENT_CONSTRUCTOR(reqSetMeasuredPedalForce)
    setId(reqSetMeasuredPedalForce_ControlResistanceInterfacesPkg_ControlResistancePkg_FunctionalAnalysisPkg_id);
}

reqSetMeasuredPedalForce::reqSetMeasuredPedalForce(Real p_f) : f(p_f) {
    NOTIFY_EVENT_CONSTRUCTOR(reqSetMeasuredPedalForce)
    setId(reqSetMeasuredPedalForce_ControlResistanceInterfacesPkg_ControlResistancePkg_FunctionalAnalysisPkg_id);
}

bool reqSetMeasuredPedalForce::isTypeOf(const short id) const {
    return (reqSetMeasuredPedalForce_ControlResistanceInterfacesPkg_ControlResistancePkg_FunctionalAnalysisPkg_id==id);
}

IMPLEMENT_META_EVENT_P(reqSetMeasuredPedalForce, FunctionalAnalysisPkg_ControlResistancePkg_ControlResistanceInterfacesPkg, FunctionalAnalysisPkg::ControlResistancePkg::ControlResistanceInterfacesPkg, reqSetMeasuredPedalForce(Real))

//## event evSendPedalCadenceToApp(Real)
evSendPedalCadenceToApp::evSendPedalCadenceToApp() {
    NOTIFY_EVENT_CONSTRUCTOR(evSendPedalCadenceToApp)
    setId(evSendPedalCadenceToApp_ControlResistanceInterfacesPkg_ControlResistancePkg_FunctionalAnalysisPkg_id);
}

evSendPedalCadenceToApp::evSendPedalCadenceToApp(Real p_pCad) : pCad(p_pCad) {
    NOTIFY_EVENT_CONSTRUCTOR(evSendPedalCadenceToApp)
    setId(evSendPedalCadenceToApp_ControlResistanceInterfacesPkg_ControlResistancePkg_FunctionalAnalysisPkg_id);
}

bool evSendPedalCadenceToApp::isTypeOf(const short id) const {
    return (evSendPedalCadenceToApp_ControlResistanceInterfacesPkg_ControlResistancePkg_FunctionalAnalysisPkg_id==id);
}

IMPLEMENT_META_EVENT_P(evSendPedalCadenceToApp, FunctionalAnalysisPkg_ControlResistancePkg_ControlResistanceInterfacesPkg, FunctionalAnalysisPkg::ControlResistancePkg::ControlResistanceInterfacesPkg, evSendPedalCadenceToApp(Real))

//## event evSendFilteredPowerToApp(Real)
evSendFilteredPowerToApp::evSendFilteredPowerToApp() {
    NOTIFY_EVENT_CONSTRUCTOR(evSendFilteredPowerToApp)
    setId(evSendFilteredPowerToApp_ControlResistanceInterfacesPkg_ControlResistancePkg_FunctionalAnalysisPkg_id);
}

evSendFilteredPowerToApp::evSendFilteredPowerToApp(Real p_pow) : pow(p_pow) {
    NOTIFY_EVENT_CONSTRUCTOR(evSendFilteredPowerToApp)
    setId(evSendFilteredPowerToApp_ControlResistanceInterfacesPkg_ControlResistancePkg_FunctionalAnalysisPkg_id);
}

bool evSendFilteredPowerToApp::isTypeOf(const short id) const {
    return (evSendFilteredPowerToApp_ControlResistanceInterfacesPkg_ControlResistancePkg_FunctionalAnalysisPkg_id==id);
}

IMPLEMENT_META_EVENT_P(evSendFilteredPowerToApp, FunctionalAnalysisPkg_ControlResistancePkg_ControlResistanceInterfacesPkg, FunctionalAnalysisPkg::ControlResistancePkg::ControlResistanceInterfacesPkg, evSendFilteredPowerToApp(Real))

//## event evApplyResistance(Real)
evApplyResistance::evApplyResistance() {
    NOTIFY_EVENT_CONSTRUCTOR(evApplyResistance)
    setId(evApplyResistance_ControlResistanceInterfacesPkg_ControlResistancePkg_FunctionalAnalysisPkg_id);
}

evApplyResistance::evApplyResistance(Real p_res) : res(p_res) {
    NOTIFY_EVENT_CONSTRUCTOR(evApplyResistance)
    setId(evApplyResistance_ControlResistanceInterfacesPkg_ControlResistancePkg_FunctionalAnalysisPkg_id);
}

bool evApplyResistance::isTypeOf(const short id) const {
    return (evApplyResistance_ControlResistanceInterfacesPkg_ControlResistancePkg_FunctionalAnalysisPkg_id==id);
}

IMPLEMENT_META_EVENT_P(evApplyResistance, FunctionalAnalysisPkg_ControlResistancePkg_ControlResistanceInterfacesPkg, FunctionalAnalysisPkg::ControlResistancePkg::ControlResistanceInterfacesPkg, evApplyResistance(Real))

//## event evSendSpeedToApp(Real)
evSendSpeedToApp::evSendSpeedToApp() {
    NOTIFY_EVENT_CONSTRUCTOR(evSendSpeedToApp)
    setId(evSendSpeedToApp_ControlResistanceInterfacesPkg_ControlResistancePkg_FunctionalAnalysisPkg_id);
}

evSendSpeedToApp::evSendSpeedToApp(Real p_bSpeed) : bSpeed(p_bSpeed) {
    NOTIFY_EVENT_CONSTRUCTOR(evSendSpeedToApp)
    setId(evSendSpeedToApp_ControlResistanceInterfacesPkg_ControlResistancePkg_FunctionalAnalysisPkg_id);
}

bool evSendSpeedToApp::isTypeOf(const short id) const {
    return (evSendSpeedToApp_ControlResistanceInterfacesPkg_ControlResistancePkg_FunctionalAnalysisPkg_id==id);
}

IMPLEMENT_META_EVENT_P(evSendSpeedToApp, FunctionalAnalysisPkg_ControlResistancePkg_ControlResistanceInterfacesPkg, FunctionalAnalysisPkg::ControlResistancePkg::ControlResistanceInterfacesPkg, evSendSpeedToApp(Real))

//## event evSendAccelerationToApp(Real)
evSendAccelerationToApp::evSendAccelerationToApp() {
    NOTIFY_EVENT_CONSTRUCTOR(evSendAccelerationToApp)
    setId(evSendAccelerationToApp_ControlResistanceInterfacesPkg_ControlResistancePkg_FunctionalAnalysisPkg_id);
}

evSendAccelerationToApp::evSendAccelerationToApp(Real p_bAcceleration) : bAcceleration(p_bAcceleration) {
    NOTIFY_EVENT_CONSTRUCTOR(evSendAccelerationToApp)
    setId(evSendAccelerationToApp_ControlResistanceInterfacesPkg_ControlResistancePkg_FunctionalAnalysisPkg_id);
}

bool evSendAccelerationToApp::isTypeOf(const short id) const {
    return (evSendAccelerationToApp_ControlResistanceInterfacesPkg_ControlResistancePkg_FunctionalAnalysisPkg_id==id);
}

IMPLEMENT_META_EVENT_P(evSendAccelerationToApp, FunctionalAnalysisPkg_ControlResistancePkg_ControlResistanceInterfacesPkg, FunctionalAnalysisPkg::ControlResistancePkg::ControlResistanceInterfacesPkg, evSendAccelerationToApp(Real))

/*********************************************************************
	File Path	: Control_ResistanceSim/Animate/ControlResistanceInterfacesPkg.cpp
*********************************************************************/
