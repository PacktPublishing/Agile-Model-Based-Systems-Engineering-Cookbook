/*********************************************************************
	Rhapsody	: 9.0 
	Login		: Bruce
	Component	: TrafficLightMVP0 
	Configuration 	: MVP0Config
	Model Element	: TrafficLightSystem
//!	Generated Date	: Tue, 8, Dec 2020  
	File Path	: TrafficLightMVP0/MVP0Config/TrafficLightSystem.h
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
#include "MVP0Pkg.h"
//## auto_generated
#include <oxf/omthread.h>
//## auto_generated
#include <oxf/omreactive.h>
//## auto_generated
#include <oxf/state.h>
//## auto_generated
#include <oxf/event.h>
//## classInstance itsTrafficLane
#include "TrafficLane.h"
//## package MVP0Pkg

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
    TrafficLane* getItsTrafficLane() const;
    
    //## auto_generated
    virtual bool startBehavior();

protected :

    //## auto_generated
    void initStatechart();
    
    ////    Relations and components    ////
    
    TrafficLane itsTrafficLane;		//## classInstance itsTrafficLane
    
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
        sendaction_2 = 1,
        Running = 2,
        Ready = 3
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
	File Path	: TrafficLightMVP0/MVP0Config/TrafficLightSystem.h
*********************************************************************/
