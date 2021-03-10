/*********************************************************************
	Rhapsody	: 8.4 
	Login		: Bruce
	Component	: Emulate_Basic_GearingSim 
	Configuration 	: Animate
	Model Element	: aEBG_TrainingApp
//!	Generated Date	: Fri, 27, Dec 2019  
	File Path	: Emulate_Basic_GearingSim/Animate/aEBG_TrainingApp.h
*********************************************************************/

#ifndef aEBG_TrainingApp_H
#define aEBG_TrainingApp_H

//## auto_generated
#include <oxf/oxf.h>
//## auto_generated
#include <../Profiles/SysML/SIDefinitions.h>
//## auto_generated
#include <aom/aom.h>
//## auto_generated
#include "EmulateBasicGearingActorPkg.h"
//## class aEBG_TrainingApp
#include "gearing_ProxyReceptionInterface.h"
//## package FunctionalAnalysisPkg::EmulateBasicGearingPkg::EmulateBasicGearingActorPkg

//## class aEBG_TrainingApp
class aEBG_TrainingApp : public gearing_ProxyReceptionInterface {
public :

//#[ ignore
    //## package FunctionalAnalysisPkg::EmulateBasicGearingPkg::EmulateBasicGearingActorPkg
    class pUc_EmulateBasicGearing_C : public gearing_ProxyReceptionInterface {
        ////    Constructors and destructors    ////
        
    public :
    
        //## auto_generated
        pUc_EmulateBasicGearing_C();
        
        //## auto_generated
        virtual ~pUc_EmulateBasicGearing_C();
        
        ////    Operations    ////
        
        //## auto_generated
        void connectAEBG_TrainingApp(aEBG_TrainingApp* part);
        
        //## auto_generated
        gearing_ProxyReceptionInterface* getItsGearing_ProxyReceptionInterface();
        
        //## auto_generated
        virtual bool send(IOxfEvent* event, const IOxfEventGenerationParams& params);
        
        //## auto_generated
        virtual bool send(IOxfEvent* event);
        
        ////    Additional operations    ////
        
        //## auto_generated
        void setItsGearing_ProxyReceptionInterface(gearing_ProxyReceptionInterface* p_gearing_ProxyReceptionInterface);
    
    protected :
    
        //## auto_generated
        void cleanUpRelations();
        
        ////    Attributes    ////
        
        int _p_;		//## attribute _p_
        
        ////    Relations and components    ////
        
        gearing_ProxyReceptionInterface* itsGearing_ProxyReceptionInterface;		//## link itsGearing_ProxyReceptionInterface
    };
//#]

    ////    Friends    ////
    
#ifdef _OMINSTRUMENT
    friend class OMAnimatedaEBG_TrainingApp;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    aEBG_TrainingApp(IOxfActive* theActiveContext = 0);
    
    //## auto_generated
    virtual ~aEBG_TrainingApp();
    
    ////    Operations    ////
    
    //## operation displayGearing(Real)
    virtual void displayGearing(Real gear);
    
    ////    Additional operations    ////
    
    //## auto_generated
    pUc_EmulateBasicGearing_C* getPUc_EmulateBasicGearing() const;
    
    //## auto_generated
    pUc_EmulateBasicGearing_C* get_pUc_EmulateBasicGearing() const;
    
    //## auto_generated
    Real getDisplayedGear() const;
    
    //## auto_generated
    void setDisplayedGear(Real p_displayedGear);
    
    //## auto_generated
    virtual bool startBehavior();

protected :

    //## auto_generated
    void initRelations();
    
    //## auto_generated
    void initStatechart();
    
    ////    Attributes    ////
    
    Real displayedGear;		//## attribute displayedGear
    
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
    
    // state_0:
    //## statechart_method
    inline bool state_0_IN() const;
    
    ////    Framework    ////

protected :

//#[ ignore
    enum aEBG_TrainingApp_Enum {
        OMNonState = 0,
        state_0 = 1
    };
    
    int rootState_subState;
    
    int rootState_active;
//#]
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedaEBG_TrainingApp : virtual public AOMInstance {
    DECLARE_REACTIVE_META(aEBG_TrainingApp, OMAnimatedaEBG_TrainingApp)
    
    ////    Framework operations    ////
    
public :

    virtual void serializeAttributes(AOMSAttributes* aomsAttributes) const;
    
    virtual void serializeRelations(AOMSRelations* aomsRelations) const;
    
    //## statechart_method
    void rootState_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void state_0_serializeStates(AOMSState* aomsState) const;
};
//#]
#endif // _OMINSTRUMENT

inline bool aEBG_TrainingApp::rootState_IN() const {
    return true;
}

inline bool aEBG_TrainingApp::state_0_IN() const {
    return rootState_subState == state_0;
}

#endif
/*********************************************************************
	File Path	: Emulate_Basic_GearingSim/Animate/aEBG_TrainingApp.h
*********************************************************************/
