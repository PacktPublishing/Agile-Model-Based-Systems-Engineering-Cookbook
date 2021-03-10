/********************************************************************
	Rhapsody	: 9.0 
	Login		: Bruce
	Component	: TrafficLightMVP2 
	Configuration 	: MVP2Config
	Model Element	: TrafficLightSystem
//!	Generated Date	: Tue, 8, Dec 2020  
	File Path	: TrafficLightMVP2/MVP2Config/TrafficLightSystem.cpp
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
            primaryThru.setShouldDelete(false);
        }
        {
            secondaryThru.setShouldDelete(false);
        }
        {
            primaryTurn.setShouldDelete(false);
        }
        {
            secondaryTurn.setShouldDelete(false);
        }
    }
    initRelations();
    initStatechart();
}

TrafficLightSystem::~TrafficLightSystem() {
    NOTIFY_DESTRUCTOR(~TrafficLightSystem, true);
}

ThruLane* TrafficLightSystem::getPrimaryThru() const {
    return (ThruLane*) &primaryThru;
}

TurnLane* TrafficLightSystem::getPrimaryTurn() const {
    return (TurnLane*) &primaryTurn;
}

ThruLane* TrafficLightSystem::getSecondaryThru() const {
    return (ThruLane*) &secondaryThru;
}

TurnLane* TrafficLightSystem::getSecondaryTurn() const {
    return (TurnLane*) &secondaryTurn;
}

bool TrafficLightSystem::startBehavior() {
    bool done = true;
    done &= primaryThru.startBehavior();
    done &= primaryTurn.startBehavior();
    done &= secondaryThru.startBehavior();
    done &= secondaryTurn.startBehavior();
    done &= OMReactive::startBehavior();
    return done;
}

void TrafficLightSystem::initRelations() {
    {
        
        primaryThru.get_pOutThru()->setItsEvLaneDone_ProxyReceptionInterface(secondaryThru.get_pInThru()->getItsEvLaneDone_ProxyReceptionInterface());
        
    }
    {
        
        secondaryThru.get_pOutThru()->setItsEvLaneDone_ProxyReceptionInterface(primaryThru.get_pInThru()->getItsEvLaneDone_ProxyReceptionInterface());
        
    }
    {
        
        primaryThru.get_pTurn()->setItsEvGoTurn_ProxyReceptionInterface(primaryTurn.get_pThru()->getItsEvGoTurn_ProxyReceptionInterface());
        
    }{
        
        primaryTurn.get_pThru()->setItsEvTurnDone_ProxyReceptionInterface(primaryThru.get_pTurn()->getItsEvTurnDone_ProxyReceptionInterface());
        
        primaryTurn.get_pThru()->setItsEvCarArrive_ProxyReceptionInterface(primaryThru.get_pTurn()->getItsEvCarArrive_ProxyReceptionInterface());
        
    }
    {
        
        secondaryThru.get_pTurn()->setItsEvGoTurn_ProxyReceptionInterface(secondaryTurn.get_pThru()->getItsEvGoTurn_ProxyReceptionInterface());
        
    }{
        
        secondaryTurn.get_pThru()->setItsEvTurnDone_ProxyReceptionInterface(secondaryThru.get_pTurn()->getItsEvTurnDone_ProxyReceptionInterface());
        
        secondaryTurn.get_pThru()->setItsEvCarArrive_ProxyReceptionInterface(secondaryThru.get_pTurn()->getItsEvCarArrive_ProxyReceptionInterface());
        
    }
}

void TrafficLightSystem::initStatechart() {
    rootState_subState = OMNonState;
    rootState_active = OMNonState;
}

void TrafficLightSystem::setActiveContext(IOxfActive* theActiveContext, bool activeInstance) {
    OMReactive::setActiveContext(theActiveContext, activeInstance);
    {
        primaryThru.setActiveContext(theActiveContext, false);
        secondaryThru.setActiveContext(theActiveContext, false);
        primaryTurn.setActiveContext(theActiveContext, false);
        secondaryTurn.setActiveContext(theActiveContext, false);
    }
}

void TrafficLightSystem::destroy() {
    primaryThru.destroy();
    primaryTurn.destroy();
    secondaryThru.destroy();
    secondaryTurn.destroy();
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
                    primaryThru.GEN(evGo(TRUE,"Primary Thru"));
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
                    secondaryThru.GEN(evGo(FALSE,"Secondary"));
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
                    NOTIFY_STATE_ENTERED("ROOT.sendaction_4");
                    pushNullTransition();
                    rootState_subState = sendaction_4;
                    rootState_active = sendaction_4;
                    //#[ state sendaction_4.(Entry) 
                    primaryTurn.GEN(evGo(FALSE,"Primary Turn"));
                    //#]
                    NOTIFY_TRANSITION_TERMINATED("3");
                    res = eventConsumed;
                }
            
        }
        break;
        // State sendaction_4
        case sendaction_4:
        {
            if(IS_EVENT_TYPE_OF(OMNullEventId))
                {
                    NOTIFY_TRANSITION_STARTED("4");
                    popNullTransition();
                    NOTIFY_STATE_EXITED("ROOT.sendaction_4");
                    NOTIFY_STATE_ENTERED("ROOT.sendaction_5");
                    pushNullTransition();
                    rootState_subState = sendaction_5;
                    rootState_active = sendaction_5;
                    //#[ state sendaction_5.(Entry) 
                    secondaryTurn.GEN(evGo(FALSE,"Secondary Turn"));
                    //#]
                    NOTIFY_TRANSITION_TERMINATED("4");
                    res = eventConsumed;
                }
            
        }
        break;
        // State sendaction_5
        case sendaction_5:
        {
            if(IS_EVENT_TYPE_OF(OMNullEventId))
                {
                    NOTIFY_TRANSITION_STARTED("5");
                    popNullTransition();
                    NOTIFY_STATE_EXITED("ROOT.sendaction_5");
                    NOTIFY_STATE_ENTERED("ROOT.Running");
                    rootState_subState = Running;
                    rootState_active = Running;
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
void OMAnimatedTrafficLightSystem::serializeRelations(AOMSRelations* aomsRelations) const {
    aomsRelations->addRelation("primaryThru", true, true);
    aomsRelations->ADD_ITEM(&myReal->primaryThru);
    aomsRelations->addRelation("secondaryThru", true, true);
    aomsRelations->ADD_ITEM(&myReal->secondaryThru);
    aomsRelations->addRelation("primaryTurn", true, true);
    aomsRelations->ADD_ITEM(&myReal->primaryTurn);
    aomsRelations->addRelation("secondaryTurn", true, true);
    aomsRelations->ADD_ITEM(&myReal->secondaryTurn);
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
        case TrafficLightSystem::sendaction_4:
        {
            sendaction_4_serializeStates(aomsState);
        }
        break;
        case TrafficLightSystem::sendaction_5:
        {
            sendaction_5_serializeStates(aomsState);
        }
        break;
        default:
            break;
    }
}

void OMAnimatedTrafficLightSystem::sendaction_5_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.sendaction_5");
}

void OMAnimatedTrafficLightSystem::sendaction_4_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.sendaction_4");
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
	File Path	: TrafficLightMVP2/MVP2Config/TrafficLightSystem.cpp
*********************************************************************/
