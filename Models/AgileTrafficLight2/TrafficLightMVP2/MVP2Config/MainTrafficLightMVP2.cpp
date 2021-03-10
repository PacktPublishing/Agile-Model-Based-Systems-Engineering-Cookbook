/********************************************************************
	Rhapsody	: 9.0 
	Login		: Bruce
	Component	: TrafficLightMVP2 
	Configuration 	: MVP2Config
	Model Element	: MVP2Config
//!	Generated Date	: Tue, 8, Dec 2020  
	File Path	: TrafficLightMVP2/MVP2Config/MainTrafficLightMVP2.cpp
*********************************************************************/

//## auto_generated
#include "MainTrafficLightMVP2.h"
//## auto_generated
#include "Default.h"
TrafficLightMVP2::TrafficLightMVP2() {
    Default_initRelations();
    Default_startBehavior();
}

int main(int argc, char* argv[]) {
    int status = 0;
    if(OXF::initialize(argc, argv, 6423))
        {
            TrafficLightMVP2 initializer_TrafficLightMVP2;
            //#[ configuration TrafficLightMVP2::MVP2Config 
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
	File Path	: TrafficLightMVP2/MVP2Config/MainTrafficLightMVP2.cpp
*********************************************************************/
