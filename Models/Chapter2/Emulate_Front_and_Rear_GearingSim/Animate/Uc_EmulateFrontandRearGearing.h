/*********************************************************************
	Rhapsody	: 8.4 
	Login		: Bruce
	Component	: Emulate_Front_and_Rear_GearingSim 
	Configuration 	: Animate
	Model Element	: Uc_EmulateFrontandRearGearing
//!	Generated Date	: Mon, 2, Mar 2020  
	File Path	: Emulate_Front_and_Rear_GearingSim/Animate/Uc_EmulateFrontandRearGearing.h
*********************************************************************/

#ifndef Uc_EmulateFrontandRearGearing_H
#define Uc_EmulateFrontandRearGearing_H

//## auto_generated
#include <oxf/oxf.h>
//## auto_generated
#include <../Profiles/SysML/SIDefinitions.h>
//## auto_generated
#include <aom/aom.h>
//## auto_generated
#include "EmulateFrontandRearGearingPkg.h"
//## class Uc_EmulateFrontandRearGearing
#include "evAugmentFrontGear_ProxyReceptionInterface.h"
//## class Uc_EmulateFrontandRearGearing
#include "evAugmentRearGear_ProxyReceptionInterface.h"
//## class Uc_EmulateFrontandRearGearing
#include "evBeginRiding_ProxyReceptionInterface.h"
//## class Uc_EmulateFrontandRearGearing
#include "evConfigureGearing_ProxyReceptionInterface.h"
//## class Uc_EmulateFrontandRearGearing
#include "evDecrementFrontGear_ProxyReceptionInterface.h"
//## class Uc_EmulateFrontandRearGearing
#include "evDecrementRearGear_ProxyReceptionInterface.h"
//## class Uc_EmulateFrontandRearGearing
#include "evDoneConfiguring_ProxyReceptionInterface.h"
//## class Uc_EmulateFrontandRearGearing
#include "evDoneRiding_ProxyReceptionInterface.h"
//## class Uc_EmulateFrontandRearGearing
#include "evSetCassetteRingTeeth_ProxyReceptionInterface.h"
//## class Uc_EmulateFrontandRearGearing
#include "evSetChainRingTeeth_ProxyReceptionInterface.h"
//## class Uc_EmulateFrontandRearGearing
#include "evSetNumberOfCassetteRings_ProxyReceptionInterface.h"
//## class Uc_EmulateFrontandRearGearing
#include "evSetNumberOfChainRings_ProxyReceptionInterface.h"
//## class Uc_EmulateFrontandRearGearing
#include "evShowGearing_ProxyReceptionInterface.h"
//## class paEFRG_TrainingApp_C
#include "evCurrentGearing_ProxyReceptionInterface.h"
//## class OutBound
#include "evInitialSettings_ProxyReceptionInterface.h"
//#[ ignore
#define OMAnim_FunctionalAnalysisPkg_EmulateFrontandRearGearingPkg_Uc_EmulateFrontandRearGearing_setGearInches_RhpReal_ARGS_DECLARATION RhpReal p_gearInches;

#define OMAnim_FunctionalAnalysisPkg_EmulateFrontandRearGearingPkg_Uc_EmulateFrontandRearGearing_setNCassetteRings_int_ARGS_DECLARATION int p_nCassetteRings;

#define OMAnim_FunctionalAnalysisPkg_EmulateFrontandRearGearingPkg_Uc_EmulateFrontandRearGearing_setNFrontChainRings_int_ARGS_DECLARATION int p_nFrontChainRings;

#define OMAnim_FunctionalAnalysisPkg_EmulateFrontandRearGearingPkg_Uc_EmulateFrontandRearGearing_setSelectedCassetteRing_int_ARGS_DECLARATION int p_selectedCassetteRing;

#define OMAnim_FunctionalAnalysisPkg_EmulateFrontandRearGearingPkg_Uc_EmulateFrontandRearGearing_setSelectedChainRing_int_ARGS_DECLARATION int p_selectedChainRing;
//#]

//## package FunctionalAnalysisPkg::EmulateFrontandRearGearingPkg

//## class Uc_EmulateFrontandRearGearing
class Uc_EmulateFrontandRearGearing : public evAugmentFrontGear_ProxyReceptionInterface, public evAugmentRearGear_ProxyReceptionInterface, public evBeginRiding_ProxyReceptionInterface, public evConfigureGearing_ProxyReceptionInterface, public evDecrementFrontGear_ProxyReceptionInterface, public evDecrementRearGear_ProxyReceptionInterface, public evDoneConfiguring_ProxyReceptionInterface, public evDoneRiding_ProxyReceptionInterface, public evSetCassetteRingTeeth_ProxyReceptionInterface, public evSetChainRingTeeth_ProxyReceptionInterface, public evSetNumberOfCassetteRings_ProxyReceptionInterface, public evSetNumberOfChainRings_ProxyReceptionInterface, public evShowGearing_ProxyReceptionInterface {
public :

    //#[ type DEFAULT_CHAIN_RINGS
    #define DEFAULT_CHAIN_RINGS 2
    //#]
    
    //#[ type DEFAULT_CASSETTE_RINGS
    #define DEFAULT_CASSETTE_RINGS 12
    //#]
    
    //#[ type MAX_CHAIN_RINGS
    #define MAX_CHAIN_RINGS 3
    //#]
    
    //#[ type MAX_CASSETTE_RINGS
    #define MAX_CASSETTE_RINGS 12
    //#]
    
    //#[ type MAX_CHAIN_RING_TEETH
    #define MAX_CHAIN_RING_TEETH 70
    //#]
    
    //#[ type MAX_CASSETTE_RING_TEETH
    #define MAX_CASSETTE_RING_TEETH 50
    //#]
    
    //#[ type MIN_CHAIN_RING_TEETH
    #define MIN_CHAIN_RING_TEETH 20
    //#]
    
    //#[ type MIN_CASSETTE_RING_TEETH
    #define MIN_CASSETTE_RING_TEETH 10
    //#]
    
//#[ ignore
    //## package FunctionalAnalysisPkg::EmulateFrontandRearGearingPkg
    class paEFRG_TrainingApp_C : public evCurrentGearing_ProxyReceptionInterface {
        ////    Constructors and destructors    ////
        
    public :
    
        //## auto_generated
        paEFRG_TrainingApp_C();
        
        //## auto_generated
        virtual ~paEFRG_TrainingApp_C();
        
        ////    Operations    ////
        
        //## auto_generated
        evCurrentGearing_ProxyReceptionInterface* getItsEvCurrentGearing_ProxyReceptionInterface();
        
        //## auto_generated
        evCurrentGearing_ProxyReceptionInterface* getOutBound();
        
        //## auto_generated
        virtual bool send(IOxfEvent* event, const IOxfEventGenerationParams& params);
        
        //## auto_generated
        virtual bool send(IOxfEvent* event);
        
        ////    Additional operations    ////
        
        //## auto_generated
        void setItsEvCurrentGearing_ProxyReceptionInterface(OMReactive* p_OMReactive);
    
    protected :
    
        //## auto_generated
        void cleanUpRelations();
        
        ////    Attributes    ////
        
        int _p_;		//## attribute _p_
        
        ////    Relations and components    ////
        
        OMReactive* itsEvCurrentGearing_ProxyReceptionInterface;		//## link itsEvCurrentGearing_ProxyReceptionInterface
    };
    
    //## package FunctionalAnalysisPkg::EmulateFrontandRearGearingPkg
    class paEFRG_Rider_C {
    public :
    
        //## auto_generated
        class InBound_C;
        
        //## auto_generated
        class OutBound_C;
        
        //## package FunctionalAnalysisPkg::EmulateFrontandRearGearingPkg
        class InBound_C : public evAugmentFrontGear_ProxyReceptionInterface, public evAugmentRearGear_ProxyReceptionInterface, public evBeginRiding_ProxyReceptionInterface, public evConfigureGearing_ProxyReceptionInterface, public evDecrementFrontGear_ProxyReceptionInterface, public evDecrementRearGear_ProxyReceptionInterface, public evDoneConfiguring_ProxyReceptionInterface, public evDoneRiding_ProxyReceptionInterface, public evSetCassetteRingTeeth_ProxyReceptionInterface, public evSetChainRingTeeth_ProxyReceptionInterface, public evSetNumberOfCassetteRings_ProxyReceptionInterface, public evSetNumberOfChainRings_ProxyReceptionInterface, public evShowGearing_ProxyReceptionInterface {
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
            void setItsEvAugmentFrontGear_ProxyReceptionInterface(evAugmentFrontGear_ProxyReceptionInterface* p_evAugmentFrontGear_ProxyReceptionInterface);
            
            //## auto_generated
            void setItsEvAugmentRearGear_ProxyReceptionInterface(evAugmentRearGear_ProxyReceptionInterface* p_evAugmentRearGear_ProxyReceptionInterface);
            
            //## auto_generated
            void setItsEvBeginRiding_ProxyReceptionInterface(evBeginRiding_ProxyReceptionInterface* p_evBeginRiding_ProxyReceptionInterface);
            
            //## auto_generated
            void setItsEvConfigureGearing_ProxyReceptionInterface(evConfigureGearing_ProxyReceptionInterface* p_evConfigureGearing_ProxyReceptionInterface);
            
            //## auto_generated
            void setItsEvDecrementFrontGear_ProxyReceptionInterface(evDecrementFrontGear_ProxyReceptionInterface* p_evDecrementFrontGear_ProxyReceptionInterface);
            
            //## auto_generated
            void setItsEvDecrementRearGear_ProxyReceptionInterface(evDecrementRearGear_ProxyReceptionInterface* p_evDecrementRearGear_ProxyReceptionInterface);
            
            //## auto_generated
            void setItsEvDoneConfiguring_ProxyReceptionInterface(evDoneConfiguring_ProxyReceptionInterface* p_evDoneConfiguring_ProxyReceptionInterface);
            
            //## auto_generated
            void setItsEvDoneRiding_ProxyReceptionInterface(evDoneRiding_ProxyReceptionInterface* p_evDoneRiding_ProxyReceptionInterface);
            
            //## auto_generated
            void setItsEvSetCassetteRingTeeth_ProxyReceptionInterface(evSetCassetteRingTeeth_ProxyReceptionInterface* p_evSetCassetteRingTeeth_ProxyReceptionInterface);
            
            //## auto_generated
            void setItsEvSetChainRingTeeth_ProxyReceptionInterface(evSetChainRingTeeth_ProxyReceptionInterface* p_evSetChainRingTeeth_ProxyReceptionInterface);
            
            //## auto_generated
            void setItsEvSetNumberOfCassetteRings_ProxyReceptionInterface(evSetNumberOfCassetteRings_ProxyReceptionInterface* p_evSetNumberOfCassetteRings_ProxyReceptionInterface);
            
            //## auto_generated
            void setItsEvSetNumberOfChainRings_ProxyReceptionInterface(evSetNumberOfChainRings_ProxyReceptionInterface* p_evSetNumberOfChainRings_ProxyReceptionInterface);
            
            //## auto_generated
            void setItsEvShowGearing_ProxyReceptionInterface(evShowGearing_ProxyReceptionInterface* p_evShowGearing_ProxyReceptionInterface);
            
            //## auto_generated
            paEFRG_Rider_C* getPort() const;
            
            //## auto_generated
            void setPort(paEFRG_Rider_C* p_paEFRG_Rider_C);
        
        protected :
        
            //## auto_generated
            void cleanUpRelations();
            
            ////    Relations and components    ////
            
            evAugmentFrontGear_ProxyReceptionInterface* itsEvAugmentFrontGear_ProxyReceptionInterface;		//## link itsEvAugmentFrontGear_ProxyReceptionInterface
            
            evAugmentRearGear_ProxyReceptionInterface* itsEvAugmentRearGear_ProxyReceptionInterface;		//## link itsEvAugmentRearGear_ProxyReceptionInterface
            
            evBeginRiding_ProxyReceptionInterface* itsEvBeginRiding_ProxyReceptionInterface;		//## link itsEvBeginRiding_ProxyReceptionInterface
            
            evConfigureGearing_ProxyReceptionInterface* itsEvConfigureGearing_ProxyReceptionInterface;		//## link itsEvConfigureGearing_ProxyReceptionInterface
            
            evDecrementFrontGear_ProxyReceptionInterface* itsEvDecrementFrontGear_ProxyReceptionInterface;		//## link itsEvDecrementFrontGear_ProxyReceptionInterface
            
            evDecrementRearGear_ProxyReceptionInterface* itsEvDecrementRearGear_ProxyReceptionInterface;		//## link itsEvDecrementRearGear_ProxyReceptionInterface
            
            evDoneConfiguring_ProxyReceptionInterface* itsEvDoneConfiguring_ProxyReceptionInterface;		//## link itsEvDoneConfiguring_ProxyReceptionInterface
            
            evDoneRiding_ProxyReceptionInterface* itsEvDoneRiding_ProxyReceptionInterface;		//## link itsEvDoneRiding_ProxyReceptionInterface
            
            evSetCassetteRingTeeth_ProxyReceptionInterface* itsEvSetCassetteRingTeeth_ProxyReceptionInterface;		//## link itsEvSetCassetteRingTeeth_ProxyReceptionInterface
            
            evSetChainRingTeeth_ProxyReceptionInterface* itsEvSetChainRingTeeth_ProxyReceptionInterface;		//## link itsEvSetChainRingTeeth_ProxyReceptionInterface
            
            evSetNumberOfCassetteRings_ProxyReceptionInterface* itsEvSetNumberOfCassetteRings_ProxyReceptionInterface;		//## link itsEvSetNumberOfCassetteRings_ProxyReceptionInterface
            
            evSetNumberOfChainRings_ProxyReceptionInterface* itsEvSetNumberOfChainRings_ProxyReceptionInterface;		//## link itsEvSetNumberOfChainRings_ProxyReceptionInterface
            
            evShowGearing_ProxyReceptionInterface* itsEvShowGearing_ProxyReceptionInterface;		//## link itsEvShowGearing_ProxyReceptionInterface
            
            paEFRG_Rider_C* port;		//## link port
            
            ////    Framework operations    ////
        
        public :
        
            //## auto_generated
            void __setPort(paEFRG_Rider_C* p_paEFRG_Rider_C);
            
            //## auto_generated
            void _setPort(paEFRG_Rider_C* p_paEFRG_Rider_C);
            
            //## auto_generated
            void _clearPort();
        };
        
        //## package FunctionalAnalysisPkg::EmulateFrontandRearGearingPkg
        class OutBound_C : public evCurrentGearing_ProxyReceptionInterface, public evInitialSettings_ProxyReceptionInterface {
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
            void setItsEvCurrentGearing_ProxyReceptionInterface(OMReactive* p_OMReactive);
            
            //## auto_generated
            void setItsEvInitialSettings_ProxyReceptionInterface(OMReactive* p_OMReactive);
        
        protected :
        
            //## auto_generated
            void cleanUpRelations();
            
            ////    Relations and components    ////
            
            OMReactive* itsEvCurrentGearing_ProxyReceptionInterface;		//## link itsEvCurrentGearing_ProxyReceptionInterface
            
            OMReactive* itsEvInitialSettings_ProxyReceptionInterface;		//## link itsEvInitialSettings_ProxyReceptionInterface
        };
        
        ////    Constructors and destructors    ////
        
        //## auto_generated
        paEFRG_Rider_C();
        
        //## auto_generated
        virtual ~paEFRG_Rider_C();
        
        ////    Operations    ////
        
        //## auto_generated
        void connectUc_EmulateFrontandRearGearing(Uc_EmulateFrontandRearGearing* part);
        
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
        void setItsEvAugmentFrontGear_ProxyReceptionInterface(evAugmentFrontGear_ProxyReceptionInterface* p_evAugmentFrontGear_ProxyReceptionInterface);
        
        //## auto_generated
        void setItsEvAugmentRearGear_ProxyReceptionInterface(evAugmentRearGear_ProxyReceptionInterface* p_evAugmentRearGear_ProxyReceptionInterface);
        
        //## auto_generated
        void setItsEvBeginRiding_ProxyReceptionInterface(evBeginRiding_ProxyReceptionInterface* p_evBeginRiding_ProxyReceptionInterface);
        
        //## auto_generated
        void setItsEvConfigureGearing_ProxyReceptionInterface(evConfigureGearing_ProxyReceptionInterface* p_evConfigureGearing_ProxyReceptionInterface);
        
        //## auto_generated
        void setItsEvCurrentGearing_ProxyReceptionInterface(OMReactive* p_evCurrentGearing_ProxyReceptionInterface);
        
        //## auto_generated
        void setItsEvDecrementFrontGear_ProxyReceptionInterface(evDecrementFrontGear_ProxyReceptionInterface* p_evDecrementFrontGear_ProxyReceptionInterface);
        
        //## auto_generated
        void setItsEvDecrementRearGear_ProxyReceptionInterface(evDecrementRearGear_ProxyReceptionInterface* p_evDecrementRearGear_ProxyReceptionInterface);
        
        //## auto_generated
        void setItsEvDoneConfiguring_ProxyReceptionInterface(evDoneConfiguring_ProxyReceptionInterface* p_evDoneConfiguring_ProxyReceptionInterface);
        
        //## auto_generated
        void setItsEvDoneRiding_ProxyReceptionInterface(evDoneRiding_ProxyReceptionInterface* p_evDoneRiding_ProxyReceptionInterface);
        
        //## auto_generated
        void setItsEvInitialSettings_ProxyReceptionInterface(OMReactive* p_evInitialSettings_ProxyReceptionInterface);
        
        //## auto_generated
        void setItsEvSetCassetteRingTeeth_ProxyReceptionInterface(evSetCassetteRingTeeth_ProxyReceptionInterface* p_evSetCassetteRingTeeth_ProxyReceptionInterface);
        
        //## auto_generated
        void setItsEvSetChainRingTeeth_ProxyReceptionInterface(evSetChainRingTeeth_ProxyReceptionInterface* p_evSetChainRingTeeth_ProxyReceptionInterface);
        
        //## auto_generated
        void setItsEvSetNumberOfCassetteRings_ProxyReceptionInterface(evSetNumberOfCassetteRings_ProxyReceptionInterface* p_evSetNumberOfCassetteRings_ProxyReceptionInterface);
        
        //## auto_generated
        void setItsEvSetNumberOfChainRings_ProxyReceptionInterface(evSetNumberOfChainRings_ProxyReceptionInterface* p_evSetNumberOfChainRings_ProxyReceptionInterface);
        
        //## auto_generated
        void setItsEvShowGearing_ProxyReceptionInterface(evShowGearing_ProxyReceptionInterface* p_evShowGearing_ProxyReceptionInterface);
        
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
    friend class OMAnimatedUc_EmulateFrontandRearGearing;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    Uc_EmulateFrontandRearGearing(IOxfActive* theActiveContext = 0);
    
    //## auto_generated
    virtual ~Uc_EmulateFrontandRearGearing();
    
    ////    Operations    ////
    
    //## operation augmentFrontGear()
    virtual void augmentFrontGear();
    
    //## operation augmentRearGear()
    virtual void augmentRearGear();
    
    //## operation cassetteRingTeethOK(int)
    virtual RhpBoolean cassetteRingTeethOK(int teeth);
    
    //## operation chainRingTeethOK(int)
    virtual RhpBoolean chainRingTeethOK(int teeth);
    
    //## operation computeGearInches(int,int)
    virtual void computeGearInches(int front, int rear);
    
    //## operation decrementFrontGear()
    virtual void decrementFrontGear();
    
    //## operation decrementRearGear()
    virtual void decrementRearGear();
    
    //## operation display1Num(RhpString,RhpReal)
    virtual void display1Num(const RhpString& s, RhpReal num);
    
    //## operation display2Num(RhpString,RhpReal,RhpString,RhpReal)
    virtual void display2Num(const RhpString& s1, RhpReal n1, const RhpString& s2, RhpReal n2);
    
    //## operation displayError(RhpString)
    virtual void displayError(const RhpString& s);
    
    //## operation displayGearing()
    virtual void displayGearing();
    
    //## operation numberOfCassetteRingsOK(int)
    virtual RhpBoolean numberOfCassetteRingsOK(int n);
    
    //## operation numberOfChainRingsOK(int)
    virtual RhpBoolean numberOfChainRingsOK(int n);
    
    //## operation selectGear(int,int)
    virtual void selectGear(int frontRing, int rearRing);
    
    //## operation setCassetteRing(int,int)
    virtual void setCassetteRing(int ring, int teeth);
    
    //## operation setDefaultsForCassetteRings(int)
    virtual void setDefaultsForCassetteRings(int rings);
    
    //## operation setDefaultsForChainRings(int)
    virtual void setDefaultsForChainRings(int rings);
    
    //## operation setFrontChainRing(int,int)
    virtual void setFrontChainRing(int ring, int teeth);
    
    ////    Additional operations    ////
    
    //## auto_generated
    paEFRG_TrainingApp_C* getPaEFRG_TrainingApp() const;
    
    //## auto_generated
    paEFRG_TrainingApp_C* get_paEFRG_TrainingApp() const;
    
    //## auto_generated
    paEFRG_Rider_C* getPaEFRG_Rider() const;
    
    //## auto_generated
    paEFRG_Rider_C* get_paEFRG_Rider() const;
    
    //## auto_generated
    int getCassette(int i1) const;
    
    //## auto_generated
    void setCassette(int i1, int p_cassette);
    
    //## auto_generated
    int getChainRing(int i1) const;
    
    //## auto_generated
    void setChainRing(int i1, int p_chainRing);
    
    //## auto_generated
    RhpReal getGearInches() const;
    
    //## auto_generated
    void setGearInches(RhpReal p_gearInches);
    
    //## auto_generated
    int getNCassetteRings() const;
    
    //## auto_generated
    void setNCassetteRings(int p_nCassetteRings);
    
    //## auto_generated
    int getNFrontChainRings() const;
    
    //## auto_generated
    void setNFrontChainRings(int p_nFrontChainRings);
    
    //## auto_generated
    int getSelectedCassetteRing() const;
    
    //## auto_generated
    void setSelectedCassetteRing(int p_selectedCassetteRing);
    
    //## auto_generated
    int getSelectedChainRing() const;
    
    //## auto_generated
    void setSelectedChainRing(int p_selectedChainRing);
    
    //## auto_generated
    virtual bool startBehavior();

protected :

    //## auto_generated
    void initRelations();
    
    //## auto_generated
    void initStatechart();
    
    ////    Attributes    ////
    
    int cassette[12];		//## attribute cassette
    
    int chainRing[3];		//## attribute chainRing
    
    RhpReal gearInches;		//## attribute gearInches
    
    int nCassetteRings;		//## attribute nCassetteRings
    
    int nFrontChainRings;		//## attribute nFrontChainRings
    
    int selectedCassetteRing;		//## attribute selectedCassetteRing
    
    int selectedChainRing;		//## attribute selectedChainRing
    
    ////    Relations and components    ////
    
//#[ ignore
    paEFRG_TrainingApp_C paEFRG_TrainingApp;
    
    paEFRG_Rider_C paEFRG_Rider;
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
    
    // SettingUpGearing:
    //## statechart_method
    inline bool SettingUpGearing_IN() const;
    
    //## statechart_method
    void SettingUpGearing_entDef();
    
    //## statechart_method
    void SettingUpGearing_exit();
    
    //## statechart_method
    IOxfReactive::TakeEventStatus SettingUpGearingTakeevShowGearing();
    
    //## statechart_method
    IOxfReactive::TakeEventStatus SettingUpGearing_processEvent();
    
    //## statechart_method
    IOxfReactive::TakeEventStatus SettingUpGearing_handleEvent();
    
    // state_6:
    //## statechart_method
    inline bool state_6_IN() const;
    
    //## statechart_method
    void state_6_entDef();
    
    //## statechart_method
    void state_6_exit();
    
    //## statechart_method
    IOxfReactive::TakeEventStatus state_6_processEvent();
    
    // UpdateRearGear:
    //## statechart_method
    inline bool UpdateRearGear_IN() const;
    
    //## statechart_method
    IOxfReactive::TakeEventStatus UpdateRearGear_handleEvent();
    
    // state_5:
    //## statechart_method
    inline bool state_5_IN() const;
    
    //## statechart_method
    void state_5_entDef();
    
    //## statechart_method
    void state_5_exit();
    
    //## statechart_method
    IOxfReactive::TakeEventStatus state_5_processEvent();
    
    //## statechart_method
    IOxfReactive::TakeEventStatus state_5_handleEvent();
    
    // UpdateFrontGear:
    //## statechart_method
    inline bool UpdateFrontGear_IN() const;
    
    //## statechart_method
    IOxfReactive::TakeEventStatus UpdateFrontGear_handleEvent();
    
    // sendaction_9:
    //## statechart_method
    inline bool sendaction_9_IN() const;
    
    // sendaction_8:
    //## statechart_method
    inline bool sendaction_8_IN() const;
    
    // sendaction_7:
    //## statechart_method
    inline bool sendaction_7_IN() const;
    
    // Idle:
    //## statechart_method
    inline bool Idle_IN() const;
    
    //## statechart_method
    IOxfReactive::TakeEventStatus Idle_handleEvent();
    
    // ChangeGearing:
    //## statechart_method
    inline bool ChangeGearing_IN() const;
    
    //## statechart_method
    IOxfReactive::TakeEventStatus ChangeGearing_handleEvent();
    
    ////    Framework    ////

protected :

//#[ ignore
    enum Uc_EmulateFrontandRearGearing_Enum {
        OMNonState = 0,
        SettingUpGearing = 1,
        state_6 = 2,
        UpdateRearGear = 3,
        state_5 = 4,
        UpdateFrontGear = 5,
        sendaction_9 = 6,
        sendaction_8 = 7,
        sendaction_7 = 8,
        Idle = 9,
        ChangeGearing = 10
    };
    
    int rootState_subState;
    
    int rootState_active;
    
    int state_6_subState;
    
    int state_6_active;
    
    int state_5_subState;
    
    int state_5_active;
//#]
};

#ifdef _OMINSTRUMENT
DECLARE_OPERATION_CLASS(FunctionalAnalysisPkg_EmulateFrontandRearGearingPkg_Uc_EmulateFrontandRearGearing_setGearInches_RhpReal)

DECLARE_OPERATION_CLASS(FunctionalAnalysisPkg_EmulateFrontandRearGearingPkg_Uc_EmulateFrontandRearGearing_setNCassetteRings_int)

DECLARE_OPERATION_CLASS(FunctionalAnalysisPkg_EmulateFrontandRearGearingPkg_Uc_EmulateFrontandRearGearing_setNFrontChainRings_int)

DECLARE_OPERATION_CLASS(FunctionalAnalysisPkg_EmulateFrontandRearGearingPkg_Uc_EmulateFrontandRearGearing_setSelectedCassetteRing_int)

DECLARE_OPERATION_CLASS(FunctionalAnalysisPkg_EmulateFrontandRearGearingPkg_Uc_EmulateFrontandRearGearing_setSelectedChainRing_int)

//#[ ignore
class OMAnimatedUc_EmulateFrontandRearGearing : virtual public AOMInstance {
    DECLARE_REACTIVE_META(Uc_EmulateFrontandRearGearing, OMAnimatedUc_EmulateFrontandRearGearing)
    
    DECLARE_META_OP(FunctionalAnalysisPkg_EmulateFrontandRearGearingPkg_Uc_EmulateFrontandRearGearing_setGearInches_RhpReal)
    
    DECLARE_META_OP(FunctionalAnalysisPkg_EmulateFrontandRearGearingPkg_Uc_EmulateFrontandRearGearing_setNCassetteRings_int)
    
    DECLARE_META_OP(FunctionalAnalysisPkg_EmulateFrontandRearGearingPkg_Uc_EmulateFrontandRearGearing_setNFrontChainRings_int)
    
    DECLARE_META_OP(FunctionalAnalysisPkg_EmulateFrontandRearGearingPkg_Uc_EmulateFrontandRearGearing_setSelectedCassetteRing_int)
    
    DECLARE_META_OP(FunctionalAnalysisPkg_EmulateFrontandRearGearingPkg_Uc_EmulateFrontandRearGearing_setSelectedChainRing_int)
    
    ////    Framework operations    ////
    
public :

    virtual void serializeAttributes(AOMSAttributes* aomsAttributes) const;
    
    virtual void serializeRelations(AOMSRelations* aomsRelations) const;
    
    //## statechart_method
    void rootState_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void SettingUpGearing_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void state_6_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void UpdateRearGear_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void state_5_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void UpdateFrontGear_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void sendaction_9_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void sendaction_8_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void sendaction_7_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void Idle_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void ChangeGearing_serializeStates(AOMSState* aomsState) const;
};
//#]
#endif // _OMINSTRUMENT

inline bool Uc_EmulateFrontandRearGearing::rootState_IN() const {
    return true;
}

inline bool Uc_EmulateFrontandRearGearing::SettingUpGearing_IN() const {
    return rootState_subState == SettingUpGearing;
}

inline bool Uc_EmulateFrontandRearGearing::state_6_IN() const {
    return SettingUpGearing_IN();
}

inline bool Uc_EmulateFrontandRearGearing::UpdateRearGear_IN() const {
    return state_6_subState == UpdateRearGear;
}

inline bool Uc_EmulateFrontandRearGearing::state_5_IN() const {
    return SettingUpGearing_IN();
}

inline bool Uc_EmulateFrontandRearGearing::UpdateFrontGear_IN() const {
    return state_5_subState == UpdateFrontGear;
}

inline bool Uc_EmulateFrontandRearGearing::sendaction_9_IN() const {
    return rootState_subState == sendaction_9;
}

inline bool Uc_EmulateFrontandRearGearing::sendaction_8_IN() const {
    return rootState_subState == sendaction_8;
}

inline bool Uc_EmulateFrontandRearGearing::sendaction_7_IN() const {
    return rootState_subState == sendaction_7;
}

inline bool Uc_EmulateFrontandRearGearing::Idle_IN() const {
    return rootState_subState == Idle;
}

inline bool Uc_EmulateFrontandRearGearing::ChangeGearing_IN() const {
    return rootState_subState == ChangeGearing;
}

#endif
/*********************************************************************
	File Path	: Emulate_Front_and_Rear_GearingSim/Animate/Uc_EmulateFrontandRearGearing.h
*********************************************************************/
