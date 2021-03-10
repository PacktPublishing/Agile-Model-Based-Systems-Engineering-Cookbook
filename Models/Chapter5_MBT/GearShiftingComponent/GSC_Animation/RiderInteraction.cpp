/********************************************************************
	Rhapsody	: 9.0 
	Login		: Bruce
	Component	: GearShiftingComponent 
	Configuration 	: GSC_Animation
	Model Element	: RiderInteraction
//!	Generated Date	: Sat, 28, Nov 2020  
	File Path	: GearShiftingComponent/GSC_Animation/RiderInteraction.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "RiderInteraction.h"
//#[ ignore
#define DesignSynthesisPkg_RiderInteractionDesignPkg_RiderInteraction_RiderInteraction_SERIALIZE OM_NO_OP
//#]

//## package DesignSynthesisPkg::RiderInteractionDesignPkg

//## class RiderInteraction
//#[ ignore
RiderInteraction::pMain_C::InBound_C::InBound_C() {
    itsEvDIShifting_ProxyReceptionInterface = NULL;
    itsEvDisplayGearing_ProxyReceptionInterface = NULL;
    itsEvMechanicalShifting_ProxyReceptionInterface = NULL;
}

RiderInteraction::pMain_C::InBound_C::~InBound_C() {
    cleanUpRelations();
}

bool RiderInteraction::pMain_C::InBound_C::send(IOxfEvent* event, const IOxfEventGenerationParams& params) {
    bool res = false;
    if (event != NULL) {
        if (itsEvDIShifting_ProxyReceptionInterface != NULL) {
            if (event->isTypeOf(evDIShifting_RiderInteractionDesignPkg_DesignSynthesisPkg_id)) {
                res = itsEvDIShifting_ProxyReceptionInterface->send(event, params);
                return res;
            }
        }
        if (itsEvMechanicalShifting_ProxyReceptionInterface != NULL) {
            if (event->isTypeOf(evMechanicalShifting_RiderInteractionDesignPkg_DesignSynthesisPkg_id)) {
                res = itsEvMechanicalShifting_ProxyReceptionInterface->send(event, params);
                return res;
            }
        }
        if (itsEvDisplayGearing_ProxyReceptionInterface != NULL) {
            if (event->isTypeOf(evDisplayGearing_RiderInteractionDesignPkg_DesignSynthesisPkg_id)) {
                res = itsEvDisplayGearing_ProxyReceptionInterface->send(event, params);
                return res;
            }
        }
    }
    return res;
    
}

bool RiderInteraction::pMain_C::InBound_C::send(IOxfEvent* event) {
    bool res = false;
    if (event != NULL) {
        if (itsEvDIShifting_ProxyReceptionInterface != NULL) {
            if (event->isTypeOf(evDIShifting_RiderInteractionDesignPkg_DesignSynthesisPkg_id)) {
                res = itsEvDIShifting_ProxyReceptionInterface->send(event);
                return res;
            }
        }
        if (itsEvMechanicalShifting_ProxyReceptionInterface != NULL) {
            if (event->isTypeOf(evMechanicalShifting_RiderInteractionDesignPkg_DesignSynthesisPkg_id)) {
                res = itsEvMechanicalShifting_ProxyReceptionInterface->send(event);
                return res;
            }
        }
        if (itsEvDisplayGearing_ProxyReceptionInterface != NULL) {
            if (event->isTypeOf(evDisplayGearing_RiderInteractionDesignPkg_DesignSynthesisPkg_id)) {
                res = itsEvDisplayGearing_ProxyReceptionInterface->send(event);
                return res;
            }
        }
    }
    return res;
    
}

void RiderInteraction::pMain_C::InBound_C::setItsEvDIShifting_ProxyReceptionInterface(evDIShifting_ProxyReceptionInterface* p_evDIShifting_ProxyReceptionInterface) {
    itsEvDIShifting_ProxyReceptionInterface = p_evDIShifting_ProxyReceptionInterface;
}

void RiderInteraction::pMain_C::InBound_C::setItsEvDisplayGearing_ProxyReceptionInterface(evDisplayGearing_ProxyReceptionInterface* p_evDisplayGearing_ProxyReceptionInterface) {
    itsEvDisplayGearing_ProxyReceptionInterface = p_evDisplayGearing_ProxyReceptionInterface;
}

void RiderInteraction::pMain_C::InBound_C::setItsEvMechanicalShifting_ProxyReceptionInterface(evMechanicalShifting_ProxyReceptionInterface* p_evMechanicalShifting_ProxyReceptionInterface) {
    itsEvMechanicalShifting_ProxyReceptionInterface = p_evMechanicalShifting_ProxyReceptionInterface;
}

void RiderInteraction::pMain_C::InBound_C::cleanUpRelations() {
    if(itsEvDIShifting_ProxyReceptionInterface != NULL)
        {
            itsEvDIShifting_ProxyReceptionInterface = NULL;
        }
    if(itsEvDisplayGearing_ProxyReceptionInterface != NULL)
        {
            itsEvDisplayGearing_ProxyReceptionInterface = NULL;
        }
    if(itsEvMechanicalShifting_ProxyReceptionInterface != NULL)
        {
            itsEvMechanicalShifting_ProxyReceptionInterface = NULL;
        }
}

RiderInteraction::pMain_C::OutBound_C::OutBound_C() {
    itsEvDIDown_ProxyReceptionInterface = NULL;
    itsEvDIUp_ProxyReceptionInterface = NULL;
    itsEvLeftShiftDown_ProxyReceptionInterface = NULL;
    itsEvLeftShiftUp_ProxyReceptionInterface = NULL;
    itsEvRightShiftDown_ProxyReceptionInterface = NULL;
    itsEvRightShiftUp_ProxyReceptionInterface = NULL;
}

RiderInteraction::pMain_C::OutBound_C::~OutBound_C() {
    cleanUpRelations();
}

bool RiderInteraction::pMain_C::OutBound_C::send(IOxfEvent* event, const IOxfEventGenerationParams& params) {
    bool res = false;
    if (event != NULL) {
        if (itsEvDIDown_ProxyReceptionInterface != NULL) {
            if (event->isTypeOf(evDIDown_RiderInteractionDesignPkg_DesignSynthesisPkg_id)) {
                res = itsEvDIDown_ProxyReceptionInterface->send(event, params);
                return res;
            }
        }
        if (itsEvDIUp_ProxyReceptionInterface != NULL) {
            if (event->isTypeOf(evDIUp_RiderInteractionDesignPkg_DesignSynthesisPkg_id)) {
                res = itsEvDIUp_ProxyReceptionInterface->send(event, params);
                return res;
            }
        }
        if (itsEvLeftShiftDown_ProxyReceptionInterface != NULL) {
            if (event->isTypeOf(evLeftShiftDown_RiderInteractionDesignPkg_DesignSynthesisPkg_id)) {
                res = itsEvLeftShiftDown_ProxyReceptionInterface->send(event, params);
                return res;
            }
        }
        if (itsEvLeftShiftUp_ProxyReceptionInterface != NULL) {
            if (event->isTypeOf(evLeftShiftUp_RiderInteractionDesignPkg_DesignSynthesisPkg_id)) {
                res = itsEvLeftShiftUp_ProxyReceptionInterface->send(event, params);
                return res;
            }
        }
        if (itsEvRightShiftDown_ProxyReceptionInterface != NULL) {
            if (event->isTypeOf(evRightShiftDown_RiderInteractionDesignPkg_DesignSynthesisPkg_id)) {
                res = itsEvRightShiftDown_ProxyReceptionInterface->send(event, params);
                return res;
            }
        }
        if (itsEvRightShiftUp_ProxyReceptionInterface != NULL) {
            if (event->isTypeOf(evRightShiftUp_RiderInteractionDesignPkg_DesignSynthesisPkg_id)) {
                res = itsEvRightShiftUp_ProxyReceptionInterface->send(event, params);
                return res;
            }
        }
    }
    return res;
    
}

bool RiderInteraction::pMain_C::OutBound_C::send(IOxfEvent* event) {
    bool res = false;
    if (event != NULL) {
        if (itsEvDIDown_ProxyReceptionInterface != NULL) {
            if (event->isTypeOf(evDIDown_RiderInteractionDesignPkg_DesignSynthesisPkg_id)) {
                res = itsEvDIDown_ProxyReceptionInterface->send(event);
                return res;
            }
        }
        if (itsEvDIUp_ProxyReceptionInterface != NULL) {
            if (event->isTypeOf(evDIUp_RiderInteractionDesignPkg_DesignSynthesisPkg_id)) {
                res = itsEvDIUp_ProxyReceptionInterface->send(event);
                return res;
            }
        }
        if (itsEvLeftShiftDown_ProxyReceptionInterface != NULL) {
            if (event->isTypeOf(evLeftShiftDown_RiderInteractionDesignPkg_DesignSynthesisPkg_id)) {
                res = itsEvLeftShiftDown_ProxyReceptionInterface->send(event);
                return res;
            }
        }
        if (itsEvLeftShiftUp_ProxyReceptionInterface != NULL) {
            if (event->isTypeOf(evLeftShiftUp_RiderInteractionDesignPkg_DesignSynthesisPkg_id)) {
                res = itsEvLeftShiftUp_ProxyReceptionInterface->send(event);
                return res;
            }
        }
        if (itsEvRightShiftDown_ProxyReceptionInterface != NULL) {
            if (event->isTypeOf(evRightShiftDown_RiderInteractionDesignPkg_DesignSynthesisPkg_id)) {
                res = itsEvRightShiftDown_ProxyReceptionInterface->send(event);
                return res;
            }
        }
        if (itsEvRightShiftUp_ProxyReceptionInterface != NULL) {
            if (event->isTypeOf(evRightShiftUp_RiderInteractionDesignPkg_DesignSynthesisPkg_id)) {
                res = itsEvRightShiftUp_ProxyReceptionInterface->send(event);
                return res;
            }
        }
    }
    return res;
    
}

void RiderInteraction::pMain_C::OutBound_C::setItsEvDIDown_ProxyReceptionInterface(OMReactive* p_OMReactive) {
    itsEvDIDown_ProxyReceptionInterface = p_OMReactive;
}

void RiderInteraction::pMain_C::OutBound_C::setItsEvDIUp_ProxyReceptionInterface(OMReactive* p_OMReactive) {
    itsEvDIUp_ProxyReceptionInterface = p_OMReactive;
}

void RiderInteraction::pMain_C::OutBound_C::setItsEvLeftShiftDown_ProxyReceptionInterface(OMReactive* p_OMReactive) {
    itsEvLeftShiftDown_ProxyReceptionInterface = p_OMReactive;
}

void RiderInteraction::pMain_C::OutBound_C::setItsEvLeftShiftUp_ProxyReceptionInterface(OMReactive* p_OMReactive) {
    itsEvLeftShiftUp_ProxyReceptionInterface = p_OMReactive;
}

void RiderInteraction::pMain_C::OutBound_C::setItsEvRightShiftDown_ProxyReceptionInterface(OMReactive* p_OMReactive) {
    itsEvRightShiftDown_ProxyReceptionInterface = p_OMReactive;
}

void RiderInteraction::pMain_C::OutBound_C::setItsEvRightShiftUp_ProxyReceptionInterface(OMReactive* p_OMReactive) {
    itsEvRightShiftUp_ProxyReceptionInterface = p_OMReactive;
}

void RiderInteraction::pMain_C::OutBound_C::cleanUpRelations() {
    if(itsEvDIDown_ProxyReceptionInterface != NULL)
        {
            itsEvDIDown_ProxyReceptionInterface = NULL;
        }
    if(itsEvDIUp_ProxyReceptionInterface != NULL)
        {
            itsEvDIUp_ProxyReceptionInterface = NULL;
        }
    if(itsEvLeftShiftDown_ProxyReceptionInterface != NULL)
        {
            itsEvLeftShiftDown_ProxyReceptionInterface = NULL;
        }
    if(itsEvLeftShiftUp_ProxyReceptionInterface != NULL)
        {
            itsEvLeftShiftUp_ProxyReceptionInterface = NULL;
        }
    if(itsEvRightShiftDown_ProxyReceptionInterface != NULL)
        {
            itsEvRightShiftDown_ProxyReceptionInterface = NULL;
        }
    if(itsEvRightShiftUp_ProxyReceptionInterface != NULL)
        {
            itsEvRightShiftUp_ProxyReceptionInterface = NULL;
        }
}

RiderInteraction::pMain_C::pMain_C() : _p_(0) {
}

RiderInteraction::pMain_C::~pMain_C() {
}

evDIDown_ProxyReceptionInterface* RiderInteraction::pMain_C::getItsEvDIDown_ProxyReceptionInterface() {
    return &OutBound;
}

evDIShifting_ProxyReceptionInterface* RiderInteraction::pMain_C::getItsEvDIShifting_ProxyReceptionInterface() {
    return &InBound;
}

evDIUp_ProxyReceptionInterface* RiderInteraction::pMain_C::getItsEvDIUp_ProxyReceptionInterface() {
    return &OutBound;
}

evDisplayGearing_ProxyReceptionInterface* RiderInteraction::pMain_C::getItsEvDisplayGearing_ProxyReceptionInterface() {
    return &InBound;
}

evLeftShiftDown_ProxyReceptionInterface* RiderInteraction::pMain_C::getItsEvLeftShiftDown_ProxyReceptionInterface() {
    return &OutBound;
}

evLeftShiftUp_ProxyReceptionInterface* RiderInteraction::pMain_C::getItsEvLeftShiftUp_ProxyReceptionInterface() {
    return &OutBound;
}

evMechanicalShifting_ProxyReceptionInterface* RiderInteraction::pMain_C::getItsEvMechanicalShifting_ProxyReceptionInterface() {
    return &InBound;
}

evRightShiftDown_ProxyReceptionInterface* RiderInteraction::pMain_C::getItsEvRightShiftDown_ProxyReceptionInterface() {
    return &OutBound;
}

evRightShiftUp_ProxyReceptionInterface* RiderInteraction::pMain_C::getItsEvRightShiftUp_ProxyReceptionInterface() {
    return &OutBound;
}

void RiderInteraction::pMain_C::setItsEvDIDown_ProxyReceptionInterface(OMReactive* p_evDIDown_ProxyReceptionInterface) {
    OutBound.setItsEvDIDown_ProxyReceptionInterface(p_evDIDown_ProxyReceptionInterface);
}

void RiderInteraction::pMain_C::setItsEvDIShifting_ProxyReceptionInterface(evDIShifting_ProxyReceptionInterface* p_evDIShifting_ProxyReceptionInterface) {
    InBound.setItsEvDIShifting_ProxyReceptionInterface(p_evDIShifting_ProxyReceptionInterface);
}

void RiderInteraction::pMain_C::setItsEvDIUp_ProxyReceptionInterface(OMReactive* p_evDIUp_ProxyReceptionInterface) {
    OutBound.setItsEvDIUp_ProxyReceptionInterface(p_evDIUp_ProxyReceptionInterface);
}

void RiderInteraction::pMain_C::setItsEvDisplayGearing_ProxyReceptionInterface(evDisplayGearing_ProxyReceptionInterface* p_evDisplayGearing_ProxyReceptionInterface) {
    InBound.setItsEvDisplayGearing_ProxyReceptionInterface(p_evDisplayGearing_ProxyReceptionInterface);
}

void RiderInteraction::pMain_C::setItsEvLeftShiftDown_ProxyReceptionInterface(OMReactive* p_evLeftShiftDown_ProxyReceptionInterface) {
    OutBound.setItsEvLeftShiftDown_ProxyReceptionInterface(p_evLeftShiftDown_ProxyReceptionInterface);
}

void RiderInteraction::pMain_C::setItsEvLeftShiftUp_ProxyReceptionInterface(OMReactive* p_evLeftShiftUp_ProxyReceptionInterface) {
    OutBound.setItsEvLeftShiftUp_ProxyReceptionInterface(p_evLeftShiftUp_ProxyReceptionInterface);
}

void RiderInteraction::pMain_C::setItsEvMechanicalShifting_ProxyReceptionInterface(evMechanicalShifting_ProxyReceptionInterface* p_evMechanicalShifting_ProxyReceptionInterface) {
    InBound.setItsEvMechanicalShifting_ProxyReceptionInterface(p_evMechanicalShifting_ProxyReceptionInterface);
}

void RiderInteraction::pMain_C::setItsEvRightShiftDown_ProxyReceptionInterface(OMReactive* p_evRightShiftDown_ProxyReceptionInterface) {
    OutBound.setItsEvRightShiftDown_ProxyReceptionInterface(p_evRightShiftDown_ProxyReceptionInterface);
}

void RiderInteraction::pMain_C::setItsEvRightShiftUp_ProxyReceptionInterface(OMReactive* p_evRightShiftUp_ProxyReceptionInterface) {
    OutBound.setItsEvRightShiftUp_ProxyReceptionInterface(p_evRightShiftUp_ProxyReceptionInterface);
}

RiderInteraction::pMain_C::InBound_C* RiderInteraction::pMain_C::getInBound() const {
    return (RiderInteraction::pMain_C::InBound_C*) &InBound;
}

RiderInteraction::pMain_C::OutBound_C* RiderInteraction::pMain_C::getOutBound() const {
    return (RiderInteraction::pMain_C::OutBound_C*) &OutBound;
}

void RiderInteraction::pMain_C::destroy() {
}
//#]

RiderInteraction::RiderInteraction(IOxfActive* theActiveContext) {
    NOTIFY_REACTIVE_CONSTRUCTOR(RiderInteraction, RiderInteraction(), 0, DesignSynthesisPkg_RiderInteractionDesignPkg_RiderInteraction_RiderInteraction_SERIALIZE);
    setActiveContext(theActiveContext, false);
    {
        {
            itsGearControl.setShouldDelete(false);
        }
    }
    initRelations();
}

RiderInteraction::~RiderInteraction() {
    NOTIFY_DESTRUCTOR(~RiderInteraction, true);
}

RiderInteraction::pMain_C* RiderInteraction::getPMain() const {
    return (RiderInteraction::pMain_C*) &pMain;
}

RiderInteraction::pMain_C* RiderInteraction::get_pMain() const {
    return (RiderInteraction::pMain_C*) &pMain;
}

GearControl* RiderInteraction::getItsGearControl() const {
    return (GearControl*) &itsGearControl;
}

bool RiderInteraction::startBehavior() {
    bool done = true;
    done &= itsGearControl.startBehavior();
    done &= OMReactive::startBehavior();
    return done;
}

void RiderInteraction::initRelations() {
    {
        
        get_pMain()->setItsEvDIShifting_ProxyReceptionInterface(itsGearControl.get_pMainShift()->getItsEvDIShifting_ProxyReceptionInterface());
        
        get_pMain()->setItsEvMechanicalShifting_ProxyReceptionInterface(itsGearControl.get_pMainShift()->getItsEvMechanicalShifting_ProxyReceptionInterface());
        
        get_pMain()->setItsEvDisplayGearing_ProxyReceptionInterface(itsGearControl.get_pMainShift()->getItsEvDisplayGearing_ProxyReceptionInterface());
        
    }{
        
        itsGearControl.get_pMainShift()->setItsEvDIDown_ProxyReceptionInterface(get_pMain()->getItsEvDIDown_ProxyReceptionInterface());
        
        itsGearControl.get_pMainShift()->setItsEvDIUp_ProxyReceptionInterface(get_pMain()->getItsEvDIUp_ProxyReceptionInterface());
        
        itsGearControl.get_pMainShift()->setItsEvLeftShiftDown_ProxyReceptionInterface(get_pMain()->getItsEvLeftShiftDown_ProxyReceptionInterface());
        
        itsGearControl.get_pMainShift()->setItsEvLeftShiftUp_ProxyReceptionInterface(get_pMain()->getItsEvLeftShiftUp_ProxyReceptionInterface());
        
        itsGearControl.get_pMainShift()->setItsEvRightShiftDown_ProxyReceptionInterface(get_pMain()->getItsEvRightShiftDown_ProxyReceptionInterface());
        
        itsGearControl.get_pMainShift()->setItsEvRightShiftUp_ProxyReceptionInterface(get_pMain()->getItsEvRightShiftUp_ProxyReceptionInterface());
        
    }
}

void RiderInteraction::setActiveContext(IOxfActive* theActiveContext, bool activeInstance) {
    OMReactive::setActiveContext(theActiveContext, activeInstance);
    {
        itsGearControl.setActiveContext(theActiveContext, false);
    }
}

void RiderInteraction::destroy() {
    itsGearControl.destroy();
    OMReactive::destroy();
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedRiderInteraction::serializeRelations(AOMSRelations* aomsRelations) const {
    aomsRelations->addRelation("itsGearControl", true, true);
    aomsRelations->ADD_ITEM(&myReal->itsGearControl);
}
//#]

IMPLEMENT_REACTIVE_META_SIMPLE_P(RiderInteraction, DesignSynthesisPkg_RiderInteractionDesignPkg, DesignSynthesisPkg::RiderInteractionDesignPkg, false, OMAnimatedRiderInteraction)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: GearShiftingComponent/GSC_Animation/RiderInteraction.cpp
*********************************************************************/
