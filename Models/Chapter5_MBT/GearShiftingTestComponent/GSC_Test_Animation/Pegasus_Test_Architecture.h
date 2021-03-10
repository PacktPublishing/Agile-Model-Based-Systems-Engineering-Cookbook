/*********************************************************************
	Rhapsody	: 9.0 
	Login		: Bruce
	Component	: GearShiftingTestComponent 
	Configuration 	: GSC_Test_Animation
	Model Element	: Pegasus_Test_Architecture
//!	Generated Date	: Sun, 29, Nov 2020  
	File Path	: GearShiftingTestComponent/GSC_Test_Animation/Pegasus_Test_Architecture.h
*********************************************************************/

#ifndef Pegasus_Test_Architecture_H
#define Pegasus_Test_Architecture_H

//## auto_generated
#include <oxf/oxf.h>
//## auto_generated
#include <../Profiles/SysML/SIDefinitions.h>
//## auto_generated
#include <aom/aom.h>
//## auto_generated
#include "TestPkg.h"
//## auto_generated
#include <oxf/omthread.h>
//## auto_generated
#include <oxf/omreactive.h>
//## auto_generated
#include <oxf/state.h>
//## auto_generated
#include <oxf/event.h>
//## classInstance itsMainComputingPlatform
#include "MainComputingPlatform.h"
//## classInstance itsRiderInteraction
#include "RiderInteraction.h"
//## link DIDownButton
class DIButton;

//## link itsGearControl
class GearControl;

//## link itsRiderApplication
class RiderApplication;

//## link leftShiftLever
class ShiftLever;

//## package DesignSynthesisPkg::TestPkg

//## class Pegasus_Test_Architecture
class Pegasus_Test_Architecture : public OMReactive {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedPegasus_Test_Architecture;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    Pegasus_Test_Architecture(IOxfActive* theActiveContext = 0);
    
    //## auto_generated
    virtual ~Pegasus_Test_Architecture();
    
    ////    Operations    ////
    
    //## operation printAssert(RhpString)
    virtual void printAssert(const RhpString& s);
    
    //## operation printMsg(RhpString)
    virtual void printMsg(const RhpString& s);
    
    ////    Additional operations    ////
    
    //## auto_generated
    DIButton* getDIDownButton() const;
    
    //## auto_generated
    void setDIDownButton(DIButton* p_DIButton);
    
    //## auto_generated
    DIButton* getDIUpButton() const;
    
    //## auto_generated
    void setDIUpButton(DIButton* p_DIButton);
    
    //## auto_generated
    GearControl* getItsGearControl() const;
    
    //## auto_generated
    void setItsGearControl(GearControl* p_GearControl);
    
    //## auto_generated
    MainComputingPlatform* getItsMainComputingPlatform() const;
    
    //## auto_generated
    RiderApplication* getItsRiderApplication() const;
    
    //## auto_generated
    void setItsRiderApplication(RiderApplication* p_RiderApplication);
    
    //## auto_generated
    RiderInteraction* getItsRiderInteraction() const;
    
    //## auto_generated
    ShiftLever* getLeftShiftLever() const;
    
    //## auto_generated
    void setLeftShiftLever(ShiftLever* p_ShiftLever);
    
    //## auto_generated
    ShiftLever* getRightShiftLever() const;
    
    //## auto_generated
    void setRightShiftLever(ShiftLever* p_ShiftLever);
    
    //## auto_generated
    virtual bool startBehavior();

protected :

    //## auto_generated
    void initRelations();
    
    //## auto_generated
    void initStatechart();
    
    //## auto_generated
    void cleanUpRelations();
    
    ////    Relations and components    ////
    
    DIButton* DIDownButton;		//## link DIDownButton
    
    DIButton* DIUpButton;		//## link DIUpButton
    
    GearControl* itsGearControl;		//## link itsGearControl
    
    MainComputingPlatform itsMainComputingPlatform;		//## classInstance itsMainComputingPlatform
    
    RiderApplication* itsRiderApplication;		//## link itsRiderApplication
    
    RiderInteraction itsRiderInteraction;		//## classInstance itsRiderInteraction
    
    ShiftLever* leftShiftLever;		//## link leftShiftLever
    
    ShiftLever* rightShiftLever;		//## link rightShiftLever
    
    ////    Framework operations    ////

public :

    //## auto_generated
    void setActiveContext(IOxfActive* theActiveContext, bool activeInstance);
    
    // rootState:
    //## statechart_method
    inline bool rootState_IN() const;
    
    //## statechart_method
    virtual void rootState_entDef();
    
    //## statechart_method
    virtual IOxfReactive::TakeEventStatus rootState_processEvent();
    
    // TC9_SettingInitialConditions:
    //## statechart_method
    inline bool TC9_SettingInitialConditions_IN() const;
    
    // TC9_Execution:
    //## statechart_method
    inline bool TC9_Execution_IN() const;
    
    //## statechart_method
    inline bool TC9_Execution_isCompleted();
    
    //## statechart_method
    void TC9_Execution_entDef();
    
    //## statechart_method
    void TC9_Execution_exit();
    
    //## statechart_method
    IOxfReactive::TakeEventStatus TC9_Execution_handleEvent();
    
    // TC9_Execution_terminationstate_34:
    //## statechart_method
    inline bool TC9_Execution_terminationstate_34_IN() const;
    
    // TC9_Pause4:
    //## statechart_method
    inline bool TC9_Pause4_IN() const;
    
    // TC9_Pause3:
    //## statechart_method
    inline bool TC9_Pause3_IN() const;
    
    // TC9_Pause2:
    //## statechart_method
    inline bool TC9_Pause2_IN() const;
    
    // TC9_Pause1:
    //## statechart_method
    inline bool TC9_Pause1_IN() const;
    
    // sendaction_53:
    //## statechart_method
    inline bool sendaction_53_IN() const;
    
    // sendaction_51:
    //## statechart_method
    inline bool sendaction_51_IN() const;
    
    // sendaction_50:
    //## statechart_method
    inline bool sendaction_50_IN() const;
    
    // TC9_Execution_sendaction_21:
    //## statechart_method
    inline bool TC9_Execution_sendaction_21_IN() const;
    
    // TC8_SettingInitialConditions:
    //## statechart_method
    inline bool TC8_SettingInitialConditions_IN() const;
    
    // TC8_Execution:
    //## statechart_method
    inline bool TC8_Execution_IN() const;
    
    // TC7_SettingInitialConditions:
    //## statechart_method
    inline bool TC7_SettingInitialConditions_IN() const;
    
    // TC7_Execution:
    //## statechart_method
    inline bool TC7_Execution_IN() const;
    
    //## statechart_method
    inline bool TC7_Execution_isCompleted();
    
    //## statechart_method
    void TC7_Execution_entDef();
    
    //## statechart_method
    void TC7_Execution_exit();
    
    //## statechart_method
    IOxfReactive::TakeEventStatus TC7_Execution_handleEvent();
    
    // TC7_Execution_terminationstate_34:
    //## statechart_method
    inline bool TC7_Execution_terminationstate_34_IN() const;
    
    // TC7_Pause2:
    //## statechart_method
    inline bool TC7_Pause2_IN() const;
    
    // TC7_Pause1:
    //## statechart_method
    inline bool TC7_Pause1_IN() const;
    
    // TC7_Execution_sendaction_22:
    //## statechart_method
    inline bool TC7_Execution_sendaction_22_IN() const;
    
    // TC7_Execution_sendaction_21:
    //## statechart_method
    inline bool TC7_Execution_sendaction_21_IN() const;
    
    // TC6_SettingInitialConditions:
    //## statechart_method
    inline bool TC6_SettingInitialConditions_IN() const;
    
    // TC6_Execution:
    //## statechart_method
    inline bool TC6_Execution_IN() const;
    
    // TC5_SettingInitialConditions:
    //## statechart_method
    inline bool TC5_SettingInitialConditions_IN() const;
    
    // TC5_Execution:
    //## statechart_method
    inline bool TC5_Execution_IN() const;
    
    // TC4_SettingInitialConditions:
    //## statechart_method
    inline bool TC4_SettingInitialConditions_IN() const;
    
    // TC4_Execution:
    //## statechart_method
    inline bool TC4_Execution_IN() const;
    
    // TC3_SettingInitialConditions:
    //## statechart_method
    inline bool TC3_SettingInitialConditions_IN() const;
    
    // TC3_Execution:
    //## statechart_method
    inline bool TC3_Execution_IN() const;
    
    //## statechart_method
    inline bool TC3_Execution_isCompleted();
    
    //## statechart_method
    void TC3_Execution_entDef();
    
    //## statechart_method
    void TC3_Execution_exit();
    
    //## statechart_method
    IOxfReactive::TakeEventStatus TC3_Execution_handleEvent();
    
    // terminationstate_34:
    //## statechart_method
    inline bool terminationstate_34_IN() const;
    
    // TC3_Pause3:
    //## statechart_method
    inline bool TC3_Pause3_IN() const;
    
    // TC3_Pause2:
    //## statechart_method
    inline bool TC3_Pause2_IN() const;
    
    // TC3_Pause1:
    //## statechart_method
    inline bool TC3_Pause1_IN() const;
    
    // sendaction_32:
    //## statechart_method
    inline bool sendaction_32_IN() const;
    
    // TC3_Execution_sendaction_22:
    //## statechart_method
    inline bool TC3_Execution_sendaction_22_IN() const;
    
    // TC3_Execution_sendaction_21:
    //## statechart_method
    inline bool TC3_Execution_sendaction_21_IN() const;
    
    // TC2_SettingInitialConditions:
    //## statechart_method
    inline bool TC2_SettingInitialConditions_IN() const;
    
    // TC2_Execution:
    //## statechart_method
    inline bool TC2_Execution_IN() const;
    
    // TC1_SettingInitialConditions:
    //## statechart_method
    inline bool TC1_SettingInitialConditions_IN() const;
    
    // TC1_Execution:
    //## statechart_method
    inline bool TC1_Execution_IN() const;
    
    //## statechart_method
    inline bool TC1_Execution_isCompleted();
    
    //## statechart_method
    void TC1_Execution_entDef();
    
    //## statechart_method
    void TC1_Execution_exit();
    
    //## statechart_method
    IOxfReactive::TakeEventStatus TC1_Execution_handleEvent();
    
    // terminationstate_27:
    //## statechart_method
    inline bool terminationstate_27_IN() const;
    
    // TC1_Pause3:
    //## statechart_method
    inline bool TC1_Pause3_IN() const;
    
    // TC1_Pause2:
    //## statechart_method
    inline bool TC1_Pause2_IN() const;
    
    // TC1_Pause1:
    //## statechart_method
    inline bool TC1_Pause1_IN() const;
    
    // sendaction_23:
    //## statechart_method
    inline bool sendaction_23_IN() const;
    
    // sendaction_22:
    //## statechart_method
    inline bool sendaction_22_IN() const;
    
    // sendaction_21:
    //## statechart_method
    inline bool sendaction_21_IN() const;
    
    // TC10_SettingInitialConditions:
    //## statechart_method
    inline bool TC10_SettingInitialConditions_IN() const;
    
    // TC10_Execution:
    //## statechart_method
    inline bool TC10_Execution_IN() const;
    
    // Ready:
    //## statechart_method
    inline bool Ready_IN() const;
    
    //## statechart_method
    IOxfReactive::TakeEventStatus Ready_handleEvent();
    
    ////    Framework    ////

protected :

//#[ ignore
    enum Pegasus_Test_Architecture_Enum {
        OMNonState = 0,
        TC9_SettingInitialConditions = 1,
        TC9_Execution = 2,
        TC9_Execution_terminationstate_34 = 3,
        TC9_Pause4 = 4,
        TC9_Pause3 = 5,
        TC9_Pause2 = 6,
        TC9_Pause1 = 7,
        sendaction_53 = 8,
        sendaction_51 = 9,
        sendaction_50 = 10,
        TC9_Execution_sendaction_21 = 11,
        TC8_SettingInitialConditions = 12,
        TC8_Execution = 13,
        TC7_SettingInitialConditions = 14,
        TC7_Execution = 15,
        TC7_Execution_terminationstate_34 = 16,
        TC7_Pause2 = 17,
        TC7_Pause1 = 18,
        TC7_Execution_sendaction_22 = 19,
        TC7_Execution_sendaction_21 = 20,
        TC6_SettingInitialConditions = 21,
        TC6_Execution = 22,
        TC5_SettingInitialConditions = 23,
        TC5_Execution = 24,
        TC4_SettingInitialConditions = 25,
        TC4_Execution = 26,
        TC3_SettingInitialConditions = 27,
        TC3_Execution = 28,
        terminationstate_34 = 29,
        TC3_Pause3 = 30,
        TC3_Pause2 = 31,
        TC3_Pause1 = 32,
        sendaction_32 = 33,
        TC3_Execution_sendaction_22 = 34,
        TC3_Execution_sendaction_21 = 35,
        TC2_SettingInitialConditions = 36,
        TC2_Execution = 37,
        TC1_SettingInitialConditions = 38,
        TC1_Execution = 39,
        terminationstate_27 = 40,
        TC1_Pause3 = 41,
        TC1_Pause2 = 42,
        TC1_Pause1 = 43,
        sendaction_23 = 44,
        sendaction_22 = 45,
        sendaction_21 = 46,
        TC10_SettingInitialConditions = 47,
        TC10_Execution = 48,
        Ready = 49
    };
    
    int rootState_subState;
    
    int rootState_active;
    
    int TC9_Execution_subState;
    
    int TC7_Execution_subState;
    
    int TC3_Execution_subState;
    
    int TC1_Execution_subState;
//#]
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedPegasus_Test_Architecture : virtual public AOMInstance {
    DECLARE_REACTIVE_META(Pegasus_Test_Architecture, OMAnimatedPegasus_Test_Architecture)
    
    ////    Framework operations    ////
    
public :

    virtual void serializeRelations(AOMSRelations* aomsRelations) const;
    
    //## statechart_method
    void rootState_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void TC9_SettingInitialConditions_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void TC9_Execution_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void TC9_Execution_terminationstate_34_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void TC9_Pause4_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void TC9_Pause3_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void TC9_Pause2_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void TC9_Pause1_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void sendaction_53_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void sendaction_51_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void sendaction_50_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void TC9_Execution_sendaction_21_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void TC8_SettingInitialConditions_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void TC8_Execution_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void TC7_SettingInitialConditions_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void TC7_Execution_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void TC7_Execution_terminationstate_34_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void TC7_Pause2_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void TC7_Pause1_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void TC7_Execution_sendaction_22_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void TC7_Execution_sendaction_21_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void TC6_SettingInitialConditions_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void TC6_Execution_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void TC5_SettingInitialConditions_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void TC5_Execution_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void TC4_SettingInitialConditions_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void TC4_Execution_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void TC3_SettingInitialConditions_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void TC3_Execution_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void terminationstate_34_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void TC3_Pause3_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void TC3_Pause2_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void TC3_Pause1_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void sendaction_32_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void TC3_Execution_sendaction_22_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void TC3_Execution_sendaction_21_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void TC2_SettingInitialConditions_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void TC2_Execution_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void TC1_SettingInitialConditions_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void TC1_Execution_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void terminationstate_27_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void TC1_Pause3_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void TC1_Pause2_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void TC1_Pause1_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void sendaction_23_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void sendaction_22_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void sendaction_21_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void TC10_SettingInitialConditions_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void TC10_Execution_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void Ready_serializeStates(AOMSState* aomsState) const;
};
//#]
#endif // _OMINSTRUMENT

inline bool Pegasus_Test_Architecture::rootState_IN() const {
    return true;
}

inline bool Pegasus_Test_Architecture::TC9_SettingInitialConditions_IN() const {
    return rootState_subState == TC9_SettingInitialConditions;
}

inline bool Pegasus_Test_Architecture::TC9_Execution_IN() const {
    return rootState_subState == TC9_Execution;
}

inline bool Pegasus_Test_Architecture::TC9_Execution_isCompleted() {
    return ( IS_IN(TC9_Execution_terminationstate_34) );
}

inline bool Pegasus_Test_Architecture::TC9_Execution_terminationstate_34_IN() const {
    return TC9_Execution_subState == TC9_Execution_terminationstate_34;
}

inline bool Pegasus_Test_Architecture::TC9_Pause4_IN() const {
    return TC9_Execution_subState == TC9_Pause4;
}

inline bool Pegasus_Test_Architecture::TC9_Pause3_IN() const {
    return TC9_Execution_subState == TC9_Pause3;
}

inline bool Pegasus_Test_Architecture::TC9_Pause2_IN() const {
    return TC9_Execution_subState == TC9_Pause2;
}

inline bool Pegasus_Test_Architecture::TC9_Pause1_IN() const {
    return TC9_Execution_subState == TC9_Pause1;
}

inline bool Pegasus_Test_Architecture::sendaction_53_IN() const {
    return TC9_Execution_subState == sendaction_53;
}

inline bool Pegasus_Test_Architecture::sendaction_51_IN() const {
    return TC9_Execution_subState == sendaction_51;
}

inline bool Pegasus_Test_Architecture::sendaction_50_IN() const {
    return TC9_Execution_subState == sendaction_50;
}

inline bool Pegasus_Test_Architecture::TC9_Execution_sendaction_21_IN() const {
    return TC9_Execution_subState == TC9_Execution_sendaction_21;
}

inline bool Pegasus_Test_Architecture::TC8_SettingInitialConditions_IN() const {
    return rootState_subState == TC8_SettingInitialConditions;
}

inline bool Pegasus_Test_Architecture::TC8_Execution_IN() const {
    return rootState_subState == TC8_Execution;
}

inline bool Pegasus_Test_Architecture::TC7_SettingInitialConditions_IN() const {
    return rootState_subState == TC7_SettingInitialConditions;
}

inline bool Pegasus_Test_Architecture::TC7_Execution_IN() const {
    return rootState_subState == TC7_Execution;
}

inline bool Pegasus_Test_Architecture::TC7_Execution_isCompleted() {
    return ( IS_IN(TC7_Execution_terminationstate_34) );
}

inline bool Pegasus_Test_Architecture::TC7_Execution_terminationstate_34_IN() const {
    return TC7_Execution_subState == TC7_Execution_terminationstate_34;
}

inline bool Pegasus_Test_Architecture::TC7_Pause2_IN() const {
    return TC7_Execution_subState == TC7_Pause2;
}

inline bool Pegasus_Test_Architecture::TC7_Pause1_IN() const {
    return TC7_Execution_subState == TC7_Pause1;
}

inline bool Pegasus_Test_Architecture::TC7_Execution_sendaction_22_IN() const {
    return TC7_Execution_subState == TC7_Execution_sendaction_22;
}

inline bool Pegasus_Test_Architecture::TC7_Execution_sendaction_21_IN() const {
    return TC7_Execution_subState == TC7_Execution_sendaction_21;
}

inline bool Pegasus_Test_Architecture::TC6_SettingInitialConditions_IN() const {
    return rootState_subState == TC6_SettingInitialConditions;
}

inline bool Pegasus_Test_Architecture::TC6_Execution_IN() const {
    return rootState_subState == TC6_Execution;
}

inline bool Pegasus_Test_Architecture::TC5_SettingInitialConditions_IN() const {
    return rootState_subState == TC5_SettingInitialConditions;
}

inline bool Pegasus_Test_Architecture::TC5_Execution_IN() const {
    return rootState_subState == TC5_Execution;
}

inline bool Pegasus_Test_Architecture::TC4_SettingInitialConditions_IN() const {
    return rootState_subState == TC4_SettingInitialConditions;
}

inline bool Pegasus_Test_Architecture::TC4_Execution_IN() const {
    return rootState_subState == TC4_Execution;
}

inline bool Pegasus_Test_Architecture::TC3_SettingInitialConditions_IN() const {
    return rootState_subState == TC3_SettingInitialConditions;
}

inline bool Pegasus_Test_Architecture::TC3_Execution_IN() const {
    return rootState_subState == TC3_Execution;
}

inline bool Pegasus_Test_Architecture::TC3_Execution_isCompleted() {
    return ( IS_IN(terminationstate_34) );
}

inline bool Pegasus_Test_Architecture::terminationstate_34_IN() const {
    return TC3_Execution_subState == terminationstate_34;
}

inline bool Pegasus_Test_Architecture::TC3_Pause3_IN() const {
    return TC3_Execution_subState == TC3_Pause3;
}

inline bool Pegasus_Test_Architecture::TC3_Pause2_IN() const {
    return TC3_Execution_subState == TC3_Pause2;
}

inline bool Pegasus_Test_Architecture::TC3_Pause1_IN() const {
    return TC3_Execution_subState == TC3_Pause1;
}

inline bool Pegasus_Test_Architecture::sendaction_32_IN() const {
    return TC3_Execution_subState == sendaction_32;
}

inline bool Pegasus_Test_Architecture::TC3_Execution_sendaction_22_IN() const {
    return TC3_Execution_subState == TC3_Execution_sendaction_22;
}

inline bool Pegasus_Test_Architecture::TC3_Execution_sendaction_21_IN() const {
    return TC3_Execution_subState == TC3_Execution_sendaction_21;
}

inline bool Pegasus_Test_Architecture::TC2_SettingInitialConditions_IN() const {
    return rootState_subState == TC2_SettingInitialConditions;
}

inline bool Pegasus_Test_Architecture::TC2_Execution_IN() const {
    return rootState_subState == TC2_Execution;
}

inline bool Pegasus_Test_Architecture::TC1_SettingInitialConditions_IN() const {
    return rootState_subState == TC1_SettingInitialConditions;
}

inline bool Pegasus_Test_Architecture::TC1_Execution_IN() const {
    return rootState_subState == TC1_Execution;
}

inline bool Pegasus_Test_Architecture::TC1_Execution_isCompleted() {
    return ( IS_IN(terminationstate_27) );
}

inline bool Pegasus_Test_Architecture::terminationstate_27_IN() const {
    return TC1_Execution_subState == terminationstate_27;
}

inline bool Pegasus_Test_Architecture::TC1_Pause3_IN() const {
    return TC1_Execution_subState == TC1_Pause3;
}

inline bool Pegasus_Test_Architecture::TC1_Pause2_IN() const {
    return TC1_Execution_subState == TC1_Pause2;
}

inline bool Pegasus_Test_Architecture::TC1_Pause1_IN() const {
    return TC1_Execution_subState == TC1_Pause1;
}

inline bool Pegasus_Test_Architecture::sendaction_23_IN() const {
    return TC1_Execution_subState == sendaction_23;
}

inline bool Pegasus_Test_Architecture::sendaction_22_IN() const {
    return TC1_Execution_subState == sendaction_22;
}

inline bool Pegasus_Test_Architecture::sendaction_21_IN() const {
    return TC1_Execution_subState == sendaction_21;
}

inline bool Pegasus_Test_Architecture::TC10_SettingInitialConditions_IN() const {
    return rootState_subState == TC10_SettingInitialConditions;
}

inline bool Pegasus_Test_Architecture::TC10_Execution_IN() const {
    return rootState_subState == TC10_Execution;
}

inline bool Pegasus_Test_Architecture::Ready_IN() const {
    return rootState_subState == Ready;
}

#endif
/*********************************************************************
	File Path	: GearShiftingTestComponent/GSC_Test_Animation/Pegasus_Test_Architecture.h
*********************************************************************/
