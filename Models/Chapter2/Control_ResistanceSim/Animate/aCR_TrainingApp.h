/*********************************************************************
	Rhapsody	: 8.4 
	Login		: Bruce
	Component	: Control_ResistanceSim 
	Configuration 	: Animate
	Model Element	: aCR_TrainingApp
//!	Generated Date	: Thu, 20, Feb 2020  
	File Path	: Control_ResistanceSim/Animate/aCR_TrainingApp.h
*********************************************************************/

#ifndef aCR_TrainingApp_H
#define aCR_TrainingApp_H

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
//## class aCR_TrainingApp
#include "evSendAccelerationToApp_ProxyReceptionInterface.h"
//## class aCR_TrainingApp
#include "evSendFilteredPowerToApp_ProxyReceptionInterface.h"
//## class aCR_TrainingApp
#include "evSendPedalCadenceToApp_ProxyReceptionInterface.h"
//## class aCR_TrainingApp
#include "evSendSpeedToApp_ProxyReceptionInterface.h"
//## class OutBound
#include "reqSetIncline_ProxyReceptionInterface.h"
//#[ ignore
#define OMAnim_FunctionalAnalysisPkg_ControlResistancePkg_ControlResistanceActorPkg_aCR_TrainingApp_setAcceleration_Real_ARGS_DECLARATION Real p_acceleration;

#define OMAnim_FunctionalAnalysisPkg_ControlResistancePkg_ControlResistanceActorPkg_aCR_TrainingApp_setBigChainRing_int_ARGS_DECLARATION int p_bigChainRing;

#define OMAnim_FunctionalAnalysisPkg_ControlResistancePkg_ControlResistanceActorPkg_aCR_TrainingApp_setBikeSpeed_Real_ARGS_DECLARATION Real p_bikeSpeed;

#define OMAnim_FunctionalAnalysisPkg_ControlResistancePkg_ControlResistanceActorPkg_aCR_TrainingApp_setCadence_Real_ARGS_DECLARATION Real p_cadence;

#define OMAnim_FunctionalAnalysisPkg_ControlResistancePkg_ControlResistanceActorPkg_aCR_TrainingApp_setPower_int_ARGS_DECLARATION int p_power;

#define OMAnim_FunctionalAnalysisPkg_ControlResistancePkg_ControlResistanceActorPkg_aCR_TrainingApp_setSmallChainRing_int_ARGS_DECLARATION int p_smallChainRing;

#define OMAnim_FunctionalAnalysisPkg_ControlResistancePkg_ControlResistanceActorPkg_aCR_TrainingApp_setWattsPerKg_int_ARGS_DECLARATION int p_wattsPerKg;
//#]

//## package FunctionalAnalysisPkg::ControlResistancePkg::ControlResistanceActorPkg

//## class aCR_TrainingApp
class aCR_TrainingApp : public evSendPedalCadenceToApp_ProxyReceptionInterface, public evSendFilteredPowerToApp_ProxyReceptionInterface, public evSendSpeedToApp_ProxyReceptionInterface, public evSendAccelerationToApp_ProxyReceptionInterface {
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
        class InBound_C : public evSendPedalCadenceToApp_ProxyReceptionInterface, public evSendFilteredPowerToApp_ProxyReceptionInterface, public evSendSpeedToApp_ProxyReceptionInterface, public evSendAccelerationToApp_ProxyReceptionInterface {
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
            void setItsEvSendAccelerationToApp_ProxyReceptionInterface(evSendAccelerationToApp_ProxyReceptionInterface* p_evSendAccelerationToApp_ProxyReceptionInterface);
            
            //## auto_generated
            void setItsEvSendFilteredPowerToApp_ProxyReceptionInterface(evSendFilteredPowerToApp_ProxyReceptionInterface* p_evSendFilteredPowerToApp_ProxyReceptionInterface);
            
            //## auto_generated
            void setItsEvSendPedalCadenceToApp_ProxyReceptionInterface(evSendPedalCadenceToApp_ProxyReceptionInterface* p_evSendPedalCadenceToApp_ProxyReceptionInterface);
            
            //## auto_generated
            void setItsEvSendSpeedToApp_ProxyReceptionInterface(evSendSpeedToApp_ProxyReceptionInterface* p_evSendSpeedToApp_ProxyReceptionInterface);
            
            //## auto_generated
            pUc_ControlResistance_C* getPort() const;
            
            //## auto_generated
            void setPort(pUc_ControlResistance_C* p_pUc_ControlResistance_C);
        
        protected :
        
            //## auto_generated
            void cleanUpRelations();
            
            ////    Relations and components    ////
            
            evSendAccelerationToApp_ProxyReceptionInterface* itsEvSendAccelerationToApp_ProxyReceptionInterface;		//## link itsEvSendAccelerationToApp_ProxyReceptionInterface
            
            evSendFilteredPowerToApp_ProxyReceptionInterface* itsEvSendFilteredPowerToApp_ProxyReceptionInterface;		//## link itsEvSendFilteredPowerToApp_ProxyReceptionInterface
            
            evSendPedalCadenceToApp_ProxyReceptionInterface* itsEvSendPedalCadenceToApp_ProxyReceptionInterface;		//## link itsEvSendPedalCadenceToApp_ProxyReceptionInterface
            
            evSendSpeedToApp_ProxyReceptionInterface* itsEvSendSpeedToApp_ProxyReceptionInterface;		//## link itsEvSendSpeedToApp_ProxyReceptionInterface
            
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
        class OutBound_C : public reqSetIncline_ProxyReceptionInterface {
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
            void setItsReqSetIncline_ProxyReceptionInterface(OMReactive* p_OMReactive);
        
        protected :
        
            //## auto_generated
            void cleanUpRelations();
            
            ////    Relations and components    ////
            
            OMReactive* itsReqSetIncline_ProxyReceptionInterface;		//## link itsReqSetIncline_ProxyReceptionInterface
        };
        
        ////    Constructors and destructors    ////
        
        //## auto_generated
        pUc_ControlResistance_C();
        
        //## auto_generated
        virtual ~pUc_ControlResistance_C();
        
        ////    Operations    ////
        
        //## auto_generated
        void connectACR_TrainingApp(aCR_TrainingApp* part);
        
        //## auto_generated
        evSendAccelerationToApp_ProxyReceptionInterface* getItsEvSendAccelerationToApp_ProxyReceptionInterface();
        
        //## auto_generated
        evSendFilteredPowerToApp_ProxyReceptionInterface* getItsEvSendFilteredPowerToApp_ProxyReceptionInterface();
        
        //## auto_generated
        evSendPedalCadenceToApp_ProxyReceptionInterface* getItsEvSendPedalCadenceToApp_ProxyReceptionInterface();
        
        //## auto_generated
        evSendSpeedToApp_ProxyReceptionInterface* getItsEvSendSpeedToApp_ProxyReceptionInterface();
        
        //## auto_generated
        reqSetIncline_ProxyReceptionInterface* getItsReqSetIncline_ProxyReceptionInterface();
        
        //## auto_generated
        void setItsEvSendAccelerationToApp_ProxyReceptionInterface(evSendAccelerationToApp_ProxyReceptionInterface* p_evSendAccelerationToApp_ProxyReceptionInterface);
        
        //## auto_generated
        void setItsEvSendFilteredPowerToApp_ProxyReceptionInterface(evSendFilteredPowerToApp_ProxyReceptionInterface* p_evSendFilteredPowerToApp_ProxyReceptionInterface);
        
        //## auto_generated
        void setItsEvSendPedalCadenceToApp_ProxyReceptionInterface(evSendPedalCadenceToApp_ProxyReceptionInterface* p_evSendPedalCadenceToApp_ProxyReceptionInterface);
        
        //## auto_generated
        void setItsEvSendSpeedToApp_ProxyReceptionInterface(evSendSpeedToApp_ProxyReceptionInterface* p_evSendSpeedToApp_ProxyReceptionInterface);
        
        //## auto_generated
        void setItsReqSetIncline_ProxyReceptionInterface(OMReactive* p_reqSetIncline_ProxyReceptionInterface);
        
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
    friend class OMAnimatedaCR_TrainingApp;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    aCR_TrainingApp(IOxfActive* theActiveContext = 0);
    
    //## auto_generated
    ~aCR_TrainingApp();
    
    ////    Additional operations    ////
    
    //## auto_generated
    pUc_ControlResistance_C* getPUc_ControlResistance() const;
    
    //## auto_generated
    pUc_ControlResistance_C* get_pUc_ControlResistance() const;
    
    //## auto_generated
    Real getAcceleration() const;
    
    //## auto_generated
    void setAcceleration(Real p_acceleration);
    
    //## auto_generated
    int getBigChainRing() const;
    
    //## auto_generated
    void setBigChainRing(int p_bigChainRing);
    
    //## auto_generated
    Real getBikeSpeed() const;
    
    //## auto_generated
    void setBikeSpeed(Real p_bikeSpeed);
    
    //## auto_generated
    Real getCadence() const;
    
    //## auto_generated
    void setCadence(Real p_cadence);
    
    //## auto_generated
    int getIncline() const;
    
    //## auto_generated
    void setIncline(int p_incline);
    
    //## auto_generated
    int getPower() const;
    
    //## auto_generated
    void setPower(int p_power);
    
    //## auto_generated
    int getSmallChainRing() const;
    
    //## auto_generated
    void setSmallChainRing(int p_smallChainRing);
    
    //## auto_generated
    int getWattsPerKg() const;
    
    //## auto_generated
    void setWattsPerKg(int p_wattsPerKg);
    
    //## auto_generated
    virtual bool startBehavior();

protected :

    //## auto_generated
    void initRelations();
    
    //## auto_generated
    void initStatechart();

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
    void exSetGearWebWrapper();
    
    void exSetInclineWebWrapper();
    
    void evSendWattsPerKgToAppWebWrapper(double wpk);
//#]

    ////    Attributes    ////

protected :

    Real acceleration;		//## attribute acceleration
    
    int bigChainRing;		//## attribute bigChainRing
    
    Real bikeSpeed;		//## attribute bikeSpeed
    
    Real cadence;		//## attribute cadence
    
    int incline;		//## attribute incline
    
    int power;		//## attribute power
    
    int smallChainRing;		//## attribute smallChainRing
    
    int wattsPerKg;		//## attribute wattsPerKg
    
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
    
    // sendaction_2:
    //## statechart_method
    inline bool sendaction_2_IN() const;
    
    // sendaction_1:
    //## statechart_method
    inline bool sendaction_1_IN() const;
    
    // Operating:
    //## statechart_method
    inline bool Operating_IN() const;
    
    //## statechart_method
    IOxfReactive::TakeEventStatus Operating_handleEvent();
    
    ////    Framework    ////

protected :

//#[ ignore
    enum aCR_TrainingApp_Enum {
        OMNonState = 0,
        sendaction_2 = 1,
        sendaction_1 = 2,
        Operating = 3
    };
    
    int rootState_subState;
    
    int rootState_active;
//#]

public :

//#[ ignore
    ClassWebAdapter * itsWebAdapter;
//#]
};

#ifdef _OMINSTRUMENT
DECLARE_OPERATION_CLASS(FunctionalAnalysisPkg_ControlResistancePkg_ControlResistanceActorPkg_aCR_TrainingApp_setAcceleration_Real)

DECLARE_OPERATION_CLASS(FunctionalAnalysisPkg_ControlResistancePkg_ControlResistanceActorPkg_aCR_TrainingApp_setBigChainRing_int)

DECLARE_OPERATION_CLASS(FunctionalAnalysisPkg_ControlResistancePkg_ControlResistanceActorPkg_aCR_TrainingApp_setBikeSpeed_Real)

DECLARE_OPERATION_CLASS(FunctionalAnalysisPkg_ControlResistancePkg_ControlResistanceActorPkg_aCR_TrainingApp_setCadence_Real)

DECLARE_OPERATION_CLASS(FunctionalAnalysisPkg_ControlResistancePkg_ControlResistanceActorPkg_aCR_TrainingApp_setPower_int)

DECLARE_OPERATION_CLASS(FunctionalAnalysisPkg_ControlResistancePkg_ControlResistanceActorPkg_aCR_TrainingApp_setSmallChainRing_int)

DECLARE_OPERATION_CLASS(FunctionalAnalysisPkg_ControlResistancePkg_ControlResistanceActorPkg_aCR_TrainingApp_setWattsPerKg_int)

//#[ ignore
class OMAnimatedaCR_TrainingApp : virtual public AOMInstance {
    DECLARE_REACTIVE_META(aCR_TrainingApp, OMAnimatedaCR_TrainingApp)
    
    DECLARE_META_OP(FunctionalAnalysisPkg_ControlResistancePkg_ControlResistanceActorPkg_aCR_TrainingApp_setAcceleration_Real)
    
    DECLARE_META_OP(FunctionalAnalysisPkg_ControlResistancePkg_ControlResistanceActorPkg_aCR_TrainingApp_setBigChainRing_int)
    
    DECLARE_META_OP(FunctionalAnalysisPkg_ControlResistancePkg_ControlResistanceActorPkg_aCR_TrainingApp_setBikeSpeed_Real)
    
    DECLARE_META_OP(FunctionalAnalysisPkg_ControlResistancePkg_ControlResistanceActorPkg_aCR_TrainingApp_setCadence_Real)
    
    DECLARE_META_OP(FunctionalAnalysisPkg_ControlResistancePkg_ControlResistanceActorPkg_aCR_TrainingApp_setPower_int)
    
    DECLARE_META_OP(FunctionalAnalysisPkg_ControlResistancePkg_ControlResistanceActorPkg_aCR_TrainingApp_setSmallChainRing_int)
    
    DECLARE_META_OP(FunctionalAnalysisPkg_ControlResistancePkg_ControlResistanceActorPkg_aCR_TrainingApp_setWattsPerKg_int)
    
    ////    Framework operations    ////
    
public :

    virtual void serializeAttributes(AOMSAttributes* aomsAttributes) const;
    
    virtual void serializeRelations(AOMSRelations* aomsRelations) const;
    
    //## statechart_method
    void rootState_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void sendaction_2_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void sendaction_1_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void Operating_serializeStates(AOMSState* aomsState) const;
};
//#]
#endif // _OMINSTRUMENT

inline bool aCR_TrainingApp::rootState_IN() const {
    return true;
}

inline bool aCR_TrainingApp::sendaction_2_IN() const {
    return rootState_subState == sendaction_2;
}

inline bool aCR_TrainingApp::sendaction_1_IN() const {
    return rootState_subState == sendaction_1;
}

inline bool aCR_TrainingApp::Operating_IN() const {
    return rootState_subState == Operating;
}

#endif
/*********************************************************************
	File Path	: Control_ResistanceSim/Animate/aCR_TrainingApp.h
*********************************************************************/
