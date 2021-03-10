/*********************************************************************
	Rhapsody	: 9.0 
	Login		: Bruce
	Component	: TrafficLightMVP2 
	Configuration 	: MVP2Config
	Model Element	: TrafficLightSystem
//!	Generated Date	: Tue, 8, Dec 2020  
	File Path	: TrafficLightMVP2/MVP2Config/TrafficLightSystem.h
*********************************************************************/

#ifndef TrafficLightSystem_H
#define TrafficLightSystem_H

//## auto_generated
#include <oxf/oxf.h>
//## auto_generated
#include <../Profiles/SysML/SIDefinitions.h>
//## auto_generated
#include <aom/aom.h>
//## auto_generated
#include "Default.h"
//## auto_generated
#include <oxf/omthread.h>
//## auto_generated
#include <oxf/omreactive.h>
//## auto_generated
#include <oxf/state.h>
//## auto_generated
#include <oxf/event.h>
//## classInstance primaryCrossWalk
#include "CrossWalk.h"
//## classInstance primaryThru
#include "ThruLane.h"
//## classInstance primaryTurn
#include "TurnLane.h"
//## package Default

//## class TrafficLightSystem
class TrafficLightSystem : public OMReactive {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedTrafficLightSystem;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    TrafficLightSystem(IOxfActive* theActiveContext = 0);
    
    //## auto_generated
    ~TrafficLightSystem();
    
    ////    Additional operations    ////
    
    //## auto_generated
    CrossWalk* getPrimaryCrossWalk() const;
    
    //## auto_generated
    ThruLane* getPrimaryThru() const;
    
    //## auto_generated
    TurnLane* getPrimaryTurn() const;
    
    //## auto_generated
    CrossWalk* getSecondaryCrossWalk() const;
    
    //## auto_generated
    ThruLane* getSecondaryThru() const;
    
    //## auto_generated
    TurnLane* getSecondaryTurn() const;
    
    //## auto_generated
    virtual bool startBehavior();

protected :

    //## auto_generated
    void initRelations();
    
    //## auto_generated
    void initStatechart();
    
    ////    Relations and components    ////
    
    CrossWalk primaryCrossWalk;		//## classInstance primaryCrossWalk
    
    ThruLane primaryThru;		//## classInstance primaryThru
    
    TurnLane primaryTurn;		//## classInstance primaryTurn
    
    CrossWalk secondaryCrossWalk;		//## classInstance secondaryCrossWalk
    
    ThruLane secondaryThru;		//## classInstance secondaryThru
    
    TurnLane secondaryTurn;		//## classInstance secondaryTurn
    
    ////    Framework operations    ////

public :

    //## auto_generated
    void setActiveContext(IOxfActive* theActiveContext, bool activeInstance);
    
    //## auto_generated
    virtual void destroy();
    
    // rootState:
    //## statechart_method
    inline bool rootState_IN() const;
    
    //## statechart_method
    virtual void rootState_entDef();
    
    //## statechart_method
    virtual IOxfReactive::TakeEventStatus rootState_processEvent();
    
    // sendaction_7:
    //## statechart_method
    inline bool sendaction_7_IN() const;
    
    // sendaction_6:
    //## statechart_method
    inline bool sendaction_6_IN() const;
    
    // sendaction_5:
    //## statechart_method
    inline bool sendaction_5_IN() const;
    
    // sendaction_4:
    //## statechart_method
    inline bool sendaction_4_IN() const;
    
    // sendaction_3:
    //## statechart_method
    inline bool sendaction_3_IN() const;
    
    // sendaction_2:
    //## statechart_method
    inline bool sendaction_2_IN() const;
    
    // Running:
    //## statechart_method
    inline bool Running_IN() const;
    
    // Ready:
    //## statechart_method
    inline bool Ready_IN() const;
    
    ////    Framework    ////

protected :

//#[ ignore
    enum TrafficLightSystem_Enum {
        OMNonState = 0,
        sendaction_7 = 1,
        sendaction_6 = 2,
        sendaction_5 = 3,
        sendaction_4 = 4,
        sendaction_3 = 5,
        sendaction_2 = 6,
        Running = 7,
        Ready = 8
    };
    
    int rootState_subState;
    
    int rootState_active;
//#]
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedTrafficLightSystem : virtual public AOMInstance {
    DECLARE_REACTIVE_META(TrafficLightSystem, OMAnimatedTrafficLightSystem)
    
    ////    Framework operations    ////
    
public :

    virtual void serializeRelations(AOMSRelations* aomsRelations) const;
    
    //## statechart_method
    void rootState_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void sendaction_7_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void sendaction_6_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void sendaction_5_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void sendaction_4_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void sendaction_3_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void sendaction_2_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void Running_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void Ready_serializeStates(AOMSState* aomsState) const;
};
//#]
#endif // _OMINSTRUMENT

inline bool TrafficLightSystem::rootState_IN() const {
    return true;
}

inline bool TrafficLightSystem::sendaction_7_IN() const {
    return rootState_subState == sendaction_7;
}

inline bool TrafficLightSystem::sendaction_6_IN() const {
    return rootState_subState == sendaction_6;
}

inline bool TrafficLightSystem::sendaction_5_IN() const {
    return rootState_subState == sendaction_5;
}

inline bool TrafficLightSystem::sendaction_4_IN() const {
    return rootState_subState == sendaction_4;
}

inline bool TrafficLightSystem::sendaction_3_IN() const {
    return rootState_subState == sendaction_3;
}

inline bool TrafficLightSystem::sendaction_2_IN() const {
    return rootState_subState == sendaction_2;
}

inline bool TrafficLightSystem::Running_IN() const {
    return rootState_subState == Running;
}

inline bool TrafficLightSystem::Ready_IN() const {
    return rootState_subState == Ready;
}

#endif
/*********************************************************************
	File Path	: TrafficLightMVP2/MVP2Config/TrafficLightSystem.h
*********************************************************************/
