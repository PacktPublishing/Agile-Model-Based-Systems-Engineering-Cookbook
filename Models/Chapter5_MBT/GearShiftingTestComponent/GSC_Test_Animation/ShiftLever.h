/*********************************************************************
	Rhapsody	: 9.0 
	Login		: Bruce
	Component	: GearShiftingTestComponent 
	Configuration 	: GSC_Test_Animation
	Model Element	: ShiftLever
//!	Generated Date	: Sat, 28, Nov 2020  
	File Path	: GearShiftingTestComponent/GSC_Test_Animation/ShiftLever.h
*********************************************************************/

#ifndef ShiftLever_H
#define ShiftLever_H

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

//## class ShiftLever
class ShiftLever : public OMReactive {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedShiftLever;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    ShiftLever(IOxfActive* theActiveContext = 0);
    
    //## auto_generated
    ~ShiftLever();
    
    ////    Additional operations    ////
    
    //## auto_generated
    bool getIsLeft() const;
    
    //## auto_generated
    void setIsLeft(bool p_isLeft);
    
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

    bool isLeft;		//## attribute isLeft
    
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
    
    // WiaitingToShift:
    //## statechart_method
    inline bool WiaitingToShift_IN() const;
    
    // sendaction_2:
    //## statechart_method
    inline bool sendaction_2_IN() const;
    
    // sendaction_1:
    //## statechart_method
    inline bool sendaction_1_IN() const;
    
    ////    Framework    ////

protected :

//#[ ignore
    enum ShiftLever_Enum {
        OMNonState = 0,
        WiaitingToShift = 1,
        sendaction_2 = 2,
        sendaction_1 = 3
    };
    
    int rootState_subState;
    
    int rootState_active;
//#]
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedShiftLever : virtual public AOMInstance {
    DECLARE_REACTIVE_META(ShiftLever, OMAnimatedShiftLever)
    
    ////    Framework operations    ////
    
public :

    virtual void serializeAttributes(AOMSAttributes* aomsAttributes) const;
    
    virtual void serializeRelations(AOMSRelations* aomsRelations) const;
    
    //## statechart_method
    void rootState_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void WiaitingToShift_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void sendaction_2_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void sendaction_1_serializeStates(AOMSState* aomsState) const;
};
//#]
#endif // _OMINSTRUMENT

inline bool ShiftLever::rootState_IN() const {
    return true;
}

inline bool ShiftLever::WiaitingToShift_IN() const {
    return rootState_subState == WiaitingToShift;
}

inline bool ShiftLever::sendaction_2_IN() const {
    return rootState_subState == sendaction_2;
}

inline bool ShiftLever::sendaction_1_IN() const {
    return rootState_subState == sendaction_1;
}

#endif
/*********************************************************************
	File Path	: GearShiftingTestComponent/GSC_Test_Animation/ShiftLever.h
*********************************************************************/
