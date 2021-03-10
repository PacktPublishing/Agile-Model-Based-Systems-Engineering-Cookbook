/********************************************************************
	Rhapsody	: 9.0 
	Login		: Bruce
	Component	: GearShiftingTestComponent 
	Configuration 	: GSC_Test_Animation
	Model Element	: CommStub
//!	Generated Date	: Sat, 28, Nov 2020  
	File Path	: GearShiftingTestComponent/GSC_Test_Animation/CommStub.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX

#define _OMSTATECHART_ANIMATED
//#]

//## auto_generated
#include "CommStub.h"
//## link itsRiderApplication
#include "RiderApplication.h"
//## event evMechanicalShifting()
#include "RiderInteractionDesignPkg.h"
//#[ ignore
#define DesignSynthesisPkg_TestPkg_CommStub_CommStub_SERIALIZE OM_NO_OP
//#]

//## package DesignSynthesisPkg::TestPkg

//## class CommStub
CommStub::CommStub(IOxfActive* theActiveContext) {
    NOTIFY_REACTIVE_CONSTRUCTOR(CommStub, CommStub(), 0, DesignSynthesisPkg_TestPkg_CommStub_CommStub_SERIALIZE);
    setActiveContext(theActiveContext, false);
    itsRiderApplication = NULL;
    initStatechart();
}

CommStub::~CommStub() {
    NOTIFY_DESTRUCTOR(~CommStub, true);
    cleanUpRelations();
}

RiderApplication* CommStub::getItsRiderApplication() const {
    return itsRiderApplication;
}

void CommStub::setItsRiderApplication(RiderApplication* p_RiderApplication) {
    itsRiderApplication = p_RiderApplication;
    if(p_RiderApplication != NULL)
        {
            NOTIFY_RELATION_ITEM_ADDED("itsRiderApplication", p_RiderApplication, false, true);
        }
    else
        {
            NOTIFY_RELATION_CLEARED("itsRiderApplication");
        }
}

bool CommStub::startBehavior() {
    bool done = false;
    done = OMReactive::startBehavior();
    return done;
}

void CommStub::initStatechart() {
    rootState_subState = OMNonState;
    rootState_active = OMNonState;
}

void CommStub::cleanUpRelations() {
    if(itsRiderApplication != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsRiderApplication");
            itsRiderApplication = NULL;
        }
}

void CommStub::rootState_entDef() {
    {
        NOTIFY_STATE_ENTERED("ROOT");
        NOTIFY_TRANSITION_STARTED("2");
        NOTIFY_STATE_ENTERED("ROOT.CommStubTestState");
        rootState_subState = CommStubTestState;
        rootState_active = CommStubTestState;
        NOTIFY_TRANSITION_TERMINATED("2");
    }
}

IOxfReactive::TakeEventStatus CommStub::rootState_processEvent() {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    switch (rootState_active) {
        // State CommStubTestState
        case CommStubTestState:
        {
            if(IS_EVENT_TYPE_OF(exMechShifting_TestPkg_DesignSynthesisPkg_id))
                {
                    NOTIFY_TRANSITION_STARTED("0");
                    NOTIFY_STATE_EXITED("ROOT.CommStubTestState");
                    //#[ transition 0 
                    
                    itsRiderApplication->setUseMechanicalShifting(true);
                    //#]
                    NOTIFY_STATE_ENTERED("ROOT.sendaction_1");
                    pushNullTransition();
                    rootState_subState = sendaction_1;
                    rootState_active = sendaction_1;
                    //#[ state sendaction_1.(Entry) 
                    itsRiderApplication->GEN(evMechanicalShifting);
                    //#]
                    NOTIFY_TRANSITION_TERMINATED("0");
                    res = eventConsumed;
                }
            else if(IS_EVENT_TYPE_OF(exDIShifting_TestPkg_DesignSynthesisPkg_id))
                {
                    NOTIFY_TRANSITION_STARTED("1");
                    NOTIFY_STATE_EXITED("ROOT.CommStubTestState");
                    //#[ transition 1 
                    
                    itsRiderApplication->setUseMechanicalShifting(false);
                    //#]
                    NOTIFY_STATE_ENTERED("ROOT.sendaction_2");
                    pushNullTransition();
                    rootState_subState = sendaction_2;
                    rootState_active = sendaction_2;
                    //#[ state sendaction_2.(Entry) 
                    itsRiderApplication->GEN(evDIShifting);
                    //#]
                    NOTIFY_TRANSITION_TERMINATED("1");
                    res = eventConsumed;
                }
            
        }
        break;
        // State sendaction_1
        case sendaction_1:
        {
            if(IS_EVENT_TYPE_OF(OMNullEventId))
                {
                    NOTIFY_TRANSITION_STARTED("3");
                    popNullTransition();
                    NOTIFY_STATE_EXITED("ROOT.sendaction_1");
                    NOTIFY_STATE_ENTERED("ROOT.CommStubTestState");
                    rootState_subState = CommStubTestState;
                    rootState_active = CommStubTestState;
                    NOTIFY_TRANSITION_TERMINATED("3");
                    res = eventConsumed;
                }
            
        }
        break;
        // State sendaction_2
        case sendaction_2:
        {
            if(IS_EVENT_TYPE_OF(OMNullEventId))
                {
                    NOTIFY_TRANSITION_STARTED("4");
                    popNullTransition();
                    NOTIFY_STATE_EXITED("ROOT.sendaction_2");
                    NOTIFY_STATE_ENTERED("ROOT.CommStubTestState");
                    rootState_subState = CommStubTestState;
                    rootState_active = CommStubTestState;
                    NOTIFY_TRANSITION_TERMINATED("4");
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
void OMAnimatedCommStub::serializeRelations(AOMSRelations* aomsRelations) const {
    aomsRelations->addRelation("itsRiderApplication", false, true);
    if(myReal->itsRiderApplication)
        {
            aomsRelations->ADD_ITEM(myReal->itsRiderApplication);
        }
}

void OMAnimatedCommStub::rootState_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT");
    switch (myReal->rootState_subState) {
        case CommStub::CommStubTestState:
        {
            CommStubTestState_serializeStates(aomsState);
        }
        break;
        case CommStub::sendaction_1:
        {
            sendaction_1_serializeStates(aomsState);
        }
        break;
        case CommStub::sendaction_2:
        {
            sendaction_2_serializeStates(aomsState);
        }
        break;
        default:
            break;
    }
}

void OMAnimatedCommStub::sendaction_2_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.sendaction_2");
}

void OMAnimatedCommStub::sendaction_1_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.sendaction_1");
}

void OMAnimatedCommStub::CommStubTestState_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.CommStubTestState");
}
//#]

IMPLEMENT_REACTIVE_META_P(CommStub, DesignSynthesisPkg_TestPkg, DesignSynthesisPkg::TestPkg, false, OMAnimatedCommStub)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: GearShiftingTestComponent/GSC_Test_Animation/CommStub.cpp
*********************************************************************/
