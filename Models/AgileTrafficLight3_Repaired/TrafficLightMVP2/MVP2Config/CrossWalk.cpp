/********************************************************************
	Rhapsody	: 9.0 
	Login		: Bruce
	Component	: TrafficLightMVP2 
	Configuration 	: MVP2Config
	Model Element	: CrossWalk
//!	Generated Date	: Tue, 8, Dec 2020  
	File Path	: TrafficLightMVP2/MVP2Config/CrossWalk.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX

#define _OMSTATECHART_ANIMATED
//#]

//## auto_generated
#include "CrossWalk.h"
//#[ ignore
#define Default_CrossWalk_CrossWalk_SERIALIZE OM_NO_OP

#define Default_CrossWalk_setColor_SERIALIZE aomsmethod->addAttribute("w", x2String((int)w));
//#]

//## package Default

//## class CrossWalk
//#[ ignore
CrossWalk::pThru_C::InBound_C::InBound_C() {
    itsEvWalk_ProxyReceptionInterface = NULL;
    port = NULL;
}

CrossWalk::pThru_C::InBound_C::~InBound_C() {
    cleanUpRelations();
}

bool CrossWalk::pThru_C::InBound_C::send(IOxfEvent* event, const IOxfEventGenerationParams& params) {
    bool res = false;
    if (event != NULL) {
        event->setPort(getPort());
        if (itsEvWalk_ProxyReceptionInterface != NULL) {
            if (event->isTypeOf(evWalk_Default_id)) {
                res = itsEvWalk_ProxyReceptionInterface->send(event, params);
            }
        }
    }
    return res;
    
}

bool CrossWalk::pThru_C::InBound_C::send(IOxfEvent* event) {
    bool res = false;
    if (event != NULL) {
        event->setPort(getPort());
        if (itsEvWalk_ProxyReceptionInterface != NULL) {
            if (event->isTypeOf(evWalk_Default_id)) {
                res = itsEvWalk_ProxyReceptionInterface->send(event);
            }
        }
    }
    return res;
    
}

void CrossWalk::pThru_C::InBound_C::setItsEvWalk_ProxyReceptionInterface(evWalk_ProxyReceptionInterface* p_evWalk_ProxyReceptionInterface) {
    itsEvWalk_ProxyReceptionInterface = p_evWalk_ProxyReceptionInterface;
}

CrossWalk::pThru_C* CrossWalk::pThru_C::InBound_C::getPort() const {
    return port;
}

void CrossWalk::pThru_C::InBound_C::setPort(CrossWalk::pThru_C* p_pThru_C) {
    _setPort(p_pThru_C);
}

void CrossWalk::pThru_C::InBound_C::cleanUpRelations() {
    if(itsEvWalk_ProxyReceptionInterface != NULL)
        {
            itsEvWalk_ProxyReceptionInterface = NULL;
        }
    if(port != NULL)
        {
            port = NULL;
        }
}

void CrossWalk::pThru_C::InBound_C::__setPort(CrossWalk::pThru_C* p_pThru_C) {
    port = p_pThru_C;
}

void CrossWalk::pThru_C::InBound_C::_setPort(CrossWalk::pThru_C* p_pThru_C) {
    __setPort(p_pThru_C);
}

void CrossWalk::pThru_C::InBound_C::_clearPort() {
    port = NULL;
}

CrossWalk::pThru_C::OutBound_C::OutBound_C() {
    itsEvPedestrianArrive_ProxyReceptionInterface = NULL;
    itsEvWalkComplete_ProxyReceptionInterface = NULL;
}

CrossWalk::pThru_C::OutBound_C::~OutBound_C() {
    cleanUpRelations();
}

bool CrossWalk::pThru_C::OutBound_C::send(IOxfEvent* event, const IOxfEventGenerationParams& params) {
    bool res = false;
    if (event != NULL) {
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

bool CrossWalk::pThru_C::OutBound_C::send(IOxfEvent* event) {
    bool res = false;
    if (event != NULL) {
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

void CrossWalk::pThru_C::OutBound_C::setItsEvPedestrianArrive_ProxyReceptionInterface(OMReactive* p_OMReactive) {
    itsEvPedestrianArrive_ProxyReceptionInterface = p_OMReactive;
}

void CrossWalk::pThru_C::OutBound_C::setItsEvWalkComplete_ProxyReceptionInterface(OMReactive* p_OMReactive) {
    itsEvWalkComplete_ProxyReceptionInterface = p_OMReactive;
}

void CrossWalk::pThru_C::OutBound_C::cleanUpRelations() {
    if(itsEvPedestrianArrive_ProxyReceptionInterface != NULL)
        {
            itsEvPedestrianArrive_ProxyReceptionInterface = NULL;
        }
    if(itsEvWalkComplete_ProxyReceptionInterface != NULL)
        {
            itsEvWalkComplete_ProxyReceptionInterface = NULL;
        }
}

CrossWalk::pThru_C::pThru_C() : _p_(0) {
    initRelations();
}

CrossWalk::pThru_C::~pThru_C() {
}

void CrossWalk::pThru_C::connectCrossWalk(CrossWalk* part) {
    InBound.setItsEvWalk_ProxyReceptionInterface(part);
    InBound.setPort(this); // for IS_PORT macro support
    
}

evPedestrianArrive_ProxyReceptionInterface* CrossWalk::pThru_C::getItsEvPedestrianArrive_ProxyReceptionInterface() {
    return &OutBound;
}

evWalkComplete_ProxyReceptionInterface* CrossWalk::pThru_C::getItsEvWalkComplete_ProxyReceptionInterface() {
    return &OutBound;
}

evWalk_ProxyReceptionInterface* CrossWalk::pThru_C::getItsEvWalk_ProxyReceptionInterface() {
    return &InBound;
}

void CrossWalk::pThru_C::setItsEvPedestrianArrive_ProxyReceptionInterface(OMReactive* p_evPedestrianArrive_ProxyReceptionInterface) {
    OutBound.setItsEvPedestrianArrive_ProxyReceptionInterface(p_evPedestrianArrive_ProxyReceptionInterface);
}

void CrossWalk::pThru_C::setItsEvWalkComplete_ProxyReceptionInterface(OMReactive* p_evWalkComplete_ProxyReceptionInterface) {
    OutBound.setItsEvWalkComplete_ProxyReceptionInterface(p_evWalkComplete_ProxyReceptionInterface);
}

void CrossWalk::pThru_C::setItsEvWalk_ProxyReceptionInterface(evWalk_ProxyReceptionInterface* p_evWalk_ProxyReceptionInterface) {
    InBound.setItsEvWalk_ProxyReceptionInterface(p_evWalk_ProxyReceptionInterface);
}

CrossWalk::pThru_C::InBound_C* CrossWalk::pThru_C::getInBound() const {
    return (CrossWalk::pThru_C::InBound_C*) &InBound;
}

CrossWalk::pThru_C::OutBound_C* CrossWalk::pThru_C::getOutBound() const {
    return (CrossWalk::pThru_C::OutBound_C*) &OutBound;
}

void CrossWalk::pThru_C::initRelations() {
    InBound._setPort(this);
}

void CrossWalk::pThru_C::destroy() {
}
//#]

CrossWalk::CrossWalk(IOxfActive* theActiveContext) {
    NOTIFY_REACTIVE_CONSTRUCTOR(CrossWalk, CrossWalk(), 0, Default_CrossWalk_CrossWalk_SERIALIZE);
    setActiveContext(theActiveContext, false);
    initRelations();
    initStatechart();
}

CrossWalk::~CrossWalk() {
    NOTIFY_DESTRUCTOR(~CrossWalk, false);
    cancelTimeouts();
}

void CrossWalk::setColor(const WALK_TYPE& w) {
    NOTIFY_OPERATION(setColor, setColor(const WALK_TYPE&), 1, Default_CrossWalk_setColor_SERIALIZE);
    //#[ operation setColor(WALK_TYPE)
    std::cout << whoAmI;
    if (w == DONT_WALK) std::cout << " Don't Walk";
    if (w == WALK) std::cout << " Walk";
    if (w == RUN) std::cout << "  Run, Forrest, Run";
    std::cout << std::endl;
    //#]
}

CrossWalk::pThru_C* CrossWalk::getPThru() const {
    return (CrossWalk::pThru_C*) &pThru;
}

CrossWalk::pThru_C* CrossWalk::get_pThru() const {
    return (CrossWalk::pThru_C*) &pThru;
}

bool CrossWalk::startBehavior() {
    bool done = false;
    done = OMReactive::startBehavior();
    return done;
}

void CrossWalk::initRelations() {
    if (get_pThru() != NULL) {
        get_pThru()->connectCrossWalk(this);
    }
}

void CrossWalk::initStatechart() {
    rootState_subState = OMNonState;
    rootState_active = OMNonState;
    state_9_subState = OMNonState;
    state_9_active = OMNonState;
    state_9_timeout = NULL;
    state_8_subState = OMNonState;
    state_8_active = OMNonState;
}

void CrossWalk::cancelTimeouts() {
    cancel(state_9_timeout);
}

bool CrossWalk::cancelTimeout(const IOxfTimeout* arg) {
    bool res = false;
    if(state_9_timeout == arg)
        {
            state_9_timeout = NULL;
            res = true;
        }
    return res;
}

void CrossWalk::rootState_entDef() {
    {
        NOTIFY_STATE_ENTERED("ROOT");
        NOTIFY_TRANSITION_STARTED("8");
        NOTIFY_STATE_ENTERED("ROOT.WaitingToStart");
        rootState_subState = WaitingToStart;
        rootState_active = WaitingToStart;
        NOTIFY_TRANSITION_TERMINATED("8");
    }
}

IOxfReactive::TakeEventStatus CrossWalk::rootState_processEvent() {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    switch (rootState_active) {
        // State WaitingToStart
        case WaitingToStart:
        {
            if(IS_EVENT_TYPE_OF(evGo_Default_id))
                {
                    OMSETPARAMS(evGo);
                    NOTIFY_TRANSITION_STARTED("9");
                    NOTIFY_STATE_EXITED("ROOT.WaitingToStart");
                    //#[ transition 9 
                    
                    whoAmI = params->name;
                    //#]
                    Active_entDef();
                    NOTIFY_TRANSITION_TERMINATED("9");
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

void CrossWalk::Active_entDef() {
    NOTIFY_STATE_ENTERED("ROOT.Active");
    rootState_subState = Active;
    rootState_active = Active;
    state_8_entDef();
    state_9_entDef();
}

void CrossWalk::Active_exit() {
    switch (state_8_subState) {
        // State WaitingForPedestrian
        case WaitingForPedestrian:
        {
            NOTIFY_STATE_EXITED("ROOT.Active.state_8.WaitingForPedestrian");
        }
        break;
        // State sendaction_6
        case sendaction_6:
        {
            popNullTransition();
            NOTIFY_STATE_EXITED("ROOT.Active.state_8.sendaction_6");
        }
        break;
        default:
            break;
    }
    state_8_subState = OMNonState;
    NOTIFY_STATE_EXITED("ROOT.Active.state_8");
    state_9_exit();
    
    NOTIFY_STATE_EXITED("ROOT.Active");
}

IOxfReactive::TakeEventStatus CrossWalk::Active_processEvent() {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    // State state_8
    if(state_8_processEvent() != eventNotConsumed)
        {
            res = eventConsumed;
            if(!IS_IN(Active))
                {
                    return res;
                }
        }
    // State state_9
    if(state_9_processEvent() != eventNotConsumed)
        {
            res = eventConsumed;
            if(!IS_IN(Active))
                {
                    return res;
                }
        }
    
    return res;
}

void CrossWalk::state_9_entDef() {
    NOTIFY_STATE_ENTERED("ROOT.Active.state_9");
    NOTIFY_TRANSITION_STARTED("7");
    NOTIFY_STATE_ENTERED("ROOT.Active.state_9.DontWalkState");
    state_9_subState = DontWalkState;
    state_9_active = DontWalkState;
    //#[ state Active.state_9.DontWalkState.(Entry) 
    setColor(DONT_WALK);
    //#]
    NOTIFY_TRANSITION_TERMINATED("7");
}

void CrossWalk::state_9_exit() {
    switch (state_9_subState) {
        // State DontWalkState
        case DontWalkState:
        {
            NOTIFY_STATE_EXITED("ROOT.Active.state_9.DontWalkState");
        }
        break;
        // State WalkState
        case WalkState:
        {
            cancel(state_9_timeout);
            NOTIFY_STATE_EXITED("ROOT.Active.state_9.WalkState");
        }
        break;
        // State RunState
        case RunState:
        {
            cancel(state_9_timeout);
            NOTIFY_STATE_EXITED("ROOT.Active.state_9.RunState");
        }
        break;
        // State sendaction_4
        case sendaction_4:
        {
            popNullTransition();
            NOTIFY_STATE_EXITED("ROOT.Active.state_9.sendaction_4");
        }
        break;
        default:
            break;
    }
    state_9_subState = OMNonState;
    
    NOTIFY_STATE_EXITED("ROOT.Active.state_9");
}

IOxfReactive::TakeEventStatus CrossWalk::state_9_processEvent() {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    switch (state_9_active) {
        // State DontWalkState
        case DontWalkState:
        {
            if(IS_EVENT_TYPE_OF(evWalk_Default_id))
                {
                    NOTIFY_TRANSITION_STARTED("0");
                    NOTIFY_STATE_EXITED("ROOT.Active.state_9.DontWalkState");
                    NOTIFY_STATE_ENTERED("ROOT.Active.state_9.WalkState");
                    state_9_subState = WalkState;
                    state_9_active = WalkState;
                    //#[ state Active.state_9.WalkState.(Entry) 
                    setColor(WALK);
                    //#]
                    state_9_timeout = scheduleTimeout(WALK_TIME, "ROOT.Active.state_9.WalkState");
                    NOTIFY_TRANSITION_TERMINATED("0");
                    res = eventConsumed;
                }
            
            
        }
        break;
        // State WalkState
        case WalkState:
        {
            if(IS_EVENT_TYPE_OF(OMTimeoutEventId))
                {
                    if(getCurrentEvent() == state_9_timeout)
                        {
                            NOTIFY_TRANSITION_STARTED("1");
                            cancel(state_9_timeout);
                            NOTIFY_STATE_EXITED("ROOT.Active.state_9.WalkState");
                            NOTIFY_STATE_ENTERED("ROOT.Active.state_9.RunState");
                            state_9_subState = RunState;
                            state_9_active = RunState;
                            //#[ state Active.state_9.RunState.(Entry) 
                            setColor(RUN);
                            //#]
                            state_9_timeout = scheduleTimeout(RUN_TIME, "ROOT.Active.state_9.RunState");
                            NOTIFY_TRANSITION_TERMINATED("1");
                            res = eventConsumed;
                        }
                }
            
            
        }
        break;
        // State RunState
        case RunState:
        {
            if(IS_EVENT_TYPE_OF(OMTimeoutEventId))
                {
                    if(getCurrentEvent() == state_9_timeout)
                        {
                            NOTIFY_TRANSITION_STARTED("2");
                            cancel(state_9_timeout);
                            NOTIFY_STATE_EXITED("ROOT.Active.state_9.RunState");
                            NOTIFY_STATE_ENTERED("ROOT.Active.state_9.sendaction_4");
                            pushNullTransition();
                            state_9_subState = sendaction_4;
                            state_9_active = sendaction_4;
                            //#[ state Active.state_9.sendaction_4.(Entry) 
                            OUT_PORT(pThru)->GEN(evWalkComplete);
                            //#]
                            NOTIFY_TRANSITION_TERMINATED("2");
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
                    NOTIFY_TRANSITION_STARTED("3");
                    popNullTransition();
                    NOTIFY_STATE_EXITED("ROOT.Active.state_9.sendaction_4");
                    NOTIFY_STATE_ENTERED("ROOT.Active.state_9.DontWalkState");
                    state_9_subState = DontWalkState;
                    state_9_active = DontWalkState;
                    //#[ state Active.state_9.DontWalkState.(Entry) 
                    setColor(DONT_WALK);
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

void CrossWalk::state_8_entDef() {
    NOTIFY_STATE_ENTERED("ROOT.Active.state_8");
    NOTIFY_TRANSITION_STARTED("6");
    NOTIFY_STATE_ENTERED("ROOT.Active.state_8.WaitingForPedestrian");
    state_8_subState = WaitingForPedestrian;
    state_8_active = WaitingForPedestrian;
    NOTIFY_TRANSITION_TERMINATED("6");
}

IOxfReactive::TakeEventStatus CrossWalk::state_8_processEvent() {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    switch (state_8_active) {
        // State WaitingForPedestrian
        case WaitingForPedestrian:
        {
            if(IS_EVENT_TYPE_OF(exPedestrianArrive_Default_id))
                {
                    NOTIFY_TRANSITION_STARTED("4");
                    NOTIFY_STATE_EXITED("ROOT.Active.state_8.WaitingForPedestrian");
                    NOTIFY_STATE_ENTERED("ROOT.Active.state_8.sendaction_6");
                    pushNullTransition();
                    state_8_subState = sendaction_6;
                    state_8_active = sendaction_6;
                    //#[ state Active.state_8.sendaction_6.(Entry) 
                    OUT_PORT(pThru)->GEN(evPedestrianArrive);
                    //#]
                    NOTIFY_TRANSITION_TERMINATED("4");
                    res = eventConsumed;
                }
            
            
        }
        break;
        // State sendaction_6
        case sendaction_6:
        {
            if(IS_EVENT_TYPE_OF(OMNullEventId))
                {
                    NOTIFY_TRANSITION_STARTED("5");
                    popNullTransition();
                    NOTIFY_STATE_EXITED("ROOT.Active.state_8.sendaction_6");
                    NOTIFY_STATE_ENTERED("ROOT.Active.state_8.WaitingForPedestrian");
                    state_8_subState = WaitingForPedestrian;
                    state_8_active = WaitingForPedestrian;
                    NOTIFY_TRANSITION_TERMINATED("5");
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
void OMAnimatedCrossWalk::serializeAttributes(AOMSAttributes* aomsAttributes) const {
    OMAnimatedTrafficLane::serializeAttributes(aomsAttributes);
}

void OMAnimatedCrossWalk::serializeRelations(AOMSRelations* aomsRelations) const {
    OMAnimatedTrafficLane::serializeRelations(aomsRelations);
}

void OMAnimatedCrossWalk::rootState_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT");
    switch (myReal->rootState_subState) {
        case CrossWalk::WaitingToStart:
        {
            WaitingToStart_serializeStates(aomsState);
        }
        break;
        case CrossWalk::Active:
        {
            Active_serializeStates(aomsState);
        }
        break;
        default:
            break;
    }
}

void OMAnimatedCrossWalk::WaitingToStart_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.WaitingToStart");
}

void OMAnimatedCrossWalk::Active_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.Active");
    state_8_serializeStates(aomsState);
    state_9_serializeStates(aomsState);
}

void OMAnimatedCrossWalk::state_9_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.Active.state_9");
    switch (myReal->state_9_subState) {
        case CrossWalk::DontWalkState:
        {
            DontWalkState_serializeStates(aomsState);
        }
        break;
        case CrossWalk::WalkState:
        {
            WalkState_serializeStates(aomsState);
        }
        break;
        case CrossWalk::RunState:
        {
            RunState_serializeStates(aomsState);
        }
        break;
        case CrossWalk::sendaction_4:
        {
            sendaction_4_serializeStates(aomsState);
        }
        break;
        default:
            break;
    }
}

void OMAnimatedCrossWalk::WalkState_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.Active.state_9.WalkState");
}

void OMAnimatedCrossWalk::sendaction_4_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.Active.state_9.sendaction_4");
}

void OMAnimatedCrossWalk::RunState_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.Active.state_9.RunState");
}

void OMAnimatedCrossWalk::DontWalkState_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.Active.state_9.DontWalkState");
}

void OMAnimatedCrossWalk::state_8_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.Active.state_8");
    switch (myReal->state_8_subState) {
        case CrossWalk::WaitingForPedestrian:
        {
            WaitingForPedestrian_serializeStates(aomsState);
        }
        break;
        case CrossWalk::sendaction_6:
        {
            sendaction_6_serializeStates(aomsState);
        }
        break;
        default:
            break;
    }
}

void OMAnimatedCrossWalk::WaitingForPedestrian_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.Active.state_8.WaitingForPedestrian");
}

void OMAnimatedCrossWalk::sendaction_6_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.Active.state_8.sendaction_6");
}
//#]

IMPLEMENT_REACTIVE_META_S_P(CrossWalk, Default, false, TrafficLane, OMAnimatedTrafficLane, OMAnimatedCrossWalk)

OMINIT_SUPERCLASS(TrafficLane, OMAnimatedTrafficLane)

OMREGISTER_REACTIVE_CLASS
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: TrafficLightMVP2/MVP2Config/CrossWalk.cpp
*********************************************************************/
