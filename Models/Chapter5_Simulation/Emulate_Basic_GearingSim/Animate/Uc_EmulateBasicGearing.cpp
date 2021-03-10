/********************************************************************
	Rhapsody	: 9.0 
	Login		: Bruce
	Component	: Emulate_Basic_GearingSim 
	Configuration 	: Animate
	Model Element	: Uc_EmulateBasicGearing
//!	Generated Date	: Wed, 25, Nov 2020  
	File Path	: Emulate_Basic_GearingSim/Animate/Uc_EmulateBasicGearing.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX

#define _OMSTATECHART_ANIMATED
//#]

//## auto_generated
#include "Uc_EmulateBasicGearing.h"
//## auto_generated
#include "EmulateBasicGearingInterfacesPkg.h"
//#[ ignore
#define FunctionalAnalysisPkg_EmulateBasicGearingPkg_Uc_EmulateBasicGearing_Uc_EmulateBasicGearing_SERIALIZE OM_NO_OP

#define FunctionalAnalysisPkg_EmulateBasicGearingPkg_Uc_EmulateBasicGearing_applyResistance_SERIALIZE OM_NO_OP

#define FunctionalAnalysisPkg_EmulateBasicGearingPkg_Uc_EmulateBasicGearing_changeGear_SERIALIZE aomsmethod->addAttribute("newGear", x2String(newGear));

#define FunctionalAnalysisPkg_EmulateBasicGearingPkg_Uc_EmulateBasicGearing_checkGearing_SERIALIZE aomsmethod->addAttribute("newGear", x2String(newGear));

#define FunctionalAnalysisPkg_EmulateBasicGearingPkg_Uc_EmulateBasicGearing_computeResistance_SERIALIZE OM_NO_OP

#define OMAnim_FunctionalAnalysisPkg_EmulateBasicGearingPkg_Uc_EmulateBasicGearing_setAppliedTorque_Real_UNSERIALIZE_ARGS OP_UNSER(OMDestructiveString2X,p_appliedTorque)

#define OMAnim_FunctionalAnalysisPkg_EmulateBasicGearingPkg_Uc_EmulateBasicGearing_setAppliedTorque_Real_SERIALIZE_RET_VAL

#define OMAnim_FunctionalAnalysisPkg_EmulateBasicGearingPkg_Uc_EmulateBasicGearing_setGear_Real_UNSERIALIZE_ARGS OP_UNSER(OMDestructiveString2X,p_gear)

#define OMAnim_FunctionalAnalysisPkg_EmulateBasicGearingPkg_Uc_EmulateBasicGearing_setGear_Real_SERIALIZE_RET_VAL

#define OMAnim_FunctionalAnalysisPkg_EmulateBasicGearingPkg_Uc_EmulateBasicGearing_setResistance_Real_UNSERIALIZE_ARGS OP_UNSER(OMDestructiveString2X,p_resistance)

#define OMAnim_FunctionalAnalysisPkg_EmulateBasicGearingPkg_Uc_EmulateBasicGearing_setResistance_Real_SERIALIZE_RET_VAL
//#]

//## package FunctionalAnalysisPkg::EmulateBasicGearingPkg

//## class Uc_EmulateBasicGearing
//#[ ignore
Uc_EmulateBasicGearing::paEBG_TrainingApp_C::paEBG_TrainingApp_C() : _p_(0) {
    itsGearing_ProxyReceptionInterface = NULL;
}

Uc_EmulateBasicGearing::paEBG_TrainingApp_C::~paEBG_TrainingApp_C() {
    cleanUpRelations();
}

gearing_ProxyReceptionInterface* Uc_EmulateBasicGearing::paEBG_TrainingApp_C::getItsGearing_ProxyReceptionInterface() {
    return this;
}

gearing_ProxyReceptionInterface* Uc_EmulateBasicGearing::paEBG_TrainingApp_C::getOutBound() {
    return this;
}

bool Uc_EmulateBasicGearing::paEBG_TrainingApp_C::send(IOxfEvent* event, const IOxfEventGenerationParams& params) {
    bool res = false;
    if (event != NULL) {
        if (itsGearing_ProxyReceptionInterface != NULL) {
            if (event->isTypeOf(gearing_EmulateBasicGearingInterfacesPkg_EmulateBasicGearingPkg_FunctionalAnalysisPkg_id)) {
                res = itsGearing_ProxyReceptionInterface->send(event, params);
            }
        }
    }
    return res;
    
}

bool Uc_EmulateBasicGearing::paEBG_TrainingApp_C::send(IOxfEvent* event) {
    bool res = false;
    if (event != NULL) {
        if (itsGearing_ProxyReceptionInterface != NULL) {
            if (event->isTypeOf(gearing_EmulateBasicGearingInterfacesPkg_EmulateBasicGearingPkg_FunctionalAnalysisPkg_id)) {
                res = itsGearing_ProxyReceptionInterface->send(event);
            }
        }
    }
    return res;
    
}

void Uc_EmulateBasicGearing::paEBG_TrainingApp_C::setItsGearing_ProxyReceptionInterface(OMReactive* p_OMReactive) {
    itsGearing_ProxyReceptionInterface = p_OMReactive;
}

void Uc_EmulateBasicGearing::paEBG_TrainingApp_C::cleanUpRelations() {
    if(itsGearing_ProxyReceptionInterface != NULL)
        {
            itsGearing_ProxyReceptionInterface = NULL;
        }
}

Uc_EmulateBasicGearing::paEBG_Rider_C::InBound_C::InBound_C() {
    itsDecrementGear_ProxyReceptionInterface = NULL;
    itsIncrementGear_ProxyReceptionInterface = NULL;
    itsReal_appliedTorque_ProxyFlowPropertyInterface = NULL;
    port = NULL;
}

Uc_EmulateBasicGearing::paEBG_Rider_C::InBound_C::~InBound_C() {
    cleanUpRelations();
}

bool Uc_EmulateBasicGearing::paEBG_Rider_C::InBound_C::send(IOxfEvent* event, const IOxfEventGenerationParams& params) {
    bool res = false;
    if (event != NULL) {
        event->setPort(getPort());
        if (itsDecrementGear_ProxyReceptionInterface != NULL) {
            if (event->isTypeOf(decrementGear_EmulateBasicGearingInterfacesPkg_EmulateBasicGearingPkg_FunctionalAnalysisPkg_id)) {
                res = itsDecrementGear_ProxyReceptionInterface->send(event, params);
                return res;
            }
        }
        if (itsIncrementGear_ProxyReceptionInterface != NULL) {
            if (event->isTypeOf(incrementGear_EmulateBasicGearingInterfacesPkg_EmulateBasicGearingPkg_FunctionalAnalysisPkg_id)) {
                res = itsIncrementGear_ProxyReceptionInterface->send(event, params);
                return res;
            }
        }
    }
    return res;
    
}

bool Uc_EmulateBasicGearing::paEBG_Rider_C::InBound_C::send(IOxfEvent* event) {
    bool res = false;
    if (event != NULL) {
        event->setPort(getPort());
        if (itsDecrementGear_ProxyReceptionInterface != NULL) {
            if (event->isTypeOf(decrementGear_EmulateBasicGearingInterfacesPkg_EmulateBasicGearingPkg_FunctionalAnalysisPkg_id)) {
                res = itsDecrementGear_ProxyReceptionInterface->send(event);
                return res;
            }
        }
        if (itsIncrementGear_ProxyReceptionInterface != NULL) {
            if (event->isTypeOf(incrementGear_EmulateBasicGearingInterfacesPkg_EmulateBasicGearingPkg_FunctionalAnalysisPkg_id)) {
                res = itsIncrementGear_ProxyReceptionInterface->send(event);
                return res;
            }
        }
    }
    return res;
    
}

void Uc_EmulateBasicGearing::paEBG_Rider_C::InBound_C::setAppliedTorque(Real p_appliedTorque) {
    
    if (itsReal_appliedTorque_ProxyFlowPropertyInterface != NULL) {
        itsReal_appliedTorque_ProxyFlowPropertyInterface->setAppliedTorque(p_appliedTorque);
    }
    
}

void Uc_EmulateBasicGearing::paEBG_Rider_C::InBound_C::setItsDecrementGear_ProxyReceptionInterface(decrementGear_ProxyReceptionInterface* p_decrementGear_ProxyReceptionInterface) {
    itsDecrementGear_ProxyReceptionInterface = p_decrementGear_ProxyReceptionInterface;
}

void Uc_EmulateBasicGearing::paEBG_Rider_C::InBound_C::setItsIncrementGear_ProxyReceptionInterface(incrementGear_ProxyReceptionInterface* p_incrementGear_ProxyReceptionInterface) {
    itsIncrementGear_ProxyReceptionInterface = p_incrementGear_ProxyReceptionInterface;
}

void Uc_EmulateBasicGearing::paEBG_Rider_C::InBound_C::setItsReal_appliedTorque_ProxyFlowPropertyInterface(Real_appliedTorque_ProxyFlowPropertyInterface* p_Real_appliedTorque_ProxyFlowPropertyInterface) {
    itsReal_appliedTorque_ProxyFlowPropertyInterface = p_Real_appliedTorque_ProxyFlowPropertyInterface;
}

Uc_EmulateBasicGearing::paEBG_Rider_C* Uc_EmulateBasicGearing::paEBG_Rider_C::InBound_C::getPort() const {
    return port;
}

void Uc_EmulateBasicGearing::paEBG_Rider_C::InBound_C::setPort(Uc_EmulateBasicGearing::paEBG_Rider_C* p_paEBG_Rider_C) {
    _setPort(p_paEBG_Rider_C);
}

void Uc_EmulateBasicGearing::paEBG_Rider_C::InBound_C::cleanUpRelations() {
    if(itsDecrementGear_ProxyReceptionInterface != NULL)
        {
            itsDecrementGear_ProxyReceptionInterface = NULL;
        }
    if(itsIncrementGear_ProxyReceptionInterface != NULL)
        {
            itsIncrementGear_ProxyReceptionInterface = NULL;
        }
    if(itsReal_appliedTorque_ProxyFlowPropertyInterface != NULL)
        {
            itsReal_appliedTorque_ProxyFlowPropertyInterface = NULL;
        }
    if(port != NULL)
        {
            port = NULL;
        }
}

void Uc_EmulateBasicGearing::paEBG_Rider_C::InBound_C::__setPort(Uc_EmulateBasicGearing::paEBG_Rider_C* p_paEBG_Rider_C) {
    port = p_paEBG_Rider_C;
}

void Uc_EmulateBasicGearing::paEBG_Rider_C::InBound_C::_setPort(Uc_EmulateBasicGearing::paEBG_Rider_C* p_paEBG_Rider_C) {
    __setPort(p_paEBG_Rider_C);
}

void Uc_EmulateBasicGearing::paEBG_Rider_C::InBound_C::_clearPort() {
    port = NULL;
}

Uc_EmulateBasicGearing::paEBG_Rider_C::OutBound_C::OutBound_C() {
    itsReal_resistance_ProxyFlowPropertyInterface = NULL;
}

Uc_EmulateBasicGearing::paEBG_Rider_C::OutBound_C::~OutBound_C() {
    cleanUpRelations();
}

void Uc_EmulateBasicGearing::paEBG_Rider_C::OutBound_C::setResistance(Real p_resistance) {
    
    if (itsReal_resistance_ProxyFlowPropertyInterface != NULL) {
        itsReal_resistance_ProxyFlowPropertyInterface->setResistance(p_resistance);
    }
    
}

void Uc_EmulateBasicGearing::paEBG_Rider_C::OutBound_C::setItsReal_resistance_ProxyFlowPropertyInterface(Real_resistance_ProxyFlowPropertyInterface* p_Real_resistance_ProxyFlowPropertyInterface) {
    itsReal_resistance_ProxyFlowPropertyInterface = p_Real_resistance_ProxyFlowPropertyInterface;
}

void Uc_EmulateBasicGearing::paEBG_Rider_C::OutBound_C::cleanUpRelations() {
    if(itsReal_resistance_ProxyFlowPropertyInterface != NULL)
        {
            itsReal_resistance_ProxyFlowPropertyInterface = NULL;
        }
}

Uc_EmulateBasicGearing::paEBG_Rider_C::paEBG_Rider_C() : _p_(0) {
    initRelations();
}

Uc_EmulateBasicGearing::paEBG_Rider_C::~paEBG_Rider_C() {
}

void Uc_EmulateBasicGearing::paEBG_Rider_C::connectUc_EmulateBasicGearing(Uc_EmulateBasicGearing* part) {
    InBound.setItsDecrementGear_ProxyReceptionInterface(part);
    InBound.setItsIncrementGear_ProxyReceptionInterface(part);
    InBound.setItsReal_appliedTorque_ProxyFlowPropertyInterface(part);
    InBound.setPort(this); // for IS_PORT macro support
    
}

decrementGear_ProxyReceptionInterface* Uc_EmulateBasicGearing::paEBG_Rider_C::getItsDecrementGear_ProxyReceptionInterface() {
    return &InBound;
}

incrementGear_ProxyReceptionInterface* Uc_EmulateBasicGearing::paEBG_Rider_C::getItsIncrementGear_ProxyReceptionInterface() {
    return &InBound;
}

Real_appliedTorque_ProxyFlowPropertyInterface* Uc_EmulateBasicGearing::paEBG_Rider_C::getItsReal_appliedTorque_ProxyFlowPropertyInterface() {
    return &InBound;
}

Real_resistance_ProxyFlowPropertyInterface* Uc_EmulateBasicGearing::paEBG_Rider_C::getItsReal_resistance_ProxyFlowPropertyInterface() {
    return &OutBound;
}

void Uc_EmulateBasicGearing::paEBG_Rider_C::setItsDecrementGear_ProxyReceptionInterface(decrementGear_ProxyReceptionInterface* p_decrementGear_ProxyReceptionInterface) {
    InBound.setItsDecrementGear_ProxyReceptionInterface(p_decrementGear_ProxyReceptionInterface);
}

void Uc_EmulateBasicGearing::paEBG_Rider_C::setItsIncrementGear_ProxyReceptionInterface(incrementGear_ProxyReceptionInterface* p_incrementGear_ProxyReceptionInterface) {
    InBound.setItsIncrementGear_ProxyReceptionInterface(p_incrementGear_ProxyReceptionInterface);
}

void Uc_EmulateBasicGearing::paEBG_Rider_C::setItsReal_appliedTorque_ProxyFlowPropertyInterface(Real_appliedTorque_ProxyFlowPropertyInterface* p_Real_appliedTorque_ProxyFlowPropertyInterface) {
    InBound.setItsReal_appliedTorque_ProxyFlowPropertyInterface(p_Real_appliedTorque_ProxyFlowPropertyInterface);
}

void Uc_EmulateBasicGearing::paEBG_Rider_C::setItsReal_resistance_ProxyFlowPropertyInterface(Real_resistance_ProxyFlowPropertyInterface* p_Real_resistance_ProxyFlowPropertyInterface) {
    OutBound.setItsReal_resistance_ProxyFlowPropertyInterface(p_Real_resistance_ProxyFlowPropertyInterface);
}

Uc_EmulateBasicGearing::paEBG_Rider_C::InBound_C* Uc_EmulateBasicGearing::paEBG_Rider_C::getInBound() const {
    return (Uc_EmulateBasicGearing::paEBG_Rider_C::InBound_C*) &InBound;
}

Uc_EmulateBasicGearing::paEBG_Rider_C::OutBound_C* Uc_EmulateBasicGearing::paEBG_Rider_C::getOutBound() const {
    return (Uc_EmulateBasicGearing::paEBG_Rider_C::OutBound_C*) &OutBound;
}

void Uc_EmulateBasicGearing::paEBG_Rider_C::initRelations() {
    InBound._setPort(this);
}

void Uc_EmulateBasicGearing::paEBG_Rider_C::destroy() {
}
//#]

Uc_EmulateBasicGearing::Uc_EmulateBasicGearing(IOxfActive* theActiveContext) {
    NOTIFY_REACTIVE_CONSTRUCTOR(Uc_EmulateBasicGearing, Uc_EmulateBasicGearing(), 0, FunctionalAnalysisPkg_EmulateBasicGearingPkg_Uc_EmulateBasicGearing_Uc_EmulateBasicGearing_SERIALIZE);
    setActiveContext(theActiveContext, false);
    initRelations();
    initStatechart();
}

Uc_EmulateBasicGearing::~Uc_EmulateBasicGearing() {
    NOTIFY_DESTRUCTOR(~Uc_EmulateBasicGearing, true);
}

void Uc_EmulateBasicGearing::applyResistance() {
    NOTIFY_OPERATION(applyResistance, applyResistance(), 0, FunctionalAnalysisPkg_EmulateBasicGearingPkg_Uc_EmulateBasicGearing_applyResistance_SERIALIZE);
    //#[ operation applyResistance()
    setResistance(gear *100);
    //#]
}

void Uc_EmulateBasicGearing::changeGear(Real newGear) {
    NOTIFY_OPERATION(changeGear, changeGear(Real), 1, FunctionalAnalysisPkg_EmulateBasicGearingPkg_Uc_EmulateBasicGearing_changeGear_SERIALIZE);
    //#[ operation changeGear(Real)
    setGear(gear + newGear);
    //#]
}

RhpBoolean Uc_EmulateBasicGearing::checkGearing(Real newGear) {
    NOTIFY_OPERATION(checkGearing, checkGearing(Real), 1, FunctionalAnalysisPkg_EmulateBasicGearingPkg_Uc_EmulateBasicGearing_checkGearing_SERIALIZE);
    //#[ operation checkGearing(Real)
    return (newGear <= MAX_GEARING) && (newGear >= MIN_GEARING);
    //#]
}

void Uc_EmulateBasicGearing::computeResistance() {
    NOTIFY_OPERATION(computeResistance, computeResistance(), 0, FunctionalAnalysisPkg_EmulateBasicGearingPkg_Uc_EmulateBasicGearing_computeResistance_SERIALIZE);
    //#[ operation computeResistance()
    //#]
}

//#[ ignore
void Uc_EmulateBasicGearing::setAppliedTorque(Real p_appliedTorque) {
    if (appliedTorque != p_appliedTorque) {
        appliedTorque = p_appliedTorque;
        FLOW_DATA_RECEIVE("appliedTorque", appliedTorque, x2String);
        GEN(chAppliedTorque);
    }
    
}

void Uc_EmulateBasicGearing::setResistance(Real p_resistance) {
    if (resistance != p_resistance)  {
        resistance = p_resistance;
        FLOW_DATA_SEND(resistance, paEBG_Rider, setResistance, x2String);
    }
}
//#]

Uc_EmulateBasicGearing::paEBG_TrainingApp_C* Uc_EmulateBasicGearing::getPaEBG_TrainingApp() const {
    return (Uc_EmulateBasicGearing::paEBG_TrainingApp_C*) &paEBG_TrainingApp;
}

Uc_EmulateBasicGearing::paEBG_TrainingApp_C* Uc_EmulateBasicGearing::get_paEBG_TrainingApp() const {
    return (Uc_EmulateBasicGearing::paEBG_TrainingApp_C*) &paEBG_TrainingApp;
}

Uc_EmulateBasicGearing::paEBG_Rider_C* Uc_EmulateBasicGearing::getPaEBG_Rider() const {
    return (Uc_EmulateBasicGearing::paEBG_Rider_C*) &paEBG_Rider;
}

Uc_EmulateBasicGearing::paEBG_Rider_C* Uc_EmulateBasicGearing::get_paEBG_Rider() const {
    return (Uc_EmulateBasicGearing::paEBG_Rider_C*) &paEBG_Rider;
}

Real Uc_EmulateBasicGearing::getAppliedTorque() const {
    return appliedTorque;
}

Real Uc_EmulateBasicGearing::getGear() const {
    return gear;
}

void Uc_EmulateBasicGearing::setGear(Real p_gear) {
    gear = p_gear;
    NOTIFY_SET_OPERATION;
}

Real Uc_EmulateBasicGearing::getResistance() const {
    return resistance;
}

bool Uc_EmulateBasicGearing::startBehavior() {
    bool done = false;
    done = OMReactive::startBehavior();
    return done;
}

void Uc_EmulateBasicGearing::initRelations() {
    if (get_paEBG_Rider() != NULL) {
        get_paEBG_Rider()->connectUc_EmulateBasicGearing(this);
    }
}

void Uc_EmulateBasicGearing::initStatechart() {
    rootState_subState = OMNonState;
    rootState_active = OMNonState;
    BasicGearing_subState = OMNonState;
    BasicGearing_lastState = OMNonState;
}

void Uc_EmulateBasicGearing::rootState_entDef() {
    {
        NOTIFY_STATE_ENTERED("ROOT");
        NOTIFY_TRANSITION_STARTED("14");
        //#[ transition 14 
        gear = DEFAULT_GEARING;
        //#]
        BasicGearing_entDef();
        NOTIFY_TRANSITION_TERMINATED("14");
    }
}

IOxfReactive::TakeEventStatus Uc_EmulateBasicGearing::rootState_processEvent() {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    switch (rootState_active) {
        // State Idle
        case Idle:
        {
            res = Idle_handleEvent();
        }
        break;
        // State TorqueApplied
        case TorqueApplied:
        {
            res = TorqueApplied_handleEvent();
        }
        break;
        // State sendaction_5
        case sendaction_5:
        {
            res = sendaction_5_handleEvent();
        }
        break;
        // State sendaction_3
        case sendaction_3:
        {
            if(IS_EVENT_TYPE_OF(OMNullEventId))
                {
                    NOTIFY_TRANSITION_STARTED("8");
                    popNullTransition();
                    NOTIFY_STATE_EXITED("ROOT.sendaction_3");
                    //#[ transition 8 
                     applyResistance();
                    //#]
                    BasicGearing_entDef();
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

void Uc_EmulateBasicGearing::BasicGearing_entDef() {
    NOTIFY_STATE_ENTERED("ROOT.BasicGearing");
    rootState_subState = BasicGearing;
    BasicGearingEntDef();
}

void Uc_EmulateBasicGearing::BasicGearingEntDef() {
    NOTIFY_TRANSITION_STARTED("0");
    BasicGearing_entShallowHist();
    NOTIFY_TRANSITION_TERMINATED("0");
}

void Uc_EmulateBasicGearing::BasicGearing_exit() {
    BasicGearing_lastState = BasicGearing_subState;
    switch (BasicGearing_subState) {
        // State Idle
        case Idle:
        {
            NOTIFY_STATE_EXITED("ROOT.BasicGearing.Idle");
            BasicGearing_lastState = Idle;
        }
        break;
        // State TorqueApplied
        case TorqueApplied:
        {
            NOTIFY_STATE_EXITED("ROOT.BasicGearing.TorqueApplied");
            BasicGearing_lastState = TorqueApplied;
        }
        break;
        // State sendaction_5
        case sendaction_5:
        {
            popNullTransition();
            NOTIFY_STATE_EXITED("ROOT.BasicGearing.sendaction_5");
            BasicGearing_lastState = sendaction_5;
        }
        break;
        default:
            break;
    }
    BasicGearing_subState = OMNonState;
    
    NOTIFY_STATE_EXITED("ROOT.BasicGearing");
}

void Uc_EmulateBasicGearing::BasicGearing_entShallowHist() {
    if(BasicGearing_lastState == OMNonState)
        {
            NOTIFY_TRANSITION_STARTED("13");
            NOTIFY_STATE_ENTERED("ROOT.BasicGearing.sendaction_5");
            pushNullTransition();
            BasicGearing_subState = sendaction_5;
            rootState_active = sendaction_5;
            //#[ state BasicGearing.sendaction_5.(Entry) 
            OUT_PORT(paEBG_TrainingApp)->GEN(gearing(gear));
            //#]
            NOTIFY_TRANSITION_TERMINATED("13");
        }
    else
        {
            BasicGearing_subState = BasicGearing_lastState;
            switch (BasicGearing_subState) {
                case Idle:
                {
                    NOTIFY_STATE_ENTERED("ROOT.BasicGearing.Idle");
                    BasicGearing_subState = Idle;
                    rootState_active = Idle;
                }
                break;
                case TorqueApplied:
                {
                    NOTIFY_STATE_ENTERED("ROOT.BasicGearing.TorqueApplied");
                    BasicGearing_subState = TorqueApplied;
                    rootState_active = TorqueApplied;
                }
                break;
                case sendaction_5:
                {
                    NOTIFY_STATE_ENTERED("ROOT.BasicGearing.sendaction_5");
                    pushNullTransition();
                    BasicGearing_subState = sendaction_5;
                    rootState_active = sendaction_5;
                    //#[ state BasicGearing.sendaction_5.(Entry) 
                    OUT_PORT(paEBG_TrainingApp)->GEN(gearing(gear));
                    //#]
                }
                break;
                default:
                    break;
            }
        }
}

IOxfReactive::TakeEventStatus Uc_EmulateBasicGearing::BasicGearingTakeincrementGear() {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    //## transition 3 
    if(checkGearing(gear+GEAR_INCREMENT))
        {
            NOTIFY_TRANSITION_STARTED("2");
            NOTIFY_TRANSITION_STARTED("3");
            BasicGearing_exit();
            //#[ transition 3 
            
            changeGear(GEAR_INCREMENT);
            //#]
            NOTIFY_STATE_ENTERED("ROOT.sendaction_3");
            pushNullTransition();
            rootState_subState = sendaction_3;
            rootState_active = sendaction_3;
            //#[ state sendaction_3.(Entry) 
            OUT_PORT(paEBG_TrainingApp)->GEN(gearing(gear));
            //#]
            NOTIFY_TRANSITION_TERMINATED("3");
            NOTIFY_TRANSITION_TERMINATED("2");
            res = eventConsumed;
        }
    else
        {
            NOTIFY_TRANSITION_STARTED("2");
            NOTIFY_TRANSITION_STARTED("4");
            BasicGearing_exit();
            BasicGearing_entDef();
            NOTIFY_TRANSITION_TERMINATED("4");
            NOTIFY_TRANSITION_TERMINATED("2");
            res = eventConsumed;
        }
    return res;
}

IOxfReactive::TakeEventStatus Uc_EmulateBasicGearing::BasicGearingTakedecrementGear() {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    //## transition 6 
    if(checkGearing(gear-GEAR_INCREMENT))
        {
            NOTIFY_TRANSITION_STARTED("5");
            NOTIFY_TRANSITION_STARTED("6");
            BasicGearing_exit();
            //#[ transition 6 
            
            changeGear(-GEAR_INCREMENT);
            //#]
            NOTIFY_STATE_ENTERED("ROOT.sendaction_3");
            pushNullTransition();
            rootState_subState = sendaction_3;
            rootState_active = sendaction_3;
            //#[ state sendaction_3.(Entry) 
            OUT_PORT(paEBG_TrainingApp)->GEN(gearing(gear));
            //#]
            NOTIFY_TRANSITION_TERMINATED("6");
            NOTIFY_TRANSITION_TERMINATED("5");
            res = eventConsumed;
        }
    else
        {
            NOTIFY_TRANSITION_STARTED("5");
            NOTIFY_TRANSITION_STARTED("7");
            BasicGearing_exit();
            BasicGearing_entDef();
            NOTIFY_TRANSITION_TERMINATED("7");
            NOTIFY_TRANSITION_TERMINATED("5");
            res = eventConsumed;
        }
    return res;
}

IOxfReactive::TakeEventStatus Uc_EmulateBasicGearing::BasicGearing_handleEvent() {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    if(IS_EVENT_TYPE_OF(decrementGear_EmulateBasicGearingInterfacesPkg_EmulateBasicGearingPkg_FunctionalAnalysisPkg_id))
        {
            res = BasicGearingTakedecrementGear();
        }
    else if(IS_EVENT_TYPE_OF(incrementGear_EmulateBasicGearingInterfacesPkg_EmulateBasicGearingPkg_FunctionalAnalysisPkg_id))
        {
            res = BasicGearingTakeincrementGear();
        }
    
    return res;
}

IOxfReactive::TakeEventStatus Uc_EmulateBasicGearing::TorqueApplied_handleEvent() {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    if(IS_EVENT_TYPE_OF(chAppliedTorque_EmulateBasicGearingPkg_FunctionalAnalysisPkg_id))
        {
            //## transition 11 
            if(appliedTorque == 0)
                {
                    NOTIFY_TRANSITION_STARTED("10");
                    NOTIFY_TRANSITION_STARTED("11");
                    NOTIFY_STATE_EXITED("ROOT.BasicGearing.TorqueApplied");
                    //#[ transition 10 
                    
                    applyResistance();
                    //#]
                    NOTIFY_STATE_ENTERED("ROOT.BasicGearing.Idle");
                    BasicGearing_subState = Idle;
                    rootState_active = Idle;
                    NOTIFY_TRANSITION_TERMINATED("11");
                    NOTIFY_TRANSITION_TERMINATED("10");
                    res = eventConsumed;
                }
            else
                {
                    NOTIFY_TRANSITION_STARTED("10");
                    NOTIFY_TRANSITION_STARTED("12");
                    NOTIFY_STATE_EXITED("ROOT.BasicGearing.TorqueApplied");
                    //#[ transition 10 
                    
                    applyResistance();
                    //#]
                    NOTIFY_STATE_ENTERED("ROOT.BasicGearing.TorqueApplied");
                    BasicGearing_subState = TorqueApplied;
                    rootState_active = TorqueApplied;
                    NOTIFY_TRANSITION_TERMINATED("12");
                    NOTIFY_TRANSITION_TERMINATED("10");
                    res = eventConsumed;
                }
        }
    
    if(res == eventNotConsumed)
        {
            res = BasicGearing_handleEvent();
        }
    return res;
}

IOxfReactive::TakeEventStatus Uc_EmulateBasicGearing::sendaction_5_handleEvent() {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    if(IS_EVENT_TYPE_OF(OMNullEventId))
        {
            NOTIFY_TRANSITION_STARTED("9");
            popNullTransition();
            NOTIFY_STATE_EXITED("ROOT.BasicGearing.sendaction_5");
            NOTIFY_STATE_ENTERED("ROOT.BasicGearing.Idle");
            BasicGearing_subState = Idle;
            rootState_active = Idle;
            NOTIFY_TRANSITION_TERMINATED("9");
            res = eventConsumed;
        }
    
    if(res == eventNotConsumed)
        {
            res = BasicGearing_handleEvent();
        }
    return res;
}

IOxfReactive::TakeEventStatus Uc_EmulateBasicGearing::Idle_handleEvent() {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    if(IS_EVENT_TYPE_OF(chAppliedTorque_EmulateBasicGearingPkg_FunctionalAnalysisPkg_id))
        {
            NOTIFY_TRANSITION_STARTED("1");
            NOTIFY_STATE_EXITED("ROOT.BasicGearing.Idle");
            //#[ transition 1 
            
            applyResistance();
            //#]
            NOTIFY_STATE_ENTERED("ROOT.BasicGearing.TorqueApplied");
            BasicGearing_subState = TorqueApplied;
            rootState_active = TorqueApplied;
            NOTIFY_TRANSITION_TERMINATED("1");
            res = eventConsumed;
        }
    
    if(res == eventNotConsumed)
        {
            res = BasicGearing_handleEvent();
        }
    return res;
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedUc_EmulateBasicGearing::serializeAttributes(AOMSAttributes* aomsAttributes) const {
    aomsAttributes->addAttribute("gear", x2String(myReal->gear));
    aomsAttributes->addAttribute("appliedTorque", x2String(myReal->appliedTorque));
    aomsAttributes->addAttribute("resistance", x2String(myReal->resistance));
}

void OMAnimatedUc_EmulateBasicGearing::serializeRelations(AOMSRelations* aomsRelations) const {
}

void OMAnimatedUc_EmulateBasicGearing::rootState_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT");
    switch (myReal->rootState_subState) {
        case Uc_EmulateBasicGearing::BasicGearing:
        {
            BasicGearing_serializeStates(aomsState);
        }
        break;
        case Uc_EmulateBasicGearing::sendaction_3:
        {
            sendaction_3_serializeStates(aomsState);
        }
        break;
        default:
            break;
    }
}

void OMAnimatedUc_EmulateBasicGearing::sendaction_3_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.sendaction_3");
}

void OMAnimatedUc_EmulateBasicGearing::BasicGearing_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.BasicGearing");
    switch (myReal->BasicGearing_subState) {
        case Uc_EmulateBasicGearing::Idle:
        {
            Idle_serializeStates(aomsState);
        }
        break;
        case Uc_EmulateBasicGearing::TorqueApplied:
        {
            TorqueApplied_serializeStates(aomsState);
        }
        break;
        case Uc_EmulateBasicGearing::sendaction_5:
        {
            sendaction_5_serializeStates(aomsState);
        }
        break;
        default:
            break;
    }
}

void OMAnimatedUc_EmulateBasicGearing::TorqueApplied_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.BasicGearing.TorqueApplied");
}

void OMAnimatedUc_EmulateBasicGearing::sendaction_5_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.BasicGearing.sendaction_5");
}

void OMAnimatedUc_EmulateBasicGearing::Idle_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.BasicGearing.Idle");
}
//#]

IMPLEMENT_REACTIVE_META_P(Uc_EmulateBasicGearing, FunctionalAnalysisPkg_EmulateBasicGearingPkg, FunctionalAnalysisPkg::EmulateBasicGearingPkg, false, OMAnimatedUc_EmulateBasicGearing)

IMPLEMENT_META_OP(OMAnimatedUc_EmulateBasicGearing, FunctionalAnalysisPkg_EmulateBasicGearingPkg_Uc_EmulateBasicGearing_setAppliedTorque_Real, "setAppliedTorque", FALSE, "setAppliedTorque(Real)", 1)

IMPLEMENT_OP_CALL(FunctionalAnalysisPkg_EmulateBasicGearingPkg_Uc_EmulateBasicGearing_setAppliedTorque_Real, Uc_EmulateBasicGearing, setAppliedTorque(p_appliedTorque), NO_OP())

IMPLEMENT_META_OP(OMAnimatedUc_EmulateBasicGearing, FunctionalAnalysisPkg_EmulateBasicGearingPkg_Uc_EmulateBasicGearing_setGear_Real, "setGear", FALSE, "setGear(Real)", 1)

IMPLEMENT_OP_CALL(FunctionalAnalysisPkg_EmulateBasicGearingPkg_Uc_EmulateBasicGearing_setGear_Real, Uc_EmulateBasicGearing, setGear(p_gear), NO_OP())

IMPLEMENT_META_OP(OMAnimatedUc_EmulateBasicGearing, FunctionalAnalysisPkg_EmulateBasicGearingPkg_Uc_EmulateBasicGearing_setResistance_Real, "setResistance", FALSE, "setResistance(Real)", 1)

IMPLEMENT_OP_CALL(FunctionalAnalysisPkg_EmulateBasicGearingPkg_Uc_EmulateBasicGearing_setResistance_Real, Uc_EmulateBasicGearing, setResistance(p_resistance), NO_OP())
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: Emulate_Basic_GearingSim/Animate/Uc_EmulateBasicGearing.cpp
*********************************************************************/
