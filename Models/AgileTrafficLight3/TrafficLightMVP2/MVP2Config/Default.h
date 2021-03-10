/*********************************************************************
	Rhapsody	: 9.0 
	Login		: Bruce
	Component	: TrafficLightMVP2 
	Configuration 	: MVP2Config
	Model Element	: Default
//!	Generated Date	: Tue, 8, Dec 2020  
	File Path	: TrafficLightMVP2/MVP2Config/Default.h
*********************************************************************/

#ifndef Default_H
#define Default_H

//## auto_generated
#include <oxf/oxf.h>
//## auto_generated
#include <../Profiles/SysML/SIDefinitions.h>
//## auto_generated
#include <aom/aom.h>
//## auto_generated
#include <oxf/event.h>
//## auto_generated
class CrossWalk;

//## auto_generated
class ThruLane;

//## auto_generated
class TrafficLane;

//## classInstance itsTrafficLightSystem
class TrafficLightSystem;

//## auto_generated
class TurnLane;

//#[ ignore
#define evGo_Default_id 18601

#define evLaneDone_Default_id 18602

#define exStart_Default_id 18603

#define evTurnDone_Default_id 18604

#define exCarArrive_Default_id 18605

#define evClearWaitingCars_Default_id 18606

#define evGoTurn_Default_id 18607

#define evCarArrive_Default_id 18608

#define evResetTurnLane_Default_id 18609

#define evWalk_Default_id 18610

#define evWalkComplete_Default_id 18611

#define evPedestrianArrive_Default_id 18612

#define exPedestrianArrive_Default_id 18613

#define evPedestrianReset_Default_id 18614
//#]

//## package Default


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

//## type WALK_TYPE
enum WALK_TYPE {
    DONT_WALK,
    WALK,
    RUN
};

// #define %s 12000
//#[ type WALK_TIME
#define WALK_TIME 12000
//#]

// #define %s 5000
//#[ type RUN_TIME
#define RUN_TIME 5000
//#]

//## classInstance itsTrafficLightSystem
extern TrafficLightSystem itsTrafficLightSystem;

//## auto_generated
void Default_initRelations();

//## auto_generated
bool Default_startBehavior();

//#[ ignore
class Default_OMInitializer {
    ////    Constructors and destructors    ////
    
public :

    //## auto_generated
    Default_OMInitializer();
    
    //## auto_generated
    ~Default_OMInitializer();
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

//## event evTurnDone()
class evTurnDone : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedevTurnDone;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    evTurnDone();
    
    ////    Framework operations    ////
    
    //## statechart_method
    virtual bool isTypeOf(const short id) const;
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedevTurnDone : virtual public AOMEvent {
    DECLARE_META_EVENT(evTurnDone)
};
//#]
#endif // _OMINSTRUMENT

//## event exCarArrive()
class exCarArrive : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedexCarArrive;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    exCarArrive();
    
    ////    Framework operations    ////
    
    //## statechart_method
    virtual bool isTypeOf(const short id) const;
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedexCarArrive : virtual public AOMEvent {
    DECLARE_META_EVENT(exCarArrive)
};
//#]
#endif // _OMINSTRUMENT

//## event evClearWaitingCars()
class evClearWaitingCars : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedevClearWaitingCars;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    evClearWaitingCars();
    
    ////    Framework operations    ////
    
    //## statechart_method
    virtual bool isTypeOf(const short id) const;
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedevClearWaitingCars : virtual public AOMEvent {
    DECLARE_META_EVENT(evClearWaitingCars)
};
//#]
#endif // _OMINSTRUMENT

//## event evGoTurn()
class evGoTurn : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedevGoTurn;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    evGoTurn();
    
    ////    Framework operations    ////
    
    //## statechart_method
    virtual bool isTypeOf(const short id) const;
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedevGoTurn : virtual public AOMEvent {
    DECLARE_META_EVENT(evGoTurn)
};
//#]
#endif // _OMINSTRUMENT

//## event evCarArrive()
class evCarArrive : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedevCarArrive;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    evCarArrive();
    
    ////    Framework operations    ////
    
    //## statechart_method
    virtual bool isTypeOf(const short id) const;
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedevCarArrive : virtual public AOMEvent {
    DECLARE_META_EVENT(evCarArrive)
};
//#]
#endif // _OMINSTRUMENT

//## event evResetTurnLane()
class evResetTurnLane : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedevResetTurnLane;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    evResetTurnLane();
    
    ////    Framework operations    ////
    
    //## statechart_method
    virtual bool isTypeOf(const short id) const;
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedevResetTurnLane : virtual public AOMEvent {
    DECLARE_META_EVENT(evResetTurnLane)
};
//#]
#endif // _OMINSTRUMENT

//## event evWalk()
class evWalk : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedevWalk;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    evWalk();
    
    ////    Framework operations    ////
    
    //## statechart_method
    virtual bool isTypeOf(const short id) const;
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedevWalk : virtual public AOMEvent {
    DECLARE_META_EVENT(evWalk)
};
//#]
#endif // _OMINSTRUMENT

//## event evWalkComplete()
class evWalkComplete : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedevWalkComplete;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    evWalkComplete();
    
    ////    Framework operations    ////
    
    //## statechart_method
    virtual bool isTypeOf(const short id) const;
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedevWalkComplete : virtual public AOMEvent {
    DECLARE_META_EVENT(evWalkComplete)
};
//#]
#endif // _OMINSTRUMENT

//## event evPedestrianArrive()
class evPedestrianArrive : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedevPedestrianArrive;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    evPedestrianArrive();
    
    ////    Framework operations    ////
    
    //## statechart_method
    virtual bool isTypeOf(const short id) const;
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedevPedestrianArrive : virtual public AOMEvent {
    DECLARE_META_EVENT(evPedestrianArrive)
};
//#]
#endif // _OMINSTRUMENT

//## event exPedestrianArrive()
class exPedestrianArrive : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedexPedestrianArrive;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    exPedestrianArrive();
    
    ////    Framework operations    ////
    
    //## statechart_method
    virtual bool isTypeOf(const short id) const;
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedexPedestrianArrive : virtual public AOMEvent {
    DECLARE_META_EVENT(exPedestrianArrive)
};
//#]
#endif // _OMINSTRUMENT

//## event evPedestrianReset()
class evPedestrianReset : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedevPedestrianReset;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    evPedestrianReset();
    
    ////    Framework operations    ////
    
    //## statechart_method
    virtual bool isTypeOf(const short id) const;
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedevPedestrianReset : virtual public AOMEvent {
    DECLARE_META_EVENT(evPedestrianReset)
};
//#]
#endif // _OMINSTRUMENT

#endif
/*********************************************************************
	File Path	: TrafficLightMVP2/MVP2Config/Default.h
*********************************************************************/
