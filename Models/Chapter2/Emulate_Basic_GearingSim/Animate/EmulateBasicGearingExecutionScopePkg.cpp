/********************************************************************
	Rhapsody	: 8.4 
	Login		: Bruce
	Component	: Emulate_Basic_GearingSim 
	Configuration 	: Animate
	Model Element	: EmulateBasicGearingExecutionScopePkg
//!	Generated Date	: Fri, 27, Dec 2019  
	File Path	: Emulate_Basic_GearingSim/Animate/EmulateBasicGearingExecutionScopePkg.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "EmulateBasicGearingExecutionScopePkg.h"
//## classInstance prtRider
#include "aEBG_Rider.h"
//## classInstance prtTrainingApp
#include "aEBG_TrainingApp.h"
//## classInstance itsUc_EmulateBasicGearing
#include "Uc_EmulateBasicGearing.h"
//## package FunctionalAnalysisPkg::EmulateBasicGearingPkg::EmulateBasicGearingExecutionScopePkg


//## classInstance itsUc_EmulateBasicGearing
Uc_EmulateBasicGearing itsUc_EmulateBasicGearing;

//## classInstance prtRider
aEBG_Rider prtRider;

//## classInstance prtTrainingApp
aEBG_TrainingApp prtTrainingApp;

#ifdef _OMINSTRUMENT
static void serializeGlobalVars(AOMSAttributes* /* aomsAttributes */);

static void RenameGlobalInstances();

IMPLEMENT_META_PACKAGE(FunctionalAnalysisPkg_EmulateBasicGearingPkg_EmulateBasicGearingExecutionScopePkg, FunctionalAnalysisPkg::EmulateBasicGearingPkg::EmulateBasicGearingExecutionScopePkg)
#endif // _OMINSTRUMENT

void EmulateBasicGearingExecutionScopePkg_initRelations() {
    {
        {
            itsUc_EmulateBasicGearing.setShouldDelete(false);
        }
        {
            prtTrainingApp.setShouldDelete(false);
        }
        {
            prtRider.setShouldDelete(false);
        }
    }
    {
        
        itsUc_EmulateBasicGearing.get_paEBG_TrainingApp()->setItsGearing_ProxyReceptionInterface(prtTrainingApp.get_pUc_EmulateBasicGearing()->getItsGearing_ProxyReceptionInterface());
        
    }
    {
        
        itsUc_EmulateBasicGearing.get_paEBG_Rider()->setItsReal_resistance_ProxyFlowPropertyInterface(prtRider.get_pUc_EmulateBasicGearing()->getItsReal_resistance_ProxyFlowPropertyInterface());
        
    }{
        
        prtRider.get_pUc_EmulateBasicGearing()->setItsDecrementGear_ProxyReceptionInterface(itsUc_EmulateBasicGearing.get_paEBG_Rider()->getItsDecrementGear_ProxyReceptionInterface());
        
        prtRider.get_pUc_EmulateBasicGearing()->setItsIncrementGear_ProxyReceptionInterface(itsUc_EmulateBasicGearing.get_paEBG_Rider()->getItsIncrementGear_ProxyReceptionInterface());
        
        prtRider.get_pUc_EmulateBasicGearing()->setItsReal_appliedTorque_ProxyFlowPropertyInterface(itsUc_EmulateBasicGearing.get_paEBG_Rider()->getItsReal_appliedTorque_ProxyFlowPropertyInterface());
        
    }
    
    #ifdef _OMINSTRUMENT
    RenameGlobalInstances();
    #endif // _OMINSTRUMENT
}

bool EmulateBasicGearingExecutionScopePkg_startBehavior() {
    bool done = true;
    done &= itsUc_EmulateBasicGearing.startBehavior();
    done &= prtRider.startBehavior();
    done &= prtTrainingApp.startBehavior();
    return done;
}

#ifdef _OMINSTRUMENT
static void serializeGlobalVars(AOMSAttributes* /* aomsAttributes */) {
}

static void RenameGlobalInstances() {
    OM_SET_INSTANCE_NAME(&itsUc_EmulateBasicGearing, Uc_EmulateBasicGearing, "itsUc_EmulateBasicGearing", AOMNoMultiplicity);
    OM_SET_INSTANCE_NAME(&prtTrainingApp, aEBG_TrainingApp, "prtTrainingApp", AOMNoMultiplicity);
    OM_SET_INSTANCE_NAME(&prtRider, aEBG_Rider, "prtRider", AOMNoMultiplicity);
}
#endif // _OMINSTRUMENT

//#[ ignore
EmulateBasicGearingExecutionScopePkg_OMInitializer::EmulateBasicGearingExecutionScopePkg_OMInitializer() {
    EmulateBasicGearingExecutionScopePkg_initRelations();
    EmulateBasicGearingExecutionScopePkg_startBehavior();
}

EmulateBasicGearingExecutionScopePkg_OMInitializer::~EmulateBasicGearingExecutionScopePkg_OMInitializer() {
}
//#]

/*********************************************************************
	File Path	: Emulate_Basic_GearingSim/Animate/EmulateBasicGearingExecutionScopePkg.cpp
*********************************************************************/
