/********************************************************************
	Rhapsody	: 9.0 
	Login		: Bruce
	Component	: GearShiftingComponent 
	Configuration 	: GSC_Animation
	Model Element	: DIButton
//!	Generated Date	: Sat, 28, Nov 2020  
	File Path	: GearShiftingComponent/GSC_Animation/DIButton.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX

#define _OMSTATECHART_ANIMATED
//#]

//## auto_generated
#include "DIButton.h"
//## link itsGearControl
#include "GearControl.h"
//#[ ignore
#define DesignSynthesisPkg_RiderInteractionDesignPkg_DIButton_DIButton_SERIALIZE OM_NO_OP
//#]

//## package DesignSynthesisPkg::RiderInteractionDesignPkg

//## class DIButton
DIButton::DIButton(IOxfActive* theActiveContext) : isUp(TRUE) {
    NOTIFY_REACTIVE_CONSTRUCTOR(DIButton, DIButton(), 0, DesignSynthesisPkg_RiderInteractionDesignPkg_DIButton_DIButton_SERIALIZE);
    setActiveContext(theActiveContext, false);
    itsGearControl = NULL;
    initStatechart();
}

DIButton::~DIButton() {
    NOTIFY_DESTRUCTOR(~DIButton, true);
    cleanUpRelations();
}

bool DIButton::getIsUp() const {
    return isUp;
}

void DIButton::setIsUp(bool p_isUp) {
    isUp = p_isUp;
}

GearControl* DIButton::getItsGearControl() const {
    return itsGearControl;
}

void DIButton::setItsGearControl(GearControl* p_GearControl) {
    itsGearControl = p_GearControl;
    if(p_GearControl != NULL)
        {
            NOTIFY_RELATION_ITEM_ADDED("itsGearControl", p_GearControl, false, true);
        }
    else
        {
            NOTIFY_RELATION_CLEARED("itsGearControl");
        }
}

bool DIButton::startBehavior() {
    bool done = false;
    done = OMReactive::startBehavior();
    return done;
}

void DIButton::initStatechart() {
    rootState_subState = OMNonState;
    rootState_active = OMNonState;
}

void DIButton::cleanUpRelations() {
    if(itsGearControl != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsGearControl");
            itsGearControl = NULL;
        }
}

void DIButton::rootState_entDef() {
    {
        NOTIFY_STATE_ENTERED("ROOT");
        NOTIFY_TRANSITION_STARTED("2");
        NOTIFY_STATE_ENTERED("ROOT.WaitingToShift");
        rootState_subState = WaitingToShift;
        rootState_active = WaitingToShift;
        NOTIFY_TRANSITION_TERMINATED("2");
    }
}

IOxfReactive::TakeEventStatus DIButton::rootState_processEvent() {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    switch (rootState_active) {
        // State WaitingToShift
        case WaitingToShift:
        {
            if(IS_EVENT_TYPE_OF(evPress_RiderInteractionDesignPkg_DesignSynthesisPkg_id))
                {
                    NOTIFY_TRANSITION_STARTED("0");
                    NOTIFY_STATE_EXITED("ROOT.WaitingToShift");
                    NOTIFY_STATE_ENTERED("ROOT.sendaction_1");
                    pushNullTransition();
                    rootState_subState = sendaction_1;
                    rootState_active = sendaction_1;
                    //#[ state sendaction_1.(Entry) 
                    itsGearControl->GEN(evDiShift(isUp));
                    //#]
                    NOTIFY_TRANSITION_TERMINATED("0");
                    res = eventConsumed;
                }
            
        }
        break;
        // State sendaction_1
        case sendaction_1:
        {
            if(IS_EVENT_TYPE_OF(OMNullEventId))
                {
                    NOTIFY_TRANSITION_STARTED("1");
                    popNullTransition();
                    NOTIFY_STATE_EXITED("ROOT.sendaction_1");
                    NOTIFY_STATE_ENTERED("ROOT.WaitingToShift");
                    rootState_subState = WaitingToShift;
                    rootState_active = WaitingToShift;
                    NOTIFY_TRANSITION_TERMINATED("1");
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
void OMAnimatedDIButton::serializeAttributes(AOMSAttributes* aomsAttributes) const {
    aomsAttributes->addAttribute("isUp", x2String(myReal->isUp));
}

void OMAnimatedDIButton::serializeRelations(AOMSRelations* aomsRelations) const {
    aomsRelations->addRelation("itsGearControl", false, true);
    if(myReal->itsGearControl)
        {
            aomsRelations->ADD_ITEM(myReal->itsGearControl);
        }
}

void OMAnimatedDIButton::rootState_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT");
    switch (myReal->rootState_subState) {
        case DIButton::WaitingToShift:
        {
            WaitingToShift_serializeStates(aomsState);
        }
        break;
        case DIButton::sendaction_1:
        {
            sendaction_1_serializeStates(aomsState);
        }
        break;
        default:
            break;
    }
}

void OMAnimatedDIButton::WaitingToShift_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.WaitingToShift");
}

void OMAnimatedDIButton::sendaction_1_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.sendaction_1");
}
//#]

IMPLEMENT_REACTIVE_META_P(DIButton, DesignSynthesisPkg_RiderInteractionDesignPkg, DesignSynthesisPkg::RiderInteractionDesignPkg, false, OMAnimatedDIButton)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: GearShiftingComponent/GSC_Animation/DIButton.cpp
*********************************************************************/
