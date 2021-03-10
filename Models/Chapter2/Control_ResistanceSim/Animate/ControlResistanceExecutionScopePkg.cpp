/********************************************************************
	Rhapsody	: 8.4 
	Login		: Bruce
	Component	: Control_ResistanceSim 
	Configuration 	: Animate
	Model Element	: ControlResistanceExecutionScopePkg
//!	Generated Date	: Wed, 19, Feb 2020  
	File Path	: Control_ResistanceSim/Animate/ControlResistanceExecutionScopePkg.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "ControlResistanceExecutionScopePkg.h"
//## classInstance prtRider
#include "aCR_Rider.h"
//## classInstance prtTrainingApp
#include "aCR_TrainingApp.h"
//## classInstance itsUc_ControlResistance
#include "Uc_ControlResistance.h"
//## package FunctionalAnalysisPkg::ControlResistancePkg::ControlResistanceExecutionScopePkg


//## classInstance itsUc_ControlResistance
Uc_ControlResistance itsUc_ControlResistance;

//## classInstance prtRider
aCR_Rider prtRider;

//## classInstance prtTrainingApp
aCR_TrainingApp prtTrainingApp;

#ifdef _OMINSTRUMENT
static void serializeGlobalVars(AOMSAttributes* /* aomsAttributes */);

static void RenameGlobalInstances();

IMPLEMENT_META_PACKAGE(FunctionalAnalysisPkg_ControlResistancePkg_ControlResistanceExecutionScopePkg, FunctionalAnalysisPkg::ControlResistancePkg::ControlResistanceExecutionScopePkg)
#endif // _OMINSTRUMENT

void ControlResistanceExecutionScopePkg_initRelations() {
    {
        {
            itsUc_ControlResistance.setShouldDelete(false);
        }
        {
            prtTrainingApp.setShouldDelete(false);
        }
        {
            prtRider.setShouldDelete(false);
        }
    }
    {
        
        itsUc_ControlResistance.get_paCR_TrainingApp()->setItsEvSendPedalCadenceToApp_ProxyReceptionInterface(prtTrainingApp.get_pUc_ControlResistance()->getItsEvSendPedalCadenceToApp_ProxyReceptionInterface());
        
        itsUc_ControlResistance.get_paCR_TrainingApp()->setItsEvSendFilteredPowerToApp_ProxyReceptionInterface(prtTrainingApp.get_pUc_ControlResistance()->getItsEvSendFilteredPowerToApp_ProxyReceptionInterface());
        
        itsUc_ControlResistance.get_paCR_TrainingApp()->setItsEvSendSpeedToApp_ProxyReceptionInterface(prtTrainingApp.get_pUc_ControlResistance()->getItsEvSendSpeedToApp_ProxyReceptionInterface());
        
        itsUc_ControlResistance.get_paCR_TrainingApp()->setItsEvSendAccelerationToApp_ProxyReceptionInterface(prtTrainingApp.get_pUc_ControlResistance()->getItsEvSendAccelerationToApp_ProxyReceptionInterface());
        
    }{
        
        prtTrainingApp.get_pUc_ControlResistance()->setItsReqSetIncline_ProxyReceptionInterface(itsUc_ControlResistance.get_paCR_TrainingApp()->getItsReqSetIncline_ProxyReceptionInterface());
        
    }
    {
        
        itsUc_ControlResistance.get_paCR_Rider()->setItsEvApplyResistance_ProxyReceptionInterface(prtRider.get_pUc_ControlResistance()->getItsEvApplyResistance_ProxyReceptionInterface());
        
    }{
        
        prtRider.get_pUc_ControlResistance()->setItsReqOn_ProxyReceptionInterface(itsUc_ControlResistance.get_paCR_Rider()->getItsReqOn_ProxyReceptionInterface());
        
        prtRider.get_pUc_ControlResistance()->setItsReqSetGear_ProxyReceptionInterface(itsUc_ControlResistance.get_paCR_Rider()->getItsReqSetGear_ProxyReceptionInterface());
        
        prtRider.get_pUc_ControlResistance()->setItsReqSetPedalPosition_ProxyReceptionInterface(itsUc_ControlResistance.get_paCR_Rider()->getItsReqSetPedalPosition_ProxyReceptionInterface());
        
        prtRider.get_pUc_ControlResistance()->setItsReqSetPedalSpeed_ProxyReceptionInterface(itsUc_ControlResistance.get_paCR_Rider()->getItsReqSetPedalSpeed_ProxyReceptionInterface());
        
        prtRider.get_pUc_ControlResistance()->setItsReqSetMeasuredPedalForce_ProxyReceptionInterface(itsUc_ControlResistance.get_paCR_Rider()->getItsReqSetMeasuredPedalForce_ProxyReceptionInterface());
        
    }
    
    #ifdef _OMINSTRUMENT
    RenameGlobalInstances();
    #endif // _OMINSTRUMENT
}

bool ControlResistanceExecutionScopePkg_startBehavior() {
    bool done = true;
    done &= itsUc_ControlResistance.startBehavior();
    done &= prtRider.startBehavior();
    done &= prtTrainingApp.startBehavior();
    return done;
}

#ifdef _OMINSTRUMENT
static void serializeGlobalVars(AOMSAttributes* /* aomsAttributes */) {
}

static void RenameGlobalInstances() {
    OM_SET_INSTANCE_NAME(&itsUc_ControlResistance, Uc_ControlResistance, "itsUc_ControlResistance", AOMNoMultiplicity);
    OM_SET_INSTANCE_NAME(&prtTrainingApp, aCR_TrainingApp, "prtTrainingApp", AOMNoMultiplicity);
    OM_SET_INSTANCE_NAME(&prtRider, aCR_Rider, "prtRider", AOMNoMultiplicity);
}
#endif // _OMINSTRUMENT

//#[ ignore
ControlResistanceExecutionScopePkg_OMInitializer::ControlResistanceExecutionScopePkg_OMInitializer() {
    ControlResistanceExecutionScopePkg_initRelations();
    ControlResistanceExecutionScopePkg_startBehavior();
}

ControlResistanceExecutionScopePkg_OMInitializer::~ControlResistanceExecutionScopePkg_OMInitializer() {
}
//#]

/*********************************************************************
	File Path	: Control_ResistanceSim/Animate/ControlResistanceExecutionScopePkg.cpp
*********************************************************************/
