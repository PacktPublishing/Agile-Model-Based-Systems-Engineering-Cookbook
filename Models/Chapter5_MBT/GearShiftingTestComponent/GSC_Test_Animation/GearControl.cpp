/********************************************************************
	Rhapsody	: 9.0 
	Login		: Bruce
	Component	: GearShiftingTestComponent 
	Configuration 	: GSC_Test_Animation
	Model Element	: GearControl
//!	Generated Date	: Sat, 28, Nov 2020  
	File Path	: GearShiftingTestComponent/GSC_Test_Animation/GearControl.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX

#define _OMSTATECHART_ANIMATED
//#]

//## auto_generated
#include "GearControl.h"
//#[ ignore
#define DesignSynthesisPkg_RiderInteractionDesignPkg_GearControl_displayGearing_SERIALIZE \
    aomsmethod->addAttribute("chainRing", x2String(chainRing));\
    aomsmethod->addAttribute("cassetteRing", x2String(cassetteRing));
#define DesignSynthesisPkg_RiderInteractionDesignPkg_GearControl_GearControl_SERIALIZE OM_NO_OP

#define OMAnim_DesignSynthesisPkg_RiderInteractionDesignPkg_GearControl_setCurrentCassetteRing_int_UNSERIALIZE_ARGS OP_UNSER(OMDestructiveString2X,p_currentCassetteRing)

#define OMAnim_DesignSynthesisPkg_RiderInteractionDesignPkg_GearControl_setCurrentCassetteRing_int_SERIALIZE_RET_VAL

#define OMAnim_DesignSynthesisPkg_RiderInteractionDesignPkg_GearControl_setCurrentChainRing_int_UNSERIALIZE_ARGS OP_UNSER(OMDestructiveString2X,p_currentChainRing)

#define OMAnim_DesignSynthesisPkg_RiderInteractionDesignPkg_GearControl_setCurrentChainRing_int_SERIALIZE_RET_VAL
//#]

//## package DesignSynthesisPkg::RiderInteractionDesignPkg

//## class GearControl
//#[ ignore
GearControl::pMainShift_C::InBound_C::InBound_C() {
    itsEvDIShifting_ProxyReceptionInterface = NULL;
    itsEvDisplayGearing_ProxyReceptionInterface = NULL;
    itsEvMechanicalShifting_ProxyReceptionInterface = NULL;
    port = NULL;
}

GearControl::pMainShift_C::InBound_C::~InBound_C() {
    cleanUpRelations();
}

bool GearControl::pMainShift_C::InBound_C::send(IOxfEvent* event, const IOxfEventGenerationParams& params) {
    bool res = false;
    if (event != NULL) {
        event->setPort(getPort());
        if (itsEvDIShifting_ProxyReceptionInterface != NULL) {
            if (event->isTypeOf(evDIShifting_RiderInteractionDesignPkg_DesignSynthesisPkg_id)) {
                res = itsEvDIShifting_ProxyReceptionInterface->send(event, params);
                return res;
            }
        }
        if (itsEvMechanicalShifting_ProxyReceptionInterface != NULL) {
            if (event->isTypeOf(evMechanicalShifting_RiderInteractionDesignPkg_DesignSynthesisPkg_id)) {
                res = itsEvMechanicalShifting_ProxyReceptionInterface->send(event, params);
                return res;
            }
        }
        if (itsEvDisplayGearing_ProxyReceptionInterface != NULL) {
            if (event->isTypeOf(evDisplayGearing_RiderInteractionDesignPkg_DesignSynthesisPkg_id)) {
                res = itsEvDisplayGearing_ProxyReceptionInterface->send(event, params);
                return res;
            }
        }
    }
    return res;
    
}

bool GearControl::pMainShift_C::InBound_C::send(IOxfEvent* event) {
    bool res = false;
    if (event != NULL) {
        event->setPort(getPort());
        if (itsEvDIShifting_ProxyReceptionInterface != NULL) {
            if (event->isTypeOf(evDIShifting_RiderInteractionDesignPkg_DesignSynthesisPkg_id)) {
                res = itsEvDIShifting_ProxyReceptionInterface->send(event);
                return res;
            }
        }
        if (itsEvMechanicalShifting_ProxyReceptionInterface != NULL) {
            if (event->isTypeOf(evMechanicalShifting_RiderInteractionDesignPkg_DesignSynthesisPkg_id)) {
                res = itsEvMechanicalShifting_ProxyReceptionInterface->send(event);
                return res;
            }
        }
        if (itsEvDisplayGearing_ProxyReceptionInterface != NULL) {
            if (event->isTypeOf(evDisplayGearing_RiderInteractionDesignPkg_DesignSynthesisPkg_id)) {
                res = itsEvDisplayGearing_ProxyReceptionInterface->send(event);
                return res;
            }
        }
    }
    return res;
    
}

void GearControl::pMainShift_C::InBound_C::setItsEvDIShifting_ProxyReceptionInterface(evDIShifting_ProxyReceptionInterface* p_evDIShifting_ProxyReceptionInterface) {
    itsEvDIShifting_ProxyReceptionInterface = p_evDIShifting_ProxyReceptionInterface;
}

void GearControl::pMainShift_C::InBound_C::setItsEvDisplayGearing_ProxyReceptionInterface(evDisplayGearing_ProxyReceptionInterface* p_evDisplayGearing_ProxyReceptionInterface) {
    itsEvDisplayGearing_ProxyReceptionInterface = p_evDisplayGearing_ProxyReceptionInterface;
}

void GearControl::pMainShift_C::InBound_C::setItsEvMechanicalShifting_ProxyReceptionInterface(evMechanicalShifting_ProxyReceptionInterface* p_evMechanicalShifting_ProxyReceptionInterface) {
    itsEvMechanicalShifting_ProxyReceptionInterface = p_evMechanicalShifting_ProxyReceptionInterface;
}

GearControl::pMainShift_C* GearControl::pMainShift_C::InBound_C::getPort() const {
    return port;
}

void GearControl::pMainShift_C::InBound_C::setPort(GearControl::pMainShift_C* p_pMainShift_C) {
    _setPort(p_pMainShift_C);
}

void GearControl::pMainShift_C::InBound_C::cleanUpRelations() {
    if(itsEvDIShifting_ProxyReceptionInterface != NULL)
        {
            itsEvDIShifting_ProxyReceptionInterface = NULL;
        }
    if(itsEvDisplayGearing_ProxyReceptionInterface != NULL)
        {
            itsEvDisplayGearing_ProxyReceptionInterface = NULL;
        }
    if(itsEvMechanicalShifting_ProxyReceptionInterface != NULL)
        {
            itsEvMechanicalShifting_ProxyReceptionInterface = NULL;
        }
    if(port != NULL)
        {
            port = NULL;
        }
}

void GearControl::pMainShift_C::InBound_C::__setPort(GearControl::pMainShift_C* p_pMainShift_C) {
    port = p_pMainShift_C;
}

void GearControl::pMainShift_C::InBound_C::_setPort(GearControl::pMainShift_C* p_pMainShift_C) {
    __setPort(p_pMainShift_C);
}

void GearControl::pMainShift_C::InBound_C::_clearPort() {
    port = NULL;
}

GearControl::pMainShift_C::OutBound_C::OutBound_C() {
    itsEvDIDown_ProxyReceptionInterface = NULL;
    itsEvDIUp_ProxyReceptionInterface = NULL;
    itsEvLeftShiftDown_ProxyReceptionInterface = NULL;
    itsEvLeftShiftUp_ProxyReceptionInterface = NULL;
    itsEvRightShiftDown_ProxyReceptionInterface = NULL;
    itsEvRightShiftUp_ProxyReceptionInterface = NULL;
}

GearControl::pMainShift_C::OutBound_C::~OutBound_C() {
    cleanUpRelations();
}

bool GearControl::pMainShift_C::OutBound_C::send(IOxfEvent* event, const IOxfEventGenerationParams& params) {
    bool res = false;
    if (event != NULL) {
        if (itsEvDIDown_ProxyReceptionInterface != NULL) {
            if (event->isTypeOf(evDIDown_RiderInteractionDesignPkg_DesignSynthesisPkg_id)) {
                res = itsEvDIDown_ProxyReceptionInterface->send(event, params);
                return res;
            }
        }
        if (itsEvDIUp_ProxyReceptionInterface != NULL) {
            if (event->isTypeOf(evDIUp_RiderInteractionDesignPkg_DesignSynthesisPkg_id)) {
                res = itsEvDIUp_ProxyReceptionInterface->send(event, params);
                return res;
            }
        }
        if (itsEvLeftShiftDown_ProxyReceptionInterface != NULL) {
            if (event->isTypeOf(evLeftShiftDown_RiderInteractionDesignPkg_DesignSynthesisPkg_id)) {
                res = itsEvLeftShiftDown_ProxyReceptionInterface->send(event, params);
                return res;
            }
        }
        if (itsEvLeftShiftUp_ProxyReceptionInterface != NULL) {
            if (event->isTypeOf(evLeftShiftUp_RiderInteractionDesignPkg_DesignSynthesisPkg_id)) {
                res = itsEvLeftShiftUp_ProxyReceptionInterface->send(event, params);
                return res;
            }
        }
        if (itsEvRightShiftDown_ProxyReceptionInterface != NULL) {
            if (event->isTypeOf(evRightShiftDown_RiderInteractionDesignPkg_DesignSynthesisPkg_id)) {
                res = itsEvRightShiftDown_ProxyReceptionInterface->send(event, params);
                return res;
            }
        }
        if (itsEvRightShiftUp_ProxyReceptionInterface != NULL) {
            if (event->isTypeOf(evRightShiftUp_RiderInteractionDesignPkg_DesignSynthesisPkg_id)) {
                res = itsEvRightShiftUp_ProxyReceptionInterface->send(event, params);
                return res;
            }
        }
    }
    return res;
    
}

bool GearControl::pMainShift_C::OutBound_C::send(IOxfEvent* event) {
    bool res = false;
    if (event != NULL) {
        if (itsEvDIDown_ProxyReceptionInterface != NULL) {
            if (event->isTypeOf(evDIDown_RiderInteractionDesignPkg_DesignSynthesisPkg_id)) {
                res = itsEvDIDown_ProxyReceptionInterface->send(event);
                return res;
            }
        }
        if (itsEvDIUp_ProxyReceptionInterface != NULL) {
            if (event->isTypeOf(evDIUp_RiderInteractionDesignPkg_DesignSynthesisPkg_id)) {
                res = itsEvDIUp_ProxyReceptionInterface->send(event);
                return res;
            }
        }
        if (itsEvLeftShiftDown_ProxyReceptionInterface != NULL) {
            if (event->isTypeOf(evLeftShiftDown_RiderInteractionDesignPkg_DesignSynthesisPkg_id)) {
                res = itsEvLeftShiftDown_ProxyReceptionInterface->send(event);
                return res;
            }
        }
        if (itsEvLeftShiftUp_ProxyReceptionInterface != NULL) {
            if (event->isTypeOf(evLeftShiftUp_RiderInteractionDesignPkg_DesignSynthesisPkg_id)) {
                res = itsEvLeftShiftUp_ProxyReceptionInterface->send(event);
                return res;
            }
        }
        if (itsEvRightShiftDown_ProxyReceptionInterface != NULL) {
            if (event->isTypeOf(evRightShiftDown_RiderInteractionDesignPkg_DesignSynthesisPkg_id)) {
                res = itsEvRightShiftDown_ProxyReceptionInterface->send(event);
                return res;
            }
        }
        if (itsEvRightShiftUp_ProxyReceptionInterface != NULL) {
            if (event->isTypeOf(evRightShiftUp_RiderInteractionDesignPkg_DesignSynthesisPkg_id)) {
                res = itsEvRightShiftUp_ProxyReceptionInterface->send(event);
                return res;
            }
        }
    }
    return res;
    
}

void GearControl::pMainShift_C::OutBound_C::setItsEvDIDown_ProxyReceptionInterface(OMReactive* p_OMReactive) {
    itsEvDIDown_ProxyReceptionInterface = p_OMReactive;
}

void GearControl::pMainShift_C::OutBound_C::setItsEvDIUp_ProxyReceptionInterface(OMReactive* p_OMReactive) {
    itsEvDIUp_ProxyReceptionInterface = p_OMReactive;
}

void GearControl::pMainShift_C::OutBound_C::setItsEvLeftShiftDown_ProxyReceptionInterface(OMReactive* p_OMReactive) {
    itsEvLeftShiftDown_ProxyReceptionInterface = p_OMReactive;
}

void GearControl::pMainShift_C::OutBound_C::setItsEvLeftShiftUp_ProxyReceptionInterface(OMReactive* p_OMReactive) {
    itsEvLeftShiftUp_ProxyReceptionInterface = p_OMReactive;
}

void GearControl::pMainShift_C::OutBound_C::setItsEvRightShiftDown_ProxyReceptionInterface(OMReactive* p_OMReactive) {
    itsEvRightShiftDown_ProxyReceptionInterface = p_OMReactive;
}

void GearControl::pMainShift_C::OutBound_C::setItsEvRightShiftUp_ProxyReceptionInterface(OMReactive* p_OMReactive) {
    itsEvRightShiftUp_ProxyReceptionInterface = p_OMReactive;
}

void GearControl::pMainShift_C::OutBound_C::cleanUpRelations() {
    if(itsEvDIDown_ProxyReceptionInterface != NULL)
        {
            itsEvDIDown_ProxyReceptionInterface = NULL;
        }
    if(itsEvDIUp_ProxyReceptionInterface != NULL)
        {
            itsEvDIUp_ProxyReceptionInterface = NULL;
        }
    if(itsEvLeftShiftDown_ProxyReceptionInterface != NULL)
        {
            itsEvLeftShiftDown_ProxyReceptionInterface = NULL;
        }
    if(itsEvLeftShiftUp_ProxyReceptionInterface != NULL)
        {
            itsEvLeftShiftUp_ProxyReceptionInterface = NULL;
        }
    if(itsEvRightShiftDown_ProxyReceptionInterface != NULL)
        {
            itsEvRightShiftDown_ProxyReceptionInterface = NULL;
        }
    if(itsEvRightShiftUp_ProxyReceptionInterface != NULL)
        {
            itsEvRightShiftUp_ProxyReceptionInterface = NULL;
        }
}

GearControl::pMainShift_C::pMainShift_C() : _p_(0) {
    initRelations();
}

GearControl::pMainShift_C::~pMainShift_C() {
}

void GearControl::pMainShift_C::connectGearControl(GearControl* part) {
    InBound.setItsEvDIShifting_ProxyReceptionInterface(part);
    InBound.setItsEvMechanicalShifting_ProxyReceptionInterface(part);
    InBound.setItsEvDisplayGearing_ProxyReceptionInterface(part);
    InBound.setPort(this); // for IS_PORT macro support
    
}

evDIDown_ProxyReceptionInterface* GearControl::pMainShift_C::getItsEvDIDown_ProxyReceptionInterface() {
    return &OutBound;
}

evDIShifting_ProxyReceptionInterface* GearControl::pMainShift_C::getItsEvDIShifting_ProxyReceptionInterface() {
    return &InBound;
}

evDIUp_ProxyReceptionInterface* GearControl::pMainShift_C::getItsEvDIUp_ProxyReceptionInterface() {
    return &OutBound;
}

evDisplayGearing_ProxyReceptionInterface* GearControl::pMainShift_C::getItsEvDisplayGearing_ProxyReceptionInterface() {
    return &InBound;
}

evLeftShiftDown_ProxyReceptionInterface* GearControl::pMainShift_C::getItsEvLeftShiftDown_ProxyReceptionInterface() {
    return &OutBound;
}

evLeftShiftUp_ProxyReceptionInterface* GearControl::pMainShift_C::getItsEvLeftShiftUp_ProxyReceptionInterface() {
    return &OutBound;
}

evMechanicalShifting_ProxyReceptionInterface* GearControl::pMainShift_C::getItsEvMechanicalShifting_ProxyReceptionInterface() {
    return &InBound;
}

evRightShiftDown_ProxyReceptionInterface* GearControl::pMainShift_C::getItsEvRightShiftDown_ProxyReceptionInterface() {
    return &OutBound;
}

evRightShiftUp_ProxyReceptionInterface* GearControl::pMainShift_C::getItsEvRightShiftUp_ProxyReceptionInterface() {
    return &OutBound;
}

void GearControl::pMainShift_C::setItsEvDIDown_ProxyReceptionInterface(OMReactive* p_evDIDown_ProxyReceptionInterface) {
    OutBound.setItsEvDIDown_ProxyReceptionInterface(p_evDIDown_ProxyReceptionInterface);
}

void GearControl::pMainShift_C::setItsEvDIShifting_ProxyReceptionInterface(evDIShifting_ProxyReceptionInterface* p_evDIShifting_ProxyReceptionInterface) {
    InBound.setItsEvDIShifting_ProxyReceptionInterface(p_evDIShifting_ProxyReceptionInterface);
}

void GearControl::pMainShift_C::setItsEvDIUp_ProxyReceptionInterface(OMReactive* p_evDIUp_ProxyReceptionInterface) {
    OutBound.setItsEvDIUp_ProxyReceptionInterface(p_evDIUp_ProxyReceptionInterface);
}

void GearControl::pMainShift_C::setItsEvDisplayGearing_ProxyReceptionInterface(evDisplayGearing_ProxyReceptionInterface* p_evDisplayGearing_ProxyReceptionInterface) {
    InBound.setItsEvDisplayGearing_ProxyReceptionInterface(p_evDisplayGearing_ProxyReceptionInterface);
}

void GearControl::pMainShift_C::setItsEvLeftShiftDown_ProxyReceptionInterface(OMReactive* p_evLeftShiftDown_ProxyReceptionInterface) {
    OutBound.setItsEvLeftShiftDown_ProxyReceptionInterface(p_evLeftShiftDown_ProxyReceptionInterface);
}

void GearControl::pMainShift_C::setItsEvLeftShiftUp_ProxyReceptionInterface(OMReactive* p_evLeftShiftUp_ProxyReceptionInterface) {
    OutBound.setItsEvLeftShiftUp_ProxyReceptionInterface(p_evLeftShiftUp_ProxyReceptionInterface);
}

void GearControl::pMainShift_C::setItsEvMechanicalShifting_ProxyReceptionInterface(evMechanicalShifting_ProxyReceptionInterface* p_evMechanicalShifting_ProxyReceptionInterface) {
    InBound.setItsEvMechanicalShifting_ProxyReceptionInterface(p_evMechanicalShifting_ProxyReceptionInterface);
}

void GearControl::pMainShift_C::setItsEvRightShiftDown_ProxyReceptionInterface(OMReactive* p_evRightShiftDown_ProxyReceptionInterface) {
    OutBound.setItsEvRightShiftDown_ProxyReceptionInterface(p_evRightShiftDown_ProxyReceptionInterface);
}

void GearControl::pMainShift_C::setItsEvRightShiftUp_ProxyReceptionInterface(OMReactive* p_evRightShiftUp_ProxyReceptionInterface) {
    OutBound.setItsEvRightShiftUp_ProxyReceptionInterface(p_evRightShiftUp_ProxyReceptionInterface);
}

GearControl::pMainShift_C::InBound_C* GearControl::pMainShift_C::getInBound() const {
    return (GearControl::pMainShift_C::InBound_C*) &InBound;
}

GearControl::pMainShift_C::OutBound_C* GearControl::pMainShift_C::getOutBound() const {
    return (GearControl::pMainShift_C::OutBound_C*) &OutBound;
}

void GearControl::pMainShift_C::initRelations() {
    InBound._setPort(this);
}

void GearControl::pMainShift_C::destroy() {
}
//#]

GearControl::GearControl(IOxfActive* theActiveContext) : DIUp(TRUE), currentCassetteRing(1), currentChainRing(1), leftSide(TRUE) {
    NOTIFY_REACTIVE_CONSTRUCTOR(GearControl, GearControl(), 0, DesignSynthesisPkg_RiderInteractionDesignPkg_GearControl_GearControl_SERIALIZE);
    setActiveContext(theActiveContext, false);
    {
        {
            rightShifter.setShouldDelete(false);
        }
        {
            DIUpShifter.setShouldDelete(false);
        }
        {
            DIDownShifter.setShouldDelete(false);
        }
        {
            leftShifter.setShouldDelete(false);
        }
    }
    initRelations();
    initStatechart();
}

GearControl::~GearControl() {
    NOTIFY_DESTRUCTOR(~GearControl, true);
}

void GearControl::displayGearing(int chainRing, int cassetteRing) {
    NOTIFY_OPERATION(displayGearing, displayGearing(int,int), 2, DesignSynthesisPkg_RiderInteractionDesignPkg_GearControl_displayGearing_SERIALIZE);
    //#[ operation displayGearing(int,int)
    std::cout << "Current Gearing: Chaing Ring " << chainRing 
      << ", Cassette Ring " << cassetteRing << std::endl; 
    //#]
}

GearControl::pMainShift_C* GearControl::getPMainShift() const {
    return (GearControl::pMainShift_C*) &pMainShift;
}

GearControl::pMainShift_C* GearControl::get_pMainShift() const {
    return (GearControl::pMainShift_C*) &pMainShift;
}

bool GearControl::getDIUp() const {
    return DIUp;
}

void GearControl::setDIUp(bool p_DIUp) {
    DIUp = p_DIUp;
}

int GearControl::getCurrentCassetteRing() const {
    return currentCassetteRing;
}

void GearControl::setCurrentCassetteRing(int p_currentCassetteRing) {
    currentCassetteRing = p_currentCassetteRing;
    NOTIFY_SET_OPERATION;
}

int GearControl::getCurrentChainRing() const {
    return currentChainRing;
}

void GearControl::setCurrentChainRing(int p_currentChainRing) {
    currentChainRing = p_currentChainRing;
    NOTIFY_SET_OPERATION;
}

bool GearControl::getLeftSide() const {
    return leftSide;
}

void GearControl::setLeftSide(bool p_leftSide) {
    leftSide = p_leftSide;
}

DIButton* GearControl::getDIDownShifter() const {
    return (DIButton*) &DIDownShifter;
}

DIButton* GearControl::getDIUpShifter() const {
    return (DIButton*) &DIUpShifter;
}

ShiftLever* GearControl::getLeftShifter() const {
    return (ShiftLever*) &leftShifter;
}

ShiftLever* GearControl::getRightShifter() const {
    return (ShiftLever*) &rightShifter;
}

bool GearControl::startBehavior() {
    bool done = true;
    done &= DIDownShifter.startBehavior();
    done &= DIUpShifter.startBehavior();
    done &= leftShifter.startBehavior();
    done &= rightShifter.startBehavior();
    done &= OMReactive::startBehavior();
    return done;
}

void GearControl::initRelations() {
    if (get_pMainShift() != NULL) {
        get_pMainShift()->connectGearControl(this);
    }
}

void GearControl::initStatechart() {
    rootState_subState = OMNonState;
    rootState_active = OMNonState;
    state_17_subState = OMNonState;
    state_17_active = OMNonState;
    state_16_subState = OMNonState;
    state_16_active = OMNonState;
}

void GearControl::setActiveContext(IOxfActive* theActiveContext, bool activeInstance) {
    OMReactive::setActiveContext(theActiveContext, activeInstance);
    {
        rightShifter.setActiveContext(theActiveContext, false);
        DIUpShifter.setActiveContext(theActiveContext, false);
        DIDownShifter.setActiveContext(theActiveContext, false);
        leftShifter.setActiveContext(theActiveContext, false);
    }
}

void GearControl::destroy() {
    DIDownShifter.destroy();
    DIUpShifter.destroy();
    leftShifter.destroy();
    rightShifter.destroy();
    OMReactive::destroy();
}

void GearControl::rootState_entDef() {
    {
        NOTIFY_STATE_ENTERED("ROOT");
        NOTIFY_TRANSITION_STARTED("0");
        NOTIFY_STATE_ENTERED("ROOT.Iniitializeing");
        pushNullTransition();
        rootState_subState = Iniitializeing;
        rootState_active = Iniitializeing;
        NOTIFY_TRANSITION_TERMINATED("0");
    }
}

IOxfReactive::TakeEventStatus GearControl::rootState_processEvent() {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    switch (rootState_active) {
        // State Iniitializeing
        case Iniitializeing:
        {
            if(IS_EVENT_TYPE_OF(OMNullEventId))
                {
                    NOTIFY_TRANSITION_STARTED("3");
                    popNullTransition();
                    NOTIFY_STATE_EXITED("ROOT.Iniitializeing");
                    //#[ transition 3 
                    
                    leftShifter.setItsGearControl(this); 
                    rightShifter.setItsGearControl(this);
                    DIUpShifter.setItsGearControl(this); 
                    DIDownShifter.setItsGearControl(this);
                     
                    leftShifter.setIsLeft(TRUE);
                    rightShifter.setIsLeft(FALSE);
                    DIUpShifter.setIsUp(TRUE);
                    DIDownShifter.setIsUp(FALSE);
                    //#]
                    ControllingGears_entDef();
                    NOTIFY_TRANSITION_TERMINATED("3");
                    res = eventConsumed;
                }
            
        }
        break;
        // State ControllingGears
        case ControllingGears:
        {
            res = ControllingGears_processEvent();
        }
        break;
        default:
            break;
    }
    return res;
}

void GearControl::ControllingGears_entDef() {
    NOTIFY_STATE_ENTERED("ROOT.ControllingGears");
    rootState_subState = ControllingGears;
    rootState_active = ControllingGears;
    state_16_entDef();
    state_17_entDef();
}

void GearControl::ControllingGears_exit() {
    state_16_exit();
    state_17_exit();
    
    NOTIFY_STATE_EXITED("ROOT.ControllingGears");
}

IOxfReactive::TakeEventStatus GearControl::ControllingGears_processEvent() {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    // State state_16
    if(state_16_processEvent() != eventNotConsumed)
        {
            res = eventConsumed;
            if(!IS_IN(ControllingGears))
                {
                    return res;
                }
        }
    // State state_17
    if(state_17_processEvent() != eventNotConsumed)
        {
            res = eventConsumed;
            if(!IS_IN(ControllingGears))
                {
                    return res;
                }
        }
    
    return res;
}

void GearControl::state_17_entDef() {
    NOTIFY_STATE_ENTERED("ROOT.ControllingGears.state_17");
    NOTIFY_STATE_ENTERED("ROOT.ControllingGears.state_17.WaitingFoGearingUpdate");
    state_17_subState = WaitingFoGearingUpdate;
    state_17_active = WaitingFoGearingUpdate;
}

void GearControl::state_17_exit() {
    // State WaitingFoGearingUpdate
    if(state_17_subState == WaitingFoGearingUpdate)
        {
            NOTIFY_STATE_EXITED("ROOT.ControllingGears.state_17.WaitingFoGearingUpdate");
        }
    state_17_subState = OMNonState;
    
    NOTIFY_STATE_EXITED("ROOT.ControllingGears.state_17");
}

IOxfReactive::TakeEventStatus GearControl::state_17_processEvent() {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    // State WaitingFoGearingUpdate
    if(state_17_active == WaitingFoGearingUpdate)
        {
            if(IS_EVENT_TYPE_OF(evDisplayGearing_RiderInteractionDesignPkg_DesignSynthesisPkg_id))
                {
                    OMSETPARAMS(evDisplayGearing);
                    NOTIFY_TRANSITION_STARTED("22");
                    NOTIFY_STATE_EXITED("ROOT.ControllingGears.state_17.WaitingFoGearingUpdate");
                    //#[ transition 22 
                     
                    currentChainRing = params->chainRingIndex;
                    currentCassetteRing = params->cassetteRingIndex;
                    displayGearing(currentChainRing, currentCassetteRing);
                    //#]
                    NOTIFY_STATE_ENTERED("ROOT.ControllingGears.state_17.WaitingFoGearingUpdate");
                    state_17_subState = WaitingFoGearingUpdate;
                    state_17_active = WaitingFoGearingUpdate;
                    NOTIFY_TRANSITION_TERMINATED("22");
                    res = eventConsumed;
                }
            
            
        }
    return res;
}

void GearControl::state_16_entDef() {
    NOTIFY_STATE_ENTERED("ROOT.ControllingGears.state_16");
    NOTIFY_TRANSITION_STARTED("23");
    NOTIFY_STATE_ENTERED("ROOT.ControllingGears.state_16.MechanicalShifting");
    state_16_subState = MechanicalShifting;
    state_16_active = MechanicalShifting;
    NOTIFY_TRANSITION_TERMINATED("23");
}

void GearControl::state_16_exit() {
    switch (state_16_subState) {
        // State MechanicalShifting
        case MechanicalShifting:
        {
            NOTIFY_STATE_EXITED("ROOT.ControllingGears.state_16.MechanicalShifting");
        }
        break;
        // State DIShifting
        case DIShifting:
        {
            NOTIFY_STATE_EXITED("ROOT.ControllingGears.state_16.DIShifting");
        }
        break;
        // State sendaction_2
        case sendaction_2:
        {
            popNullTransition();
            NOTIFY_STATE_EXITED("ROOT.ControllingGears.state_16.sendaction_2");
        }
        break;
        // State SCS_1
        case SCS_1:
        {
            popNullTransition();
            NOTIFY_STATE_EXITED("ROOT.ControllingGears.state_16.SCS_1");
        }
        break;
        // State sendaction_7
        case sendaction_7:
        {
            popNullTransition();
            NOTIFY_STATE_EXITED("ROOT.ControllingGears.state_16.sendaction_7");
        }
        break;
        // State SCS_2
        case SCS_2:
        {
            popNullTransition();
            NOTIFY_STATE_EXITED("ROOT.ControllingGears.state_16.SCS_2");
        }
        break;
        // State sendaction_9
        case sendaction_9:
        {
            popNullTransition();
            NOTIFY_STATE_EXITED("ROOT.ControllingGears.state_16.sendaction_9");
        }
        break;
        // State sendaction_10
        case sendaction_10:
        {
            popNullTransition();
            NOTIFY_STATE_EXITED("ROOT.ControllingGears.state_16.sendaction_10");
        }
        break;
        // State SCS_3
        case SCS_3:
        {
            popNullTransition();
            NOTIFY_STATE_EXITED("ROOT.ControllingGears.state_16.SCS_3");
        }
        break;
        // State sendaction_12
        case sendaction_12:
        {
            popNullTransition();
            NOTIFY_STATE_EXITED("ROOT.ControllingGears.state_16.sendaction_12");
        }
        break;
        // State sendaction_13
        case sendaction_13:
        {
            popNullTransition();
            NOTIFY_STATE_EXITED("ROOT.ControllingGears.state_16.sendaction_13");
        }
        break;
        default:
            break;
    }
    state_16_subState = OMNonState;
    
    NOTIFY_STATE_EXITED("ROOT.ControllingGears.state_16");
}

IOxfReactive::TakeEventStatus GearControl::state_16_processEvent() {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    switch (state_16_active) {
        // State MechanicalShifting
        case MechanicalShifting:
        {
            if(IS_EVENT_TYPE_OF(evDIShifting_RiderInteractionDesignPkg_DesignSynthesisPkg_id))
                {
                    NOTIFY_TRANSITION_STARTED("4");
                    NOTIFY_STATE_EXITED("ROOT.ControllingGears.state_16.MechanicalShifting");
                    NOTIFY_STATE_ENTERED("ROOT.ControllingGears.state_16.DIShifting");
                    state_16_subState = DIShifting;
                    state_16_active = DIShifting;
                    NOTIFY_TRANSITION_TERMINATED("4");
                    res = eventConsumed;
                }
            else if(IS_EVENT_TYPE_OF(evShiftDown_RiderInteractionDesignPkg_DesignSynthesisPkg_id))
                {
                    OMSETPARAMS(evShiftDown);
                    NOTIFY_TRANSITION_STARTED("1");
                    NOTIFY_STATE_EXITED("ROOT.ControllingGears.state_16.MechanicalShifting");
                    NOTIFY_STATE_ENTERED("ROOT.ControllingGears.state_16.SCS_1");
                    pushNullTransition();
                    state_16_subState = SCS_1;
                    state_16_active = SCS_1;
                    //#[ state ControllingGears.state_16.SCS_1.(Entry) 
                    leftSide=params->isLeftButton;
                    //#]
                    NOTIFY_TRANSITION_TERMINATED("1");
                    res = eventConsumed;
                }
            else if(IS_EVENT_TYPE_OF(evShiftUp_RiderInteractionDesignPkg_DesignSynthesisPkg_id))
                {
                    OMSETPARAMS(evShiftUp);
                    NOTIFY_TRANSITION_STARTED("6");
                    NOTIFY_STATE_EXITED("ROOT.ControllingGears.state_16.MechanicalShifting");
                    NOTIFY_STATE_ENTERED("ROOT.ControllingGears.state_16.SCS_2");
                    pushNullTransition();
                    state_16_subState = SCS_2;
                    state_16_active = SCS_2;
                    //#[ state ControllingGears.state_16.SCS_2.(Entry) 
                    leftSide=params->isLeftButton;
                    //#]
                    NOTIFY_TRANSITION_TERMINATED("6");
                    res = eventConsumed;
                }
            
            
        }
        break;
        // State DIShifting
        case DIShifting:
        {
            if(IS_EVENT_TYPE_OF(evDiShift_RiderInteractionDesignPkg_DesignSynthesisPkg_id))
                {
                    OMSETPARAMS(evDiShift);
                    NOTIFY_TRANSITION_STARTED("16");
                    NOTIFY_STATE_EXITED("ROOT.ControllingGears.state_16.DIShifting");
                    NOTIFY_STATE_ENTERED("ROOT.ControllingGears.state_16.SCS_3");
                    pushNullTransition();
                    state_16_subState = SCS_3;
                    state_16_active = SCS_3;
                    //#[ state ControllingGears.state_16.SCS_3.(Entry) 
                    DIUp = params->isUpButton;
                    //#]
                    NOTIFY_TRANSITION_TERMINATED("16");
                    res = eventConsumed;
                }
            else if(IS_EVENT_TYPE_OF(evMechanicalShifting_RiderInteractionDesignPkg_DesignSynthesisPkg_id))
                {
                    NOTIFY_TRANSITION_STARTED("5");
                    NOTIFY_STATE_EXITED("ROOT.ControllingGears.state_16.DIShifting");
                    NOTIFY_STATE_ENTERED("ROOT.ControllingGears.state_16.MechanicalShifting");
                    state_16_subState = MechanicalShifting;
                    state_16_active = MechanicalShifting;
                    NOTIFY_TRANSITION_TERMINATED("5");
                    res = eventConsumed;
                }
            
            
        }
        break;
        // State sendaction_2
        case sendaction_2:
        {
            if(IS_EVENT_TYPE_OF(OMNullEventId))
                {
                    NOTIFY_TRANSITION_STARTED("2");
                    popNullTransition();
                    NOTIFY_STATE_EXITED("ROOT.ControllingGears.state_16.sendaction_2");
                    NOTIFY_STATE_ENTERED("ROOT.ControllingGears.state_16.MechanicalShifting");
                    state_16_subState = MechanicalShifting;
                    state_16_active = MechanicalShifting;
                    NOTIFY_TRANSITION_TERMINATED("2");
                    res = eventConsumed;
                }
            
            
        }
        break;
        // State SCS_1
        case SCS_1:
        {
            if(IS_EVENT_TYPE_OF(OMNullEventId))
                {
                    //## transition 10 
                    if(leftSide)
                        {
                            NOTIFY_TRANSITION_STARTED("8");
                            NOTIFY_TRANSITION_STARTED("10");
                            popNullTransition();
                            NOTIFY_STATE_EXITED("ROOT.ControllingGears.state_16.SCS_1");
                            NOTIFY_STATE_ENTERED("ROOT.ControllingGears.state_16.sendaction_2");
                            pushNullTransition();
                            state_16_subState = sendaction_2;
                            state_16_active = sendaction_2;
                            //#[ state ControllingGears.state_16.sendaction_2.(Entry) 
                            OUT_PORT(pMainShift)->GEN(evLeftShiftDown);
                            //#]
                            NOTIFY_TRANSITION_TERMINATED("10");
                            NOTIFY_TRANSITION_TERMINATED("8");
                            res = eventConsumed;
                        }
                    else
                        {
                            NOTIFY_TRANSITION_STARTED("8");
                            NOTIFY_TRANSITION_STARTED("9");
                            popNullTransition();
                            NOTIFY_STATE_EXITED("ROOT.ControllingGears.state_16.SCS_1");
                            NOTIFY_STATE_ENTERED("ROOT.ControllingGears.state_16.sendaction_7");
                            pushNullTransition();
                            state_16_subState = sendaction_7;
                            state_16_active = sendaction_7;
                            //#[ state ControllingGears.state_16.sendaction_7.(Entry) 
                            OUT_PORT(pMainShift)->GEN(evRightShiftDown);
                            //#]
                            NOTIFY_TRANSITION_TERMINATED("9");
                            NOTIFY_TRANSITION_TERMINATED("8");
                            res = eventConsumed;
                        }
                }
            
            
        }
        break;
        // State sendaction_7
        case sendaction_7:
        {
            if(IS_EVENT_TYPE_OF(OMNullEventId))
                {
                    NOTIFY_TRANSITION_STARTED("7");
                    popNullTransition();
                    NOTIFY_STATE_EXITED("ROOT.ControllingGears.state_16.sendaction_7");
                    NOTIFY_STATE_ENTERED("ROOT.ControllingGears.state_16.MechanicalShifting");
                    state_16_subState = MechanicalShifting;
                    state_16_active = MechanicalShifting;
                    NOTIFY_TRANSITION_TERMINATED("7");
                    res = eventConsumed;
                }
            
            
        }
        break;
        // State SCS_2
        case SCS_2:
        {
            if(IS_EVENT_TYPE_OF(OMNullEventId))
                {
                    //## transition 12 
                    if(leftSide)
                        {
                            NOTIFY_TRANSITION_STARTED("11");
                            NOTIFY_TRANSITION_STARTED("12");
                            popNullTransition();
                            NOTIFY_STATE_EXITED("ROOT.ControllingGears.state_16.SCS_2");
                            NOTIFY_STATE_ENTERED("ROOT.ControllingGears.state_16.sendaction_9");
                            pushNullTransition();
                            state_16_subState = sendaction_9;
                            state_16_active = sendaction_9;
                            //#[ state ControllingGears.state_16.sendaction_9.(Entry) 
                            OUT_PORT(pMainShift)->GEN(evLeftShiftUp);
                            //#]
                            NOTIFY_TRANSITION_TERMINATED("12");
                            NOTIFY_TRANSITION_TERMINATED("11");
                            res = eventConsumed;
                        }
                    else
                        {
                            NOTIFY_TRANSITION_STARTED("11");
                            NOTIFY_TRANSITION_STARTED("13");
                            popNullTransition();
                            NOTIFY_STATE_EXITED("ROOT.ControllingGears.state_16.SCS_2");
                            NOTIFY_STATE_ENTERED("ROOT.ControllingGears.state_16.sendaction_10");
                            pushNullTransition();
                            state_16_subState = sendaction_10;
                            state_16_active = sendaction_10;
                            //#[ state ControllingGears.state_16.sendaction_10.(Entry) 
                            OUT_PORT(pMainShift)->GEN(evRightShiftUp);
                            //#]
                            NOTIFY_TRANSITION_TERMINATED("13");
                            NOTIFY_TRANSITION_TERMINATED("11");
                            res = eventConsumed;
                        }
                }
            
            
        }
        break;
        // State sendaction_9
        case sendaction_9:
        {
            if(IS_EVENT_TYPE_OF(OMNullEventId))
                {
                    NOTIFY_TRANSITION_STARTED("15");
                    popNullTransition();
                    NOTIFY_STATE_EXITED("ROOT.ControllingGears.state_16.sendaction_9");
                    NOTIFY_STATE_ENTERED("ROOT.ControllingGears.state_16.MechanicalShifting");
                    state_16_subState = MechanicalShifting;
                    state_16_active = MechanicalShifting;
                    NOTIFY_TRANSITION_TERMINATED("15");
                    res = eventConsumed;
                }
            
            
        }
        break;
        // State sendaction_10
        case sendaction_10:
        {
            if(IS_EVENT_TYPE_OF(OMNullEventId))
                {
                    NOTIFY_TRANSITION_STARTED("14");
                    popNullTransition();
                    NOTIFY_STATE_EXITED("ROOT.ControllingGears.state_16.sendaction_10");
                    NOTIFY_STATE_ENTERED("ROOT.ControllingGears.state_16.MechanicalShifting");
                    state_16_subState = MechanicalShifting;
                    state_16_active = MechanicalShifting;
                    NOTIFY_TRANSITION_TERMINATED("14");
                    res = eventConsumed;
                }
            
            
        }
        break;
        // State SCS_3
        case SCS_3:
        {
            if(IS_EVENT_TYPE_OF(OMNullEventId))
                {
                    //## transition 18 
                    if(DIUp)
                        {
                            NOTIFY_TRANSITION_STARTED("17");
                            NOTIFY_TRANSITION_STARTED("18");
                            popNullTransition();
                            NOTIFY_STATE_EXITED("ROOT.ControllingGears.state_16.SCS_3");
                            NOTIFY_STATE_ENTERED("ROOT.ControllingGears.state_16.sendaction_13");
                            pushNullTransition();
                            state_16_subState = sendaction_13;
                            state_16_active = sendaction_13;
                            //#[ state ControllingGears.state_16.sendaction_13.(Entry) 
                            OUT_PORT(pMainShift)->GEN(evDIUp);
                            //#]
                            NOTIFY_TRANSITION_TERMINATED("18");
                            NOTIFY_TRANSITION_TERMINATED("17");
                            res = eventConsumed;
                        }
                    else
                        {
                            NOTIFY_TRANSITION_STARTED("17");
                            NOTIFY_TRANSITION_STARTED("19");
                            popNullTransition();
                            NOTIFY_STATE_EXITED("ROOT.ControllingGears.state_16.SCS_3");
                            NOTIFY_STATE_ENTERED("ROOT.ControllingGears.state_16.sendaction_12");
                            pushNullTransition();
                            state_16_subState = sendaction_12;
                            state_16_active = sendaction_12;
                            //#[ state ControllingGears.state_16.sendaction_12.(Entry) 
                            OUT_PORT(pMainShift)->GEN(evDIDown);
                            //#]
                            NOTIFY_TRANSITION_TERMINATED("19");
                            NOTIFY_TRANSITION_TERMINATED("17");
                            res = eventConsumed;
                        }
                }
            
            
        }
        break;
        // State sendaction_12
        case sendaction_12:
        {
            if(IS_EVENT_TYPE_OF(OMNullEventId))
                {
                    NOTIFY_TRANSITION_STARTED("20");
                    popNullTransition();
                    NOTIFY_STATE_EXITED("ROOT.ControllingGears.state_16.sendaction_12");
                    NOTIFY_STATE_ENTERED("ROOT.ControllingGears.state_16.DIShifting");
                    state_16_subState = DIShifting;
                    state_16_active = DIShifting;
                    NOTIFY_TRANSITION_TERMINATED("20");
                    res = eventConsumed;
                }
            
            
        }
        break;
        // State sendaction_13
        case sendaction_13:
        {
            if(IS_EVENT_TYPE_OF(OMNullEventId))
                {
                    NOTIFY_TRANSITION_STARTED("21");
                    popNullTransition();
                    NOTIFY_STATE_EXITED("ROOT.ControllingGears.state_16.sendaction_13");
                    NOTIFY_STATE_ENTERED("ROOT.ControllingGears.state_16.DIShifting");
                    state_16_subState = DIShifting;
                    state_16_active = DIShifting;
                    NOTIFY_TRANSITION_TERMINATED("21");
                    res = eventConsumed;
                }
            
            
        }
        break;
        default:
            break;
    }
    return res;
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedGearControl::serializeAttributes(AOMSAttributes* aomsAttributes) const {
    aomsAttributes->addAttribute("leftSide", x2String(myReal->leftSide));
    aomsAttributes->addAttribute("DIUp", x2String(myReal->DIUp));
    aomsAttributes->addAttribute("currentChainRing", x2String(myReal->currentChainRing));
    aomsAttributes->addAttribute("currentCassetteRing", x2String(myReal->currentCassetteRing));
}

void OMAnimatedGearControl::serializeRelations(AOMSRelations* aomsRelations) const {
    aomsRelations->addRelation("rightShifter", true, true);
    aomsRelations->ADD_ITEM(&myReal->rightShifter);
    aomsRelations->addRelation("DIUpShifter", true, true);
    aomsRelations->ADD_ITEM(&myReal->DIUpShifter);
    aomsRelations->addRelation("DIDownShifter", true, true);
    aomsRelations->ADD_ITEM(&myReal->DIDownShifter);
    aomsRelations->addRelation("leftShifter", true, true);
    aomsRelations->ADD_ITEM(&myReal->leftShifter);
}

void OMAnimatedGearControl::rootState_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT");
    switch (myReal->rootState_subState) {
        case GearControl::Iniitializeing:
        {
            Iniitializeing_serializeStates(aomsState);
        }
        break;
        case GearControl::ControllingGears:
        {
            ControllingGears_serializeStates(aomsState);
        }
        break;
        default:
            break;
    }
}

void OMAnimatedGearControl::Iniitializeing_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.Iniitializeing");
}

void OMAnimatedGearControl::ControllingGears_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.ControllingGears");
    state_16_serializeStates(aomsState);
    state_17_serializeStates(aomsState);
}

void OMAnimatedGearControl::state_17_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.ControllingGears.state_17");
    if(myReal->state_17_subState == GearControl::WaitingFoGearingUpdate)
        {
            WaitingFoGearingUpdate_serializeStates(aomsState);
        }
}

void OMAnimatedGearControl::WaitingFoGearingUpdate_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.ControllingGears.state_17.WaitingFoGearingUpdate");
}

void OMAnimatedGearControl::state_16_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.ControllingGears.state_16");
    switch (myReal->state_16_subState) {
        case GearControl::MechanicalShifting:
        {
            MechanicalShifting_serializeStates(aomsState);
        }
        break;
        case GearControl::DIShifting:
        {
            DIShifting_serializeStates(aomsState);
        }
        break;
        case GearControl::sendaction_2:
        {
            sendaction_2_serializeStates(aomsState);
        }
        break;
        case GearControl::SCS_1:
        {
            SCS_1_serializeStates(aomsState);
        }
        break;
        case GearControl::sendaction_7:
        {
            sendaction_7_serializeStates(aomsState);
        }
        break;
        case GearControl::SCS_2:
        {
            SCS_2_serializeStates(aomsState);
        }
        break;
        case GearControl::sendaction_9:
        {
            sendaction_9_serializeStates(aomsState);
        }
        break;
        case GearControl::sendaction_10:
        {
            sendaction_10_serializeStates(aomsState);
        }
        break;
        case GearControl::SCS_3:
        {
            SCS_3_serializeStates(aomsState);
        }
        break;
        case GearControl::sendaction_12:
        {
            sendaction_12_serializeStates(aomsState);
        }
        break;
        case GearControl::sendaction_13:
        {
            sendaction_13_serializeStates(aomsState);
        }
        break;
        default:
            break;
    }
}

void OMAnimatedGearControl::sendaction_9_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.ControllingGears.state_16.sendaction_9");
}

void OMAnimatedGearControl::sendaction_7_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.ControllingGears.state_16.sendaction_7");
}

void OMAnimatedGearControl::sendaction_2_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.ControllingGears.state_16.sendaction_2");
}

void OMAnimatedGearControl::sendaction_13_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.ControllingGears.state_16.sendaction_13");
}

void OMAnimatedGearControl::sendaction_12_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.ControllingGears.state_16.sendaction_12");
}

void OMAnimatedGearControl::sendaction_10_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.ControllingGears.state_16.sendaction_10");
}

void OMAnimatedGearControl::SCS_3_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.ControllingGears.state_16.SCS_3");
}

void OMAnimatedGearControl::SCS_2_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.ControllingGears.state_16.SCS_2");
}

void OMAnimatedGearControl::SCS_1_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.ControllingGears.state_16.SCS_1");
}

void OMAnimatedGearControl::MechanicalShifting_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.ControllingGears.state_16.MechanicalShifting");
}

void OMAnimatedGearControl::DIShifting_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.ControllingGears.state_16.DIShifting");
}
//#]

IMPLEMENT_REACTIVE_META_P(GearControl, DesignSynthesisPkg_RiderInteractionDesignPkg, DesignSynthesisPkg::RiderInteractionDesignPkg, false, OMAnimatedGearControl)

IMPLEMENT_META_OP(OMAnimatedGearControl, DesignSynthesisPkg_RiderInteractionDesignPkg_GearControl_setCurrentCassetteRing_int, "setCurrentCassetteRing", FALSE, "setCurrentCassetteRing(int)", 1)

IMPLEMENT_OP_CALL(DesignSynthesisPkg_RiderInteractionDesignPkg_GearControl_setCurrentCassetteRing_int, GearControl, setCurrentCassetteRing(p_currentCassetteRing), NO_OP())

IMPLEMENT_META_OP(OMAnimatedGearControl, DesignSynthesisPkg_RiderInteractionDesignPkg_GearControl_setCurrentChainRing_int, "setCurrentChainRing", FALSE, "setCurrentChainRing(int)", 1)

IMPLEMENT_OP_CALL(DesignSynthesisPkg_RiderInteractionDesignPkg_GearControl_setCurrentChainRing_int, GearControl, setCurrentChainRing(p_currentChainRing), NO_OP())
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: GearShiftingTestComponent/GSC_Test_Animation/GearControl.cpp
*********************************************************************/
