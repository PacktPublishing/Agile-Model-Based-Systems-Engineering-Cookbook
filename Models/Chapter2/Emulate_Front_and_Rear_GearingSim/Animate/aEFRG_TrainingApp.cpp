/********************************************************************
	Rhapsody	: 8.4 
	Login		: Bruce
	Component	: Emulate_Front_and_Rear_GearingSim 
	Configuration 	: Animate
	Model Element	: aEFRG_TrainingApp
//!	Generated Date	: Mon, 2, Mar 2020  
	File Path	: Emulate_Front_and_Rear_GearingSim/Animate/aEFRG_TrainingApp.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX

#define _OMSTATECHART_ANIMATED
//#]

//## auto_generated
#include "aEFRG_TrainingApp.h"
//#[ ignore
#define FunctionalAnalysisPkg_EmulateFrontandRearGearingPkg_EmulateFrontandRearGearingActorPkg_aEFRG_TrainingApp_aEFRG_TrainingApp_SERIALIZE OM_NO_OP

#define OMAnim_FunctionalAnalysisPkg_EmulateFrontandRearGearingPkg_EmulateFrontandRearGearingActorPkg_aEFRG_TrainingApp_setFrontRing_int_UNSERIALIZE_ARGS OP_UNSER(OMDestructiveString2X,p_frontRing)

#define OMAnim_FunctionalAnalysisPkg_EmulateFrontandRearGearingPkg_EmulateFrontandRearGearingActorPkg_aEFRG_TrainingApp_setFrontRing_int_SERIALIZE_RET_VAL

#define OMAnim_FunctionalAnalysisPkg_EmulateFrontandRearGearingPkg_EmulateFrontandRearGearingActorPkg_aEFRG_TrainingApp_setRearRing_int_UNSERIALIZE_ARGS OP_UNSER(OMDestructiveString2X,p_rearRing)

#define OMAnim_FunctionalAnalysisPkg_EmulateFrontandRearGearingPkg_EmulateFrontandRearGearingActorPkg_aEFRG_TrainingApp_setRearRing_int_SERIALIZE_RET_VAL
//#]

//## package FunctionalAnalysisPkg::EmulateFrontandRearGearingPkg::EmulateFrontandRearGearingActorPkg

//## class aEFRG_TrainingApp
//#[ ignore
aEFRG_TrainingApp::pUc_EmulateFrontandRearGearing_C::pUc_EmulateFrontandRearGearing_C() : _p_(0) {
    itsEvCurrentGearing_ProxyReceptionInterface = NULL;
}

aEFRG_TrainingApp::pUc_EmulateFrontandRearGearing_C::~pUc_EmulateFrontandRearGearing_C() {
    cleanUpRelations();
}

void aEFRG_TrainingApp::pUc_EmulateFrontandRearGearing_C::connectAEFRG_TrainingApp(aEFRG_TrainingApp* part) {
    setItsEvCurrentGearing_ProxyReceptionInterface(part);
    
}

evCurrentGearing_ProxyReceptionInterface* aEFRG_TrainingApp::pUc_EmulateFrontandRearGearing_C::getItsEvCurrentGearing_ProxyReceptionInterface() {
    return this;
}

bool aEFRG_TrainingApp::pUc_EmulateFrontandRearGearing_C::send(IOxfEvent* event, const IOxfEventGenerationParams& params) {
    bool res = false;
    if (event != NULL) {
        event->setPort(this);
        if (itsEvCurrentGearing_ProxyReceptionInterface != NULL) {
            if (event->isTypeOf(evCurrentGearing_EmulateFrontandRearGearingActorPkg_EmulateFrontandRearGearingPkg_FunctionalAnalysisPkg_id)) {
                res = itsEvCurrentGearing_ProxyReceptionInterface->send(event, params);
            }
        }
    }
    return res;
    
}

bool aEFRG_TrainingApp::pUc_EmulateFrontandRearGearing_C::send(IOxfEvent* event) {
    bool res = false;
    if (event != NULL) {
        event->setPort(this);
        if (itsEvCurrentGearing_ProxyReceptionInterface != NULL) {
            if (event->isTypeOf(evCurrentGearing_EmulateFrontandRearGearingActorPkg_EmulateFrontandRearGearingPkg_FunctionalAnalysisPkg_id)) {
                res = itsEvCurrentGearing_ProxyReceptionInterface->send(event);
            }
        }
    }
    return res;
    
}

void aEFRG_TrainingApp::pUc_EmulateFrontandRearGearing_C::setItsEvCurrentGearing_ProxyReceptionInterface(evCurrentGearing_ProxyReceptionInterface* p_evCurrentGearing_ProxyReceptionInterface) {
    itsEvCurrentGearing_ProxyReceptionInterface = p_evCurrentGearing_ProxyReceptionInterface;
}

void aEFRG_TrainingApp::pUc_EmulateFrontandRearGearing_C::cleanUpRelations() {
    if(itsEvCurrentGearing_ProxyReceptionInterface != NULL)
        {
            itsEvCurrentGearing_ProxyReceptionInterface = NULL;
        }
}
//#]

aEFRG_TrainingApp::aEFRG_TrainingApp(IOxfActive* theActiveContext) : frontRing(0), rearRing(0) {
    NOTIFY_REACTIVE_CONSTRUCTOR(aEFRG_TrainingApp, aEFRG_TrainingApp(), 0, FunctionalAnalysisPkg_EmulateFrontandRearGearingPkg_EmulateFrontandRearGearingActorPkg_aEFRG_TrainingApp_aEFRG_TrainingApp_SERIALIZE);
    setActiveContext(theActiveContext, false);
    initRelations();
    initStatechart();
}

aEFRG_TrainingApp::~aEFRG_TrainingApp() {
    NOTIFY_DESTRUCTOR(~aEFRG_TrainingApp, true);
}

aEFRG_TrainingApp::pUc_EmulateFrontandRearGearing_C* aEFRG_TrainingApp::getPUc_EmulateFrontandRearGearing() const {
    return (aEFRG_TrainingApp::pUc_EmulateFrontandRearGearing_C*) &pUc_EmulateFrontandRearGearing;
}

aEFRG_TrainingApp::pUc_EmulateFrontandRearGearing_C* aEFRG_TrainingApp::get_pUc_EmulateFrontandRearGearing() const {
    return (aEFRG_TrainingApp::pUc_EmulateFrontandRearGearing_C*) &pUc_EmulateFrontandRearGearing;
}

int aEFRG_TrainingApp::getFrontRing() const {
    return frontRing;
}

void aEFRG_TrainingApp::setFrontRing(int p_frontRing) {
    frontRing = p_frontRing;
    NOTIFY_SET_OPERATION;
}

int aEFRG_TrainingApp::getRearRing() const {
    return rearRing;
}

void aEFRG_TrainingApp::setRearRing(int p_rearRing) {
    rearRing = p_rearRing;
    NOTIFY_SET_OPERATION;
}

bool aEFRG_TrainingApp::startBehavior() {
    bool done = false;
    done = OMReactive::startBehavior();
    return done;
}

void aEFRG_TrainingApp::initRelations() {
    if (get_pUc_EmulateFrontandRearGearing() != NULL) {
        get_pUc_EmulateFrontandRearGearing()->connectAEFRG_TrainingApp(this);
    }
}

void aEFRG_TrainingApp::initStatechart() {
    rootState_subState = OMNonState;
    rootState_active = OMNonState;
}

void aEFRG_TrainingApp::rootState_entDef() {
    {
        NOTIFY_STATE_ENTERED("ROOT");
        NOTIFY_STATE_ENTERED("ROOT.Running");
        rootState_subState = Running;
        rootState_active = Running;
    }
}

IOxfReactive::TakeEventStatus aEFRG_TrainingApp::rootState_processEvent() {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    // State Running
    if(rootState_active == Running)
        {
            if(IS_EVENT_TYPE_OF(evCurrentGearing_EmulateFrontandRearGearingActorPkg_EmulateFrontandRearGearingPkg_FunctionalAnalysisPkg_id))
                {
                    OMSETPARAMS(evCurrentGearing);
                    NOTIFY_TRANSITION_STARTED("0");
                    NOTIFY_STATE_EXITED("ROOT.Running");
                    //#[ transition 0 
                    
                    setFrontRing(params->front);
                    setRearRing(params->rear);
                    //#]
                    NOTIFY_STATE_ENTERED("ROOT.Running");
                    rootState_subState = Running;
                    rootState_active = Running;
                    NOTIFY_TRANSITION_TERMINATED("0");
                    res = eventConsumed;
                }
            
        }
    return res;
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedaEFRG_TrainingApp::serializeAttributes(AOMSAttributes* aomsAttributes) const {
    aomsAttributes->addAttribute("frontRing", x2String(myReal->frontRing));
    aomsAttributes->addAttribute("rearRing", x2String(myReal->rearRing));
}

void OMAnimatedaEFRG_TrainingApp::serializeRelations(AOMSRelations* aomsRelations) const {
}

void OMAnimatedaEFRG_TrainingApp::rootState_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT");
    if(myReal->rootState_subState == aEFRG_TrainingApp::Running)
        {
            Running_serializeStates(aomsState);
        }
}

void OMAnimatedaEFRG_TrainingApp::Running_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.Running");
}
//#]

IMPLEMENT_REACTIVE_META_P(aEFRG_TrainingApp, FunctionalAnalysisPkg_EmulateFrontandRearGearingPkg_EmulateFrontandRearGearingActorPkg, FunctionalAnalysisPkg::EmulateFrontandRearGearingPkg::EmulateFrontandRearGearingActorPkg, false, OMAnimatedaEFRG_TrainingApp)

IMPLEMENT_META_OP(OMAnimatedaEFRG_TrainingApp, FunctionalAnalysisPkg_EmulateFrontandRearGearingPkg_EmulateFrontandRearGearingActorPkg_aEFRG_TrainingApp_setFrontRing_int, "setFrontRing", FALSE, "setFrontRing(int)", 1)

IMPLEMENT_OP_CALL(FunctionalAnalysisPkg_EmulateFrontandRearGearingPkg_EmulateFrontandRearGearingActorPkg_aEFRG_TrainingApp_setFrontRing_int, aEFRG_TrainingApp, setFrontRing(p_frontRing), NO_OP())

IMPLEMENT_META_OP(OMAnimatedaEFRG_TrainingApp, FunctionalAnalysisPkg_EmulateFrontandRearGearingPkg_EmulateFrontandRearGearingActorPkg_aEFRG_TrainingApp_setRearRing_int, "setRearRing", FALSE, "setRearRing(int)", 1)

IMPLEMENT_OP_CALL(FunctionalAnalysisPkg_EmulateFrontandRearGearingPkg_EmulateFrontandRearGearingActorPkg_aEFRG_TrainingApp_setRearRing_int, aEFRG_TrainingApp, setRearRing(p_rearRing), NO_OP())
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: Emulate_Front_and_Rear_GearingSim/Animate/aEFRG_TrainingApp.cpp
*********************************************************************/
