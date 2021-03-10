/*********************************************************************
	Rhapsody	: 9.0 
	Login		: Bruce
	Component	: GearShiftingTestComponent 
	Configuration 	: GSC_Test_Animation
	Model Element	: DIButton
//!	Generated Date	: Sat, 28, Nov 2020  
	File Path	: GearShiftingTestComponent/GSC_Test_Animation/DIButton.h
*********************************************************************/

#ifndef DIButton_H
#define DIButton_H

//## auto_generated
#include <oxf/oxf.h>
//## auto_generated
#include <../Profiles/SysML/SIDefinitions.h>
//## auto_generated
#include <aom/aom.h>
//## auto_generated
#include "RiderInteractionDesignPkg.h"
//## auto_generated
#include <oxf/omthread.h>
//## auto_generated
#include <oxf/omreactive.h>
//## auto_generated
#include <oxf/state.h>
//## auto_generated
#include <oxf/event.h>
//## link itsGearControl
class GearControl;

//## package DesignSynthesisPkg::RiderInteractionDesignPkg

//## class DIButton
class DIButton : public OMReactive {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedDIButton;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    DIButton(IOxfActive* theActiveContext = 0);
    
    //## auto_generated
    ~DIButton();
    
    ////    Additional operations    ////
    
    //## auto_generated
    bool getIsUp() const;
    
    //## auto_generated
    void setIsUp(bool p_isUp);
    
    //## auto_generated
    GearControl* getItsGearControl() const;
    
    //## auto_generated
    void setItsGearControl(GearControl* p_GearControl);
    
    //## auto_generated
    virtual bool startBehavior();

protected :

    //## auto_generated
    void initStatechart();
    
    //## auto_generated
    void cleanUpRelations();
    
    ////    Attributes    ////

public :

    bool isUp;		//## attribute isUp
    
    ////    Relations and components    ////

protected :

    GearControl* itsGearControl;		//## link itsGearControl
    
    ////    Framework operations    ////

public :

    // rootState:
    //## statechart_method
    inline bool rootState_IN() const;
    
    //## statechart_method
    virtual void rootState_entDef();
    
    //## statechart_method
    virtual IOxfReactive::TakeEventStatus rootState_processEvent();
    
    // WaitingToShift:
    //## statechart_method
    inline bool WaitingToShift_IN() const;
    
    // sendaction_1:
    //## statechart_method
    inline bool sendaction_1_IN() const;
    
    ////    Framework    ////

protected :

//#[ ignore
    enum DIButton_Enum {
        OMNonState = 0,
        WaitingToShift = 1,
        sendaction_1 = 2
    };
    
    int rootState_subState;
    
    int rootState_active;
//#]
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedDIButton : virtual public AOMInstance {
    DECLARE_REACTIVE_META(DIButton, OMAnimatedDIButton)
    
    ////    Framework operations    ////
    
public :

    virtual void serializeAttributes(AOMSAttributes* aomsAttributes) const;
    
    virtual void serializeRelations(AOMSRelations* aomsRelations) const;
    
    //## statechart_method
    void rootState_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void WaitingToShift_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void sendaction_1_serializeStates(AOMSState* aomsState) const;
};
//#]
#endif // _OMINSTRUMENT

inline bool DIButton::rootState_IN() const {
    return true;
}

inline bool DIButton::WaitingToShift_IN() const {
    return rootState_subState == WaitingToShift;
}

inline bool DIButton::sendaction_1_IN() const {
    return rootState_subState == sendaction_1;
}

#endif
/*********************************************************************
	File Path	: GearShiftingTestComponent/GSC_Test_Animation/DIButton.h
*********************************************************************/
