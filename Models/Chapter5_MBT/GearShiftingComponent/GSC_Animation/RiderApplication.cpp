/********************************************************************
	Rhapsody	: 9.0 
	Login		: Bruce
	Component	: GearShiftingComponent 
	Configuration 	: GSC_Animation
	Model Element	: RiderApplication
//!	Generated Date	: Sat, 28, Nov 2020  
	File Path	: GearShiftingComponent/GSC_Animation/RiderApplication.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX

#define _OMSTATECHART_ANIMATED
//#]

//## auto_generated
#include "RiderApplication.h"
//#[ ignore
#define DesignSynthesisPkg_RiderInteractionDesignPkg_RiderApplication_RiderApplication_SERIALIZE OM_NO_OP

#define DesignSynthesisPkg_RiderInteractionDesignPkg_RiderApplication_augmentCassetteRing_SERIALIZE OM_NO_OP

#define DesignSynthesisPkg_RiderInteractionDesignPkg_RiderApplication_augmentChainRing_SERIALIZE OM_NO_OP

#define DesignSynthesisPkg_RiderInteractionDesignPkg_RiderApplication_decrementCassetteRing_SERIALIZE OM_NO_OP

#define DesignSynthesisPkg_RiderInteractionDesignPkg_RiderApplication_decrementChainRing_SERIALIZE OM_NO_OP

#define OMAnim_DesignSynthesisPkg_RiderInteractionDesignPkg_RiderApplication_setCassetteRingNumber_int_UNSERIALIZE_ARGS OP_UNSER(OMDestructiveString2X,p_cassetteRingNumber)

#define OMAnim_DesignSynthesisPkg_RiderInteractionDesignPkg_RiderApplication_setCassetteRingNumber_int_SERIALIZE_RET_VAL

#define OMAnim_DesignSynthesisPkg_RiderInteractionDesignPkg_RiderApplication_setChainRingNumber_int_UNSERIALIZE_ARGS OP_UNSER(OMDestructiveString2X,p_chainRingNumber)

#define OMAnim_DesignSynthesisPkg_RiderInteractionDesignPkg_RiderApplication_setChainRingNumber_int_SERIALIZE_RET_VAL

#define OMAnim_DesignSynthesisPkg_RiderInteractionDesignPkg_RiderApplication_setUseMechanicalShifting_bool_UNSERIALIZE_ARGS OP_UNSER(OMDestructiveString2X,p_useMechanicalShifting)

#define OMAnim_DesignSynthesisPkg_RiderInteractionDesignPkg_RiderApplication_setUseMechanicalShifting_bool_SERIALIZE_RET_VAL
//#]

//## package DesignSynthesisPkg::RiderInteractionDesignPkg

//## class RiderApplication
//#[ ignore
RiderApplication::pRiderShift_C::InBound_C::InBound_C() {
    itsEvDIDown_ProxyReceptionInterface = NULL;
    itsEvDIUp_ProxyReceptionInterface = NULL;
    itsEvLeftShiftDown_ProxyReceptionInterface = NULL;
    itsEvLeftShiftUp_ProxyReceptionInterface = NULL;
    itsEvRightShiftDown_ProxyReceptionInterface = NULL;
    itsEvRightShiftUp_ProxyReceptionInterface = NULL;
    port = NULL;
}

RiderApplication::pRiderShift_C::InBound_C::~InBound_C() {
    cleanUpRelations();
}

bool RiderApplication::pRiderShift_C::InBound_C::send(IOxfEvent* event, const IOxfEventGenerationParams& params) {
    bool res = false;
    if (event != NULL) {
        event->setPort(getPort());
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

bool RiderApplication::pRiderShift_C::InBound_C::send(IOxfEvent* event) {
    bool res = false;
    if (event != NULL) {
        event->setPort(getPort());
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

void RiderApplication::pRiderShift_C::InBound_C::setItsEvDIDown_ProxyReceptionInterface(evDIDown_ProxyReceptionInterface* p_evDIDown_ProxyReceptionInterface) {
    itsEvDIDown_ProxyReceptionInterface = p_evDIDown_ProxyReceptionInterface;
}

void RiderApplication::pRiderShift_C::InBound_C::setItsEvDIUp_ProxyReceptionInterface(evDIUp_ProxyReceptionInterface* p_evDIUp_ProxyReceptionInterface) {
    itsEvDIUp_ProxyReceptionInterface = p_evDIUp_ProxyReceptionInterface;
}

void RiderApplication::pRiderShift_C::InBound_C::setItsEvLeftShiftDown_ProxyReceptionInterface(evLeftShiftDown_ProxyReceptionInterface* p_evLeftShiftDown_ProxyReceptionInterface) {
    itsEvLeftShiftDown_ProxyReceptionInterface = p_evLeftShiftDown_ProxyReceptionInterface;
}

void RiderApplication::pRiderShift_C::InBound_C::setItsEvLeftShiftUp_ProxyReceptionInterface(evLeftShiftUp_ProxyReceptionInterface* p_evLeftShiftUp_ProxyReceptionInterface) {
    itsEvLeftShiftUp_ProxyReceptionInterface = p_evLeftShiftUp_ProxyReceptionInterface;
}

void RiderApplication::pRiderShift_C::InBound_C::setItsEvRightShiftDown_ProxyReceptionInterface(evRightShiftDown_ProxyReceptionInterface* p_evRightShiftDown_ProxyReceptionInterface) {
    itsEvRightShiftDown_ProxyReceptionInterface = p_evRightShiftDown_ProxyReceptionInterface;
}

void RiderApplication::pRiderShift_C::InBound_C::setItsEvRightShiftUp_ProxyReceptionInterface(evRightShiftUp_ProxyReceptionInterface* p_evRightShiftUp_ProxyReceptionInterface) {
    itsEvRightShiftUp_ProxyReceptionInterface = p_evRightShiftUp_ProxyReceptionInterface;
}

RiderApplication::pRiderShift_C* RiderApplication::pRiderShift_C::InBound_C::getPort() const {
    return port;
}

void RiderApplication::pRiderShift_C::InBound_C::setPort(RiderApplication::pRiderShift_C* p_pRiderShift_C) {
    _setPort(p_pRiderShift_C);
}

void RiderApplication::pRiderShift_C::InBound_C::cleanUpRelations() {
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
    if(port != NULL)
        {
            port = NULL;
        }
}

void RiderApplication::pRiderShift_C::InBound_C::__setPort(RiderApplication::pRiderShift_C* p_pRiderShift_C) {
    port = p_pRiderShift_C;
}

void RiderApplication::pRiderShift_C::InBound_C::_setPort(RiderApplication::pRiderShift_C* p_pRiderShift_C) {
    __setPort(p_pRiderShift_C);
}

void RiderApplication::pRiderShift_C::InBound_C::_clearPort() {
    port = NULL;
}

RiderApplication::pRiderShift_C::OutBound_C::OutBound_C() {
    itsEvDIShifting_ProxyReceptionInterface = NULL;
    itsEvDisplayGearing_ProxyReceptionInterface = NULL;
    itsEvMechanicalShifting_ProxyReceptionInterface = NULL;
}

RiderApplication::pRiderShift_C::OutBound_C::~OutBound_C() {
    cleanUpRelations();
}

bool RiderApplication::pRiderShift_C::OutBound_C::send(IOxfEvent* event, const IOxfEventGenerationParams& params) {
    bool res = false;
    if (event != NULL) {
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

bool RiderApplication::pRiderShift_C::OutBound_C::send(IOxfEvent* event) {
    bool res = false;
    if (event != NULL) {
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

void RiderApplication::pRiderShift_C::OutBound_C::setItsEvDIShifting_ProxyReceptionInterface(OMReactive* p_OMReactive) {
    itsEvDIShifting_ProxyReceptionInterface = p_OMReactive;
}

void RiderApplication::pRiderShift_C::OutBound_C::setItsEvDisplayGearing_ProxyReceptionInterface(OMReactive* p_OMReactive) {
    itsEvDisplayGearing_ProxyReceptionInterface = p_OMReactive;
}

void RiderApplication::pRiderShift_C::OutBound_C::setItsEvMechanicalShifting_ProxyReceptionInterface(OMReactive* p_OMReactive) {
    itsEvMechanicalShifting_ProxyReceptionInterface = p_OMReactive;
}

void RiderApplication::pRiderShift_C::OutBound_C::cleanUpRelations() {
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
}

RiderApplication::pRiderShift_C::pRiderShift_C() : _p_(0) {
    initRelations();
}

RiderApplication::pRiderShift_C::~pRiderShift_C() {
}

void RiderApplication::pRiderShift_C::connectRiderApplication(RiderApplication* part) {
    InBound.setItsEvDIDown_ProxyReceptionInterface(part);
    InBound.setItsEvDIUp_ProxyReceptionInterface(part);
    InBound.setItsEvLeftShiftDown_ProxyReceptionInterface(part);
    InBound.setItsEvLeftShiftUp_ProxyReceptionInterface(part);
    InBound.setItsEvRightShiftDown_ProxyReceptionInterface(part);
    InBound.setItsEvRightShiftUp_ProxyReceptionInterface(part);
    InBound.setPort(this); // for IS_PORT macro support
    
}

evDIDown_ProxyReceptionInterface* RiderApplication::pRiderShift_C::getItsEvDIDown_ProxyReceptionInterface() {
    return &InBound;
}

evDIShifting_ProxyReceptionInterface* RiderApplication::pRiderShift_C::getItsEvDIShifting_ProxyReceptionInterface() {
    return &OutBound;
}

evDIUp_ProxyReceptionInterface* RiderApplication::pRiderShift_C::getItsEvDIUp_ProxyReceptionInterface() {
    return &InBound;
}

evDisplayGearing_ProxyReceptionInterface* RiderApplication::pRiderShift_C::getItsEvDisplayGearing_ProxyReceptionInterface() {
    return &OutBound;
}

evLeftShiftDown_ProxyReceptionInterface* RiderApplication::pRiderShift_C::getItsEvLeftShiftDown_ProxyReceptionInterface() {
    return &InBound;
}

evLeftShiftUp_ProxyReceptionInterface* RiderApplication::pRiderShift_C::getItsEvLeftShiftUp_ProxyReceptionInterface() {
    return &InBound;
}

evMechanicalShifting_ProxyReceptionInterface* RiderApplication::pRiderShift_C::getItsEvMechanicalShifting_ProxyReceptionInterface() {
    return &OutBound;
}

evRightShiftDown_ProxyReceptionInterface* RiderApplication::pRiderShift_C::getItsEvRightShiftDown_ProxyReceptionInterface() {
    return &InBound;
}

evRightShiftUp_ProxyReceptionInterface* RiderApplication::pRiderShift_C::getItsEvRightShiftUp_ProxyReceptionInterface() {
    return &InBound;
}

void RiderApplication::pRiderShift_C::setItsEvDIDown_ProxyReceptionInterface(evDIDown_ProxyReceptionInterface* p_evDIDown_ProxyReceptionInterface) {
    InBound.setItsEvDIDown_ProxyReceptionInterface(p_evDIDown_ProxyReceptionInterface);
}

void RiderApplication::pRiderShift_C::setItsEvDIShifting_ProxyReceptionInterface(OMReactive* p_evDIShifting_ProxyReceptionInterface) {
    OutBound.setItsEvDIShifting_ProxyReceptionInterface(p_evDIShifting_ProxyReceptionInterface);
}

void RiderApplication::pRiderShift_C::setItsEvDIUp_ProxyReceptionInterface(evDIUp_ProxyReceptionInterface* p_evDIUp_ProxyReceptionInterface) {
    InBound.setItsEvDIUp_ProxyReceptionInterface(p_evDIUp_ProxyReceptionInterface);
}

void RiderApplication::pRiderShift_C::setItsEvDisplayGearing_ProxyReceptionInterface(OMReactive* p_evDisplayGearing_ProxyReceptionInterface) {
    OutBound.setItsEvDisplayGearing_ProxyReceptionInterface(p_evDisplayGearing_ProxyReceptionInterface);
}

void RiderApplication::pRiderShift_C::setItsEvLeftShiftDown_ProxyReceptionInterface(evLeftShiftDown_ProxyReceptionInterface* p_evLeftShiftDown_ProxyReceptionInterface) {
    InBound.setItsEvLeftShiftDown_ProxyReceptionInterface(p_evLeftShiftDown_ProxyReceptionInterface);
}

void RiderApplication::pRiderShift_C::setItsEvLeftShiftUp_ProxyReceptionInterface(evLeftShiftUp_ProxyReceptionInterface* p_evLeftShiftUp_ProxyReceptionInterface) {
    InBound.setItsEvLeftShiftUp_ProxyReceptionInterface(p_evLeftShiftUp_ProxyReceptionInterface);
}

void RiderApplication::pRiderShift_C::setItsEvMechanicalShifting_ProxyReceptionInterface(OMReactive* p_evMechanicalShifting_ProxyReceptionInterface) {
    OutBound.setItsEvMechanicalShifting_ProxyReceptionInterface(p_evMechanicalShifting_ProxyReceptionInterface);
}

void RiderApplication::pRiderShift_C::setItsEvRightShiftDown_ProxyReceptionInterface(evRightShiftDown_ProxyReceptionInterface* p_evRightShiftDown_ProxyReceptionInterface) {
    InBound.setItsEvRightShiftDown_ProxyReceptionInterface(p_evRightShiftDown_ProxyReceptionInterface);
}

void RiderApplication::pRiderShift_C::setItsEvRightShiftUp_ProxyReceptionInterface(evRightShiftUp_ProxyReceptionInterface* p_evRightShiftUp_ProxyReceptionInterface) {
    InBound.setItsEvRightShiftUp_ProxyReceptionInterface(p_evRightShiftUp_ProxyReceptionInterface);
}

RiderApplication::pRiderShift_C::InBound_C* RiderApplication::pRiderShift_C::getInBound() const {
    return (RiderApplication::pRiderShift_C::InBound_C*) &InBound;
}

RiderApplication::pRiderShift_C::OutBound_C* RiderApplication::pRiderShift_C::getOutBound() const {
    return (RiderApplication::pRiderShift_C::OutBound_C*) &OutBound;
}

void RiderApplication::pRiderShift_C::initRelations() {
    InBound._setPort(this);
}

void RiderApplication::pRiderShift_C::destroy() {
}
//#]

RiderApplication::RiderApplication(IOxfActive* theActiveContext) : cassetteRingNumber(1), chainRingNumber(1), maxCassetteRings(12), maxChainRings(3), useMechanicalShifting(TRUE) {
    NOTIFY_REACTIVE_CONSTRUCTOR(RiderApplication, RiderApplication(), 0, DesignSynthesisPkg_RiderInteractionDesignPkg_RiderApplication_RiderApplication_SERIALIZE);
    setActiveContext(theActiveContext, false);
    initRelations();
    initStatechart();
}

RiderApplication::~RiderApplication() {
    NOTIFY_DESTRUCTOR(~RiderApplication, true);
}

void RiderApplication::augmentCassetteRing() {
    NOTIFY_OPERATION(augmentCassetteRing, augmentCassetteRing(), 0, DesignSynthesisPkg_RiderInteractionDesignPkg_RiderApplication_augmentCassetteRing_SERIALIZE);
    //#[ operation augmentCassetteRing()
    if (cassetteRingNumber < maxCassetteRings) cassetteRingNumber++;
    //#]
}

void RiderApplication::augmentChainRing() {
    NOTIFY_OPERATION(augmentChainRing, augmentChainRing(), 0, DesignSynthesisPkg_RiderInteractionDesignPkg_RiderApplication_augmentChainRing_SERIALIZE);
    //#[ operation augmentChainRing()
    if (chainRingNumber <= maxChainRings) chainRingNumber++;
    //#]
}

void RiderApplication::decrementCassetteRing() {
    NOTIFY_OPERATION(decrementCassetteRing, decrementCassetteRing(), 0, DesignSynthesisPkg_RiderInteractionDesignPkg_RiderApplication_decrementCassetteRing_SERIALIZE);
    //#[ operation decrementCassetteRing()
    if (cassetteRingNumber >1) cassetteRingNumber--;
    //#]
}

void RiderApplication::decrementChainRing() {
    NOTIFY_OPERATION(decrementChainRing, decrementChainRing(), 0, DesignSynthesisPkg_RiderInteractionDesignPkg_RiderApplication_decrementChainRing_SERIALIZE);
    //#[ operation decrementChainRing()
    if (chainRingNumber > 1) chainRingNumber--;
    //#]
}

RiderApplication::pRiderShift_C* RiderApplication::getPRiderShift() const {
    return (RiderApplication::pRiderShift_C*) &pRiderShift;
}

RiderApplication::pRiderShift_C* RiderApplication::get_pRiderShift() const {
    return (RiderApplication::pRiderShift_C*) &pRiderShift;
}

int RiderApplication::getCassetteRingNumber() const {
    return cassetteRingNumber;
}

void RiderApplication::setCassetteRingNumber(int p_cassetteRingNumber) {
    cassetteRingNumber = p_cassetteRingNumber;
    NOTIFY_SET_OPERATION;
}

int RiderApplication::getChainRingNumber() const {
    return chainRingNumber;
}

void RiderApplication::setChainRingNumber(int p_chainRingNumber) {
    chainRingNumber = p_chainRingNumber;
    NOTIFY_SET_OPERATION;
}

int RiderApplication::getMaxCassetteRings() const {
    return maxCassetteRings;
}

void RiderApplication::setMaxCassetteRings(int p_maxCassetteRings) {
    maxCassetteRings = p_maxCassetteRings;
}

int RiderApplication::getMaxChainRings() const {
    return maxChainRings;
}

void RiderApplication::setMaxChainRings(int p_maxChainRings) {
    maxChainRings = p_maxChainRings;
}

bool RiderApplication::getUseMechanicalShifting() const {
    return useMechanicalShifting;
}

void RiderApplication::setUseMechanicalShifting(bool p_useMechanicalShifting) {
    useMechanicalShifting = p_useMechanicalShifting;
    NOTIFY_SET_OPERATION;
}

bool RiderApplication::startBehavior() {
    bool done = false;
    done = OMReactive::startBehavior();
    return done;
}

void RiderApplication::initRelations() {
    if (get_pRiderShift() != NULL) {
        get_pRiderShift()->connectRiderApplication(this);
    }
}

void RiderApplication::initStatechart() {
    rootState_subState = OMNonState;
    rootState_active = OMNonState;
}

void RiderApplication::rootState_entDef() {
    {
        NOTIFY_STATE_ENTERED("ROOT");
        NOTIFY_TRANSITION_STARTED("0");
        NOTIFY_STATE_ENTERED("ROOT.Off");
        rootState_subState = Off;
        rootState_active = Off;
        NOTIFY_TRANSITION_TERMINATED("0");
    }
}

IOxfReactive::TakeEventStatus RiderApplication::rootState_processEvent() {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    switch (rootState_active) {
        // State Off
        case Off:
        {
            if(IS_EVENT_TYPE_OF(evStart_RiderInteractionDesignPkg_DesignSynthesisPkg_id))
                {
                    //## transition 13 
                    if(useMechanicalShifting)
                        {
                            NOTIFY_TRANSITION_STARTED("11");
                            NOTIFY_TRANSITION_STARTED("13");
                            NOTIFY_STATE_EXITED("ROOT.Off");
                            NOTIFY_STATE_ENTERED("ROOT.sendaction_4");
                            pushNullTransition();
                            rootState_subState = sendaction_4;
                            rootState_active = sendaction_4;
                            //#[ state sendaction_4.(Entry) 
                            OUT_PORT(pRiderShift)->GEN(evMechanicalShifting);
                            //#]
                            NOTIFY_TRANSITION_TERMINATED("13");
                            NOTIFY_TRANSITION_TERMINATED("11");
                            res = eventConsumed;
                        }
                    else
                        {
                            NOTIFY_TRANSITION_STARTED("11");
                            NOTIFY_TRANSITION_STARTED("12");
                            NOTIFY_STATE_EXITED("ROOT.Off");
                            NOTIFY_STATE_ENTERED("ROOT.sendaction_3");
                            pushNullTransition();
                            rootState_subState = sendaction_3;
                            rootState_active = sendaction_3;
                            //#[ state sendaction_3.(Entry) 
                            OUT_PORT(pRiderShift)->GEN(evDIShifting);
                            //#]
                            NOTIFY_TRANSITION_TERMINATED("12");
                            NOTIFY_TRANSITION_TERMINATED("11");
                            res = eventConsumed;
                        }
                }
            
        }
        break;
        // State MechanicalShifting
        case MechanicalShifting:
        {
            res = MechanicalShifting_handleEvent();
        }
        break;
        // State DIShifting
        case DIShifting:
        {
            if(IS_EVENT_TYPE_OF(evDIDown_RiderInteractionDesignPkg_DesignSynthesisPkg_id))
                {
                    NOTIFY_TRANSITION_STARTED("6");
                    NOTIFY_STATE_EXITED("ROOT.DIShifting");
                    NOTIFY_STATE_ENTERED("ROOT.DIShifting");
                    rootState_subState = DIShifting;
                    rootState_active = DIShifting;
                    NOTIFY_TRANSITION_TERMINATED("6");
                    res = eventConsumed;
                }
            else if(IS_EVENT_TYPE_OF(evMechanicalShifting_RiderInteractionDesignPkg_DesignSynthesisPkg_id))
                {
                    NOTIFY_TRANSITION_STARTED("7");
                    NOTIFY_STATE_EXITED("ROOT.DIShifting");
                    NOTIFY_STATE_ENTERED("ROOT.sendaction_4");
                    pushNullTransition();
                    rootState_subState = sendaction_4;
                    rootState_active = sendaction_4;
                    //#[ state sendaction_4.(Entry) 
                    OUT_PORT(pRiderShift)->GEN(evMechanicalShifting);
                    //#]
                    NOTIFY_TRANSITION_TERMINATED("7");
                    res = eventConsumed;
                }
            else if(IS_EVENT_TYPE_OF(evDIUp_RiderInteractionDesignPkg_DesignSynthesisPkg_id))
                {
                    NOTIFY_TRANSITION_STARTED("5");
                    NOTIFY_STATE_EXITED("ROOT.DIShifting");
                    NOTIFY_STATE_ENTERED("ROOT.DIShifting");
                    rootState_subState = DIShifting;
                    rootState_active = DIShifting;
                    NOTIFY_TRANSITION_TERMINATED("5");
                    res = eventConsumed;
                }
            
        }
        break;
        // State sendaction_3
        case sendaction_3:
        {
            if(IS_EVENT_TYPE_OF(OMNullEventId))
                {
                    NOTIFY_TRANSITION_STARTED("10");
                    popNullTransition();
                    NOTIFY_STATE_EXITED("ROOT.sendaction_3");
                    NOTIFY_STATE_ENTERED("ROOT.DIShifting");
                    rootState_subState = DIShifting;
                    rootState_active = DIShifting;
                    NOTIFY_TRANSITION_TERMINATED("10");
                    res = eventConsumed;
                }
            
        }
        break;
        // State sendaction_4
        case sendaction_4:
        {
            if(IS_EVENT_TYPE_OF(OMNullEventId))
                {
                    NOTIFY_TRANSITION_STARTED("9");
                    popNullTransition();
                    NOTIFY_STATE_EXITED("ROOT.sendaction_4");
                    NOTIFY_STATE_ENTERED("ROOT.MechanicalShifting");
                    rootState_subState = MechanicalShifting;
                    rootState_active = MechanicalShifting;
                    NOTIFY_TRANSITION_TERMINATED("9");
                    res = eventConsumed;
                }
            
        }
        break;
        // State sendaction_5
        case sendaction_5:
        {
            if(IS_EVENT_TYPE_OF(OMNullEventId))
                {
                    NOTIFY_TRANSITION_STARTED("14");
                    popNullTransition();
                    NOTIFY_STATE_EXITED("ROOT.sendaction_5");
                    NOTIFY_STATE_ENTERED("ROOT.MechanicalShifting");
                    rootState_subState = MechanicalShifting;
                    rootState_active = MechanicalShifting;
                    NOTIFY_TRANSITION_TERMINATED("14");
                    res = eventConsumed;
                }
            
        }
        break;
        default:
            break;
    }
    return res;
}

IOxfReactive::TakeEventStatus RiderApplication::MechanicalShifting_handleEvent() {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    if(IS_EVENT_TYPE_OF(evDIShifting_RiderInteractionDesignPkg_DesignSynthesisPkg_id))
        {
            NOTIFY_TRANSITION_STARTED("8");
            NOTIFY_STATE_EXITED("ROOT.MechanicalShifting");
            NOTIFY_STATE_ENTERED("ROOT.sendaction_3");
            pushNullTransition();
            rootState_subState = sendaction_3;
            rootState_active = sendaction_3;
            //#[ state sendaction_3.(Entry) 
            OUT_PORT(pRiderShift)->GEN(evDIShifting);
            //#]
            NOTIFY_TRANSITION_TERMINATED("8");
            res = eventConsumed;
        }
    else if(IS_EVENT_TYPE_OF(evRightShiftDown_RiderInteractionDesignPkg_DesignSynthesisPkg_id))
        {
            NOTIFY_TRANSITION_STARTED("4");
            NOTIFY_STATE_EXITED("ROOT.MechanicalShifting");
            //#[ transition 4 
            decrementCassetteRing();
            //#]
            NOTIFY_STATE_ENTERED("ROOT.sendaction_5");
            pushNullTransition();
            rootState_subState = sendaction_5;
            rootState_active = sendaction_5;
            //#[ state sendaction_5.(Entry) 
            OUT_PORT(pRiderShift)->GEN(evDisplayGearing(chainRingNumber,cassetteRingNumber));
            //#]
            NOTIFY_TRANSITION_TERMINATED("4");
            res = eventConsumed;
        }
    else if(IS_EVENT_TYPE_OF(evLeftShiftDown_RiderInteractionDesignPkg_DesignSynthesisPkg_id))
        {
            NOTIFY_TRANSITION_STARTED("2");
            NOTIFY_STATE_EXITED("ROOT.MechanicalShifting");
            //#[ transition 2 
            decrementChainRing();
            //#]
            NOTIFY_STATE_ENTERED("ROOT.sendaction_5");
            pushNullTransition();
            rootState_subState = sendaction_5;
            rootState_active = sendaction_5;
            //#[ state sendaction_5.(Entry) 
            OUT_PORT(pRiderShift)->GEN(evDisplayGearing(chainRingNumber,cassetteRingNumber));
            //#]
            NOTIFY_TRANSITION_TERMINATED("2");
            res = eventConsumed;
        }
    else if(IS_EVENT_TYPE_OF(evRightShiftUp_RiderInteractionDesignPkg_DesignSynthesisPkg_id))
        {
            NOTIFY_TRANSITION_STARTED("3");
            NOTIFY_STATE_EXITED("ROOT.MechanicalShifting");
            //#[ transition 3 
            augmentCassetteRing();
            //#]
            NOTIFY_STATE_ENTERED("ROOT.sendaction_5");
            pushNullTransition();
            rootState_subState = sendaction_5;
            rootState_active = sendaction_5;
            //#[ state sendaction_5.(Entry) 
            OUT_PORT(pRiderShift)->GEN(evDisplayGearing(chainRingNumber,cassetteRingNumber));
            //#]
            NOTIFY_TRANSITION_TERMINATED("3");
            res = eventConsumed;
        }
    else if(IS_EVENT_TYPE_OF(evLeftShiftUp_RiderInteractionDesignPkg_DesignSynthesisPkg_id))
        {
            NOTIFY_TRANSITION_STARTED("1");
            NOTIFY_STATE_EXITED("ROOT.MechanicalShifting");
            //#[ transition 1 
            augmentChainRing();
            //#]
            NOTIFY_STATE_ENTERED("ROOT.sendaction_5");
            pushNullTransition();
            rootState_subState = sendaction_5;
            rootState_active = sendaction_5;
            //#[ state sendaction_5.(Entry) 
            OUT_PORT(pRiderShift)->GEN(evDisplayGearing(chainRingNumber,cassetteRingNumber));
            //#]
            NOTIFY_TRANSITION_TERMINATED("1");
            res = eventConsumed;
        }
    
    return res;
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedRiderApplication::serializeAttributes(AOMSAttributes* aomsAttributes) const {
    aomsAttributes->addAttribute("useMechanicalShifting", x2String(myReal->useMechanicalShifting));
    aomsAttributes->addAttribute("chainRingNumber", x2String(myReal->chainRingNumber));
    aomsAttributes->addAttribute("cassetteRingNumber", x2String(myReal->cassetteRingNumber));
    aomsAttributes->addAttribute("maxChainRings", x2String(myReal->maxChainRings));
    aomsAttributes->addAttribute("maxCassetteRings", x2String(myReal->maxCassetteRings));
}

void OMAnimatedRiderApplication::serializeRelations(AOMSRelations* aomsRelations) const {
}

void OMAnimatedRiderApplication::rootState_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT");
    switch (myReal->rootState_subState) {
        case RiderApplication::Off:
        {
            Off_serializeStates(aomsState);
        }
        break;
        case RiderApplication::MechanicalShifting:
        {
            MechanicalShifting_serializeStates(aomsState);
        }
        break;
        case RiderApplication::DIShifting:
        {
            DIShifting_serializeStates(aomsState);
        }
        break;
        case RiderApplication::sendaction_3:
        {
            sendaction_3_serializeStates(aomsState);
        }
        break;
        case RiderApplication::sendaction_4:
        {
            sendaction_4_serializeStates(aomsState);
        }
        break;
        case RiderApplication::sendaction_5:
        {
            sendaction_5_serializeStates(aomsState);
        }
        break;
        default:
            break;
    }
}

void OMAnimatedRiderApplication::sendaction_5_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.sendaction_5");
}

void OMAnimatedRiderApplication::sendaction_4_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.sendaction_4");
}

void OMAnimatedRiderApplication::sendaction_3_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.sendaction_3");
}

void OMAnimatedRiderApplication::Off_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.Off");
}

void OMAnimatedRiderApplication::MechanicalShifting_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.MechanicalShifting");
}

void OMAnimatedRiderApplication::DIShifting_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.DIShifting");
}
//#]

IMPLEMENT_REACTIVE_META_P(RiderApplication, DesignSynthesisPkg_RiderInteractionDesignPkg, DesignSynthesisPkg::RiderInteractionDesignPkg, false, OMAnimatedRiderApplication)

IMPLEMENT_META_OP(OMAnimatedRiderApplication, DesignSynthesisPkg_RiderInteractionDesignPkg_RiderApplication_setCassetteRingNumber_int, "setCassetteRingNumber", FALSE, "setCassetteRingNumber(int)", 1)

IMPLEMENT_OP_CALL(DesignSynthesisPkg_RiderInteractionDesignPkg_RiderApplication_setCassetteRingNumber_int, RiderApplication, setCassetteRingNumber(p_cassetteRingNumber), NO_OP())

IMPLEMENT_META_OP(OMAnimatedRiderApplication, DesignSynthesisPkg_RiderInteractionDesignPkg_RiderApplication_setChainRingNumber_int, "setChainRingNumber", FALSE, "setChainRingNumber(int)", 1)

IMPLEMENT_OP_CALL(DesignSynthesisPkg_RiderInteractionDesignPkg_RiderApplication_setChainRingNumber_int, RiderApplication, setChainRingNumber(p_chainRingNumber), NO_OP())

IMPLEMENT_META_OP(OMAnimatedRiderApplication, DesignSynthesisPkg_RiderInteractionDesignPkg_RiderApplication_setUseMechanicalShifting_bool, "setUseMechanicalShifting", FALSE, "setUseMechanicalShifting(bool)", 1)

IMPLEMENT_OP_CALL(DesignSynthesisPkg_RiderInteractionDesignPkg_RiderApplication_setUseMechanicalShifting_bool, RiderApplication, setUseMechanicalShifting(p_useMechanicalShifting), NO_OP())
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: GearShiftingComponent/GSC_Animation/RiderApplication.cpp
*********************************************************************/
