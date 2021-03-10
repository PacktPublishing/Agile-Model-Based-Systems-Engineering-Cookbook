/********************************************************************
	Rhapsody	: 9.0 
	Login		: Bruce
	Component	: TrafficLightMVP2 
	Configuration 	: MVP2Config
	Model Element	: TurnLane
//!	Generated Date	: Tue, 8, Dec 2020  
	File Path	: TrafficLightMVP2/MVP2Config/TurnLane.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX

#define _OMSTATECHART_ANIMATED
//#]

//## auto_generated
#include "TurnLane.h"
//#[ ignore
#define Default_TurnLane_TurnLane_SERIALIZE OM_NO_OP
//#]

//## package Default

//## class TurnLane
//#[ ignore
TurnLane::pThru_C::InBound_C::InBound_C() {
    itsEvGoTurn_ProxyReceptionInterface = NULL;
    port = NULL;
}

TurnLane::pThru_C::InBound_C::~InBound_C() {
    cleanUpRelations();
}

bool TurnLane::pThru_C::InBound_C::send(IOxfEvent* event, const IOxfEventGenerationParams& params) {
    bool res = false;
    if (event != NULL) {
        event->setPort(getPort());
        if (itsEvGoTurn_ProxyReceptionInterface != NULL) {
            if (event->isTypeOf(evGoTurn_Default_id)) {
                res = itsEvGoTurn_ProxyReceptionInterface->send(event, params);
            }
        }
    }
    return res;
    
}

bool TurnLane::pThru_C::InBound_C::send(IOxfEvent* event) {
    bool res = false;
    if (event != NULL) {
        event->setPort(getPort());
        if (itsEvGoTurn_ProxyReceptionInterface != NULL) {
            if (event->isTypeOf(evGoTurn_Default_id)) {
                res = itsEvGoTurn_ProxyReceptionInterface->send(event);
            }
        }
    }
    return res;
    
}

void TurnLane::pThru_C::InBound_C::setItsEvGoTurn_ProxyReceptionInterface(evGoTurn_ProxyReceptionInterface* p_evGoTurn_ProxyReceptionInterface) {
    itsEvGoTurn_ProxyReceptionInterface = p_evGoTurn_ProxyReceptionInterface;
}

TurnLane::pThru_C* TurnLane::pThru_C::InBound_C::getPort() const {
    return port;
}

void TurnLane::pThru_C::InBound_C::setPort(TurnLane::pThru_C* p_pThru_C) {
    _setPort(p_pThru_C);
}

void TurnLane::pThru_C::InBound_C::cleanUpRelations() {
    if(itsEvGoTurn_ProxyReceptionInterface != NULL)
        {
            itsEvGoTurn_ProxyReceptionInterface = NULL;
        }
    if(port != NULL)
        {
            port = NULL;
        }
}

void TurnLane::pThru_C::InBound_C::__setPort(TurnLane::pThru_C* p_pThru_C) {
    port = p_pThru_C;
}

void TurnLane::pThru_C::InBound_C::_setPort(TurnLane::pThru_C* p_pThru_C) {
    __setPort(p_pThru_C);
}

void TurnLane::pThru_C::InBound_C::_clearPort() {
    port = NULL;
}

TurnLane::pThru_C::OutBound_C::OutBound_C() {
    itsEvCarArrive_ProxyReceptionInterface = NULL;
    itsEvTurnDone_ProxyReceptionInterface = NULL;
}

TurnLane::pThru_C::OutBound_C::~OutBound_C() {
    cleanUpRelations();
}

bool TurnLane::pThru_C::OutBound_C::send(IOxfEvent* event, const IOxfEventGenerationParams& params) {
    bool res = false;
    if (event != NULL) {
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

bool TurnLane::pThru_C::OutBound_C::send(IOxfEvent* event) {
    bool res = false;
    if (event != NULL) {
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

void TurnLane::pThru_C::OutBound_C::setItsEvCarArrive_ProxyReceptionInterface(OMReactive* p_OMReactive) {
    itsEvCarArrive_ProxyReceptionInterface = p_OMReactive;
}

void TurnLane::pThru_C::OutBound_C::setItsEvTurnDone_ProxyReceptionInterface(OMReactive* p_OMReactive) {
    itsEvTurnDone_ProxyReceptionInterface = p_OMReactive;
}

void TurnLane::pThru_C::OutBound_C::cleanUpRelations() {
    if(itsEvCarArrive_ProxyReceptionInterface != NULL)
        {
            itsEvCarArrive_ProxyReceptionInterface = NULL;
        }
    if(itsEvTurnDone_ProxyReceptionInterface != NULL)
        {
            itsEvTurnDone_ProxyReceptionInterface = NULL;
        }
}

TurnLane::pThru_C::pThru_C() : _p_(0) {
    initRelations();
}

TurnLane::pThru_C::~pThru_C() {
}

void TurnLane::pThru_C::connectTurnLane(TurnLane* part) {
    InBound.setItsEvGoTurn_ProxyReceptionInterface(part);
    InBound.setPort(this); // for IS_PORT macro support
    
}

evCarArrive_ProxyReceptionInterface* TurnLane::pThru_C::getItsEvCarArrive_ProxyReceptionInterface() {
    return &OutBound;
}

evGoTurn_ProxyReceptionInterface* TurnLane::pThru_C::getItsEvGoTurn_ProxyReceptionInterface() {
    return &InBound;
}

evTurnDone_ProxyReceptionInterface* TurnLane::pThru_C::getItsEvTurnDone_ProxyReceptionInterface() {
    return &OutBound;
}

void TurnLane::pThru_C::setItsEvCarArrive_ProxyReceptionInterface(OMReactive* p_evCarArrive_ProxyReceptionInterface) {
    OutBound.setItsEvCarArrive_ProxyReceptionInterface(p_evCarArrive_ProxyReceptionInterface);
}

void TurnLane::pThru_C::setItsEvGoTurn_ProxyReceptionInterface(evGoTurn_ProxyReceptionInterface* p_evGoTurn_ProxyReceptionInterface) {
    InBound.setItsEvGoTurn_ProxyReceptionInterface(p_evGoTurn_ProxyReceptionInterface);
}

void TurnLane::pThru_C::setItsEvTurnDone_ProxyReceptionInterface(OMReactive* p_evTurnDone_ProxyReceptionInterface) {
    OutBound.setItsEvTurnDone_ProxyReceptionInterface(p_evTurnDone_ProxyReceptionInterface);
}

TurnLane::pThru_C::InBound_C* TurnLane::pThru_C::getInBound() const {
    return (TurnLane::pThru_C::InBound_C*) &InBound;
}

TurnLane::pThru_C::OutBound_C* TurnLane::pThru_C::getOutBound() const {
    return (TurnLane::pThru_C::OutBound_C*) &OutBound;
}

void TurnLane::pThru_C::initRelations() {
    InBound._setPort(this);
}

void TurnLane::pThru_C::destroy() {
}
//#]

TurnLane::TurnLane(IOxfActive* theActiveContext) {
    NOTIFY_REACTIVE_CONSTRUCTOR(TurnLane, TurnLane(), 0, Default_TurnLane_TurnLane_SERIALIZE);
    setActiveContext(theActiveContext, false);
    initRelations();
    initStatechart();
}

TurnLane::~TurnLane() {
    NOTIFY_DESTRUCTOR(~TurnLane, false);
    cancelTimeouts();
}

TurnLane::pThru_C* TurnLane::getPThru() const {
    return (TurnLane::pThru_C*) &pThru;
}

TurnLane::pThru_C* TurnLane::get_pThru() const {
    return (TurnLane::pThru_C*) &pThru;
}

bool TurnLane::startBehavior() {
    bool done = false;
    done = OMReactive::startBehavior();
    return done;
}

void TurnLane::initRelations() {
    if (get_pThru() != NULL) {
        get_pThru()->connectTurnLane(this);
    }
}

void TurnLane::initStatechart() {
    rootState_subState = OMNonState;
    rootState_active = OMNonState;
    state_9_subState = OMNonState;
    state_9_active = OMNonState;
    state_10_subState = OMNonState;
    state_10_active = OMNonState;
    state_10_timeout = NULL;
}

void TurnLane::cancelTimeouts() {
    cancel(state_10_timeout);
}

bool TurnLane::cancelTimeout(const IOxfTimeout* arg) {
    bool res = false;
    if(state_10_timeout == arg)
        {
            state_10_timeout = NULL;
            res = true;
        }
    return res;
}

void TurnLane::rootState_entDef() {
    {
        NOTIFY_STATE_ENTERED("ROOT");
        NOTIFY_TRANSITION_STARTED("10");
        NOTIFY_STATE_ENTERED("ROOT.WaitingToStart");
        rootState_subState = WaitingToStart;
        rootState_active = WaitingToStart;
        NOTIFY_TRANSITION_TERMINATED("10");
    }
}

IOxfReactive::TakeEventStatus TurnLane::rootState_processEvent() {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    switch (rootState_active) {
        // State WaitingToStart
        case WaitingToStart:
        {
            if(IS_EVENT_TYPE_OF(evGo_Default_id))
                {
                    OMSETPARAMS(evGo);
                    NOTIFY_TRANSITION_STARTED("8");
                    NOTIFY_STATE_EXITED("ROOT.WaitingToStart");
                    //#[ transition 8 
                    
                    whoAmI = params->name;
                    //#]
                    NOTIFY_STATE_ENTERED("ROOT.Active");
                    rootState_subState = Active;
                    rootState_active = Active;
                    state_10_entDef();
                    state_9_entDef();
                    NOTIFY_TRANSITION_TERMINATED("8");
                    res = eventConsumed;
                }
            
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

void TurnLane::Active_entDef() {
    NOTIFY_STATE_ENTERED("ROOT.Active");
    rootState_subState = Active;
    rootState_active = Active;
    state_9_entDef();
    state_10_entDef();
}

void TurnLane::Active_exit() {
    switch (state_9_subState) {
        // State NoCarPresent
        case NoCarPresent:
        {
            NOTIFY_STATE_EXITED("ROOT.Active.state_9.NoCarPresent");
        }
        break;
        // State sendaction_2
        case sendaction_2:
        {
            popNullTransition();
            NOTIFY_STATE_EXITED("ROOT.Active.state_9.sendaction_2");
        }
        break;
        default:
            break;
    }
    state_9_subState = OMNonState;
    NOTIFY_STATE_EXITED("ROOT.Active.state_9");
    state_10_exit();
    
    NOTIFY_STATE_EXITED("ROOT.Active");
}

IOxfReactive::TakeEventStatus TurnLane::Active_processEvent() {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    // State state_9
    if(state_9_processEvent() != eventNotConsumed)
        {
            res = eventConsumed;
            if(!IS_IN(Active))
                {
                    return res;
                }
        }
    // State state_10
    if(state_10_processEvent() != eventNotConsumed)
        {
            res = eventConsumed;
            if(!IS_IN(Active))
                {
                    return res;
                }
        }
    
    return res;
}

void TurnLane::state_9_entDef() {
    NOTIFY_STATE_ENTERED("ROOT.Active.state_9");
    NOTIFY_TRANSITION_STARTED("7");
    NOTIFY_STATE_ENTERED("ROOT.Active.state_9.NoCarPresent");
    state_9_subState = NoCarPresent;
    state_9_active = NoCarPresent;
    NOTIFY_TRANSITION_TERMINATED("7");
}

IOxfReactive::TakeEventStatus TurnLane::state_9_processEvent() {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    switch (state_9_active) {
        // State NoCarPresent
        case NoCarPresent:
        {
            if(IS_EVENT_TYPE_OF(exCarArrive_Default_id))
                {
                    NOTIFY_TRANSITION_STARTED("5");
                    NOTIFY_STATE_EXITED("ROOT.Active.state_9.NoCarPresent");
                    NOTIFY_STATE_ENTERED("ROOT.Active.state_9.sendaction_2");
                    pushNullTransition();
                    state_9_subState = sendaction_2;
                    state_9_active = sendaction_2;
                    //#[ state Active.state_9.sendaction_2.(Entry) 
                    OUT_PORT(pThru)->GEN(evCarArrive);
                    //#]
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
                    NOTIFY_TRANSITION_STARTED("6");
                    popNullTransition();
                    NOTIFY_STATE_EXITED("ROOT.Active.state_9.sendaction_2");
                    NOTIFY_STATE_ENTERED("ROOT.Active.state_9.NoCarPresent");
                    state_9_subState = NoCarPresent;
                    state_9_active = NoCarPresent;
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

void TurnLane::state_10_entDef() {
    NOTIFY_STATE_ENTERED("ROOT.Active.state_10");
    NOTIFY_TRANSITION_STARTED("9");
    NOTIFY_STATE_ENTERED("ROOT.Active.state_10.WaitingToGo");
    state_10_subState = WaitingToGo;
    state_10_active = WaitingToGo;
    //#[ state Active.state_10.WaitingToGo.(Entry) 
    setColor(RED);
    //#]
    NOTIFY_TRANSITION_TERMINATED("9");
}

void TurnLane::state_10_exit() {
    switch (state_10_subState) {
        // State RedState
        case RedState:
        {
            cancel(state_10_timeout);
            NOTIFY_STATE_EXITED("ROOT.Active.state_10.RedState");
        }
        break;
        // State GreenState
        case GreenState:
        {
            cancel(state_10_timeout);
            NOTIFY_STATE_EXITED("ROOT.Active.state_10.GreenState");
        }
        break;
        // State YellowState
        case YellowState:
        {
            cancel(state_10_timeout);
            NOTIFY_STATE_EXITED("ROOT.Active.state_10.YellowState");
        }
        break;
        // State WaitingToGo
        case WaitingToGo:
        {
            NOTIFY_STATE_EXITED("ROOT.Active.state_10.WaitingToGo");
        }
        break;
        // State sendaction_7
        case sendaction_7:
        {
            popNullTransition();
            NOTIFY_STATE_EXITED("ROOT.Active.state_10.sendaction_7");
        }
        break;
        default:
            break;
    }
    state_10_subState = OMNonState;
    
    NOTIFY_STATE_EXITED("ROOT.Active.state_10");
}

IOxfReactive::TakeEventStatus TurnLane::state_10_processEvent() {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    switch (state_10_active) {
        // State RedState
        case RedState:
        {
            if(IS_EVENT_TYPE_OF(OMTimeoutEventId))
                {
                    if(getCurrentEvent() == state_10_timeout)
                        {
                            NOTIFY_TRANSITION_STARTED("0");
                            cancel(state_10_timeout);
                            NOTIFY_STATE_EXITED("ROOT.Active.state_10.RedState");
                            NOTIFY_STATE_ENTERED("ROOT.Active.state_10.GreenState");
                            state_10_subState = GreenState;
                            state_10_active = GreenState;
                            //#[ state Active.state_10.GreenState.(Entry) 
                            setColor(GREEN);
                            //#]
                            state_10_timeout = scheduleTimeout(GREEN_TIME, "ROOT.Active.state_10.GreenState");
                            NOTIFY_TRANSITION_TERMINATED("0");
                            res = eventConsumed;
                        }
                }
            
            
        }
        break;
        // State GreenState
        case GreenState:
        {
            if(IS_EVENT_TYPE_OF(OMTimeoutEventId))
                {
                    if(getCurrentEvent() == state_10_timeout)
                        {
                            NOTIFY_TRANSITION_STARTED("1");
                            cancel(state_10_timeout);
                            NOTIFY_STATE_EXITED("ROOT.Active.state_10.GreenState");
                            NOTIFY_STATE_ENTERED("ROOT.Active.state_10.YellowState");
                            state_10_subState = YellowState;
                            state_10_active = YellowState;
                            //#[ state Active.state_10.YellowState.(Entry) 
                            setColor(YELLOW);
                            //#]
                            state_10_timeout = scheduleTimeout(YELLOW_TIME, "ROOT.Active.state_10.YellowState");
                            NOTIFY_TRANSITION_TERMINATED("1");
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
                    if(getCurrentEvent() == state_10_timeout)
                        {
                            NOTIFY_TRANSITION_STARTED("2");
                            cancel(state_10_timeout);
                            NOTIFY_STATE_EXITED("ROOT.Active.state_10.YellowState");
                            NOTIFY_STATE_ENTERED("ROOT.Active.state_10.sendaction_7");
                            pushNullTransition();
                            state_10_subState = sendaction_7;
                            state_10_active = sendaction_7;
                            //#[ state Active.state_10.sendaction_7.(Entry) 
                            OUT_PORT(pThru)->GEN(evTurnDone);
                            //#]
                            NOTIFY_TRANSITION_TERMINATED("2");
                            res = eventConsumed;
                        }
                }
            
            
        }
        break;
        // State WaitingToGo
        case WaitingToGo:
        {
            if(IS_EVENT_TYPE_OF(evGoTurn_Default_id))
                {
                    NOTIFY_TRANSITION_STARTED("4");
                    NOTIFY_STATE_EXITED("ROOT.Active.state_10.WaitingToGo");
                    NOTIFY_STATE_ENTERED("ROOT.Active.state_10.RedState");
                    state_10_subState = RedState;
                    state_10_active = RedState;
                    state_10_timeout = scheduleTimeout(RED_TIME, "ROOT.Active.state_10.RedState");
                    NOTIFY_TRANSITION_TERMINATED("4");
                    res = eventConsumed;
                }
            
            
        }
        break;
        // State sendaction_7
        case sendaction_7:
        {
            if(IS_EVENT_TYPE_OF(OMNullEventId))
                {
                    NOTIFY_TRANSITION_STARTED("3");
                    popNullTransition();
                    NOTIFY_STATE_EXITED("ROOT.Active.state_10.sendaction_7");
                    NOTIFY_STATE_ENTERED("ROOT.Active.state_10.WaitingToGo");
                    state_10_subState = WaitingToGo;
                    state_10_active = WaitingToGo;
                    //#[ state Active.state_10.WaitingToGo.(Entry) 
                    setColor(RED);
                    //#]
                    NOTIFY_TRANSITION_TERMINATED("3");
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
void OMAnimatedTurnLane::serializeAttributes(AOMSAttributes* aomsAttributes) const {
    OMAnimatedTrafficLane::serializeAttributes(aomsAttributes);
}

void OMAnimatedTurnLane::serializeRelations(AOMSRelations* aomsRelations) const {
    OMAnimatedTrafficLane::serializeRelations(aomsRelations);
}

void OMAnimatedTurnLane::rootState_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT");
    switch (myReal->rootState_subState) {
        case TurnLane::WaitingToStart:
        {
            WaitingToStart_serializeStates(aomsState);
        }
        break;
        case TurnLane::Active:
        {
            Active_serializeStates(aomsState);
        }
        break;
        default:
            break;
    }
}

void OMAnimatedTurnLane::WaitingToStart_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.WaitingToStart");
}

void OMAnimatedTurnLane::Active_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.Active");
    state_9_serializeStates(aomsState);
    state_10_serializeStates(aomsState);
}

void OMAnimatedTurnLane::state_9_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.Active.state_9");
    switch (myReal->state_9_subState) {
        case TurnLane::NoCarPresent:
        {
            NoCarPresent_serializeStates(aomsState);
        }
        break;
        case TurnLane::sendaction_2:
        {
            sendaction_2_serializeStates(aomsState);
        }
        break;
        default:
            break;
    }
}

void OMAnimatedTurnLane::sendaction_2_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.Active.state_9.sendaction_2");
}

void OMAnimatedTurnLane::NoCarPresent_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.Active.state_9.NoCarPresent");
}

void OMAnimatedTurnLane::state_10_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.Active.state_10");
    switch (myReal->state_10_subState) {
        case TurnLane::RedState:
        {
            RedState_serializeStates(aomsState);
        }
        break;
        case TurnLane::GreenState:
        {
            GreenState_serializeStates(aomsState);
        }
        break;
        case TurnLane::YellowState:
        {
            YellowState_serializeStates(aomsState);
        }
        break;
        case TurnLane::WaitingToGo:
        {
            WaitingToGo_serializeStates(aomsState);
        }
        break;
        case TurnLane::sendaction_7:
        {
            sendaction_7_serializeStates(aomsState);
        }
        break;
        default:
            break;
    }
}

void OMAnimatedTurnLane::YellowState_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.Active.state_10.YellowState");
}

void OMAnimatedTurnLane::WaitingToGo_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.Active.state_10.WaitingToGo");
}

void OMAnimatedTurnLane::sendaction_7_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.Active.state_10.sendaction_7");
}

void OMAnimatedTurnLane::RedState_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.Active.state_10.RedState");
}

void OMAnimatedTurnLane::GreenState_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.Active.state_10.GreenState");
}
//#]

IMPLEMENT_REACTIVE_META_S_P(TurnLane, Default, false, TrafficLane, OMAnimatedTrafficLane, OMAnimatedTurnLane)

OMINIT_SUPERCLASS(TrafficLane, OMAnimatedTrafficLane)

OMREGISTER_REACTIVE_CLASS
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: TrafficLightMVP2/MVP2Config/TurnLane.cpp
*********************************************************************/
