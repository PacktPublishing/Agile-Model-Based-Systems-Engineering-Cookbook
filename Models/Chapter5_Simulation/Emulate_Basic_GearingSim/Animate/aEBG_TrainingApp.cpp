/********************************************************************
	Rhapsody	: 9.0 
	Login		: Bruce
	Component	: Emulate_Basic_GearingSim 
	Configuration 	: Animate
	Model Element	: aEBG_TrainingApp
//!	Generated Date	: Wed, 25, Nov 2020  
	File Path	: Emulate_Basic_GearingSim/Animate/aEBG_TrainingApp.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX

#define _OMSTATECHART_ANIMATED
//#]

//## auto_generated
#include "aEBG_TrainingApp.h"
//## auto_generated
#include "EmulateBasicGearingInterfacesPkg.h"
//#[ ignore
#define FunctionalAnalysisPkg_EmulateBasicGearingPkg_EmulateBasicGearingActorPkg_aEBG_TrainingApp_aEBG_TrainingApp_SERIALIZE OM_NO_OP

#define FunctionalAnalysisPkg_EmulateBasicGearingPkg_EmulateBasicGearingActorPkg_aEBG_TrainingApp_displayGearing_SERIALIZE aomsmethod->addAttribute("gear", x2String(gear));
//#]

//## package FunctionalAnalysisPkg::EmulateBasicGearingPkg::EmulateBasicGearingActorPkg

//## class aEBG_TrainingApp
//#[ ignore
aEBG_TrainingApp::pUc_EmulateBasicGearing_C::pUc_EmulateBasicGearing_C() : _p_(0) {
    itsGearing_ProxyReceptionInterface = NULL;
}

aEBG_TrainingApp::pUc_EmulateBasicGearing_C::~pUc_EmulateBasicGearing_C() {
    cleanUpRelations();
}

void aEBG_TrainingApp::pUc_EmulateBasicGearing_C::connectAEBG_TrainingApp(aEBG_TrainingApp* part) {
    setItsGearing_ProxyReceptionInterface(part);
    
}

gearing_ProxyReceptionInterface* aEBG_TrainingApp::pUc_EmulateBasicGearing_C::getItsGearing_ProxyReceptionInterface() {
    return this;
}

bool aEBG_TrainingApp::pUc_EmulateBasicGearing_C::send(IOxfEvent* event, const IOxfEventGenerationParams& params) {
    bool res = false;
    if (event != NULL) {
        event->setPort(this);
        if (itsGearing_ProxyReceptionInterface != NULL) {
            if (event->isTypeOf(gearing_EmulateBasicGearingInterfacesPkg_EmulateBasicGearingPkg_FunctionalAnalysisPkg_id)) {
                res = itsGearing_ProxyReceptionInterface->send(event, params);
            }
        }
    }
    return res;
    
}

bool aEBG_TrainingApp::pUc_EmulateBasicGearing_C::send(IOxfEvent* event) {
    bool res = false;
    if (event != NULL) {
        event->setPort(this);
        if (itsGearing_ProxyReceptionInterface != NULL) {
            if (event->isTypeOf(gearing_EmulateBasicGearingInterfacesPkg_EmulateBasicGearingPkg_FunctionalAnalysisPkg_id)) {
                res = itsGearing_ProxyReceptionInterface->send(event);
            }
        }
    }
    return res;
    
}

void aEBG_TrainingApp::pUc_EmulateBasicGearing_C::setItsGearing_ProxyReceptionInterface(gearing_ProxyReceptionInterface* p_gearing_ProxyReceptionInterface) {
    itsGearing_ProxyReceptionInterface = p_gearing_ProxyReceptionInterface;
}

void aEBG_TrainingApp::pUc_EmulateBasicGearing_C::cleanUpRelations() {
    if(itsGearing_ProxyReceptionInterface != NULL)
        {
            itsGearing_ProxyReceptionInterface = NULL;
        }
}
//#]

aEBG_TrainingApp::aEBG_TrainingApp(IOxfActive* theActiveContext) : displayedGear(0) {
    NOTIFY_REACTIVE_CONSTRUCTOR(aEBG_TrainingApp, aEBG_TrainingApp(), 0, FunctionalAnalysisPkg_EmulateBasicGearingPkg_EmulateBasicGearingActorPkg_aEBG_TrainingApp_aEBG_TrainingApp_SERIALIZE);
    setActiveContext(theActiveContext, false);
    initRelations();
    initStatechart();
}

aEBG_TrainingApp::~aEBG_TrainingApp() {
    NOTIFY_DESTRUCTOR(~aEBG_TrainingApp, true);
}

void aEBG_TrainingApp::displayGearing(Real gear) {
    NOTIFY_OPERATION(displayGearing, displayGearing(Real), 1, FunctionalAnalysisPkg_EmulateBasicGearingPkg_EmulateBasicGearingActorPkg_aEBG_TrainingApp_displayGearing_SERIALIZE);
    //#[ operation displayGearing(Real)
    displayedGear = gear;
    std::cout << "TA: Selected Gear : " << gear << std::endl;
    //#]
}

aEBG_TrainingApp::pUc_EmulateBasicGearing_C* aEBG_TrainingApp::getPUc_EmulateBasicGearing() const {
    return (aEBG_TrainingApp::pUc_EmulateBasicGearing_C*) &pUc_EmulateBasicGearing;
}

aEBG_TrainingApp::pUc_EmulateBasicGearing_C* aEBG_TrainingApp::get_pUc_EmulateBasicGearing() const {
    return (aEBG_TrainingApp::pUc_EmulateBasicGearing_C*) &pUc_EmulateBasicGearing;
}

Real aEBG_TrainingApp::getDisplayedGear() const {
    return displayedGear;
}

void aEBG_TrainingApp::setDisplayedGear(Real p_displayedGear) {
    displayedGear = p_displayedGear;
}

bool aEBG_TrainingApp::startBehavior() {
    bool done = false;
    done = OMReactive::startBehavior();
    return done;
}

void aEBG_TrainingApp::initRelations() {
    if (get_pUc_EmulateBasicGearing() != NULL) {
        get_pUc_EmulateBasicGearing()->connectAEBG_TrainingApp(this);
    }
}

void aEBG_TrainingApp::initStatechart() {
    rootState_subState = OMNonState;
    rootState_active = OMNonState;
}

void aEBG_TrainingApp::rootState_entDef() {
    {
        NOTIFY_STATE_ENTERED("ROOT");
        NOTIFY_TRANSITION_STARTED("0");
        NOTIFY_STATE_ENTERED("ROOT.state_0");
        rootState_subState = state_0;
        rootState_active = state_0;
        NOTIFY_TRANSITION_TERMINATED("0");
    }
}

IOxfReactive::TakeEventStatus aEBG_TrainingApp::rootState_processEvent() {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    // State state_0
    if(rootState_active == state_0)
        {
            if(IS_EVENT_TYPE_OF(gearing_EmulateBasicGearingInterfacesPkg_EmulateBasicGearingPkg_FunctionalAnalysisPkg_id))
                {
                    OMSETPARAMS(gearing);
                    NOTIFY_TRANSITION_STARTED("1");
                    NOTIFY_STATE_EXITED("ROOT.state_0");
                    //#[ transition 1 
                    
                    displayGearing(params->gear);
                    //#]
                    NOTIFY_STATE_ENTERED("ROOT.state_0");
                    rootState_subState = state_0;
                    rootState_active = state_0;
                    NOTIFY_TRANSITION_TERMINATED("1");
                    res = eventConsumed;
                }
            
        }
    return res;
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedaEBG_TrainingApp::serializeAttributes(AOMSAttributes* aomsAttributes) const {
    aomsAttributes->addAttribute("displayedGear", x2String(myReal->displayedGear));
}

void OMAnimatedaEBG_TrainingApp::serializeRelations(AOMSRelations* aomsRelations) const {
}

void OMAnimatedaEBG_TrainingApp::rootState_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT");
    if(myReal->rootState_subState == aEBG_TrainingApp::state_0)
        {
            state_0_serializeStates(aomsState);
        }
}

void OMAnimatedaEBG_TrainingApp::state_0_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.state_0");
}
//#]

IMPLEMENT_REACTIVE_META_P(aEBG_TrainingApp, FunctionalAnalysisPkg_EmulateBasicGearingPkg_EmulateBasicGearingActorPkg, FunctionalAnalysisPkg::EmulateBasicGearingPkg::EmulateBasicGearingActorPkg, false, OMAnimatedaEBG_TrainingApp)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: Emulate_Basic_GearingSim/Animate/aEBG_TrainingApp.cpp
*********************************************************************/
