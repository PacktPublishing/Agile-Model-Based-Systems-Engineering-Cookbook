/********************************************************************
	Rhapsody	: 9.0 
	Login		: Bruce
	Component	: Emulate_Basic_GearingSim 
	Configuration 	: Animate
	Model Element	: Animate
//!	Generated Date	: Wed, 25, Nov 2020  
	File Path	: Emulate_Basic_GearingSim/Animate/MainEmulate_Basic_GearingSim.cpp
*********************************************************************/

//## auto_generated
#include "MainEmulate_Basic_GearingSim.h"
//## auto_generated
#include "EmulateBasicGearingActorPkg.h"
//## auto_generated
#include "EmulateBasicGearingExecutionScopePkg.h"
//## auto_generated
#include "EmulateBasicGearingInterfacesPkg.h"
//## auto_generated
#include "EmulateBasicGearingPkg.h"
//## auto_generated
#include "EmulateBasicGearingTypesPkg.h"
Emulate_Basic_GearingSim::Emulate_Basic_GearingSim() {
    EmulateBasicGearingExecutionScopePkg_initRelations();
    EmulateBasicGearingExecutionScopePkg_startBehavior();
}

int main(int argc, char* argv[]) {
    int status = 0;
    if(OXF::initialize(argc, argv, 6423))
        {
            Emulate_Basic_GearingSim initializer_Emulate_Basic_GearingSim;
            //#[ configuration Emulate_Basic_GearingSim::Animate 
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
	File Path	: Emulate_Basic_GearingSim/Animate/MainEmulate_Basic_GearingSim.cpp
*********************************************************************/
