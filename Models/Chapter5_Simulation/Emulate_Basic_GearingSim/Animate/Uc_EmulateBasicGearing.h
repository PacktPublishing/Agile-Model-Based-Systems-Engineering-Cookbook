/*********************************************************************
	Rhapsody	: 9.0 
	Login		: Bruce
	Component	: Emulate_Basic_GearingSim 
	Configuration 	: Animate
	Model Element	: Uc_EmulateBasicGearing
//!	Generated Date	: Wed, 25, Nov 2020  
	File Path	: Emulate_Basic_GearingSim/Animate/Uc_EmulateBasicGearing.h
*********************************************************************/

#ifndef Uc_EmulateBasicGearing_H
#define Uc_EmulateBasicGearing_H

//## auto_generated
#include <oxf/oxf.h>
//## auto_generated
#include <../Profiles/SysML/SIDefinitions.h>
//## auto_generated
#include <aom/aom.h>
//## auto_generated
#include "EmulateBasicGearingPkg.h"
//## class Uc_EmulateBasicGearing
#include "decrementGear_ProxyReceptionInterface.h"
//## dependency DEFAULT_GEARING
#include "EmulateBasicGearingTypesPkg.h"
//## class Uc_EmulateBasicGearing
#include "incrementGear_ProxyReceptionInterface.h"
//## class Uc_EmulateBasicGearing
#include "Real_appliedTorque_ProxyFlowPropertyInterface.h"
//## class paEBG_TrainingApp_C
#include "gearing_ProxyReceptionInterface.h"
//## class OutBound
#include "Real_resistance_ProxyFlowPropertyInterface.h"
//#[ ignore
#define OMAnim_FunctionalAnalysisPkg_EmulateBasicGearingPkg_Uc_EmulateBasicGearing_setAppliedTorque_Real_ARGS_DECLARATION Real p_appliedTorque;

#define OMAnim_FunctionalAnalysisPkg_EmulateBasicGearingPkg_Uc_EmulateBasicGearing_setGear_Real_ARGS_DECLARATION Real p_gear;

#define OMAnim_FunctionalAnalysisPkg_EmulateBasicGearingPkg_Uc_EmulateBasicGearing_setResistance_Real_ARGS_DECLARATION Real p_resistance;
//#]

//## package FunctionalAnalysisPkg::EmulateBasicGearingPkg

//## class Uc_EmulateBasicGearing
class Uc_EmulateBasicGearing : public decrementGear_ProxyReceptionInterface, public incrementGear_ProxyReceptionInterface, public Real_appliedTorque_ProxyFlowPropertyInterface {
public :

//#[ ignore
    //## package FunctionalAnalysisPkg::EmulateBasicGearingPkg
    class paEBG_TrainingApp_C : public gearing_ProxyReceptionInterface {
        ////    Constructors and destructors    ////
        
    public :
    
        //## auto_generated
        paEBG_TrainingApp_C();
        
        //## auto_generated
        virtual ~paEBG_TrainingApp_C();
        
        ////    Operations    ////
        
        //## auto_generated
        gearing_ProxyReceptionInterface* getItsGearing_ProxyReceptionInterface();
        
        //## auto_generated
        gearing_ProxyReceptionInterface* getOutBound();
        
        //## auto_generated
        virtual bool send(IOxfEvent* event, const IOxfEventGenerationParams& params);
        
        //## auto_generated
        virtual bool send(IOxfEvent* event);
        
        ////    Additional operations    ////
        
        //## auto_generated
        void setItsGearing_ProxyReceptionInterface(OMReactive* p_OMReactive);
    
    protected :
    
        //## auto_generated
        void cleanUpRelations();
        
        ////    Attributes    ////
        
        int _p_;		//## attribute _p_
        
        ////    Relations and components    ////
        
        OMReactive* itsGearing_ProxyReceptionInterface;		//## link itsGearing_ProxyReceptionInterface
    };
    
    //## package FunctionalAnalysisPkg::EmulateBasicGearingPkg
    class paEBG_Rider_C {
    public :
    
        //## auto_generated
        class InBound_C;
        
        //## auto_generated
        class OutBound_C;
        
        //## package FunctionalAnalysisPkg::EmulateBasicGearingPkg
        class InBound_C : public decrementGear_ProxyReceptionInterface, public incrementGear_ProxyReceptionInterface, public Real_appliedTorque_ProxyFlowPropertyInterface {
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
            
            //## auto_generated
            virtual void setAppliedTorque(Real p_appliedTorque);
            
            ////    Additional operations    ////
            
            //## auto_generated
            void setItsDecrementGear_ProxyReceptionInterface(decrementGear_ProxyReceptionInterface* p_decrementGear_ProxyReceptionInterface);
            
            //## auto_generated
            void setItsIncrementGear_ProxyReceptionInterface(incrementGear_ProxyReceptionInterface* p_incrementGear_ProxyReceptionInterface);
            
            //## auto_generated
            void setItsReal_appliedTorque_ProxyFlowPropertyInterface(Real_appliedTorque_ProxyFlowPropertyInterface* p_Real_appliedTorque_ProxyFlowPropertyInterface);
            
            //## auto_generated
            paEBG_Rider_C* getPort() const;
            
            //## auto_generated
            void setPort(paEBG_Rider_C* p_paEBG_Rider_C);
        
        protected :
        
            //## auto_generated
            void cleanUpRelations();
            
            ////    Relations and components    ////
            
            decrementGear_ProxyReceptionInterface* itsDecrementGear_ProxyReceptionInterface;		//## link itsDecrementGear_ProxyReceptionInterface
            
            incrementGear_ProxyReceptionInterface* itsIncrementGear_ProxyReceptionInterface;		//## link itsIncrementGear_ProxyReceptionInterface
            
            Real_appliedTorque_ProxyFlowPropertyInterface* itsReal_appliedTorque_ProxyFlowPropertyInterface;		//## link itsReal_appliedTorque_ProxyFlowPropertyInterface
            
            paEBG_Rider_C* port;		//## link port
            
            ////    Framework operations    ////
        
        public :
        
            //## auto_generated
            void __setPort(paEBG_Rider_C* p_paEBG_Rider_C);
            
            //## auto_generated
            void _setPort(paEBG_Rider_C* p_paEBG_Rider_C);
            
            //## auto_generated
            void _clearPort();
        };
        
        //## package FunctionalAnalysisPkg::EmulateBasicGearingPkg
        class OutBound_C : public Real_resistance_ProxyFlowPropertyInterface {
            ////    Constructors and destructors    ////
            
        public :
        
            //## auto_generated
            OutBound_C();
            
            //## auto_generated
            virtual ~OutBound_C();
            
            ////    Operations    ////
            
            //## auto_generated
            virtual void setResistance(Real p_resistance);
            
            ////    Additional operations    ////
            
            //## auto_generated
            void setItsReal_resistance_ProxyFlowPropertyInterface(Real_resistance_ProxyFlowPropertyInterface* p_Real_resistance_ProxyFlowPropertyInterface);
        
        protected :
        
            //## auto_generated
            void cleanUpRelations();
            
            ////    Relations and components    ////
            
            Real_resistance_ProxyFlowPropertyInterface* itsReal_resistance_ProxyFlowPropertyInterface;		//## link itsReal_resistance_ProxyFlowPropertyInterface
        };
        
        ////    Constructors and destructors    ////
        
        //## auto_generated
        paEBG_Rider_C();
        
        //## auto_generated
        virtual ~paEBG_Rider_C();
        
        ////    Operations    ////
        
        //## auto_generated
        void connectUc_EmulateBasicGearing(Uc_EmulateBasicGearing* part);
        
        //## auto_generated
        decrementGear_ProxyReceptionInterface* getItsDecrementGear_ProxyReceptionInterface();
        
        //## auto_generated
        incrementGear_ProxyReceptionInterface* getItsIncrementGear_ProxyReceptionInterface();
        
        //## auto_generated
        Real_appliedTorque_ProxyFlowPropertyInterface* getItsReal_appliedTorque_ProxyFlowPropertyInterface();
        
        //## auto_generated
        Real_resistance_ProxyFlowPropertyInterface* getItsReal_resistance_ProxyFlowPropertyInterface();
        
        //## auto_generated
        void setItsDecrementGear_ProxyReceptionInterface(decrementGear_ProxyReceptionInterface* p_decrementGear_ProxyReceptionInterface);
        
        //## auto_generated
        void setItsIncrementGear_ProxyReceptionInterface(incrementGear_ProxyReceptionInterface* p_incrementGear_ProxyReceptionInterface);
        
        //## auto_generated
        void setItsReal_appliedTorque_ProxyFlowPropertyInterface(Real_appliedTorque_ProxyFlowPropertyInterface* p_Real_appliedTorque_ProxyFlowPropertyInterface);
        
        //## auto_generated
        void setItsReal_resistance_ProxyFlowPropertyInterface(Real_resistance_ProxyFlowPropertyInterface* p_Real_resistance_ProxyFlowPropertyInterface);
        
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
    friend class OMAnimatedUc_EmulateBasicGearing;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    Uc_EmulateBasicGearing(IOxfActive* theActiveContext = 0);
    
    //## auto_generated
    virtual ~Uc_EmulateBasicGearing();
    
    ////    Operations    ////
    
    //## operation applyResistance()
    virtual void applyResistance();
    
    //## operation changeGear(Real)
    virtual void changeGear(Real newGear);
    
    //## operation checkGearing(Real)
    virtual RhpBoolean checkGearing(Real newGear);
    
    //## operation computeResistance()
    virtual void computeResistance();
    
//#[ ignore
    void setAppliedTorque(Real p_appliedTorque);
    
    void setResistance(Real p_resistance);
//#]

    ////    Additional operations    ////
    
    //## auto_generated
    paEBG_TrainingApp_C* getPaEBG_TrainingApp() const;
    
    //## auto_generated
    paEBG_TrainingApp_C* get_paEBG_TrainingApp() const;
    
    //## auto_generated
    paEBG_Rider_C* getPaEBG_Rider() const;
    
    //## auto_generated
    paEBG_Rider_C* get_paEBG_Rider() const;
    
    //## auto_generated
    Real getAppliedTorque() const;
    
    //## auto_generated
    Real getGear() const;
    
    //## auto_generated
    void setGear(Real p_gear);
    
    //## auto_generated
    Real getResistance() const;
    
    //## auto_generated
    virtual bool startBehavior();

protected :

    //## auto_generated
    void initRelations();
    
    //## auto_generated
    void initStatechart();
    
    ////    Attributes    ////
    
    Real appliedTorque;		//## attribute appliedTorque
    
    Real gear;		//## attribute gear
    
    Real resistance;		//## attribute resistance
    
    ////    Relations and components    ////
    
//#[ ignore
    paEBG_TrainingApp_C paEBG_TrainingApp;
    
    paEBG_Rider_C paEBG_Rider;
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
    
    // sendaction_3:
    //## statechart_method
    inline bool sendaction_3_IN() const;
    
    // BasicGearing:
    //## statechart_method
    inline bool BasicGearing_IN() const;
    
    //## statechart_method
    void BasicGearing_entDef();
    
    //## statechart_method
    void BasicGearingEntDef();
    
    //## statechart_method
    void BasicGearing_exit();
    
    //## statechart_method
    void BasicGearing_entShallowHist();
    
    //## statechart_method
    IOxfReactive::TakeEventStatus BasicGearingTakeincrementGear();
    
    //## statechart_method
    IOxfReactive::TakeEventStatus BasicGearingTakedecrementGear();
    
    //## statechart_method
    IOxfReactive::TakeEventStatus BasicGearing_handleEvent();
    
    // TorqueApplied:
    //## statechart_method
    inline bool TorqueApplied_IN() const;
    
    //## statechart_method
    IOxfReactive::TakeEventStatus TorqueApplied_handleEvent();
    
    // sendaction_5:
    //## statechart_method
    inline bool sendaction_5_IN() const;
    
    //## statechart_method
    IOxfReactive::TakeEventStatus sendaction_5_handleEvent();
    
    // Idle:
    //## statechart_method
    inline bool Idle_IN() const;
    
    //## statechart_method
    IOxfReactive::TakeEventStatus Idle_handleEvent();
    
    ////    Framework    ////

protected :

//#[ ignore
    enum Uc_EmulateBasicGearing_Enum {
        OMNonState = 0,
        sendaction_3 = 1,
        BasicGearing = 2,
        TorqueApplied = 3,
        sendaction_5 = 4,
        Idle = 5
    };
    
    int rootState_subState;
    
    int rootState_active;
    
    int BasicGearing_subState;
    
    int BasicGearing_lastState;
//#]
};

#ifdef _OMINSTRUMENT
DECLARE_OPERATION_CLASS(FunctionalAnalysisPkg_EmulateBasicGearingPkg_Uc_EmulateBasicGearing_setAppliedTorque_Real)

DECLARE_OPERATION_CLASS(FunctionalAnalysisPkg_EmulateBasicGearingPkg_Uc_EmulateBasicGearing_setGear_Real)

DECLARE_OPERATION_CLASS(FunctionalAnalysisPkg_EmulateBasicGearingPkg_Uc_EmulateBasicGearing_setResistance_Real)

//#[ ignore
class OMAnimatedUc_EmulateBasicGearing : virtual public AOMInstance {
    DECLARE_REACTIVE_META(Uc_EmulateBasicGearing, OMAnimatedUc_EmulateBasicGearing)
    
    DECLARE_META_OP(FunctionalAnalysisPkg_EmulateBasicGearingPkg_Uc_EmulateBasicGearing_setAppliedTorque_Real)
    
    DECLARE_META_OP(FunctionalAnalysisPkg_EmulateBasicGearingPkg_Uc_EmulateBasicGearing_setGear_Real)
    
    DECLARE_META_OP(FunctionalAnalysisPkg_EmulateBasicGearingPkg_Uc_EmulateBasicGearing_setResistance_Real)
    
    ////    Framework operations    ////
    
public :

    virtual void serializeAttributes(AOMSAttributes* aomsAttributes) const;
    
    virtual void serializeRelations(AOMSRelations* aomsRelations) const;
    
    //## statechart_method
    void rootState_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void sendaction_3_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void BasicGearing_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void TorqueApplied_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void sendaction_5_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void Idle_serializeStates(AOMSState* aomsState) const;
};
//#]
#endif // _OMINSTRUMENT

inline bool Uc_EmulateBasicGearing::rootState_IN() const {
    return true;
}

inline bool Uc_EmulateBasicGearing::sendaction_3_IN() const {
    return rootState_subState == sendaction_3;
}

inline bool Uc_EmulateBasicGearing::BasicGearing_IN() const {
    return rootState_subState == BasicGearing;
}

inline bool Uc_EmulateBasicGearing::TorqueApplied_IN() const {
    return BasicGearing_subState == TorqueApplied;
}

inline bool Uc_EmulateBasicGearing::sendaction_5_IN() const {
    return BasicGearing_subState == sendaction_5;
}

inline bool Uc_EmulateBasicGearing::Idle_IN() const {
    return BasicGearing_subState == Idle;
}

#endif
/*********************************************************************
	File Path	: Emulate_Basic_GearingSim/Animate/Uc_EmulateBasicGearing.h
*********************************************************************/
