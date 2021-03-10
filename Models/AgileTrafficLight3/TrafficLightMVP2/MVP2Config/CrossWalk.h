/*********************************************************************
	Rhapsody	: 9.0 
	Login		: Bruce
	Component	: TrafficLightMVP2 
	Configuration 	: MVP2Config
	Model Element	: CrossWalk
//!	Generated Date	: Tue, 8, Dec 2020  
	File Path	: TrafficLightMVP2/MVP2Config/CrossWalk.h
*********************************************************************/

#ifndef CrossWalk_H
#define CrossWalk_H

//## auto_generated
#include <oxf/oxf.h>
//## auto_generated
#include <../Profiles/SysML/SIDefinitions.h>
//## auto_generated
#include <aom/aom.h>
//## auto_generated
#include "Default.h"
//## class CrossWalk
#include "evWalk_ProxyReceptionInterface.h"
//## class CrossWalk
#include "TrafficLane.h"
//## class OutBound
#include "evPedestrianArrive_ProxyReceptionInterface.h"
//## class OutBound
#include "evWalkComplete_ProxyReceptionInterface.h"
//## package Default

//## class CrossWalk
class CrossWalk : public TrafficLane, public evWalk_ProxyReceptionInterface {
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
        class InBound_C : public evWalk_ProxyReceptionInterface {
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
            void setItsEvWalk_ProxyReceptionInterface(evWalk_ProxyReceptionInterface* p_evWalk_ProxyReceptionInterface);
            
            //## auto_generated
            pThru_C* getPort() const;
            
            //## auto_generated
            void setPort(pThru_C* p_pThru_C);
        
        protected :
        
            //## auto_generated
            void cleanUpRelations();
            
            ////    Relations and components    ////
            
            evWalk_ProxyReceptionInterface* itsEvWalk_ProxyReceptionInterface;		//## link itsEvWalk_ProxyReceptionInterface
            
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
        class OutBound_C : public evPedestrianArrive_ProxyReceptionInterface, public evWalkComplete_ProxyReceptionInterface {
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
            void setItsEvPedestrianArrive_ProxyReceptionInterface(OMReactive* p_OMReactive);
            
            //## auto_generated
            void setItsEvWalkComplete_ProxyReceptionInterface(OMReactive* p_OMReactive);
        
        protected :
        
            //## auto_generated
            void cleanUpRelations();
            
            ////    Relations and components    ////
            
            OMReactive* itsEvPedestrianArrive_ProxyReceptionInterface;		//## link itsEvPedestrianArrive_ProxyReceptionInterface
            
            OMReactive* itsEvWalkComplete_ProxyReceptionInterface;		//## link itsEvWalkComplete_ProxyReceptionInterface
        };
        
        ////    Constructors and destructors    ////
        
        //## auto_generated
        pThru_C();
        
        //## auto_generated
        virtual ~pThru_C();
        
        ////    Operations    ////
        
        //## auto_generated
        void connectCrossWalk(CrossWalk* part);
        
        //## auto_generated
        evPedestrianArrive_ProxyReceptionInterface* getItsEvPedestrianArrive_ProxyReceptionInterface();
        
        //## auto_generated
        evWalkComplete_ProxyReceptionInterface* getItsEvWalkComplete_ProxyReceptionInterface();
        
        //## auto_generated
        evWalk_ProxyReceptionInterface* getItsEvWalk_ProxyReceptionInterface();
        
        //## auto_generated
        void setItsEvPedestrianArrive_ProxyReceptionInterface(OMReactive* p_evPedestrianArrive_ProxyReceptionInterface);
        
        //## auto_generated
        void setItsEvWalkComplete_ProxyReceptionInterface(OMReactive* p_evWalkComplete_ProxyReceptionInterface);
        
        //## auto_generated
        void setItsEvWalk_ProxyReceptionInterface(evWalk_ProxyReceptionInterface* p_evWalk_ProxyReceptionInterface);
        
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
    friend class OMAnimatedCrossWalk;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    CrossWalk(IOxfActive* theActiveContext = 0);
    
    //## auto_generated
    virtual ~CrossWalk();
    
    ////    Operations    ////
    
    //## operation setColor(WALK_TYPE)
    virtual void setColor(const WALK_TYPE& w);
    
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
    void state_9_exit();
    
    //## statechart_method
    IOxfReactive::TakeEventStatus state_9_processEvent();
    
    // WalkState:
    //## statechart_method
    inline bool WalkState_IN() const;
    
    // sendaction_4:
    //## statechart_method
    inline bool sendaction_4_IN() const;
    
    // RunState:
    //## statechart_method
    inline bool RunState_IN() const;
    
    // DontWalkState:
    //## statechart_method
    inline bool DontWalkState_IN() const;
    
    // state_8:
    //## statechart_method
    inline bool state_8_IN() const;
    
    //## statechart_method
    void state_8_entDef();
    
    //## statechart_method
    IOxfReactive::TakeEventStatus state_8_processEvent();
    
    // WaitingForPedestrian:
    //## statechart_method
    inline bool WaitingForPedestrian_IN() const;
    
    // sendaction_6:
    //## statechart_method
    inline bool sendaction_6_IN() const;
    
    ////    Framework    ////

protected :

//#[ ignore
    enum CrossWalk_Enum {
        OMNonState = 0,
        WaitingToStart = 1,
        Active = 2,
        state_9 = 3,
        WalkState = 4,
        sendaction_4 = 5,
        RunState = 6,
        DontWalkState = 7,
        state_8 = 8,
        WaitingForPedestrian = 9,
        sendaction_6 = 10
    };
    
    int rootState_subState;
    
    int rootState_active;
    
    int state_9_subState;
    
    int state_9_active;
    
    IOxfTimeout* state_9_timeout;
    
    int state_8_subState;
    
    int state_8_active;
//#]
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedCrossWalk : public OMAnimatedTrafficLane {
    DECLARE_REACTIVE_META(CrossWalk, OMAnimatedCrossWalk)
    
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
    void WalkState_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void sendaction_4_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void RunState_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void DontWalkState_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void state_8_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void WaitingForPedestrian_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void sendaction_6_serializeStates(AOMSState* aomsState) const;
};
//#]
#endif // _OMINSTRUMENT

inline bool CrossWalk::rootState_IN() const {
    return true;
}

inline bool CrossWalk::WaitingToStart_IN() const {
    return rootState_subState == WaitingToStart;
}

inline bool CrossWalk::Active_IN() const {
    return rootState_subState == Active;
}

inline bool CrossWalk::state_9_IN() const {
    return Active_IN();
}

inline bool CrossWalk::WalkState_IN() const {
    return state_9_subState == WalkState;
}

inline bool CrossWalk::sendaction_4_IN() const {
    return state_9_subState == sendaction_4;
}

inline bool CrossWalk::RunState_IN() const {
    return state_9_subState == RunState;
}

inline bool CrossWalk::DontWalkState_IN() const {
    return state_9_subState == DontWalkState;
}

inline bool CrossWalk::state_8_IN() const {
    return Active_IN();
}

inline bool CrossWalk::WaitingForPedestrian_IN() const {
    return state_8_subState == WaitingForPedestrian;
}

inline bool CrossWalk::sendaction_6_IN() const {
    return state_8_subState == sendaction_6;
}

#endif
/*********************************************************************
	File Path	: TrafficLightMVP2/MVP2Config/CrossWalk.h
*********************************************************************/
