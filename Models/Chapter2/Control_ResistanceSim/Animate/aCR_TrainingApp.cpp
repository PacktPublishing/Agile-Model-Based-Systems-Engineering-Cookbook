/********************************************************************
	Rhapsody	: 8.4 
	Login		: Bruce
	Component	: Control_ResistanceSim 
	Configuration 	: Animate
	Model Element	: aCR_TrainingApp
//!	Generated Date	: Thu, 20, Feb 2020  
	File Path	: Control_ResistanceSim/Animate/aCR_TrainingApp.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX

#define _OMSTATECHART_ANIMATED
//#]

//## auto_generated
#include "aCR_TrainingApp.h"
//## auto_generated
#include "ControlResistanceInterfacesPkg.h"
//#[ ignore
#define FunctionalAnalysisPkg_ControlResistancePkg_ControlResistanceActorPkg_aCR_TrainingApp_aCR_TrainingApp_SERIALIZE OM_NO_OP

#define OMAnim_FunctionalAnalysisPkg_ControlResistancePkg_ControlResistanceActorPkg_aCR_TrainingApp_setAcceleration_Real_UNSERIALIZE_ARGS OP_UNSER(OMDestructiveString2X,p_acceleration)

#define OMAnim_FunctionalAnalysisPkg_ControlResistancePkg_ControlResistanceActorPkg_aCR_TrainingApp_setAcceleration_Real_SERIALIZE_RET_VAL

#define OMAnim_FunctionalAnalysisPkg_ControlResistancePkg_ControlResistanceActorPkg_aCR_TrainingApp_setBigChainRing_int_UNSERIALIZE_ARGS OP_UNSER(OMDestructiveString2X,p_bigChainRing)

#define OMAnim_FunctionalAnalysisPkg_ControlResistancePkg_ControlResistanceActorPkg_aCR_TrainingApp_setBigChainRing_int_SERIALIZE_RET_VAL

#define OMAnim_FunctionalAnalysisPkg_ControlResistancePkg_ControlResistanceActorPkg_aCR_TrainingApp_setBikeSpeed_Real_UNSERIALIZE_ARGS OP_UNSER(OMDestructiveString2X,p_bikeSpeed)

#define OMAnim_FunctionalAnalysisPkg_ControlResistancePkg_ControlResistanceActorPkg_aCR_TrainingApp_setBikeSpeed_Real_SERIALIZE_RET_VAL

#define OMAnim_FunctionalAnalysisPkg_ControlResistancePkg_ControlResistanceActorPkg_aCR_TrainingApp_setCadence_Real_UNSERIALIZE_ARGS OP_UNSER(OMDestructiveString2X,p_cadence)

#define OMAnim_FunctionalAnalysisPkg_ControlResistancePkg_ControlResistanceActorPkg_aCR_TrainingApp_setCadence_Real_SERIALIZE_RET_VAL

#define OMAnim_FunctionalAnalysisPkg_ControlResistancePkg_ControlResistanceActorPkg_aCR_TrainingApp_setPower_int_UNSERIALIZE_ARGS OP_UNSER(OMDestructiveString2X,p_power)

#define OMAnim_FunctionalAnalysisPkg_ControlResistancePkg_ControlResistanceActorPkg_aCR_TrainingApp_setPower_int_SERIALIZE_RET_VAL

#define OMAnim_FunctionalAnalysisPkg_ControlResistancePkg_ControlResistanceActorPkg_aCR_TrainingApp_setSmallChainRing_int_UNSERIALIZE_ARGS OP_UNSER(OMDestructiveString2X,p_smallChainRing)

#define OMAnim_FunctionalAnalysisPkg_ControlResistancePkg_ControlResistanceActorPkg_aCR_TrainingApp_setSmallChainRing_int_SERIALIZE_RET_VAL

#define OMAnim_FunctionalAnalysisPkg_ControlResistancePkg_ControlResistanceActorPkg_aCR_TrainingApp_setWattsPerKg_int_UNSERIALIZE_ARGS OP_UNSER(OMDestructiveString2X,p_wattsPerKg)

#define OMAnim_FunctionalAnalysisPkg_ControlResistancePkg_ControlResistanceActorPkg_aCR_TrainingApp_setWattsPerKg_int_SERIALIZE_RET_VAL
//#]

//## package FunctionalAnalysisPkg::ControlResistancePkg::ControlResistanceActorPkg

//## class aCR_TrainingApp
//#[ ignore
aCR_TrainingApp::pUc_ControlResistance_C::InBound_C::InBound_C() {
    itsEvSendAccelerationToApp_ProxyReceptionInterface = NULL;
    itsEvSendFilteredPowerToApp_ProxyReceptionInterface = NULL;
    itsEvSendPedalCadenceToApp_ProxyReceptionInterface = NULL;
    itsEvSendSpeedToApp_ProxyReceptionInterface = NULL;
    port = NULL;
}

aCR_TrainingApp::pUc_ControlResistance_C::InBound_C::~InBound_C() {
    cleanUpRelations();
}

bool aCR_TrainingApp::pUc_ControlResistance_C::InBound_C::send(IOxfEvent* event, const IOxfEventGenerationParams& params) {
    bool res = false;
    if (event != NULL) {
        event->setPort(getPort());
        if (itsEvSendPedalCadenceToApp_ProxyReceptionInterface != NULL) {
            if (event->isTypeOf(evSendPedalCadenceToApp_ControlResistanceInterfacesPkg_ControlResistancePkg_FunctionalAnalysisPkg_id)) {
                res = itsEvSendPedalCadenceToApp_ProxyReceptionInterface->send(event, params);
                return res;
            }
        }
        if (itsEvSendFilteredPowerToApp_ProxyReceptionInterface != NULL) {
            if (event->isTypeOf(evSendFilteredPowerToApp_ControlResistanceInterfacesPkg_ControlResistancePkg_FunctionalAnalysisPkg_id)) {
                res = itsEvSendFilteredPowerToApp_ProxyReceptionInterface->send(event, params);
                return res;
            }
        }
        if (itsEvSendSpeedToApp_ProxyReceptionInterface != NULL) {
            if (event->isTypeOf(evSendSpeedToApp_ControlResistanceInterfacesPkg_ControlResistancePkg_FunctionalAnalysisPkg_id)) {
                res = itsEvSendSpeedToApp_ProxyReceptionInterface->send(event, params);
                return res;
            }
        }
        if (itsEvSendAccelerationToApp_ProxyReceptionInterface != NULL) {
            if (event->isTypeOf(evSendAccelerationToApp_ControlResistanceInterfacesPkg_ControlResistancePkg_FunctionalAnalysisPkg_id)) {
                res = itsEvSendAccelerationToApp_ProxyReceptionInterface->send(event, params);
                return res;
            }
        }
    }
    return res;
    
}

bool aCR_TrainingApp::pUc_ControlResistance_C::InBound_C::send(IOxfEvent* event) {
    bool res = false;
    if (event != NULL) {
        event->setPort(getPort());
        if (itsEvSendPedalCadenceToApp_ProxyReceptionInterface != NULL) {
            if (event->isTypeOf(evSendPedalCadenceToApp_ControlResistanceInterfacesPkg_ControlResistancePkg_FunctionalAnalysisPkg_id)) {
                res = itsEvSendPedalCadenceToApp_ProxyReceptionInterface->send(event);
                return res;
            }
        }
        if (itsEvSendFilteredPowerToApp_ProxyReceptionInterface != NULL) {
            if (event->isTypeOf(evSendFilteredPowerToApp_ControlResistanceInterfacesPkg_ControlResistancePkg_FunctionalAnalysisPkg_id)) {
                res = itsEvSendFilteredPowerToApp_ProxyReceptionInterface->send(event);
                return res;
            }
        }
        if (itsEvSendSpeedToApp_ProxyReceptionInterface != NULL) {
            if (event->isTypeOf(evSendSpeedToApp_ControlResistanceInterfacesPkg_ControlResistancePkg_FunctionalAnalysisPkg_id)) {
                res = itsEvSendSpeedToApp_ProxyReceptionInterface->send(event);
                return res;
            }
        }
        if (itsEvSendAccelerationToApp_ProxyReceptionInterface != NULL) {
            if (event->isTypeOf(evSendAccelerationToApp_ControlResistanceInterfacesPkg_ControlResistancePkg_FunctionalAnalysisPkg_id)) {
                res = itsEvSendAccelerationToApp_ProxyReceptionInterface->send(event);
                return res;
            }
        }
    }
    return res;
    
}

void aCR_TrainingApp::pUc_ControlResistance_C::InBound_C::setItsEvSendAccelerationToApp_ProxyReceptionInterface(evSendAccelerationToApp_ProxyReceptionInterface* p_evSendAccelerationToApp_ProxyReceptionInterface) {
    itsEvSendAccelerationToApp_ProxyReceptionInterface = p_evSendAccelerationToApp_ProxyReceptionInterface;
}

void aCR_TrainingApp::pUc_ControlResistance_C::InBound_C::setItsEvSendFilteredPowerToApp_ProxyReceptionInterface(evSendFilteredPowerToApp_ProxyReceptionInterface* p_evSendFilteredPowerToApp_ProxyReceptionInterface) {
    itsEvSendFilteredPowerToApp_ProxyReceptionInterface = p_evSendFilteredPowerToApp_ProxyReceptionInterface;
}

void aCR_TrainingApp::pUc_ControlResistance_C::InBound_C::setItsEvSendPedalCadenceToApp_ProxyReceptionInterface(evSendPedalCadenceToApp_ProxyReceptionInterface* p_evSendPedalCadenceToApp_ProxyReceptionInterface) {
    itsEvSendPedalCadenceToApp_ProxyReceptionInterface = p_evSendPedalCadenceToApp_ProxyReceptionInterface;
}

void aCR_TrainingApp::pUc_ControlResistance_C::InBound_C::setItsEvSendSpeedToApp_ProxyReceptionInterface(evSendSpeedToApp_ProxyReceptionInterface* p_evSendSpeedToApp_ProxyReceptionInterface) {
    itsEvSendSpeedToApp_ProxyReceptionInterface = p_evSendSpeedToApp_ProxyReceptionInterface;
}

aCR_TrainingApp::pUc_ControlResistance_C* aCR_TrainingApp::pUc_ControlResistance_C::InBound_C::getPort() const {
    return port;
}

void aCR_TrainingApp::pUc_ControlResistance_C::InBound_C::setPort(aCR_TrainingApp::pUc_ControlResistance_C* p_pUc_ControlResistance_C) {
    _setPort(p_pUc_ControlResistance_C);
}

void aCR_TrainingApp::pUc_ControlResistance_C::InBound_C::cleanUpRelations() {
    if(itsEvSendAccelerationToApp_ProxyReceptionInterface != NULL)
        {
            itsEvSendAccelerationToApp_ProxyReceptionInterface = NULL;
        }
    if(itsEvSendFilteredPowerToApp_ProxyReceptionInterface != NULL)
        {
            itsEvSendFilteredPowerToApp_ProxyReceptionInterface = NULL;
        }
    if(itsEvSendPedalCadenceToApp_ProxyReceptionInterface != NULL)
        {
            itsEvSendPedalCadenceToApp_ProxyReceptionInterface = NULL;
        }
    if(itsEvSendSpeedToApp_ProxyReceptionInterface != NULL)
        {
            itsEvSendSpeedToApp_ProxyReceptionInterface = NULL;
        }
    if(port != NULL)
        {
            port = NULL;
        }
}

void aCR_TrainingApp::pUc_ControlResistance_C::InBound_C::__setPort(aCR_TrainingApp::pUc_ControlResistance_C* p_pUc_ControlResistance_C) {
    port = p_pUc_ControlResistance_C;
}

void aCR_TrainingApp::pUc_ControlResistance_C::InBound_C::_setPort(aCR_TrainingApp::pUc_ControlResistance_C* p_pUc_ControlResistance_C) {
    __setPort(p_pUc_ControlResistance_C);
}

void aCR_TrainingApp::pUc_ControlResistance_C::InBound_C::_clearPort() {
    port = NULL;
}

aCR_TrainingApp::pUc_ControlResistance_C::OutBound_C::OutBound_C() {
    itsReqSetIncline_ProxyReceptionInterface = NULL;
}

aCR_TrainingApp::pUc_ControlResistance_C::OutBound_C::~OutBound_C() {
    cleanUpRelations();
}

bool aCR_TrainingApp::pUc_ControlResistance_C::OutBound_C::send(IOxfEvent* event, const IOxfEventGenerationParams& params) {
    bool res = false;
    if (event != NULL) {
        if (itsReqSetIncline_ProxyReceptionInterface != NULL) {
            if (event->isTypeOf(reqSetIncline_ControlResistanceInterfacesPkg_ControlResistancePkg_FunctionalAnalysisPkg_id)) {
                res = itsReqSetIncline_ProxyReceptionInterface->send(event, params);
            }
        }
    }
    return res;
    
}

bool aCR_TrainingApp::pUc_ControlResistance_C::OutBound_C::send(IOxfEvent* event) {
    bool res = false;
    if (event != NULL) {
        if (itsReqSetIncline_ProxyReceptionInterface != NULL) {
            if (event->isTypeOf(reqSetIncline_ControlResistanceInterfacesPkg_ControlResistancePkg_FunctionalAnalysisPkg_id)) {
                res = itsReqSetIncline_ProxyReceptionInterface->send(event);
            }
        }
    }
    return res;
    
}

void aCR_TrainingApp::pUc_ControlResistance_C::OutBound_C::setItsReqSetIncline_ProxyReceptionInterface(OMReactive* p_OMReactive) {
    itsReqSetIncline_ProxyReceptionInterface = p_OMReactive;
}

void aCR_TrainingApp::pUc_ControlResistance_C::OutBound_C::cleanUpRelations() {
    if(itsReqSetIncline_ProxyReceptionInterface != NULL)
        {
            itsReqSetIncline_ProxyReceptionInterface = NULL;
        }
}

aCR_TrainingApp::pUc_ControlResistance_C::pUc_ControlResistance_C() : _p_(0) {
    initRelations();
}

aCR_TrainingApp::pUc_ControlResistance_C::~pUc_ControlResistance_C() {
}

void aCR_TrainingApp::pUc_ControlResistance_C::connectACR_TrainingApp(aCR_TrainingApp* part) {
    InBound.setItsEvSendPedalCadenceToApp_ProxyReceptionInterface(part);
    InBound.setItsEvSendFilteredPowerToApp_ProxyReceptionInterface(part);
    InBound.setItsEvSendSpeedToApp_ProxyReceptionInterface(part);
    InBound.setItsEvSendAccelerationToApp_ProxyReceptionInterface(part);
    InBound.setPort(this); // for IS_PORT macro support
    
}

evSendAccelerationToApp_ProxyReceptionInterface* aCR_TrainingApp::pUc_ControlResistance_C::getItsEvSendAccelerationToApp_ProxyReceptionInterface() {
    return &InBound;
}

evSendFilteredPowerToApp_ProxyReceptionInterface* aCR_TrainingApp::pUc_ControlResistance_C::getItsEvSendFilteredPowerToApp_ProxyReceptionInterface() {
    return &InBound;
}

evSendPedalCadenceToApp_ProxyReceptionInterface* aCR_TrainingApp::pUc_ControlResistance_C::getItsEvSendPedalCadenceToApp_ProxyReceptionInterface() {
    return &InBound;
}

evSendSpeedToApp_ProxyReceptionInterface* aCR_TrainingApp::pUc_ControlResistance_C::getItsEvSendSpeedToApp_ProxyReceptionInterface() {
    return &InBound;
}

reqSetIncline_ProxyReceptionInterface* aCR_TrainingApp::pUc_ControlResistance_C::getItsReqSetIncline_ProxyReceptionInterface() {
    return &OutBound;
}

void aCR_TrainingApp::pUc_ControlResistance_C::setItsEvSendAccelerationToApp_ProxyReceptionInterface(evSendAccelerationToApp_ProxyReceptionInterface* p_evSendAccelerationToApp_ProxyReceptionInterface) {
    InBound.setItsEvSendAccelerationToApp_ProxyReceptionInterface(p_evSendAccelerationToApp_ProxyReceptionInterface);
}

void aCR_TrainingApp::pUc_ControlResistance_C::setItsEvSendFilteredPowerToApp_ProxyReceptionInterface(evSendFilteredPowerToApp_ProxyReceptionInterface* p_evSendFilteredPowerToApp_ProxyReceptionInterface) {
    InBound.setItsEvSendFilteredPowerToApp_ProxyReceptionInterface(p_evSendFilteredPowerToApp_ProxyReceptionInterface);
}

void aCR_TrainingApp::pUc_ControlResistance_C::setItsEvSendPedalCadenceToApp_ProxyReceptionInterface(evSendPedalCadenceToApp_ProxyReceptionInterface* p_evSendPedalCadenceToApp_ProxyReceptionInterface) {
    InBound.setItsEvSendPedalCadenceToApp_ProxyReceptionInterface(p_evSendPedalCadenceToApp_ProxyReceptionInterface);
}

void aCR_TrainingApp::pUc_ControlResistance_C::setItsEvSendSpeedToApp_ProxyReceptionInterface(evSendSpeedToApp_ProxyReceptionInterface* p_evSendSpeedToApp_ProxyReceptionInterface) {
    InBound.setItsEvSendSpeedToApp_ProxyReceptionInterface(p_evSendSpeedToApp_ProxyReceptionInterface);
}

void aCR_TrainingApp::pUc_ControlResistance_C::setItsReqSetIncline_ProxyReceptionInterface(OMReactive* p_reqSetIncline_ProxyReceptionInterface) {
    OutBound.setItsReqSetIncline_ProxyReceptionInterface(p_reqSetIncline_ProxyReceptionInterface);
}

aCR_TrainingApp::pUc_ControlResistance_C::InBound_C* aCR_TrainingApp::pUc_ControlResistance_C::getInBound() const {
    return (aCR_TrainingApp::pUc_ControlResistance_C::InBound_C*) &InBound;
}

aCR_TrainingApp::pUc_ControlResistance_C::OutBound_C* aCR_TrainingApp::pUc_ControlResistance_C::getOutBound() const {
    return (aCR_TrainingApp::pUc_ControlResistance_C::OutBound_C*) &OutBound;
}

void aCR_TrainingApp::pUc_ControlResistance_C::initRelations() {
    InBound._setPort(this);
}

void aCR_TrainingApp::pUc_ControlResistance_C::destroy() {
}
//#]

aCR_TrainingApp::aCR_TrainingApp(IOxfActive* theActiveContext) : bigChainRing(53), smallChainRing(28) {
    NOTIFY_REACTIVE_CONSTRUCTOR(aCR_TrainingApp, aCR_TrainingApp(), 0, FunctionalAnalysisPkg_ControlResistancePkg_ControlResistanceActorPkg_aCR_TrainingApp_aCR_TrainingApp_SERIALIZE);
    setActiveContext(theActiveContext, false);
    initRelations();
    initStatechart();
    initWebAdapters();
}

aCR_TrainingApp::~aCR_TrainingApp() {
    NOTIFY_DESTRUCTOR(~aCR_TrainingApp, true);
    delete itsWebAdapter;
}

aCR_TrainingApp::pUc_ControlResistance_C* aCR_TrainingApp::getPUc_ControlResistance() const {
    return (aCR_TrainingApp::pUc_ControlResistance_C*) &pUc_ControlResistance;
}

aCR_TrainingApp::pUc_ControlResistance_C* aCR_TrainingApp::get_pUc_ControlResistance() const {
    return (aCR_TrainingApp::pUc_ControlResistance_C*) &pUc_ControlResistance;
}

Real aCR_TrainingApp::getAcceleration() const {
    return acceleration;
}

void aCR_TrainingApp::setAcceleration(Real p_acceleration) {
    acceleration = p_acceleration;
    NOTIFY_SET_OPERATION;
}

int aCR_TrainingApp::getBigChainRing() const {
    return bigChainRing;
}

void aCR_TrainingApp::setBigChainRing(int p_bigChainRing) {
    bigChainRing = p_bigChainRing;
    NOTIFY_SET_OPERATION;
}

Real aCR_TrainingApp::getBikeSpeed() const {
    return bikeSpeed;
}

void aCR_TrainingApp::setBikeSpeed(Real p_bikeSpeed) {
    bikeSpeed = p_bikeSpeed;
    NOTIFY_SET_OPERATION;
}

Real aCR_TrainingApp::getCadence() const {
    return cadence;
}

void aCR_TrainingApp::setCadence(Real p_cadence) {
    cadence = p_cadence;
    NOTIFY_SET_OPERATION;
}

int aCR_TrainingApp::getIncline() const {
    return incline;
}

void aCR_TrainingApp::setIncline(int p_incline) {
    incline = p_incline;
}

int aCR_TrainingApp::getPower() const {
    return power;
}

void aCR_TrainingApp::setPower(int p_power) {
    power = p_power;
    NOTIFY_SET_OPERATION;
}

int aCR_TrainingApp::getSmallChainRing() const {
    return smallChainRing;
}

void aCR_TrainingApp::setSmallChainRing(int p_smallChainRing) {
    smallChainRing = p_smallChainRing;
    NOTIFY_SET_OPERATION;
}

int aCR_TrainingApp::getWattsPerKg() const {
    return wattsPerKg;
}

void aCR_TrainingApp::setWattsPerKg(int p_wattsPerKg) {
    wattsPerKg = p_wattsPerKg;
    NOTIFY_SET_OPERATION;
}

bool aCR_TrainingApp::startBehavior() {
    bool done = false;
    done = OMReactive::startBehavior();
    return done;
}

void aCR_TrainingApp::initRelations() {
    if (get_pUc_ControlResistance() != NULL) {
        get_pUc_ControlResistance()->connectACR_TrainingApp(this);
    }
}

void aCR_TrainingApp::initStatechart() {
    rootState_subState = OMNonState;
    rootState_active = OMNonState;
}

//#[ ignore
const ClassWebAdapter * aCR_TrainingApp::getItsWebAdapter() const {
    return itsWebAdapter;
}

void aCR_TrainingApp::visitWebAdaptedRelations() const {
}

void aCR_TrainingApp::initWebAdapters() {
    itsWebAdapter = new ClassWebAdapterTmpl< aCR_TrainingApp >(this, "aCR_TrainingApp");
    itsWebAdapter->AddSubObject(new EventReceptionWebAdapterTmpl< aCR_TrainingApp, exSetGear >(this, "exSetGear"));
    itsWebAdapter->AddSubObject(new EventReceptionWebAdapterTmpl< aCR_TrainingApp, exSetIncline >(this, "exSetIncline"));
    itsWebAdapter->AddSubObject(new NonConstDoubleAttrWebAdapterTmpl< aCR_TrainingApp >(this,
                                    "evSendWattsPerKgToApp",
                                     NULL,
                                     &aCR_TrainingApp::evSendWattsPerKgToAppWebWrapper));
}

void aCR_TrainingApp::exSetGearWebWrapper() {
    GEN_BY_X(exSetGear( ), this);
}

void aCR_TrainingApp::exSetInclineWebWrapper() {
    GEN_BY_X(exSetIncline( ), this);
}

void aCR_TrainingApp::evSendWattsPerKgToAppWebWrapper(double wpk) {
    GEN_BY_X(evSendWattsPerKgToApp((Real) wpk), this);
}
//#]

void aCR_TrainingApp::rootState_entDef() {
    {
        NOTIFY_STATE_ENTERED("ROOT");
        NOTIFY_TRANSITION_STARTED("0");
        NOTIFY_STATE_ENTERED("ROOT.Operating");
        rootState_subState = Operating;
        rootState_active = Operating;
        NOTIFY_TRANSITION_TERMINATED("0");
    }
}

IOxfReactive::TakeEventStatus aCR_TrainingApp::rootState_processEvent() {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    switch (rootState_active) {
        // State Operating
        case Operating:
        {
            res = Operating_handleEvent();
        }
        break;
        // State sendaction_1
        case sendaction_1:
        {
            if(IS_EVENT_TYPE_OF(OMNullEventId))
                {
                    NOTIFY_TRANSITION_STARTED("6");
                    popNullTransition();
                    NOTIFY_STATE_EXITED("ROOT.sendaction_1");
                    NOTIFY_STATE_ENTERED("ROOT.Operating");
                    rootState_subState = Operating;
                    rootState_active = Operating;
                    NOTIFY_TRANSITION_TERMINATED("6");
                    res = eventConsumed;
                }
            
        }
        break;
        // State sendaction_2
        case sendaction_2:
        {
            if(IS_EVENT_TYPE_OF(OMNullEventId))
                {
                    NOTIFY_TRANSITION_STARTED("8");
                    popNullTransition();
                    NOTIFY_STATE_EXITED("ROOT.sendaction_2");
                    NOTIFY_STATE_ENTERED("ROOT.Operating");
                    rootState_subState = Operating;
                    rootState_active = Operating;
                    NOTIFY_TRANSITION_TERMINATED("8");
                    res = eventConsumed;
                }
            
        }
        break;
        default:
            break;
    }
    return res;
}

IOxfReactive::TakeEventStatus aCR_TrainingApp::Operating_handleEvent() {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    if(IS_EVENT_TYPE_OF(evSendPedalCadenceToApp_ControlResistanceInterfacesPkg_ControlResistancePkg_FunctionalAnalysisPkg_id))
        {
            OMSETPARAMS(evSendPedalCadenceToApp);
            NOTIFY_TRANSITION_STARTED("1");
            NOTIFY_STATE_EXITED("ROOT.Operating");
            //#[ transition 1 
            
            setCadence(params->pCad);
            //#]
            NOTIFY_STATE_ENTERED("ROOT.Operating");
            rootState_subState = Operating;
            rootState_active = Operating;
            NOTIFY_TRANSITION_TERMINATED("1");
            res = eventConsumed;
        }
    else if(IS_EVENT_TYPE_OF(exSetGear_ControlResistanceActorPkg_ControlResistancePkg_FunctionalAnalysisPkg_id))
        {
            NOTIFY_TRANSITION_STARTED("5");
            NOTIFY_STATE_EXITED("ROOT.Operating");
            NOTIFY_STATE_ENTERED("ROOT.sendaction_1");
            pushNullTransition();
            rootState_subState = sendaction_1;
            rootState_active = sendaction_1;
            //#[ state sendaction_1.(Entry) 
            OUT_PORT(pUc_ControlResistance)->GEN(reqSetGear(bigChainRing,smallChainRing));
            //#]
            NOTIFY_TRANSITION_TERMINATED("5");
            res = eventConsumed;
        }
    else if(IS_EVENT_TYPE_OF(exSetIncline_ControlResistanceActorPkg_ControlResistancePkg_FunctionalAnalysisPkg_id))
        {
            NOTIFY_TRANSITION_STARTED("7");
            NOTIFY_STATE_EXITED("ROOT.Operating");
            NOTIFY_STATE_ENTERED("ROOT.sendaction_2");
            pushNullTransition();
            rootState_subState = sendaction_2;
            rootState_active = sendaction_2;
            //#[ state sendaction_2.(Entry) 
            OUT_PORT(pUc_ControlResistance)->GEN(reqSetIncline(incline));
            //#]
            NOTIFY_TRANSITION_TERMINATED("7");
            res = eventConsumed;
        }
    else if(IS_EVENT_TYPE_OF(evSendWattsPerKgToApp_ControlResistanceActorPkg_ControlResistancePkg_FunctionalAnalysisPkg_id))
        {
            OMSETPARAMS(evSendWattsPerKgToApp);
            NOTIFY_TRANSITION_STARTED("9");
            NOTIFY_STATE_EXITED("ROOT.Operating");
            //#[ transition 9 
            
            setWattsPerKg(params->wpk);
            //#]
            NOTIFY_STATE_ENTERED("ROOT.Operating");
            rootState_subState = Operating;
            rootState_active = Operating;
            NOTIFY_TRANSITION_TERMINATED("9");
            res = eventConsumed;
        }
    else if(IS_EVENT_TYPE_OF(evSendAccelerationToApp_ControlResistanceInterfacesPkg_ControlResistancePkg_FunctionalAnalysisPkg_id))
        {
            OMSETPARAMS(evSendAccelerationToApp);
            NOTIFY_TRANSITION_STARTED("4");
            NOTIFY_STATE_EXITED("ROOT.Operating");
            //#[ transition 4 
            
            setAcceleration(params->bAcceleration);
            //#]
            NOTIFY_STATE_ENTERED("ROOT.Operating");
            rootState_subState = Operating;
            rootState_active = Operating;
            NOTIFY_TRANSITION_TERMINATED("4");
            res = eventConsumed;
        }
    else if(IS_EVENT_TYPE_OF(evSendFilteredPowerToApp_ControlResistanceInterfacesPkg_ControlResistancePkg_FunctionalAnalysisPkg_id))
        {
            OMSETPARAMS(evSendFilteredPowerToApp);
            NOTIFY_TRANSITION_STARTED("2");
            NOTIFY_STATE_EXITED("ROOT.Operating");
            //#[ transition 2 
            
            setPower(params->pow);
            //#]
            NOTIFY_STATE_ENTERED("ROOT.Operating");
            rootState_subState = Operating;
            rootState_active = Operating;
            NOTIFY_TRANSITION_TERMINATED("2");
            res = eventConsumed;
        }
    else if(IS_EVENT_TYPE_OF(evSendSpeedToApp_ControlResistanceInterfacesPkg_ControlResistancePkg_FunctionalAnalysisPkg_id))
        {
            OMSETPARAMS(evSendSpeedToApp);
            NOTIFY_TRANSITION_STARTED("3");
            NOTIFY_STATE_EXITED("ROOT.Operating");
            //#[ transition 3 
            
            setBikeSpeed(params->bSpeed);
            //#]
            NOTIFY_STATE_ENTERED("ROOT.Operating");
            rootState_subState = Operating;
            rootState_active = Operating;
            NOTIFY_TRANSITION_TERMINATED("3");
            res = eventConsumed;
        }
    
    return res;
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedaCR_TrainingApp::serializeAttributes(AOMSAttributes* aomsAttributes) const {
    aomsAttributes->addAttribute("cadence", x2String(myReal->cadence));
    aomsAttributes->addAttribute("bikeSpeed", x2String(myReal->bikeSpeed));
    aomsAttributes->addAttribute("bigChainRing", x2String(myReal->bigChainRing));
    aomsAttributes->addAttribute("smallChainRing", x2String(myReal->smallChainRing));
    aomsAttributes->addAttribute("incline", x2String(myReal->incline));
    aomsAttributes->addAttribute("power", x2String(myReal->power));
    aomsAttributes->addAttribute("acceleration", x2String(myReal->acceleration));
    aomsAttributes->addAttribute("wattsPerKg", x2String(myReal->wattsPerKg));
}

void OMAnimatedaCR_TrainingApp::serializeRelations(AOMSRelations* aomsRelations) const {
}

void OMAnimatedaCR_TrainingApp::rootState_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT");
    switch (myReal->rootState_subState) {
        case aCR_TrainingApp::Operating:
        {
            Operating_serializeStates(aomsState);
        }
        break;
        case aCR_TrainingApp::sendaction_1:
        {
            sendaction_1_serializeStates(aomsState);
        }
        break;
        case aCR_TrainingApp::sendaction_2:
        {
            sendaction_2_serializeStates(aomsState);
        }
        break;
        default:
            break;
    }
}

void OMAnimatedaCR_TrainingApp::sendaction_2_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.sendaction_2");
}

void OMAnimatedaCR_TrainingApp::sendaction_1_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.sendaction_1");
}

void OMAnimatedaCR_TrainingApp::Operating_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.Operating");
}
//#]

IMPLEMENT_REACTIVE_META_P(aCR_TrainingApp, FunctionalAnalysisPkg_ControlResistancePkg_ControlResistanceActorPkg, FunctionalAnalysisPkg::ControlResistancePkg::ControlResistanceActorPkg, false, OMAnimatedaCR_TrainingApp)

IMPLEMENT_META_OP(OMAnimatedaCR_TrainingApp, FunctionalAnalysisPkg_ControlResistancePkg_ControlResistanceActorPkg_aCR_TrainingApp_setAcceleration_Real, "setAcceleration", FALSE, "setAcceleration(Real)", 1)

IMPLEMENT_OP_CALL(FunctionalAnalysisPkg_ControlResistancePkg_ControlResistanceActorPkg_aCR_TrainingApp_setAcceleration_Real, aCR_TrainingApp, setAcceleration(p_acceleration), NO_OP())

IMPLEMENT_META_OP(OMAnimatedaCR_TrainingApp, FunctionalAnalysisPkg_ControlResistancePkg_ControlResistanceActorPkg_aCR_TrainingApp_setBigChainRing_int, "setBigChainRing", FALSE, "setBigChainRing(int)", 1)

IMPLEMENT_OP_CALL(FunctionalAnalysisPkg_ControlResistancePkg_ControlResistanceActorPkg_aCR_TrainingApp_setBigChainRing_int, aCR_TrainingApp, setBigChainRing(p_bigChainRing), NO_OP())

IMPLEMENT_META_OP(OMAnimatedaCR_TrainingApp, FunctionalAnalysisPkg_ControlResistancePkg_ControlResistanceActorPkg_aCR_TrainingApp_setBikeSpeed_Real, "setBikeSpeed", FALSE, "setBikeSpeed(Real)", 1)

IMPLEMENT_OP_CALL(FunctionalAnalysisPkg_ControlResistancePkg_ControlResistanceActorPkg_aCR_TrainingApp_setBikeSpeed_Real, aCR_TrainingApp, setBikeSpeed(p_bikeSpeed), NO_OP())

IMPLEMENT_META_OP(OMAnimatedaCR_TrainingApp, FunctionalAnalysisPkg_ControlResistancePkg_ControlResistanceActorPkg_aCR_TrainingApp_setCadence_Real, "setCadence", FALSE, "setCadence(Real)", 1)

IMPLEMENT_OP_CALL(FunctionalAnalysisPkg_ControlResistancePkg_ControlResistanceActorPkg_aCR_TrainingApp_setCadence_Real, aCR_TrainingApp, setCadence(p_cadence), NO_OP())

IMPLEMENT_META_OP(OMAnimatedaCR_TrainingApp, FunctionalAnalysisPkg_ControlResistancePkg_ControlResistanceActorPkg_aCR_TrainingApp_setPower_int, "setPower", FALSE, "setPower(int)", 1)

IMPLEMENT_OP_CALL(FunctionalAnalysisPkg_ControlResistancePkg_ControlResistanceActorPkg_aCR_TrainingApp_setPower_int, aCR_TrainingApp, setPower(p_power), NO_OP())

IMPLEMENT_META_OP(OMAnimatedaCR_TrainingApp, FunctionalAnalysisPkg_ControlResistancePkg_ControlResistanceActorPkg_aCR_TrainingApp_setSmallChainRing_int, "setSmallChainRing", FALSE, "setSmallChainRing(int)", 1)

IMPLEMENT_OP_CALL(FunctionalAnalysisPkg_ControlResistancePkg_ControlResistanceActorPkg_aCR_TrainingApp_setSmallChainRing_int, aCR_TrainingApp, setSmallChainRing(p_smallChainRing), NO_OP())

IMPLEMENT_META_OP(OMAnimatedaCR_TrainingApp, FunctionalAnalysisPkg_ControlResistancePkg_ControlResistanceActorPkg_aCR_TrainingApp_setWattsPerKg_int, "setWattsPerKg", FALSE, "setWattsPerKg(int)", 1)

IMPLEMENT_OP_CALL(FunctionalAnalysisPkg_ControlResistancePkg_ControlResistanceActorPkg_aCR_TrainingApp_setWattsPerKg_int, aCR_TrainingApp, setWattsPerKg(p_wattsPerKg), NO_OP())
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: Control_ResistanceSim/Animate/aCR_TrainingApp.cpp
*********************************************************************/
