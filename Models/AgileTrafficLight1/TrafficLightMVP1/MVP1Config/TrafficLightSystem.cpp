/********************************************************************
	Rhapsody	: 9.0 
	Login		: Bruce
	Component	: TrafficLightMVP1 
	Configuration 	: MVP1Config
	Model Element	: TrafficLightSystem
//!	Generated Date	: Tue, 8, Dec 2020  
	File Path	: TrafficLightMVP1/MVP1Config/TrafficLightSystem.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX

#define _OMSTATECHART_ANIMATED
//#]

//## auto_generated
#include "TrafficLightSystem.h"
//#[ ignore
#define Default_TrafficLightSystem_TrafficLightSystem_SERIALIZE OM_NO_OP
//#]

//## package Default

//## class TrafficLightSystem
TrafficLightSystem::TrafficLightSystem(IOxfActive* theActiveContext) {
    NOTIFY_REACTIVE_CONSTRUCTOR(TrafficLightSystem, TrafficLightSystem(), 0, Default_TrafficLightSystem_TrafficLightSystem_SERIALIZE);
    setActiveContext(theActiveContext, false);
    {
        {
            primaryThruLane.setShouldDelete(false);
        }
        {
            secondaryThruLane.setShouldDelete(false);
        }
    }
    initRelations();
    initStatechart();
}

TrafficLightSystem::~TrafficLightSystem() {
    NOTIFY_DESTRUCTOR(~TrafficLightSystem, true);
}

TrafficLane* TrafficLightSystem::getPrimaryThruLane() const {
    return (TrafficLane*) &primaryThruLane;
}

TrafficLane* TrafficLightSystem::getSecondaryThruLane() const {
    return (TrafficLane*) &secondaryThruLane;
}

bool TrafficLightSystem::startBehavior() {
    bool done = true;
    done &= primaryThruLane.startBehavior();
    done &= secondaryThruLane.startBehavior();
    done &= OMReactive::startBehavior();
    return done;
}

void TrafficLightSystem::initRelations() {
    {
        
        secondaryThruLane.get_pOutThru()->setItsEvLaneDone_ProxyReceptionInterface(primaryThruLane.get_pInThru()->getItsEvLaneDone_ProxyReceptionInterface());
        
    }
    {
        
        primaryThruLane.get_pOutThru()->setItsEvLaneDone_ProxyReceptionInterface(secondaryThruLane.get_pInThru()->getItsEvLaneDone_ProxyReceptionInterface());
        
    }
}

void TrafficLightSystem::initStatechart() {
    rootState_subState = OMNonState;
    rootState_active = OMNonState;
}

void TrafficLightSystem::setActiveContext(IOxfActive* theActiveContext, bool activeInstance) {
    OMReactive::setActiveContext(theActiveContext, activeInstance);
    {
        primaryThruLane.setActiveContext(theActiveContext, false);
        secondaryThruLane.setActiveContext(theActiveContext, false);
    }
}

void TrafficLightSystem::destroy() {
    primaryThruLane.destroy();
    secondaryThruLane.destroy();
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
            if(IS_EVENT_TYPE_OF(exStart_Default_id))
                {
                    NOTIFY_TRANSITION_STARTED("1");
                    NOTIFY_STATE_EXITED("ROOT.Ready");
                    NOTIFY_STATE_ENTERED("ROOT.sendaction_2");
                    pushNullTransition();
                    rootState_subState = sendaction_2;
                    rootState_active = sendaction_2;
                    //#[ state sendaction_2.(Entry) 
                    primaryThruLane.GEN(evGo(TRUE,"Primary Thru"));
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
                    NOTIFY_STATE_ENTERED("ROOT.sendaction_3");
                    pushNullTransition();
                    rootState_subState = sendaction_3;
                    rootState_active = sendaction_3;
                    //#[ state sendaction_3.(Entry) 
                    secondaryThruLane.GEN(evGo(FALSE,"Secondary Thru"));
                    //#]
                    NOTIFY_TRANSITION_TERMINATED("2");
                    res = eventConsumed;
                }
            
        }
        break;
        // State sendaction_3
        case sendaction_3:
        {
            if(IS_EVENT_TYPE_OF(OMNullEventId))
                {
                    NOTIFY_TRANSITION_STARTED("3");
                    popNullTransition();
                    NOTIFY_STATE_EXITED("ROOT.sendaction_3");
                    NOTIFY_STATE_ENTERED("ROOT.Running");
                    rootState_subState = Running;
                    rootState_active = Running;
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
void OMAnimatedTrafficLightSystem::serializeRelations(AOMSRelations* aomsRelations) const {
    aomsRelations->addRelation("primaryThruLane", true, true);
    aomsRelations->ADD_ITEM(&myReal->primaryThruLane);
    aomsRelations->addRelation("secondaryThruLane", true, true);
    aomsRelations->ADD_ITEM(&myReal->secondaryThruLane);
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
        case TrafficLightSystem::sendaction_3:
        {
            sendaction_3_serializeStates(aomsState);
        }
        break;
        default:
            break;
    }
}

void OMAnimatedTrafficLightSystem::sendaction_3_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.sendaction_3");
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

IMPLEMENT_REACTIVE_META_P(TrafficLightSystem, Default, Default, false, OMAnimatedTrafficLightSystem)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: TrafficLightMVP1/MVP1Config/TrafficLightSystem.cpp
*********************************************************************/
