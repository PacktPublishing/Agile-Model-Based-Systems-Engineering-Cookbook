/*********************************************************************
	Rhapsody	: 8.4 
	Login		: Bruce
	Component	: Emulate_Front_and_Rear_GearingSim 
	Configuration 	: Animate
	Model Element	: aEFRG_Rider
//!	Generated Date	: Mon, 2, Mar 2020  
	File Path	: Emulate_Front_and_Rear_GearingSim/Animate/aEFRG_Rider.h
*********************************************************************/

#ifndef aEFRG_Rider_H
#define aEFRG_Rider_H

//## auto_generated
#include <oxf/oxf.h>
//## auto_generated
#include <../Profiles/SysML/SIDefinitions.h>
//## auto_generated
#include <aom/aom.h>
//## auto_generated
#include "EmulateFrontandRearGearingActorPkg.h"
//## class aEFRG_Rider
#include "evCurrentGearing_ProxyReceptionInterface.h"
//## class aEFRG_Rider
#include "evInitialSettings_ProxyReceptionInterface.h"
//## class OutBound
#include "evAugmentFrontGear_ProxyReceptionInterface.h"
//## class OutBound
#include "evAugmentRearGear_ProxyReceptionInterface.h"
//## class OutBound
#include "evBeginRiding_ProxyReceptionInterface.h"
//## class OutBound
#include "evConfigureGearing_ProxyReceptionInterface.h"
//## class OutBound
#include "evDecrementFrontGear_ProxyReceptionInterface.h"
//## class OutBound
#include "evDecrementRearGear_ProxyReceptionInterface.h"
//## class OutBound
#include "evDoneConfiguring_ProxyReceptionInterface.h"
//## class OutBound
#include "evDoneRiding_ProxyReceptionInterface.h"
//## class OutBound
#include "evSetCassetteRingTeeth_ProxyReceptionInterface.h"
//## class OutBound
#include "evSetChainRingTeeth_ProxyReceptionInterface.h"
//## class OutBound
#include "evSetNumberOfCassetteRings_ProxyReceptionInterface.h"
//## class OutBound
#include "evSetNumberOfChainRings_ProxyReceptionInterface.h"
//## class OutBound
#include "evShowGearing_ProxyReceptionInterface.h"
//#[ ignore
#define OMAnim_FunctionalAnalysisPkg_EmulateFrontandRearGearingPkg_EmulateFrontandRearGearingActorPkg_aEFRG_Rider_setCurrentCassetteRing_int_ARGS_DECLARATION int p_currentCassetteRing;

#define OMAnim_FunctionalAnalysisPkg_EmulateFrontandRearGearingPkg_EmulateFrontandRearGearingActorPkg_aEFRG_Rider_setCurrentChainRing_int_ARGS_DECLARATION int p_currentChainRing;

#define OMAnim_FunctionalAnalysisPkg_EmulateFrontandRearGearingPkg_EmulateFrontandRearGearingActorPkg_aEFRG_Rider_setNCassetteRings_int_ARGS_DECLARATION int p_nCassetteRings;

#define OMAnim_FunctionalAnalysisPkg_EmulateFrontandRearGearingPkg_EmulateFrontandRearGearingActorPkg_aEFRG_Rider_setNChainRings_int_ARGS_DECLARATION int p_nChainRings;

#define OMAnim_FunctionalAnalysisPkg_EmulateFrontandRearGearingPkg_EmulateFrontandRearGearingActorPkg_aEFRG_Rider_setRingTeeth_int_ARGS_DECLARATION int p_ringTeeth;
//#]

//## package FunctionalAnalysisPkg::EmulateFrontandRearGearingPkg::EmulateFrontandRearGearingActorPkg

//## class aEFRG_Rider
class aEFRG_Rider : public evCurrentGearing_ProxyReceptionInterface, public evInitialSettings_ProxyReceptionInterface {
public :

//#[ ignore
    //## package FunctionalAnalysisPkg::EmulateFrontandRearGearingPkg::EmulateFrontandRearGearingActorPkg
    class pUc_EmulateFrontandRearGearing_C {
    public :
    
        //## auto_generated
        class InBound_C;
        
        //## auto_generated
        class OutBound_C;
        
        //## package FunctionalAnalysisPkg::EmulateFrontandRearGearingPkg::EmulateFrontandRearGearingActorPkg
        class InBound_C : public evCurrentGearing_ProxyReceptionInterface, public evInitialSettings_ProxyReceptionInterface {
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
            void setItsEvCurrentGearing_ProxyReceptionInterface(evCurrentGearing_ProxyReceptionInterface* p_evCurrentGearing_ProxyReceptionInterface);
            
            //## auto_generated
            void setItsEvInitialSettings_ProxyReceptionInterface(evInitialSettings_ProxyReceptionInterface* p_evInitialSettings_ProxyReceptionInterface);
            
            //## auto_generated
            pUc_EmulateFrontandRearGearing_C* getPort() const;
            
            //## auto_generated
            void setPort(pUc_EmulateFrontandRearGearing_C* p_pUc_EmulateFrontandRearGearing_C);
        
        protected :
        
            //## auto_generated
            void cleanUpRelations();
            
            ////    Relations and components    ////
            
            evCurrentGearing_ProxyReceptionInterface* itsEvCurrentGearing_ProxyReceptionInterface;		//## link itsEvCurrentGearing_ProxyReceptionInterface
            
            evInitialSettings_ProxyReceptionInterface* itsEvInitialSettings_ProxyReceptionInterface;		//## link itsEvInitialSettings_ProxyReceptionInterface
            
            pUc_EmulateFrontandRearGearing_C* port;		//## link port
            
            ////    Framework operations    ////
        
        public :
        
            //## auto_generated
            void __setPort(pUc_EmulateFrontandRearGearing_C* p_pUc_EmulateFrontandRearGearing_C);
            
            //## auto_generated
            void _setPort(pUc_EmulateFrontandRearGearing_C* p_pUc_EmulateFrontandRearGearing_C);
            
            //## auto_generated
            void _clearPort();
        };
        
        //## package FunctionalAnalysisPkg::EmulateFrontandRearGearingPkg::EmulateFrontandRearGearingActorPkg
        class OutBound_C : public evAugmentFrontGear_ProxyReceptionInterface, public evAugmentRearGear_ProxyReceptionInterface, public evBeginRiding_ProxyReceptionInterface, public evConfigureGearing_ProxyReceptionInterface, public evDecrementFrontGear_ProxyReceptionInterface, public evDecrementRearGear_ProxyReceptionInterface, public evDoneConfiguring_ProxyReceptionInterface, public evDoneRiding_ProxyReceptionInterface, public evSetCassetteRingTeeth_ProxyReceptionInterface, public evSetChainRingTeeth_ProxyReceptionInterface, public evSetNumberOfCassetteRings_ProxyReceptionInterface, public evSetNumberOfChainRings_ProxyReceptionInterface, public evShowGearing_ProxyReceptionInterface {
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
            void setItsEvAugmentFrontGear_ProxyReceptionInterface(OMReactive* p_OMReactive);
            
            //## auto_generated
            void setItsEvAugmentRearGear_ProxyReceptionInterface(OMReactive* p_OMReactive);
            
            //## auto_generated
            void setItsEvBeginRiding_ProxyReceptionInterface(OMReactive* p_OMReactive);
            
            //## auto_generated
            void setItsEvConfigureGearing_ProxyReceptionInterface(OMReactive* p_OMReactive);
            
            //## auto_generated
            void setItsEvDecrementFrontGear_ProxyReceptionInterface(OMReactive* p_OMReactive);
            
            //## auto_generated
            void setItsEvDecrementRearGear_ProxyReceptionInterface(OMReactive* p_OMReactive);
            
            //## auto_generated
            void setItsEvDoneConfiguring_ProxyReceptionInterface(OMReactive* p_OMReactive);
            
            //## auto_generated
            void setItsEvDoneRiding_ProxyReceptionInterface(OMReactive* p_OMReactive);
            
            //## auto_generated
            void setItsEvSetCassetteRingTeeth_ProxyReceptionInterface(OMReactive* p_OMReactive);
            
            //## auto_generated
            void setItsEvSetChainRingTeeth_ProxyReceptionInterface(OMReactive* p_OMReactive);
            
            //## auto_generated
            void setItsEvSetNumberOfCassetteRings_ProxyReceptionInterface(OMReactive* p_OMReactive);
            
            //## auto_generated
            void setItsEvSetNumberOfChainRings_ProxyReceptionInterface(OMReactive* p_OMReactive);
            
            //## auto_generated
            void setItsEvShowGearing_ProxyReceptionInterface(OMReactive* p_OMReactive);
        
        protected :
        
            //## auto_generated
            void cleanUpRelations();
            
            ////    Relations and components    ////
            
            OMReactive* itsEvAugmentFrontGear_ProxyReceptionInterface;		//## link itsEvAugmentFrontGear_ProxyReceptionInterface
            
            OMReactive* itsEvAugmentRearGear_ProxyReceptionInterface;		//## link itsEvAugmentRearGear_ProxyReceptionInterface
            
            OMReactive* itsEvBeginRiding_ProxyReceptionInterface;		//## link itsEvBeginRiding_ProxyReceptionInterface
            
            OMReactive* itsEvConfigureGearing_ProxyReceptionInterface;		//## link itsEvConfigureGearing_ProxyReceptionInterface
            
            OMReactive* itsEvDecrementFrontGear_ProxyReceptionInterface;		//## link itsEvDecrementFrontGear_ProxyReceptionInterface
            
            OMReactive* itsEvDecrementRearGear_ProxyReceptionInterface;		//## link itsEvDecrementRearGear_ProxyReceptionInterface
            
            OMReactive* itsEvDoneConfiguring_ProxyReceptionInterface;		//## link itsEvDoneConfiguring_ProxyReceptionInterface
            
            OMReactive* itsEvDoneRiding_ProxyReceptionInterface;		//## link itsEvDoneRiding_ProxyReceptionInterface
            
            OMReactive* itsEvSetCassetteRingTeeth_ProxyReceptionInterface;		//## link itsEvSetCassetteRingTeeth_ProxyReceptionInterface
            
            OMReactive* itsEvSetChainRingTeeth_ProxyReceptionInterface;		//## link itsEvSetChainRingTeeth_ProxyReceptionInterface
            
            OMReactive* itsEvSetNumberOfCassetteRings_ProxyReceptionInterface;		//## link itsEvSetNumberOfCassetteRings_ProxyReceptionInterface
            
            OMReactive* itsEvSetNumberOfChainRings_ProxyReceptionInterface;		//## link itsEvSetNumberOfChainRings_ProxyReceptionInterface
            
            OMReactive* itsEvShowGearing_ProxyReceptionInterface;		//## link itsEvShowGearing_ProxyReceptionInterface
        };
        
        ////    Constructors and destructors    ////
        
        //## auto_generated
        pUc_EmulateFrontandRearGearing_C();
        
        //## auto_generated
        virtual ~pUc_EmulateFrontandRearGearing_C();
        
        ////    Operations    ////
        
        //## auto_generated
        void connectAEFRG_Rider(aEFRG_Rider* part);
        
        //## auto_generated
        evAugmentFrontGear_ProxyReceptionInterface* getItsEvAugmentFrontGear_ProxyReceptionInterface();
        
        //## auto_generated
        evAugmentRearGear_ProxyReceptionInterface* getItsEvAugmentRearGear_ProxyReceptionInterface();
        
        //## auto_generated
        evBeginRiding_ProxyReceptionInterface* getItsEvBeginRiding_ProxyReceptionInterface();
        
        //## auto_generated
        evConfigureGearing_ProxyReceptionInterface* getItsEvConfigureGearing_ProxyReceptionInterface();
        
        //## auto_generated
        evCurrentGearing_ProxyReceptionInterface* getItsEvCurrentGearing_ProxyReceptionInterface();
        
        //## auto_generated
        evDecrementFrontGear_ProxyReceptionInterface* getItsEvDecrementFrontGear_ProxyReceptionInterface();
        
        //## auto_generated
        evDecrementRearGear_ProxyReceptionInterface* getItsEvDecrementRearGear_ProxyReceptionInterface();
        
        //## auto_generated
        evDoneConfiguring_ProxyReceptionInterface* getItsEvDoneConfiguring_ProxyReceptionInterface();
        
        //## auto_generated
        evDoneRiding_ProxyReceptionInterface* getItsEvDoneRiding_ProxyReceptionInterface();
        
        //## auto_generated
        evInitialSettings_ProxyReceptionInterface* getItsEvInitialSettings_ProxyReceptionInterface();
        
        //## auto_generated
        evSetCassetteRingTeeth_ProxyReceptionInterface* getItsEvSetCassetteRingTeeth_ProxyReceptionInterface();
        
        //## auto_generated
        evSetChainRingTeeth_ProxyReceptionInterface* getItsEvSetChainRingTeeth_ProxyReceptionInterface();
        
        //## auto_generated
        evSetNumberOfCassetteRings_ProxyReceptionInterface* getItsEvSetNumberOfCassetteRings_ProxyReceptionInterface();
        
        //## auto_generated
        evSetNumberOfChainRings_ProxyReceptionInterface* getItsEvSetNumberOfChainRings_ProxyReceptionInterface();
        
        //## auto_generated
        evShowGearing_ProxyReceptionInterface* getItsEvShowGearing_ProxyReceptionInterface();
        
        //## auto_generated
        void setItsEvAugmentFrontGear_ProxyReceptionInterface(OMReactive* p_evAugmentFrontGear_ProxyReceptionInterface);
        
        //## auto_generated
        void setItsEvAugmentRearGear_ProxyReceptionInterface(OMReactive* p_evAugmentRearGear_ProxyReceptionInterface);
        
        //## auto_generated
        void setItsEvBeginRiding_ProxyReceptionInterface(OMReactive* p_evBeginRiding_ProxyReceptionInterface);
        
        //## auto_generated
        void setItsEvConfigureGearing_ProxyReceptionInterface(OMReactive* p_evConfigureGearing_ProxyReceptionInterface);
        
        //## auto_generated
        void setItsEvCurrentGearing_ProxyReceptionInterface(evCurrentGearing_ProxyReceptionInterface* p_evCurrentGearing_ProxyReceptionInterface);
        
        //## auto_generated
        void setItsEvDecrementFrontGear_ProxyReceptionInterface(OMReactive* p_evDecrementFrontGear_ProxyReceptionInterface);
        
        //## auto_generated
        void setItsEvDecrementRearGear_ProxyReceptionInterface(OMReactive* p_evDecrementRearGear_ProxyReceptionInterface);
        
        //## auto_generated
        void setItsEvDoneConfiguring_ProxyReceptionInterface(OMReactive* p_evDoneConfiguring_ProxyReceptionInterface);
        
        //## auto_generated
        void setItsEvDoneRiding_ProxyReceptionInterface(OMReactive* p_evDoneRiding_ProxyReceptionInterface);
        
        //## auto_generated
        void setItsEvInitialSettings_ProxyReceptionInterface(evInitialSettings_ProxyReceptionInterface* p_evInitialSettings_ProxyReceptionInterface);
        
        //## auto_generated
        void setItsEvSetCassetteRingTeeth_ProxyReceptionInterface(OMReactive* p_evSetCassetteRingTeeth_ProxyReceptionInterface);
        
        //## auto_generated
        void setItsEvSetChainRingTeeth_ProxyReceptionInterface(OMReactive* p_evSetChainRingTeeth_ProxyReceptionInterface);
        
        //## auto_generated
        void setItsEvSetNumberOfCassetteRings_ProxyReceptionInterface(OMReactive* p_evSetNumberOfCassetteRings_ProxyReceptionInterface);
        
        //## auto_generated
        void setItsEvSetNumberOfChainRings_ProxyReceptionInterface(OMReactive* p_evSetNumberOfChainRings_ProxyReceptionInterface);
        
        //## auto_generated
        void setItsEvShowGearing_ProxyReceptionInterface(OMReactive* p_evShowGearing_ProxyReceptionInterface);
        
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
    friend class OMAnimatedaEFRG_Rider;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    aEFRG_Rider(IOxfActive* theActiveContext = 0);
    
    //## auto_generated
    ~aEFRG_Rider();
    
    ////    Additional operations    ////
    
    //## auto_generated
    pUc_EmulateFrontandRearGearing_C* getPUc_EmulateFrontandRearGearing() const;
    
    //## auto_generated
    pUc_EmulateFrontandRearGearing_C* get_pUc_EmulateFrontandRearGearing() const;
    
    //## auto_generated
    int getCurrentCassetteRing() const;
    
    //## auto_generated
    void setCurrentCassetteRing(int p_currentCassetteRing);
    
    //## auto_generated
    int getCurrentChainRing() const;
    
    //## auto_generated
    void setCurrentChainRing(int p_currentChainRing);
    
    //## auto_generated
    int getNCassetteRings() const;
    
    //## auto_generated
    void setNCassetteRings(int p_nCassetteRings);
    
    //## auto_generated
    int getNChainRings() const;
    
    //## auto_generated
    void setNChainRings(int p_nChainRings);
    
    //## auto_generated
    int getRingTeeth() const;
    
    //## auto_generated
    void setRingTeeth(int p_ringTeeth);
    
    //## auto_generated
    virtual bool startBehavior();

protected :

    //## auto_generated
    void initRelations();
    
    //## auto_generated
    void initStatechart();
    
    ////    Attributes    ////
    
    int currentCassetteRing;		//## attribute currentCassetteRing
    
    int currentChainRing;		//## attribute currentChainRing
    
    int nCassetteRings;		//## attribute nCassetteRings
    
    int nChainRings;		//## attribute nChainRings
    
    int ringTeeth;		//## attribute ringTeeth
    
    ////    Relations and components    ////
    
//#[ ignore
    pUc_EmulateFrontandRearGearing_C pUc_EmulateFrontandRearGearing;
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
    
    // SettingUp:
    //## statechart_method
    inline bool SettingUp_IN() const;
    
    //## statechart_method
    IOxfReactive::TakeEventStatus SettingUp_handleEvent();
    
    // sendaction_9:
    //## statechart_method
    inline bool sendaction_9_IN() const;
    
    // sendaction_8:
    //## statechart_method
    inline bool sendaction_8_IN() const;
    
    // sendaction_7:
    //## statechart_method
    inline bool sendaction_7_IN() const;
    
    // sendaction_6:
    //## statechart_method
    inline bool sendaction_6_IN() const;
    
    // sendaction_5:
    //## statechart_method
    inline bool sendaction_5_IN() const;
    
    // sendaction_4:
    //## statechart_method
    inline bool sendaction_4_IN() const;
    
    // sendaction_2:
    //## statechart_method
    inline bool sendaction_2_IN() const;
    
    // sendaction_15:
    //## statechart_method
    inline bool sendaction_15_IN() const;
    
    // sendaction_14:
    //## statechart_method
    inline bool sendaction_14_IN() const;
    
    // sendaction_13:
    //## statechart_method
    inline bool sendaction_13_IN() const;
    
    // sendaction_12:
    //## statechart_method
    inline bool sendaction_12_IN() const;
    
    // sendaction_11:
    //## statechart_method
    inline bool sendaction_11_IN() const;
    
    // sendaction_10:
    //## statechart_method
    inline bool sendaction_10_IN() const;
    
    // Riding:
    //## statechart_method
    inline bool Riding_IN() const;
    
    //## statechart_method
    IOxfReactive::TakeEventStatus Riding_handleEvent();
    
    // Idle:
    //## statechart_method
    inline bool Idle_IN() const;
    
    ////    Framework    ////

protected :

//#[ ignore
    enum aEFRG_Rider_Enum {
        OMNonState = 0,
        SettingUp = 1,
        sendaction_9 = 2,
        sendaction_8 = 3,
        sendaction_7 = 4,
        sendaction_6 = 5,
        sendaction_5 = 6,
        sendaction_4 = 7,
        sendaction_2 = 8,
        sendaction_15 = 9,
        sendaction_14 = 10,
        sendaction_13 = 11,
        sendaction_12 = 12,
        sendaction_11 = 13,
        sendaction_10 = 14,
        Riding = 15,
        Idle = 16
    };
    
    int rootState_subState;
    
    int rootState_active;
//#]
};

#ifdef _OMINSTRUMENT
DECLARE_OPERATION_CLASS(FunctionalAnalysisPkg_EmulateFrontandRearGearingPkg_EmulateFrontandRearGearingActorPkg_aEFRG_Rider_setCurrentCassetteRing_int)

DECLARE_OPERATION_CLASS(FunctionalAnalysisPkg_EmulateFrontandRearGearingPkg_EmulateFrontandRearGearingActorPkg_aEFRG_Rider_setCurrentChainRing_int)

DECLARE_OPERATION_CLASS(FunctionalAnalysisPkg_EmulateFrontandRearGearingPkg_EmulateFrontandRearGearingActorPkg_aEFRG_Rider_setNCassetteRings_int)

DECLARE_OPERATION_CLASS(FunctionalAnalysisPkg_EmulateFrontandRearGearingPkg_EmulateFrontandRearGearingActorPkg_aEFRG_Rider_setNChainRings_int)

DECLARE_OPERATION_CLASS(FunctionalAnalysisPkg_EmulateFrontandRearGearingPkg_EmulateFrontandRearGearingActorPkg_aEFRG_Rider_setRingTeeth_int)

//#[ ignore
class OMAnimatedaEFRG_Rider : virtual public AOMInstance {
    DECLARE_REACTIVE_META(aEFRG_Rider, OMAnimatedaEFRG_Rider)
    
    DECLARE_META_OP(FunctionalAnalysisPkg_EmulateFrontandRearGearingPkg_EmulateFrontandRearGearingActorPkg_aEFRG_Rider_setCurrentCassetteRing_int)
    
    DECLARE_META_OP(FunctionalAnalysisPkg_EmulateFrontandRearGearingPkg_EmulateFrontandRearGearingActorPkg_aEFRG_Rider_setCurrentChainRing_int)
    
    DECLARE_META_OP(FunctionalAnalysisPkg_EmulateFrontandRearGearingPkg_EmulateFrontandRearGearingActorPkg_aEFRG_Rider_setNCassetteRings_int)
    
    DECLARE_META_OP(FunctionalAnalysisPkg_EmulateFrontandRearGearingPkg_EmulateFrontandRearGearingActorPkg_aEFRG_Rider_setNChainRings_int)
    
    DECLARE_META_OP(FunctionalAnalysisPkg_EmulateFrontandRearGearingPkg_EmulateFrontandRearGearingActorPkg_aEFRG_Rider_setRingTeeth_int)
    
    ////    Framework operations    ////
    
public :

    virtual void serializeAttributes(AOMSAttributes* aomsAttributes) const;
    
    virtual void serializeRelations(AOMSRelations* aomsRelations) const;
    
    //## statechart_method
    void rootState_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void SettingUp_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void sendaction_9_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void sendaction_8_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void sendaction_7_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void sendaction_6_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void sendaction_5_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void sendaction_4_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void sendaction_2_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void sendaction_15_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void sendaction_14_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void sendaction_13_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void sendaction_12_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void sendaction_11_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void sendaction_10_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void Riding_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void Idle_serializeStates(AOMSState* aomsState) const;
};
//#]
#endif // _OMINSTRUMENT

inline bool aEFRG_Rider::rootState_IN() const {
    return true;
}

inline bool aEFRG_Rider::SettingUp_IN() const {
    return rootState_subState == SettingUp;
}

inline bool aEFRG_Rider::sendaction_9_IN() const {
    return rootState_subState == sendaction_9;
}

inline bool aEFRG_Rider::sendaction_8_IN() const {
    return rootState_subState == sendaction_8;
}

inline bool aEFRG_Rider::sendaction_7_IN() const {
    return rootState_subState == sendaction_7;
}

inline bool aEFRG_Rider::sendaction_6_IN() const {
    return rootState_subState == sendaction_6;
}

inline bool aEFRG_Rider::sendaction_5_IN() const {
    return rootState_subState == sendaction_5;
}

inline bool aEFRG_Rider::sendaction_4_IN() const {
    return rootState_subState == sendaction_4;
}

inline bool aEFRG_Rider::sendaction_2_IN() const {
    return rootState_subState == sendaction_2;
}

inline bool aEFRG_Rider::sendaction_15_IN() const {
    return rootState_subState == sendaction_15;
}

inline bool aEFRG_Rider::sendaction_14_IN() const {
    return rootState_subState == sendaction_14;
}

inline bool aEFRG_Rider::sendaction_13_IN() const {
    return rootState_subState == sendaction_13;
}

inline bool aEFRG_Rider::sendaction_12_IN() const {
    return rootState_subState == sendaction_12;
}

inline bool aEFRG_Rider::sendaction_11_IN() const {
    return rootState_subState == sendaction_11;
}

inline bool aEFRG_Rider::sendaction_10_IN() const {
    return rootState_subState == sendaction_10;
}

inline bool aEFRG_Rider::Riding_IN() const {
    return rootState_subState == Riding;
}

inline bool aEFRG_Rider::Idle_IN() const {
    return rootState_subState == Idle;
}

#endif
/*********************************************************************
	File Path	: Emulate_Front_and_Rear_GearingSim/Animate/aEFRG_Rider.h
*********************************************************************/
