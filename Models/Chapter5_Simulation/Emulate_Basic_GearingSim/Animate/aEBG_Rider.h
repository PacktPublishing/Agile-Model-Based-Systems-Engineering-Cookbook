/*********************************************************************
	Rhapsody	: 9.0 
	Login		: Bruce
	Component	: Emulate_Basic_GearingSim 
	Configuration 	: Animate
	Model Element	: aEBG_Rider
//!	Generated Date	: Wed, 25, Nov 2020  
	File Path	: Emulate_Basic_GearingSim/Animate/aEBG_Rider.h
*********************************************************************/

#ifndef aEBG_Rider_H
#define aEBG_Rider_H

//## auto_generated
#include <oxf/oxf.h>
//## auto_generated
#include <../Profiles/SysML/SIDefinitions.h>
//## auto_generated
#include <aom/aom.h>
//## auto_generated
#include "EmulateBasicGearingActorPkg.h"
//## auto_generated
#include <oxf/omthread.h>
//## auto_generated
#include <oxf/omreactive.h>
//## auto_generated
#include <oxf/state.h>
//## auto_generated
#include <oxf/event.h>
//## class aEBG_Rider
#include "Real_resistance_ProxyFlowPropertyInterface.h"
//## class OutBound
#include "decrementGear_ProxyReceptionInterface.h"
//## class OutBound
#include "incrementGear_ProxyReceptionInterface.h"
//## class OutBound
#include "Real_appliedTorque_ProxyFlowPropertyInterface.h"
//#[ ignore
#define OMAnim_FunctionalAnalysisPkg_EmulateBasicGearingPkg_EmulateBasicGearingActorPkg_aEBG_Rider_setAppliedTorque_Real_ARGS_DECLARATION Real p_appliedTorque;

#define OMAnim_FunctionalAnalysisPkg_EmulateBasicGearingPkg_EmulateBasicGearingActorPkg_aEBG_Rider_setResistance_Real_ARGS_DECLARATION Real p_resistance;
//#]

//## package FunctionalAnalysisPkg::EmulateBasicGearingPkg::EmulateBasicGearingActorPkg

//## class aEBG_Rider
class aEBG_Rider : public OMReactive, public Real_resistance_ProxyFlowPropertyInterface {
public :

//#[ ignore
    //## package FunctionalAnalysisPkg::EmulateBasicGearingPkg::EmulateBasicGearingActorPkg
    class pUc_EmulateBasicGearing_C {
    public :
    
        //## auto_generated
        class InBound_C;
        
        //## auto_generated
        class OutBound_C;
        
        //## package FunctionalAnalysisPkg::EmulateBasicGearingPkg::EmulateBasicGearingActorPkg
        class InBound_C : public Real_resistance_ProxyFlowPropertyInterface {
            ////    Constructors and destructors    ////
            
        public :
        
            //## auto_generated
            InBound_C();
            
            //## auto_generated
            virtual ~InBound_C();
            
            ////    Operations    ////
            
            //## auto_generated
            virtual void setResistance(Real p_resistance);
            
            ////    Additional operations    ////
            
            //## auto_generated
            void setItsReal_resistance_ProxyFlowPropertyInterface(Real_resistance_ProxyFlowPropertyInterface* p_Real_resistance_ProxyFlowPropertyInterface);
            
            //## auto_generated
            pUc_EmulateBasicGearing_C* getPort() const;
            
            //## auto_generated
            void setPort(pUc_EmulateBasicGearing_C* p_pUc_EmulateBasicGearing_C);
        
        protected :
        
            //## auto_generated
            void cleanUpRelations();
            
            ////    Relations and components    ////
            
            Real_resistance_ProxyFlowPropertyInterface* itsReal_resistance_ProxyFlowPropertyInterface;		//## link itsReal_resistance_ProxyFlowPropertyInterface
            
            pUc_EmulateBasicGearing_C* port;		//## link port
            
            ////    Framework operations    ////
        
        public :
        
            //## auto_generated
            void __setPort(pUc_EmulateBasicGearing_C* p_pUc_EmulateBasicGearing_C);
            
            //## auto_generated
            void _setPort(pUc_EmulateBasicGearing_C* p_pUc_EmulateBasicGearing_C);
            
            //## auto_generated
            void _clearPort();
        };
        
        //## package FunctionalAnalysisPkg::EmulateBasicGearingPkg::EmulateBasicGearingActorPkg
        class OutBound_C : public decrementGear_ProxyReceptionInterface, public incrementGear_ProxyReceptionInterface, public Real_appliedTorque_ProxyFlowPropertyInterface {
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
            
            //## auto_generated
            virtual void setAppliedTorque(Real p_appliedTorque);
            
            ////    Additional operations    ////
            
            //## auto_generated
            void setItsDecrementGear_ProxyReceptionInterface(OMReactive* p_OMReactive);
            
            //## auto_generated
            void setItsIncrementGear_ProxyReceptionInterface(OMReactive* p_OMReactive);
            
            //## auto_generated
            void setItsReal_appliedTorque_ProxyFlowPropertyInterface(Real_appliedTorque_ProxyFlowPropertyInterface* p_Real_appliedTorque_ProxyFlowPropertyInterface);
        
        protected :
        
            //## auto_generated
            void cleanUpRelations();
            
            ////    Relations and components    ////
            
            OMReactive* itsDecrementGear_ProxyReceptionInterface;		//## link itsDecrementGear_ProxyReceptionInterface
            
            OMReactive* itsIncrementGear_ProxyReceptionInterface;		//## link itsIncrementGear_ProxyReceptionInterface
            
            Real_appliedTorque_ProxyFlowPropertyInterface* itsReal_appliedTorque_ProxyFlowPropertyInterface;		//## link itsReal_appliedTorque_ProxyFlowPropertyInterface
        };
        
        ////    Constructors and destructors    ////
        
        //## auto_generated
        pUc_EmulateBasicGearing_C();
        
        //## auto_generated
        virtual ~pUc_EmulateBasicGearing_C();
        
        ////    Operations    ////
        
        //## auto_generated
        void connectAEBG_Rider(aEBG_Rider* part);
        
        //## auto_generated
        decrementGear_ProxyReceptionInterface* getItsDecrementGear_ProxyReceptionInterface();
        
        //## auto_generated
        incrementGear_ProxyReceptionInterface* getItsIncrementGear_ProxyReceptionInterface();
        
        //## auto_generated
        Real_appliedTorque_ProxyFlowPropertyInterface* getItsReal_appliedTorque_ProxyFlowPropertyInterface();
        
        //## auto_generated
        Real_resistance_ProxyFlowPropertyInterface* getItsReal_resistance_ProxyFlowPropertyInterface();
        
        //## auto_generated
        void setItsDecrementGear_ProxyReceptionInterface(OMReactive* p_decrementGear_ProxyReceptionInterface);
        
        //## auto_generated
        void setItsIncrementGear_ProxyReceptionInterface(OMReactive* p_incrementGear_ProxyReceptionInterface);
        
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
    friend class OMAnimatedaEBG_Rider;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    aEBG_Rider(IOxfActive* theActiveContext = 0);
    
    //## auto_generated
    ~aEBG_Rider();
    
    ////    Operations    ////
    
//#[ ignore
    void setAppliedTorque(Real p_appliedTorque);
    
    void setResistance(Real p_resistance);
//#]

    ////    Additional operations    ////
    
    //## auto_generated
    pUc_EmulateBasicGearing_C* getPUc_EmulateBasicGearing() const;
    
    //## auto_generated
    pUc_EmulateBasicGearing_C* get_pUc_EmulateBasicGearing() const;
    
    //## auto_generated
    Real getAppliedTorque() const;
    
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
    
    Real resistance;		//## attribute resistance
    
    ////    Relations and components    ////
    
//#[ ignore
    pUc_EmulateBasicGearing_C pUc_EmulateBasicGearing;
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
    
    // Riding:
    //## statechart_method
    inline bool Riding_IN() const;
    
    ////    Framework    ////

protected :

//#[ ignore
    enum aEBG_Rider_Enum {
        OMNonState = 0,
        sendaction_2 = 1,
        sendaction_1 = 2,
        Riding = 3
    };
    
    int rootState_subState;
    
    int rootState_active;
//#]
};

#ifdef _OMINSTRUMENT
DECLARE_OPERATION_CLASS(FunctionalAnalysisPkg_EmulateBasicGearingPkg_EmulateBasicGearingActorPkg_aEBG_Rider_setAppliedTorque_Real)

DECLARE_OPERATION_CLASS(FunctionalAnalysisPkg_EmulateBasicGearingPkg_EmulateBasicGearingActorPkg_aEBG_Rider_setResistance_Real)

//#[ ignore
class OMAnimatedaEBG_Rider : virtual public AOMInstance {
    DECLARE_REACTIVE_META(aEBG_Rider, OMAnimatedaEBG_Rider)
    
    DECLARE_META_OP(FunctionalAnalysisPkg_EmulateBasicGearingPkg_EmulateBasicGearingActorPkg_aEBG_Rider_setAppliedTorque_Real)
    
    DECLARE_META_OP(FunctionalAnalysisPkg_EmulateBasicGearingPkg_EmulateBasicGearingActorPkg_aEBG_Rider_setResistance_Real)
    
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
    void Riding_serializeStates(AOMSState* aomsState) const;
};
//#]
#endif // _OMINSTRUMENT

inline bool aEBG_Rider::rootState_IN() const {
    return true;
}

inline bool aEBG_Rider::sendaction_2_IN() const {
    return rootState_subState == sendaction_2;
}

inline bool aEBG_Rider::sendaction_1_IN() const {
    return rootState_subState == sendaction_1;
}

inline bool aEBG_Rider::Riding_IN() const {
    return rootState_subState == Riding;
}

#endif
/*********************************************************************
	File Path	: Emulate_Basic_GearingSim/Animate/aEBG_Rider.h
*********************************************************************/
