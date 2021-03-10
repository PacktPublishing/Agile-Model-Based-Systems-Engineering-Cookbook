/********************************************************************
	Rhapsody	: 8.4 
	Login		: Bruce
	Component	: Emulate_Front_and_Rear_GearingSim 
	Configuration 	: Animate
	Model Element	: Animate
//!	Generated Date	: Mon, 2, Mar 2020  
	File Path	: Emulate_Front_and_Rear_GearingSim/Animate/MainEmulate_Front_and_Rear_GearingSim.cpp
*********************************************************************/

//## auto_generated
#include "MainEmulate_Front_and_Rear_GearingSim.h"
//## auto_generated
#include "EmulateFrontandRearGearingActorPkg.h"
//## auto_generated
#include "EmulateFrontandRearGearingExecutionScopePkg.h"
//## auto_generated
#include "EmulateFrontandRearGearingInterfacesPkg.h"
//## auto_generated
#include "EmulateFrontandRearGearingPkg.h"
Emulate_Front_and_Rear_GearingSim::Emulate_Front_and_Rear_GearingSim() {
    EmulateFrontandRearGearingExecutionScopePkg_initRelations();
    EmulateFrontandRearGearingExecutionScopePkg_startBehavior();
}

int main(int argc, char* argv[]) {
    int status = 0;
    if(OXF::initialize(argc, argv, 6423))
        {
            Emulate_Front_and_Rear_GearingSim initializer_Emulate_Front_and_Rear_GearingSim;
            //#[ configuration Emulate_Front_and_Rear_GearingSim::Animate 
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
	File Path	: Emulate_Front_and_Rear_GearingSim/Animate/MainEmulate_Front_and_Rear_GearingSim.cpp
*********************************************************************/
