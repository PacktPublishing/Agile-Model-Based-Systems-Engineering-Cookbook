/********************************************************************
	Rhapsody	: 9.0 
	Login		: Bruce
	Component	: GearShiftingComponent 
	Configuration 	: GSC_Animation
	Model Element	: ShiftLever
//!	Generated Date	: Sat, 28, Nov 2020  
	File Path	: GearShiftingComponent/GSC_Animation/ShiftLever.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX

#define _OMSTATECHART_ANIMATED
//#]

//## auto_generated
#include "ShiftLever.h"
//## link itsGearControl
#include "GearControl.h"
//#[ ignore
#define DesignSynthesisPkg_RiderInteractionDesignPkg_ShiftLever_ShiftLever_SERIALIZE OM_NO_OP
//#]

//## package DesignSynthesisPkg::RiderInteractionDesignPkg

//## class ShiftLever
ShiftLever::ShiftLever(IOxfActive* theActiveContext) : isLeft(TRUE) {
    NOTIFY_REACTIVE_CONSTRUCTOR(ShiftLever, ShiftLever(), 0, DesignSynthesisPkg_RiderInteractionDesignPkg_ShiftLever_ShiftLever_SERIALIZE);
    setActiveContext(theActiveContext, false);
    itsGearControl = NULL;
    initStatechart();
}

ShiftLever::~ShiftLever() {
    NOTIFY_DESTRUCTOR(~ShiftLever, true);
    cleanUpRelations();
}

bool ShiftLever::getIsLeft() const {
    return isLeft;
}

void ShiftLever::setIsLeft(bool p_isLeft) {
    isLeft = p_isLeft;
}

GearControl* ShiftLever::getItsGearControl() const {
    return itsGearControl;
}

void ShiftLever::setItsGearControl(GearControl* p_GearControl) {
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

bool ShiftLever::startBehavior() {
    bool done = false;
    done = OMReactive::startBehavior();
    return done;
}

void ShiftLever::initStatechart() {
    rootState_subState = OMNonState;
    rootState_active = OMNonState;
}

void ShiftLever::cleanUpRelations() {
    if(itsGearControl != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsGearControl");
            itsGearControl = NULL;
        }
}

void ShiftLever::rootState_entDef() {
    {
        NOTIFY_STATE_ENTERED("ROOT");
        NOTIFY_TRANSITION_STARTED("4");
        NOTIFY_STATE_ENTERED("ROOT.WiaitingToShift");
        rootState_subState = WiaitingToShift;
        rootState_active = WiaitingToShift;
        NOTIFY_TRANSITION_TERMINATED("4");
    }
}

IOxfReactive::TakeEventStatus ShiftLever::rootState_processEvent() {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    switch (rootState_active) {
        // State WiaitingToShift
        case WiaitingToShift:
        {
            if(IS_EVENT_TYPE_OF(evDown_RiderInteractionDesignPkg_DesignSynthesisPkg_id))
                {
                    NOTIFY_TRANSITION_STARTED("2");
                    NOTIFY_STATE_EXITED("ROOT.WiaitingToShift");
                    NOTIFY_STATE_ENTERED("ROOT.sendaction_2");
                    pushNullTransition();
                    rootState_subState = sendaction_2;
                    rootState_active = sendaction_2;
                    //#[ state sendaction_2.(Entry) 
                    itsGearControl->GEN(evShiftDown(isLeft));
                    //#]
                    NOTIFY_TRANSITION_TERMINATED("2");
                    res = eventConsumed;
                }
            else if(IS_EVENT_TYPE_OF(evUp_RiderInteractionDesignPkg_DesignSynthesisPkg_id))
                {
                    NOTIFY_TRANSITION_STARTED("0");
                    NOTIFY_STATE_EXITED("ROOT.WiaitingToShift");
                    NOTIFY_STATE_ENTERED("ROOT.sendaction_1");
                    pushNullTransition();
                    rootState_subState = sendaction_1;
                    rootState_active = sendaction_1;
                    //#[ state sendaction_1.(Entry) 
                    itsGearControl->GEN(evShiftUp(isLeft));
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
                    NOTIFY_STATE_ENTERED("ROOT.WiaitingToShift");
                    rootState_subState = WiaitingToShift;
                    rootState_active = WiaitingToShift;
                    NOTIFY_TRANSITION_TERMINATED("1");
                    res = eventConsumed;
                }
            
        }
        break;
        // State sendaction_2
        case sendaction_2:
        {
            if(IS_EVENT_TYPE_OF(OMNullEventId))
                {
                    NOTIFY_TRANSITION_STARTED("3");
                    popNullTransition();
                    NOTIFY_STATE_EXITED("ROOT.sendaction_2");
                    NOTIFY_STATE_ENTERED("ROOT.WiaitingToShift");
                    rootState_subState = WiaitingToShift;
                    rootState_active = WiaitingToShift;
                    NOTIFY_TRANSITION_TERMINATED("3");
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
void OMAnimatedShiftLever::serializeAttributes(AOMSAttributes* aomsAttributes) const {
    aomsAttributes->addAttribute("isLeft", x2String(myReal->isLeft));
}

void OMAnimatedShiftLever::serializeRelations(AOMSRelations* aomsRelations) const {
    aomsRelations->addRelation("itsGearControl", false, true);
    if(myReal->itsGearControl)
        {
            aomsRelations->ADD_ITEM(myReal->itsGearControl);
        }
}

void OMAnimatedShiftLever::rootState_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT");
    switch (myReal->rootState_subState) {
        case ShiftLever::WiaitingToShift:
        {
            WiaitingToShift_serializeStates(aomsState);
        }
        break;
        case ShiftLever::sendaction_1:
        {
            sendaction_1_serializeStates(aomsState);
        }
        break;
        case ShiftLever::sendaction_2:
        {
            sendaction_2_serializeStates(aomsState);
        }
        break;
        default:
            break;
    }
}

void OMAnimatedShiftLever::WiaitingToShift_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.WiaitingToShift");
}

void OMAnimatedShiftLever::sendaction_2_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.sendaction_2");
}

void OMAnimatedShiftLever::sendaction_1_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.sendaction_1");
}
//#]

IMPLEMENT_REACTIVE_META_P(ShiftLever, DesignSynthesisPkg_RiderInteractionDesignPkg, DesignSynthesisPkg::RiderInteractionDesignPkg, false, OMAnimatedShiftLever)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: GearShiftingComponent/GSC_Animation/ShiftLever.cpp
*********************************************************************/
