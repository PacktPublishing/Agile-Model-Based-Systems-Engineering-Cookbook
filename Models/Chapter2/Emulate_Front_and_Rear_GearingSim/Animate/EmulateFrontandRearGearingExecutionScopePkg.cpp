/********************************************************************
	Rhapsody	: 8.4 
	Login		: Bruce
	Component	: Emulate_Front_and_Rear_GearingSim 
	Configuration 	: Animate
	Model Element	: EmulateFrontandRearGearingExecutionScopePkg
//!	Generated Date	: Mon, 2, Mar 2020  
	File Path	: Emulate_Front_and_Rear_GearingSim/Animate/EmulateFrontandRearGearingExecutionScopePkg.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "EmulateFrontandRearGearingExecutionScopePkg.h"
//## classInstance prtRider
#include "aEFRG_Rider.h"
//## classInstance prtTrainingApp
#include "aEFRG_TrainingApp.h"
//## classInstance itsUc_EmulateFrontandRearGearing
#include "Uc_EmulateFrontandRearGearing.h"
//## package FunctionalAnalysisPkg::EmulateFrontandRearGearingPkg::EmulateFrontandRearGearingExecutionScopePkg


//## classInstance itsUc_EmulateFrontandRearGearing
Uc_EmulateFrontandRearGearing itsUc_EmulateFrontandRearGearing;

//## classInstance prtRider
aEFRG_Rider prtRider;

//## classInstance prtTrainingApp
aEFRG_TrainingApp prtTrainingApp;

#ifdef _OMINSTRUMENT
static void serializeGlobalVars(AOMSAttributes* /* aomsAttributes */);

static void RenameGlobalInstances();

IMPLEMENT_META_PACKAGE(FunctionalAnalysisPkg_EmulateFrontandRearGearingPkg_EmulateFrontandRearGearingExecutionScopePkg, FunctionalAnalysisPkg::EmulateFrontandRearGearingPkg::EmulateFrontandRearGearingExecutionScopePkg)
#endif // _OMINSTRUMENT

void EmulateFrontandRearGearingExecutionScopePkg_initRelations() {
    {
        {
            itsUc_EmulateFrontandRearGearing.setShouldDelete(false);
        }
        {
            prtTrainingApp.setShouldDelete(false);
        }
        {
            prtRider.setShouldDelete(false);
        }
    }
    {
        
        itsUc_EmulateFrontandRearGearing.get_paEFRG_TrainingApp()->setItsEvCurrentGearing_ProxyReceptionInterface(prtTrainingApp.get_pUc_EmulateFrontandRearGearing()->getItsEvCurrentGearing_ProxyReceptionInterface());
        
    }
    {
        
        itsUc_EmulateFrontandRearGearing.get_paEFRG_Rider()->setItsEvCurrentGearing_ProxyReceptionInterface(prtRider.get_pUc_EmulateFrontandRearGearing()->getItsEvCurrentGearing_ProxyReceptionInterface());
        
        itsUc_EmulateFrontandRearGearing.get_paEFRG_Rider()->setItsEvInitialSettings_ProxyReceptionInterface(prtRider.get_pUc_EmulateFrontandRearGearing()->getItsEvInitialSettings_ProxyReceptionInterface());
        
    }{
        
        prtRider.get_pUc_EmulateFrontandRearGearing()->setItsEvAugmentFrontGear_ProxyReceptionInterface(itsUc_EmulateFrontandRearGearing.get_paEFRG_Rider()->getItsEvAugmentFrontGear_ProxyReceptionInterface());
        
        prtRider.get_pUc_EmulateFrontandRearGearing()->setItsEvAugmentRearGear_ProxyReceptionInterface(itsUc_EmulateFrontandRearGearing.get_paEFRG_Rider()->getItsEvAugmentRearGear_ProxyReceptionInterface());
        
        prtRider.get_pUc_EmulateFrontandRearGearing()->setItsEvBeginRiding_ProxyReceptionInterface(itsUc_EmulateFrontandRearGearing.get_paEFRG_Rider()->getItsEvBeginRiding_ProxyReceptionInterface());
        
        prtRider.get_pUc_EmulateFrontandRearGearing()->setItsEvConfigureGearing_ProxyReceptionInterface(itsUc_EmulateFrontandRearGearing.get_paEFRG_Rider()->getItsEvConfigureGearing_ProxyReceptionInterface());
        
        prtRider.get_pUc_EmulateFrontandRearGearing()->setItsEvDecrementFrontGear_ProxyReceptionInterface(itsUc_EmulateFrontandRearGearing.get_paEFRG_Rider()->getItsEvDecrementFrontGear_ProxyReceptionInterface());
        
        prtRider.get_pUc_EmulateFrontandRearGearing()->setItsEvDecrementRearGear_ProxyReceptionInterface(itsUc_EmulateFrontandRearGearing.get_paEFRG_Rider()->getItsEvDecrementRearGear_ProxyReceptionInterface());
        
        prtRider.get_pUc_EmulateFrontandRearGearing()->setItsEvDoneConfiguring_ProxyReceptionInterface(itsUc_EmulateFrontandRearGearing.get_paEFRG_Rider()->getItsEvDoneConfiguring_ProxyReceptionInterface());
        
        prtRider.get_pUc_EmulateFrontandRearGearing()->setItsEvDoneRiding_ProxyReceptionInterface(itsUc_EmulateFrontandRearGearing.get_paEFRG_Rider()->getItsEvDoneRiding_ProxyReceptionInterface());
        
        prtRider.get_pUc_EmulateFrontandRearGearing()->setItsEvSetCassetteRingTeeth_ProxyReceptionInterface(itsUc_EmulateFrontandRearGearing.get_paEFRG_Rider()->getItsEvSetCassetteRingTeeth_ProxyReceptionInterface());
        
        prtRider.get_pUc_EmulateFrontandRearGearing()->setItsEvSetChainRingTeeth_ProxyReceptionInterface(itsUc_EmulateFrontandRearGearing.get_paEFRG_Rider()->getItsEvSetChainRingTeeth_ProxyReceptionInterface());
        
        prtRider.get_pUc_EmulateFrontandRearGearing()->setItsEvSetNumberOfCassetteRings_ProxyReceptionInterface(itsUc_EmulateFrontandRearGearing.get_paEFRG_Rider()->getItsEvSetNumberOfCassetteRings_ProxyReceptionInterface());
        
        prtRider.get_pUc_EmulateFrontandRearGearing()->setItsEvSetNumberOfChainRings_ProxyReceptionInterface(itsUc_EmulateFrontandRearGearing.get_paEFRG_Rider()->getItsEvSetNumberOfChainRings_ProxyReceptionInterface());
        
        prtRider.get_pUc_EmulateFrontandRearGearing()->setItsEvShowGearing_ProxyReceptionInterface(itsUc_EmulateFrontandRearGearing.get_paEFRG_Rider()->getItsEvShowGearing_ProxyReceptionInterface());
        
    }
    
    #ifdef _OMINSTRUMENT
    RenameGlobalInstances();
    #endif // _OMINSTRUMENT
}

bool EmulateFrontandRearGearingExecutionScopePkg_startBehavior() {
    bool done = true;
    done &= itsUc_EmulateFrontandRearGearing.startBehavior();
    done &= prtRider.startBehavior();
    done &= prtTrainingApp.startBehavior();
    return done;
}

#ifdef _OMINSTRUMENT
static void serializeGlobalVars(AOMSAttributes* /* aomsAttributes */) {
}

static void RenameGlobalInstances() {
    OM_SET_INSTANCE_NAME(&itsUc_EmulateFrontandRearGearing, Uc_EmulateFrontandRearGearing, "itsUc_EmulateFrontandRearGearing", AOMNoMultiplicity);
    OM_SET_INSTANCE_NAME(&prtTrainingApp, aEFRG_TrainingApp, "prtTrainingApp", AOMNoMultiplicity);
    OM_SET_INSTANCE_NAME(&prtRider, aEFRG_Rider, "prtRider", AOMNoMultiplicity);
}
#endif // _OMINSTRUMENT

//#[ ignore
EmulateFrontandRearGearingExecutionScopePkg_OMInitializer::EmulateFrontandRearGearingExecutionScopePkg_OMInitializer() {
    EmulateFrontandRearGearingExecutionScopePkg_initRelations();
    EmulateFrontandRearGearingExecutionScopePkg_startBehavior();
}

EmulateFrontandRearGearingExecutionScopePkg_OMInitializer::~EmulateFrontandRearGearingExecutionScopePkg_OMInitializer() {
}
//#]

/*********************************************************************
	File Path	: Emulate_Front_and_Rear_GearingSim/Animate/EmulateFrontandRearGearingExecutionScopePkg.cpp
*********************************************************************/
