/*********************************************************************
	Rhapsody	: 9.0 
	Login		: Bruce
	Component	: TrafficLightMVP2 
	Configuration 	: MVP2Config
	Model Element	: TurnLane
//!	Generated Date	: Tue, 8, Dec 2020  
	File Path	: TrafficLightMVP2/MVP2Config/TurnLane.h
*********************************************************************/

#ifndef TurnLane_H
#define TurnLane_H

//## auto_generated
#include <oxf/oxf.h>
//## auto_generated
#include <../Profiles/SysML/SIDefinitions.h>
//## auto_generated
#include <aom/aom.h>
//## auto_generated
#include "Default.h"
//## class TurnLane
#include "evGoTurn_ProxyReceptionInterface.h"
//## class TurnLane
#include "TrafficLane.h"
//## class OutBound
#include "evCarArrive_ProxyReceptionInterface.h"
//## class OutBound
#include "evTurnDone_ProxyReceptionInterface.h"
//## package Default

//## class TurnLane
class TurnLane : public TrafficLane, public evGoTurn_ProxyReceptionInterface {
public :

//#[ ignore
    //## package Default
    class pThru_C {
    public :
    
        //## auto_generated
        class InBound_C;
        
        //## auto_generated
        class OutBound_C;
        
        //## package Default
        class InBound_C : public evGoTurn_ProxyReceptionInterface {
            ////    Constructors and destructors    ////
            
        public :
        
            //## auto_generated
            InBound_C();
            
            //## auto_generated
            virtual ~InBound_C();
            
            ////    Operations    ////
            
            //## auto_generated
            virtual bool send(IOxfEvent* event, const IOxfEventGenerationParams& params);
            
            //## auto_generated
            virtual bool send(IOxfEvent* event);
            
            ////    Additional operations    ////
            
            //## auto_generated
            void setItsEvGoTurn_ProxyReceptionInterface(evGoTurn_ProxyReceptionInterface* p_evGoTurn_ProxyReceptionInterface);
            
            //## auto_generated
            pThru_C* getPort() const;
            
            //## auto_generated
            void setPort(pThru_C* p_pThru_C);
        
        protected :
        
            //## auto_generated
            void cleanUpRelations();
            
            ////    Relations and components    ////
            
            evGoTurn_ProxyReceptionInterface* itsEvGoTurn_ProxyReceptionInterface;		//## link itsEvGoTurn_ProxyReceptionInterface
            
            pThru_C* port;		//## link port
            
            ////    Framework operations    ////
        
        public :
        
            //## auto_generated
            void __setPort(pThru_C* p_pThru_C);
            
            //## auto_generated
            void _setPort(pThru_C* p_pThru_C);
            
            //## auto_generated
            void _clearPort();
        };
        
        //## package Default
        class OutBound_C : public evTurnDone_ProxyReceptionInterface, public evCarArrive_ProxyReceptionInterface {
            ////    Constructors and destructors    ////
            
        public :
        
            //## auto_generated
            OutBound_C();
            
            //## auto_generated
            virtual ~OutBound_C();
            
            ////    Operations    ////
            
            //## auto_generated
            virtual bool send(IOxfEvent* event, const IOxfEventGenerationParams& params);
            
            //## auto_generated
            virtual bool send(IOxfEvent* event);
            
            ////    Additional operations    ////
            
            //## auto_generated
            void setItsEvCarArrive_ProxyReceptionInterface(OMReactive* p_OMReactive);
            
            //## auto_generated
            void setItsEvTurnDone_ProxyReceptionInterface(OMReactive* p_OMReactive);
        
        protected :
        
            //## auto_generated
            void cleanUpRelations();
            
            ////    Relations and components    ////
            
            OMReactive* itsEvCarArrive_ProxyReceptionInterface;		//## link itsEvCarArrive_ProxyReceptionInterface
            
            OMReactive* itsEvTurnDone_ProxyReceptionInterface;		//## link itsEvTurnDone_ProxyReceptionInterface
        };
        
        ////    Constructors and destructors    ////
        
        //## auto_generated
        pThru_C();
        
        //## auto_generated
        virtual ~pThru_C();
        
        ////    Operations    ////
        
        //## auto_generated
        void connectTurnLane(TurnLane* part);
        
        //## auto_generated
        evCarArrive_ProxyReceptionInterface* getItsEvCarArrive_ProxyReceptionInterface();
        
        //## auto_generated
        evGoTurn_ProxyReceptionInterface* getItsEvGoTurn_ProxyReceptionInterface();
        
        //## auto_generated
        evTurnDone_ProxyReceptionInterface* getItsEvTurnDone_ProxyReceptionInterface();
        
        //## auto_generated
        void setItsEvCarArrive_ProxyReceptionInterface(OMReactive* p_evCarArrive_ProxyReceptionInterface);
        
        //## auto_generated
        void setItsEvGoTurn_ProxyReceptionInterface(evGoTurn_ProxyReceptionInterface* p_evGoTurn_ProxyReceptionInterface);
        
        //## auto_generated
        void setItsEvTurnDone_ProxyReceptionInterface(OMReactive* p_evTurnDone_ProxyReceptionInterface);
        
        ////    Additional operations    ////
        
        //## auto_generated
        InBound_C* getInBound() const;
        
        //## auto_generated
        OutBound_C* getOutBound() const;
    
    protected :
    
        //## auto_generated
        void initRelations();
        
        ////    Attributes    ////
        
        int _p_;		//## attribute _p_
        
        ////    Relations and components    ////
        
        InBound_C InBound;		//## classInstance InBound
        
        OutBound_C OutBound;		//## classInstance OutBound
        
        ////    Framework operations    ////
    
    public :
    
        //## auto_generated
        virtual void destroy();
    };
//#]

    ////    Friends    ////
    
#ifdef _OMINSTRUMENT
    friend class OMAnimatedTurnLane;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    TurnLane(IOxfActive* theActiveContext = 0);
    
    //## auto_generated
    ~TurnLane();
    
    ////    Additional operations    ////
    
    //## auto_generated
    pThru_C* getPThru() const;
    
    //## auto_generated
    pThru_C* get_pThru() const;
    
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
    
    ////    Relations and components    ////
    
//#[ ignore
    pThru_C pThru;
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
    
    // WaitingToStart:
    //## statechart_method
    inline bool WaitingToStart_IN() const;
    
    // Active:
    //## statechart_method
    inline bool Active_IN() const;
    
    //## statechart_method
    void Active_entDef();
    
    //## statechart_method
    void Active_exit();
    
    //## statechart_method
    IOxfReactive::TakeEventStatus Active_processEvent();
    
    // state_9:
    //## statechart_method
    inline bool state_9_IN() const;
    
    //## statechart_method
    void state_9_entDef();
    
    //## statechart_method
    IOxfReactive::TakeEventStatus state_9_processEvent();
    
    // sendaction_2:
    //## statechart_method
    inline bool sendaction_2_IN() const;
    
    // NoCarPresent:
    //## statechart_method
    inline bool NoCarPresent_IN() const;
    
    // state_10:
    //## statechart_method
    inline bool state_10_IN() const;
    
    //## statechart_method
    void state_10_entDef();
    
    //## statechart_method
    void state_10_exit();
    
    //## statechart_method
    IOxfReactive::TakeEventStatus state_10_processEvent();
    
    // YellowState:
    //## statechart_method
    inline bool YellowState_IN() const;
    
    // WaitingToGo:
    //## statechart_method
    inline bool WaitingToGo_IN() const;
    
    // sendaction_7:
    //## statechart_method
    inline bool sendaction_7_IN() const;
    
    // RedState:
    //## statechart_method
    inline bool RedState_IN() const;
    
    // GreenState:
    //## statechart_method
    inline bool GreenState_IN() const;
    
    ////    Framework    ////

protected :

//#[ ignore
    enum TurnLane_Enum {
        OMNonState = 0,
        WaitingToStart = 1,
        Active = 2,
        state_9 = 3,
        sendaction_2 = 4,
        NoCarPresent = 5,
        state_10 = 6,
        YellowState = 7,
        WaitingToGo = 8,
        sendaction_7 = 9,
        RedState = 10,
        GreenState = 11
    };
    
    int rootState_subState;
    
    int rootState_active;
    
    int state_9_subState;
    
    int state_9_active;
    
    int state_10_subState;
    
    int state_10_active;
    
    IOxfTimeout* state_10_timeout;
//#]
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedTurnLane : public OMAnimatedTrafficLane {
    DECLARE_REACTIVE_META(TurnLane, OMAnimatedTurnLane)
    
    ////    Framework operations    ////
    
public :

    virtual void serializeAttributes(AOMSAttributes* aomsAttributes) const;
    
    virtual void serializeRelations(AOMSRelations* aomsRelations) const;
    
    //## statechart_method
    void rootState_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void WaitingToStart_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void Active_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void state_9_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void sendaction_2_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void NoCarPresent_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void state_10_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void YellowState_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void WaitingToGo_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void sendaction_7_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void RedState_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void GreenState_serializeStates(AOMSState* aomsState) const;
};
//#]
#endif // _OMINSTRUMENT

inline bool TurnLane::rootState_IN() const {
    return true;
}

inline bool TurnLane::WaitingToStart_IN() const {
    return rootState_subState == WaitingToStart;
}

inline bool TurnLane::Active_IN() const {
    return rootState_subState == Active;
}

inline bool TurnLane::state_9_IN() const {
    return Active_IN();
}

inline bool TurnLane::sendaction_2_IN() const {
    return state_9_subState == sendaction_2;
}

inline bool TurnLane::NoCarPresent_IN() const {
    return state_9_subState == NoCarPresent;
}

inline bool TurnLane::state_10_IN() const {
    return Active_IN();
}

inline bool TurnLane::YellowState_IN() const {
    return state_10_subState == YellowState;
}

inline bool TurnLane::WaitingToGo_IN() const {
    return state_10_subState == WaitingToGo;
}

inline bool TurnLane::sendaction_7_IN() const {
    return state_10_subState == sendaction_7;
}

inline bool TurnLane::RedState_IN() const {
    return state_10_subState == RedState;
}

inline bool TurnLane::GreenState_IN() const {
    return state_10_subState == GreenState;
}

#endif
/*********************************************************************
	File Path	: TrafficLightMVP2/MVP2Config/TurnLane.h
*********************************************************************/
