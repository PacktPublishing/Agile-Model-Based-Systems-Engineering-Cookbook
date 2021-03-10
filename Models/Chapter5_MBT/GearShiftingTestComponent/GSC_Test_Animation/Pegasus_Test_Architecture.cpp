/********************************************************************
	Rhapsody	: 9.0 
	Login		: Bruce
	Component	: GearShiftingTestComponent 
	Configuration 	: GSC_Test_Animation
	Model Element	: Pegasus_Test_Architecture
//!	Generated Date	: Sun, 29, Nov 2020  
	File Path	: GearShiftingTestComponent/GSC_Test_Animation/Pegasus_Test_Architecture.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX

#define _OMSTATECHART_ANIMATED
//#]

//## auto_generated
#include "Pegasus_Test_Architecture.h"
//## link DIDownButton
#include "DIButton.h"
//## link itsGearControl
#include "GearControl.h"
//## link itsRiderApplication
#include "RiderApplication.h"
//## link leftShiftLever
#include "ShiftLever.h"
//#[ ignore
#define DesignSynthesisPkg_TestPkg_Pegasus_Test_Architecture_Pegasus_Test_Architecture_SERIALIZE OM_NO_OP

#define DesignSynthesisPkg_TestPkg_Pegasus_Test_Architecture_printAssert_SERIALIZE aomsmethod->addAttribute("s", x2String(s));

#define DesignSynthesisPkg_TestPkg_Pegasus_Test_Architecture_printMsg_SERIALIZE aomsmethod->addAttribute("s", x2String(s));
//#]

//## package DesignSynthesisPkg::TestPkg

//## class Pegasus_Test_Architecture
Pegasus_Test_Architecture::Pegasus_Test_Architecture(IOxfActive* theActiveContext) {
    NOTIFY_REACTIVE_CONSTRUCTOR(Pegasus_Test_Architecture, Pegasus_Test_Architecture(), 0, DesignSynthesisPkg_TestPkg_Pegasus_Test_Architecture_Pegasus_Test_Architecture_SERIALIZE);
    setActiveContext(theActiveContext, false);
    {
        {
            itsMainComputingPlatform.setShouldDelete(false);
        }
        {
            itsRiderInteraction.setShouldDelete(false);
        }
    }
    DIDownButton = NULL;
    DIUpButton = NULL;
    itsGearControl = NULL;
    itsRiderApplication = NULL;
    leftShiftLever = NULL;
    rightShiftLever = NULL;
    initRelations();
    initStatechart();
}

Pegasus_Test_Architecture::~Pegasus_Test_Architecture() {
    NOTIFY_DESTRUCTOR(~Pegasus_Test_Architecture, true);
    cleanUpRelations();
}

void Pegasus_Test_Architecture::printAssert(const RhpString& s) {
    NOTIFY_OPERATION(printAssert, printAssert(const RhpString&), 1, DesignSynthesisPkg_TestPkg_Pegasus_Test_Architecture_printAssert_SERIALIZE);
    //#[ operation printAssert(RhpString)
    std::cout << "TEST ASSERT: " << s << std::endl;
    std::cout << "    Insert the exContinue event to proceed." << std::endl;
    
    //#]
}

void Pegasus_Test_Architecture::printMsg(const RhpString& s) {
    NOTIFY_OPERATION(printMsg, printMsg(const RhpString&), 1, DesignSynthesisPkg_TestPkg_Pegasus_Test_Architecture_printMsg_SERIALIZE);
    //#[ operation printMsg(RhpString)
    std::cout << s << std::endl;
    
    
    //#]
}

DIButton* Pegasus_Test_Architecture::getDIDownButton() const {
    return DIDownButton;
}

void Pegasus_Test_Architecture::setDIDownButton(DIButton* p_DIButton) {
    DIDownButton = p_DIButton;
    if(p_DIButton != NULL)
        {
            NOTIFY_RELATION_ITEM_ADDED("DIDownButton", p_DIButton, false, true);
        }
    else
        {
            NOTIFY_RELATION_CLEARED("DIDownButton");
        }
}

DIButton* Pegasus_Test_Architecture::getDIUpButton() const {
    return DIUpButton;
}

void Pegasus_Test_Architecture::setDIUpButton(DIButton* p_DIButton) {
    DIUpButton = p_DIButton;
    if(p_DIButton != NULL)
        {
            NOTIFY_RELATION_ITEM_ADDED("DIUpButton", p_DIButton, false, true);
        }
    else
        {
            NOTIFY_RELATION_CLEARED("DIUpButton");
        }
}

GearControl* Pegasus_Test_Architecture::getItsGearControl() const {
    return itsGearControl;
}

void Pegasus_Test_Architecture::setItsGearControl(GearControl* p_GearControl) {
    itsGearControl = p_GearControl;
    if(p_GearControl != NULL)
        {
            NOTIFY_RELATION_ITEM_ADDED("itsGearControl", p_GearControl, false, true);
        }
    else
        {
            NOTIFY_RELATION_CLEARED("itsGearControl");
        }
}

MainComputingPlatform* Pegasus_Test_Architecture::getItsMainComputingPlatform() const {
    return (MainComputingPlatform*) &itsMainComputingPlatform;
}

RiderApplication* Pegasus_Test_Architecture::getItsRiderApplication() const {
    return itsRiderApplication;
}

void Pegasus_Test_Architecture::setItsRiderApplication(RiderApplication* p_RiderApplication) {
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

RiderInteraction* Pegasus_Test_Architecture::getItsRiderInteraction() const {
    return (RiderInteraction*) &itsRiderInteraction;
}

ShiftLever* Pegasus_Test_Architecture::getLeftShiftLever() const {
    return leftShiftLever;
}

void Pegasus_Test_Architecture::setLeftShiftLever(ShiftLever* p_ShiftLever) {
    leftShiftLever = p_ShiftLever;
    if(p_ShiftLever != NULL)
        {
            NOTIFY_RELATION_ITEM_ADDED("leftShiftLever", p_ShiftLever, false, true);
        }
    else
        {
            NOTIFY_RELATION_CLEARED("leftShiftLever");
        }
}

ShiftLever* Pegasus_Test_Architecture::getRightShiftLever() const {
    return rightShiftLever;
}

void Pegasus_Test_Architecture::setRightShiftLever(ShiftLever* p_ShiftLever) {
    rightShiftLever = p_ShiftLever;
    if(p_ShiftLever != NULL)
        {
            NOTIFY_RELATION_ITEM_ADDED("rightShiftLever", p_ShiftLever, false, true);
        }
    else
        {
            NOTIFY_RELATION_CLEARED("rightShiftLever");
        }
}

bool Pegasus_Test_Architecture::startBehavior() {
    bool done = true;
    done &= itsMainComputingPlatform.startBehavior();
    done &= itsRiderInteraction.startBehavior();
    done &= OMReactive::startBehavior();
    return done;
}

void Pegasus_Test_Architecture::initRelations() {
    {
        
        itsMainComputingPlatform.get_pRiderShift()->setItsEvDIShifting_ProxyReceptionInterface(itsRiderInteraction.get_pMain()->getItsEvDIShifting_ProxyReceptionInterface());
        
        itsMainComputingPlatform.get_pRiderShift()->setItsEvMechanicalShifting_ProxyReceptionInterface(itsRiderInteraction.get_pMain()->getItsEvMechanicalShifting_ProxyReceptionInterface());
        
        itsMainComputingPlatform.get_pRiderShift()->setItsEvDisplayGearing_ProxyReceptionInterface(itsRiderInteraction.get_pMain()->getItsEvDisplayGearing_ProxyReceptionInterface());
        
    }{
        
        itsRiderInteraction.get_pMain()->setItsEvDIDown_ProxyReceptionInterface(itsMainComputingPlatform.get_pRiderShift()->getItsEvDIDown_ProxyReceptionInterface());
        
        itsRiderInteraction.get_pMain()->setItsEvDIUp_ProxyReceptionInterface(itsMainComputingPlatform.get_pRiderShift()->getItsEvDIUp_ProxyReceptionInterface());
        
        itsRiderInteraction.get_pMain()->setItsEvLeftShiftDown_ProxyReceptionInterface(itsMainComputingPlatform.get_pRiderShift()->getItsEvLeftShiftDown_ProxyReceptionInterface());
        
        itsRiderInteraction.get_pMain()->setItsEvLeftShiftUp_ProxyReceptionInterface(itsMainComputingPlatform.get_pRiderShift()->getItsEvLeftShiftUp_ProxyReceptionInterface());
        
        itsRiderInteraction.get_pMain()->setItsEvRightShiftDown_ProxyReceptionInterface(itsMainComputingPlatform.get_pRiderShift()->getItsEvRightShiftDown_ProxyReceptionInterface());
        
        itsRiderInteraction.get_pMain()->setItsEvRightShiftUp_ProxyReceptionInterface(itsMainComputingPlatform.get_pRiderShift()->getItsEvRightShiftUp_ProxyReceptionInterface());
        
    }
}

void Pegasus_Test_Architecture::initStatechart() {
    rootState_subState = OMNonState;
    rootState_active = OMNonState;
    TC9_Execution_subState = OMNonState;
    TC7_Execution_subState = OMNonState;
    TC3_Execution_subState = OMNonState;
    TC1_Execution_subState = OMNonState;
}

void Pegasus_Test_Architecture::cleanUpRelations() {
    if(DIDownButton != NULL)
        {
            NOTIFY_RELATION_CLEARED("DIDownButton");
            DIDownButton = NULL;
        }
    if(DIUpButton != NULL)
        {
            NOTIFY_RELATION_CLEARED("DIUpButton");
            DIUpButton = NULL;
        }
    if(itsGearControl != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsGearControl");
            itsGearControl = NULL;
        }
    if(itsRiderApplication != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsRiderApplication");
            itsRiderApplication = NULL;
        }
    if(leftShiftLever != NULL)
        {
            NOTIFY_RELATION_CLEARED("leftShiftLever");
            leftShiftLever = NULL;
        }
    if(rightShiftLever != NULL)
        {
            NOTIFY_RELATION_CLEARED("rightShiftLever");
            rightShiftLever = NULL;
        }
}

void Pegasus_Test_Architecture::setActiveContext(IOxfActive* theActiveContext, bool activeInstance) {
    OMReactive::setActiveContext(theActiveContext, activeInstance);
    {
        itsMainComputingPlatform.setActiveContext(theActiveContext, false);
        itsRiderInteraction.setActiveContext(theActiveContext, false);
    }
}

void Pegasus_Test_Architecture::rootState_entDef() {
    {
        NOTIFY_STATE_ENTERED("ROOT");
        NOTIFY_TRANSITION_STARTED("30");
        //#[ transition 30 
        itsRiderApplication = itsMainComputingPlatform.getItsRiderApplication();
        itsGearControl = itsRiderInteraction.getItsGearControl();
        leftShiftLever = itsGearControl->getLeftShifter();
        rightShiftLever = itsGearControl->getRightShifter();
        DIUpButton = itsGearControl->getDIUpShifter();
        DIDownButton = itsGearControl->getDIDownShifter();
        printMsg("Enter selected test event to begin test execution");
        //#]
        NOTIFY_STATE_ENTERED("ROOT.Ready");
        rootState_subState = Ready;
        rootState_active = Ready;
        NOTIFY_TRANSITION_TERMINATED("30");
    }
}

IOxfReactive::TakeEventStatus Pegasus_Test_Architecture::rootState_processEvent() {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    switch (rootState_active) {
        // State Ready
        case Ready:
        {
            res = Ready_handleEvent();
        }
        break;
        // State TC1_SettingInitialConditions
        case TC1_SettingInitialConditions:
        {
            if(IS_EVENT_TYPE_OF(exStart_TestPkg_DesignSynthesisPkg_id))
                {
                    NOTIFY_TRANSITION_STARTED("1");
                    NOTIFY_STATE_EXITED("ROOT.TC1_SettingInitialConditions");
                    TC1_Execution_entDef();
                    NOTIFY_TRANSITION_TERMINATED("1");
                    res = eventConsumed;
                }
            
        }
        break;
        // State sendaction_21
        case sendaction_21:
        {
            if(IS_EVENT_TYPE_OF(OMNullEventId))
                {
                    NOTIFY_TRANSITION_STARTED("ROOT.TC1_Execution.1");
                    popNullTransition();
                    NOTIFY_STATE_EXITED("ROOT.TC1_Execution.ROOT.TC1_Execution.sendaction_21");
                    //#[ transition TC1_Execution.1 
                    printAssert("Chain Ring value should be 1");
                    //#]
                    NOTIFY_STATE_ENTERED("ROOT.TC1_Execution.ROOT.TC1_Execution.TC1_Pause1");
                    TC1_Execution_subState = TC1_Pause1;
                    rootState_active = TC1_Pause1;
                    NOTIFY_TRANSITION_TERMINATED("ROOT.TC1_Execution.1");
                    res = eventConsumed;
                }
            
            if(res == eventNotConsumed)
                {
                    res = TC1_Execution_handleEvent();
                }
        }
        break;
        // State sendaction_22
        case sendaction_22:
        {
            if(IS_EVENT_TYPE_OF(OMNullEventId))
                {
                    NOTIFY_TRANSITION_STARTED("ROOT.TC1_Execution.3");
                    popNullTransition();
                    NOTIFY_STATE_EXITED("ROOT.TC1_Execution.ROOT.TC1_Execution.sendaction_22");
                    //#[ transition TC1_Execution.3 
                    printAssert("Chain Ring value should be 2");
                    //#]
                    NOTIFY_STATE_ENTERED("ROOT.TC1_Execution.ROOT.TC1_Execution.TC1_Pause2");
                    TC1_Execution_subState = TC1_Pause2;
                    rootState_active = TC1_Pause2;
                    NOTIFY_TRANSITION_TERMINATED("ROOT.TC1_Execution.3");
                    res = eventConsumed;
                }
            
            if(res == eventNotConsumed)
                {
                    res = TC1_Execution_handleEvent();
                }
        }
        break;
        // State sendaction_23
        case sendaction_23:
        {
            if(IS_EVENT_TYPE_OF(OMNullEventId))
                {
                    NOTIFY_TRANSITION_STARTED("ROOT.TC1_Execution.5");
                    popNullTransition();
                    NOTIFY_STATE_EXITED("ROOT.TC1_Execution.ROOT.TC1_Execution.sendaction_23");
                    //#[ transition TC1_Execution.5 
                    printAssert("Chain Ring value should be 3");
                    //#]
                    NOTIFY_STATE_ENTERED("ROOT.TC1_Execution.ROOT.TC1_Execution.TC1_Pause3");
                    TC1_Execution_subState = TC1_Pause3;
                    rootState_active = TC1_Pause3;
                    NOTIFY_TRANSITION_TERMINATED("ROOT.TC1_Execution.5");
                    res = eventConsumed;
                }
            
            if(res == eventNotConsumed)
                {
                    res = TC1_Execution_handleEvent();
                }
        }
        break;
        // State TC1_Pause1
        case TC1_Pause1:
        {
            if(IS_EVENT_TYPE_OF(exContinue_TestPkg_DesignSynthesisPkg_id))
                {
                    NOTIFY_TRANSITION_STARTED("ROOT.TC1_Execution.2");
                    NOTIFY_STATE_EXITED("ROOT.TC1_Execution.ROOT.TC1_Execution.TC1_Pause1");
                    NOTIFY_STATE_ENTERED("ROOT.TC1_Execution.ROOT.TC1_Execution.sendaction_22");
                    pushNullTransition();
                    TC1_Execution_subState = sendaction_22;
                    rootState_active = sendaction_22;
                    //#[ state TC1_Execution.TC1_Execution.sendaction_22.(Entry) 
                    leftShiftLever->GEN(evUp);
                    //#]
                    NOTIFY_TRANSITION_TERMINATED("ROOT.TC1_Execution.2");
                    res = eventConsumed;
                }
            
            if(res == eventNotConsumed)
                {
                    res = TC1_Execution_handleEvent();
                }
        }
        break;
        // State TC1_Pause2
        case TC1_Pause2:
        {
            if(IS_EVENT_TYPE_OF(exContinue_TestPkg_DesignSynthesisPkg_id))
                {
                    NOTIFY_TRANSITION_STARTED("ROOT.TC1_Execution.4");
                    NOTIFY_STATE_EXITED("ROOT.TC1_Execution.ROOT.TC1_Execution.TC1_Pause2");
                    NOTIFY_STATE_ENTERED("ROOT.TC1_Execution.ROOT.TC1_Execution.sendaction_23");
                    pushNullTransition();
                    TC1_Execution_subState = sendaction_23;
                    rootState_active = sendaction_23;
                    //#[ state TC1_Execution.TC1_Execution.sendaction_23.(Entry) 
                    leftShiftLever->GEN(evUp);
                    //#]
                    NOTIFY_TRANSITION_TERMINATED("ROOT.TC1_Execution.4");
                    res = eventConsumed;
                }
            
            if(res == eventNotConsumed)
                {
                    res = TC1_Execution_handleEvent();
                }
        }
        break;
        // State TC1_Pause3
        case TC1_Pause3:
        {
            if(IS_EVENT_TYPE_OF(exContinue_TestPkg_DesignSynthesisPkg_id))
                {
                    NOTIFY_TRANSITION_STARTED("ROOT.TC1_Execution.6");
                    NOTIFY_STATE_EXITED("ROOT.TC1_Execution.ROOT.TC1_Execution.TC1_Pause3");
                    NOTIFY_STATE_ENTERED("ROOT.TC1_Execution.ROOT.TC1_Execution.terminationstate_27");
                    TC1_Execution_subState = terminationstate_27;
                    rootState_active = terminationstate_27;
                    NOTIFY_TRANSITION_TERMINATED("ROOT.TC1_Execution.6");
                    res = eventConsumed;
                }
            
            if(res == eventNotConsumed)
                {
                    res = TC1_Execution_handleEvent();
                }
        }
        break;
        // State terminationstate_27
        case terminationstate_27:
        {
            res = TC1_Execution_handleEvent();
        }
        break;
        // State TC2_SettingInitialConditions
        case TC2_SettingInitialConditions:
        {
            if(IS_EVENT_TYPE_OF(exStart_TestPkg_DesignSynthesisPkg_id))
                {
                    NOTIFY_TRANSITION_STARTED("3");
                    NOTIFY_STATE_EXITED("ROOT.TC2_SettingInitialConditions");
                    NOTIFY_STATE_ENTERED("ROOT.TC2_Execution");
                    pushNullTransition();
                    rootState_subState = TC2_Execution;
                    rootState_active = TC2_Execution;
                    NOTIFY_TRANSITION_TERMINATED("3");
                    res = eventConsumed;
                }
            
        }
        break;
        // State TC2_Execution
        case TC2_Execution:
        {
            if(IS_EVENT_TYPE_OF(OMNullEventId))
                {
                    NOTIFY_TRANSITION_STARTED("21");
                    popNullTransition();
                    NOTIFY_STATE_EXITED("ROOT.TC2_Execution");
                    //#[ transition 21 
                    printMsg("Test Complete \n");
                    //#]
                    NOTIFY_STATE_ENTERED("ROOT.Ready");
                    rootState_subState = Ready;
                    rootState_active = Ready;
                    NOTIFY_TRANSITION_TERMINATED("21");
                    res = eventConsumed;
                }
            
        }
        break;
        // State TC3_SettingInitialConditions
        case TC3_SettingInitialConditions:
        {
            if(IS_EVENT_TYPE_OF(exStart_TestPkg_DesignSynthesisPkg_id))
                {
                    NOTIFY_TRANSITION_STARTED("4");
                    NOTIFY_STATE_EXITED("ROOT.TC3_SettingInitialConditions");
                    TC3_Execution_entDef();
                    NOTIFY_TRANSITION_TERMINATED("4");
                    res = eventConsumed;
                }
            
        }
        break;
        // State sendaction_21
        case TC3_Execution_sendaction_21:
        {
            if(IS_EVENT_TYPE_OF(OMNullEventId))
                {
                    NOTIFY_TRANSITION_STARTED("ROOT.TC3_Execution.1");
                    popNullTransition();
                    NOTIFY_STATE_EXITED("ROOT.TC3_Execution.ROOT.TC3_Execution.sendaction_21");
                    //#[ transition TC3_Execution.1 
                    printAssert("Chain Ring value should be 3");
                    //#]
                    NOTIFY_STATE_ENTERED("ROOT.TC3_Execution.ROOT.TC3_Execution.TC3_Pause1");
                    TC3_Execution_subState = TC3_Pause1;
                    rootState_active = TC3_Pause1;
                    NOTIFY_TRANSITION_TERMINATED("ROOT.TC3_Execution.1");
                    res = eventConsumed;
                }
            
            if(res == eventNotConsumed)
                {
                    res = TC3_Execution_handleEvent();
                }
        }
        break;
        // State TC3_Pause1
        case TC3_Pause1:
        {
            if(IS_EVENT_TYPE_OF(exContinue_TestPkg_DesignSynthesisPkg_id))
                {
                    NOTIFY_TRANSITION_STARTED("ROOT.TC3_Execution.3");
                    NOTIFY_STATE_EXITED("ROOT.TC3_Execution.ROOT.TC3_Execution.TC3_Pause1");
                    NOTIFY_STATE_ENTERED("ROOT.TC3_Execution.ROOT.TC3_Execution.sendaction_22");
                    pushNullTransition();
                    TC3_Execution_subState = TC3_Execution_sendaction_22;
                    rootState_active = TC3_Execution_sendaction_22;
                    //#[ state TC3_Execution.TC3_Execution.sendaction_22.(Entry) 
                    leftShiftLever->GEN(evUp);
                    //#]
                    NOTIFY_TRANSITION_TERMINATED("ROOT.TC3_Execution.3");
                    res = eventConsumed;
                }
            
            if(res == eventNotConsumed)
                {
                    res = TC3_Execution_handleEvent();
                }
        }
        break;
        // State sendaction_22
        case TC3_Execution_sendaction_22:
        {
            if(IS_EVENT_TYPE_OF(OMNullEventId))
                {
                    NOTIFY_TRANSITION_STARTED("ROOT.TC3_Execution.2");
                    popNullTransition();
                    NOTIFY_STATE_EXITED("ROOT.TC3_Execution.ROOT.TC3_Execution.sendaction_22");
                    //#[ transition TC3_Execution.2 
                    printAssert("Chain Ring value should (still)  be 3");
                    //#]
                    NOTIFY_STATE_ENTERED("ROOT.TC3_Execution.ROOT.TC3_Execution.TC3_Pause2");
                    TC3_Execution_subState = TC3_Pause2;
                    rootState_active = TC3_Pause2;
                    NOTIFY_TRANSITION_TERMINATED("ROOT.TC3_Execution.2");
                    res = eventConsumed;
                }
            
            if(res == eventNotConsumed)
                {
                    res = TC3_Execution_handleEvent();
                }
        }
        break;
        // State TC3_Pause2
        case TC3_Pause2:
        {
            if(IS_EVENT_TYPE_OF(exContinue_TestPkg_DesignSynthesisPkg_id))
                {
                    NOTIFY_TRANSITION_STARTED("ROOT.TC3_Execution.5");
                    NOTIFY_STATE_EXITED("ROOT.TC3_Execution.ROOT.TC3_Execution.TC3_Pause2");
                    NOTIFY_STATE_ENTERED("ROOT.TC3_Execution.ROOT.TC3_Execution.sendaction_32");
                    pushNullTransition();
                    TC3_Execution_subState = sendaction_32;
                    rootState_active = sendaction_32;
                    //#[ state TC3_Execution.TC3_Execution.sendaction_32.(Entry) 
                    leftShiftLever->GEN(evUp);
                    //#]
                    NOTIFY_TRANSITION_TERMINATED("ROOT.TC3_Execution.5");
                    res = eventConsumed;
                }
            
            if(res == eventNotConsumed)
                {
                    res = TC3_Execution_handleEvent();
                }
        }
        break;
        // State sendaction_32
        case sendaction_32:
        {
            if(IS_EVENT_TYPE_OF(OMNullEventId))
                {
                    NOTIFY_TRANSITION_STARTED("ROOT.TC3_Execution.4");
                    popNullTransition();
                    NOTIFY_STATE_EXITED("ROOT.TC3_Execution.ROOT.TC3_Execution.sendaction_32");
                    //#[ transition TC3_Execution.4 
                    printAssert("Chain Ring value should (STILL) be 3");
                    //#]
                    NOTIFY_STATE_ENTERED("ROOT.TC3_Execution.ROOT.TC3_Execution.TC3_Pause3");
                    TC3_Execution_subState = TC3_Pause3;
                    rootState_active = TC3_Pause3;
                    NOTIFY_TRANSITION_TERMINATED("ROOT.TC3_Execution.4");
                    res = eventConsumed;
                }
            
            if(res == eventNotConsumed)
                {
                    res = TC3_Execution_handleEvent();
                }
        }
        break;
        // State TC3_Pause3
        case TC3_Pause3:
        {
            if(IS_EVENT_TYPE_OF(exContinue_TestPkg_DesignSynthesisPkg_id))
                {
                    NOTIFY_TRANSITION_STARTED("ROOT.TC3_Execution.6");
                    NOTIFY_STATE_EXITED("ROOT.TC3_Execution.ROOT.TC3_Execution.TC3_Pause3");
                    NOTIFY_STATE_ENTERED("ROOT.TC3_Execution.ROOT.TC3_Execution.terminationstate_34");
                    TC3_Execution_subState = terminationstate_34;
                    rootState_active = terminationstate_34;
                    NOTIFY_TRANSITION_TERMINATED("ROOT.TC3_Execution.6");
                    res = eventConsumed;
                }
            
            if(res == eventNotConsumed)
                {
                    res = TC3_Execution_handleEvent();
                }
        }
        break;
        // State terminationstate_34
        case terminationstate_34:
        {
            res = TC3_Execution_handleEvent();
        }
        break;
        // State TC4_SettingInitialConditions
        case TC4_SettingInitialConditions:
        {
            if(IS_EVENT_TYPE_OF(exStart_TestPkg_DesignSynthesisPkg_id))
                {
                    NOTIFY_TRANSITION_STARTED("5");
                    NOTIFY_STATE_EXITED("ROOT.TC4_SettingInitialConditions");
                    NOTIFY_STATE_ENTERED("ROOT.TC4_Execution");
                    pushNullTransition();
                    rootState_subState = TC4_Execution;
                    rootState_active = TC4_Execution;
                    NOTIFY_TRANSITION_TERMINATED("5");
                    res = eventConsumed;
                }
            
        }
        break;
        // State TC4_Execution
        case TC4_Execution:
        {
            if(IS_EVENT_TYPE_OF(OMNullEventId))
                {
                    NOTIFY_TRANSITION_STARTED("23");
                    popNullTransition();
                    NOTIFY_STATE_EXITED("ROOT.TC4_Execution");
                    //#[ transition 23 
                    printMsg("Test Complete \n");
                    //#]
                    NOTIFY_STATE_ENTERED("ROOT.Ready");
                    rootState_subState = Ready;
                    rootState_active = Ready;
                    NOTIFY_TRANSITION_TERMINATED("23");
                    res = eventConsumed;
                }
            
        }
        break;
        // State TC5_SettingInitialConditions
        case TC5_SettingInitialConditions:
        {
            if(IS_EVENT_TYPE_OF(exStart_TestPkg_DesignSynthesisPkg_id))
                {
                    NOTIFY_TRANSITION_STARTED("6");
                    NOTIFY_STATE_EXITED("ROOT.TC5_SettingInitialConditions");
                    NOTIFY_STATE_ENTERED("ROOT.TC5_Execution");
                    pushNullTransition();
                    rootState_subState = TC5_Execution;
                    rootState_active = TC5_Execution;
                    NOTIFY_TRANSITION_TERMINATED("6");
                    res = eventConsumed;
                }
            
        }
        break;
        // State TC5_Execution
        case TC5_Execution:
        {
            if(IS_EVENT_TYPE_OF(OMNullEventId))
                {
                    NOTIFY_TRANSITION_STARTED("24");
                    popNullTransition();
                    NOTIFY_STATE_EXITED("ROOT.TC5_Execution");
                    //#[ transition 24 
                    printMsg("Test Complete \n");
                    //#]
                    NOTIFY_STATE_ENTERED("ROOT.Ready");
                    rootState_subState = Ready;
                    rootState_active = Ready;
                    NOTIFY_TRANSITION_TERMINATED("24");
                    res = eventConsumed;
                }
            
        }
        break;
        // State TC6_SettingInitialConditions
        case TC6_SettingInitialConditions:
        {
            if(IS_EVENT_TYPE_OF(exStart_TestPkg_DesignSynthesisPkg_id))
                {
                    NOTIFY_TRANSITION_STARTED("7");
                    NOTIFY_STATE_EXITED("ROOT.TC6_SettingInitialConditions");
                    NOTIFY_STATE_ENTERED("ROOT.TC6_Execution");
                    pushNullTransition();
                    rootState_subState = TC6_Execution;
                    rootState_active = TC6_Execution;
                    NOTIFY_TRANSITION_TERMINATED("7");
                    res = eventConsumed;
                }
            
        }
        break;
        // State TC6_Execution
        case TC6_Execution:
        {
            if(IS_EVENT_TYPE_OF(OMNullEventId))
                {
                    NOTIFY_TRANSITION_STARTED("25");
                    popNullTransition();
                    NOTIFY_STATE_EXITED("ROOT.TC6_Execution");
                    //#[ transition 25 
                    printMsg("Test Complete \n");
                    //#]
                    NOTIFY_STATE_ENTERED("ROOT.Ready");
                    rootState_subState = Ready;
                    rootState_active = Ready;
                    NOTIFY_TRANSITION_TERMINATED("25");
                    res = eventConsumed;
                }
            
        }
        break;
        // State TC7_SettingInitialConditions
        case TC7_SettingInitialConditions:
        {
            if(IS_EVENT_TYPE_OF(exStart_TestPkg_DesignSynthesisPkg_id))
                {
                    NOTIFY_TRANSITION_STARTED("8");
                    NOTIFY_STATE_EXITED("ROOT.TC7_SettingInitialConditions");
                    TC7_Execution_entDef();
                    NOTIFY_TRANSITION_TERMINATED("8");
                    res = eventConsumed;
                }
            
        }
        break;
        // State sendaction_21
        case TC7_Execution_sendaction_21:
        {
            if(IS_EVENT_TYPE_OF(OMNullEventId))
                {
                    NOTIFY_TRANSITION_STARTED("ROOT.TC7_Execution.1");
                    popNullTransition();
                    NOTIFY_STATE_EXITED("ROOT.TC7_Execution.ROOT.TC7_Execution.sendaction_21");
                    //#[ transition TC7_Execution.1 
                    printAssert("System should be in mechanical shifting mode");
                    //#]
                    NOTIFY_STATE_ENTERED("ROOT.TC7_Execution.ROOT.TC7_Execution.TC7_Pause1");
                    TC7_Execution_subState = TC7_Pause1;
                    rootState_active = TC7_Pause1;
                    NOTIFY_TRANSITION_TERMINATED("ROOT.TC7_Execution.1");
                    res = eventConsumed;
                }
            
            if(res == eventNotConsumed)
                {
                    res = TC7_Execution_handleEvent();
                }
        }
        break;
        // State sendaction_22
        case TC7_Execution_sendaction_22:
        {
            if(IS_EVENT_TYPE_OF(OMNullEventId))
                {
                    NOTIFY_TRANSITION_STARTED("ROOT.TC7_Execution.3");
                    popNullTransition();
                    NOTIFY_STATE_EXITED("ROOT.TC7_Execution.ROOT.TC7_Execution.sendaction_22");
                    //#[ transition TC7_Execution.3 
                    printAssert("System should be in DI Shifting Mode.");
                     printMsg(" Check the useMechanicalShfting value property and the states of Rider Application and Gear Control");
                    //#]
                    NOTIFY_STATE_ENTERED("ROOT.TC7_Execution.ROOT.TC7_Execution.TC7_Pause2");
                    TC7_Execution_subState = TC7_Pause2;
                    rootState_active = TC7_Pause2;
                    NOTIFY_TRANSITION_TERMINATED("ROOT.TC7_Execution.3");
                    res = eventConsumed;
                }
            
            if(res == eventNotConsumed)
                {
                    res = TC7_Execution_handleEvent();
                }
        }
        break;
        // State TC7_Pause1
        case TC7_Pause1:
        {
            if(IS_EVENT_TYPE_OF(exContinue_TestPkg_DesignSynthesisPkg_id))
                {
                    NOTIFY_TRANSITION_STARTED("ROOT.TC7_Execution.2");
                    NOTIFY_STATE_EXITED("ROOT.TC7_Execution.ROOT.TC7_Execution.TC7_Pause1");
                    NOTIFY_STATE_ENTERED("ROOT.TC7_Execution.ROOT.TC7_Execution.sendaction_22");
                    pushNullTransition();
                    TC7_Execution_subState = TC7_Execution_sendaction_22;
                    rootState_active = TC7_Execution_sendaction_22;
                    //#[ state TC7_Execution.TC7_Execution.sendaction_22.(Entry) 
                    itsRiderApplication->GEN(evDIShifting);
                    //#]
                    NOTIFY_TRANSITION_TERMINATED("ROOT.TC7_Execution.2");
                    res = eventConsumed;
                }
            
            if(res == eventNotConsumed)
                {
                    res = TC7_Execution_handleEvent();
                }
        }
        break;
        // State TC7_Pause2
        case TC7_Pause2:
        {
            if(IS_EVENT_TYPE_OF(exContinue_TestPkg_DesignSynthesisPkg_id))
                {
                    NOTIFY_TRANSITION_STARTED("ROOT.TC7_Execution.4");
                    NOTIFY_STATE_EXITED("ROOT.TC7_Execution.ROOT.TC7_Execution.TC7_Pause2");
                    NOTIFY_STATE_ENTERED("ROOT.TC7_Execution.ROOT.TC7_Execution.terminationstate_34");
                    TC7_Execution_subState = TC7_Execution_terminationstate_34;
                    rootState_active = TC7_Execution_terminationstate_34;
                    NOTIFY_TRANSITION_TERMINATED("ROOT.TC7_Execution.4");
                    res = eventConsumed;
                }
            
            if(res == eventNotConsumed)
                {
                    res = TC7_Execution_handleEvent();
                }
        }
        break;
        // State terminationstate_34
        case TC7_Execution_terminationstate_34:
        {
            res = TC7_Execution_handleEvent();
        }
        break;
        // State TC8_SettingInitialConditions
        case TC8_SettingInitialConditions:
        {
            if(IS_EVENT_TYPE_OF(exStart_TestPkg_DesignSynthesisPkg_id))
                {
                    NOTIFY_TRANSITION_STARTED("9");
                    NOTIFY_STATE_EXITED("ROOT.TC8_SettingInitialConditions");
                    NOTIFY_STATE_ENTERED("ROOT.TC8_Execution");
                    pushNullTransition();
                    rootState_subState = TC8_Execution;
                    rootState_active = TC8_Execution;
                    NOTIFY_TRANSITION_TERMINATED("9");
                    res = eventConsumed;
                }
            
        }
        break;
        // State TC8_Execution
        case TC8_Execution:
        {
            if(IS_EVENT_TYPE_OF(OMNullEventId))
                {
                    NOTIFY_TRANSITION_STARTED("27");
                    popNullTransition();
                    NOTIFY_STATE_EXITED("ROOT.TC8_Execution");
                    //#[ transition 27 
                    printMsg("Test Complete \n");
                    //#]
                    NOTIFY_STATE_ENTERED("ROOT.Ready");
                    rootState_subState = Ready;
                    rootState_active = Ready;
                    NOTIFY_TRANSITION_TERMINATED("27");
                    res = eventConsumed;
                }
            
        }
        break;
        // State TC9_SettingInitialConditions
        case TC9_SettingInitialConditions:
        {
            if(IS_EVENT_TYPE_OF(exStart_TestPkg_DesignSynthesisPkg_id))
                {
                    NOTIFY_TRANSITION_STARTED("10");
                    NOTIFY_STATE_EXITED("ROOT.TC9_SettingInitialConditions");
                    TC9_Execution_entDef();
                    NOTIFY_TRANSITION_TERMINATED("10");
                    res = eventConsumed;
                }
            
        }
        break;
        // State sendaction_21
        case TC9_Execution_sendaction_21:
        {
            if(IS_EVENT_TYPE_OF(OMNullEventId))
                {
                    NOTIFY_TRANSITION_STARTED("ROOT.TC9_Execution.1");
                    popNullTransition();
                    NOTIFY_STATE_EXITED("ROOT.TC9_Execution.ROOT.TC9_Execution.sendaction_21");
                    //#[ transition TC9_Execution.1 
                    printAssert("System should be in DI Mode, with Chain Ring=1 and Cassette Ring = 2");
                    //#]
                    NOTIFY_STATE_ENTERED("ROOT.TC9_Execution.ROOT.TC9_Execution.TC9_Pause1");
                    TC9_Execution_subState = TC9_Pause1;
                    rootState_active = TC9_Pause1;
                    NOTIFY_TRANSITION_TERMINATED("ROOT.TC9_Execution.1");
                    res = eventConsumed;
                }
            
            if(res == eventNotConsumed)
                {
                    res = TC9_Execution_handleEvent();
                }
        }
        break;
        // State TC9_Pause2
        case TC9_Pause2:
        {
            if(IS_EVENT_TYPE_OF(exContinue_TestPkg_DesignSynthesisPkg_id))
                {
                    NOTIFY_TRANSITION_STARTED("ROOT.TC9_Execution.4");
                    NOTIFY_STATE_EXITED("ROOT.TC9_Execution.ROOT.TC9_Execution.TC9_Pause2");
                    NOTIFY_STATE_ENTERED("ROOT.TC9_Execution.ROOT.TC9_Execution.sendaction_51");
                    pushNullTransition();
                    TC9_Execution_subState = sendaction_51;
                    rootState_active = sendaction_51;
                    //#[ state TC9_Execution.TC9_Execution.sendaction_51.(Entry) 
                    DIUpButton->GEN(evPress);
                    //#]
                    NOTIFY_TRANSITION_TERMINATED("ROOT.TC9_Execution.4");
                    res = eventConsumed;
                }
            
            if(res == eventNotConsumed)
                {
                    res = TC9_Execution_handleEvent();
                }
        }
        break;
        // State TC9_Pause1
        case TC9_Pause1:
        {
            if(IS_EVENT_TYPE_OF(exContinue_TestPkg_DesignSynthesisPkg_id))
                {
                    NOTIFY_TRANSITION_STARTED("ROOT.TC9_Execution.2");
                    NOTIFY_STATE_EXITED("ROOT.TC9_Execution.ROOT.TC9_Execution.TC9_Pause1");
                    NOTIFY_STATE_ENTERED("ROOT.TC9_Execution.ROOT.TC9_Execution.sendaction_50");
                    pushNullTransition();
                    TC9_Execution_subState = sendaction_50;
                    rootState_active = sendaction_50;
                    //#[ state TC9_Execution.TC9_Execution.sendaction_50.(Entry) 
                    DIUpButton->GEN(evPress);
                    //#]
                    NOTIFY_TRANSITION_TERMINATED("ROOT.TC9_Execution.2");
                    res = eventConsumed;
                }
            
            if(res == eventNotConsumed)
                {
                    res = TC9_Execution_handleEvent();
                }
        }
        break;
        // State TC9_Pause4
        case TC9_Pause4:
        {
            if(IS_EVENT_TYPE_OF(exContinue_TestPkg_DesignSynthesisPkg_id))
                {
                    NOTIFY_TRANSITION_STARTED("ROOT.TC9_Execution.6");
                    NOTIFY_STATE_EXITED("ROOT.TC9_Execution.ROOT.TC9_Execution.TC9_Pause4");
                    NOTIFY_STATE_ENTERED("ROOT.TC9_Execution.ROOT.TC9_Execution.terminationstate_34");
                    TC9_Execution_subState = TC9_Execution_terminationstate_34;
                    rootState_active = TC9_Execution_terminationstate_34;
                    NOTIFY_TRANSITION_TERMINATED("ROOT.TC9_Execution.6");
                    res = eventConsumed;
                }
            
            if(res == eventNotConsumed)
                {
                    res = TC9_Execution_handleEvent();
                }
        }
        break;
        // State terminationstate_34
        case TC9_Execution_terminationstate_34:
        {
            res = TC9_Execution_handleEvent();
        }
        break;
        // State sendaction_50
        case sendaction_50:
        {
            if(IS_EVENT_TYPE_OF(OMNullEventId))
                {
                    NOTIFY_TRANSITION_STARTED("ROOT.TC9_Execution.3");
                    popNullTransition();
                    NOTIFY_STATE_EXITED("ROOT.TC9_Execution.ROOT.TC9_Execution.sendaction_50");
                    //#[ transition TC9_Execution.3 
                    printAssert("Gearing should be Chain ring = 1, Cassette Ring = 3");
                    //#]
                    NOTIFY_STATE_ENTERED("ROOT.TC9_Execution.ROOT.TC9_Execution.TC9_Pause2");
                    TC9_Execution_subState = TC9_Pause2;
                    rootState_active = TC9_Pause2;
                    NOTIFY_TRANSITION_TERMINATED("ROOT.TC9_Execution.3");
                    res = eventConsumed;
                }
            
            if(res == eventNotConsumed)
                {
                    res = TC9_Execution_handleEvent();
                }
        }
        break;
        // State sendaction_51
        case sendaction_51:
        {
            if(IS_EVENT_TYPE_OF(OMNullEventId))
                {
                    NOTIFY_TRANSITION_STARTED("ROOT.TC9_Execution.8");
                    popNullTransition();
                    NOTIFY_STATE_EXITED("ROOT.TC9_Execution.ROOT.TC9_Execution.sendaction_51");
                    //#[ transition TC9_Execution.8 
                    printAssert("Gearing should be Chain ring = 1, Cassette Ring = 4");
                    //#]
                    NOTIFY_STATE_ENTERED("ROOT.TC9_Execution.ROOT.TC9_Execution.TC9_Pause3");
                    TC9_Execution_subState = TC9_Pause3;
                    rootState_active = TC9_Pause3;
                    NOTIFY_TRANSITION_TERMINATED("ROOT.TC9_Execution.8");
                    res = eventConsumed;
                }
            
            if(res == eventNotConsumed)
                {
                    res = TC9_Execution_handleEvent();
                }
        }
        break;
        // State sendaction_53
        case sendaction_53:
        {
            if(IS_EVENT_TYPE_OF(OMNullEventId))
                {
                    NOTIFY_TRANSITION_STARTED("ROOT.TC9_Execution.5");
                    popNullTransition();
                    NOTIFY_STATE_EXITED("ROOT.TC9_Execution.ROOT.TC9_Execution.sendaction_53");
                    //#[ transition TC9_Execution.5 
                    printAssert("Gearing should be Chain ring = 1, Cassette Ring = 5");
                    //#]
                    NOTIFY_STATE_ENTERED("ROOT.TC9_Execution.ROOT.TC9_Execution.TC9_Pause4");
                    TC9_Execution_subState = TC9_Pause4;
                    rootState_active = TC9_Pause4;
                    NOTIFY_TRANSITION_TERMINATED("ROOT.TC9_Execution.5");
                    res = eventConsumed;
                }
            
            if(res == eventNotConsumed)
                {
                    res = TC9_Execution_handleEvent();
                }
        }
        break;
        // State TC9_Pause3
        case TC9_Pause3:
        {
            if(IS_EVENT_TYPE_OF(exContinue_TestPkg_DesignSynthesisPkg_id))
                {
                    NOTIFY_TRANSITION_STARTED("ROOT.TC9_Execution.7");
                    NOTIFY_STATE_EXITED("ROOT.TC9_Execution.ROOT.TC9_Execution.TC9_Pause3");
                    NOTIFY_STATE_ENTERED("ROOT.TC9_Execution.ROOT.TC9_Execution.sendaction_53");
                    pushNullTransition();
                    TC9_Execution_subState = sendaction_53;
                    rootState_active = sendaction_53;
                    //#[ state TC9_Execution.TC9_Execution.sendaction_53.(Entry) 
                    DIUpButton->GEN(evPress);
                    //#]
                    NOTIFY_TRANSITION_TERMINATED("ROOT.TC9_Execution.7");
                    res = eventConsumed;
                }
            
            if(res == eventNotConsumed)
                {
                    res = TC9_Execution_handleEvent();
                }
        }
        break;
        // State TC10_SettingInitialConditions
        case TC10_SettingInitialConditions:
        {
            if(IS_EVENT_TYPE_OF(exStart_TestPkg_DesignSynthesisPkg_id))
                {
                    NOTIFY_TRANSITION_STARTED("11");
                    NOTIFY_STATE_EXITED("ROOT.TC10_SettingInitialConditions");
                    NOTIFY_STATE_ENTERED("ROOT.TC10_Execution");
                    pushNullTransition();
                    rootState_subState = TC10_Execution;
                    rootState_active = TC10_Execution;
                    NOTIFY_TRANSITION_TERMINATED("11");
                    res = eventConsumed;
                }
            
        }
        break;
        // State TC10_Execution
        case TC10_Execution:
        {
            if(IS_EVENT_TYPE_OF(OMNullEventId))
                {
                    NOTIFY_TRANSITION_STARTED("29");
                    popNullTransition();
                    NOTIFY_STATE_EXITED("ROOT.TC10_Execution");
                    //#[ transition 29 
                    printMsg("Test Complete \n");
                    //#]
                    NOTIFY_STATE_ENTERED("ROOT.Ready");
                    rootState_subState = Ready;
                    rootState_active = Ready;
                    NOTIFY_TRANSITION_TERMINATED("29");
                    res = eventConsumed;
                }
            
        }
        break;
        default:
            break;
    }
    return res;
}

void Pegasus_Test_Architecture::TC9_Execution_entDef() {
    NOTIFY_STATE_ENTERED("ROOT.TC9_Execution");
    pushNullTransition();
    rootState_subState = TC9_Execution;
    NOTIFY_TRANSITION_STARTED("ROOT.TC9_Execution.0");
    NOTIFY_STATE_ENTERED("ROOT.TC9_Execution.ROOT.TC9_Execution.sendaction_21");
    pushNullTransition();
    TC9_Execution_subState = TC9_Execution_sendaction_21;
    rootState_active = TC9_Execution_sendaction_21;
    //#[ state TC9_Execution.TC9_Execution.sendaction_21.(Entry) 
    itsRiderApplication->GEN(evStart);
    //#]
    NOTIFY_TRANSITION_TERMINATED("ROOT.TC9_Execution.0");
}

void Pegasus_Test_Architecture::TC9_Execution_exit() {
    popNullTransition();
    switch (TC9_Execution_subState) {
        // State sendaction_21
        case TC9_Execution_sendaction_21:
        {
            popNullTransition();
            NOTIFY_STATE_EXITED("ROOT.TC9_Execution.ROOT.TC9_Execution.sendaction_21");
        }
        break;
        // State TC9_Pause2
        case TC9_Pause2:
        {
            NOTIFY_STATE_EXITED("ROOT.TC9_Execution.ROOT.TC9_Execution.TC9_Pause2");
        }
        break;
        // State TC9_Pause1
        case TC9_Pause1:
        {
            NOTIFY_STATE_EXITED("ROOT.TC9_Execution.ROOT.TC9_Execution.TC9_Pause1");
        }
        break;
        // State TC9_Pause4
        case TC9_Pause4:
        {
            NOTIFY_STATE_EXITED("ROOT.TC9_Execution.ROOT.TC9_Execution.TC9_Pause4");
        }
        break;
        // State terminationstate_34
        case TC9_Execution_terminationstate_34:
        {
            NOTIFY_STATE_EXITED("ROOT.TC9_Execution.ROOT.TC9_Execution.terminationstate_34");
        }
        break;
        // State sendaction_50
        case sendaction_50:
        {
            popNullTransition();
            NOTIFY_STATE_EXITED("ROOT.TC9_Execution.ROOT.TC9_Execution.sendaction_50");
        }
        break;
        // State sendaction_51
        case sendaction_51:
        {
            popNullTransition();
            NOTIFY_STATE_EXITED("ROOT.TC9_Execution.ROOT.TC9_Execution.sendaction_51");
        }
        break;
        // State sendaction_53
        case sendaction_53:
        {
            popNullTransition();
            NOTIFY_STATE_EXITED("ROOT.TC9_Execution.ROOT.TC9_Execution.sendaction_53");
        }
        break;
        // State TC9_Pause3
        case TC9_Pause3:
        {
            NOTIFY_STATE_EXITED("ROOT.TC9_Execution.ROOT.TC9_Execution.TC9_Pause3");
        }
        break;
        default:
            break;
    }
    TC9_Execution_subState = OMNonState;
    
    NOTIFY_STATE_EXITED("ROOT.TC9_Execution");
}

IOxfReactive::TakeEventStatus Pegasus_Test_Architecture::TC9_Execution_handleEvent() {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    if(IS_EVENT_TYPE_OF(OMNullEventId))
        {
            //## transition 28 
            if(IS_COMPLETED(TC9_Execution)==true)
                {
                    NOTIFY_TRANSITION_STARTED("28");
                    TC9_Execution_exit();
                    //#[ transition 28 
                    printMsg("Test Complete \n");
                    //#]
                    NOTIFY_STATE_ENTERED("ROOT.Ready");
                    rootState_subState = Ready;
                    rootState_active = Ready;
                    NOTIFY_TRANSITION_TERMINATED("28");
                    res = eventConsumed;
                }
        }
    
    return res;
}

void Pegasus_Test_Architecture::TC7_Execution_entDef() {
    NOTIFY_STATE_ENTERED("ROOT.TC7_Execution");
    pushNullTransition();
    rootState_subState = TC7_Execution;
    NOTIFY_TRANSITION_STARTED("ROOT.TC7_Execution.0");
    NOTIFY_STATE_ENTERED("ROOT.TC7_Execution.ROOT.TC7_Execution.sendaction_21");
    pushNullTransition();
    TC7_Execution_subState = TC7_Execution_sendaction_21;
    rootState_active = TC7_Execution_sendaction_21;
    //#[ state TC7_Execution.TC7_Execution.sendaction_21.(Entry) 
    itsRiderApplication->GEN(evStart);
    //#]
    NOTIFY_TRANSITION_TERMINATED("ROOT.TC7_Execution.0");
}

void Pegasus_Test_Architecture::TC7_Execution_exit() {
    popNullTransition();
    switch (TC7_Execution_subState) {
        // State sendaction_21
        case TC7_Execution_sendaction_21:
        {
            popNullTransition();
            NOTIFY_STATE_EXITED("ROOT.TC7_Execution.ROOT.TC7_Execution.sendaction_21");
        }
        break;
        // State sendaction_22
        case TC7_Execution_sendaction_22:
        {
            popNullTransition();
            NOTIFY_STATE_EXITED("ROOT.TC7_Execution.ROOT.TC7_Execution.sendaction_22");
        }
        break;
        // State TC7_Pause1
        case TC7_Pause1:
        {
            NOTIFY_STATE_EXITED("ROOT.TC7_Execution.ROOT.TC7_Execution.TC7_Pause1");
        }
        break;
        // State TC7_Pause2
        case TC7_Pause2:
        {
            NOTIFY_STATE_EXITED("ROOT.TC7_Execution.ROOT.TC7_Execution.TC7_Pause2");
        }
        break;
        // State terminationstate_34
        case TC7_Execution_terminationstate_34:
        {
            NOTIFY_STATE_EXITED("ROOT.TC7_Execution.ROOT.TC7_Execution.terminationstate_34");
        }
        break;
        default:
            break;
    }
    TC7_Execution_subState = OMNonState;
    
    NOTIFY_STATE_EXITED("ROOT.TC7_Execution");
}

IOxfReactive::TakeEventStatus Pegasus_Test_Architecture::TC7_Execution_handleEvent() {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    if(IS_EVENT_TYPE_OF(OMNullEventId))
        {
            //## transition 26 
            if(IS_COMPLETED(TC7_Execution)==true)
                {
                    NOTIFY_TRANSITION_STARTED("26");
                    TC7_Execution_exit();
                    //#[ transition 26 
                    printMsg("Test Complete \n");
                    //#]
                    NOTIFY_STATE_ENTERED("ROOT.Ready");
                    rootState_subState = Ready;
                    rootState_active = Ready;
                    NOTIFY_TRANSITION_TERMINATED("26");
                    res = eventConsumed;
                }
        }
    
    return res;
}

void Pegasus_Test_Architecture::TC3_Execution_entDef() {
    NOTIFY_STATE_ENTERED("ROOT.TC3_Execution");
    pushNullTransition();
    rootState_subState = TC3_Execution;
    NOTIFY_TRANSITION_STARTED("ROOT.TC3_Execution.0");
    NOTIFY_STATE_ENTERED("ROOT.TC3_Execution.ROOT.TC3_Execution.sendaction_21");
    pushNullTransition();
    TC3_Execution_subState = TC3_Execution_sendaction_21;
    rootState_active = TC3_Execution_sendaction_21;
    //#[ state TC3_Execution.TC3_Execution.sendaction_21.(Entry) 
    itsRiderApplication->GEN(evStart);
    //#]
    NOTIFY_TRANSITION_TERMINATED("ROOT.TC3_Execution.0");
}

void Pegasus_Test_Architecture::TC3_Execution_exit() {
    popNullTransition();
    switch (TC3_Execution_subState) {
        // State sendaction_21
        case TC3_Execution_sendaction_21:
        {
            popNullTransition();
            NOTIFY_STATE_EXITED("ROOT.TC3_Execution.ROOT.TC3_Execution.sendaction_21");
        }
        break;
        // State TC3_Pause1
        case TC3_Pause1:
        {
            NOTIFY_STATE_EXITED("ROOT.TC3_Execution.ROOT.TC3_Execution.TC3_Pause1");
        }
        break;
        // State sendaction_22
        case TC3_Execution_sendaction_22:
        {
            popNullTransition();
            NOTIFY_STATE_EXITED("ROOT.TC3_Execution.ROOT.TC3_Execution.sendaction_22");
        }
        break;
        // State TC3_Pause2
        case TC3_Pause2:
        {
            NOTIFY_STATE_EXITED("ROOT.TC3_Execution.ROOT.TC3_Execution.TC3_Pause2");
        }
        break;
        // State sendaction_32
        case sendaction_32:
        {
            popNullTransition();
            NOTIFY_STATE_EXITED("ROOT.TC3_Execution.ROOT.TC3_Execution.sendaction_32");
        }
        break;
        // State TC3_Pause3
        case TC3_Pause3:
        {
            NOTIFY_STATE_EXITED("ROOT.TC3_Execution.ROOT.TC3_Execution.TC3_Pause3");
        }
        break;
        // State terminationstate_34
        case terminationstate_34:
        {
            NOTIFY_STATE_EXITED("ROOT.TC3_Execution.ROOT.TC3_Execution.terminationstate_34");
        }
        break;
        default:
            break;
    }
    TC3_Execution_subState = OMNonState;
    
    NOTIFY_STATE_EXITED("ROOT.TC3_Execution");
}

IOxfReactive::TakeEventStatus Pegasus_Test_Architecture::TC3_Execution_handleEvent() {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    if(IS_EVENT_TYPE_OF(OMNullEventId))
        {
            //## transition 22 
            if(IS_COMPLETED(TC3_Execution)==true)
                {
                    NOTIFY_TRANSITION_STARTED("22");
                    TC3_Execution_exit();
                    //#[ transition 22 
                    printMsg("Test Complete \n");
                    //#]
                    NOTIFY_STATE_ENTERED("ROOT.Ready");
                    rootState_subState = Ready;
                    rootState_active = Ready;
                    NOTIFY_TRANSITION_TERMINATED("22");
                    res = eventConsumed;
                }
        }
    
    return res;
}

void Pegasus_Test_Architecture::TC1_Execution_entDef() {
    NOTIFY_STATE_ENTERED("ROOT.TC1_Execution");
    pushNullTransition();
    rootState_subState = TC1_Execution;
    NOTIFY_TRANSITION_STARTED("ROOT.TC1_Execution.0");
    NOTIFY_STATE_ENTERED("ROOT.TC1_Execution.ROOT.TC1_Execution.sendaction_21");
    pushNullTransition();
    TC1_Execution_subState = sendaction_21;
    rootState_active = sendaction_21;
    //#[ state TC1_Execution.TC1_Execution.sendaction_21.(Entry) 
    itsRiderApplication->GEN(evStart);
    //#]
    NOTIFY_TRANSITION_TERMINATED("ROOT.TC1_Execution.0");
}

void Pegasus_Test_Architecture::TC1_Execution_exit() {
    popNullTransition();
    switch (TC1_Execution_subState) {
        // State sendaction_21
        case sendaction_21:
        {
            popNullTransition();
            NOTIFY_STATE_EXITED("ROOT.TC1_Execution.ROOT.TC1_Execution.sendaction_21");
        }
        break;
        // State sendaction_22
        case sendaction_22:
        {
            popNullTransition();
            NOTIFY_STATE_EXITED("ROOT.TC1_Execution.ROOT.TC1_Execution.sendaction_22");
        }
        break;
        // State sendaction_23
        case sendaction_23:
        {
            popNullTransition();
            NOTIFY_STATE_EXITED("ROOT.TC1_Execution.ROOT.TC1_Execution.sendaction_23");
        }
        break;
        // State TC1_Pause1
        case TC1_Pause1:
        {
            NOTIFY_STATE_EXITED("ROOT.TC1_Execution.ROOT.TC1_Execution.TC1_Pause1");
        }
        break;
        // State TC1_Pause2
        case TC1_Pause2:
        {
            NOTIFY_STATE_EXITED("ROOT.TC1_Execution.ROOT.TC1_Execution.TC1_Pause2");
        }
        break;
        // State TC1_Pause3
        case TC1_Pause3:
        {
            NOTIFY_STATE_EXITED("ROOT.TC1_Execution.ROOT.TC1_Execution.TC1_Pause3");
        }
        break;
        // State terminationstate_27
        case terminationstate_27:
        {
            NOTIFY_STATE_EXITED("ROOT.TC1_Execution.ROOT.TC1_Execution.terminationstate_27");
        }
        break;
        default:
            break;
    }
    TC1_Execution_subState = OMNonState;
    
    NOTIFY_STATE_EXITED("ROOT.TC1_Execution");
}

IOxfReactive::TakeEventStatus Pegasus_Test_Architecture::TC1_Execution_handleEvent() {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    if(IS_EVENT_TYPE_OF(OMNullEventId))
        {
            //## transition 2 
            if(IS_COMPLETED(TC1_Execution)==true)
                {
                    NOTIFY_TRANSITION_STARTED("2");
                    TC1_Execution_exit();
                    //#[ transition 2 
                    printMsg("Test Complete \n");
                    //#]
                    NOTIFY_STATE_ENTERED("ROOT.Ready");
                    rootState_subState = Ready;
                    rootState_active = Ready;
                    NOTIFY_TRANSITION_TERMINATED("2");
                    res = eventConsumed;
                }
        }
    
    return res;
}

IOxfReactive::TakeEventStatus Pegasus_Test_Architecture::Ready_handleEvent() {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    if(IS_EVENT_TYPE_OF(exTest10_TestPkg_DesignSynthesisPkg_id))
        {
            NOTIFY_TRANSITION_STARTED("20");
            NOTIFY_STATE_EXITED("ROOT.Ready");
            NOTIFY_STATE_ENTERED("ROOT.TC10_SettingInitialConditions");
            rootState_subState = TC10_SettingInitialConditions;
            rootState_active = TC10_SettingInitialConditions;
            NOTIFY_TRANSITION_TERMINATED("20");
            res = eventConsumed;
        }
    else if(IS_EVENT_TYPE_OF(exTest3_TestPkg_DesignSynthesisPkg_id))
        {
            NOTIFY_TRANSITION_STARTED("13");
            NOTIFY_STATE_EXITED("ROOT.Ready");
            NOTIFY_STATE_ENTERED("ROOT.TC3_SettingInitialConditions");
            rootState_subState = TC3_SettingInitialConditions;
            rootState_active = TC3_SettingInitialConditions;
            //#[ state TC3_SettingInitialConditions.(Entry) 
            itsRiderApplication->useMechanicalShifting = true;
            itsRiderApplication->chainRingNumber = 3;
            printMsg("Enter event exStart to begin the test execution");
            //#]
            NOTIFY_TRANSITION_TERMINATED("13");
            res = eventConsumed;
        }
    else if(IS_EVENT_TYPE_OF(exTest4_TestPkg_DesignSynthesisPkg_id))
        {
            NOTIFY_TRANSITION_STARTED("14");
            NOTIFY_STATE_EXITED("ROOT.Ready");
            NOTIFY_STATE_ENTERED("ROOT.TC4_SettingInitialConditions");
            rootState_subState = TC4_SettingInitialConditions;
            rootState_active = TC4_SettingInitialConditions;
            NOTIFY_TRANSITION_TERMINATED("14");
            res = eventConsumed;
        }
    else if(IS_EVENT_TYPE_OF(exTest5_TestPkg_DesignSynthesisPkg_id))
        {
            NOTIFY_TRANSITION_STARTED("15");
            NOTIFY_STATE_EXITED("ROOT.Ready");
            NOTIFY_STATE_ENTERED("ROOT.TC5_SettingInitialConditions");
            rootState_subState = TC5_SettingInitialConditions;
            rootState_active = TC5_SettingInitialConditions;
            NOTIFY_TRANSITION_TERMINATED("15");
            res = eventConsumed;
        }
    else if(IS_EVENT_TYPE_OF(exTest6_TestPkg_DesignSynthesisPkg_id))
        {
            NOTIFY_TRANSITION_STARTED("16");
            NOTIFY_STATE_EXITED("ROOT.Ready");
            NOTIFY_STATE_ENTERED("ROOT.TC6_SettingInitialConditions");
            rootState_subState = TC6_SettingInitialConditions;
            rootState_active = TC6_SettingInitialConditions;
            NOTIFY_TRANSITION_TERMINATED("16");
            res = eventConsumed;
        }
    else if(IS_EVENT_TYPE_OF(exTest7_TestPkg_DesignSynthesisPkg_id))
        {
            NOTIFY_TRANSITION_STARTED("17");
            NOTIFY_STATE_EXITED("ROOT.Ready");
            NOTIFY_STATE_ENTERED("ROOT.TC7_SettingInitialConditions");
            rootState_subState = TC7_SettingInitialConditions;
            rootState_active = TC7_SettingInitialConditions;
            //#[ state TC7_SettingInitialConditions.(Entry) 
            itsRiderApplication->useMechanicalShifting = true;
            itsRiderApplication->chainRingNumber = 1;
            printMsg("Enter event exStart to begin the test execution");
            //#]
            NOTIFY_TRANSITION_TERMINATED("17");
            res = eventConsumed;
        }
    else if(IS_EVENT_TYPE_OF(exTest8_TestPkg_DesignSynthesisPkg_id))
        {
            NOTIFY_TRANSITION_STARTED("18");
            NOTIFY_STATE_EXITED("ROOT.Ready");
            NOTIFY_STATE_ENTERED("ROOT.TC8_SettingInitialConditions");
            rootState_subState = TC8_SettingInitialConditions;
            rootState_active = TC8_SettingInitialConditions;
            NOTIFY_TRANSITION_TERMINATED("18");
            res = eventConsumed;
        }
    else if(IS_EVENT_TYPE_OF(exTest9_TestPkg_DesignSynthesisPkg_id))
        {
            NOTIFY_TRANSITION_STARTED("19");
            NOTIFY_STATE_EXITED("ROOT.Ready");
            NOTIFY_STATE_ENTERED("ROOT.TC9_SettingInitialConditions");
            rootState_subState = TC9_SettingInitialConditions;
            rootState_active = TC9_SettingInitialConditions;
            //#[ state TC9_SettingInitialConditions.(Entry) 
            itsRiderApplication->useMechanicalShifting = false;
            itsRiderApplication->chainRingNumber = 1;
            itsRiderApplication->cassetteRingNumber = 2;
            printMsg("Enter event exStart to begin the test execution");
            //#]
            NOTIFY_TRANSITION_TERMINATED("19");
            res = eventConsumed;
        }
    else if(IS_EVENT_TYPE_OF(exTest1_TestPkg_DesignSynthesisPkg_id))
        {
            NOTIFY_TRANSITION_STARTED("0");
            NOTIFY_STATE_EXITED("ROOT.Ready");
            NOTIFY_STATE_ENTERED("ROOT.TC1_SettingInitialConditions");
            rootState_subState = TC1_SettingInitialConditions;
            rootState_active = TC1_SettingInitialConditions;
            //#[ state TC1_SettingInitialConditions.(Entry) 
            itsRiderApplication->setUseMechanicalShifting(true);
            itsRiderApplication->setChainRingNumber(1);
            printMsg("Enter event exStart to begin the test execution");
            //#]
            NOTIFY_TRANSITION_TERMINATED("0");
            res = eventConsumed;
        }
    else if(IS_EVENT_TYPE_OF(exTest2_TestPkg_DesignSynthesisPkg_id))
        {
            NOTIFY_TRANSITION_STARTED("12");
            NOTIFY_STATE_EXITED("ROOT.Ready");
            NOTIFY_STATE_ENTERED("ROOT.TC2_SettingInitialConditions");
            rootState_subState = TC2_SettingInitialConditions;
            rootState_active = TC2_SettingInitialConditions;
            NOTIFY_TRANSITION_TERMINATED("12");
            res = eventConsumed;
        }
    
    return res;
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedPegasus_Test_Architecture::serializeRelations(AOMSRelations* aomsRelations) const {
    aomsRelations->addRelation("itsMainComputingPlatform", true, true);
    aomsRelations->ADD_ITEM(&myReal->itsMainComputingPlatform);
    aomsRelations->addRelation("itsRiderInteraction", true, true);
    aomsRelations->ADD_ITEM(&myReal->itsRiderInteraction);
    aomsRelations->addRelation("itsRiderApplication", false, true);
    if(myReal->itsRiderApplication)
        {
            aomsRelations->ADD_ITEM(myReal->itsRiderApplication);
        }
    aomsRelations->addRelation("itsGearControl", false, true);
    if(myReal->itsGearControl)
        {
            aomsRelations->ADD_ITEM(myReal->itsGearControl);
        }
    aomsRelations->addRelation("leftShiftLever", false, true);
    if(myReal->leftShiftLever)
        {
            aomsRelations->ADD_ITEM(myReal->leftShiftLever);
        }
    aomsRelations->addRelation("rightShiftLever", false, true);
    if(myReal->rightShiftLever)
        {
            aomsRelations->ADD_ITEM(myReal->rightShiftLever);
        }
    aomsRelations->addRelation("DIUpButton", false, true);
    if(myReal->DIUpButton)
        {
            aomsRelations->ADD_ITEM(myReal->DIUpButton);
        }
    aomsRelations->addRelation("DIDownButton", false, true);
    if(myReal->DIDownButton)
        {
            aomsRelations->ADD_ITEM(myReal->DIDownButton);
        }
}

void OMAnimatedPegasus_Test_Architecture::rootState_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT");
    switch (myReal->rootState_subState) {
        case Pegasus_Test_Architecture::Ready:
        {
            Ready_serializeStates(aomsState);
        }
        break;
        case Pegasus_Test_Architecture::TC1_SettingInitialConditions:
        {
            TC1_SettingInitialConditions_serializeStates(aomsState);
        }
        break;
        case Pegasus_Test_Architecture::TC1_Execution:
        {
            TC1_Execution_serializeStates(aomsState);
        }
        break;
        case Pegasus_Test_Architecture::TC2_SettingInitialConditions:
        {
            TC2_SettingInitialConditions_serializeStates(aomsState);
        }
        break;
        case Pegasus_Test_Architecture::TC2_Execution:
        {
            TC2_Execution_serializeStates(aomsState);
        }
        break;
        case Pegasus_Test_Architecture::TC3_SettingInitialConditions:
        {
            TC3_SettingInitialConditions_serializeStates(aomsState);
        }
        break;
        case Pegasus_Test_Architecture::TC3_Execution:
        {
            TC3_Execution_serializeStates(aomsState);
        }
        break;
        case Pegasus_Test_Architecture::TC4_SettingInitialConditions:
        {
            TC4_SettingInitialConditions_serializeStates(aomsState);
        }
        break;
        case Pegasus_Test_Architecture::TC4_Execution:
        {
            TC4_Execution_serializeStates(aomsState);
        }
        break;
        case Pegasus_Test_Architecture::TC5_SettingInitialConditions:
        {
            TC5_SettingInitialConditions_serializeStates(aomsState);
        }
        break;
        case Pegasus_Test_Architecture::TC5_Execution:
        {
            TC5_Execution_serializeStates(aomsState);
        }
        break;
        case Pegasus_Test_Architecture::TC6_SettingInitialConditions:
        {
            TC6_SettingInitialConditions_serializeStates(aomsState);
        }
        break;
        case Pegasus_Test_Architecture::TC6_Execution:
        {
            TC6_Execution_serializeStates(aomsState);
        }
        break;
        case Pegasus_Test_Architecture::TC7_SettingInitialConditions:
        {
            TC7_SettingInitialConditions_serializeStates(aomsState);
        }
        break;
        case Pegasus_Test_Architecture::TC7_Execution:
        {
            TC7_Execution_serializeStates(aomsState);
        }
        break;
        case Pegasus_Test_Architecture::TC8_SettingInitialConditions:
        {
            TC8_SettingInitialConditions_serializeStates(aomsState);
        }
        break;
        case Pegasus_Test_Architecture::TC8_Execution:
        {
            TC8_Execution_serializeStates(aomsState);
        }
        break;
        case Pegasus_Test_Architecture::TC9_SettingInitialConditions:
        {
            TC9_SettingInitialConditions_serializeStates(aomsState);
        }
        break;
        case Pegasus_Test_Architecture::TC9_Execution:
        {
            TC9_Execution_serializeStates(aomsState);
        }
        break;
        case Pegasus_Test_Architecture::TC10_SettingInitialConditions:
        {
            TC10_SettingInitialConditions_serializeStates(aomsState);
        }
        break;
        case Pegasus_Test_Architecture::TC10_Execution:
        {
            TC10_Execution_serializeStates(aomsState);
        }
        break;
        default:
            break;
    }
}

void OMAnimatedPegasus_Test_Architecture::TC9_SettingInitialConditions_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.TC9_SettingInitialConditions");
}

void OMAnimatedPegasus_Test_Architecture::TC9_Execution_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.TC9_Execution");
    switch (myReal->TC9_Execution_subState) {
        case Pegasus_Test_Architecture::TC9_Execution_sendaction_21:
        {
            TC9_Execution_sendaction_21_serializeStates(aomsState);
        }
        break;
        case Pegasus_Test_Architecture::TC9_Pause2:
        {
            TC9_Pause2_serializeStates(aomsState);
        }
        break;
        case Pegasus_Test_Architecture::TC9_Pause1:
        {
            TC9_Pause1_serializeStates(aomsState);
        }
        break;
        case Pegasus_Test_Architecture::TC9_Pause4:
        {
            TC9_Pause4_serializeStates(aomsState);
        }
        break;
        case Pegasus_Test_Architecture::TC9_Execution_terminationstate_34:
        {
            TC9_Execution_terminationstate_34_serializeStates(aomsState);
        }
        break;
        case Pegasus_Test_Architecture::sendaction_50:
        {
            sendaction_50_serializeStates(aomsState);
        }
        break;
        case Pegasus_Test_Architecture::sendaction_51:
        {
            sendaction_51_serializeStates(aomsState);
        }
        break;
        case Pegasus_Test_Architecture::sendaction_53:
        {
            sendaction_53_serializeStates(aomsState);
        }
        break;
        case Pegasus_Test_Architecture::TC9_Pause3:
        {
            TC9_Pause3_serializeStates(aomsState);
        }
        break;
        default:
            break;
    }
}

void OMAnimatedPegasus_Test_Architecture::TC9_Execution_terminationstate_34_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.TC9_Execution.ROOT.TC9_Execution.terminationstate_34");
}

void OMAnimatedPegasus_Test_Architecture::TC9_Pause4_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.TC9_Execution.ROOT.TC9_Execution.TC9_Pause4");
}

void OMAnimatedPegasus_Test_Architecture::TC9_Pause3_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.TC9_Execution.ROOT.TC9_Execution.TC9_Pause3");
}

void OMAnimatedPegasus_Test_Architecture::TC9_Pause2_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.TC9_Execution.ROOT.TC9_Execution.TC9_Pause2");
}

void OMAnimatedPegasus_Test_Architecture::TC9_Pause1_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.TC9_Execution.ROOT.TC9_Execution.TC9_Pause1");
}

void OMAnimatedPegasus_Test_Architecture::sendaction_53_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.TC9_Execution.ROOT.TC9_Execution.sendaction_53");
}

void OMAnimatedPegasus_Test_Architecture::sendaction_51_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.TC9_Execution.ROOT.TC9_Execution.sendaction_51");
}

void OMAnimatedPegasus_Test_Architecture::sendaction_50_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.TC9_Execution.ROOT.TC9_Execution.sendaction_50");
}

void OMAnimatedPegasus_Test_Architecture::TC9_Execution_sendaction_21_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.TC9_Execution.ROOT.TC9_Execution.sendaction_21");
}

void OMAnimatedPegasus_Test_Architecture::TC8_SettingInitialConditions_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.TC8_SettingInitialConditions");
}

void OMAnimatedPegasus_Test_Architecture::TC8_Execution_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.TC8_Execution");
}

void OMAnimatedPegasus_Test_Architecture::TC7_SettingInitialConditions_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.TC7_SettingInitialConditions");
}

void OMAnimatedPegasus_Test_Architecture::TC7_Execution_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.TC7_Execution");
    switch (myReal->TC7_Execution_subState) {
        case Pegasus_Test_Architecture::TC7_Execution_sendaction_21:
        {
            TC7_Execution_sendaction_21_serializeStates(aomsState);
        }
        break;
        case Pegasus_Test_Architecture::TC7_Execution_sendaction_22:
        {
            TC7_Execution_sendaction_22_serializeStates(aomsState);
        }
        break;
        case Pegasus_Test_Architecture::TC7_Pause1:
        {
            TC7_Pause1_serializeStates(aomsState);
        }
        break;
        case Pegasus_Test_Architecture::TC7_Pause2:
        {
            TC7_Pause2_serializeStates(aomsState);
        }
        break;
        case Pegasus_Test_Architecture::TC7_Execution_terminationstate_34:
        {
            TC7_Execution_terminationstate_34_serializeStates(aomsState);
        }
        break;
        default:
            break;
    }
}

void OMAnimatedPegasus_Test_Architecture::TC7_Execution_terminationstate_34_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.TC7_Execution.ROOT.TC7_Execution.terminationstate_34");
}

void OMAnimatedPegasus_Test_Architecture::TC7_Pause2_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.TC7_Execution.ROOT.TC7_Execution.TC7_Pause2");
}

void OMAnimatedPegasus_Test_Architecture::TC7_Pause1_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.TC7_Execution.ROOT.TC7_Execution.TC7_Pause1");
}

void OMAnimatedPegasus_Test_Architecture::TC7_Execution_sendaction_22_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.TC7_Execution.ROOT.TC7_Execution.sendaction_22");
}

void OMAnimatedPegasus_Test_Architecture::TC7_Execution_sendaction_21_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.TC7_Execution.ROOT.TC7_Execution.sendaction_21");
}

void OMAnimatedPegasus_Test_Architecture::TC6_SettingInitialConditions_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.TC6_SettingInitialConditions");
}

void OMAnimatedPegasus_Test_Architecture::TC6_Execution_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.TC6_Execution");
}

void OMAnimatedPegasus_Test_Architecture::TC5_SettingInitialConditions_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.TC5_SettingInitialConditions");
}

void OMAnimatedPegasus_Test_Architecture::TC5_Execution_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.TC5_Execution");
}

void OMAnimatedPegasus_Test_Architecture::TC4_SettingInitialConditions_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.TC4_SettingInitialConditions");
}

void OMAnimatedPegasus_Test_Architecture::TC4_Execution_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.TC4_Execution");
}

void OMAnimatedPegasus_Test_Architecture::TC3_SettingInitialConditions_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.TC3_SettingInitialConditions");
}

void OMAnimatedPegasus_Test_Architecture::TC3_Execution_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.TC3_Execution");
    switch (myReal->TC3_Execution_subState) {
        case Pegasus_Test_Architecture::TC3_Execution_sendaction_21:
        {
            TC3_Execution_sendaction_21_serializeStates(aomsState);
        }
        break;
        case Pegasus_Test_Architecture::TC3_Pause1:
        {
            TC3_Pause1_serializeStates(aomsState);
        }
        break;
        case Pegasus_Test_Architecture::TC3_Execution_sendaction_22:
        {
            TC3_Execution_sendaction_22_serializeStates(aomsState);
        }
        break;
        case Pegasus_Test_Architecture::TC3_Pause2:
        {
            TC3_Pause2_serializeStates(aomsState);
        }
        break;
        case Pegasus_Test_Architecture::sendaction_32:
        {
            sendaction_32_serializeStates(aomsState);
        }
        break;
        case Pegasus_Test_Architecture::TC3_Pause3:
        {
            TC3_Pause3_serializeStates(aomsState);
        }
        break;
        case Pegasus_Test_Architecture::terminationstate_34:
        {
            terminationstate_34_serializeStates(aomsState);
        }
        break;
        default:
            break;
    }
}

void OMAnimatedPegasus_Test_Architecture::terminationstate_34_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.TC3_Execution.ROOT.TC3_Execution.terminationstate_34");
}

void OMAnimatedPegasus_Test_Architecture::TC3_Pause3_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.TC3_Execution.ROOT.TC3_Execution.TC3_Pause3");
}

void OMAnimatedPegasus_Test_Architecture::TC3_Pause2_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.TC3_Execution.ROOT.TC3_Execution.TC3_Pause2");
}

void OMAnimatedPegasus_Test_Architecture::TC3_Pause1_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.TC3_Execution.ROOT.TC3_Execution.TC3_Pause1");
}

void OMAnimatedPegasus_Test_Architecture::sendaction_32_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.TC3_Execution.ROOT.TC3_Execution.sendaction_32");
}

void OMAnimatedPegasus_Test_Architecture::TC3_Execution_sendaction_22_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.TC3_Execution.ROOT.TC3_Execution.sendaction_22");
}

void OMAnimatedPegasus_Test_Architecture::TC3_Execution_sendaction_21_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.TC3_Execution.ROOT.TC3_Execution.sendaction_21");
}

void OMAnimatedPegasus_Test_Architecture::TC2_SettingInitialConditions_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.TC2_SettingInitialConditions");
}

void OMAnimatedPegasus_Test_Architecture::TC2_Execution_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.TC2_Execution");
}

void OMAnimatedPegasus_Test_Architecture::TC1_SettingInitialConditions_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.TC1_SettingInitialConditions");
}

void OMAnimatedPegasus_Test_Architecture::TC1_Execution_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.TC1_Execution");
    switch (myReal->TC1_Execution_subState) {
        case Pegasus_Test_Architecture::sendaction_21:
        {
            sendaction_21_serializeStates(aomsState);
        }
        break;
        case Pegasus_Test_Architecture::sendaction_22:
        {
            sendaction_22_serializeStates(aomsState);
        }
        break;
        case Pegasus_Test_Architecture::sendaction_23:
        {
            sendaction_23_serializeStates(aomsState);
        }
        break;
        case Pegasus_Test_Architecture::TC1_Pause1:
        {
            TC1_Pause1_serializeStates(aomsState);
        }
        break;
        case Pegasus_Test_Architecture::TC1_Pause2:
        {
            TC1_Pause2_serializeStates(aomsState);
        }
        break;
        case Pegasus_Test_Architecture::TC1_Pause3:
        {
            TC1_Pause3_serializeStates(aomsState);
        }
        break;
        case Pegasus_Test_Architecture::terminationstate_27:
        {
            terminationstate_27_serializeStates(aomsState);
        }
        break;
        default:
            break;
    }
}

void OMAnimatedPegasus_Test_Architecture::terminationstate_27_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.TC1_Execution.ROOT.TC1_Execution.terminationstate_27");
}

void OMAnimatedPegasus_Test_Architecture::TC1_Pause3_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.TC1_Execution.ROOT.TC1_Execution.TC1_Pause3");
}

void OMAnimatedPegasus_Test_Architecture::TC1_Pause2_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.TC1_Execution.ROOT.TC1_Execution.TC1_Pause2");
}

void OMAnimatedPegasus_Test_Architecture::TC1_Pause1_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.TC1_Execution.ROOT.TC1_Execution.TC1_Pause1");
}

void OMAnimatedPegasus_Test_Architecture::sendaction_23_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.TC1_Execution.ROOT.TC1_Execution.sendaction_23");
}

void OMAnimatedPegasus_Test_Architecture::sendaction_22_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.TC1_Execution.ROOT.TC1_Execution.sendaction_22");
}

void OMAnimatedPegasus_Test_Architecture::sendaction_21_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.TC1_Execution.ROOT.TC1_Execution.sendaction_21");
}

void OMAnimatedPegasus_Test_Architecture::TC10_SettingInitialConditions_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.TC10_SettingInitialConditions");
}

void OMAnimatedPegasus_Test_Architecture::TC10_Execution_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.TC10_Execution");
}

void OMAnimatedPegasus_Test_Architecture::Ready_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.Ready");
}
//#]

IMPLEMENT_REACTIVE_META_P(Pegasus_Test_Architecture, DesignSynthesisPkg_TestPkg, DesignSynthesisPkg::TestPkg, false, OMAnimatedPegasus_Test_Architecture)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: GearShiftingTestComponent/GSC_Test_Animation/Pegasus_Test_Architecture.cpp
*********************************************************************/
