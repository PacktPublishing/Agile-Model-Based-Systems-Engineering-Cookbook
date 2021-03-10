/********************************************************************
	Rhapsody	: 9.0 
	Login		: Bruce
	Component	: TrafficLightMVP2 
	Configuration 	: MVP2Config
	Model Element	: ThruLane
//!	Generated Date	: Tue, 8, Dec 2020  
	File Path	: TrafficLightMVP2/MVP2Config/ThruLane.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX

#define _OMSTATECHART_ANIMATED
//#]

//## auto_generated
#include "ThruLane.h"
//#[ ignore
#define Default_ThruLane_ThruLane_SERIALIZE OM_NO_OP
//#]

//## package Default

//## class ThruLane
//#[ ignore
ThruLane::pInThru_C::pInThru_C() : _p_(0) {
    itsEvLaneDone_ProxyReceptionInterface = NULL;
}

ThruLane::pInThru_C::~pInThru_C() {
    cleanUpRelations();
}

void ThruLane::pInThru_C::connectThruLane(ThruLane* part) {
    setItsEvLaneDone_ProxyReceptionInterface(part);
    
}

evLaneDone_ProxyReceptionInterface* ThruLane::pInThru_C::getItsEvLaneDone_ProxyReceptionInterface() {
    return this;
}

bool ThruLane::pInThru_C::send(IOxfEvent* event, const IOxfEventGenerationParams& params) {
    bool res = false;
    if (event != NULL) {
        event->setPort(this);
        if (itsEvLaneDone_ProxyReceptionInterface != NULL) {
            if (event->isTypeOf(evLaneDone_Default_id)) {
                res = itsEvLaneDone_ProxyReceptionInterface->send(event, params);
            }
        }
    }
    return res;
    
}

bool ThruLane::pInThru_C::send(IOxfEvent* event) {
    bool res = false;
    if (event != NULL) {
        event->setPort(this);
        if (itsEvLaneDone_ProxyReceptionInterface != NULL) {
            if (event->isTypeOf(evLaneDone_Default_id)) {
                res = itsEvLaneDone_ProxyReceptionInterface->send(event);
            }
        }
    }
    return res;
    
}

void ThruLane::pInThru_C::setItsEvLaneDone_ProxyReceptionInterface(evLaneDone_ProxyReceptionInterface* p_evLaneDone_ProxyReceptionInterface) {
    itsEvLaneDone_ProxyReceptionInterface = p_evLaneDone_ProxyReceptionInterface;
}

void ThruLane::pInThru_C::cleanUpRelations() {
    if(itsEvLaneDone_ProxyReceptionInterface != NULL)
        {
            itsEvLaneDone_ProxyReceptionInterface = NULL;
        }
}

ThruLane::pOutThru_C::pOutThru_C() : _p_(0) {
    itsEvLaneDone_ProxyReceptionInterface = NULL;
}

ThruLane::pOutThru_C::~pOutThru_C() {
    cleanUpRelations();
}

evLaneDone_ProxyReceptionInterface* ThruLane::pOutThru_C::getItsEvLaneDone_ProxyReceptionInterface() {
    return this;
}

evLaneDone_ProxyReceptionInterface* ThruLane::pOutThru_C::getOutBound() {
    return this;
}

bool ThruLane::pOutThru_C::send(IOxfEvent* event, const IOxfEventGenerationParams& params) {
    bool res = false;
    if (event != NULL) {
        if (itsEvLaneDone_ProxyReceptionInterface != NULL) {
            if (event->isTypeOf(evLaneDone_Default_id)) {
                res = itsEvLaneDone_ProxyReceptionInterface->send(event, params);
            }
        }
    }
    return res;
    
}

bool ThruLane::pOutThru_C::send(IOxfEvent* event) {
    bool res = false;
    if (event != NULL) {
        if (itsEvLaneDone_ProxyReceptionInterface != NULL) {
            if (event->isTypeOf(evLaneDone_Default_id)) {
                res = itsEvLaneDone_ProxyReceptionInterface->send(event);
            }
        }
    }
    return res;
    
}

void ThruLane::pOutThru_C::setItsEvLaneDone_ProxyReceptionInterface(OMReactive* p_OMReactive) {
    itsEvLaneDone_ProxyReceptionInterface = p_OMReactive;
}

void ThruLane::pOutThru_C::cleanUpRelations() {
    if(itsEvLaneDone_ProxyReceptionInterface != NULL)
        {
            itsEvLaneDone_ProxyReceptionInterface = NULL;
        }
}

ThruLane::pTurn_C::InBound_C::InBound_C() {
    itsEvCarArrive_ProxyReceptionInterface = NULL;
    itsEvTurnDone_ProxyReceptionInterface = NULL;
    port = NULL;
}

ThruLane::pTurn_C::InBound_C::~InBound_C() {
    cleanUpRelations();
}

bool ThruLane::pTurn_C::InBound_C::send(IOxfEvent* event, const IOxfEventGenerationParams& params) {
    bool res = false;
    if (event != NULL) {
        event->setPort(getPort());
        if (itsEvTurnDone_ProxyReceptionInterface != NULL) {
            if (event->isTypeOf(evTurnDone_Default_id)) {
                res = itsEvTurnDone_ProxyReceptionInterface->send(event, params);
                return res;
            }
        }
        if (itsEvCarArrive_ProxyReceptionInterface != NULL) {
            if (event->isTypeOf(evCarArrive_Default_id)) {
                res = itsEvCarArrive_ProxyReceptionInterface->send(event, params);
                return res;
            }
        }
    }
    return res;
    
}

bool ThruLane::pTurn_C::InBound_C::send(IOxfEvent* event) {
    bool res = false;
    if (event != NULL) {
        event->setPort(getPort());
        if (itsEvTurnDone_ProxyReceptionInterface != NULL) {
            if (event->isTypeOf(evTurnDone_Default_id)) {
                res = itsEvTurnDone_ProxyReceptionInterface->send(event);
                return res;
            }
        }
        if (itsEvCarArrive_ProxyReceptionInterface != NULL) {
            if (event->isTypeOf(evCarArrive_Default_id)) {
                res = itsEvCarArrive_ProxyReceptionInterface->send(event);
                return res;
            }
        }
    }
    return res;
    
}

void ThruLane::pTurn_C::InBound_C::setItsEvCarArrive_ProxyReceptionInterface(evCarArrive_ProxyReceptionInterface* p_evCarArrive_ProxyReceptionInterface) {
    itsEvCarArrive_ProxyReceptionInterface = p_evCarArrive_ProxyReceptionInterface;
}

void ThruLane::pTurn_C::InBound_C::setItsEvTurnDone_ProxyReceptionInterface(evTurnDone_ProxyReceptionInterface* p_evTurnDone_ProxyReceptionInterface) {
    itsEvTurnDone_ProxyReceptionInterface = p_evTurnDone_ProxyReceptionInterface;
}

ThruLane::pTurn_C* ThruLane::pTurn_C::InBound_C::getPort() const {
    return port;
}

void ThruLane::pTurn_C::InBound_C::setPort(ThruLane::pTurn_C* p_pTurn_C) {
    _setPort(p_pTurn_C);
}

void ThruLane::pTurn_C::InBound_C::cleanUpRelations() {
    if(itsEvCarArrive_ProxyReceptionInterface != NULL)
        {
            itsEvCarArrive_ProxyReceptionInterface = NULL;
        }
    if(itsEvTurnDone_ProxyReceptionInterface != NULL)
        {
            itsEvTurnDone_ProxyReceptionInterface = NULL;
        }
    if(port != NULL)
        {
            port = NULL;
        }
}

void ThruLane::pTurn_C::InBound_C::__setPort(ThruLane::pTurn_C* p_pTurn_C) {
    port = p_pTurn_C;
}

void ThruLane::pTurn_C::InBound_C::_setPort(ThruLane::pTurn_C* p_pTurn_C) {
    __setPort(p_pTurn_C);
}

void ThruLane::pTurn_C::InBound_C::_clearPort() {
    port = NULL;
}

ThruLane::pTurn_C::OutBound_C::OutBound_C() {
    itsEvGoTurn_ProxyReceptionInterface = NULL;
}

ThruLane::pTurn_C::OutBound_C::~OutBound_C() {
    cleanUpRelations();
}

bool ThruLane::pTurn_C::OutBound_C::send(IOxfEvent* event, const IOxfEventGenerationParams& params) {
    bool res = false;
    if (event != NULL) {
        if (itsEvGoTurn_ProxyReceptionInterface != NULL) {
            if (event->isTypeOf(evGoTurn_Default_id)) {
                res = itsEvGoTurn_ProxyReceptionInterface->send(event, params);
            }
        }
    }
    return res;
    
}

bool ThruLane::pTurn_C::OutBound_C::send(IOxfEvent* event) {
    bool res = false;
    if (event != NULL) {
        if (itsEvGoTurn_ProxyReceptionInterface != NULL) {
            if (event->isTypeOf(evGoTurn_Default_id)) {
                res = itsEvGoTurn_ProxyReceptionInterface->send(event);
            }
        }
    }
    return res;
    
}

void ThruLane::pTurn_C::OutBound_C::setItsEvGoTurn_ProxyReceptionInterface(OMReactive* p_OMReactive) {
    itsEvGoTurn_ProxyReceptionInterface = p_OMReactive;
}

void ThruLane::pTurn_C::OutBound_C::cleanUpRelations() {
    if(itsEvGoTurn_ProxyReceptionInterface != NULL)
        {
            itsEvGoTurn_ProxyReceptionInterface = NULL;
        }
}

ThruLane::pTurn_C::pTurn_C() : _p_(0) {
    initRelations();
}

ThruLane::pTurn_C::~pTurn_C() {
}

void ThruLane::pTurn_C::connectThruLane(ThruLane* part) {
    InBound.setItsEvTurnDone_ProxyReceptionInterface(part);
    InBound.setItsEvCarArrive_ProxyReceptionInterface(part);
    InBound.setPort(this); // for IS_PORT macro support
    
}

evCarArrive_ProxyReceptionInterface* ThruLane::pTurn_C::getItsEvCarArrive_ProxyReceptionInterface() {
    return &InBound;
}

evGoTurn_ProxyReceptionInterface* ThruLane::pTurn_C::getItsEvGoTurn_ProxyReceptionInterface() {
    return &OutBound;
}

evTurnDone_ProxyReceptionInterface* ThruLane::pTurn_C::getItsEvTurnDone_ProxyReceptionInterface() {
    return &InBound;
}

void ThruLane::pTurn_C::setItsEvCarArrive_ProxyReceptionInterface(evCarArrive_ProxyReceptionInterface* p_evCarArrive_ProxyReceptionInterface) {
    InBound.setItsEvCarArrive_ProxyReceptionInterface(p_evCarArrive_ProxyReceptionInterface);
}

void ThruLane::pTurn_C::setItsEvGoTurn_ProxyReceptionInterface(OMReactive* p_evGoTurn_ProxyReceptionInterface) {
    OutBound.setItsEvGoTurn_ProxyReceptionInterface(p_evGoTurn_ProxyReceptionInterface);
}

void ThruLane::pTurn_C::setItsEvTurnDone_ProxyReceptionInterface(evTurnDone_ProxyReceptionInterface* p_evTurnDone_ProxyReceptionInterface) {
    InBound.setItsEvTurnDone_ProxyReceptionInterface(p_evTurnDone_ProxyReceptionInterface);
}

ThruLane::pTurn_C::InBound_C* ThruLane::pTurn_C::getInBound() const {
    return (ThruLane::pTurn_C::InBound_C*) &InBound;
}

ThruLane::pTurn_C::OutBound_C* ThruLane::pTurn_C::getOutBound() const {
    return (ThruLane::pTurn_C::OutBound_C*) &OutBound;
}

void ThruLane::pTurn_C::initRelations() {
    InBound._setPort(this);
}

void ThruLane::pTurn_C::destroy() {
}

ThruLane::pCrossWalk_C::InBound_C::InBound_C() {
    itsEvPedestrianArrive_ProxyReceptionInterface = NULL;
    itsEvWalkComplete_ProxyReceptionInterface = NULL;
    port = NULL;
}

ThruLane::pCrossWalk_C::InBound_C::~InBound_C() {
    cleanUpRelations();
}

bool ThruLane::pCrossWalk_C::InBound_C::send(IOxfEvent* event, const IOxfEventGenerationParams& params) {
    bool res = false;
    if (event != NULL) {
        event->setPort(getPort());
        if (itsEvPedestrianArrive_ProxyReceptionInterface != NULL) {
            if (event->isTypeOf(evPedestrianArrive_Default_id)) {
                res = itsEvPedestrianArrive_ProxyReceptionInterface->send(event, params);
                return res;
            }
        }
        if (itsEvWalkComplete_ProxyReceptionInterface != NULL) {
            if (event->isTypeOf(evWalkComplete_Default_id)) {
                res = itsEvWalkComplete_ProxyReceptionInterface->send(event, params);
                return res;
            }
        }
    }
    return res;
    
}

bool ThruLane::pCrossWalk_C::InBound_C::send(IOxfEvent* event) {
    bool res = false;
    if (event != NULL) {
        event->setPort(getPort());
        if (itsEvPedestrianArrive_ProxyReceptionInterface != NULL) {
            if (event->isTypeOf(evPedestrianArrive_Default_id)) {
                res = itsEvPedestrianArrive_ProxyReceptionInterface->send(event);
                return res;
            }
        }
        if (itsEvWalkComplete_ProxyReceptionInterface != NULL) {
            if (event->isTypeOf(evWalkComplete_Default_id)) {
                res = itsEvWalkComplete_ProxyReceptionInterface->send(event);
                return res;
            }
        }
    }
    return res;
    
}

void ThruLane::pCrossWalk_C::InBound_C::setItsEvPedestrianArrive_ProxyReceptionInterface(evPedestrianArrive_ProxyReceptionInterface* p_evPedestrianArrive_ProxyReceptionInterface) {
    itsEvPedestrianArrive_ProxyReceptionInterface = p_evPedestrianArrive_ProxyReceptionInterface;
}

void ThruLane::pCrossWalk_C::InBound_C::setItsEvWalkComplete_ProxyReceptionInterface(evWalkComplete_ProxyReceptionInterface* p_evWalkComplete_ProxyReceptionInterface) {
    itsEvWalkComplete_ProxyReceptionInterface = p_evWalkComplete_ProxyReceptionInterface;
}

ThruLane::pCrossWalk_C* ThruLane::pCrossWalk_C::InBound_C::getPort() const {
    return port;
}

void ThruLane::pCrossWalk_C::InBound_C::setPort(ThruLane::pCrossWalk_C* p_pCrossWalk_C) {
    _setPort(p_pCrossWalk_C);
}

void ThruLane::pCrossWalk_C::InBound_C::cleanUpRelations() {
    if(itsEvPedestrianArrive_ProxyReceptionInterface != NULL)
        {
            itsEvPedestrianArrive_ProxyReceptionInterface = NULL;
        }
    if(itsEvWalkComplete_ProxyReceptionInterface != NULL)
        {
            itsEvWalkComplete_ProxyReceptionInterface = NULL;
        }
    if(port != NULL)
        {
            port = NULL;
        }
}

void ThruLane::pCrossWalk_C::InBound_C::__setPort(ThruLane::pCrossWalk_C* p_pCrossWalk_C) {
    port = p_pCrossWalk_C;
}

void ThruLane::pCrossWalk_C::InBound_C::_setPort(ThruLane::pCrossWalk_C* p_pCrossWalk_C) {
    __setPort(p_pCrossWalk_C);
}

void ThruLane::pCrossWalk_C::InBound_C::_clearPort() {
    port = NULL;
}

ThruLane::pCrossWalk_C::OutBound_C::OutBound_C() {
    itsEvWalk_ProxyReceptionInterface = NULL;
}

ThruLane::pCrossWalk_C::OutBound_C::~OutBound_C() {
    cleanUpRelations();
}

bool ThruLane::pCrossWalk_C::OutBound_C::send(IOxfEvent* event, const IOxfEventGenerationParams& params) {
    bool res = false;
    if (event != NULL) {
        if (itsEvWalk_ProxyReceptionInterface != NULL) {
            if (event->isTypeOf(evWalk_Default_id)) {
                res = itsEvWalk_ProxyReceptionInterface->send(event, params);
            }
        }
    }
    return res;
    
}

bool ThruLane::pCrossWalk_C::OutBound_C::send(IOxfEvent* event) {
    bool res = false;
    if (event != NULL) {
        if (itsEvWalk_ProxyReceptionInterface != NULL) {
            if (event->isTypeOf(evWalk_Default_id)) {
                res = itsEvWalk_ProxyReceptionInterface->send(event);
            }
        }
    }
    return res;
    
}

void ThruLane::pCrossWalk_C::OutBound_C::setItsEvWalk_ProxyReceptionInterface(OMReactive* p_OMReactive) {
    itsEvWalk_ProxyReceptionInterface = p_OMReactive;
}

void ThruLane::pCrossWalk_C::OutBound_C::cleanUpRelations() {
    if(itsEvWalk_ProxyReceptionInterface != NULL)
        {
            itsEvWalk_ProxyReceptionInterface = NULL;
        }
}

ThruLane::pCrossWalk_C::pCrossWalk_C() : _p_(0) {
    initRelations();
}

ThruLane::pCrossWalk_C::~pCrossWalk_C() {
}

void ThruLane::pCrossWalk_C::connectThruLane(ThruLane* part) {
    InBound.setItsEvPedestrianArrive_ProxyReceptionInterface(part);
    InBound.setItsEvWalkComplete_ProxyReceptionInterface(part);
    InBound.setPort(this); // for IS_PORT macro support
    
}

evPedestrianArrive_ProxyReceptionInterface* ThruLane::pCrossWalk_C::getItsEvPedestrianArrive_ProxyReceptionInterface() {
    return &InBound;
}

evWalkComplete_ProxyReceptionInterface* ThruLane::pCrossWalk_C::getItsEvWalkComplete_ProxyReceptionInterface() {
    return &InBound;
}

evWalk_ProxyReceptionInterface* ThruLane::pCrossWalk_C::getItsEvWalk_ProxyReceptionInterface() {
    return &OutBound;
}

void ThruLane::pCrossWalk_C::setItsEvPedestrianArrive_ProxyReceptionInterface(evPedestrianArrive_ProxyReceptionInterface* p_evPedestrianArrive_ProxyReceptionInterface) {
    InBound.setItsEvPedestrianArrive_ProxyReceptionInterface(p_evPedestrianArrive_ProxyReceptionInterface);
}

void ThruLane::pCrossWalk_C::setItsEvWalkComplete_ProxyReceptionInterface(evWalkComplete_ProxyReceptionInterface* p_evWalkComplete_ProxyReceptionInterface) {
    InBound.setItsEvWalkComplete_ProxyReceptionInterface(p_evWalkComplete_ProxyReceptionInterface);
}

void ThruLane::pCrossWalk_C::setItsEvWalk_ProxyReceptionInterface(OMReactive* p_evWalk_ProxyReceptionInterface) {
    OutBound.setItsEvWalk_ProxyReceptionInterface(p_evWalk_ProxyReceptionInterface);
}

ThruLane::pCrossWalk_C::InBound_C* ThruLane::pCrossWalk_C::getInBound() const {
    return (ThruLane::pCrossWalk_C::InBound_C*) &InBound;
}

ThruLane::pCrossWalk_C::OutBound_C* ThruLane::pCrossWalk_C::getOutBound() const {
    return (ThruLane::pCrossWalk_C::OutBound_C*) &OutBound;
}

void ThruLane::pCrossWalk_C::initRelations() {
    InBound._setPort(this);
}

void ThruLane::pCrossWalk_C::destroy() {
}
//#]

ThruLane::ThruLane(IOxfActive* theActiveContext) {
    NOTIFY_REACTIVE_CONSTRUCTOR(ThruLane, ThruLane(), 0, Default_ThruLane_ThruLane_SERIALIZE);
    setActiveContext(theActiveContext, false);
    initRelations();
    initStatechart();
}

ThruLane::~ThruLane() {
    NOTIFY_DESTRUCTOR(~ThruLane, false);
    cancelTimeouts();
}

ThruLane::pInThru_C* ThruLane::getPInThru() const {
    return (ThruLane::pInThru_C*) &pInThru;
}

ThruLane::pInThru_C* ThruLane::get_pInThru() const {
    return (ThruLane::pInThru_C*) &pInThru;
}

ThruLane::pOutThru_C* ThruLane::getPOutThru() const {
    return (ThruLane::pOutThru_C*) &pOutThru;
}

ThruLane::pOutThru_C* ThruLane::get_pOutThru() const {
    return (ThruLane::pOutThru_C*) &pOutThru;
}

ThruLane::pTurn_C* ThruLane::getPTurn() const {
    return (ThruLane::pTurn_C*) &pTurn;
}

ThruLane::pTurn_C* ThruLane::get_pTurn() const {
    return (ThruLane::pTurn_C*) &pTurn;
}

ThruLane::pCrossWalk_C* ThruLane::getPCrossWalk() const {
    return (ThruLane::pCrossWalk_C*) &pCrossWalk;
}

ThruLane::pCrossWalk_C* ThruLane::get_pCrossWalk() const {
    return (ThruLane::pCrossWalk_C*) &pCrossWalk;
}

bool ThruLane::startBehavior() {
    bool done = false;
    done = OMReactive::startBehavior();
    return done;
}

void ThruLane::initRelations() {
    if (get_pInThru() != NULL) {
        get_pInThru()->connectThruLane(this);
    }
    if (get_pTurn() != NULL) {
        get_pTurn()->connectThruLane(this);
    }
    if (get_pCrossWalk() != NULL) {
        get_pCrossWalk()->connectThruLane(this);
    }
}

void ThruLane::initStatechart() {
    rootState_subState = OMNonState;
    rootState_active = OMNonState;
    state_19_subState = OMNonState;
    state_19_active = OMNonState;
    state_13_subState = OMNonState;
    state_13_active = OMNonState;
    state_12_subState = OMNonState;
    state_12_active = OMNonState;
    state_12_timeout = NULL;
}

void ThruLane::cancelTimeouts() {
    cancel(state_12_timeout);
}

bool ThruLane::cancelTimeout(const IOxfTimeout* arg) {
    bool res = false;
    if(state_12_timeout == arg)
        {
            state_12_timeout = NULL;
            res = true;
        }
    return res;
}

void ThruLane::rootState_entDef() {
    {
        NOTIFY_STATE_ENTERED("ROOT");
        NOTIFY_TRANSITION_STARTED("16");
        NOTIFY_STATE_ENTERED("ROOT.WaitingToStart");
        rootState_subState = WaitingToStart;
        rootState_active = WaitingToStart;
        NOTIFY_TRANSITION_TERMINATED("16");
    }
}

IOxfReactive::TakeEventStatus ThruLane::rootState_processEvent() {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    switch (rootState_active) {
        // State WaitingToStart
        case WaitingToStart:
        {
            res = WaitingToStart_handleEvent();
        }
        break;
        // State Active
        case Active:
        {
            res = Active_processEvent();
        }
        break;
        default:
            break;
    }
    return res;
}

IOxfReactive::TakeEventStatus ThruLane::WaitingToStartTakeevGo() {
    OMSETPARAMS(evGo);
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    //## transition 2 
    if(params->first)
        {
            NOTIFY_TRANSITION_STARTED("1");
            NOTIFY_TRANSITION_STARTED("2");
            NOTIFY_STATE_EXITED("ROOT.WaitingToStart");
            //#[ transition 1 
            
            whoAmI=params->name;
            //#]
            //#[ transition 2 
            
            setColor(RED);
            //#]
            NOTIFY_STATE_ENTERED("ROOT.Active");
            rootState_subState = Active;
            rootState_active = Active;
            state_13_entDef();
            state_19_entDef();
            NOTIFY_STATE_ENTERED("ROOT.Active.state_12");
            NOTIFY_STATE_ENTERED("ROOT.Active.state_12.RedState");
            state_12_subState = RedState;
            state_12_active = RedState;
            state_12_timeout = scheduleTimeout(RED_TIME, "ROOT.Active.state_12.RedState");
            NOTIFY_TRANSITION_TERMINATED("2");
            NOTIFY_TRANSITION_TERMINATED("1");
            res = eventConsumed;
        }
    else
        {
            NOTIFY_TRANSITION_STARTED("1");
            NOTIFY_TRANSITION_STARTED("3");
            NOTIFY_STATE_EXITED("ROOT.WaitingToStart");
            //#[ transition 1 
            
            whoAmI=params->name;
            //#]
            Active_entDef();
            NOTIFY_TRANSITION_TERMINATED("3");
            NOTIFY_TRANSITION_TERMINATED("1");
            res = eventConsumed;
        }
    return res;
}

IOxfReactive::TakeEventStatus ThruLane::WaitingToStart_handleEvent() {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    if(IS_EVENT_TYPE_OF(evGo_Default_id))
        {
            res = WaitingToStartTakeevGo();
        }
    
    return res;
}

void ThruLane::Active_entDef() {
    NOTIFY_STATE_ENTERED("ROOT.Active");
    rootState_subState = Active;
    rootState_active = Active;
    state_12_entDef();
    state_13_entDef();
    state_19_entDef();
}

void ThruLane::Active_exit() {
    state_12_exit();
    switch (state_13_subState) {
        // State TurnLaneEmpty
        case TurnLaneEmpty:
        {
            NOTIFY_STATE_EXITED("ROOT.Active.state_13.TurnLaneEmpty");
        }
        break;
        // State TurnCarWaiting
        case TurnCarWaiting:
        {
            NOTIFY_STATE_EXITED("ROOT.Active.state_13.TurnCarWaiting");
        }
        break;
        default:
            break;
    }
    state_13_subState = OMNonState;
    NOTIFY_STATE_EXITED("ROOT.Active.state_13");
    switch (state_19_subState) {
        // State NoPedstrianWaiting
        case NoPedstrianWaiting:
        {
            NOTIFY_STATE_EXITED("ROOT.Active.state_19.NoPedstrianWaiting");
        }
        break;
        // State PedestrianWaiting
        case PedestrianWaiting:
        {
            NOTIFY_STATE_EXITED("ROOT.Active.state_19.PedestrianWaiting");
        }
        break;
        default:
            break;
    }
    state_19_subState = OMNonState;
    NOTIFY_STATE_EXITED("ROOT.Active.state_19");
    
    NOTIFY_STATE_EXITED("ROOT.Active");
}

IOxfReactive::TakeEventStatus ThruLane::Active_processEvent() {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    // State state_12
    if(state_12_processEvent() != eventNotConsumed)
        {
            res = eventConsumed;
            if(!IS_IN(Active))
                {
                    return res;
                }
        }
    // State state_13
    if(state_13_processEvent() != eventNotConsumed)
        {
            res = eventConsumed;
            if(!IS_IN(Active))
                {
                    return res;
                }
        }
    // State state_19
    if(state_19_processEvent() != eventNotConsumed)
        {
            res = eventConsumed;
            if(!IS_IN(Active))
                {
                    return res;
                }
        }
    
    return res;
}

void ThruLane::state_19_entDef() {
    NOTIFY_STATE_ENTERED("ROOT.Active.state_19");
    NOTIFY_TRANSITION_STARTED("25");
    NOTIFY_STATE_ENTERED("ROOT.Active.state_19.NoPedstrianWaiting");
    state_19_subState = NoPedstrianWaiting;
    state_19_active = NoPedstrianWaiting;
    NOTIFY_TRANSITION_TERMINATED("25");
}

IOxfReactive::TakeEventStatus ThruLane::state_19_processEvent() {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    switch (state_19_active) {
        // State NoPedstrianWaiting
        case NoPedstrianWaiting:
        {
            if(IS_EVENT_TYPE_OF(evPedestrianArrive_Default_id))
                {
                    NOTIFY_TRANSITION_STARTED("18");
                    NOTIFY_STATE_EXITED("ROOT.Active.state_19.NoPedstrianWaiting");
                    NOTIFY_STATE_ENTERED("ROOT.Active.state_19.PedestrianWaiting");
                    state_19_subState = PedestrianWaiting;
                    state_19_active = PedestrianWaiting;
                    NOTIFY_TRANSITION_TERMINATED("18");
                    res = eventConsumed;
                }
            
            
        }
        break;
        // State PedestrianWaiting
        case PedestrianWaiting:
        {
            if(IS_EVENT_TYPE_OF(evPedestrianReset_Default_id))
                {
                    NOTIFY_TRANSITION_STARTED("19");
                    NOTIFY_STATE_EXITED("ROOT.Active.state_19.PedestrianWaiting");
                    NOTIFY_STATE_ENTERED("ROOT.Active.state_19.NoPedstrianWaiting");
                    state_19_subState = NoPedstrianWaiting;
                    state_19_active = NoPedstrianWaiting;
                    NOTIFY_TRANSITION_TERMINATED("19");
                    res = eventConsumed;
                }
            
            
        }
        break;
        default:
            break;
    }
    return res;
}

void ThruLane::state_13_entDef() {
    NOTIFY_STATE_ENTERED("ROOT.Active.state_13");
    NOTIFY_TRANSITION_STARTED("17");
    NOTIFY_STATE_ENTERED("ROOT.Active.state_13.TurnLaneEmpty");
    state_13_subState = TurnLaneEmpty;
    state_13_active = TurnLaneEmpty;
    NOTIFY_TRANSITION_TERMINATED("17");
}

IOxfReactive::TakeEventStatus ThruLane::state_13_processEvent() {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    switch (state_13_active) {
        // State TurnLaneEmpty
        case TurnLaneEmpty:
        {
            if(IS_EVENT_TYPE_OF(evCarArrive_Default_id))
                {
                    NOTIFY_TRANSITION_STARTED("14");
                    NOTIFY_STATE_EXITED("ROOT.Active.state_13.TurnLaneEmpty");
                    NOTIFY_STATE_ENTERED("ROOT.Active.state_13.TurnCarWaiting");
                    state_13_subState = TurnCarWaiting;
                    state_13_active = TurnCarWaiting;
                    NOTIFY_TRANSITION_TERMINATED("14");
                    res = eventConsumed;
                }
            
            
        }
        break;
        // State TurnCarWaiting
        case TurnCarWaiting:
        {
            if(IS_EVENT_TYPE_OF(evResetTurnLane_Default_id))
                {
                    NOTIFY_TRANSITION_STARTED("15");
                    NOTIFY_STATE_EXITED("ROOT.Active.state_13.TurnCarWaiting");
                    NOTIFY_STATE_ENTERED("ROOT.Active.state_13.TurnLaneEmpty");
                    state_13_subState = TurnLaneEmpty;
                    state_13_active = TurnLaneEmpty;
                    NOTIFY_TRANSITION_TERMINATED("15");
                    res = eventConsumed;
                }
            
            
        }
        break;
        default:
            break;
    }
    return res;
}

void ThruLane::state_12_entDef() {
    NOTIFY_STATE_ENTERED("ROOT.Active.state_12");
    NOTIFY_TRANSITION_STARTED("0");
    NOTIFY_STATE_ENTERED("ROOT.Active.state_12.WaitForOtherLaneCompletion");
    state_12_subState = WaitForOtherLaneCompletion;
    state_12_active = WaitForOtherLaneCompletion;
    //#[ state Active.state_12.WaitForOtherLaneCompletion.(Entry) 
    setColor(RED);
    //#]
    NOTIFY_TRANSITION_TERMINATED("0");
}

void ThruLane::state_12_exit() {
    switch (state_12_subState) {
        // State RedState
        case RedState:
        {
            cancel(state_12_timeout);
            NOTIFY_STATE_EXITED("ROOT.Active.state_12.RedState");
        }
        break;
        // State GreenState
        case GreenState:
        {
            cancel(state_12_timeout);
            NOTIFY_STATE_EXITED("ROOT.Active.state_12.GreenState");
        }
        break;
        // State YellowState
        case YellowState:
        {
            cancel(state_12_timeout);
            NOTIFY_STATE_EXITED("ROOT.Active.state_12.YellowState");
        }
        break;
        // State sendaction_4
        case sendaction_4:
        {
            popNullTransition();
            NOTIFY_STATE_EXITED("ROOT.Active.state_12.sendaction_4");
        }
        break;
        // State WaitForTurnLane
        case WaitForTurnLane:
        {
            NOTIFY_STATE_EXITED("ROOT.Active.state_12.WaitForTurnLane");
        }
        break;
        // State sendaction_6
        case sendaction_6:
        {
            popNullTransition();
            NOTIFY_STATE_EXITED("ROOT.Active.state_12.sendaction_6");
        }
        break;
        // State sendaction_7
        case sendaction_7:
        {
            popNullTransition();
            NOTIFY_STATE_EXITED("ROOT.Active.state_12.sendaction_7");
        }
        break;
        // State WaitForOtherLaneCompletion
        case WaitForOtherLaneCompletion:
        {
            NOTIFY_STATE_EXITED("ROOT.Active.state_12.WaitForOtherLaneCompletion");
        }
        break;
        // State StateCompletionStep
        case StateCompletionStep:
        {
            popNullTransition();
            NOTIFY_STATE_EXITED("ROOT.Active.state_12.StateCompletionStep");
        }
        break;
        // State WaitingForPedestrian
        case WaitingForPedestrian:
        {
            NOTIFY_STATE_EXITED("ROOT.Active.state_12.WaitingForPedestrian");
        }
        break;
        // State sendaction_18
        case sendaction_18:
        {
            popNullTransition();
            NOTIFY_STATE_EXITED("ROOT.Active.state_12.sendaction_18");
        }
        break;
        // State sendaction_20
        case sendaction_20:
        {
            popNullTransition();
            NOTIFY_STATE_EXITED("ROOT.Active.state_12.sendaction_20");
        }
        break;
        default:
            break;
    }
    state_12_subState = OMNonState;
    
    NOTIFY_STATE_EXITED("ROOT.Active.state_12");
}

IOxfReactive::TakeEventStatus ThruLane::state_12_processEvent() {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    switch (state_12_active) {
        // State RedState
        case RedState:
        {
            if(IS_EVENT_TYPE_OF(OMTimeoutEventId))
                {
                    if(getCurrentEvent() == state_12_timeout)
                        {
                            //## transition 5 
                            if(IS_IN(TurnCarWaiting))
                                {
                                    NOTIFY_TRANSITION_STARTED("4");
                                    NOTIFY_TRANSITION_STARTED("5");
                                    cancel(state_12_timeout);
                                    NOTIFY_STATE_EXITED("ROOT.Active.state_12.RedState");
                                    NOTIFY_STATE_ENTERED("ROOT.Active.state_12.sendaction_4");
                                    pushNullTransition();
                                    state_12_subState = sendaction_4;
                                    state_12_active = sendaction_4;
                                    //#[ state Active.state_12.sendaction_4.(Entry) 
                                    OUT_PORT(pTurn)->GEN(evGoTurn);
                                    //#]
                                    NOTIFY_TRANSITION_TERMINATED("5");
                                    NOTIFY_TRANSITION_TERMINATED("4");
                                    res = eventConsumed;
                                }
                            else
                                {
                                    NOTIFY_TRANSITION_STARTED("4");
                                    NOTIFY_TRANSITION_STARTED("6");
                                    cancel(state_12_timeout);
                                    NOTIFY_STATE_EXITED("ROOT.Active.state_12.RedState");
                                    NOTIFY_STATE_ENTERED("ROOT.Active.state_12.StateCompletionStep");
                                    pushNullTransition();
                                    state_12_subState = StateCompletionStep;
                                    state_12_active = StateCompletionStep;
                                    NOTIFY_TRANSITION_TERMINATED("6");
                                    NOTIFY_TRANSITION_TERMINATED("4");
                                    res = eventConsumed;
                                }
                        }
                }
            
            
        }
        break;
        // State GreenState
        case GreenState:
        {
            if(IS_EVENT_TYPE_OF(OMTimeoutEventId))
                {
                    if(getCurrentEvent() == state_12_timeout)
                        {
                            NOTIFY_TRANSITION_STARTED("10");
                            cancel(state_12_timeout);
                            NOTIFY_STATE_EXITED("ROOT.Active.state_12.GreenState");
                            NOTIFY_STATE_ENTERED("ROOT.Active.state_12.YellowState");
                            state_12_subState = YellowState;
                            state_12_active = YellowState;
                            //#[ state Active.state_12.YellowState.(Entry) 
                            setColor(YELLOW);
                            //#]
                            state_12_timeout = scheduleTimeout(YELLOW_TIME, "ROOT.Active.state_12.YellowState");
                            NOTIFY_TRANSITION_TERMINATED("10");
                            res = eventConsumed;
                        }
                }
            
            
        }
        break;
        // State YellowState
        case YellowState:
        {
            if(IS_EVENT_TYPE_OF(OMTimeoutEventId))
                {
                    if(getCurrentEvent() == state_12_timeout)
                        {
                            NOTIFY_TRANSITION_STARTED("11");
                            cancel(state_12_timeout);
                            NOTIFY_STATE_EXITED("ROOT.Active.state_12.YellowState");
                            NOTIFY_STATE_ENTERED("ROOT.Active.state_12.sendaction_7");
                            pushNullTransition();
                            state_12_subState = sendaction_7;
                            state_12_active = sendaction_7;
                            //#[ state Active.state_12.sendaction_7.(Entry) 
                            OUT_PORT(pOutThru)->GEN(evLaneDone);
                            //#]
                            NOTIFY_TRANSITION_TERMINATED("11");
                            res = eventConsumed;
                        }
                }
            
            
        }
        break;
        // State sendaction_4
        case sendaction_4:
        {
            if(IS_EVENT_TYPE_OF(OMNullEventId))
                {
                    NOTIFY_TRANSITION_STARTED("7");
                    popNullTransition();
                    NOTIFY_STATE_EXITED("ROOT.Active.state_12.sendaction_4");
                    NOTIFY_STATE_ENTERED("ROOT.Active.state_12.WaitForTurnLane");
                    state_12_subState = WaitForTurnLane;
                    state_12_active = WaitForTurnLane;
                    NOTIFY_TRANSITION_TERMINATED("7");
                    res = eventConsumed;
                }
            
            
        }
        break;
        // State WaitForTurnLane
        case WaitForTurnLane:
        {
            if(IS_EVENT_TYPE_OF(evTurnDone_Default_id))
                {
                    NOTIFY_TRANSITION_STARTED("8");
                    NOTIFY_STATE_EXITED("ROOT.Active.state_12.WaitForTurnLane");
                    NOTIFY_STATE_ENTERED("ROOT.Active.state_12.sendaction_6");
                    pushNullTransition();
                    state_12_subState = sendaction_6;
                    state_12_active = sendaction_6;
                    //#[ state Active.state_12.sendaction_6.(Entry) 
                    GEN(evResetTurnLane);
                    //#]
                    NOTIFY_TRANSITION_TERMINATED("8");
                    res = eventConsumed;
                }
            
            
        }
        break;
        // State sendaction_6
        case sendaction_6:
        {
            if(IS_EVENT_TYPE_OF(OMNullEventId))
                {
                    NOTIFY_TRANSITION_STARTED("9");
                    popNullTransition();
                    NOTIFY_STATE_EXITED("ROOT.Active.state_12.sendaction_6");
                    NOTIFY_STATE_ENTERED("ROOT.Active.state_12.StateCompletionStep");
                    pushNullTransition();
                    state_12_subState = StateCompletionStep;
                    state_12_active = StateCompletionStep;
                    NOTIFY_TRANSITION_TERMINATED("9");
                    res = eventConsumed;
                }
            
            
        }
        break;
        // State sendaction_7
        case sendaction_7:
        {
            if(IS_EVENT_TYPE_OF(OMNullEventId))
                {
                    NOTIFY_TRANSITION_STARTED("12");
                    popNullTransition();
                    NOTIFY_STATE_EXITED("ROOT.Active.state_12.sendaction_7");
                    NOTIFY_STATE_ENTERED("ROOT.Active.state_12.WaitForOtherLaneCompletion");
                    state_12_subState = WaitForOtherLaneCompletion;
                    state_12_active = WaitForOtherLaneCompletion;
                    //#[ state Active.state_12.WaitForOtherLaneCompletion.(Entry) 
                    setColor(RED);
                    //#]
                    NOTIFY_TRANSITION_TERMINATED("12");
                    res = eventConsumed;
                }
            
            
        }
        break;
        // State WaitForOtherLaneCompletion
        case WaitForOtherLaneCompletion:
        {
            if(IS_EVENT_TYPE_OF(evLaneDone_Default_id))
                {
                    NOTIFY_TRANSITION_STARTED("13");
                    NOTIFY_STATE_EXITED("ROOT.Active.state_12.WaitForOtherLaneCompletion");
                    NOTIFY_STATE_ENTERED("ROOT.Active.state_12.RedState");
                    state_12_subState = RedState;
                    state_12_active = RedState;
                    state_12_timeout = scheduleTimeout(RED_TIME, "ROOT.Active.state_12.RedState");
                    NOTIFY_TRANSITION_TERMINATED("13");
                    res = eventConsumed;
                }
            
            
        }
        break;
        // State StateCompletionStep
        case StateCompletionStep:
        {
            if(IS_EVENT_TYPE_OF(OMNullEventId))
                {
                    //## transition 21 
                    if(IS_IN(PedestrianWaiting))
                        {
                            NOTIFY_TRANSITION_STARTED("20");
                            NOTIFY_TRANSITION_STARTED("21");
                            popNullTransition();
                            NOTIFY_STATE_EXITED("ROOT.Active.state_12.StateCompletionStep");
                            NOTIFY_STATE_ENTERED("ROOT.Active.state_12.sendaction_18");
                            pushNullTransition();
                            state_12_subState = sendaction_18;
                            state_12_active = sendaction_18;
                            //#[ state Active.state_12.sendaction_18.(Entry) 
                            OUT_PORT(pCrossWalk)->GEN(evWalk);
                            //#]
                            NOTIFY_TRANSITION_TERMINATED("21");
                            NOTIFY_TRANSITION_TERMINATED("20");
                            res = eventConsumed;
                        }
                    else
                        {
                            NOTIFY_TRANSITION_STARTED("20");
                            NOTIFY_TRANSITION_STARTED("23");
                            popNullTransition();
                            NOTIFY_STATE_EXITED("ROOT.Active.state_12.StateCompletionStep");
                            NOTIFY_STATE_ENTERED("ROOT.Active.state_12.GreenState");
                            state_12_subState = GreenState;
                            state_12_active = GreenState;
                            //#[ state Active.state_12.GreenState.(Entry) 
                            setColor(GREEN);
                            //#]
                            state_12_timeout = scheduleTimeout(GREEN_TIME, "ROOT.Active.state_12.GreenState");
                            NOTIFY_TRANSITION_TERMINATED("23");
                            NOTIFY_TRANSITION_TERMINATED("20");
                            res = eventConsumed;
                        }
                }
            
            
        }
        break;
        // State WaitingForPedestrian
        case WaitingForPedestrian:
        {
            if(IS_EVENT_TYPE_OF(evWalkComplete_Default_id))
                {
                    NOTIFY_TRANSITION_STARTED("22");
                    NOTIFY_STATE_EXITED("ROOT.Active.state_12.WaitingForPedestrian");
                    NOTIFY_STATE_ENTERED("ROOT.Active.state_12.sendaction_20");
                    pushNullTransition();
                    state_12_subState = sendaction_20;
                    state_12_active = sendaction_20;
                    //#[ state Active.state_12.sendaction_20.(Entry) 
                    GEN(evPedestrianReset);
                    //#]
                    NOTIFY_TRANSITION_TERMINATED("22");
                    res = eventConsumed;
                }
            
            
        }
        break;
        // State sendaction_18
        case sendaction_18:
        {
            if(IS_EVENT_TYPE_OF(OMNullEventId))
                {
                    NOTIFY_TRANSITION_STARTED("24");
                    popNullTransition();
                    NOTIFY_STATE_EXITED("ROOT.Active.state_12.sendaction_18");
                    NOTIFY_STATE_ENTERED("ROOT.Active.state_12.WaitingForPedestrian");
                    state_12_subState = WaitingForPedestrian;
                    state_12_active = WaitingForPedestrian;
                    NOTIFY_TRANSITION_TERMINATED("24");
                    res = eventConsumed;
                }
            
            
        }
        break;
        // State sendaction_20
        case sendaction_20:
        {
            if(IS_EVENT_TYPE_OF(OMNullEventId))
                {
                    NOTIFY_TRANSITION_STARTED("26");
                    popNullTransition();
                    NOTIFY_STATE_EXITED("ROOT.Active.state_12.sendaction_20");
                    NOTIFY_STATE_ENTERED("ROOT.Active.state_12.GreenState");
                    state_12_subState = GreenState;
                    state_12_active = GreenState;
                    //#[ state Active.state_12.GreenState.(Entry) 
                    setColor(GREEN);
                    //#]
                    state_12_timeout = scheduleTimeout(GREEN_TIME, "ROOT.Active.state_12.GreenState");
                    NOTIFY_TRANSITION_TERMINATED("26");
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
void OMAnimatedThruLane::serializeAttributes(AOMSAttributes* aomsAttributes) const {
    OMAnimatedTrafficLane::serializeAttributes(aomsAttributes);
}

void OMAnimatedThruLane::serializeRelations(AOMSRelations* aomsRelations) const {
    OMAnimatedTrafficLane::serializeRelations(aomsRelations);
}

void OMAnimatedThruLane::rootState_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT");
    switch (myReal->rootState_subState) {
        case ThruLane::WaitingToStart:
        {
            WaitingToStart_serializeStates(aomsState);
        }
        break;
        case ThruLane::Active:
        {
            Active_serializeStates(aomsState);
        }
        break;
        default:
            break;
    }
}

void OMAnimatedThruLane::WaitingToStart_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.WaitingToStart");
}

void OMAnimatedThruLane::Active_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.Active");
    state_12_serializeStates(aomsState);
    state_13_serializeStates(aomsState);
    state_19_serializeStates(aomsState);
}

void OMAnimatedThruLane::state_19_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.Active.state_19");
    switch (myReal->state_19_subState) {
        case ThruLane::NoPedstrianWaiting:
        {
            NoPedstrianWaiting_serializeStates(aomsState);
        }
        break;
        case ThruLane::PedestrianWaiting:
        {
            PedestrianWaiting_serializeStates(aomsState);
        }
        break;
        default:
            break;
    }
}

void OMAnimatedThruLane::PedestrianWaiting_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.Active.state_19.PedestrianWaiting");
}

void OMAnimatedThruLane::NoPedstrianWaiting_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.Active.state_19.NoPedstrianWaiting");
}

void OMAnimatedThruLane::state_13_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.Active.state_13");
    switch (myReal->state_13_subState) {
        case ThruLane::TurnLaneEmpty:
        {
            TurnLaneEmpty_serializeStates(aomsState);
        }
        break;
        case ThruLane::TurnCarWaiting:
        {
            TurnCarWaiting_serializeStates(aomsState);
        }
        break;
        default:
            break;
    }
}

void OMAnimatedThruLane::TurnLaneEmpty_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.Active.state_13.TurnLaneEmpty");
}

void OMAnimatedThruLane::TurnCarWaiting_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.Active.state_13.TurnCarWaiting");
}

void OMAnimatedThruLane::state_12_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.Active.state_12");
    switch (myReal->state_12_subState) {
        case ThruLane::RedState:
        {
            RedState_serializeStates(aomsState);
        }
        break;
        case ThruLane::GreenState:
        {
            GreenState_serializeStates(aomsState);
        }
        break;
        case ThruLane::YellowState:
        {
            YellowState_serializeStates(aomsState);
        }
        break;
        case ThruLane::sendaction_4:
        {
            sendaction_4_serializeStates(aomsState);
        }
        break;
        case ThruLane::WaitForTurnLane:
        {
            WaitForTurnLane_serializeStates(aomsState);
        }
        break;
        case ThruLane::sendaction_6:
        {
            sendaction_6_serializeStates(aomsState);
        }
        break;
        case ThruLane::sendaction_7:
        {
            sendaction_7_serializeStates(aomsState);
        }
        break;
        case ThruLane::WaitForOtherLaneCompletion:
        {
            WaitForOtherLaneCompletion_serializeStates(aomsState);
        }
        break;
        case ThruLane::StateCompletionStep:
        {
            StateCompletionStep_serializeStates(aomsState);
        }
        break;
        case ThruLane::WaitingForPedestrian:
        {
            WaitingForPedestrian_serializeStates(aomsState);
        }
        break;
        case ThruLane::sendaction_18:
        {
            sendaction_18_serializeStates(aomsState);
        }
        break;
        case ThruLane::sendaction_20:
        {
            sendaction_20_serializeStates(aomsState);
        }
        break;
        default:
            break;
    }
}

void OMAnimatedThruLane::YellowState_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.Active.state_12.YellowState");
}

void OMAnimatedThruLane::WaitingForPedestrian_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.Active.state_12.WaitingForPedestrian");
}

void OMAnimatedThruLane::WaitForTurnLane_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.Active.state_12.WaitForTurnLane");
}

void OMAnimatedThruLane::WaitForOtherLaneCompletion_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.Active.state_12.WaitForOtherLaneCompletion");
}

void OMAnimatedThruLane::StateCompletionStep_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.Active.state_12.StateCompletionStep");
}

void OMAnimatedThruLane::sendaction_7_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.Active.state_12.sendaction_7");
}

void OMAnimatedThruLane::sendaction_6_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.Active.state_12.sendaction_6");
}

void OMAnimatedThruLane::sendaction_4_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.Active.state_12.sendaction_4");
}

void OMAnimatedThruLane::sendaction_20_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.Active.state_12.sendaction_20");
}

void OMAnimatedThruLane::sendaction_18_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.Active.state_12.sendaction_18");
}

void OMAnimatedThruLane::RedState_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.Active.state_12.RedState");
}

void OMAnimatedThruLane::GreenState_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.Active.state_12.GreenState");
}
//#]

IMPLEMENT_REACTIVE_META_S_P(ThruLane, Default, false, TrafficLane, OMAnimatedTrafficLane, OMAnimatedThruLane)

OMINIT_SUPERCLASS(TrafficLane, OMAnimatedTrafficLane)

OMREGISTER_REACTIVE_CLASS
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: TrafficLightMVP2/MVP2Config/ThruLane.cpp
*********************************************************************/
