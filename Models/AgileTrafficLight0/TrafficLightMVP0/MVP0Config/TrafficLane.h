/*********************************************************************
	Rhapsody	: 9.0 
	Login		: Bruce
	Component	: TrafficLightMVP0 
	Configuration 	: MVP0Config
	Model Element	: TrafficLane
//!	Generated Date	: Tue, 8, Dec 2020  
	File Path	: TrafficLightMVP0/MVP0Config/TrafficLane.h
*********************************************************************/

#ifndef TrafficLane_H
#define TrafficLane_H

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
//## package MVP0Pkg

//## class TrafficLane
class TrafficLane : public OMReactive {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedTrafficLane;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    TrafficLane(IOxfActive* theActiveContext = 0);
    
    //## auto_generated
    virtual ~TrafficLane();
    
    ////    Operations    ////
    
    //## operation setColor(COLOR_TYPE)
    virtual void setColor(const COLOR_TYPE& color);
    
    ////    Additional operations    ////
    
    //## auto_generated
    RhpString getWhoAmI() const;
    
    //## auto_generated
    void setWhoAmI(RhpString p_whoAmI);
    
    //## auto_generated
    virtual bool startBehavior();

protected :

    //## auto_generated
    void initStatechart();
    
    //## auto_generated
    void cancelTimeouts();
    
    //## auto_generated
    bool cancelTimeout(const IOxfTimeout* arg);
    
    ////    Attributes    ////
    
    RhpString whoAmI;		//## attribute whoAmI
    
    ////    Framework operations    ////

public :

    // rootState:
    //## statechart_method
    inline bool rootState_IN() const;
    
    //## statechart_method
    virtual void rootState_entDef();
    
    //## statechart_method
    virtual IOxfReactive::TakeEventStatus rootState_processEvent();
    
    // YellowState:
    //## statechart_method
    inline bool YellowState_IN() const;
    
    // WaitingToStart:
    //## statechart_method
    inline bool WaitingToStart_IN() const;
    
    // RedState:
    //## statechart_method
    inline bool RedState_IN() const;
    
    // GreenState:
    //## statechart_method
    inline bool GreenState_IN() const;
    
    ////    Framework    ////

protected :

//#[ ignore
    enum TrafficLane_Enum {
        OMNonState = 0,
        YellowState = 1,
        WaitingToStart = 2,
        RedState = 3,
        GreenState = 4
    };
    
    int rootState_subState;
    
    int rootState_active;
    
    IOxfTimeout* rootState_timeout;
//#]
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedTrafficLane : virtual public AOMInstance {
    DECLARE_REACTIVE_META(TrafficLane, OMAnimatedTrafficLane)
    
    ////    Framework operations    ////
    
public :

    virtual void serializeAttributes(AOMSAttributes* aomsAttributes) const;
    
    //## statechart_method
    void rootState_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void YellowState_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void WaitingToStart_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void RedState_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void GreenState_serializeStates(AOMSState* aomsState) const;
};
//#]
#endif // _OMINSTRUMENT

inline bool TrafficLane::rootState_IN() const {
    return true;
}

inline bool TrafficLane::YellowState_IN() const {
    return rootState_subState == YellowState;
}

inline bool TrafficLane::WaitingToStart_IN() const {
    return rootState_subState == WaitingToStart;
}

inline bool TrafficLane::RedState_IN() const {
    return rootState_subState == RedState;
}

inline bool TrafficLane::GreenState_IN() const {
    return rootState_subState == GreenState;
}

#endif
/*********************************************************************
	File Path	: TrafficLightMVP0/MVP0Config/TrafficLane.h
*********************************************************************/
