/********************************************************************
	Rhapsody	: 8.4 
	Login		: Bruce
	Component	: Emulate_Basic_GearingSim 
	Configuration 	: Animate
	Model Element	: aEBG_Rider
//!	Generated Date	: Fri, 27, Dec 2019  
	File Path	: Emulate_Basic_GearingSim/Animate/aEBG_Rider.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX

#define _OMSTATECHART_ANIMATED
//#]

//## auto_generated
#include "aEBG_Rider.h"
//## event incrementGear()
#include "EmulateBasicGearingInterfacesPkg.h"
//#[ ignore
#define FunctionalAnalysisPkg_EmulateBasicGearingPkg_EmulateBasicGearingActorPkg_aEBG_Rider_aEBG_Rider_SERIALIZE OM_NO_OP

#define OMAnim_FunctionalAnalysisPkg_EmulateBasicGearingPkg_EmulateBasicGearingActorPkg_aEBG_Rider_setAppliedTorque_Real_UNSERIALIZE_ARGS OP_UNSER(OMDestructiveString2X,p_appliedTorque)

#define OMAnim_FunctionalAnalysisPkg_EmulateBasicGearingPkg_EmulateBasicGearingActorPkg_aEBG_Rider_setAppliedTorque_Real_SERIALIZE_RET_VAL

#define OMAnim_FunctionalAnalysisPkg_EmulateBasicGearingPkg_EmulateBasicGearingActorPkg_aEBG_Rider_setResistance_Real_UNSERIALIZE_ARGS OP_UNSER(OMDestructiveString2X,p_resistance)

#define OMAnim_FunctionalAnalysisPkg_EmulateBasicGearingPkg_EmulateBasicGearingActorPkg_aEBG_Rider_setResistance_Real_SERIALIZE_RET_VAL
//#]

//## package FunctionalAnalysisPkg::EmulateBasicGearingPkg::EmulateBasicGearingActorPkg

//## class aEBG_Rider
//#[ ignore
aEBG_Rider::pUc_EmulateBasicGearing_C::InBound_C::InBound_C() {
    itsReal_resistance_ProxyFlowPropertyInterface = NULL;
    port = NULL;
}

aEBG_Rider::pUc_EmulateBasicGearing_C::InBound_C::~InBound_C() {
    cleanUpRelations();
}

void aEBG_Rider::pUc_EmulateBasicGearing_C::InBound_C::setResistance(Real p_resistance) {
    
    if (itsReal_resistance_ProxyFlowPropertyInterface != NULL) {
        itsReal_resistance_ProxyFlowPropertyInterface->setResistance(p_resistance);
    }
    
}

void aEBG_Rider::pUc_EmulateBasicGearing_C::InBound_C::setItsReal_resistance_ProxyFlowPropertyInterface(Real_resistance_ProxyFlowPropertyInterface* p_Real_resistance_ProxyFlowPropertyInterface) {
    itsReal_resistance_ProxyFlowPropertyInterface = p_Real_resistance_ProxyFlowPropertyInterface;
}

aEBG_Rider::pUc_EmulateBasicGearing_C* aEBG_Rider::pUc_EmulateBasicGearing_C::InBound_C::getPort() const {
    return port;
}

void aEBG_Rider::pUc_EmulateBasicGearing_C::InBound_C::setPort(aEBG_Rider::pUc_EmulateBasicGearing_C* p_pUc_EmulateBasicGearing_C) {
    _setPort(p_pUc_EmulateBasicGearing_C);
}

void aEBG_Rider::pUc_EmulateBasicGearing_C::InBound_C::cleanUpRelations() {
    if(itsReal_resistance_ProxyFlowPropertyInterface != NULL)
        {
            itsReal_resistance_ProxyFlowPropertyInterface = NULL;
        }
    if(port != NULL)
        {
            port = NULL;
        }
}

void aEBG_Rider::pUc_EmulateBasicGearing_C::InBound_C::__setPort(aEBG_Rider::pUc_EmulateBasicGearing_C* p_pUc_EmulateBasicGearing_C) {
    port = p_pUc_EmulateBasicGearing_C;
}

void aEBG_Rider::pUc_EmulateBasicGearing_C::InBound_C::_setPort(aEBG_Rider::pUc_EmulateBasicGearing_C* p_pUc_EmulateBasicGearing_C) {
    __setPort(p_pUc_EmulateBasicGearing_C);
}

void aEBG_Rider::pUc_EmulateBasicGearing_C::InBound_C::_clearPort() {
    port = NULL;
}

aEBG_Rider::pUc_EmulateBasicGearing_C::OutBound_C::OutBound_C() {
    itsDecrementGear_ProxyReceptionInterface = NULL;
    itsIncrementGear_ProxyReceptionInterface = NULL;
    itsReal_appliedTorque_ProxyFlowPropertyInterface = NULL;
}

aEBG_Rider::pUc_EmulateBasicGearing_C::OutBound_C::~OutBound_C() {
    cleanUpRelations();
}

bool aEBG_Rider::pUc_EmulateBasicGearing_C::OutBound_C::send(IOxfEvent* event, const IOxfEventGenerationParams& params) {
    bool res = false;
    if (event != NULL) {
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

bool aEBG_Rider::pUc_EmulateBasicGearing_C::OutBound_C::send(IOxfEvent* event) {
    bool res = false;
    if (event != NULL) {
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

void aEBG_Rider::pUc_EmulateBasicGearing_C::OutBound_C::setAppliedTorque(Real p_appliedTorque) {
    
    if (itsReal_appliedTorque_ProxyFlowPropertyInterface != NULL) {
        itsReal_appliedTorque_ProxyFlowPropertyInterface->setAppliedTorque(p_appliedTorque);
    }
    
}

void aEBG_Rider::pUc_EmulateBasicGearing_C::OutBound_C::setItsDecrementGear_ProxyReceptionInterface(OMReactive* p_OMReactive) {
    itsDecrementGear_ProxyReceptionInterface = p_OMReactive;
}

void aEBG_Rider::pUc_EmulateBasicGearing_C::OutBound_C::setItsIncrementGear_ProxyReceptionInterface(OMReactive* p_OMReactive) {
    itsIncrementGear_ProxyReceptionInterface = p_OMReactive;
}

void aEBG_Rider::pUc_EmulateBasicGearing_C::OutBound_C::setItsReal_appliedTorque_ProxyFlowPropertyInterface(Real_appliedTorque_ProxyFlowPropertyInterface* p_Real_appliedTorque_ProxyFlowPropertyInterface) {
    itsReal_appliedTorque_ProxyFlowPropertyInterface = p_Real_appliedTorque_ProxyFlowPropertyInterface;
}

void aEBG_Rider::pUc_EmulateBasicGearing_C::OutBound_C::cleanUpRelations() {
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
}

aEBG_Rider::pUc_EmulateBasicGearing_C::pUc_EmulateBasicGearing_C() : _p_(0) {
    initRelations();
}

aEBG_Rider::pUc_EmulateBasicGearing_C::~pUc_EmulateBasicGearing_C() {
}

void aEBG_Rider::pUc_EmulateBasicGearing_C::connectAEBG_Rider(aEBG_Rider* part) {
    InBound.setItsReal_resistance_ProxyFlowPropertyInterface(part);
    InBound.setPort(this); // for IS_PORT macro support
    
}

decrementGear_ProxyReceptionInterface* aEBG_Rider::pUc_EmulateBasicGearing_C::getItsDecrementGear_ProxyReceptionInterface() {
    return &OutBound;
}

incrementGear_ProxyReceptionInterface* aEBG_Rider::pUc_EmulateBasicGearing_C::getItsIncrementGear_ProxyReceptionInterface() {
    return &OutBound;
}

Real_appliedTorque_ProxyFlowPropertyInterface* aEBG_Rider::pUc_EmulateBasicGearing_C::getItsReal_appliedTorque_ProxyFlowPropertyInterface() {
    return &OutBound;
}

Real_resistance_ProxyFlowPropertyInterface* aEBG_Rider::pUc_EmulateBasicGearing_C::getItsReal_resistance_ProxyFlowPropertyInterface() {
    return &InBound;
}

void aEBG_Rider::pUc_EmulateBasicGearing_C::setItsDecrementGear_ProxyReceptionInterface(OMReactive* p_decrementGear_ProxyReceptionInterface) {
    OutBound.setItsDecrementGear_ProxyReceptionInterface(p_decrementGear_ProxyReceptionInterface);
}

void aEBG_Rider::pUc_EmulateBasicGearing_C::setItsIncrementGear_ProxyReceptionInterface(OMReactive* p_incrementGear_ProxyReceptionInterface) {
    OutBound.setItsIncrementGear_ProxyReceptionInterface(p_incrementGear_ProxyReceptionInterface);
}

void aEBG_Rider::pUc_EmulateBasicGearing_C::setItsReal_appliedTorque_ProxyFlowPropertyInterface(Real_appliedTorque_ProxyFlowPropertyInterface* p_Real_appliedTorque_ProxyFlowPropertyInterface) {
    OutBound.setItsReal_appliedTorque_ProxyFlowPropertyInterface(p_Real_appliedTorque_ProxyFlowPropertyInterface);
}

void aEBG_Rider::pUc_EmulateBasicGearing_C::setItsReal_resistance_ProxyFlowPropertyInterface(Real_resistance_ProxyFlowPropertyInterface* p_Real_resistance_ProxyFlowPropertyInterface) {
    InBound.setItsReal_resistance_ProxyFlowPropertyInterface(p_Real_resistance_ProxyFlowPropertyInterface);
}

aEBG_Rider::pUc_EmulateBasicGearing_C::InBound_C* aEBG_Rider::pUc_EmulateBasicGearing_C::getInBound() const {
    return (aEBG_Rider::pUc_EmulateBasicGearing_C::InBound_C*) &InBound;
}

aEBG_Rider::pUc_EmulateBasicGearing_C::OutBound_C* aEBG_Rider::pUc_EmulateBasicGearing_C::getOutBound() const {
    return (aEBG_Rider::pUc_EmulateBasicGearing_C::OutBound_C*) &OutBound;
}

void aEBG_Rider::pUc_EmulateBasicGearing_C::initRelations() {
    InBound._setPort(this);
}

void aEBG_Rider::pUc_EmulateBasicGearing_C::destroy() {
}
//#]

aEBG_Rider::aEBG_Rider(IOxfActive* theActiveContext) {
    NOTIFY_REACTIVE_CONSTRUCTOR(aEBG_Rider, aEBG_Rider(), 0, FunctionalAnalysisPkg_EmulateBasicGearingPkg_EmulateBasicGearingActorPkg_aEBG_Rider_aEBG_Rider_SERIALIZE);
    setActiveContext(theActiveContext, false);
    initRelations();
    initStatechart();
}

aEBG_Rider::~aEBG_Rider() {
    NOTIFY_DESTRUCTOR(~aEBG_Rider, true);
}

//#[ ignore
void aEBG_Rider::setAppliedTorque(Real p_appliedTorque) {
    if (appliedTorque != p_appliedTorque)  {
        appliedTorque = p_appliedTorque;
        FLOW_DATA_SEND(appliedTorque, pUc_EmulateBasicGearing, setAppliedTorque, x2String);
    }
}

void aEBG_Rider::setResistance(Real p_resistance) {
    if (resistance != p_resistance) {
        resistance = p_resistance;
        FLOW_DATA_RECEIVE("resistance", resistance, x2String);
        GEN(chResistance);
    }
    
}
//#]

aEBG_Rider::pUc_EmulateBasicGearing_C* aEBG_Rider::getPUc_EmulateBasicGearing() const {
    return (aEBG_Rider::pUc_EmulateBasicGearing_C*) &pUc_EmulateBasicGearing;
}

aEBG_Rider::pUc_EmulateBasicGearing_C* aEBG_Rider::get_pUc_EmulateBasicGearing() const {
    return (aEBG_Rider::pUc_EmulateBasicGearing_C*) &pUc_EmulateBasicGearing;
}

Real aEBG_Rider::getAppliedTorque() const {
    return appliedTorque;
}

Real aEBG_Rider::getResistance() const {
    return resistance;
}

bool aEBG_Rider::startBehavior() {
    bool done = false;
    done = OMReactive::startBehavior();
    return done;
}

void aEBG_Rider::initRelations() {
    if (get_pUc_EmulateBasicGearing() != NULL) {
        get_pUc_EmulateBasicGearing()->connectAEBG_Rider(this);
    }
}

void aEBG_Rider::initStatechart() {
    rootState_subState = OMNonState;
    rootState_active = OMNonState;
}

void aEBG_Rider::rootState_entDef() {
    {
        NOTIFY_STATE_ENTERED("ROOT");
        NOTIFY_TRANSITION_STARTED("0");
        NOTIFY_STATE_ENTERED("ROOT.Riding");
        rootState_subState = Riding;
        rootState_active = Riding;
        NOTIFY_TRANSITION_TERMINATED("0");
    }
}

IOxfReactive::TakeEventStatus aEBG_Rider::rootState_processEvent() {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    switch (rootState_active) {
        // State Riding
        case Riding:
        {
            if(IS_EVENT_TYPE_OF(exAugment_EmulateBasicGearingActorPkg_EmulateBasicGearingPkg_FunctionalAnalysisPkg_id))
                {
                    NOTIFY_TRANSITION_STARTED("2");
                    NOTIFY_STATE_EXITED("ROOT.Riding");
                    NOTIFY_STATE_ENTERED("ROOT.sendaction_1");
                    pushNullTransition();
                    rootState_subState = sendaction_1;
                    rootState_active = sendaction_1;
                    //#[ state sendaction_1.(Entry) 
                    OUT_PORT(pUc_EmulateBasicGearing)->GEN(incrementGear);
                    //#]
                    NOTIFY_TRANSITION_TERMINATED("2");
                    res = eventConsumed;
                }
            else if(IS_EVENT_TYPE_OF(chResistance_EmulateBasicGearingActorPkg_EmulateBasicGearingPkg_FunctionalAnalysisPkg_id))
                {
                    NOTIFY_TRANSITION_STARTED("1");
                    NOTIFY_STATE_EXITED("ROOT.Riding");
                    //#[ transition 1 
                    
                    std::cout << "resistance is now " << resistance << std::endl;
                    //#]
                    NOTIFY_STATE_ENTERED("ROOT.Riding");
                    rootState_subState = Riding;
                    rootState_active = Riding;
                    NOTIFY_TRANSITION_TERMINATED("1");
                    res = eventConsumed;
                }
            else if(IS_EVENT_TYPE_OF(exDecrement_EmulateBasicGearingActorPkg_EmulateBasicGearingPkg_FunctionalAnalysisPkg_id))
                {
                    NOTIFY_TRANSITION_STARTED("4");
                    NOTIFY_STATE_EXITED("ROOT.Riding");
                    NOTIFY_STATE_ENTERED("ROOT.sendaction_2");
                    pushNullTransition();
                    rootState_subState = sendaction_2;
                    rootState_active = sendaction_2;
                    //#[ state sendaction_2.(Entry) 
                    OUT_PORT(pUc_EmulateBasicGearing)->GEN(decrementGear);
                    //#]
                    NOTIFY_TRANSITION_TERMINATED("4");
                    res = eventConsumed;
                }
            
        }
        break;
        // State sendaction_1
        case sendaction_1:
        {
            if(IS_EVENT_TYPE_OF(OMNullEventId))
                {
                    NOTIFY_TRANSITION_STARTED("3");
                    popNullTransition();
                    NOTIFY_STATE_EXITED("ROOT.sendaction_1");
                    NOTIFY_STATE_ENTERED("ROOT.Riding");
                    rootState_subState = Riding;
                    rootState_active = Riding;
                    NOTIFY_TRANSITION_TERMINATED("3");
                    res = eventConsumed;
                }
            
        }
        break;
        // State sendaction_2
        case sendaction_2:
        {
            if(IS_EVENT_TYPE_OF(OMNullEventId))
                {
                    NOTIFY_TRANSITION_STARTED("5");
                    popNullTransition();
                    NOTIFY_STATE_EXITED("ROOT.sendaction_2");
                    NOTIFY_STATE_ENTERED("ROOT.Riding");
                    rootState_subState = Riding;
                    rootState_active = Riding;
                    NOTIFY_TRANSITION_TERMINATED("5");
                    res = eventConsumed;
                }
            
        }
        break;
        default:
            break;
    }
    return res;
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedaEBG_Rider::serializeAttributes(AOMSAttributes* aomsAttributes) const {
    aomsAttributes->addAttribute("appliedTorque", x2String(myReal->appliedTorque));
    aomsAttributes->addAttribute("resistance", x2String(myReal->resistance));
}

void OMAnimatedaEBG_Rider::serializeRelations(AOMSRelations* aomsRelations) const {
}

void OMAnimatedaEBG_Rider::rootState_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT");
    switch (myReal->rootState_subState) {
        case aEBG_Rider::Riding:
        {
            Riding_serializeStates(aomsState);
        }
        break;
        case aEBG_Rider::sendaction_1:
        {
            sendaction_1_serializeStates(aomsState);
        }
        break;
        case aEBG_Rider::sendaction_2:
        {
            sendaction_2_serializeStates(aomsState);
        }
        break;
        default:
            break;
    }
}

void OMAnimatedaEBG_Rider::sendaction_2_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.sendaction_2");
}

void OMAnimatedaEBG_Rider::sendaction_1_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.sendaction_1");
}

void OMAnimatedaEBG_Rider::Riding_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.Riding");
}
//#]

IMPLEMENT_REACTIVE_META_P(aEBG_Rider, FunctionalAnalysisPkg_EmulateBasicGearingPkg_EmulateBasicGearingActorPkg, FunctionalAnalysisPkg::EmulateBasicGearingPkg::EmulateBasicGearingActorPkg, false, OMAnimatedaEBG_Rider)

IMPLEMENT_META_OP(OMAnimatedaEBG_Rider, FunctionalAnalysisPkg_EmulateBasicGearingPkg_EmulateBasicGearingActorPkg_aEBG_Rider_setAppliedTorque_Real, "setAppliedTorque", FALSE, "setAppliedTorque(Real)", 1)

IMPLEMENT_OP_CALL(FunctionalAnalysisPkg_EmulateBasicGearingPkg_EmulateBasicGearingActorPkg_aEBG_Rider_setAppliedTorque_Real, aEBG_Rider, setAppliedTorque(p_appliedTorque), NO_OP())

IMPLEMENT_META_OP(OMAnimatedaEBG_Rider, FunctionalAnalysisPkg_EmulateBasicGearingPkg_EmulateBasicGearingActorPkg_aEBG_Rider_setResistance_Real, "setResistance", FALSE, "setResistance(Real)", 1)

IMPLEMENT_OP_CALL(FunctionalAnalysisPkg_EmulateBasicGearingPkg_EmulateBasicGearingActorPkg_aEBG_Rider_setResistance_Real, aEBG_Rider, setResistance(p_resistance), NO_OP())
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: Emulate_Basic_GearingSim/Animate/aEBG_Rider.cpp
*********************************************************************/
