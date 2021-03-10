/*********************************************************************
	Rhapsody	: 8.4 
	Login		: Bruce
	Component	: Control_ResistanceSim 
	Configuration 	: Animate
	Model Element	: ControlResistanceExecutionScopePkg
//!	Generated Date	: Wed, 19, Feb 2020  
	File Path	: Control_ResistanceSim/Animate/ControlResistanceExecutionScopePkg.h
*********************************************************************/

#ifndef ControlResistanceExecutionScopePkg_H
#define ControlResistanceExecutionScopePkg_H

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
//## classInstance itsUc_ControlResistance
class Uc_ControlResistance;

//## classInstance prtRider
class aCR_Rider;

//## classInstance prtTrainingApp
class aCR_TrainingApp;

//## package FunctionalAnalysisPkg::ControlResistancePkg::ControlResistanceExecutionScopePkg


//## classInstance itsUc_ControlResistance
extern Uc_ControlResistance itsUc_ControlResistance;

//## classInstance prtRider
extern aCR_Rider prtRider;

//## classInstance prtTrainingApp
extern aCR_TrainingApp prtTrainingApp;

//## auto_generated
void ControlResistanceExecutionScopePkg_initRelations();

//## auto_generated
bool ControlResistanceExecutionScopePkg_startBehavior();

//#[ ignore
class ControlResistanceExecutionScopePkg_OMInitializer {
    ////    Constructors and destructors    ////
    
public :

    //## auto_generated
    ControlResistanceExecutionScopePkg_OMInitializer();
    
    //## auto_generated
    ~ControlResistanceExecutionScopePkg_OMInitializer();
};
//#]

#endif
/*********************************************************************
	File Path	: Control_ResistanceSim/Animate/ControlResistanceExecutionScopePkg.h
*********************************************************************/
