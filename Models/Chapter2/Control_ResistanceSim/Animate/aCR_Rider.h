/*********************************************************************
	Rhapsody	: 8.4 
	Login		: Bruce
	Component	: Control_ResistanceSim 
	Configuration 	: Animate
	Model Element	: aCR_Rider
//!	Generated Date	: Wed, 19, Feb 2020  
	File Path	: Control_ResistanceSim/Animate/aCR_Rider.h
*********************************************************************/

#ifndef aCR_Rider_H
#define aCR_Rider_H

//## auto_generated
#include <WebComponents/WebComponentsTypes.h>
//## auto_generated
#include <oxf/oxf.h>
//## auto_generated
#include <../Profiles/SysML/SIDefinitions.h>
//## auto_generated
#include <aom/aom.h>
//## auto_generated
#include "math.h"
//## auto_generated
#include "ControlResistanceActorPkg.h"
//## class aCR_Rider
#include "evApplyResistance_ProxyReceptionInterface.h"
//## dependency PI
#include "ControlResistanceTypesPkg.h"
//## class OutBound
#include "reqOn_ProxyReceptionInterface.h"
//## class OutBound
#include "reqSetGear_ProxyReceptionInterface.h"
//## class OutBound
#include "reqSetMeasuredPedalForce_ProxyReceptionInterface.h"
//## class OutBound
#include "reqSetPedalPosition_ProxyReceptionInterface.h"
//## class OutBound
#include "reqSetPedalSpeed_ProxyReceptionInterface.h"
//#[ ignore
#define OMAnim_FunctionalAnalysisPkg_ControlResistancePkg_ControlResistanceActorPkg_aCR_Rider_setBaseForce_Real_ARGS_DECLARATION Real p_baseForce;

#define OMAnim_FunctionalAnalysisPkg_ControlResistancePkg_ControlResistanceActorPkg_aCR_Rider_setCadence_int_ARGS_DECLARATION int p_cadence;

#define OMAnim_FunctionalAnalysisPkg_ControlResistancePkg_ControlResistanceActorPkg_aCR_Rider_setForce_Real_ARGS_DECLARATION Real p_force;

#define OMAnim_FunctionalAnalysisPkg_ControlResistancePkg_ControlResistanceActorPkg_aCR_Rider_setForceIncrement_Real_ARGS_DECLARATION Real p_forceIncrement;

#define OMAnim_FunctionalAnalysisPkg_ControlResistancePkg_ControlResistanceActorPkg_aCR_Rider_setPositionInCycle_Real_ARGS_DECLARATION Real p_positionInCycle;

#define OMAnim_FunctionalAnalysisPkg_ControlResistancePkg_ControlResistanceActorPkg_aCR_Rider_setResistance_Real_ARGS_DECLARATION Real p_resistance;
//#]

//## package FunctionalAnalysisPkg::ControlResistancePkg::ControlResistanceActorPkg

//## class aCR_Rider
class aCR_Rider : public evApplyResistance_ProxyReceptionInterface {
public :

//#[ ignore
    //## package FunctionalAnalysisPkg::ControlResistancePkg::ControlResistanceActorPkg
    class pUc_ControlResistance_C {
    public :
    
        //## auto_generated
        class InBound_C;
        
        //## auto_generated
        class OutBound_C;
        
        //## package FunctionalAnalysisPkg::ControlResistancePkg::ControlResistanceActorPkg
        class InBound_C : public evApplyResistance_ProxyReceptionInterface {
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
            void setItsEvApplyResistance_ProxyReceptionInterface(evApplyResistance_ProxyReceptionInterface* p_evApplyResistance_ProxyReceptionInterface);
            
            //## auto_generated
            pUc_ControlResistance_C* getPort() const;
            
            //## auto_generated
            void setPort(pUc_ControlResistance_C* p_pUc_ControlResistance_C);
        
        protected :
        
            //## auto_generated
            void cleanUpRelations();
            
            ////    Relations and components    ////
            
            evApplyResistance_ProxyReceptionInterface* itsEvApplyResistance_ProxyReceptionInterface;		//## link itsEvApplyResistance_ProxyReceptionInterface
            
            pUc_ControlResistance_C* port;		//## link port
            
            ////    Framework operations    ////
        
        public :
        
            //## auto_generated
            void __setPort(pUc_ControlResistance_C* p_pUc_ControlResistance_C);
            
            //## auto_generated
            void _setPort(pUc_ControlResistance_C* p_pUc_ControlResistance_C);
            
            //## auto_generated
            void _clearPort();
        };
        
        //## package FunctionalAnalysisPkg::ControlResistancePkg::ControlResistanceActorPkg
        class OutBound_C : public reqOn_ProxyReceptionInterface, public reqSetGear_ProxyReceptionInterface, public reqSetPedalPosition_ProxyReceptionInterface, public reqSetPedalSpeed_ProxyReceptionInterface, public reqSetMeasuredPedalForce_ProxyReceptionInterface {
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
            void setItsReqOn_ProxyReceptionInterface(OMReactive* p_OMReactive);
            
            //## auto_generated
            void setItsReqSetGear_ProxyReceptionInterface(OMReactive* p_OMReactive);
            
            //## auto_generated
            void setItsReqSetMeasuredPedalForce_ProxyReceptionInterface(OMReactive* p_OMReactive);
            
            //## auto_generated
            void setItsReqSetPedalPosition_ProxyReceptionInterface(OMReactive* p_OMReactive);
            
            //## auto_generated
            void setItsReqSetPedalSpeed_ProxyReceptionInterface(OMReactive* p_OMReactive);
        
        protected :
        
            //## auto_generated
            void cleanUpRelations();
            
            ////    Relations and components    ////
            
            OMReactive* itsReqOn_ProxyReceptionInterface;		//## link itsReqOn_ProxyReceptionInterface
            
            OMReactive* itsReqSetGear_ProxyReceptionInterface;		//## link itsReqSetGear_ProxyReceptionInterface
            
            OMReactive* itsReqSetMeasuredPedalForce_ProxyReceptionInterface;		//## link itsReqSetMeasuredPedalForce_ProxyReceptionInterface
            
            OMReactive* itsReqSetPedalPosition_ProxyReceptionInterface;		//## link itsReqSetPedalPosition_ProxyReceptionInterface
            
            OMReactive* itsReqSetPedalSpeed_ProxyReceptionInterface;		//## link itsReqSetPedalSpeed_ProxyReceptionInterface
        };
        
        ////    Constructors and destructors    ////
        
        //## auto_generated
        pUc_ControlResistance_C();
        
        //## auto_generated
        virtual ~pUc_ControlResistance_C();
        
        ////    Operations    ////
        
        //## auto_generated
        void connectACR_Rider(aCR_Rider* part);
        
        //## auto_generated
        evApplyResistance_ProxyReceptionInterface* getItsEvApplyResistance_ProxyReceptionInterface();
        
        //## auto_generated
        reqOn_ProxyReceptionInterface* getItsReqOn_ProxyReceptionInterface();
        
        //## auto_generated
        reqSetGear_ProxyReceptionInterface* getItsReqSetGear_ProxyReceptionInterface();
        
        //## auto_generated
        reqSetMeasuredPedalForce_ProxyReceptionInterface* getItsReqSetMeasuredPedalForce_ProxyReceptionInterface();
        
        //## auto_generated
        reqSetPedalPosition_ProxyReceptionInterface* getItsReqSetPedalPosition_ProxyReceptionInterface();
        
        //## auto_generated
        reqSetPedalSpeed_ProxyReceptionInterface* getItsReqSetPedalSpeed_ProxyReceptionInterface();
        
        //## auto_generated
        void setItsEvApplyResistance_ProxyReceptionInterface(evApplyResistance_ProxyReceptionInterface* p_evApplyResistance_ProxyReceptionInterface);
        
        //## auto_generated
        void setItsReqOn_ProxyReceptionInterface(OMReactive* p_reqOn_ProxyReceptionInterface);
        
        //## auto_generated
        void setItsReqSetGear_ProxyReceptionInterface(OMReactive* p_reqSetGear_ProxyReceptionInterface);
        
        //## auto_generated
        void setItsReqSetMeasuredPedalForce_ProxyReceptionInterface(OMReactive* p_reqSetMeasuredPedalForce_ProxyReceptionInterface);
        
        //## auto_generated
        void setItsReqSetPedalPosition_ProxyReceptionInterface(OMReactive* p_reqSetPedalPosition_ProxyReceptionInterface);
        
        //## auto_generated
        void setItsReqSetPedalSpeed_ProxyReceptionInterface(OMReactive* p_reqSetPedalSpeed_ProxyReceptionInterface);
        
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
    friend class OMAnimatedaCR_Rider;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    aCR_Rider(IOxfActive* theActiveContext = 0);
    
    //## auto_generated
    ~aCR_Rider();
    
    ////    Additional operations    ////
    
    //## auto_generated
    pUc_ControlResistance_C* getPUc_ControlResistance() const;
    
    //## auto_generated
    pUc_ControlResistance_C* get_pUc_ControlResistance() const;
    
    //## auto_generated
    Real getBaseForce() const;
    
    //## auto_generated
    void setBaseForce(Real p_baseForce);
    
    //## auto_generated
    int getCadence() const;
    
    //## auto_generated
    void setCadence(int p_cadence);
    
    //## auto_generated
    Real getForce() const;
    
    //## auto_generated
    void setForce(Real p_force);
    
    //## auto_generated
    Real getForceIncrement() const;
    
    //## auto_generated
    void setForceIncrement(Real p_forceIncrement);
    
    //## auto_generated
    Real getPositionInCycle() const;
    
    //## auto_generated
    void setPositionInCycle(Real p_positionInCycle);
    
    //## auto_generated
    Real getResistance() const;
    
    //## auto_generated
    void setResistance(Real p_resistance);
    
    //## auto_generated
    int getSampleRate() const;
    
    //## auto_generated
    void setSampleRate(int p_sampleRate);
    
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

public :

//#[ ignore
    virtual const ClassWebAdapter * getItsWebAdapter() const;
    
    void visitWebAdaptedRelations() const;
//#]

protected :

//#[ ignore
    void initWebAdapters();
//#]

private :

//#[ ignore
    void exStartPedalingWebWrapper();
    
    void exStopPedalingWebWrapper();
//#]

    ////    Attributes    ////

protected :

    Real baseForce;		//## attribute baseForce
    
    int cadence;		//## attribute cadence
    
    Real force;		//## attribute force
    
    Real forceIncrement;		//## attribute forceIncrement
    
    Real positionInCycle;		//## attribute positionInCycle
    
    Real resistance;		//## attribute resistance
    
    int sampleRate;		//## attribute sampleRate
    
    ////    Relations and components    ////
    
//#[ ignore
    pUc_ControlResistance_C pUc_ControlResistance;
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
    
    // Pedaling:
    //## statechart_method
    inline bool Pedaling_IN() const;
    
    //## statechart_method
    void Pedaling_entDef();
    
    //## statechart_method
    void Pedaling_exit();
    
    //## statechart_method
    IOxfReactive::TakeEventStatus Pedaling_processEvent();
    
    //## statechart_method
    IOxfReactive::TakeEventStatus Pedaling_handleEvent();
    
    // state_7:
    //## statechart_method
    inline bool state_7_IN() const;
    
    //## statechart_method
    void state_7_entDef();
    
    //## statechart_method
    void state_7_exit();
    
    //## statechart_method
    IOxfReactive::TakeEventStatus state_7_processEvent();
    
    // WaitingResistance:
    //## statechart_method
    inline bool WaitingResistance_IN() const;
    
    // state_6:
    //## statechart_method
    inline bool state_6_IN() const;
    
    //## statechart_method
    void state_6_entDef();
    
    //## statechart_method
    void state_6_exit();
    
    //## statechart_method
    IOxfReactive::TakeEventStatus state_6_processEvent();
    
    // sendaction_5:
    //## statechart_method
    inline bool sendaction_5_IN() const;
    
    // sendaction_4:
    //## statechart_method
    inline bool sendaction_4_IN() const;
    
    // sendaction_3:
    //## statechart_method
    inline bool sendaction_3_IN() const;
    
    // ApplingForce:
    //## statechart_method
    inline bool ApplingForce_IN() const;
    
    // Idle:
    //## statechart_method
    inline bool Idle_IN() const;
    
    ////    Framework    ////

protected :

//#[ ignore
    enum aCR_Rider_Enum {
        OMNonState = 0,
        Pedaling = 1,
        state_7 = 2,
        WaitingResistance = 3,
        state_6 = 4,
        sendaction_5 = 5,
        sendaction_4 = 6,
        sendaction_3 = 7,
        ApplingForce = 8,
        Idle = 9
    };
    
    int rootState_subState;
    
    int rootState_active;
    
    int state_7_subState;
    
    int state_7_active;
    
    int state_6_subState;
    
    int state_6_active;
    
    IOxfTimeout* state_6_timeout;
//#]

public :

//#[ ignore
    ClassWebAdapter * itsWebAdapter;
//#]
};

#ifdef _OMINSTRUMENT
DECLARE_OPERATION_CLASS(FunctionalAnalysisPkg_ControlResistancePkg_ControlResistanceActorPkg_aCR_Rider_setBaseForce_Real)

DECLARE_OPERATION_CLASS(FunctionalAnalysisPkg_ControlResistancePkg_ControlResistanceActorPkg_aCR_Rider_setCadence_int)

DECLARE_OPERATION_CLASS(FunctionalAnalysisPkg_ControlResistancePkg_ControlResistanceActorPkg_aCR_Rider_setForce_Real)

DECLARE_OPERATION_CLASS(FunctionalAnalysisPkg_ControlResistancePkg_ControlResistanceActorPkg_aCR_Rider_setForceIncrement_Real)

DECLARE_OPERATION_CLASS(FunctionalAnalysisPkg_ControlResistancePkg_ControlResistanceActorPkg_aCR_Rider_setPositionInCycle_Real)

DECLARE_OPERATION_CLASS(FunctionalAnalysisPkg_ControlResistancePkg_ControlResistanceActorPkg_aCR_Rider_setResistance_Real)

//#[ ignore
class OMAnimatedaCR_Rider : virtual public AOMInstance {
    DECLARE_REACTIVE_META(aCR_Rider, OMAnimatedaCR_Rider)
    
    DECLARE_META_OP(FunctionalAnalysisPkg_ControlResistancePkg_ControlResistanceActorPkg_aCR_Rider_setBaseForce_Real)
    
    DECLARE_META_OP(FunctionalAnalysisPkg_ControlResistancePkg_ControlResistanceActorPkg_aCR_Rider_setCadence_int)
    
    DECLARE_META_OP(FunctionalAnalysisPkg_ControlResistancePkg_ControlResistanceActorPkg_aCR_Rider_setForce_Real)
    
    DECLARE_META_OP(FunctionalAnalysisPkg_ControlResistancePkg_ControlResistanceActorPkg_aCR_Rider_setForceIncrement_Real)
    
    DECLARE_META_OP(FunctionalAnalysisPkg_ControlResistancePkg_ControlResistanceActorPkg_aCR_Rider_setPositionInCycle_Real)
    
    DECLARE_META_OP(FunctionalAnalysisPkg_ControlResistancePkg_ControlResistanceActorPkg_aCR_Rider_setResistance_Real)
    
    ////    Framework operations    ////
    
public :

    virtual void serializeAttributes(AOMSAttributes* aomsAttributes) const;
    
    virtual void serializeRelations(AOMSRelations* aomsRelations) const;
    
    //## statechart_method
    void rootState_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void Pedaling_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void state_7_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void WaitingResistance_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void state_6_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void sendaction_5_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void sendaction_4_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void sendaction_3_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void ApplingForce_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void Idle_serializeStates(AOMSState* aomsState) const;
};
//#]
#endif // _OMINSTRUMENT

inline bool aCR_Rider::rootState_IN() const {
    return true;
}

inline bool aCR_Rider::Pedaling_IN() const {
    return rootState_subState == Pedaling;
}

inline bool aCR_Rider::state_7_IN() const {
    return Pedaling_IN();
}

inline bool aCR_Rider::WaitingResistance_IN() const {
    return state_7_subState == WaitingResistance;
}

inline bool aCR_Rider::state_6_IN() const {
    return Pedaling_IN();
}

inline bool aCR_Rider::sendaction_5_IN() const {
    return state_6_subState == sendaction_5;
}

inline bool aCR_Rider::sendaction_4_IN() const {
    return state_6_subState == sendaction_4;
}

inline bool aCR_Rider::sendaction_3_IN() const {
    return state_6_subState == sendaction_3;
}

inline bool aCR_Rider::ApplingForce_IN() const {
    return state_6_subState == ApplingForce;
}

inline bool aCR_Rider::Idle_IN() const {
    return rootState_subState == Idle;
}

#endif
/*********************************************************************
	File Path	: Control_ResistanceSim/Animate/aCR_Rider.h
*********************************************************************/
