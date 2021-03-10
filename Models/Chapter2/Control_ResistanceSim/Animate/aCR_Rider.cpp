/********************************************************************
	Rhapsody	: 8.4 
	Login		: Bruce
	Component	: Control_ResistanceSim 
	Configuration 	: Animate
	Model Element	: aCR_Rider
//!	Generated Date	: Wed, 19, Feb 2020  
	File Path	: Control_ResistanceSim/Animate/aCR_Rider.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX

#define _OMSTATECHART_ANIMATED
//#]

//## auto_generated
#include "aCR_Rider.h"
//## auto_generated
#include "ControlResistanceInterfacesPkg.h"
//#[ ignore
#define FunctionalAnalysisPkg_ControlResistancePkg_ControlResistanceActorPkg_aCR_Rider_aCR_Rider_SERIALIZE OM_NO_OP

#define OMAnim_FunctionalAnalysisPkg_ControlResistancePkg_ControlResistanceActorPkg_aCR_Rider_setBaseForce_Real_UNSERIALIZE_ARGS OP_UNSER(OMDestructiveString2X,p_baseForce)

#define OMAnim_FunctionalAnalysisPkg_ControlResistancePkg_ControlResistanceActorPkg_aCR_Rider_setBaseForce_Real_SERIALIZE_RET_VAL

#define OMAnim_FunctionalAnalysisPkg_ControlResistancePkg_ControlResistanceActorPkg_aCR_Rider_setCadence_int_UNSERIALIZE_ARGS OP_UNSER(OMDestructiveString2X,p_cadence)

#define OMAnim_FunctionalAnalysisPkg_ControlResistancePkg_ControlResistanceActorPkg_aCR_Rider_setCadence_int_SERIALIZE_RET_VAL

#define OMAnim_FunctionalAnalysisPkg_ControlResistancePkg_ControlResistanceActorPkg_aCR_Rider_setForce_Real_UNSERIALIZE_ARGS OP_UNSER(OMDestructiveString2X,p_force)

#define OMAnim_FunctionalAnalysisPkg_ControlResistancePkg_ControlResistanceActorPkg_aCR_Rider_setForce_Real_SERIALIZE_RET_VAL

#define OMAnim_FunctionalAnalysisPkg_ControlResistancePkg_ControlResistanceActorPkg_aCR_Rider_setForceIncrement_Real_UNSERIALIZE_ARGS OP_UNSER(OMDestructiveString2X,p_forceIncrement)

#define OMAnim_FunctionalAnalysisPkg_ControlResistancePkg_ControlResistanceActorPkg_aCR_Rider_setForceIncrement_Real_SERIALIZE_RET_VAL

#define OMAnim_FunctionalAnalysisPkg_ControlResistancePkg_ControlResistanceActorPkg_aCR_Rider_setPositionInCycle_Real_UNSERIALIZE_ARGS OP_UNSER(OMDestructiveString2X,p_positionInCycle)

#define OMAnim_FunctionalAnalysisPkg_ControlResistancePkg_ControlResistanceActorPkg_aCR_Rider_setPositionInCycle_Real_SERIALIZE_RET_VAL

#define OMAnim_FunctionalAnalysisPkg_ControlResistancePkg_ControlResistanceActorPkg_aCR_Rider_setResistance_Real_UNSERIALIZE_ARGS OP_UNSER(OMDestructiveString2X,p_resistance)

#define OMAnim_FunctionalAnalysisPkg_ControlResistancePkg_ControlResistanceActorPkg_aCR_Rider_setResistance_Real_SERIALIZE_RET_VAL
//#]

//## package FunctionalAnalysisPkg::ControlResistancePkg::ControlResistanceActorPkg

//## class aCR_Rider
//#[ ignore
aCR_Rider::pUc_ControlResistance_C::InBound_C::InBound_C() {
    itsEvApplyResistance_ProxyReceptionInterface = NULL;
    port = NULL;
}

aCR_Rider::pUc_ControlResistance_C::InBound_C::~InBound_C() {
    cleanUpRelations();
}

bool aCR_Rider::pUc_ControlResistance_C::InBound_C::send(IOxfEvent* event, const IOxfEventGenerationParams& params) {
    bool res = false;
    if (event != NULL) {
        event->setPort(getPort());
        if (itsEvApplyResistance_ProxyReceptionInterface != NULL) {
            if (event->isTypeOf(evApplyResistance_ControlResistanceInterfacesPkg_ControlResistancePkg_FunctionalAnalysisPkg_id)) {
                res = itsEvApplyResistance_ProxyReceptionInterface->send(event, params);
            }
        }
    }
    return res;
    
}

bool aCR_Rider::pUc_ControlResistance_C::InBound_C::send(IOxfEvent* event) {
    bool res = false;
    if (event != NULL) {
        event->setPort(getPort());
        if (itsEvApplyResistance_ProxyReceptionInterface != NULL) {
            if (event->isTypeOf(evApplyResistance_ControlResistanceInterfacesPkg_ControlResistancePkg_FunctionalAnalysisPkg_id)) {
                res = itsEvApplyResistance_ProxyReceptionInterface->send(event);
            }
        }
    }
    return res;
    
}

void aCR_Rider::pUc_ControlResistance_C::InBound_C::setItsEvApplyResistance_ProxyReceptionInterface(evApplyResistance_ProxyReceptionInterface* p_evApplyResistance_ProxyReceptionInterface) {
    itsEvApplyResistance_ProxyReceptionInterface = p_evApplyResistance_ProxyReceptionInterface;
}

aCR_Rider::pUc_ControlResistance_C* aCR_Rider::pUc_ControlResistance_C::InBound_C::getPort() const {
    return port;
}

void aCR_Rider::pUc_ControlResistance_C::InBound_C::setPort(aCR_Rider::pUc_ControlResistance_C* p_pUc_ControlResistance_C) {
    _setPort(p_pUc_ControlResistance_C);
}

void aCR_Rider::pUc_ControlResistance_C::InBound_C::cleanUpRelations() {
    if(itsEvApplyResistance_ProxyReceptionInterface != NULL)
        {
            itsEvApplyResistance_ProxyReceptionInterface = NULL;
        }
    if(port != NULL)
        {
            port = NULL;
        }
}

void aCR_Rider::pUc_ControlResistance_C::InBound_C::__setPort(aCR_Rider::pUc_ControlResistance_C* p_pUc_ControlResistance_C) {
    port = p_pUc_ControlResistance_C;
}

void aCR_Rider::pUc_ControlResistance_C::InBound_C::_setPort(aCR_Rider::pUc_ControlResistance_C* p_pUc_ControlResistance_C) {
    __setPort(p_pUc_ControlResistance_C);
}

void aCR_Rider::pUc_ControlResistance_C::InBound_C::_clearPort() {
    port = NULL;
}

aCR_Rider::pUc_ControlResistance_C::OutBound_C::OutBound_C() {
    itsReqOn_ProxyReceptionInterface = NULL;
    itsReqSetGear_ProxyReceptionInterface = NULL;
    itsReqSetMeasuredPedalForce_ProxyReceptionInterface = NULL;
    itsReqSetPedalPosition_ProxyReceptionInterface = NULL;
    itsReqSetPedalSpeed_ProxyReceptionInterface = NULL;
}

aCR_Rider::pUc_ControlResistance_C::OutBound_C::~OutBound_C() {
    cleanUpRelations();
}

bool aCR_Rider::pUc_ControlResistance_C::OutBound_C::send(IOxfEvent* event, const IOxfEventGenerationParams& params) {
    bool res = false;
    if (event != NULL) {
        if (itsReqOn_ProxyReceptionInterface != NULL) {
            if (event->isTypeOf(reqOn_ControlResistanceInterfacesPkg_ControlResistancePkg_FunctionalAnalysisPkg_id)) {
                res = itsReqOn_ProxyReceptionInterface->send(event, params);
                return res;
            }
        }
        if (itsReqSetGear_ProxyReceptionInterface != NULL) {
            if (event->isTypeOf(reqSetGear_ControlResistanceInterfacesPkg_ControlResistancePkg_FunctionalAnalysisPkg_id)) {
                res = itsReqSetGear_ProxyReceptionInterface->send(event, params);
                return res;
            }
        }
        if (itsReqSetPedalPosition_ProxyReceptionInterface != NULL) {
            if (event->isTypeOf(reqSetPedalPosition_ControlResistanceInterfacesPkg_ControlResistancePkg_FunctionalAnalysisPkg_id)) {
                res = itsReqSetPedalPosition_ProxyReceptionInterface->send(event, params);
                return res;
            }
        }
        if (itsReqSetPedalSpeed_ProxyReceptionInterface != NULL) {
            if (event->isTypeOf(reqSetPedalSpeed_ControlResistanceInterfacesPkg_ControlResistancePkg_FunctionalAnalysisPkg_id)) {
                res = itsReqSetPedalSpeed_ProxyReceptionInterface->send(event, params);
                return res;
            }
        }
        if (itsReqSetMeasuredPedalForce_ProxyReceptionInterface != NULL) {
            if (event->isTypeOf(reqSetMeasuredPedalForce_ControlResistanceInterfacesPkg_ControlResistancePkg_FunctionalAnalysisPkg_id)) {
                res = itsReqSetMeasuredPedalForce_ProxyReceptionInterface->send(event, params);
                return res;
            }
        }
    }
    return res;
    
}

bool aCR_Rider::pUc_ControlResistance_C::OutBound_C::send(IOxfEvent* event) {
    bool res = false;
    if (event != NULL) {
        if (itsReqOn_ProxyReceptionInterface != NULL) {
            if (event->isTypeOf(reqOn_ControlResistanceInterfacesPkg_ControlResistancePkg_FunctionalAnalysisPkg_id)) {
                res = itsReqOn_ProxyReceptionInterface->send(event);
                return res;
            }
        }
        if (itsReqSetGear_ProxyReceptionInterface != NULL) {
            if (event->isTypeOf(reqSetGear_ControlResistanceInterfacesPkg_ControlResistancePkg_FunctionalAnalysisPkg_id)) {
                res = itsReqSetGear_ProxyReceptionInterface->send(event);
                return res;
            }
        }
        if (itsReqSetPedalPosition_ProxyReceptionInterface != NULL) {
            if (event->isTypeOf(reqSetPedalPosition_ControlResistanceInterfacesPkg_ControlResistancePkg_FunctionalAnalysisPkg_id)) {
                res = itsReqSetPedalPosition_ProxyReceptionInterface->send(event);
                return res;
            }
        }
        if (itsReqSetPedalSpeed_ProxyReceptionInterface != NULL) {
            if (event->isTypeOf(reqSetPedalSpeed_ControlResistanceInterfacesPkg_ControlResistancePkg_FunctionalAnalysisPkg_id)) {
                res = itsReqSetPedalSpeed_ProxyReceptionInterface->send(event);
                return res;
            }
        }
        if (itsReqSetMeasuredPedalForce_ProxyReceptionInterface != NULL) {
            if (event->isTypeOf(reqSetMeasuredPedalForce_ControlResistanceInterfacesPkg_ControlResistancePkg_FunctionalAnalysisPkg_id)) {
                res = itsReqSetMeasuredPedalForce_ProxyReceptionInterface->send(event);
                return res;
            }
        }
    }
    return res;
    
}

void aCR_Rider::pUc_ControlResistance_C::OutBound_C::setItsReqOn_ProxyReceptionInterface(OMReactive* p_OMReactive) {
    itsReqOn_ProxyReceptionInterface = p_OMReactive;
}

void aCR_Rider::pUc_ControlResistance_C::OutBound_C::setItsReqSetGear_ProxyReceptionInterface(OMReactive* p_OMReactive) {
    itsReqSetGear_ProxyReceptionInterface = p_OMReactive;
}

void aCR_Rider::pUc_ControlResistance_C::OutBound_C::setItsReqSetMeasuredPedalForce_ProxyReceptionInterface(OMReactive* p_OMReactive) {
    itsReqSetMeasuredPedalForce_ProxyReceptionInterface = p_OMReactive;
}

void aCR_Rider::pUc_ControlResistance_C::OutBound_C::setItsReqSetPedalPosition_ProxyReceptionInterface(OMReactive* p_OMReactive) {
    itsReqSetPedalPosition_ProxyReceptionInterface = p_OMReactive;
}

void aCR_Rider::pUc_ControlResistance_C::OutBound_C::setItsReqSetPedalSpeed_ProxyReceptionInterface(OMReactive* p_OMReactive) {
    itsReqSetPedalSpeed_ProxyReceptionInterface = p_OMReactive;
}

void aCR_Rider::pUc_ControlResistance_C::OutBound_C::cleanUpRelations() {
    if(itsReqOn_ProxyReceptionInterface != NULL)
        {
            itsReqOn_ProxyReceptionInterface = NULL;
        }
    if(itsReqSetGear_ProxyReceptionInterface != NULL)
        {
            itsReqSetGear_ProxyReceptionInterface = NULL;
        }
    if(itsReqSetMeasuredPedalForce_ProxyReceptionInterface != NULL)
        {
            itsReqSetMeasuredPedalForce_ProxyReceptionInterface = NULL;
        }
    if(itsReqSetPedalPosition_ProxyReceptionInterface != NULL)
        {
            itsReqSetPedalPosition_ProxyReceptionInterface = NULL;
        }
    if(itsReqSetPedalSpeed_ProxyReceptionInterface != NULL)
        {
            itsReqSetPedalSpeed_ProxyReceptionInterface = NULL;
        }
}

aCR_Rider::pUc_ControlResistance_C::pUc_ControlResistance_C() : _p_(0) {
    initRelations();
}

aCR_Rider::pUc_ControlResistance_C::~pUc_ControlResistance_C() {
}

void aCR_Rider::pUc_ControlResistance_C::connectACR_Rider(aCR_Rider* part) {
    InBound.setItsEvApplyResistance_ProxyReceptionInterface(part);
    InBound.setPort(this); // for IS_PORT macro support
    
}

evApplyResistance_ProxyReceptionInterface* aCR_Rider::pUc_ControlResistance_C::getItsEvApplyResistance_ProxyReceptionInterface() {
    return &InBound;
}

reqOn_ProxyReceptionInterface* aCR_Rider::pUc_ControlResistance_C::getItsReqOn_ProxyReceptionInterface() {
    return &OutBound;
}

reqSetGear_ProxyReceptionInterface* aCR_Rider::pUc_ControlResistance_C::getItsReqSetGear_ProxyReceptionInterface() {
    return &OutBound;
}

reqSetMeasuredPedalForce_ProxyReceptionInterface* aCR_Rider::pUc_ControlResistance_C::getItsReqSetMeasuredPedalForce_ProxyReceptionInterface() {
    return &OutBound;
}

reqSetPedalPosition_ProxyReceptionInterface* aCR_Rider::pUc_ControlResistance_C::getItsReqSetPedalPosition_ProxyReceptionInterface() {
    return &OutBound;
}

reqSetPedalSpeed_ProxyReceptionInterface* aCR_Rider::pUc_ControlResistance_C::getItsReqSetPedalSpeed_ProxyReceptionInterface() {
    return &OutBound;
}

void aCR_Rider::pUc_ControlResistance_C::setItsEvApplyResistance_ProxyReceptionInterface(evApplyResistance_ProxyReceptionInterface* p_evApplyResistance_ProxyReceptionInterface) {
    InBound.setItsEvApplyResistance_ProxyReceptionInterface(p_evApplyResistance_ProxyReceptionInterface);
}

void aCR_Rider::pUc_ControlResistance_C::setItsReqOn_ProxyReceptionInterface(OMReactive* p_reqOn_ProxyReceptionInterface) {
    OutBound.setItsReqOn_ProxyReceptionInterface(p_reqOn_ProxyReceptionInterface);
}

void aCR_Rider::pUc_ControlResistance_C::setItsReqSetGear_ProxyReceptionInterface(OMReactive* p_reqSetGear_ProxyReceptionInterface) {
    OutBound.setItsReqSetGear_ProxyReceptionInterface(p_reqSetGear_ProxyReceptionInterface);
}

void aCR_Rider::pUc_ControlResistance_C::setItsReqSetMeasuredPedalForce_ProxyReceptionInterface(OMReactive* p_reqSetMeasuredPedalForce_ProxyReceptionInterface) {
    OutBound.setItsReqSetMeasuredPedalForce_ProxyReceptionInterface(p_reqSetMeasuredPedalForce_ProxyReceptionInterface);
}

void aCR_Rider::pUc_ControlResistance_C::setItsReqSetPedalPosition_ProxyReceptionInterface(OMReactive* p_reqSetPedalPosition_ProxyReceptionInterface) {
    OutBound.setItsReqSetPedalPosition_ProxyReceptionInterface(p_reqSetPedalPosition_ProxyReceptionInterface);
}

void aCR_Rider::pUc_ControlResistance_C::setItsReqSetPedalSpeed_ProxyReceptionInterface(OMReactive* p_reqSetPedalSpeed_ProxyReceptionInterface) {
    OutBound.setItsReqSetPedalSpeed_ProxyReceptionInterface(p_reqSetPedalSpeed_ProxyReceptionInterface);
}

aCR_Rider::pUc_ControlResistance_C::InBound_C* aCR_Rider::pUc_ControlResistance_C::getInBound() const {
    return (aCR_Rider::pUc_ControlResistance_C::InBound_C*) &InBound;
}

aCR_Rider::pUc_ControlResistance_C::OutBound_C* aCR_Rider::pUc_ControlResistance_C::getOutBound() const {
    return (aCR_Rider::pUc_ControlResistance_C::OutBound_C*) &OutBound;
}

void aCR_Rider::pUc_ControlResistance_C::initRelations() {
    InBound._setPort(this);
}

void aCR_Rider::pUc_ControlResistance_C::destroy() {
}
//#]

aCR_Rider::aCR_Rider(IOxfActive* theActiveContext) : baseForce(200), forceIncrement(20), positionInCycle(0), sampleRate(10) {
    NOTIFY_REACTIVE_CONSTRUCTOR(aCR_Rider, aCR_Rider(), 0, FunctionalAnalysisPkg_ControlResistancePkg_ControlResistanceActorPkg_aCR_Rider_aCR_Rider_SERIALIZE);
    setActiveContext(theActiveContext, false);
    initRelations();
    initStatechart();
    initWebAdapters();
}

aCR_Rider::~aCR_Rider() {
    NOTIFY_DESTRUCTOR(~aCR_Rider, true);
    delete itsWebAdapter;
    cancelTimeouts();
}

aCR_Rider::pUc_ControlResistance_C* aCR_Rider::getPUc_ControlResistance() const {
    return (aCR_Rider::pUc_ControlResistance_C*) &pUc_ControlResistance;
}

aCR_Rider::pUc_ControlResistance_C* aCR_Rider::get_pUc_ControlResistance() const {
    return (aCR_Rider::pUc_ControlResistance_C*) &pUc_ControlResistance;
}

Real aCR_Rider::getBaseForce() const {
    return baseForce;
}

void aCR_Rider::setBaseForce(Real p_baseForce) {
    baseForce = p_baseForce;
    NOTIFY_SET_OPERATION;
}

int aCR_Rider::getCadence() const {
    return cadence;
}

void aCR_Rider::setCadence(int p_cadence) {
    cadence = p_cadence;
    NOTIFY_SET_OPERATION;
}

Real aCR_Rider::getForce() const {
    return force;
}

void aCR_Rider::setForce(Real p_force) {
    force = p_force;
    NOTIFY_SET_OPERATION;
}

Real aCR_Rider::getForceIncrement() const {
    return forceIncrement;
}

void aCR_Rider::setForceIncrement(Real p_forceIncrement) {
    forceIncrement = p_forceIncrement;
    NOTIFY_SET_OPERATION;
}

Real aCR_Rider::getPositionInCycle() const {
    return positionInCycle;
}

void aCR_Rider::setPositionInCycle(Real p_positionInCycle) {
    positionInCycle = p_positionInCycle;
    NOTIFY_SET_OPERATION;
}

Real aCR_Rider::getResistance() const {
    return resistance;
}

void aCR_Rider::setResistance(Real p_resistance) {
    resistance = p_resistance;
    NOTIFY_SET_OPERATION;
}

int aCR_Rider::getSampleRate() const {
    return sampleRate;
}

void aCR_Rider::setSampleRate(int p_sampleRate) {
    sampleRate = p_sampleRate;
}

bool aCR_Rider::startBehavior() {
    bool done = false;
    done = OMReactive::startBehavior();
    return done;
}

void aCR_Rider::initRelations() {
    if (get_pUc_ControlResistance() != NULL) {
        get_pUc_ControlResistance()->connectACR_Rider(this);
    }
}

void aCR_Rider::initStatechart() {
    rootState_subState = OMNonState;
    rootState_active = OMNonState;
    state_7_subState = OMNonState;
    state_7_active = OMNonState;
    state_6_subState = OMNonState;
    state_6_active = OMNonState;
    state_6_timeout = NULL;
}

void aCR_Rider::cancelTimeouts() {
    cancel(state_6_timeout);
}

bool aCR_Rider::cancelTimeout(const IOxfTimeout* arg) {
    bool res = false;
    if(state_6_timeout == arg)
        {
            state_6_timeout = NULL;
            res = true;
        }
    return res;
}

//#[ ignore
const ClassWebAdapter * aCR_Rider::getItsWebAdapter() const {
    return itsWebAdapter;
}

void aCR_Rider::visitWebAdaptedRelations() const {
}

void aCR_Rider::initWebAdapters() {
    itsWebAdapter = new ClassWebAdapterTmpl< aCR_Rider >(this, "aCR_Rider");
    itsWebAdapter->AddSubObject(new EventReceptionWebAdapterTmpl< aCR_Rider, exStartPedaling >(this, "exStartPedaling"));
    itsWebAdapter->AddSubObject(new EventReceptionWebAdapterTmpl< aCR_Rider, exStopPedaling >(this, "exStopPedaling"));
}

void aCR_Rider::exStartPedalingWebWrapper() {
    GEN_BY_X(exStartPedaling( ), this);
}

void aCR_Rider::exStopPedalingWebWrapper() {
    GEN_BY_X(exStopPedaling( ), this);
}
//#]

void aCR_Rider::rootState_entDef() {
    {
        NOTIFY_STATE_ENTERED("ROOT");
        NOTIFY_TRANSITION_STARTED("0");
        NOTIFY_STATE_ENTERED("ROOT.Idle");
        rootState_subState = Idle;
        rootState_active = Idle;
        NOTIFY_TRANSITION_TERMINATED("0");
    }
}

IOxfReactive::TakeEventStatus aCR_Rider::rootState_processEvent() {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    switch (rootState_active) {
        // State Idle
        case Idle:
        {
            if(IS_EVENT_TYPE_OF(exStartPedaling_ControlResistanceActorPkg_ControlResistancePkg_FunctionalAnalysisPkg_id))
                {
                    NOTIFY_TRANSITION_STARTED("1");
                    NOTIFY_STATE_EXITED("ROOT.Idle");
                    Pedaling_entDef();
                    NOTIFY_TRANSITION_TERMINATED("1");
                    res = eventConsumed;
                }
            
        }
        break;
        // State Pedaling
        case Pedaling:
        {
            res = Pedaling_processEvent();
        }
        break;
        default:
            break;
    }
    return res;
}

void aCR_Rider::Pedaling_entDef() {
    NOTIFY_STATE_ENTERED("ROOT.Pedaling");
    rootState_subState = Pedaling;
    rootState_active = Pedaling;
    state_6_entDef();
    state_7_entDef();
}

void aCR_Rider::Pedaling_exit() {
    state_6_exit();
    state_7_exit();
    
    NOTIFY_STATE_EXITED("ROOT.Pedaling");
}

IOxfReactive::TakeEventStatus aCR_Rider::Pedaling_processEvent() {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    // State state_6
    if(state_6_processEvent() != eventNotConsumed)
        {
            res = eventConsumed;
            if(!IS_IN(Pedaling))
                {
                    return res;
                }
        }
    // State state_7
    if(state_7_processEvent() != eventNotConsumed)
        {
            res = eventConsumed;
            if(!IS_IN(Pedaling))
                {
                    return res;
                }
        }
    if(res == eventNotConsumed)
        {
            res = Pedaling_handleEvent();
        }
    return res;
}

IOxfReactive::TakeEventStatus aCR_Rider::Pedaling_handleEvent() {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    if(IS_EVENT_TYPE_OF(exStopPedaling_ControlResistanceActorPkg_ControlResistancePkg_FunctionalAnalysisPkg_id))
        {
            NOTIFY_TRANSITION_STARTED("2");
            Pedaling_exit();
            NOTIFY_STATE_ENTERED("ROOT.Idle");
            rootState_subState = Idle;
            rootState_active = Idle;
            NOTIFY_TRANSITION_TERMINATED("2");
            res = eventConsumed;
        }
    
    return res;
}

void aCR_Rider::state_7_entDef() {
    NOTIFY_STATE_ENTERED("ROOT.Pedaling.state_7");
    NOTIFY_TRANSITION_STARTED("9");
    NOTIFY_STATE_ENTERED("ROOT.Pedaling.state_7.WaitingResistance");
    state_7_subState = WaitingResistance;
    state_7_active = WaitingResistance;
    NOTIFY_TRANSITION_TERMINATED("9");
}

void aCR_Rider::state_7_exit() {
    // State WaitingResistance
    if(state_7_subState == WaitingResistance)
        {
            NOTIFY_STATE_EXITED("ROOT.Pedaling.state_7.WaitingResistance");
        }
    state_7_subState = OMNonState;
    
    NOTIFY_STATE_EXITED("ROOT.Pedaling.state_7");
}

IOxfReactive::TakeEventStatus aCR_Rider::state_7_processEvent() {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    // State WaitingResistance
    if(state_7_active == WaitingResistance)
        {
            if(IS_EVENT_TYPE_OF(evApplyResistance_ControlResistanceInterfacesPkg_ControlResistancePkg_FunctionalAnalysisPkg_id))
                {
                    OMSETPARAMS(evApplyResistance);
                    NOTIFY_TRANSITION_STARTED("8");
                    NOTIFY_STATE_EXITED("ROOT.Pedaling.state_7.WaitingResistance");
                    //#[ transition 8 
                    
                    setResistance(params->res);
                    //#]
                    NOTIFY_STATE_ENTERED("ROOT.Pedaling.state_7.WaitingResistance");
                    state_7_subState = WaitingResistance;
                    state_7_active = WaitingResistance;
                    NOTIFY_TRANSITION_TERMINATED("8");
                    res = eventConsumed;
                }
            
            
        }
    return res;
}

void aCR_Rider::state_6_entDef() {
    NOTIFY_STATE_ENTERED("ROOT.Pedaling.state_6");
    NOTIFY_TRANSITION_STARTED("7");
    NOTIFY_STATE_ENTERED("ROOT.Pedaling.state_6.ApplingForce");
    state_6_subState = ApplingForce;
    state_6_active = ApplingForce;
    state_6_timeout = scheduleTimeout(1000/(cadence/60.0)/sampleRate, "ROOT.Pedaling.state_6.ApplingForce");
    NOTIFY_TRANSITION_TERMINATED("7");
}

void aCR_Rider::state_6_exit() {
    switch (state_6_subState) {
        // State ApplingForce
        case ApplingForce:
        {
            cancel(state_6_timeout);
            NOTIFY_STATE_EXITED("ROOT.Pedaling.state_6.ApplingForce");
        }
        break;
        // State sendaction_3
        case sendaction_3:
        {
            popNullTransition();
            NOTIFY_STATE_EXITED("ROOT.Pedaling.state_6.sendaction_3");
        }
        break;
        // State sendaction_4
        case sendaction_4:
        {
            popNullTransition();
            NOTIFY_STATE_EXITED("ROOT.Pedaling.state_6.sendaction_4");
        }
        break;
        // State sendaction_5
        case sendaction_5:
        {
            popNullTransition();
            NOTIFY_STATE_EXITED("ROOT.Pedaling.state_6.sendaction_5");
        }
        break;
        default:
            break;
    }
    state_6_subState = OMNonState;
    
    NOTIFY_STATE_EXITED("ROOT.Pedaling.state_6");
}

IOxfReactive::TakeEventStatus aCR_Rider::state_6_processEvent() {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    switch (state_6_active) {
        // State ApplingForce
        case ApplingForce:
        {
            if(IS_EVENT_TYPE_OF(OMTimeoutEventId))
                {
                    if(getCurrentEvent() == state_6_timeout)
                        {
                            NOTIFY_TRANSITION_STARTED("3");
                            cancel(state_6_timeout);
                            NOTIFY_STATE_EXITED("ROOT.Pedaling.state_6.ApplingForce");
                            //#[ transition 3 
                            
                            force = baseForce + forceIncrement*sin(positionInCycle);
                            positionInCycle+= PI/sampleRate;
                            if (positionInCycle>2*PI) positionInCycle=0;
                            //#]
                            NOTIFY_STATE_ENTERED("ROOT.Pedaling.state_6.sendaction_3");
                            pushNullTransition();
                            state_6_subState = sendaction_3;
                            state_6_active = sendaction_3;
                            //#[ state Pedaling.state_6.sendaction_3.(Entry) 
                            OUT_PORT(pUc_ControlResistance)->GEN(reqSetPedalPosition(positionInCycle));
                            //#]
                            NOTIFY_TRANSITION_TERMINATED("3");
                            res = eventConsumed;
                        }
                }
            
            
        }
        break;
        // State sendaction_3
        case sendaction_3:
        {
            if(IS_EVENT_TYPE_OF(OMNullEventId))
                {
                    NOTIFY_TRANSITION_STARTED("4");
                    popNullTransition();
                    NOTIFY_STATE_EXITED("ROOT.Pedaling.state_6.sendaction_3");
                    NOTIFY_STATE_ENTERED("ROOT.Pedaling.state_6.sendaction_4");
                    pushNullTransition();
                    state_6_subState = sendaction_4;
                    state_6_active = sendaction_4;
                    //#[ state Pedaling.state_6.sendaction_4.(Entry) 
                    OUT_PORT(pUc_ControlResistance)->GEN(reqSetPedalSpeed(cadence));
                    //#]
                    NOTIFY_TRANSITION_TERMINATED("4");
                    res = eventConsumed;
                }
            
            
        }
        break;
        // State sendaction_4
        case sendaction_4:
        {
            if(IS_EVENT_TYPE_OF(OMNullEventId))
                {
                    NOTIFY_TRANSITION_STARTED("5");
                    popNullTransition();
                    NOTIFY_STATE_EXITED("ROOT.Pedaling.state_6.sendaction_4");
                    NOTIFY_STATE_ENTERED("ROOT.Pedaling.state_6.sendaction_5");
                    pushNullTransition();
                    state_6_subState = sendaction_5;
                    state_6_active = sendaction_5;
                    //#[ state Pedaling.state_6.sendaction_5.(Entry) 
                    OUT_PORT(pUc_ControlResistance)->GEN(reqSetMeasuredPedalForce(force));
                    //#]
                    NOTIFY_TRANSITION_TERMINATED("5");
                    res = eventConsumed;
                }
            
            
        }
        break;
        // State sendaction_5
        case sendaction_5:
        {
            if(IS_EVENT_TYPE_OF(OMNullEventId))
                {
                    NOTIFY_TRANSITION_STARTED("6");
                    popNullTransition();
                    NOTIFY_STATE_EXITED("ROOT.Pedaling.state_6.sendaction_5");
                    NOTIFY_STATE_ENTERED("ROOT.Pedaling.state_6.ApplingForce");
                    state_6_subState = ApplingForce;
                    state_6_active = ApplingForce;
                    state_6_timeout = scheduleTimeout(1000/(cadence/60.0)/sampleRate, "ROOT.Pedaling.state_6.ApplingForce");
                    NOTIFY_TRANSITION_TERMINATED("6");
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
void OMAnimatedaCR_Rider::serializeAttributes(AOMSAttributes* aomsAttributes) const {
    aomsAttributes->addAttribute("force", x2String(myReal->force));
    aomsAttributes->addAttribute("forceIncrement", x2String(myReal->forceIncrement));
    aomsAttributes->addAttribute("baseForce", x2String(myReal->baseForce));
    aomsAttributes->addAttribute("sampleRate", x2String(myReal->sampleRate));
    aomsAttributes->addAttribute("cadence", x2String(myReal->cadence));
    aomsAttributes->addAttribute("positionInCycle", x2String(myReal->positionInCycle));
    aomsAttributes->addAttribute("resistance", x2String(myReal->resistance));
}

void OMAnimatedaCR_Rider::serializeRelations(AOMSRelations* aomsRelations) const {
}

void OMAnimatedaCR_Rider::rootState_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT");
    switch (myReal->rootState_subState) {
        case aCR_Rider::Idle:
        {
            Idle_serializeStates(aomsState);
        }
        break;
        case aCR_Rider::Pedaling:
        {
            Pedaling_serializeStates(aomsState);
        }
        break;
        default:
            break;
    }
}

void OMAnimatedaCR_Rider::Pedaling_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.Pedaling");
    state_6_serializeStates(aomsState);
    state_7_serializeStates(aomsState);
}

void OMAnimatedaCR_Rider::state_7_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.Pedaling.state_7");
    if(myReal->state_7_subState == aCR_Rider::WaitingResistance)
        {
            WaitingResistance_serializeStates(aomsState);
        }
}

void OMAnimatedaCR_Rider::WaitingResistance_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.Pedaling.state_7.WaitingResistance");
}

void OMAnimatedaCR_Rider::state_6_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.Pedaling.state_6");
    switch (myReal->state_6_subState) {
        case aCR_Rider::ApplingForce:
        {
            ApplingForce_serializeStates(aomsState);
        }
        break;
        case aCR_Rider::sendaction_3:
        {
            sendaction_3_serializeStates(aomsState);
        }
        break;
        case aCR_Rider::sendaction_4:
        {
            sendaction_4_serializeStates(aomsState);
        }
        break;
        case aCR_Rider::sendaction_5:
        {
            sendaction_5_serializeStates(aomsState);
        }
        break;
        default:
            break;
    }
}

void OMAnimatedaCR_Rider::sendaction_5_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.Pedaling.state_6.sendaction_5");
}

void OMAnimatedaCR_Rider::sendaction_4_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.Pedaling.state_6.sendaction_4");
}

void OMAnimatedaCR_Rider::sendaction_3_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.Pedaling.state_6.sendaction_3");
}

void OMAnimatedaCR_Rider::ApplingForce_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.Pedaling.state_6.ApplingForce");
}

void OMAnimatedaCR_Rider::Idle_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.Idle");
}
//#]

IMPLEMENT_REACTIVE_META_P(aCR_Rider, FunctionalAnalysisPkg_ControlResistancePkg_ControlResistanceActorPkg, FunctionalAnalysisPkg::ControlResistancePkg::ControlResistanceActorPkg, false, OMAnimatedaCR_Rider)

IMPLEMENT_META_OP(OMAnimatedaCR_Rider, FunctionalAnalysisPkg_ControlResistancePkg_ControlResistanceActorPkg_aCR_Rider_setBaseForce_Real, "setBaseForce", FALSE, "setBaseForce(Real)", 1)

IMPLEMENT_OP_CALL(FunctionalAnalysisPkg_ControlResistancePkg_ControlResistanceActorPkg_aCR_Rider_setBaseForce_Real, aCR_Rider, setBaseForce(p_baseForce), NO_OP())

IMPLEMENT_META_OP(OMAnimatedaCR_Rider, FunctionalAnalysisPkg_ControlResistancePkg_ControlResistanceActorPkg_aCR_Rider_setCadence_int, "setCadence", FALSE, "setCadence(int)", 1)

IMPLEMENT_OP_CALL(FunctionalAnalysisPkg_ControlResistancePkg_ControlResistanceActorPkg_aCR_Rider_setCadence_int, aCR_Rider, setCadence(p_cadence), NO_OP())

IMPLEMENT_META_OP(OMAnimatedaCR_Rider, FunctionalAnalysisPkg_ControlResistancePkg_ControlResistanceActorPkg_aCR_Rider_setForce_Real, "setForce", FALSE, "setForce(Real)", 1)

IMPLEMENT_OP_CALL(FunctionalAnalysisPkg_ControlResistancePkg_ControlResistanceActorPkg_aCR_Rider_setForce_Real, aCR_Rider, setForce(p_force), NO_OP())

IMPLEMENT_META_OP(OMAnimatedaCR_Rider, FunctionalAnalysisPkg_ControlResistancePkg_ControlResistanceActorPkg_aCR_Rider_setForceIncrement_Real, "setForceIncrement", FALSE, "setForceIncrement(Real)", 1)

IMPLEMENT_OP_CALL(FunctionalAnalysisPkg_ControlResistancePkg_ControlResistanceActorPkg_aCR_Rider_setForceIncrement_Real, aCR_Rider, setForceIncrement(p_forceIncrement), NO_OP())

IMPLEMENT_META_OP(OMAnimatedaCR_Rider, FunctionalAnalysisPkg_ControlResistancePkg_ControlResistanceActorPkg_aCR_Rider_setPositionInCycle_Real, "setPositionInCycle", FALSE, "setPositionInCycle(Real)", 1)

IMPLEMENT_OP_CALL(FunctionalAnalysisPkg_ControlResistancePkg_ControlResistanceActorPkg_aCR_Rider_setPositionInCycle_Real, aCR_Rider, setPositionInCycle(p_positionInCycle), NO_OP())

IMPLEMENT_META_OP(OMAnimatedaCR_Rider, FunctionalAnalysisPkg_ControlResistancePkg_ControlResistanceActorPkg_aCR_Rider_setResistance_Real, "setResistance", FALSE, "setResistance(Real)", 1)

IMPLEMENT_OP_CALL(FunctionalAnalysisPkg_ControlResistancePkg_ControlResistanceActorPkg_aCR_Rider_setResistance_Real, aCR_Rider, setResistance(p_resistance), NO_OP())
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: Control_ResistanceSim/Animate/aCR_Rider.cpp
*********************************************************************/
