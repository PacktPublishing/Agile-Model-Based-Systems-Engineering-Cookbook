/********************************************************************
	Rhapsody	: 9.0 
	Login		: Bruce
	Component	: GearShiftingTestComponent 
	Configuration 	: GSC_Test_Animation
	Model Element	: RiderInteractionDesignPkg
//!	Generated Date	: Sat, 28, Nov 2020  
	File Path	: GearShiftingTestComponent/GSC_Test_Animation/RiderInteractionDesignPkg.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "RiderInteractionDesignPkg.h"
//## auto_generated
#include "DIButton.h"
//## auto_generated
#include "GearControl.h"
//## auto_generated
#include "MainComputingPlatform.h"
//## auto_generated
#include "Pegasus_System.h"
//## auto_generated
#include "RiderApplication.h"
//## auto_generated
#include "RiderInteraction.h"
//## auto_generated
#include "ShiftLever.h"
//#[ ignore
#define evDisplayGearing_SERIALIZE \
    OMADD_SER(chainRingIndex, x2String(myEvent->chainRingIndex))\
    OMADD_SER(cassetteRingIndex, x2String(myEvent->cassetteRingIndex))
#define evDisplayGearing_UNSERIALIZE \
    OMADD_UNSER(int, chainRingIndex, OMDestructiveString2X)\
    OMADD_UNSER(int, cassetteRingIndex, OMDestructiveString2X)
#define evLeftShiftUp_SERIALIZE OM_NO_OP

#define evLeftShiftUp_UNSERIALIZE OM_NO_OP

#define evLeftShiftUp_CONSTRUCTOR evLeftShiftUp()

#define evLeftShiftDown_SERIALIZE OM_NO_OP

#define evLeftShiftDown_UNSERIALIZE OM_NO_OP

#define evLeftShiftDown_CONSTRUCTOR evLeftShiftDown()

#define evRightShiftUp_SERIALIZE OM_NO_OP

#define evRightShiftUp_UNSERIALIZE OM_NO_OP

#define evRightShiftUp_CONSTRUCTOR evRightShiftUp()

#define evRightShiftDown_SERIALIZE OM_NO_OP

#define evRightShiftDown_UNSERIALIZE OM_NO_OP

#define evRightShiftDown_CONSTRUCTOR evRightShiftDown()

#define evDIUp_SERIALIZE OM_NO_OP

#define evDIUp_UNSERIALIZE OM_NO_OP

#define evDIUp_CONSTRUCTOR evDIUp()

#define evDIDown_SERIALIZE OM_NO_OP

#define evDIDown_UNSERIALIZE OM_NO_OP

#define evDIDown_CONSTRUCTOR evDIDown()

#define evMechanicalShifting_SERIALIZE OM_NO_OP

#define evMechanicalShifting_UNSERIALIZE OM_NO_OP

#define evMechanicalShifting_CONSTRUCTOR evMechanicalShifting()

#define evDIShifting_SERIALIZE OM_NO_OP

#define evDIShifting_UNSERIALIZE OM_NO_OP

#define evDIShifting_CONSTRUCTOR evDIShifting()

#define evShiftDown_SERIALIZE OMADD_SER(isLeftButton, x2String(myEvent->isLeftButton))

#define evShiftDown_UNSERIALIZE OMADD_UNSER(bool, isLeftButton, OMDestructiveString2X)

#define evShiftDown_CONSTRUCTOR evShiftDown(isLeftButton)

#define evStart_SERIALIZE OM_NO_OP

#define evStart_UNSERIALIZE OM_NO_OP

#define evStart_CONSTRUCTOR evStart()

#define evUp_SERIALIZE OM_NO_OP

#define evUp_UNSERIALIZE OM_NO_OP

#define evUp_CONSTRUCTOR evUp()

#define evDown_SERIALIZE OM_NO_OP

#define evDown_UNSERIALIZE OM_NO_OP

#define evDown_CONSTRUCTOR evDown()

#define evShiftUp_SERIALIZE OMADD_SER(isLeftButton, x2String(myEvent->isLeftButton))

#define evShiftUp_UNSERIALIZE OMADD_UNSER(bool, isLeftButton, OMDestructiveString2X)

#define evShiftUp_CONSTRUCTOR evShiftUp(isLeftButton)

#define evPress_SERIALIZE OM_NO_OP

#define evPress_UNSERIALIZE OM_NO_OP

#define evPress_CONSTRUCTOR evPress()

#define evDiShift_SERIALIZE OMADD_SER(isUpButton, x2String(myEvent->isUpButton))

#define evDiShift_UNSERIALIZE OMADD_UNSER(bool, isUpButton, OMDestructiveString2X)

#define evDiShift_CONSTRUCTOR evDiShift(isUpButton)

#define evDisplayGearing_CONSTRUCTOR evDisplayGearing(chainRingIndex, cassetteRingIndex)
//#]

//## package DesignSynthesisPkg::RiderInteractionDesignPkg


#ifdef _OMINSTRUMENT
static void serializeGlobalVars(AOMSAttributes* /* aomsAttributes */);

IMPLEMENT_META_PACKAGE(DesignSynthesisPkg_RiderInteractionDesignPkg, DesignSynthesisPkg::RiderInteractionDesignPkg)

static void serializeGlobalVars(AOMSAttributes* /* aomsAttributes */) {
}
#endif // _OMINSTRUMENT

//## event evLeftShiftUp()
evLeftShiftUp::evLeftShiftUp() {
    NOTIFY_EVENT_CONSTRUCTOR(evLeftShiftUp)
    setId(evLeftShiftUp_RiderInteractionDesignPkg_DesignSynthesisPkg_id);
}

bool evLeftShiftUp::isTypeOf(const short id) const {
    return (evLeftShiftUp_RiderInteractionDesignPkg_DesignSynthesisPkg_id==id);
}

IMPLEMENT_META_EVENT_P(evLeftShiftUp, DesignSynthesisPkg_RiderInteractionDesignPkg, DesignSynthesisPkg::RiderInteractionDesignPkg, evLeftShiftUp())

//## event evLeftShiftDown()
evLeftShiftDown::evLeftShiftDown() {
    NOTIFY_EVENT_CONSTRUCTOR(evLeftShiftDown)
    setId(evLeftShiftDown_RiderInteractionDesignPkg_DesignSynthesisPkg_id);
}

bool evLeftShiftDown::isTypeOf(const short id) const {
    return (evLeftShiftDown_RiderInteractionDesignPkg_DesignSynthesisPkg_id==id);
}

IMPLEMENT_META_EVENT_P(evLeftShiftDown, DesignSynthesisPkg_RiderInteractionDesignPkg, DesignSynthesisPkg::RiderInteractionDesignPkg, evLeftShiftDown())

//## event evRightShiftUp()
evRightShiftUp::evRightShiftUp() {
    NOTIFY_EVENT_CONSTRUCTOR(evRightShiftUp)
    setId(evRightShiftUp_RiderInteractionDesignPkg_DesignSynthesisPkg_id);
}

bool evRightShiftUp::isTypeOf(const short id) const {
    return (evRightShiftUp_RiderInteractionDesignPkg_DesignSynthesisPkg_id==id);
}

IMPLEMENT_META_EVENT_P(evRightShiftUp, DesignSynthesisPkg_RiderInteractionDesignPkg, DesignSynthesisPkg::RiderInteractionDesignPkg, evRightShiftUp())

//## event evRightShiftDown()
evRightShiftDown::evRightShiftDown() {
    NOTIFY_EVENT_CONSTRUCTOR(evRightShiftDown)
    setId(evRightShiftDown_RiderInteractionDesignPkg_DesignSynthesisPkg_id);
}

bool evRightShiftDown::isTypeOf(const short id) const {
    return (evRightShiftDown_RiderInteractionDesignPkg_DesignSynthesisPkg_id==id);
}

IMPLEMENT_META_EVENT_P(evRightShiftDown, DesignSynthesisPkg_RiderInteractionDesignPkg, DesignSynthesisPkg::RiderInteractionDesignPkg, evRightShiftDown())

//## event evDIUp()
evDIUp::evDIUp() {
    NOTIFY_EVENT_CONSTRUCTOR(evDIUp)
    setId(evDIUp_RiderInteractionDesignPkg_DesignSynthesisPkg_id);
}

bool evDIUp::isTypeOf(const short id) const {
    return (evDIUp_RiderInteractionDesignPkg_DesignSynthesisPkg_id==id);
}

IMPLEMENT_META_EVENT_P(evDIUp, DesignSynthesisPkg_RiderInteractionDesignPkg, DesignSynthesisPkg::RiderInteractionDesignPkg, evDIUp())

//## event evDIDown()
evDIDown::evDIDown() {
    NOTIFY_EVENT_CONSTRUCTOR(evDIDown)
    setId(evDIDown_RiderInteractionDesignPkg_DesignSynthesisPkg_id);
}

bool evDIDown::isTypeOf(const short id) const {
    return (evDIDown_RiderInteractionDesignPkg_DesignSynthesisPkg_id==id);
}

IMPLEMENT_META_EVENT_P(evDIDown, DesignSynthesisPkg_RiderInteractionDesignPkg, DesignSynthesisPkg::RiderInteractionDesignPkg, evDIDown())

//## event evMechanicalShifting()
evMechanicalShifting::evMechanicalShifting() {
    NOTIFY_EVENT_CONSTRUCTOR(evMechanicalShifting)
    setId(evMechanicalShifting_RiderInteractionDesignPkg_DesignSynthesisPkg_id);
}

bool evMechanicalShifting::isTypeOf(const short id) const {
    return (evMechanicalShifting_RiderInteractionDesignPkg_DesignSynthesisPkg_id==id);
}

IMPLEMENT_META_EVENT_P(evMechanicalShifting, DesignSynthesisPkg_RiderInteractionDesignPkg, DesignSynthesisPkg::RiderInteractionDesignPkg, evMechanicalShifting())

//## event evDIShifting()
evDIShifting::evDIShifting() {
    NOTIFY_EVENT_CONSTRUCTOR(evDIShifting)
    setId(evDIShifting_RiderInteractionDesignPkg_DesignSynthesisPkg_id);
}

bool evDIShifting::isTypeOf(const short id) const {
    return (evDIShifting_RiderInteractionDesignPkg_DesignSynthesisPkg_id==id);
}

IMPLEMENT_META_EVENT_P(evDIShifting, DesignSynthesisPkg_RiderInteractionDesignPkg, DesignSynthesisPkg::RiderInteractionDesignPkg, evDIShifting())

//## event evShiftDown(bool)
evShiftDown::evShiftDown() {
    NOTIFY_EVENT_CONSTRUCTOR(evShiftDown)
    setId(evShiftDown_RiderInteractionDesignPkg_DesignSynthesisPkg_id);
}

evShiftDown::evShiftDown(bool p_isLeftButton) : isLeftButton(p_isLeftButton) {
    NOTIFY_EVENT_CONSTRUCTOR(evShiftDown)
    setId(evShiftDown_RiderInteractionDesignPkg_DesignSynthesisPkg_id);
}

bool evShiftDown::isTypeOf(const short id) const {
    return (evShiftDown_RiderInteractionDesignPkg_DesignSynthesisPkg_id==id);
}

IMPLEMENT_META_EVENT_P(evShiftDown, DesignSynthesisPkg_RiderInteractionDesignPkg, DesignSynthesisPkg::RiderInteractionDesignPkg, evShiftDown(bool))

//## event evStart()
evStart::evStart() {
    NOTIFY_EVENT_CONSTRUCTOR(evStart)
    setId(evStart_RiderInteractionDesignPkg_DesignSynthesisPkg_id);
}

bool evStart::isTypeOf(const short id) const {
    return (evStart_RiderInteractionDesignPkg_DesignSynthesisPkg_id==id);
}

IMPLEMENT_META_EVENT_P(evStart, DesignSynthesisPkg_RiderInteractionDesignPkg, DesignSynthesisPkg::RiderInteractionDesignPkg, evStart())

//## event evUp()
evUp::evUp() {
    NOTIFY_EVENT_CONSTRUCTOR(evUp)
    setId(evUp_RiderInteractionDesignPkg_DesignSynthesisPkg_id);
}

bool evUp::isTypeOf(const short id) const {
    return (evUp_RiderInteractionDesignPkg_DesignSynthesisPkg_id==id);
}

IMPLEMENT_META_EVENT_P(evUp, DesignSynthesisPkg_RiderInteractionDesignPkg, DesignSynthesisPkg::RiderInteractionDesignPkg, evUp())

//## event evDown()
evDown::evDown() {
    NOTIFY_EVENT_CONSTRUCTOR(evDown)
    setId(evDown_RiderInteractionDesignPkg_DesignSynthesisPkg_id);
}

bool evDown::isTypeOf(const short id) const {
    return (evDown_RiderInteractionDesignPkg_DesignSynthesisPkg_id==id);
}

IMPLEMENT_META_EVENT_P(evDown, DesignSynthesisPkg_RiderInteractionDesignPkg, DesignSynthesisPkg::RiderInteractionDesignPkg, evDown())

//## event evShiftUp(bool)
evShiftUp::evShiftUp() {
    NOTIFY_EVENT_CONSTRUCTOR(evShiftUp)
    setId(evShiftUp_RiderInteractionDesignPkg_DesignSynthesisPkg_id);
}

evShiftUp::evShiftUp(bool p_isLeftButton) : isLeftButton(p_isLeftButton) {
    NOTIFY_EVENT_CONSTRUCTOR(evShiftUp)
    setId(evShiftUp_RiderInteractionDesignPkg_DesignSynthesisPkg_id);
}

bool evShiftUp::isTypeOf(const short id) const {
    return (evShiftUp_RiderInteractionDesignPkg_DesignSynthesisPkg_id==id);
}

IMPLEMENT_META_EVENT_P(evShiftUp, DesignSynthesisPkg_RiderInteractionDesignPkg, DesignSynthesisPkg::RiderInteractionDesignPkg, evShiftUp(bool))

//## event evPress()
evPress::evPress() {
    NOTIFY_EVENT_CONSTRUCTOR(evPress)
    setId(evPress_RiderInteractionDesignPkg_DesignSynthesisPkg_id);
}

bool evPress::isTypeOf(const short id) const {
    return (evPress_RiderInteractionDesignPkg_DesignSynthesisPkg_id==id);
}

IMPLEMENT_META_EVENT_P(evPress, DesignSynthesisPkg_RiderInteractionDesignPkg, DesignSynthesisPkg::RiderInteractionDesignPkg, evPress())

//## event evDiShift(bool)
evDiShift::evDiShift() {
    NOTIFY_EVENT_CONSTRUCTOR(evDiShift)
    setId(evDiShift_RiderInteractionDesignPkg_DesignSynthesisPkg_id);
}

evDiShift::evDiShift(bool p_isUpButton) : isUpButton(p_isUpButton) {
    NOTIFY_EVENT_CONSTRUCTOR(evDiShift)
    setId(evDiShift_RiderInteractionDesignPkg_DesignSynthesisPkg_id);
}

bool evDiShift::isTypeOf(const short id) const {
    return (evDiShift_RiderInteractionDesignPkg_DesignSynthesisPkg_id==id);
}

IMPLEMENT_META_EVENT_P(evDiShift, DesignSynthesisPkg_RiderInteractionDesignPkg, DesignSynthesisPkg::RiderInteractionDesignPkg, evDiShift(bool))

//## event evDisplayGearing(int,int)
evDisplayGearing::evDisplayGearing() {
    NOTIFY_EVENT_CONSTRUCTOR(evDisplayGearing)
    setId(evDisplayGearing_RiderInteractionDesignPkg_DesignSynthesisPkg_id);
}

evDisplayGearing::evDisplayGearing(int p_chainRingIndex, int p_cassetteRingIndex) : chainRingIndex(p_chainRingIndex),cassetteRingIndex(p_cassetteRingIndex) {
    NOTIFY_EVENT_CONSTRUCTOR(evDisplayGearing)
    setId(evDisplayGearing_RiderInteractionDesignPkg_DesignSynthesisPkg_id);
}

bool evDisplayGearing::isTypeOf(const short id) const {
    return (evDisplayGearing_RiderInteractionDesignPkg_DesignSynthesisPkg_id==id);
}

IMPLEMENT_META_EVENT_P(evDisplayGearing, DesignSynthesisPkg_RiderInteractionDesignPkg, DesignSynthesisPkg::RiderInteractionDesignPkg, evDisplayGearing(int,int))

/*********************************************************************
	File Path	: GearShiftingTestComponent/GSC_Test_Animation/RiderInteractionDesignPkg.cpp
*********************************************************************/
