/*********************************************************************
	Rhapsody	: 8.4 
	Login		: Bruce
	Component	: Control_ResistanceSim 
	Configuration 	: Animate
	Model Element	: Uc_ControlResistance
//!	Generated Date	: Thu, 20, Feb 2020  
	File Path	: Control_ResistanceSim/Animate/Uc_ControlResistance.h
*********************************************************************/

#ifndef Uc_ControlResistance_H
#define Uc_ControlResistance_H

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
#include "ControlResistancePkg.h"
//## class Uc_ControlResistance
#include "reqOn_ProxyReceptionInterface.h"
//## class Uc_ControlResistance
#include "reqSetGear_ProxyReceptionInterface.h"
//## class Uc_ControlResistance
#include "reqSetIncline_ProxyReceptionInterface.h"
//## class Uc_ControlResistance
#include "reqSetMeasuredPedalForce_ProxyReceptionInterface.h"
//## class Uc_ControlResistance
#include "reqSetPedalPosition_ProxyReceptionInterface.h"
//## class Uc_ControlResistance
#include "reqSetPedalSpeed_ProxyReceptionInterface.h"
//## class OutBound
#include "evSendAccelerationToApp_ProxyReceptionInterface.h"
//## class OutBound
#include "evSendFilteredPowerToApp_ProxyReceptionInterface.h"
//## class OutBound
#include "evSendPedalCadenceToApp_ProxyReceptionInterface.h"
//## class OutBound
#include "evSendSpeedToApp_ProxyReceptionInterface.h"
//## class OutBound
#include "evApplyResistance_ProxyReceptionInterface.h"
//#[ ignore
#define OMAnim_FunctionalAnalysisPkg_ControlResistancePkg_Uc_ControlResistance_setAPP_UPDATE_TM_int_ARGS_DECLARATION int p_APP_UPDATE_TM;

#define OMAnim_FunctionalAnalysisPkg_ControlResistancePkg_Uc_ControlResistance_setPHYSICS_UPDATE_TM_int_ARGS_DECLARATION int p_PHYSICS_UPDATE_TM;

#define OMAnim_FunctionalAnalysisPkg_ControlResistancePkg_Uc_ControlResistance_setAcceleration_Real_ARGS_DECLARATION Real p_acceleration;

#define OMAnim_FunctionalAnalysisPkg_ControlResistancePkg_Uc_ControlResistance_setCadence_int_ARGS_DECLARATION int p_cadence;

#define OMAnim_FunctionalAnalysisPkg_ControlResistancePkg_Uc_ControlResistance_setGearRatio_Real_ARGS_DECLARATION Real p_gearRatio;

#define OMAnim_FunctionalAnalysisPkg_ControlResistancePkg_Uc_ControlResistance_setIncline_int_ARGS_DECLARATION int p_incline;

#define OMAnim_FunctionalAnalysisPkg_ControlResistancePkg_Uc_ControlResistance_setMeasuredPedalForce_Real_ARGS_DECLARATION Real p_measuredPedalForce;

#define OMAnim_FunctionalAnalysisPkg_ControlResistancePkg_Uc_ControlResistance_setPedalPosition_Real_ARGS_DECLARATION Real p_pedalPosition;

#define OMAnim_FunctionalAnalysisPkg_ControlResistancePkg_Uc_ControlResistance_setResistance_Real_ARGS_DECLARATION Real p_resistance;

#define OMAnim_FunctionalAnalysisPkg_ControlResistancePkg_Uc_ControlResistance_setRiderMass_Kilogram_ARGS_DECLARATION Kilogram p_riderMass;

#define OMAnim_FunctionalAnalysisPkg_ControlResistancePkg_Uc_ControlResistance_setSpeed_Real_ARGS_DECLARATION Real p_speed;
//#]

//## package FunctionalAnalysisPkg::ControlResistancePkg

//## class Uc_ControlResistance
class Uc_ControlResistance : public reqSetIncline_ProxyReceptionInterface, public reqOn_ProxyReceptionInterface, public reqSetGear_ProxyReceptionInterface, public reqSetPedalPosition_ProxyReceptionInterface, public reqSetPedalSpeed_ProxyReceptionInterface, public reqSetMeasuredPedalForce_ProxyReceptionInterface {
public :

//#[ ignore
    //## package FunctionalAnalysisPkg::ControlResistancePkg
    class paCR_TrainingApp_C {
    public :
    
        //## auto_generated
        class InBound_C;
        
        //## auto_generated
        class OutBound_C;
        
        //## package FunctionalAnalysisPkg::ControlResistancePkg
        class InBound_C : public reqSetIncline_ProxyReceptionInterface {
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
            void setItsReqSetIncline_ProxyReceptionInterface(reqSetIncline_ProxyReceptionInterface* p_reqSetIncline_ProxyReceptionInterface);
            
            //## auto_generated
            paCR_TrainingApp_C* getPort() const;
            
            //## auto_generated
            void setPort(paCR_TrainingApp_C* p_paCR_TrainingApp_C);
        
        protected :
        
            //## auto_generated
            void cleanUpRelations();
            
            ////    Relations and components    ////
            
            reqSetIncline_ProxyReceptionInterface* itsReqSetIncline_ProxyReceptionInterface;		//## link itsReqSetIncline_ProxyReceptionInterface
            
            paCR_TrainingApp_C* port;		//## link port
            
            ////    Framework operations    ////
        
        public :
        
            //## auto_generated
            void __setPort(paCR_TrainingApp_C* p_paCR_TrainingApp_C);
            
            //## auto_generated
            void _setPort(paCR_TrainingApp_C* p_paCR_TrainingApp_C);
            
            //## auto_generated
            void _clearPort();
        };
        
        //## package FunctionalAnalysisPkg::ControlResistancePkg
        class OutBound_C : public evSendPedalCadenceToApp_ProxyReceptionInterface, public evSendFilteredPowerToApp_ProxyReceptionInterface, public evSendSpeedToApp_ProxyReceptionInterface, public evSendAccelerationToApp_ProxyReceptionInterface {
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
            void setItsEvSendAccelerationToApp_ProxyReceptionInterface(OMReactive* p_OMReactive);
            
            //## auto_generated
            void setItsEvSendFilteredPowerToApp_ProxyReceptionInterface(OMReactive* p_OMReactive);
            
            //## auto_generated
            void setItsEvSendPedalCadenceToApp_ProxyReceptionInterface(OMReactive* p_OMReactive);
            
            //## auto_generated
            void setItsEvSendSpeedToApp_ProxyReceptionInterface(OMReactive* p_OMReactive);
        
        protected :
        
            //## auto_generated
            void cleanUpRelations();
            
            ////    Relations and components    ////
            
            OMReactive* itsEvSendAccelerationToApp_ProxyReceptionInterface;		//## link itsEvSendAccelerationToApp_ProxyReceptionInterface
            
            OMReactive* itsEvSendFilteredPowerToApp_ProxyReceptionInterface;		//## link itsEvSendFilteredPowerToApp_ProxyReceptionInterface
            
            OMReactive* itsEvSendPedalCadenceToApp_ProxyReceptionInterface;		//## link itsEvSendPedalCadenceToApp_ProxyReceptionInterface
            
            OMReactive* itsEvSendSpeedToApp_ProxyReceptionInterface;		//## link itsEvSendSpeedToApp_ProxyReceptionInterface
        };
        
        ////    Constructors and destructors    ////
        
        //## auto_generated
        paCR_TrainingApp_C();
        
        //## auto_generated
        virtual ~paCR_TrainingApp_C();
        
        ////    Operations    ////
        
        //## auto_generated
        void connectUc_ControlResistance(Uc_ControlResistance* part);
        
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
        void setItsEvSendAccelerationToApp_ProxyReceptionInterface(OMReactive* p_evSendAccelerationToApp_ProxyReceptionInterface);
        
        //## auto_generated
        void setItsEvSendFilteredPowerToApp_ProxyReceptionInterface(OMReactive* p_evSendFilteredPowerToApp_ProxyReceptionInterface);
        
        //## auto_generated
        void setItsEvSendPedalCadenceToApp_ProxyReceptionInterface(OMReactive* p_evSendPedalCadenceToApp_ProxyReceptionInterface);
        
        //## auto_generated
        void setItsEvSendSpeedToApp_ProxyReceptionInterface(OMReactive* p_evSendSpeedToApp_ProxyReceptionInterface);
        
        //## auto_generated
        void setItsReqSetIncline_ProxyReceptionInterface(reqSetIncline_ProxyReceptionInterface* p_reqSetIncline_ProxyReceptionInterface);
        
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
    
    //## package FunctionalAnalysisPkg::ControlResistancePkg
    class paCR_Rider_C {
    public :
    
        //## auto_generated
        class InBound_C;
        
        //## auto_generated
        class OutBound_C;
        
        //## package FunctionalAnalysisPkg::ControlResistancePkg
        class InBound_C : public reqOn_ProxyReceptionInterface, public reqSetGear_ProxyReceptionInterface, public reqSetPedalPosition_ProxyReceptionInterface, public reqSetPedalSpeed_ProxyReceptionInterface, public reqSetMeasuredPedalForce_ProxyReceptionInterface {
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
            void setItsReqOn_ProxyReceptionInterface(reqOn_ProxyReceptionInterface* p_reqOn_ProxyReceptionInterface);
            
            //## auto_generated
            void setItsReqSetGear_ProxyReceptionInterface(reqSetGear_ProxyReceptionInterface* p_reqSetGear_ProxyReceptionInterface);
            
            //## auto_generated
            void setItsReqSetMeasuredPedalForce_ProxyReceptionInterface(reqSetMeasuredPedalForce_ProxyReceptionInterface* p_reqSetMeasuredPedalForce_ProxyReceptionInterface);
            
            //## auto_generated
            void setItsReqSetPedalPosition_ProxyReceptionInterface(reqSetPedalPosition_ProxyReceptionInterface* p_reqSetPedalPosition_ProxyReceptionInterface);
            
            //## auto_generated
            void setItsReqSetPedalSpeed_ProxyReceptionInterface(reqSetPedalSpeed_ProxyReceptionInterface* p_reqSetPedalSpeed_ProxyReceptionInterface);
            
            //## auto_generated
            paCR_Rider_C* getPort() const;
            
            //## auto_generated
            void setPort(paCR_Rider_C* p_paCR_Rider_C);
        
        protected :
        
            //## auto_generated
            void cleanUpRelations();
            
            ////    Relations and components    ////
            
            reqOn_ProxyReceptionInterface* itsReqOn_ProxyReceptionInterface;		//## link itsReqOn_ProxyReceptionInterface
            
            reqSetGear_ProxyReceptionInterface* itsReqSetGear_ProxyReceptionInterface;		//## link itsReqSetGear_ProxyReceptionInterface
            
            reqSetMeasuredPedalForce_ProxyReceptionInterface* itsReqSetMeasuredPedalForce_ProxyReceptionInterface;		//## link itsReqSetMeasuredPedalForce_ProxyReceptionInterface
            
            reqSetPedalPosition_ProxyReceptionInterface* itsReqSetPedalPosition_ProxyReceptionInterface;		//## link itsReqSetPedalPosition_ProxyReceptionInterface
            
            reqSetPedalSpeed_ProxyReceptionInterface* itsReqSetPedalSpeed_ProxyReceptionInterface;		//## link itsReqSetPedalSpeed_ProxyReceptionInterface
            
            paCR_Rider_C* port;		//## link port
            
            ////    Framework operations    ////
        
        public :
        
            //## auto_generated
            void __setPort(paCR_Rider_C* p_paCR_Rider_C);
            
            //## auto_generated
            void _setPort(paCR_Rider_C* p_paCR_Rider_C);
            
            //## auto_generated
            void _clearPort();
        };
        
        //## package FunctionalAnalysisPkg::ControlResistancePkg
        class OutBound_C : public evApplyResistance_ProxyReceptionInterface {
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
            void setItsEvApplyResistance_ProxyReceptionInterface(OMReactive* p_OMReactive);
        
        protected :
        
            //## auto_generated
            void cleanUpRelations();
            
            ////    Relations and components    ////
            
            OMReactive* itsEvApplyResistance_ProxyReceptionInterface;		//## link itsEvApplyResistance_ProxyReceptionInterface
        };
        
        ////    Constructors and destructors    ////
        
        //## auto_generated
        paCR_Rider_C();
        
        //## auto_generated
        virtual ~paCR_Rider_C();
        
        ////    Operations    ////
        
        //## auto_generated
        void connectUc_ControlResistance(Uc_ControlResistance* part);
        
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
        void setItsEvApplyResistance_ProxyReceptionInterface(OMReactive* p_evApplyResistance_ProxyReceptionInterface);
        
        //## auto_generated
        void setItsReqOn_ProxyReceptionInterface(reqOn_ProxyReceptionInterface* p_reqOn_ProxyReceptionInterface);
        
        //## auto_generated
        void setItsReqSetGear_ProxyReceptionInterface(reqSetGear_ProxyReceptionInterface* p_reqSetGear_ProxyReceptionInterface);
        
        //## auto_generated
        void setItsReqSetMeasuredPedalForce_ProxyReceptionInterface(reqSetMeasuredPedalForce_ProxyReceptionInterface* p_reqSetMeasuredPedalForce_ProxyReceptionInterface);
        
        //## auto_generated
        void setItsReqSetPedalPosition_ProxyReceptionInterface(reqSetPedalPosition_ProxyReceptionInterface* p_reqSetPedalPosition_ProxyReceptionInterface);
        
        //## auto_generated
        void setItsReqSetPedalSpeed_ProxyReceptionInterface(reqSetPedalSpeed_ProxyReceptionInterface* p_reqSetPedalSpeed_ProxyReceptionInterface);
        
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
    friend class OMAnimatedUc_ControlResistance;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    Uc_ControlResistance(IOxfActive* theActiveContext = 0);
    
    //## auto_generated
    virtual ~Uc_ControlResistance();
    
    ////    Operations    ////
    
    //## operation RetrieveCurrentGear()
    virtual void RetrieveCurrentGear();
    
    //## operation RetrieveRiderMass()
    virtual void RetrieveRiderMass();
    
    //## operation applyResistance()
    virtual void applyResistance();
    
    //## operation applyTimeFilterToPower()
    virtual void applyTimeFilterToPower();
    
    //## operation computeAcceleration()
    virtual void computeAcceleration();
    
    //## operation computeDrag()
    virtual void computeDrag();
    
    //## operation computeGearRatio(int,int)
    virtual Real computeGearRatio(int big, int small);
    
    //## operation computeInertia()
    virtual void computeInertia();
    
    //## operation computePedalCadence(Real)
    virtual void computePedalCadence(Real speed);
    
    //## operation computeResistancecToApplyAtThePedal()
    virtual void computeResistancecToApplyAtThePedal();
    
    //## operation computeSpeedAndAcceleration()
    virtual void computeSpeedAndAcceleration();
    
    //## operation retrieveCurrentIncline()
    virtual void retrieveCurrentIncline();
    
    //## operation sendAccelarationToApp()
    virtual void sendAccelarationToApp();
    
    //## operation sendFilteredPowerToApp()
    virtual void sendFilteredPowerToApp();
    
    //## operation sendPedalCadenceToApp()
    virtual void sendPedalCadenceToApp();
    
    //## operation sendSpeedToApp()
    virtual void sendSpeedToApp();
    
    ////    Additional operations    ////
    
    //## auto_generated
    paCR_TrainingApp_C* getPaCR_TrainingApp() const;
    
    //## auto_generated
    paCR_TrainingApp_C* get_paCR_TrainingApp() const;
    
    //## auto_generated
    paCR_Rider_C* getPaCR_Rider() const;
    
    //## auto_generated
    paCR_Rider_C* get_paCR_Rider() const;
    
    //## auto_generated
    int getAPP_UPDATE_TM() const;
    
    //## auto_generated
    void setAPP_UPDATE_TM(int p_APP_UPDATE_TM);
    
    //## auto_generated
    int getPHYSICS_UPDATE_TM() const;
    
    //## auto_generated
    void setPHYSICS_UPDATE_TM(int p_PHYSICS_UPDATE_TM);
    
    //## auto_generated
    Real getAcceleration() const;
    
    //## auto_generated
    void setAcceleration(Real p_acceleration);
    
    //## auto_generated
    int getCadence() const;
    
    //## auto_generated
    void setCadence(int p_cadence);
    
    //## auto_generated
    int getGearFront() const;
    
    //## auto_generated
    void setGearFront(int p_gearFront);
    
    //## auto_generated
    Real getGearRatio() const;
    
    //## auto_generated
    void setGearRatio(Real p_gearRatio);
    
    //## auto_generated
    Real getGearRear() const;
    
    //## auto_generated
    void setGearRear(Real p_gearRear);
    
    //## auto_generated
    int getIncline() const;
    
    //## auto_generated
    void setIncline(int p_incline);
    
    //## auto_generated
    Real getMeasuredPedalForce() const;
    
    //## auto_generated
    void setMeasuredPedalForce(Real p_measuredPedalForce);
    
    //## auto_generated
    Real getPedalPosition() const;
    
    //## auto_generated
    void setPedalPosition(Real p_pedalPosition);
    
    //## auto_generated
    Real getPedalSpeed() const;
    
    //## auto_generated
    void setPedalSpeed(Real p_pedalSpeed);
    
    //## auto_generated
    Real getResistance() const;
    
    //## auto_generated
    void setResistance(Real p_resistance);
    
    //## auto_generated
    Kilogram getRiderMass() const;
    
    //## auto_generated
    void setRiderMass(Kilogram p_riderMass);
    
    //## auto_generated
    Real getSpeed() const;
    
    //## auto_generated
    void setSpeed(Real p_speed);
    
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

    ////    Attributes    ////
    
    int APP_UPDATE_TM;		//## attribute APP_UPDATE_TM
    
    int PHYSICS_UPDATE_TM;		//## attribute PHYSICS_UPDATE_TM
    
    Real acceleration;		//## attribute acceleration
    
    int cadence;		//## attribute cadence
    
    int gearFront;		//## attribute gearFront
    
    Real gearRatio;		//## attribute gearRatio
    
    Real gearRear;		//## attribute gearRear
    
    int incline;		//## attribute incline
    
    Real measuredPedalForce;		//## attribute measuredPedalForce
    
    Real pedalPosition;		//## attribute pedalPosition
    
    Real pedalSpeed;		//## attribute pedalSpeed
    
    Real resistance;		//## attribute resistance
    
    Kilogram riderMass;		//## attribute riderMass
    
    Real speed;		//## attribute speed
    
    ////    Relations and components    ////
    
//#[ ignore
    paCR_TrainingApp_C paCR_TrainingApp;
    
    paCR_Rider_C paCR_Rider;
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
    
    // Running:
    //## statechart_method
    inline bool Running_IN() const;
    
    //## statechart_method
    void Running_entDef();
    
    //## statechart_method
    void Running_exit();
    
    //## statechart_method
    IOxfReactive::TakeEventStatus RunningTakereqOff();
    
    //## statechart_method
    IOxfReactive::TakeEventStatus Running_processEvent();
    
    //## statechart_method
    IOxfReactive::TakeEventStatus Running_handleEvent();
    
    // state_25:
    //## statechart_method
    inline bool state_25_IN() const;
    
    //## statechart_method
    void state_25_entDef();
    
    //## statechart_method
    void state_25_exit();
    
    //## statechart_method
    IOxfReactive::TakeEventStatus state_25_processEvent();
    
    // Gearing:
    //## statechart_method
    inline bool Gearing_IN() const;
    
    // state_24:
    //## statechart_method
    inline bool state_24_IN() const;
    
    //## statechart_method
    void state_24_entDef();
    
    //## statechart_method
    void state_24_exit();
    
    //## statechart_method
    IOxfReactive::TakeEventStatus state_24_processEvent();
    
    // Inclining:
    //## statechart_method
    inline bool Inclining_IN() const;
    
    // state_18:
    //## statechart_method
    inline bool state_18_IN() const;
    
    //## statechart_method
    void state_18_entDef();
    
    //## statechart_method
    void state_18_exit();
    
    //## statechart_method
    IOxfReactive::TakeEventStatus state_18_processEvent();
    
    // ComputingPhysicsModel:
    //## statechart_method
    inline bool ComputingPhysicsModel_IN() const;
    
    //## statechart_method
    void ComputingPhysicsModel_entDef();
    
    //## statechart_method
    void ComputingPhysicsModel_exit();
    
    //## statechart_method
    IOxfReactive::TakeEventStatus ComputingPhysicsModel_processEvent();
    
    // state_22:
    //## statechart_method
    inline bool state_22_IN() const;
    
    //## statechart_method
    void state_22_entDef();
    
    //## statechart_method
    IOxfReactive::TakeEventStatus state_22_processEvent();
    
    // WaitingToUpdateApp:
    //## statechart_method
    inline bool WaitingToUpdateApp_IN() const;
    
    // sendaction_14:
    //## statechart_method
    inline bool sendaction_14_IN() const;
    
    // sendaction_13:
    //## statechart_method
    inline bool sendaction_13_IN() const;
    
    // state_21:
    //## statechart_method
    inline bool state_21_IN() const;
    
    //## statechart_method
    void state_21_entDef();
    
    //## statechart_method
    IOxfReactive::TakeEventStatus state_21_processEvent();
    
    // WaitingToCompute:
    //## statechart_method
    inline bool WaitingToCompute_IN() const;
    
    // sendaction_12:
    //## statechart_method
    inline bool sendaction_12_IN() const;
    
    // state_16:
    //## statechart_method
    inline bool state_16_IN() const;
    
    //## statechart_method
    void state_16_entDef();
    
    //## statechart_method
    void state_16_exit();
    
    //## statechart_method
    IOxfReactive::TakeEventStatus state_16_processEvent();
    
    // Pedaling:
    //## statechart_method
    inline bool Pedaling_IN() const;
    
    //## statechart_method
    void Pedaling_entDef();
    
    //## statechart_method
    void Pedaling_exit();
    
    //## statechart_method
    IOxfReactive::TakeEventStatus Pedaling_processEvent();
    
    // state_9:
    //## statechart_method
    inline bool state_9_IN() const;
    
    //## statechart_method
    void state_9_entDef();
    
    //## statechart_method
    void state_9_exit();
    
    //## statechart_method
    IOxfReactive::TakeEventStatus state_9_processEvent();
    
    // MonitoringPedal:
    //## statechart_method
    inline bool MonitoringPedal_IN() const;
    
    // state_10:
    //## statechart_method
    inline bool state_10_IN() const;
    
    //## statechart_method
    void state_10_entDef();
    
    //## statechart_method
    void state_10_exit();
    
    //## statechart_method
    IOxfReactive::TakeEventStatus state_10_processEvent();
    
    // sendaction_7:
    //## statechart_method
    inline bool sendaction_7_IN() const;
    
    // sendaction_6:
    //## statechart_method
    inline bool sendaction_6_IN() const;
    
    // sendaction_23:
    //## statechart_method
    inline bool sendaction_23_IN() const;
    
    // ComputingPedalMetrics:
    //## statechart_method
    inline bool ComputingPedalMetrics_IN() const;
    
    // Ready:
    //## statechart_method
    inline bool Ready_IN() const;
    
    //## statechart_method
    IOxfReactive::TakeEventStatus ReadyTakereqOn();
    
    //## statechart_method
    IOxfReactive::TakeEventStatus Ready_handleEvent();
    
    ////    Framework    ////

protected :

//#[ ignore
    enum Uc_ControlResistance_Enum {
        OMNonState = 0,
        Running = 1,
        state_25 = 2,
        Gearing = 3,
        state_24 = 4,
        Inclining = 5,
        state_18 = 6,
        ComputingPhysicsModel = 7,
        state_22 = 8,
        WaitingToUpdateApp = 9,
        sendaction_14 = 10,
        sendaction_13 = 11,
        state_21 = 12,
        WaitingToCompute = 13,
        sendaction_12 = 14,
        state_16 = 15,
        Pedaling = 16,
        state_9 = 17,
        MonitoringPedal = 18,
        state_10 = 19,
        sendaction_7 = 20,
        sendaction_6 = 21,
        sendaction_23 = 22,
        ComputingPedalMetrics = 23,
        Ready = 24
    };
    
    int rootState_subState;
    
    int rootState_active;
    
    int state_25_subState;
    
    int state_25_active;
    
    int state_24_subState;
    
    int state_24_active;
    
    int state_18_subState;
    
    int state_18_active;
    
    int state_22_subState;
    
    int state_22_active;
    
    IOxfTimeout* state_22_timeout;
    
    int state_21_subState;
    
    int state_21_active;
    
    IOxfTimeout* state_21_timeout;
    
    int state_16_subState;
    
    int state_16_active;
    
    int state_9_subState;
    
    int state_9_active;
    
    int state_10_subState;
    
    int state_10_active;
    
    IOxfTimeout* state_10_timeout;
//#]

public :

//#[ ignore
    ClassWebAdapter * itsWebAdapter;
//#]
};

#ifdef _OMINSTRUMENT
DECLARE_OPERATION_CLASS(FunctionalAnalysisPkg_ControlResistancePkg_Uc_ControlResistance_setAPP_UPDATE_TM_int)

DECLARE_OPERATION_CLASS(FunctionalAnalysisPkg_ControlResistancePkg_Uc_ControlResistance_setPHYSICS_UPDATE_TM_int)

DECLARE_OPERATION_CLASS(FunctionalAnalysisPkg_ControlResistancePkg_Uc_ControlResistance_setAcceleration_Real)

DECLARE_OPERATION_CLASS(FunctionalAnalysisPkg_ControlResistancePkg_Uc_ControlResistance_setCadence_int)

DECLARE_OPERATION_CLASS(FunctionalAnalysisPkg_ControlResistancePkg_Uc_ControlResistance_setGearRatio_Real)

DECLARE_OPERATION_CLASS(FunctionalAnalysisPkg_ControlResistancePkg_Uc_ControlResistance_setIncline_int)

DECLARE_OPERATION_CLASS(FunctionalAnalysisPkg_ControlResistancePkg_Uc_ControlResistance_setMeasuredPedalForce_Real)

DECLARE_OPERATION_CLASS(FunctionalAnalysisPkg_ControlResistancePkg_Uc_ControlResistance_setPedalPosition_Real)

DECLARE_OPERATION_CLASS(FunctionalAnalysisPkg_ControlResistancePkg_Uc_ControlResistance_setResistance_Real)

DECLARE_OPERATION_CLASS(FunctionalAnalysisPkg_ControlResistancePkg_Uc_ControlResistance_setRiderMass_Kilogram)

DECLARE_OPERATION_CLASS(FunctionalAnalysisPkg_ControlResistancePkg_Uc_ControlResistance_setSpeed_Real)

//#[ ignore
class OMAnimatedUc_ControlResistance : virtual public AOMInstance {
    DECLARE_REACTIVE_META(Uc_ControlResistance, OMAnimatedUc_ControlResistance)
    
    DECLARE_META_OP(FunctionalAnalysisPkg_ControlResistancePkg_Uc_ControlResistance_setAPP_UPDATE_TM_int)
    
    DECLARE_META_OP(FunctionalAnalysisPkg_ControlResistancePkg_Uc_ControlResistance_setPHYSICS_UPDATE_TM_int)
    
    DECLARE_META_OP(FunctionalAnalysisPkg_ControlResistancePkg_Uc_ControlResistance_setAcceleration_Real)
    
    DECLARE_META_OP(FunctionalAnalysisPkg_ControlResistancePkg_Uc_ControlResistance_setCadence_int)
    
    DECLARE_META_OP(FunctionalAnalysisPkg_ControlResistancePkg_Uc_ControlResistance_setGearRatio_Real)
    
    DECLARE_META_OP(FunctionalAnalysisPkg_ControlResistancePkg_Uc_ControlResistance_setIncline_int)
    
    DECLARE_META_OP(FunctionalAnalysisPkg_ControlResistancePkg_Uc_ControlResistance_setMeasuredPedalForce_Real)
    
    DECLARE_META_OP(FunctionalAnalysisPkg_ControlResistancePkg_Uc_ControlResistance_setPedalPosition_Real)
    
    DECLARE_META_OP(FunctionalAnalysisPkg_ControlResistancePkg_Uc_ControlResistance_setResistance_Real)
    
    DECLARE_META_OP(FunctionalAnalysisPkg_ControlResistancePkg_Uc_ControlResistance_setRiderMass_Kilogram)
    
    DECLARE_META_OP(FunctionalAnalysisPkg_ControlResistancePkg_Uc_ControlResistance_setSpeed_Real)
    
    ////    Framework operations    ////
    
public :

    virtual void serializeAttributes(AOMSAttributes* aomsAttributes) const;
    
    virtual void serializeRelations(AOMSRelations* aomsRelations) const;
    
    //## statechart_method
    void rootState_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void Running_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void state_25_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void Gearing_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void state_24_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void Inclining_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void state_18_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void ComputingPhysicsModel_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void state_22_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void WaitingToUpdateApp_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void sendaction_14_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void sendaction_13_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void state_21_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void WaitingToCompute_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void sendaction_12_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void state_16_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void Pedaling_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void state_9_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void MonitoringPedal_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void state_10_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void sendaction_7_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void sendaction_6_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void sendaction_23_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void ComputingPedalMetrics_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void Ready_serializeStates(AOMSState* aomsState) const;
};
//#]
#endif // _OMINSTRUMENT

inline bool Uc_ControlResistance::rootState_IN() const {
    return true;
}

inline bool Uc_ControlResistance::Running_IN() const {
    return rootState_subState == Running;
}

inline bool Uc_ControlResistance::state_25_IN() const {
    return Running_IN();
}

inline bool Uc_ControlResistance::Gearing_IN() const {
    return state_25_subState == Gearing;
}

inline bool Uc_ControlResistance::state_24_IN() const {
    return Running_IN();
}

inline bool Uc_ControlResistance::Inclining_IN() const {
    return state_24_subState == Inclining;
}

inline bool Uc_ControlResistance::state_18_IN() const {
    return Running_IN();
}

inline bool Uc_ControlResistance::ComputingPhysicsModel_IN() const {
    return state_18_subState == ComputingPhysicsModel;
}

inline bool Uc_ControlResistance::state_22_IN() const {
    return ComputingPhysicsModel_IN();
}

inline bool Uc_ControlResistance::WaitingToUpdateApp_IN() const {
    return state_22_subState == WaitingToUpdateApp;
}

inline bool Uc_ControlResistance::sendaction_14_IN() const {
    return state_22_subState == sendaction_14;
}

inline bool Uc_ControlResistance::sendaction_13_IN() const {
    return state_22_subState == sendaction_13;
}

inline bool Uc_ControlResistance::state_21_IN() const {
    return ComputingPhysicsModel_IN();
}

inline bool Uc_ControlResistance::WaitingToCompute_IN() const {
    return state_21_subState == WaitingToCompute;
}

inline bool Uc_ControlResistance::sendaction_12_IN() const {
    return state_21_subState == sendaction_12;
}

inline bool Uc_ControlResistance::state_16_IN() const {
    return Running_IN();
}

inline bool Uc_ControlResistance::Pedaling_IN() const {
    return state_16_subState == Pedaling;
}

inline bool Uc_ControlResistance::state_9_IN() const {
    return Pedaling_IN();
}

inline bool Uc_ControlResistance::MonitoringPedal_IN() const {
    return state_9_subState == MonitoringPedal;
}

inline bool Uc_ControlResistance::state_10_IN() const {
    return Pedaling_IN();
}

inline bool Uc_ControlResistance::sendaction_7_IN() const {
    return state_10_subState == sendaction_7;
}

inline bool Uc_ControlResistance::sendaction_6_IN() const {
    return state_10_subState == sendaction_6;
}

inline bool Uc_ControlResistance::sendaction_23_IN() const {
    return state_10_subState == sendaction_23;
}

inline bool Uc_ControlResistance::ComputingPedalMetrics_IN() const {
    return state_10_subState == ComputingPedalMetrics;
}

inline bool Uc_ControlResistance::Ready_IN() const {
    return rootState_subState == Ready;
}

#endif
/*********************************************************************
	File Path	: Control_ResistanceSim/Animate/Uc_ControlResistance.h
*********************************************************************/
