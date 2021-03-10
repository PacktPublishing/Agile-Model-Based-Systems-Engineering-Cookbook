/********************************************************************
	Rhapsody	: 9.0 
	Login		: Bruce
	Component	: TrafficLightMVP0 
	Configuration 	: MVP0Config
	Model Element	: MVP0Config
//!	Generated Date	: Tue, 8, Dec 2020  
	File Path	: TrafficLightMVP0/MVP0Config/MainTrafficLightMVP0.cpp
*********************************************************************/

//## auto_generated
#include "MainTrafficLightMVP0.h"
//## auto_generated
#include "MVP0Pkg.h"
TrafficLightMVP0::TrafficLightMVP0() {
    MVP0Pkg_initRelations();
    MVP0Pkg_startBehavior();
}

int main(int argc, char* argv[]) {
    int status = 0;
    if(OXF::initialize(argc, argv, 6423))
        {
            TrafficLightMVP0 initializer_TrafficLightMVP0;
            //#[ configuration TrafficLightMVP0::MVP0Config 
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
	File Path	: TrafficLightMVP0/MVP0Config/MainTrafficLightMVP0.cpp
*********************************************************************/
