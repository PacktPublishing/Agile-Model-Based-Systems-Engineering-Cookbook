/********************************************************************
	Rhapsody	: 9.0 
	Login		: Bruce
	Component	: TrafficLightMVP0 
	Configuration 	: MVP0Config
	Model Element	: TrafficLane
//!	Generated Date	: Tue, 8, Dec 2020  
	File Path	: TrafficLightMVP0/MVP0Config/TrafficLane.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX

#define _OMSTATECHART_ANIMATED
//#]

//## auto_generated
#include "TrafficLane.h"
//#[ ignore
#define MVP0Pkg_TrafficLane_TrafficLane_SERIALIZE OM_NO_OP

#define MVP0Pkg_TrafficLane_setColor_SERIALIZE aomsmethod->addAttribute("color", x2String((int)color));
//#]

//## package MVP0Pkg

//## class TrafficLane
TrafficLane::TrafficLane(IOxfActive* theActiveContext) {
    NOTIFY_REACTIVE_CONSTRUCTOR(TrafficLane, TrafficLane(), 0, MVP0Pkg_TrafficLane_TrafficLane_SERIALIZE);
    setActiveContext(theActiveContext, false);
    initStatechart();
}

TrafficLane::~TrafficLane() {
    NOTIFY_DESTRUCTOR(~TrafficLane, true);
    cancelTimeouts();
}

void TrafficLane::setColor(const COLOR_TYPE& color) {
    NOTIFY_OPERATION(setColor, setColor(const COLOR_TYPE&), 1, MVP0Pkg_TrafficLane_setColor_SERIALIZE);
    //#[ operation setColor(COLOR_TYPE)
    std::cout << whoAmI;
    if (color == RED) std::cout << "  RED";
    if (color == GREEN) std::cout << "  GREEN";
    if (color == YELLOW) std::cout << "  YELLOW";
    std::cout << std::endl;
    
    //#]
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
        NOTIFY_TRANSITION_STARTED("1");
        NOTIFY_STATE_ENTERED("ROOT.WaitingToStart");
        rootState_subState = WaitingToStart;
        rootState_active = WaitingToStart;
        NOTIFY_TRANSITION_TERMINATED("1");
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
                            NOTIFY_TRANSITION_STARTED("2");
                            cancel(rootState_timeout);
                            NOTIFY_STATE_EXITED("ROOT.RedState");
                            NOTIFY_STATE_ENTERED("ROOT.GreenState");
                            rootState_subState = GreenState;
                            rootState_active = GreenState;
                            //#[ state GreenState.(Entry) 
                            setColor(GREEN);
                            //#]
                            rootState_timeout = scheduleTimeout(GREEN_TIME, "ROOT.GreenState");
                            NOTIFY_TRANSITION_TERMINATED("2");
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
                            NOTIFY_TRANSITION_STARTED("3");
                            cancel(rootState_timeout);
                            NOTIFY_STATE_EXITED("ROOT.GreenState");
                            NOTIFY_STATE_ENTERED("ROOT.YellowState");
                            rootState_subState = YellowState;
                            rootState_active = YellowState;
                            //#[ state YellowState.(Entry) 
                            setColor(YELLOW);
                            //#]
                            rootState_timeout = scheduleTimeout(YELLOW_TIME, "ROOT.YellowState");
                            NOTIFY_TRANSITION_TERMINATED("3");
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
                            NOTIFY_TRANSITION_STARTED("4");
                            cancel(rootState_timeout);
                            NOTIFY_STATE_EXITED("ROOT.YellowState");
                            NOTIFY_STATE_ENTERED("ROOT.RedState");
                            rootState_subState = RedState;
                            rootState_active = RedState;
                            //#[ state RedState.(Entry) 
                            setColor(GREEN);
                            //#]
                            rootState_timeout = scheduleTimeout(RED_TIME, "ROOT.RedState");
                            NOTIFY_TRANSITION_TERMINATED("4");
                            res = eventConsumed;
                        }
                }
            
        }
        break;
        // State WaitingToStart
        case WaitingToStart:
        {
            if(IS_EVENT_TYPE_OF(evGo_MVP0Pkg_id))
                {
                    OMSETPARAMS(evGo);
                    NOTIFY_TRANSITION_STARTED("0");
                    NOTIFY_STATE_EXITED("ROOT.WaitingToStart");
                    //#[ transition 0 
                    
                    whoAmI = params->name;
                    //#]
                    NOTIFY_STATE_ENTERED("ROOT.RedState");
                    rootState_subState = RedState;
                    rootState_active = RedState;
                    //#[ state RedState.(Entry) 
                    setColor(GREEN);
                    //#]
                    rootState_timeout = scheduleTimeout(RED_TIME, "ROOT.RedState");
                    NOTIFY_TRANSITION_TERMINATED("0");
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

void OMAnimatedTrafficLane::RedState_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.RedState");
}

void OMAnimatedTrafficLane::GreenState_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.GreenState");
}
//#]

IMPLEMENT_REACTIVE_META_P(TrafficLane, MVP0Pkg, MVP0Pkg, false, OMAnimatedTrafficLane)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: TrafficLightMVP0/MVP0Config/TrafficLane.cpp
*********************************************************************/
