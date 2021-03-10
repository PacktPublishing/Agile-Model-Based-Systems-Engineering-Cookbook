/*********************************************************************
	Rhapsody	: 9.0 
	Login		: Bruce
	Component	: TrafficLightMVP0 
	Configuration 	: MVP0Config
	Model Element	: MVP0Pkg
//!	Generated Date	: Tue, 8, Dec 2020  
	File Path	: TrafficLightMVP0/MVP0Config/MVP0Pkg.h
*********************************************************************/

#ifndef MVP0Pkg_H
#define MVP0Pkg_H

//## auto_generated
#include <oxf/oxf.h>
//## auto_generated
#include <../Profiles/SysML/SIDefinitions.h>
//## auto_generated
#include <aom/aom.h>
//## auto_generated
#include <oxf/event.h>
//## auto_generated
class TrafficLane;

//## classInstance itsTrafficLightSystem
class TrafficLightSystem;

//#[ ignore
#define evGo_MVP0Pkg_id 24001

#define evLaneDone_MVP0Pkg_id 24002

#define exStart_MVP0Pkg_id 24003
//#]

//## package MVP0Pkg


//## type COLOR_TYPE
enum COLOR_TYPE {
    RED,
    GREEN,
    YELLOW
};

// #define %s 500
//#[ type RED_TIME
#define RED_TIME 500
//#]

// #define %s 10000
//#[ type GREEN_TIME
#define GREEN_TIME 10000
//#]

// #define %s 2000
//#[ type YELLOW_TIME
#define YELLOW_TIME 2000
//#]

//## classInstance itsTrafficLightSystem
extern TrafficLightSystem itsTrafficLightSystem;

//## auto_generated
void MVP0Pkg_initRelations();

//## auto_generated
bool MVP0Pkg_startBehavior();

//#[ ignore
class MVP0Pkg_OMInitializer {
    ////    Constructors and destructors    ////
    
public :

    //## auto_generated
    MVP0Pkg_OMInitializer();
    
    //## auto_generated
    ~MVP0Pkg_OMInitializer();
};
//#]

//## event evGo(RhpBoolean,RhpString)
class evGo : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedevGo;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    evGo();
    
    //## auto_generated
    evGo(RhpBoolean p_first, RhpString p_name);
    
    ////    Framework operations    ////
    
    //## statechart_method
    virtual bool isTypeOf(const short id) const;
    
    ////    Framework    ////
    
    RhpBoolean first;		//## auto_generated
    
    RhpString name;		//## auto_generated
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedevGo : virtual public AOMEvent {
    DECLARE_META_EVENT(evGo)
};
//#]
#endif // _OMINSTRUMENT

//## event evLaneDone()
class evLaneDone : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedevLaneDone;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    evLaneDone();
    
    ////    Framework operations    ////
    
    //## statechart_method
    virtual bool isTypeOf(const short id) const;
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedevLaneDone : virtual public AOMEvent {
    DECLARE_META_EVENT(evLaneDone)
};
//#]
#endif // _OMINSTRUMENT

//## event exStart()
class exStart : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedexStart;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    exStart();
    
    ////    Framework operations    ////
    
    //## statechart_method
    virtual bool isTypeOf(const short id) const;
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedexStart : virtual public AOMEvent {
    DECLARE_META_EVENT(exStart)
};
//#]
#endif // _OMINSTRUMENT

#endif
/*********************************************************************
	File Path	: TrafficLightMVP0/MVP0Config/MVP0Pkg.h
*********************************************************************/
