/********************************************************************
	Rhapsody	: 9.0 
	Login		: Bruce
	Component	: TrafficLightMVP1 
	Configuration 	: MVP1Config
	Model Element	: TrafficLane
//!	Generated Date	: Tue, 8, Dec 2020  
	File Path	: TrafficLightMVP1/MVP1Config/TrafficLane.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX

#define _OMSTATECHART_ANIMATED
//#]

//## auto_generated
#include "TrafficLane.h"
//#[ ignore
#define Default_TrafficLane_TrafficLane_SERIALIZE OM_NO_OP

#define Default_TrafficLane_setColor_SERIALIZE aomsmethod->addAttribute("color", x2String((int)color));
//#]

//## package Default

//## class TrafficLane
//#[ ignore
TrafficLane::pOutThru_C::pOutThru_C() : _p_(0) {
    itsEvLaneDone_ProxyReceptionInterface = NULL;
}

TrafficLane::pOutThru_C::~pOutThru_C() {
    cleanUpRelations();
}

evLaneDone_ProxyReceptionInterface* TrafficLane::pOutThru_C::getItsEvLaneDone_ProxyReceptionInterface() {
    return this;
}

evLaneDone_ProxyReceptionInterface* TrafficLane::pOutThru_C::getOutBound() {
    return this;
}

bool TrafficLane::pOutThru_C::send(IOxfEvent* event, const IOxfEventGenerationParams& params) {
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

bool TrafficLane::pOutThru_C::send(IOxfEvent* event) {
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

void TrafficLane::pOutThru_C::setItsEvLaneDone_ProxyReceptionInterface(OMReactive* p_OMReactive) {
    itsEvLaneDone_ProxyReceptionInterface = p_OMReactive;
}

void TrafficLane::pOutThru_C::cleanUpRelations() {
    if(itsEvLaneDone_ProxyReceptionInterface != NULL)
        {
            itsEvLaneDone_ProxyReceptionInterface = NULL;
        }
}

TrafficLane::pInThru_C::pInThru_C() : _p_(0) {
    itsEvLaneDone_ProxyReceptionInterface = NULL;
}

TrafficLane::pInThru_C::~pInThru_C() {
    cleanUpRelations();
}

void TrafficLane::pInThru_C::connectTrafficLane(TrafficLane* part) {
    setItsEvLaneDone_ProxyReceptionInterface(part);
    
}

evLaneDone_ProxyReceptionInterface* TrafficLane::pInThru_C::getItsEvLaneDone_ProxyReceptionInterface() {
    return this;
}

bool TrafficLane::pInThru_C::send(IOxfEvent* event, const IOxfEventGenerationParams& params) {
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

bool TrafficLane::pInThru_C::send(IOxfEvent* event) {
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

void TrafficLane::pInThru_C::setItsEvLaneDone_ProxyReceptionInterface(evLaneDone_ProxyReceptionInterface* p_evLaneDone_ProxyReceptionInterface) {
    itsEvLaneDone_ProxyReceptionInterface = p_evLaneDone_ProxyReceptionInterface;
}

void TrafficLane::pInThru_C::cleanUpRelations() {
    if(itsEvLaneDone_ProxyReceptionInterface != NULL)
        {
            itsEvLaneDone_ProxyReceptionInterface = NULL;
        }
}
//#]

TrafficLane::TrafficLane(IOxfActive* theActiveContext) {
    NOTIFY_REACTIVE_CONSTRUCTOR(TrafficLane, TrafficLane(), 0, Default_TrafficLane_TrafficLane_SERIALIZE);
    setActiveContext(theActiveContext, false);
    initRelations();
    initStatechart();
}

TrafficLane::~TrafficLane() {
    NOTIFY_DESTRUCTOR(~TrafficLane, true);
    cancelTimeouts();
}

void TrafficLane::setColor(const COLOR_TYPE& color) {
    NOTIFY_OPERATION(setColor, setColor(const COLOR_TYPE&), 1, Default_TrafficLane_setColor_SERIALIZE);
    //#[ operation setColor(COLOR_TYPE)
    std::cout << whoAmI;
    if (color == RED) std::cout << "  RED";
    if (color == GREEN) std::cout << "  GREEN";
    if (color == YELLOW) std::cout << "  YELLOW";
    std::cout << std::endl;
    
    //#]
}

TrafficLane::pOutThru_C* TrafficLane::getPOutThru() const {
    return (TrafficLane::pOutThru_C*) &pOutThru;
}

TrafficLane::pOutThru_C* TrafficLane::get_pOutThru() const {
    return (TrafficLane::pOutThru_C*) &pOutThru;
}

TrafficLane::pInThru_C* TrafficLane::getPInThru() const {
    return (TrafficLane::pInThru_C*) &pInThru;
}

TrafficLane::pInThru_C* TrafficLane::get_pInThru() const {
    return (TrafficLane::pInThru_C*) &pInThru;
}

RhpString TrafficLane::getWhoAmI() const {
    return whoAmI;
}

void TrafficLane::setWhoAmI(RhpString p_whoAmI) {
    whoAmI = p_whoAmI;
}

bool TrafficLane::startBehavior() {
    bool done = false;
    done = OMReactive::startBehavior();
    return done;
}

void TrafficLane::initRelations() {
    if (get_pInThru() != NULL) {
        get_pInThru()->connectTrafficLane(this);
    }
}

void TrafficLane::initStatechart() {
    rootState_subState = OMNonState;
    rootState_active = OMNonState;
    rootState_timeout = NULL;
}

void TrafficLane::cancelTimeouts() {
    cancel(rootState_timeout);
}

bool TrafficLane::cancelTimeout(const IOxfTimeout* arg) {
    bool res = false;
    if(rootState_timeout == arg)
        {
            rootState_timeout = NULL;
            res = true;
        }
    return res;
}

void TrafficLane::rootState_entDef() {
    {
        NOTIFY_STATE_ENTERED("ROOT");
        NOTIFY_TRANSITION_STARTED("3");
        NOTIFY_STATE_ENTERED("ROOT.WaitingToStart");
        rootState_subState = WaitingToStart;
        rootState_active = WaitingToStart;
        NOTIFY_TRANSITION_TERMINATED("3");
    }
}

IOxfReactive::TakeEventStatus TrafficLane::rootState_processEvent() {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    switch (rootState_active) {
        // State RedState
        case RedState:
        {
            if(IS_EVENT_TYPE_OF(OMTimeoutEventId))
                {
                    if(getCurrentEvent() == rootState_timeout)
                        {
                            NOTIFY_TRANSITION_STARTED("4");
                            cancel(rootState_timeout);
                            NOTIFY_STATE_EXITED("ROOT.RedState");
                            NOTIFY_STATE_ENTERED("ROOT.GreenState");
                            rootState_subState = GreenState;
                            rootState_active = GreenState;
                            //#[ state GreenState.(Entry) 
                            setColor(GREEN);
                            //#]
                            rootState_timeout = scheduleTimeout(GREEN_TIME, "ROOT.GreenState");
                            NOTIFY_TRANSITION_TERMINATED("4");
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
                    if(getCurrentEvent() == rootState_timeout)
                        {
                            NOTIFY_TRANSITION_STARTED("5");
                            cancel(rootState_timeout);
                            NOTIFY_STATE_EXITED("ROOT.GreenState");
                            NOTIFY_STATE_ENTERED("ROOT.YellowState");
                            rootState_subState = YellowState;
                            rootState_active = YellowState;
                            //#[ state YellowState.(Entry) 
                            setColor(YELLOW);
                            //#]
                            rootState_timeout = scheduleTimeout(YELLOW_TIME, "ROOT.YellowState");
                            NOTIFY_TRANSITION_TERMINATED("5");
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
                    if(getCurrentEvent() == rootState_timeout)
                        {
                            NOTIFY_TRANSITION_STARTED("6");
                            cancel(rootState_timeout);
                            NOTIFY_STATE_EXITED("ROOT.YellowState");
                            NOTIFY_STATE_ENTERED("ROOT.sendaction_5");
                            pushNullTransition();
                            rootState_subState = sendaction_5;
                            rootState_active = sendaction_5;
                            //#[ state sendaction_5.(Entry) 
                            OUT_PORT(pOutThru)->GEN(evLaneDone);
                            //#]
                            NOTIFY_TRANSITION_TERMINATED("6");
                            res = eventConsumed;
                        }
                }
            
        }
        break;
        // State WaitingToStart
        case WaitingToStart:
        {
            if(IS_EVENT_TYPE_OF(evGo_Default_id))
                {
                    OMSETPARAMS(evGo);
                    //## transition 1 
                    if(params->first)
                        {
                            NOTIFY_TRANSITION_STARTED("0");
                            NOTIFY_TRANSITION_STARTED("1");
                            NOTIFY_STATE_EXITED("ROOT.WaitingToStart");
                            //#[ transition 0 
                            
                            whoAmI = params->name;
                            //#]
                            //#[ transition 1 
                            
                            setColor(RED);
                            //#]
                            NOTIFY_STATE_ENTERED("ROOT.RedState");
                            rootState_subState = RedState;
                            rootState_active = RedState;
                            rootState_timeout = scheduleTimeout(RED_TIME, "ROOT.RedState");
                            NOTIFY_TRANSITION_TERMINATED("1");
                            NOTIFY_TRANSITION_TERMINATED("0");
                            res = eventConsumed;
                        }
                    else
                        {
                            NOTIFY_TRANSITION_STARTED("0");
                            NOTIFY_TRANSITION_STARTED("2");
                            NOTIFY_STATE_EXITED("ROOT.WaitingToStart");
                            //#[ transition 0 
                            
                            whoAmI = params->name;
                            //#]
                            NOTIFY_STATE_ENTERED("ROOT.WaitForOtherLaneCompletion");
                            rootState_subState = WaitForOtherLaneCompletion;
                            rootState_active = WaitForOtherLaneCompletion;
                            //#[ state WaitForOtherLaneCompletion.(Entry) 
                            setColor(RED);
                            //#]
                            NOTIFY_TRANSITION_TERMINATED("2");
                            NOTIFY_TRANSITION_TERMINATED("0");
                            res = eventConsumed;
                        }
                }
            
        }
        break;
        // State WaitForOtherLaneCompletion
        case WaitForOtherLaneCompletion:
        {
            if(IS_EVENT_TYPE_OF(evLaneDone_Default_id))
                {
                    NOTIFY_TRANSITION_STARTED("8");
                    NOTIFY_STATE_EXITED("ROOT.WaitForOtherLaneCompletion");
                    NOTIFY_STATE_ENTERED("ROOT.RedState");
                    rootState_subState = RedState;
                    rootState_active = RedState;
                    rootState_timeout = scheduleTimeout(RED_TIME, "ROOT.RedState");
                    NOTIFY_TRANSITION_TERMINATED("8");
                    res = eventConsumed;
                }
            
        }
        break;
        // State sendaction_5
        case sendaction_5:
        {
            if(IS_EVENT_TYPE_OF(OMNullEventId))
                {
                    NOTIFY_TRANSITION_STARTED("7");
                    popNullTransition();
                    NOTIFY_STATE_EXITED("ROOT.sendaction_5");
                    NOTIFY_STATE_ENTERED("ROOT.WaitForOtherLaneCompletion");
                    rootState_subState = WaitForOtherLaneCompletion;
                    rootState_active = WaitForOtherLaneCompletion;
                    //#[ state WaitForOtherLaneCompletion.(Entry) 
                    setColor(RED);
                    //#]
                    NOTIFY_TRANSITION_TERMINATED("7");
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
void OMAnimatedTrafficLane::serializeAttributes(AOMSAttributes* aomsAttributes) const {
    aomsAttributes->addAttribute("whoAmI", x2String(myReal->whoAmI));
}

void OMAnimatedTrafficLane::serializeRelations(AOMSRelations* aomsRelations) const {
}

void OMAnimatedTrafficLane::rootState_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT");
    switch (myReal->rootState_subState) {
        case TrafficLane::RedState:
        {
            RedState_serializeStates(aomsState);
        }
        break;
        case TrafficLane::GreenState:
        {
            GreenState_serializeStates(aomsState);
        }
        break;
        case TrafficLane::YellowState:
        {
            YellowState_serializeStates(aomsState);
        }
        break;
        case TrafficLane::WaitingToStart:
        {
            WaitingToStart_serializeStates(aomsState);
        }
        break;
        case TrafficLane::WaitForOtherLaneCompletion:
        {
            WaitForOtherLaneCompletion_serializeStates(aomsState);
        }
        break;
        case TrafficLane::sendaction_5:
        {
            sendaction_5_serializeStates(aomsState);
        }
        break;
        default:
            break;
    }
}

void OMAnimatedTrafficLane::YellowState_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.YellowState");
}

void OMAnimatedTrafficLane::WaitingToStart_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.WaitingToStart");
}

void OMAnimatedTrafficLane::WaitForOtherLaneCompletion_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.WaitForOtherLaneCompletion");
}

void OMAnimatedTrafficLane::sendaction_5_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.sendaction_5");
}

void OMAnimatedTrafficLane::RedState_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.RedState");
}

void OMAnimatedTrafficLane::GreenState_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.GreenState");
}
//#]

IMPLEMENT_REACTIVE_META_P(TrafficLane, Default, Default, false, OMAnimatedTrafficLane)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: TrafficLightMVP1/MVP1Config/TrafficLane.cpp
*********************************************************************/
