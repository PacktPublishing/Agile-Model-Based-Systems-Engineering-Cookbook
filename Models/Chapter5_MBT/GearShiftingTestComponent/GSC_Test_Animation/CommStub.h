/*********************************************************************
	Rhapsody	: 9.0 
	Login		: Bruce
	Component	: GearShiftingTestComponent 
	Configuration 	: GSC_Test_Animation
	Model Element	: CommStub
//!	Generated Date	: Sat, 28, Nov 2020  
	File Path	: GearShiftingTestComponent/GSC_Test_Animation/CommStub.h
*********************************************************************/

#ifndef CommStub_H
#define CommStub_H

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
//## link itsRiderApplication
class RiderApplication;

//## package DesignSynthesisPkg::TestPkg

//## class CommStub
class CommStub : public OMReactive {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedCommStub;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    CommStub(IOxfActive* theActiveContext = 0);
    
    //## auto_generated
    ~CommStub();
    
    ////    Additional operations    ////
    
    //## auto_generated
    RiderApplication* getItsRiderApplication() const;
    
    //## auto_generated
    void setItsRiderApplication(RiderApplication* p_RiderApplication);
    
    //## auto_generated
    virtual bool startBehavior();

protected :

    //## auto_generated
    void initStatechart();
    
    //## auto_generated
    void cleanUpRelations();
    
    ////    Relations and components    ////
    
    RiderApplication* itsRiderApplication;		//## link itsRiderApplication
    
    ////    Framework operations    ////

public :

    // rootState:
    //## statechart_method
    inline bool rootState_IN() const;
    
    //## statechart_method
    virtual void rootState_entDef();
    
    //## statechart_method
    virtual IOxfReactive::TakeEventStatus rootState_processEvent();
    
    // sendaction_2:
    //## statechart_method
    inline bool sendaction_2_IN() const;
    
    // sendaction_1:
    //## statechart_method
    inline bool sendaction_1_IN() const;
    
    // CommStubTestState:
    //## statechart_method
    inline bool CommStubTestState_IN() const;
    
    ////    Framework    ////

protected :

//#[ ignore
    enum CommStub_Enum {
        OMNonState = 0,
        sendaction_2 = 1,
        sendaction_1 = 2,
        CommStubTestState = 3
    };
    
    int rootState_subState;
    
    int rootState_active;
//#]
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedCommStub : virtual public AOMInstance {
    DECLARE_REACTIVE_META(CommStub, OMAnimatedCommStub)
    
    ////    Framework operations    ////
    
public :

    virtual void serializeRelations(AOMSRelations* aomsRelations) const;
    
    //## statechart_method
    void rootState_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void sendaction_2_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void sendaction_1_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void CommStubTestState_serializeStates(AOMSState* aomsState) const;
};
//#]
#endif // _OMINSTRUMENT

inline bool CommStub::rootState_IN() const {
    return true;
}

inline bool CommStub::sendaction_2_IN() const {
    return rootState_subState == sendaction_2;
}

inline bool CommStub::sendaction_1_IN() const {
    return rootState_subState == sendaction_1;
}

inline bool CommStub::CommStubTestState_IN() const {
    return rootState_subState == CommStubTestState;
}

#endif
/*********************************************************************
	File Path	: GearShiftingTestComponent/GSC_Test_Animation/CommStub.h
*********************************************************************/
