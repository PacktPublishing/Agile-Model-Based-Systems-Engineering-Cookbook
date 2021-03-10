/*********************************************************************
	Rhapsody	: 9.0 
	Login		: Bruce
	Component	: TrafficLightMVP2 
	Configuration 	: MVP2Config
	Model Element	: TrafficLane
//!	Generated Date	: Tue, 8, Dec 2020  
	File Path	: TrafficLightMVP2/MVP2Config/TrafficLane.h
*********************************************************************/

#ifndef TrafficLane_H
#define TrafficLane_H

//## auto_generated
#include <oxf/oxf.h>
//## auto_generated
#include <../Profiles/SysML/SIDefinitions.h>
//## auto_generated
#include <aom/aom.h>
//## auto_generated
#include "Default.h"
//## package Default

//## class TrafficLane
class TrafficLane {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedTrafficLane;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    TrafficLane();
    
    //## auto_generated
    virtual ~TrafficLane();
    
    ////    Operations    ////
    
    //## operation setColor(COLOR_TYPE)
    virtual void setColor(const COLOR_TYPE& color);
    
    ////    Additional operations    ////
    
    //## auto_generated
    RhpString getWhoAmI() const;
    
    //## auto_generated
    void setWhoAmI(RhpString p_whoAmI);
    
    ////    Attributes    ////

protected :

    RhpString whoAmI;		//## attribute whoAmI
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedTrafficLane : virtual public AOMInstance {
    DECLARE_META(TrafficLane, OMAnimatedTrafficLane)
    
    ////    Framework operations    ////
    
public :

    virtual void serializeAttributes(AOMSAttributes* aomsAttributes) const;
};
//#]
#endif // _OMINSTRUMENT

#endif
/*********************************************************************
	File Path	: TrafficLightMVP2/MVP2Config/TrafficLane.h
*********************************************************************/
