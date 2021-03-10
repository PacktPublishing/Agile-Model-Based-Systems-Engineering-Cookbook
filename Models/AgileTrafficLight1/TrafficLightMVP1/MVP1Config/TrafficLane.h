/*********************************************************************
	Rhapsody	: 9.0 
	Login		: Bruce
	Component	: TrafficLightMVP1 
	Configuration 	: MVP1Config
	Model Element	: TrafficLane
//!	Generated Date	: Tue, 8, Dec 2020  
	File Path	: TrafficLightMVP1/MVP1Config/TrafficLane.h
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
#include "Default.h"
//## class TrafficLane
#include "evLaneDone_ProxyReceptionInterface.h"
//## package Default

//## class TrafficLane
class TrafficLane : public evLaneDone_ProxyReceptionInterface {
public :

//#[ ignore
    //## package Default
    class pOutThru_C : public evLaneDone_ProxyReceptionInterface {
        ////    Constructors and destructors    ////
        
    public :
    
        //## auto_generated
        pOutThru_C();
        
        //## auto_generated
        virtual ~pOutThru_C();
        
        ////    Operations    ////
        
        //## auto_generated
        evLaneDone_ProxyReceptionInterface* getItsEvLaneDone_ProxyReceptionInterface();
        
        //## auto_generated
        evLaneDone_ProxyReceptionInterface* getOutBound();
        
        //## auto_generated
        virtual bool send(IOxfEvent* event, const IOxfEventGenerationParams& params);
        
        //## auto_generated
        virtual bool send(IOxfEvent* event);
        
        ////    Additional operations    ////
        
        //## auto_generated
        void setItsEvLaneDone_ProxyReceptionInterface(OMReactive* p_OMReactive);
    
    protected :
    
        //## auto_generated
        void cleanUpRelations();
        
        ////    Attributes    ////
        
        int _p_;		//## attribute _p_
        
        ////    Relations and components    ////
        
        OMReactive* itsEvLaneDone_ProxyReceptionInterface;		//## link itsEvLaneDone_ProxyReceptionInterface
    };
    
    //## package Default
    class pInThru_C : public evLaneDone_ProxyReceptionInterface {
        ////    Constructors and destructors    ////
        
    public :
    
        //## auto_generated
        pInThru_C();
        
        //## auto_generated
        virtual ~pInThru_C();
        
        ////    Operations    ////
        
        //## auto_generated
        void connectTrafficLane(TrafficLane* part);
        
        //## auto_generated
        evLaneDone_ProxyReceptionInterface* getItsEvLaneDone_ProxyReceptionInterface();
        
        //## auto_generated
        virtual bool send(IOxfEvent* event, const IOxfEventGenerationParams& params);
        
        //## auto_generated
        virtual bool send(IOxfEvent* event);
        
        ////    Additional operations    ////
        
        //## auto_generated
        void setItsEvLaneDone_ProxyReceptionInterface(evLaneDone_ProxyReceptionInterface* p_evLaneDone_ProxyReceptionInterface);
    
    protected :
    
        //## auto_generated
        void cleanUpRelations();
        
        ////    Attributes    ////
        
        int _p_;		//## attribute _p_
        
        ////    Relations and components    ////
        
        evLaneDone_ProxyReceptionInterface* itsEvLaneDone_ProxyReceptionInterface;		//## link itsEvLaneDone_ProxyReceptionInterface
    };
//#]

    ////    Friends    ////
    
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
    pOutThru_C* getPOutThru() const;
    
    //## auto_generated
    pOutThru_C* get_pOutThru() const;
    
    //## auto_generated
    pInThru_C* getPInThru() const;
    
    //## auto_generated
    pInThru_C* get_pInThru() const;
    
    //## auto_generated
    RhpString getWhoAmI() const;
    
    //## auto_generated
    void setWhoAmI(RhpString p_whoAmI);
    
    //## auto_generated
    virtual bool startBehavior();

protected :

    //## auto_generated
    void initRelations();
    
    //## auto_generated
    void initStatechart();
    
    //## auto_generated
    void cancelTimeouts();
    
    //## auto_generated
    bool cancelTimeout(const IOxfTimeout* arg);
    
    ////    Attributes    ////
    
    RhpString whoAmI;		//## attribute whoAmI
    
    ////    Relations and components    ////
    
//#[ ignore
    pOutThru_C pOutThru;
    
    pInThru_C pInThru;
//#]

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
    
    // WaitForOtherLaneCompletion:
    //## statechart_method
    inline bool WaitForOtherLaneCompletion_IN() const;
    
    // sendaction_5:
    //## statechart_method
    inline bool sendaction_5_IN() const;
    
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
        WaitForOtherLaneCompletion = 3,
        sendaction_5 = 4,
        RedState = 5,
        GreenState = 6
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
    
    virtual void serializeRelations(AOMSRelations* aomsRelations) const;
    
    //## statechart_method
    void rootState_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void YellowState_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void WaitingToStart_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void WaitForOtherLaneCompletion_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void sendaction_5_serializeStates(AOMSState* aomsState) const;
    
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

inline bool TrafficLane::WaitForOtherLaneCompletion_IN() const {
    return rootState_subState == WaitForOtherLaneCompletion;
}

inline bool TrafficLane::sendaction_5_IN() const {
    return rootState_subState == sendaction_5;
}

inline bool TrafficLane::RedState_IN() const {
    return rootState_subState == RedState;
}

inline bool TrafficLane::GreenState_IN() const {
    return rootState_subState == GreenState;
}

#endif
/*********************************************************************
	File Path	: TrafficLightMVP1/MVP1Config/TrafficLane.h
*********************************************************************/
