/********************************************************************
	Rhapsody	: 9.0 
	Login		: Bruce
	Component	: TrafficLightMVP2 
	Configuration 	: MVP2Config
	Model Element	: Default
//!	Generated Date	: Tue, 8, Dec 2020  
	File Path	: TrafficLightMVP2/MVP2Config/Default.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "Default.h"
//## classInstance itsTrafficLightSystem
#include "TrafficLightSystem.h"
//## auto_generated
#include "CrossWalk.h"
//## auto_generated
#include "ThruLane.h"
//## auto_generated
#include "TrafficLane.h"
//## auto_generated
#include "TurnLane.h"
//#[ ignore
#define evGo_SERIALIZE \
    OMADD_SER(first, x2String(myEvent->first))\
    OMADD_SER(name, x2String(myEvent->name))
#define evGo_UNSERIALIZE \
    OMADD_UNSER(RhpBoolean, first, OMDestructiveString2X)\
    OMADD_UNSER(RhpString, name, OMDestructiveString2X)
#define evGo_CONSTRUCTOR evGo(first, name)

#define evLaneDone_SERIALIZE OM_NO_OP

#define evLaneDone_UNSERIALIZE OM_NO_OP

#define evLaneDone_CONSTRUCTOR evLaneDone()

#define exStart_SERIALIZE OM_NO_OP

#define exStart_UNSERIALIZE OM_NO_OP

#define exStart_CONSTRUCTOR exStart()

#define evTurnDone_SERIALIZE OM_NO_OP

#define evTurnDone_UNSERIALIZE OM_NO_OP

#define evTurnDone_CONSTRUCTOR evTurnDone()

#define exCarArrive_SERIALIZE OM_NO_OP

#define exCarArrive_UNSERIALIZE OM_NO_OP

#define exCarArrive_CONSTRUCTOR exCarArrive()

#define evClearWaitingCars_SERIALIZE OM_NO_OP

#define evClearWaitingCars_UNSERIALIZE OM_NO_OP

#define evClearWaitingCars_CONSTRUCTOR evClearWaitingCars()

#define evGoTurn_SERIALIZE OM_NO_OP

#define evGoTurn_UNSERIALIZE OM_NO_OP

#define evGoTurn_CONSTRUCTOR evGoTurn()

#define evCarArrive_SERIALIZE OM_NO_OP

#define evCarArrive_UNSERIALIZE OM_NO_OP

#define evCarArrive_CONSTRUCTOR evCarArrive()

#define evResetTurnLane_SERIALIZE OM_NO_OP

#define evResetTurnLane_UNSERIALIZE OM_NO_OP

#define evResetTurnLane_CONSTRUCTOR evResetTurnLane()

#define evWalk_SERIALIZE OM_NO_OP

#define evWalk_UNSERIALIZE OM_NO_OP

#define evWalk_CONSTRUCTOR evWalk()

#define evWalkComplete_SERIALIZE OM_NO_OP

#define evWalkComplete_UNSERIALIZE OM_NO_OP

#define evWalkComplete_CONSTRUCTOR evWalkComplete()

#define evPedestrianArrive_SERIALIZE OM_NO_OP

#define evPedestrianArrive_UNSERIALIZE OM_NO_OP

#define evPedestrianArrive_CONSTRUCTOR evPedestrianArrive()

#define exPedestrianArrive_SERIALIZE OM_NO_OP

#define exPedestrianArrive_UNSERIALIZE OM_NO_OP

#define exPedestrianArrive_CONSTRUCTOR exPedestrianArrive()

#define evPedestrianReset_SERIALIZE OM_NO_OP

#define evPedestrianReset_UNSERIALIZE OM_NO_OP

#define evPedestrianReset_CONSTRUCTOR evPedestrianReset()
//#]

//## package Default


//## classInstance itsTrafficLightSystem
TrafficLightSystem itsTrafficLightSystem;

#ifdef _OMINSTRUMENT
static void serializeGlobalVars(AOMSAttributes* /* aomsAttributes */);

static void RenameGlobalInstances();

IMPLEMENT_META_PACKAGE(Default, Default)
#endif // _OMINSTRUMENT

void Default_initRelations() {
    {
        {
            itsTrafficLightSystem.setShouldDelete(false);
        }
    }
    
    #ifdef _OMINSTRUMENT
    RenameGlobalInstances();
    #endif // _OMINSTRUMENT
}

bool Default_startBehavior() {
    bool done = true;
    done &= itsTrafficLightSystem.startBehavior();
    return done;
}

#ifdef _OMINSTRUMENT
static void serializeGlobalVars(AOMSAttributes* /* aomsAttributes */) {
}

static void RenameGlobalInstances() {
    OM_SET_INSTANCE_NAME(&itsTrafficLightSystem, TrafficLightSystem, "itsTrafficLightSystem", AOMNoMultiplicity);
}
#endif // _OMINSTRUMENT

//#[ ignore
Default_OMInitializer::Default_OMInitializer() {
    Default_initRelations();
    Default_startBehavior();
}

Default_OMInitializer::~Default_OMInitializer() {
}
//#]

//## event evGo(RhpBoolean,RhpString)
evGo::evGo() {
    NOTIFY_EVENT_CONSTRUCTOR(evGo)
    setId(evGo_Default_id);
}

evGo::evGo(RhpBoolean p_first, RhpString p_name) : first(p_first),name(p_name) {
    NOTIFY_EVENT_CONSTRUCTOR(evGo)
    setId(evGo_Default_id);
}

bool evGo::isTypeOf(const short id) const {
    return (evGo_Default_id==id);
}

IMPLEMENT_META_EVENT_P(evGo, Default, Default, evGo(RhpBoolean,RhpString))

//## event evLaneDone()
evLaneDone::evLaneDone() {
    NOTIFY_EVENT_CONSTRUCTOR(evLaneDone)
    setId(evLaneDone_Default_id);
}

bool evLaneDone::isTypeOf(const short id) const {
    return (evLaneDone_Default_id==id);
}

IMPLEMENT_META_EVENT_P(evLaneDone, Default, Default, evLaneDone())

//## event exStart()
exStart::exStart() {
    NOTIFY_EVENT_CONSTRUCTOR(exStart)
    setId(exStart_Default_id);
}

bool exStart::isTypeOf(const short id) const {
    return (exStart_Default_id==id);
}

IMPLEMENT_META_EVENT_P(exStart, Default, Default, exStart())

//## event evTurnDone()
evTurnDone::evTurnDone() {
    NOTIFY_EVENT_CONSTRUCTOR(evTurnDone)
    setId(evTurnDone_Default_id);
}

bool evTurnDone::isTypeOf(const short id) const {
    return (evTurnDone_Default_id==id);
}

IMPLEMENT_META_EVENT_P(evTurnDone, Default, Default, evTurnDone())

//## event exCarArrive()
exCarArrive::exCarArrive() {
    NOTIFY_EVENT_CONSTRUCTOR(exCarArrive)
    setId(exCarArrive_Default_id);
}

bool exCarArrive::isTypeOf(const short id) const {
    return (exCarArrive_Default_id==id);
}

IMPLEMENT_META_EVENT_P(exCarArrive, Default, Default, exCarArrive())

//## event evClearWaitingCars()
evClearWaitingCars::evClearWaitingCars() {
    NOTIFY_EVENT_CONSTRUCTOR(evClearWaitingCars)
    setId(evClearWaitingCars_Default_id);
}

bool evClearWaitingCars::isTypeOf(const short id) const {
    return (evClearWaitingCars_Default_id==id);
}

IMPLEMENT_META_EVENT_P(evClearWaitingCars, Default, Default, evClearWaitingCars())

//## event evGoTurn()
evGoTurn::evGoTurn() {
    NOTIFY_EVENT_CONSTRUCTOR(evGoTurn)
    setId(evGoTurn_Default_id);
}

bool evGoTurn::isTypeOf(const short id) const {
    return (evGoTurn_Default_id==id);
}

IMPLEMENT_META_EVENT_P(evGoTurn, Default, Default, evGoTurn())

//## event evCarArrive()
evCarArrive::evCarArrive() {
    NOTIFY_EVENT_CONSTRUCTOR(evCarArrive)
    setId(evCarArrive_Default_id);
}

bool evCarArrive::isTypeOf(const short id) const {
    return (evCarArrive_Default_id==id);
}

IMPLEMENT_META_EVENT_P(evCarArrive, Default, Default, evCarArrive())

//## event evResetTurnLane()
evResetTurnLane::evResetTurnLane() {
    NOTIFY_EVENT_CONSTRUCTOR(evResetTurnLane)
    setId(evResetTurnLane_Default_id);
}

bool evResetTurnLane::isTypeOf(const short id) const {
    return (evResetTurnLane_Default_id==id);
}

IMPLEMENT_META_EVENT_P(evResetTurnLane, Default, Default, evResetTurnLane())

//## event evWalk()
evWalk::evWalk() {
    NOTIFY_EVENT_CONSTRUCTOR(evWalk)
    setId(evWalk_Default_id);
}

bool evWalk::isTypeOf(const short id) const {
    return (evWalk_Default_id==id);
}

IMPLEMENT_META_EVENT_P(evWalk, Default, Default, evWalk())

//## event evWalkComplete()
evWalkComplete::evWalkComplete() {
    NOTIFY_EVENT_CONSTRUCTOR(evWalkComplete)
    setId(evWalkComplete_Default_id);
}

bool evWalkComplete::isTypeOf(const short id) const {
    return (evWalkComplete_Default_id==id);
}

IMPLEMENT_META_EVENT_P(evWalkComplete, Default, Default, evWalkComplete())

//## event evPedestrianArrive()
evPedestrianArrive::evPedestrianArrive() {
    NOTIFY_EVENT_CONSTRUCTOR(evPedestrianArrive)
    setId(evPedestrianArrive_Default_id);
}

bool evPedestrianArrive::isTypeOf(const short id) const {
    return (evPedestrianArrive_Default_id==id);
}

IMPLEMENT_META_EVENT_P(evPedestrianArrive, Default, Default, evPedestrianArrive())

//## event exPedestrianArrive()
exPedestrianArrive::exPedestrianArrive() {
    NOTIFY_EVENT_CONSTRUCTOR(exPedestrianArrive)
    setId(exPedestrianArrive_Default_id);
}

bool exPedestrianArrive::isTypeOf(const short id) const {
    return (exPedestrianArrive_Default_id==id);
}

IMPLEMENT_META_EVENT_P(exPedestrianArrive, Default, Default, exPedestrianArrive())

//## event evPedestrianReset()
evPedestrianReset::evPedestrianReset() {
    NOTIFY_EVENT_CONSTRUCTOR(evPedestrianReset)
    setId(evPedestrianReset_Default_id);
}

bool evPedestrianReset::isTypeOf(const short id) const {
    return (evPedestrianReset_Default_id==id);
}

IMPLEMENT_META_EVENT_P(evPedestrianReset, Default, Default, evPedestrianReset())

/*********************************************************************
	File Path	: TrafficLightMVP2/MVP2Config/Default.cpp
*********************************************************************/
