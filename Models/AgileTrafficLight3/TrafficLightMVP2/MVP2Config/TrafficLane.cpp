/********************************************************************
	Rhapsody	: 9.0 
	Login		: Bruce
	Component	: TrafficLightMVP2 
	Configuration 	: MVP2Config
	Model Element	: TrafficLane
//!	Generated Date	: Tue, 8, Dec 2020  
	File Path	: TrafficLightMVP2/MVP2Config/TrafficLane.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "TrafficLane.h"
//#[ ignore
#define Default_TrafficLane_TrafficLane_SERIALIZE OM_NO_OP

#define Default_TrafficLane_setColor_SERIALIZE aomsmethod->addAttribute("color", x2String((int)color));
//#]

//## package Default

//## class TrafficLane
TrafficLane::TrafficLane() {
    NOTIFY_CONSTRUCTOR(TrafficLane, TrafficLane(), 0, Default_TrafficLane_TrafficLane_SERIALIZE);
}

TrafficLane::~TrafficLane() {
    NOTIFY_DESTRUCTOR(~TrafficLane, true);
}

void TrafficLane::setColor(const COLOR_TYPE& color) {
    NOTIFY_OPERATION(setColor, setColor(const COLOR_TYPE&), 1, Default_TrafficLane_setColor_SERIALIZE);
    //#[ operation setColor(COLOR_TYPE)
    std::cout << whoAmI;
    if (color == RED) std::cout << " Red";
    if (color == GREEN) std::cout << " Green";
    if (color == YELLOW) std::cout << " Yellow";
    std::cout << std::endl;
    //#]
}

RhpString TrafficLane::getWhoAmI() const {
    return whoAmI;
}

void TrafficLane::setWhoAmI(RhpString p_whoAmI) {
    whoAmI = p_whoAmI;
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedTrafficLane::serializeAttributes(AOMSAttributes* aomsAttributes) const {
    aomsAttributes->addAttribute("whoAmI", x2String(myReal->whoAmI));
}
//#]

IMPLEMENT_META_P(TrafficLane, Default, Default, false, OMAnimatedTrafficLane)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: TrafficLightMVP2/MVP2Config/TrafficLane.cpp
*********************************************************************/
