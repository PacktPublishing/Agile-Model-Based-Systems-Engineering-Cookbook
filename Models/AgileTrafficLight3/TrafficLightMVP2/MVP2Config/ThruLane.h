/*********************************************************************
	Rhapsody	: 9.0 
	Login		: Bruce
	Component	: TrafficLightMVP2 
	Configuration 	: MVP2Config
	Model Element	: ThruLane
//!	Generated Date	: Tue, 8, Dec 2020  
	File Path	: TrafficLightMVP2/MVP2Config/ThruLane.h
*********************************************************************/

#ifndef ThruLane_H
#define ThruLane_H

//## auto_generated
#include <oxf/oxf.h>
//## auto_generated
#include <../Profiles/SysML/SIDefinitions.h>
//## auto_generated
#include <aom/aom.h>
//## auto_generated
#include "Default.h"
//## class ThruLane
#include "evCarArrive_ProxyReceptionInterface.h"
//## class ThruLane
#include "evLaneDone_ProxyReceptionInterface.h"
//## class ThruLane
#include "evPedestrianArrive_ProxyReceptionInterface.h"
//## class ThruLane
#include "evTurnDone_ProxyReceptionInterface.h"
//## class ThruLane
#include "evWalkComplete_ProxyReceptionInterface.h"
//## class ThruLane
#include "TrafficLane.h"
//## class OutBound
#include "evGoTurn_ProxyReceptionInterface.h"
//## class OutBound
#include "evWalk_ProxyReceptionInterface.h"
//## package Default

//## class ThruLane
class ThruLane : public TrafficLane, public evLaneDone_ProxyReceptionInterface, public evTurnDone_ProxyReceptionInterface, public evCarArrive_ProxyReceptionInterface, public evPedestrianArrive_ProxyReceptionInterface, public evWalkComplete_ProxyReceptionInterface {
public :

//#[ ignore
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
        void connectThruLane(ThruLane* part);
        
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
    class pTurn_C {
    public :
    
        //## auto_generated
        class InBound_C;
        
        //## auto_generated
        class OutBound_C;
        
        //## package Default
        class InBound_C : public evTurnDone_ProxyReceptionInterface, public evCarArrive_ProxyReceptionInterface {
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
            void setItsEvCarArrive_ProxyReceptionInterface(evCarArrive_ProxyReceptionInterface* p_evCarArrive_ProxyReceptionInterface);
            
            //## auto_generated
            void setItsEvTurnDone_ProxyReceptionInterface(evTurnDone_ProxyReceptionInterface* p_evTurnDone_ProxyReceptionInterface);
            
            //## auto_generated
            pTurn_C* getPort() const;
            
            //## auto_generated
            void setPort(pTurn_C* p_pTurn_C);
        
        protected :
        
            //## auto_generated
            void cleanUpRelations();
            
            ////    Relations and components    ////
            
            evCarArrive_ProxyReceptionInterface* itsEvCarArrive_ProxyReceptionInterface;		//## link itsEvCarArrive_ProxyReceptionInterface
            
            evTurnDone_ProxyReceptionInterface* itsEvTurnDone_ProxyReceptionInterface;		//## link itsEvTurnDone_ProxyReceptionInterface
            
            pTurn_C* port;		//## link port
            
            ////    Framework operations    ////
        
        public :
        
            //## auto_generated
            void __setPort(pTurn_C* p_pTurn_C);
            
            //## auto_generated
            void _setPort(pTurn_C* p_pTurn_C);
            
            //## auto_generated
            void _clearPort();
        };
        
        //## package Default
        class OutBound_C : public evGoTurn_ProxyReceptionInterface {
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
            void setItsEvGoTurn_ProxyReceptionInterface(OMReactive* p_OMReactive);
        
        protected :
        
            //## auto_generated
            void cleanUpRelations();
            
            ////    Relations and components    ////
            
            OMReactive* itsEvGoTurn_ProxyReceptionInterface;		//## link itsEvGoTurn_ProxyReceptionInterface
        };
        
        ////    Constructors and destructors    ////
        
        //## auto_generated
        pTurn_C();
        
        //## auto_generated
        virtual ~pTurn_C();
        
        ////    Operations    ////
        
        //## auto_generated
        void connectThruLane(ThruLane* part);
        
        //## auto_generated
        evCarArrive_ProxyReceptionInterface* getItsEvCarArrive_ProxyReceptionInterface();
        
        //## auto_generated
        evGoTurn_ProxyReceptionInterface* getItsEvGoTurn_ProxyReceptionInterface();
        
        //## auto_generated
        evTurnDone_ProxyReceptionInterface* getItsEvTurnDone_ProxyReceptionInterface();
        
        //## auto_generated
        void setItsEvCarArrive_ProxyReceptionInterface(evCarArrive_ProxyReceptionInterface* p_evCarArrive_ProxyReceptionInterface);
        
        //## auto_generated
        void setItsEvGoTurn_ProxyReceptionInterface(OMReactive* p_evGoTurn_ProxyReceptionInterface);
        
        //## auto_generated
        void setItsEvTurnDone_ProxyReceptionInterface(evTurnDone_ProxyReceptionInterface* p_evTurnDone_ProxyReceptionInterface);
        
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
    
    //## package Default
    class pCrossWalk_C {
    public :
    
        //## auto_generated
        class InBound_C;
        
        //## auto_generated
        class OutBound_C;
        
        //## package Default
        class InBound_C : public evPedestrianArrive_ProxyReceptionInterface, public evWalkComplete_ProxyReceptionInterface {
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
            void setItsEvPedestrianArrive_ProxyReceptionInterface(evPedestrianArrive_ProxyReceptionInterface* p_evPedestrianArrive_ProxyReceptionInterface);
            
            //## auto_generated
            void setItsEvWalkComplete_ProxyReceptionInterface(evWalkComplete_ProxyReceptionInterface* p_evWalkComplete_ProxyReceptionInterface);
            
            //## auto_generated
            pCrossWalk_C* getPort() const;
            
            //## auto_generated
            void setPort(pCrossWalk_C* p_pCrossWalk_C);
        
        protected :
        
            //## auto_generated
            void cleanUpRelations();
            
            ////    Relations and components    ////
            
            evPedestrianArrive_ProxyReceptionInterface* itsEvPedestrianArrive_ProxyReceptionInterface;		//## link itsEvPedestrianArrive_ProxyReceptionInterface
            
            evWalkComplete_ProxyReceptionInterface* itsEvWalkComplete_ProxyReceptionInterface;		//## link itsEvWalkComplete_ProxyReceptionInterface
            
            pCrossWalk_C* port;		//## link port
            
            ////    Framework operations    ////
        
        public :
        
            //## auto_generated
            void __setPort(pCrossWalk_C* p_pCrossWalk_C);
            
            //## auto_generated
            void _setPort(pCrossWalk_C* p_pCrossWalk_C);
            
            //## auto_generated
            void _clearPort();
        };
        
        //## package Default
        class OutBound_C : public evWalk_ProxyReceptionInterface {
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
            void setItsEvWalk_ProxyReceptionInterface(OMReactive* p_OMReactive);
        
        protected :
        
            //## auto_generated
            void cleanUpRelations();
            
            ////    Relations and components    ////
            
            OMReactive* itsEvWalk_ProxyReceptionInterface;		//## link itsEvWalk_ProxyReceptionInterface
        };
        
        ////    Constructors and destructors    ////
        
        //## auto_generated
        pCrossWalk_C();
        
        //## auto_generated
        virtual ~pCrossWalk_C();
        
        ////    Operations    ////
        
        //## auto_generated
        void connectThruLane(ThruLane* part);
        
        //## auto_generated
        evPedestrianArrive_ProxyReceptionInterface* getItsEvPedestrianArrive_ProxyReceptionInterface();
        
        //## auto_generated
        evWalkComplete_ProxyReceptionInterface* getItsEvWalkComplete_ProxyReceptionInterface();
        
        //## auto_generated
        evWalk_ProxyReceptionInterface* getItsEvWalk_ProxyReceptionInterface();
        
        //## auto_generated
        void setItsEvPedestrianArrive_ProxyReceptionInterface(evPedestrianArrive_ProxyReceptionInterface* p_evPedestrianArrive_ProxyReceptionInterface);
        
        //## auto_generated
        void setItsEvWalkComplete_ProxyReceptionInterface(evWalkComplete_ProxyReceptionInterface* p_evWalkComplete_ProxyReceptionInterface);
        
        //## auto_generated
        void setItsEvWalk_ProxyReceptionInterface(OMReactive* p_evWalk_ProxyReceptionInterface);
        
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
    friend class OMAnimatedThruLane;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    ThruLane(IOxfActive* theActiveContext = 0);
    
    //## auto_generated
    ~ThruLane();
    
    ////    Additional operations    ////
    
    //## auto_generated
    pInThru_C* getPInThru() const;
    
    //## auto_generated
    pInThru_C* get_pInThru() const;
    
    //## auto_generated
    pOutThru_C* getPOutThru() const;
    
    //## auto_generated
    pOutThru_C* get_pOutThru() const;
    
    //## auto_generated
    pTurn_C* getPTurn() const;
    
    //## auto_generated
    pTurn_C* get_pTurn() const;
    
    //## auto_generated
    pCrossWalk_C* getPCrossWalk() const;
    
    //## auto_generated
    pCrossWalk_C* get_pCrossWalk() const;
    
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
    pInThru_C pInThru;
    
    pOutThru_C pOutThru;
    
    pTurn_C pTurn;
    
    pCrossWalk_C pCrossWalk;
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
    
    //## statechart_method
    IOxfReactive::TakeEventStatus WaitingToStartTakeevGo();
    
    //## statechart_method
    IOxfReactive::TakeEventStatus WaitingToStart_handleEvent();
    
    // Active:
    //## statechart_method
    inline bool Active_IN() const;
    
    //## statechart_method
    void Active_entDef();
    
    //## statechart_method
    void Active_exit();
    
    //## statechart_method
    IOxfReactive::TakeEventStatus Active_processEvent();
    
    // state_19:
    //## statechart_method
    inline bool state_19_IN() const;
    
    //## statechart_method
    void state_19_entDef();
    
    //## statechart_method
    IOxfReactive::TakeEventStatus state_19_processEvent();
    
    // PedestrianWaiting:
    //## statechart_method
    inline bool PedestrianWaiting_IN() const;
    
    // NoPedstrianWaiting:
    //## statechart_method
    inline bool NoPedstrianWaiting_IN() const;
    
    // state_13:
    //## statechart_method
    inline bool state_13_IN() const;
    
    //## statechart_method
    void state_13_entDef();
    
    //## statechart_method
    IOxfReactive::TakeEventStatus state_13_processEvent();
    
    // TurnLaneEmpty:
    //## statechart_method
    inline bool TurnLaneEmpty_IN() const;
    
    // TurnCarWaiting:
    //## statechart_method
    inline bool TurnCarWaiting_IN() const;
    
    // state_12:
    //## statechart_method
    inline bool state_12_IN() const;
    
    //## statechart_method
    void state_12_entDef();
    
    //## statechart_method
    void state_12_exit();
    
    //## statechart_method
    IOxfReactive::TakeEventStatus state_12_processEvent();
    
    // YellowState:
    //## statechart_method
    inline bool YellowState_IN() const;
    
    // WaitingForPedestrian:
    //## statechart_method
    inline bool WaitingForPedestrian_IN() const;
    
    // WaitForTurnLane:
    //## statechart_method
    inline bool WaitForTurnLane_IN() const;
    
    // WaitForOtherLaneCompletion:
    //## statechart_method
    inline bool WaitForOtherLaneCompletion_IN() const;
    
    // StateCompletionStep:
    //## statechart_method
    inline bool StateCompletionStep_IN() const;
    
    // sendaction_7:
    //## statechart_method
    inline bool sendaction_7_IN() const;
    
    // sendaction_6:
    //## statechart_method
    inline bool sendaction_6_IN() const;
    
    // sendaction_4:
    //## statechart_method
    inline bool sendaction_4_IN() const;
    
    // sendaction_20:
    //## statechart_method
    inline bool sendaction_20_IN() const;
    
    // sendaction_18:
    //## statechart_method
    inline bool sendaction_18_IN() const;
    
    // RedState:
    //## statechart_method
    inline bool RedState_IN() const;
    
    // GreenState:
    //## statechart_method
    inline bool GreenState_IN() const;
    
    ////    Framework    ////

protected :

//#[ ignore
    enum ThruLane_Enum {
        OMNonState = 0,
        WaitingToStart = 1,
        Active = 2,
        state_19 = 3,
        PedestrianWaiting = 4,
        NoPedstrianWaiting = 5,
        state_13 = 6,
        TurnLaneEmpty = 7,
        TurnCarWaiting = 8,
        state_12 = 9,
        YellowState = 10,
        WaitingForPedestrian = 11,
        WaitForTurnLane = 12,
        WaitForOtherLaneCompletion = 13,
        StateCompletionStep = 14,
        sendaction_7 = 15,
        sendaction_6 = 16,
        sendaction_4 = 17,
        sendaction_20 = 18,
        sendaction_18 = 19,
        RedState = 20,
        GreenState = 21
    };
    
    int rootState_subState;
    
    int rootState_active;
    
    int state_19_subState;
    
    int state_19_active;
    
    int state_13_subState;
    
    int state_13_active;
    
    int state_12_subState;
    
    int state_12_active;
    
    IOxfTimeout* state_12_timeout;
//#]
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedThruLane : public OMAnimatedTrafficLane {
    DECLARE_REACTIVE_META(ThruLane, OMAnimatedThruLane)
    
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
    void state_19_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void PedestrianWaiting_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void NoPedstrianWaiting_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void state_13_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void TurnLaneEmpty_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void TurnCarWaiting_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void state_12_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void YellowState_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void WaitingForPedestrian_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void WaitForTurnLane_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void WaitForOtherLaneCompletion_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void StateCompletionStep_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void sendaction_7_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void sendaction_6_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void sendaction_4_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void sendaction_20_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void sendaction_18_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void RedState_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void GreenState_serializeStates(AOMSState* aomsState) const;
};
//#]
#endif // _OMINSTRUMENT

inline bool ThruLane::rootState_IN() const {
    return true;
}

inline bool ThruLane::WaitingToStart_IN() const {
    return rootState_subState == WaitingToStart;
}

inline bool ThruLane::Active_IN() const {
    return rootState_subState == Active;
}

inline bool ThruLane::state_19_IN() const {
    return Active_IN();
}

inline bool ThruLane::PedestrianWaiting_IN() const {
    return state_19_subState == PedestrianWaiting;
}

inline bool ThruLane::NoPedstrianWaiting_IN() const {
    return state_19_subState == NoPedstrianWaiting;
}

inline bool ThruLane::state_13_IN() const {
    return Active_IN();
}

inline bool ThruLane::TurnLaneEmpty_IN() const {
    return state_13_subState == TurnLaneEmpty;
}

inline bool ThruLane::TurnCarWaiting_IN() const {
    return state_13_subState == TurnCarWaiting;
}

inline bool ThruLane::state_12_IN() const {
    return Active_IN();
}

inline bool ThruLane::YellowState_IN() const {
    return state_12_subState == YellowState;
}

inline bool ThruLane::WaitingForPedestrian_IN() const {
    return state_12_subState == WaitingForPedestrian;
}

inline bool ThruLane::WaitForTurnLane_IN() const {
    return state_12_subState == WaitForTurnLane;
}

inline bool ThruLane::WaitForOtherLaneCompletion_IN() const {
    return state_12_subState == WaitForOtherLaneCompletion;
}

inline bool ThruLane::StateCompletionStep_IN() const {
    return state_12_subState == StateCompletionStep;
}

inline bool ThruLane::sendaction_7_IN() const {
    return state_12_subState == sendaction_7;
}

inline bool ThruLane::sendaction_6_IN() const {
    return state_12_subState == sendaction_6;
}

inline bool ThruLane::sendaction_4_IN() const {
    return state_12_subState == sendaction_4;
}

inline bool ThruLane::sendaction_20_IN() const {
    return state_12_subState == sendaction_20;
}

inline bool ThruLane::sendaction_18_IN() const {
    return state_12_subState == sendaction_18;
}

inline bool ThruLane::RedState_IN() const {
    return state_12_subState == RedState;
}

inline bool ThruLane::GreenState_IN() const {
    return state_12_subState == GreenState;
}

#endif
/*********************************************************************
	File Path	: TrafficLightMVP2/MVP2Config/ThruLane.h
*********************************************************************/
