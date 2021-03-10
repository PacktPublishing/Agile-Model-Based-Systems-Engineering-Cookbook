/********************************************************************
	Rhapsody	: 9.0 
	Login		: Bruce
	Component	: GearShiftingComponent 
	Configuration 	: GSC_Animation
	Model Element	: GSC_Animation
//!	Generated Date	: Sat, 28, Nov 2020  
	File Path	: GearShiftingComponent/GSC_Animation/MainGearShiftingComponent.cpp
*********************************************************************/

//## auto_generated
#include "MainGearShiftingComponent.h"
//## auto_generated
#include "RiderInteractionDesignPkg.h"
GearShiftingComponent::GearShiftingComponent() {
    RiderInteractionDesignPkg_initRelations();
    RiderInteractionDesignPkg_startBehavior();
}

int main(int argc, char* argv[]) {
    int status = 0;
    if(OXF::initialize(argc, argv, 6423))
        {
            GearShiftingComponent initializer_GearShiftingComponent;
            //#[ configuration GearShiftingComponent::GSC_Animation 
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
	File Path	: GearShiftingComponent/GSC_Animation/MainGearShiftingComponent.cpp
*********************************************************************/
