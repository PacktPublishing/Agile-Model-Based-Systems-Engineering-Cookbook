/********************************************************************
	Rhapsody	: 8.4 
	Login		: Bruce
	Component	: Control_ResistanceSim 
	Configuration 	: Animate
	Model Element	: Animate
//!	Generated Date	: Wed, 19, Feb 2020  
	File Path	: Control_ResistanceSim/Animate/MainControl_ResistanceSim.cpp
*********************************************************************/

//## auto_generated
#include "MainControl_ResistanceSim.h"
//## auto_generated
#include "ControlResistanceActorPkg.h"
//## auto_generated
#include "ControlResistanceExecutionScopePkg.h"
//## auto_generated
#include "ControlResistanceInterfacesPkg.h"
//## auto_generated
#include "ControlResistancePkg.h"
//## auto_generated
#include "ControlResistanceTypesPkg.h"
Control_ResistanceSim::Control_ResistanceSim() {
    ControlResistanceExecutionScopePkg_initRelations();
    ControlResistanceExecutionScopePkg_startBehavior();
}

int main(int argc, char* argv[]) {
    int status = 0;
    if(OXF::initialize(argc, argv, 6423))
        {
            Control_ResistanceSim initializer_Control_ResistanceSim;
            //#[ configuration Control_ResistanceSim::Animate 
            //#]
            OXF::start();
            status = 0;
        }
    else
        {
            status = 1;
        }
    return status;
}

/*********************************************************************
	File Path	: Control_ResistanceSim/Animate/MainControl_ResistanceSim.cpp
*********************************************************************/
