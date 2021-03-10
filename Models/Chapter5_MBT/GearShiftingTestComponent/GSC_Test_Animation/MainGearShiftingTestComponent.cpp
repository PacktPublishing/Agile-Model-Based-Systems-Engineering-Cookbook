/********************************************************************
	Rhapsody	: 9.0 
	Login		: Bruce
	Component	: GearShiftingTestComponent 
	Configuration 	: GSC_Test_Animation
	Model Element	: GSC_Test_Animation
//!	Generated Date	: Sat, 28, Nov 2020  
	File Path	: GearShiftingTestComponent/GSC_Test_Animation/MainGearShiftingTestComponent.cpp
*********************************************************************/

//## auto_generated
#include "MainGearShiftingTestComponent.h"
//## auto_generated
#include "RiderInteractionDesignPkg.h"
//## auto_generated
#include "TestPkg.h"
GearShiftingTestComponent::GearShiftingTestComponent() {
    TestPkg_initRelations();
    TestPkg_startBehavior();
}

int main(int argc, char* argv[]) {
    int status = 0;
    if(OXF::initialize(argc, argv, 6423))
        {
            GearShiftingTestComponent initializer_GearShiftingTestComponent;
            //#[ configuration GearShiftingTestComponent::GSC_Test_Animation 
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
	File Path	: GearShiftingTestComponent/GSC_Test_Animation/MainGearShiftingTestComponent.cpp
*********************************************************************/
