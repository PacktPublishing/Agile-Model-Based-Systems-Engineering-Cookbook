/*********************************************************************
	Rhapsody	: 8.4 
	Login		: Bruce
	Component	: Emulate_Front_and_Rear_GearingSim 
	Configuration 	: Animate
	Model Element	: aEFRG_TrainingApp
//!	Generated Date	: Mon, 2, Mar 2020  
	File Path	: Emulate_Front_and_Rear_GearingSim/Animate/aEFRG_TrainingApp.h
*********************************************************************/

#ifndef aEFRG_TrainingApp_H
#define aEFRG_TrainingApp_H

//## auto_generated
#include <oxf/oxf.h>
//## auto_generated
#include <../Profiles/SysML/SIDefinitions.h>
//## auto_generated
#include <aom/aom.h>
//## auto_generated
#include "EmulateFrontandRearGearingActorPkg.h"
//## class aEFRG_TrainingApp
#include "evCurrentGearing_ProxyReceptionInterface.h"
//#[ ignore
#define OMAnim_FunctionalAnalysisPkg_EmulateFrontandRearGearingPkg_EmulateFrontandRearGearingActorPkg_aEFRG_TrainingApp_setFrontRing_int_ARGS_DECLARATION int p_frontRing;

#define OMAnim_FunctionalAnalysisPkg_EmulateFrontandRearGearingPkg_EmulateFrontandRearGearingActorPkg_aEFRG_TrainingApp_setRearRing_int_ARGS_DECLARATION int p_rearRing;
//#]

//## package FunctionalAnalysisPkg::EmulateFrontandRearGearingPkg::EmulateFrontandRearGearingActorPkg

//## class aEFRG_TrainingApp
class aEFRG_TrainingApp : public evCurrentGearing_ProxyReceptionInterface {
public :

//#[ ignore
    //## package FunctionalAnalysisPkg::EmulateFrontandRearGearingPkg::EmulateFrontandRearGearingActorPkg
    class pUc_EmulateFrontandRearGearing_C : public evCurrentGearing_ProxyReceptionInterface {
        ////    Constructors and destructors    ////
        
    public :
    
        //## auto_generated
        pUc_EmulateFrontandRearGearing_C();
        
        //## auto_generated
        virtual ~pUc_EmulateFrontandRearGearing_C();
        
        ////    Operations    ////
        
        //## auto_generated
        void connectAEFRG_TrainingApp(aEFRG_TrainingApp* part);
        
        //## auto_generated
        evCurrentGearing_ProxyReceptionInterface* getItsEvCurrentGearing_ProxyReceptionInterface();
        
        //## auto_generated
        virtual bool send(IOxfEvent* event, const IOxfEventGenerationParams& params);
        
        //## auto_generated
        virtual bool send(IOxfEvent* event);
        
        ////    Additional operations    ////
        
        //## auto_generated
        void setItsEvCurrentGearing_ProxyReceptionInterface(evCurrentGearing_ProxyReceptionInterface* p_evCurrentGearing_ProxyReceptionInterface);
    
    protected :
    
        //## auto_generated
        void cleanUpRelations();
        
        ////    Attributes    ////
        
        int _p_;		//## attribute _p_
        
        ////    Relations and components    ////
        
        evCurrentGearing_ProxyReceptionInterface* itsEvCurrentGearing_ProxyReceptionInterface;		//## link itsEvCurrentGearing_ProxyReceptionInterface
    };
//#]

    ////    Friends    ////
    
#ifdef _OMINSTRUMENT
    friend class OMAnimatedaEFRG_TrainingApp;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    aEFRG_TrainingApp(IOxfActive* theActiveContext = 0);
    
    //## auto_generated
    ~aEFRG_TrainingApp();
    
    ////    Additional operations    ////
    
    //## auto_generated
    pUc_EmulateFrontandRearGearing_C* getPUc_EmulateFrontandRearGearing() const;
    
    //## auto_generated
    pUc_EmulateFrontandRearGearing_C* get_pUc_EmulateFrontandRearGearing() const;
    
    //## auto_generated
    int getFrontRing() const;
    
    //## auto_generated
    void setFrontRing(int p_frontRing);
    
    //## auto_generated
    int getRearRing() const;
    
    //## auto_generated
    void setRearRing(int p_rearRing);
    
    //## auto_generated
    virtual bool startBehavior();

protected :

    //## auto_generated
    void initRelations();
    
    //## auto_generated
    void initStatechart();
    
    ////    Attributes    ////
    
    int frontRing;		//## attribute frontRing
    
    int rearRing;		//## attribute rearRing
    
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
    
    // Running:
    //## statechart_method
    inline bool Running_IN() const;
    
    ////    Framework    ////

protected :

//#[ ignore
    enum aEFRG_TrainingApp_Enum {
        OMNonState = 0,
        Running = 1
    };
    
    int rootState_subState;
    
    int rootState_active;
//#]
};

#ifdef _OMINSTRUMENT
DECLARE_OPERATION_CLASS(FunctionalAnalysisPkg_EmulateFrontandRearGearingPkg_EmulateFrontandRearGearingActorPkg_aEFRG_TrainingApp_setFrontRing_int)

DECLARE_OPERATION_CLASS(FunctionalAnalysisPkg_EmulateFrontandRearGearingPkg_EmulateFrontandRearGearingActorPkg_aEFRG_TrainingApp_setRearRing_int)

//#[ ignore
class OMAnimatedaEFRG_TrainingApp : virtual public AOMInstance {
    DECLARE_REACTIVE_META(aEFRG_TrainingApp, OMAnimatedaEFRG_TrainingApp)
    
    DECLARE_META_OP(FunctionalAnalysisPkg_EmulateFrontandRearGearingPkg_EmulateFrontandRearGearingActorPkg_aEFRG_TrainingApp_setFrontRing_int)
    
    DECLARE_META_OP(FunctionalAnalysisPkg_EmulateFrontandRearGearingPkg_EmulateFrontandRearGearingActorPkg_aEFRG_TrainingApp_setRearRing_int)
    
    ////    Framework operations    ////
    
public :

    virtual void serializeAttributes(AOMSAttributes* aomsAttributes) const;
    
    virtual void serializeRelations(AOMSRelations* aomsRelations) const;
    
    //## statechart_method
    void rootState_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void Running_serializeStates(AOMSState* aomsState) const;
};
//#]
#endif // _OMINSTRUMENT

inline bool aEFRG_TrainingApp::rootState_IN() const {
    return true;
}

inline bool aEFRG_TrainingApp::Running_IN() const {
    return rootState_subState == Running;
}

#endif
/*********************************************************************
	File Path	: Emulate_Front_and_Rear_GearingSim/Animate/aEFRG_TrainingApp.h
*********************************************************************/
