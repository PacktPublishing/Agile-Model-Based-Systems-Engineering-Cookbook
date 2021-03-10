/********************************************************************
	Rhapsody	: 9.0 
	Login		: Bruce
	Component	: TrafficLightMVP0 
	Configuration 	: MVP0Config
	Model Element	: TrafficLightSystem
//!	Generated Date	: Tue, 8, Dec 2020  
	File Path	: TrafficLightMVP0/MVP0Config/TrafficLightSystem.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX

#define _OMSTATECHART_ANIMATED
//#]

//## auto_generated
#include "TrafficLightSystem.h"
//#[ ignore
#define MVP0Pkg_TrafficLightSystem_TrafficLightSystem_SERIALIZE OM_NO_OP
//#]

//## package MVP0Pkg

//## class TrafficLightSystem
TrafficLightSystem::TrafficLightSystem(IOxfActive* theActiveContext) {
    NOTIFY_REACTIVE_CONSTRUCTOR(TrafficLightSystem, TrafficLightSystem(), 0, MVP0Pkg_TrafficLightSystem_TrafficLightSystem_SERIALIZE);
    setActiveContext(theActiveContext, false);
    {
        {
            itsTrafficLane.setShouldDelete(false);
        }
    }
    initStatechart();
}

TrafficLightSystem::~TrafficLightSystem() {
    NOTIFY_DESTRUCTOR(~TrafficLightSystem, true);
}

TrafficLane* TrafficLightSystem::getItsTrafficLane() const {
    return (TrafficLane*) &itsTrafficLane;
}

bool TrafficLightSystem::startBehavior() {
    bool done = true;
    done &= itsTrafficLane.startBehavior();
    done &= OMReactive::startBehavior();
    return done;
}

void TrafficLightSystem::initStatechart() {
    rootState_subState = OMNonState;
    rootState_active = OMNonState;
}

void TrafficLightSystem::setActiveContext(IOxfActive* theActiveContext, bool activeInstance) {
    OMReactive::setActiveContext(theActiveContext, activeInstance);
    {
        itsTrafficLane.setActiveContext(theActiveContext, false);
    }
}

void TrafficLightSystem::destroy() {
    itsTrafficLane.destroy();
    OMReactive::destroy();
}

void TrafficLightSystem::rootState_entDef() {
    {
        NOTIFY_STATE_ENTERED("ROOT");
        NOTIFY_TRANSITION_STARTED("0");
        NOTIFY_STATE_ENTERED("ROOT.Ready");
        rootState_subState = Ready;
        rootState_active = Ready;
        NOTIFY_TRANSITION_TERMINATED("0");
    }
}

IOxfReactive::TakeEventStatus TrafficLightSystem::rootState_processEvent() {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    switch (rootState_active) {
        // State Ready
        case Ready:
        {
            if(IS_EVENT_TYPE_OF(exStart_MVP0Pkg_id))
                {
                    NOTIFY_TRANSITION_STARTED("1");
                    NOTIFY_STATE_EXITED("ROOT.Ready");
                    NOTIFY_STATE_ENTERED("ROOT.sendaction_2");
                    pushNullTransition();
                    rootState_subState = sendaction_2;
                    rootState_active = sendaction_2;
                    //#[ state sendaction_2.(Entry) 
                    itsTrafficLane.GEN(evGo(TRUE,"Primary Thru"));
                    //#]
                    NOTIFY_TRANSITION_TERMINATED("1");
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
                    NOTIFY_STATE_EXITED("ROOT.sendaction_2");
                    NOTIFY_STATE_ENTERED("ROOT.Running");
                    rootState_subState = Running;
                    rootState_active = Running;
                    NOTIFY_TRANSITION_TERMINATED("2");
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
void OMAnimatedTrafficLightSystem::serializeRelations(AOMSRelations* aomsRelations) const {
    aomsRelations->addRelation("itsTrafficLane", true, true);
    aomsRelations->ADD_ITEM(&myReal->itsTrafficLane);
}

void OMAnimatedTrafficLightSystem::rootState_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT");
    switch (myReal->rootState_subState) {
        case TrafficLightSystem::Ready:
        {
            Ready_serializeStates(aomsState);
        }
        break;
        case TrafficLightSystem::Running:
        {
            Running_serializeStates(aomsState);
        }
        break;
        case TrafficLightSystem::sendaction_2:
        {
            sendaction_2_serializeStates(aomsState);
        }
        break;
        default:
            break;
    }
}

void OMAnimatedTrafficLightSystem::sendaction_2_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.sendaction_2");
}

void OMAnimatedTrafficLightSystem::Running_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.Running");
}

void OMAnimatedTrafficLightSystem::Ready_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.Ready");
}
//#]

IMPLEMENT_REACTIVE_META_P(TrafficLightSystem, MVP0Pkg, MVP0Pkg, false, OMAnimatedTrafficLightSystem)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: TrafficLightMVP0/MVP0Config/TrafficLightSystem.cpp
*********************************************************************/
