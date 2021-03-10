/********************************************************************
	Rhapsody	: 9.0 
	Login		: Bruce
	Component	: TrafficLightMVP1 
	Configuration 	: MVP1Config
	Model Element	: MVP1Config
//!	Generated Date	: Tue, 8, Dec 2020  
	File Path	: TrafficLightMVP1/MVP1Config/MainTrafficLightMVP1.cpp
*********************************************************************/

//## auto_generated
#include "MainTrafficLightMVP1.h"
//## auto_generated
#include "Default.h"
TrafficLightMVP1::TrafficLightMVP1() {
    Default_initRelations();
    Default_startBehavior();
}

int main(int argc, char* argv[]) {
    int status = 0;
    if(OXF::initialize(argc, argv, 6423))
        {
            TrafficLightMVP1 initializer_TrafficLightMVP1;
            //#[ configuration TrafficLightMVP1::MVP1Config 
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
	File Path	: TrafficLightMVP1/MVP1Config/MainTrafficLightMVP1.cpp
*********************************************************************/
