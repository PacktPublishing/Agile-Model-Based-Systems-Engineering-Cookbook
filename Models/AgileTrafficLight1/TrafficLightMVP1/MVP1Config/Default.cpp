/********************************************************************
	Rhapsody	: 9.0 
	Login		: Bruce
	Component	: TrafficLightMVP1 
	Configuration 	: MVP1Config
	Model Element	: Default
//!	Generated Date	: Tue, 8, Dec 2020  
	File Path	: TrafficLightMVP1/MVP1Config/Default.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "Default.h"
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

/*********************************************************************
	File Path	: TrafficLightMVP1/MVP1Config/Default.cpp
*********************************************************************/
