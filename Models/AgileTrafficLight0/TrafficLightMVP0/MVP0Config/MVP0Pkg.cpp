/********************************************************************
	Rhapsody	: 9.0 
	Login		: Bruce
	Component	: TrafficLightMVP0 
	Configuration 	: MVP0Config
	Model Element	: MVP0Pkg
//!	Generated Date	: Tue, 8, Dec 2020  
	File Path	: TrafficLightMVP0/MVP0Config/MVP0Pkg.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "MVP0Pkg.h"
//## classInstance itsTrafficLightSystem
#include "TrafficLightSystem.h"
//## auto_generated
#include "TrafficLane.h"
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
//#]

//## package MVP0Pkg


//## classInstance itsTrafficLightSystem
TrafficLightSystem itsTrafficLightSystem;

#ifdef _OMINSTRUMENT
static void serializeGlobalVars(AOMSAttributes* /* aomsAttributes */);

static void RenameGlobalInstances();

IMPLEMENT_META_PACKAGE(MVP0Pkg, MVP0Pkg)
#endif // _OMINSTRUMENT

void MVP0Pkg_initRelations() {
    {
        {
            itsTrafficLightSystem.setShouldDelete(false);
        }
    }
    
    #ifdef _OMINSTRUMENT
    RenameGlobalInstances();
    #endif // _OMINSTRUMENT
}

bool MVP0Pkg_startBehavior() {
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
MVP0Pkg_OMInitializer::MVP0Pkg_OMInitializer() {
    MVP0Pkg_initRelations();
    MVP0Pkg_startBehavior();
}

MVP0Pkg_OMInitializer::~MVP0Pkg_OMInitializer() {
}
//#]

//## event evGo(RhpBoolean,RhpString)
evGo::evGo() {
    NOTIFY_EVENT_CONSTRUCTOR(evGo)
    setId(evGo_MVP0Pkg_id);
}

evGo::evGo(RhpBoolean p_first, RhpString p_name) : first(p_first),name(p_name) {
    NOTIFY_EVENT_CONSTRUCTOR(evGo)
    setId(evGo_MVP0Pkg_id);
}

bool evGo::isTypeOf(const short id) const {
    return (evGo_MVP0Pkg_id==id);
}

IMPLEMENT_META_EVENT_P(evGo, MVP0Pkg, MVP0Pkg, evGo(RhpBoolean,RhpString))

//## event evLaneDone()
evLaneDone::evLaneDone() {
    NOTIFY_EVENT_CONSTRUCTOR(evLaneDone)
    setId(evLaneDone_MVP0Pkg_id);
}

bool evLaneDone::isTypeOf(const short id) const {
    return (evLaneDone_MVP0Pkg_id==id);
}

IMPLEMENT_META_EVENT_P(evLaneDone, MVP0Pkg, MVP0Pkg, evLaneDone())

//## event exStart()
exStart::exStart() {
    NOTIFY_EVENT_CONSTRUCTOR(exStart)
    setId(exStart_MVP0Pkg_id);
}

bool exStart::isTypeOf(const short id) const {
    return (exStart_MVP0Pkg_id==id);
}

IMPLEMENT_META_EVENT_P(exStart, MVP0Pkg, MVP0Pkg, exStart())

/*********************************************************************
	File Path	: TrafficLightMVP0/MVP0Config/MVP0Pkg.cpp
*********************************************************************/
