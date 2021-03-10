/********************************************************************
	Rhapsody	: 9.0 
	Login		: Bruce
	Component	: GearShiftingComponent 
	Configuration 	: GSC_Animation
	Model Element	: MainComputingPlatform
//!	Generated Date	: Sat, 28, Nov 2020  
	File Path	: GearShiftingComponent/GSC_Animation/MainComputingPlatform.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "MainComputingPlatform.h"
//#[ ignore
#define DesignSynthesisPkg_RiderInteractionDesignPkg_MainComputingPlatform_MainComputingPlatform_SERIALIZE OM_NO_OP
//#]

//## package DesignSynthesisPkg::RiderInteractionDesignPkg

//## class MainComputingPlatform
//#[ ignore
MainComputingPlatform::pRiderShift_C::InBound_C::InBound_C() {
    itsEvDIDown_ProxyReceptionInterface = NULL;
    itsEvDIUp_ProxyReceptionInterface = NULL;
    itsEvLeftShiftDown_ProxyReceptionInterface = NULL;
    itsEvLeftShiftUp_ProxyReceptionInterface = NULL;
    itsEvRightShiftDown_ProxyReceptionInterface = NULL;
    itsEvRightShiftUp_ProxyReceptionInterface = NULL;
}

MainComputingPlatform::pRiderShift_C::InBound_C::~InBound_C() {
    cleanUpRelations();
}

bool MainComputingPlatform::pRiderShift_C::InBound_C::send(IOxfEvent* event, const IOxfEventGenerationParams& params) {
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

bool MainComputingPlatform::pRiderShift_C::InBound_C::send(IOxfEvent* event) {
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

void MainComputingPlatform::pRiderShift_C::InBound_C::setItsEvDIDown_ProxyReceptionInterface(evDIDown_ProxyReceptionInterface* p_evDIDown_ProxyReceptionInterface) {
    itsEvDIDown_ProxyReceptionInterface = p_evDIDown_ProxyReceptionInterface;
}

void MainComputingPlatform::pRiderShift_C::InBound_C::setItsEvDIUp_ProxyReceptionInterface(evDIUp_ProxyReceptionInterface* p_evDIUp_ProxyReceptionInterface) {
    itsEvDIUp_ProxyReceptionInterface = p_evDIUp_ProxyReceptionInterface;
}

void MainComputingPlatform::pRiderShift_C::InBound_C::setItsEvLeftShiftDown_ProxyReceptionInterface(evLeftShiftDown_ProxyReceptionInterface* p_evLeftShiftDown_ProxyReceptionInterface) {
    itsEvLeftShiftDown_ProxyReceptionInterface = p_evLeftShiftDown_ProxyReceptionInterface;
}

void MainComputingPlatform::pRiderShift_C::InBound_C::setItsEvLeftShiftUp_ProxyReceptionInterface(evLeftShiftUp_ProxyReceptionInterface* p_evLeftShiftUp_ProxyReceptionInterface) {
    itsEvLeftShiftUp_ProxyReceptionInterface = p_evLeftShiftUp_ProxyReceptionInterface;
}

void MainComputingPlatform::pRiderShift_C::InBound_C::setItsEvRightShiftDown_ProxyReceptionInterface(evRightShiftDown_ProxyReceptionInterface* p_evRightShiftDown_ProxyReceptionInterface) {
    itsEvRightShiftDown_ProxyReceptionInterface = p_evRightShiftDown_ProxyReceptionInterface;
}

void MainComputingPlatform::pRiderShift_C::InBound_C::setItsEvRightShiftUp_ProxyReceptionInterface(evRightShiftUp_ProxyReceptionInterface* p_evRightShiftUp_ProxyReceptionInterface) {
    itsEvRightShiftUp_ProxyReceptionInterface = p_evRightShiftUp_ProxyReceptionInterface;
}

void MainComputingPlatform::pRiderShift_C::InBound_C::cleanUpRelations() {
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

MainComputingPlatform::pRiderShift_C::OutBound_C::OutBound_C() {
    itsEvDIShifting_ProxyReceptionInterface = NULL;
    itsEvDisplayGearing_ProxyReceptionInterface = NULL;
    itsEvMechanicalShifting_ProxyReceptionInterface = NULL;
}

MainComputingPlatform::pRiderShift_C::OutBound_C::~OutBound_C() {
    cleanUpRelations();
}

bool MainComputingPlatform::pRiderShift_C::OutBound_C::send(IOxfEvent* event, const IOxfEventGenerationParams& params) {
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

bool MainComputingPlatform::pRiderShift_C::OutBound_C::send(IOxfEvent* event) {
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

void MainComputingPlatform::pRiderShift_C::OutBound_C::setItsEvDIShifting_ProxyReceptionInterface(OMReactive* p_OMReactive) {
    itsEvDIShifting_ProxyReceptionInterface = p_OMReactive;
}

void MainComputingPlatform::pRiderShift_C::OutBound_C::setItsEvDisplayGearing_ProxyReceptionInterface(OMReactive* p_OMReactive) {
    itsEvDisplayGearing_ProxyReceptionInterface = p_OMReactive;
}

void MainComputingPlatform::pRiderShift_C::OutBound_C::setItsEvMechanicalShifting_ProxyReceptionInterface(OMReactive* p_OMReactive) {
    itsEvMechanicalShifting_ProxyReceptionInterface = p_OMReactive;
}

void MainComputingPlatform::pRiderShift_C::OutBound_C::cleanUpRelations() {
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

MainComputingPlatform::pRiderShift_C::pRiderShift_C() : _p_(0) {
}

MainComputingPlatform::pRiderShift_C::~pRiderShift_C() {
}

evDIDown_ProxyReceptionInterface* MainComputingPlatform::pRiderShift_C::getItsEvDIDown_ProxyReceptionInterface() {
    return &InBound;
}

evDIShifting_ProxyReceptionInterface* MainComputingPlatform::pRiderShift_C::getItsEvDIShifting_ProxyReceptionInterface() {
    return &OutBound;
}

evDIUp_ProxyReceptionInterface* MainComputingPlatform::pRiderShift_C::getItsEvDIUp_ProxyReceptionInterface() {
    return &InBound;
}

evDisplayGearing_ProxyReceptionInterface* MainComputingPlatform::pRiderShift_C::getItsEvDisplayGearing_ProxyReceptionInterface() {
    return &OutBound;
}

evLeftShiftDown_ProxyReceptionInterface* MainComputingPlatform::pRiderShift_C::getItsEvLeftShiftDown_ProxyReceptionInterface() {
    return &InBound;
}

evLeftShiftUp_ProxyReceptionInterface* MainComputingPlatform::pRiderShift_C::getItsEvLeftShiftUp_ProxyReceptionInterface() {
    return &InBound;
}

evMechanicalShifting_ProxyReceptionInterface* MainComputingPlatform::pRiderShift_C::getItsEvMechanicalShifting_ProxyReceptionInterface() {
    return &OutBound;
}

evRightShiftDown_ProxyReceptionInterface* MainComputingPlatform::pRiderShift_C::getItsEvRightShiftDown_ProxyReceptionInterface() {
    return &InBound;
}

evRightShiftUp_ProxyReceptionInterface* MainComputingPlatform::pRiderShift_C::getItsEvRightShiftUp_ProxyReceptionInterface() {
    return &InBound;
}

void MainComputingPlatform::pRiderShift_C::setItsEvDIDown_ProxyReceptionInterface(evDIDown_ProxyReceptionInterface* p_evDIDown_ProxyReceptionInterface) {
    InBound.setItsEvDIDown_ProxyReceptionInterface(p_evDIDown_ProxyReceptionInterface);
}

void MainComputingPlatform::pRiderShift_C::setItsEvDIShifting_ProxyReceptionInterface(OMReactive* p_evDIShifting_ProxyReceptionInterface) {
    OutBound.setItsEvDIShifting_ProxyReceptionInterface(p_evDIShifting_ProxyReceptionInterface);
}

void MainComputingPlatform::pRiderShift_C::setItsEvDIUp_ProxyReceptionInterface(evDIUp_ProxyReceptionInterface* p_evDIUp_ProxyReceptionInterface) {
    InBound.setItsEvDIUp_ProxyReceptionInterface(p_evDIUp_ProxyReceptionInterface);
}

void MainComputingPlatform::pRiderShift_C::setItsEvDisplayGearing_ProxyReceptionInterface(OMReactive* p_evDisplayGearing_ProxyReceptionInterface) {
    OutBound.setItsEvDisplayGearing_ProxyReceptionInterface(p_evDisplayGearing_ProxyReceptionInterface);
}

void MainComputingPlatform::pRiderShift_C::setItsEvLeftShiftDown_ProxyReceptionInterface(evLeftShiftDown_ProxyReceptionInterface* p_evLeftShiftDown_ProxyReceptionInterface) {
    InBound.setItsEvLeftShiftDown_ProxyReceptionInterface(p_evLeftShiftDown_ProxyReceptionInterface);
}

void MainComputingPlatform::pRiderShift_C::setItsEvLeftShiftUp_ProxyReceptionInterface(evLeftShiftUp_ProxyReceptionInterface* p_evLeftShiftUp_ProxyReceptionInterface) {
    InBound.setItsEvLeftShiftUp_ProxyReceptionInterface(p_evLeftShiftUp_ProxyReceptionInterface);
}

void MainComputingPlatform::pRiderShift_C::setItsEvMechanicalShifting_ProxyReceptionInterface(OMReactive* p_evMechanicalShifting_ProxyReceptionInterface) {
    OutBound.setItsEvMechanicalShifting_ProxyReceptionInterface(p_evMechanicalShifting_ProxyReceptionInterface);
}

void MainComputingPlatform::pRiderShift_C::setItsEvRightShiftDown_ProxyReceptionInterface(evRightShiftDown_ProxyReceptionInterface* p_evRightShiftDown_ProxyReceptionInterface) {
    InBound.setItsEvRightShiftDown_ProxyReceptionInterface(p_evRightShiftDown_ProxyReceptionInterface);
}

void MainComputingPlatform::pRiderShift_C::setItsEvRightShiftUp_ProxyReceptionInterface(evRightShiftUp_ProxyReceptionInterface* p_evRightShiftUp_ProxyReceptionInterface) {
    InBound.setItsEvRightShiftUp_ProxyReceptionInterface(p_evRightShiftUp_ProxyReceptionInterface);
}

MainComputingPlatform::pRiderShift_C::InBound_C* MainComputingPlatform::pRiderShift_C::getInBound() const {
    return (MainComputingPlatform::pRiderShift_C::InBound_C*) &InBound;
}

MainComputingPlatform::pRiderShift_C::OutBound_C* MainComputingPlatform::pRiderShift_C::getOutBound() const {
    return (MainComputingPlatform::pRiderShift_C::OutBound_C*) &OutBound;
}

void MainComputingPlatform::pRiderShift_C::destroy() {
}
//#]

MainComputingPlatform::MainComputingPlatform(IOxfActive* theActiveContext) {
    NOTIFY_REACTIVE_CONSTRUCTOR(MainComputingPlatform, MainComputingPlatform(), 0, DesignSynthesisPkg_RiderInteractionDesignPkg_MainComputingPlatform_MainComputingPlatform_SERIALIZE);
    setActiveContext(theActiveContext, false);
    {
        {
            itsRiderApplication.setShouldDelete(false);
        }
    }
    initRelations();
}

MainComputingPlatform::~MainComputingPlatform() {
    NOTIFY_DESTRUCTOR(~MainComputingPlatform, true);
}

MainComputingPlatform::pRiderShift_C* MainComputingPlatform::getPRiderShift() const {
    return (MainComputingPlatform::pRiderShift_C*) &pRiderShift;
}

MainComputingPlatform::pRiderShift_C* MainComputingPlatform::get_pRiderShift() const {
    return (MainComputingPlatform::pRiderShift_C*) &pRiderShift;
}

RiderApplication* MainComputingPlatform::getItsRiderApplication() const {
    return (RiderApplication*) &itsRiderApplication;
}

bool MainComputingPlatform::startBehavior() {
    bool done = true;
    done &= itsRiderApplication.startBehavior();
    done &= OMReactive::startBehavior();
    return done;
}

void MainComputingPlatform::initRelations() {
    {
        
        get_pRiderShift()->setItsEvDIDown_ProxyReceptionInterface(itsRiderApplication.get_pRiderShift()->getItsEvDIDown_ProxyReceptionInterface());
        
        get_pRiderShift()->setItsEvDIUp_ProxyReceptionInterface(itsRiderApplication.get_pRiderShift()->getItsEvDIUp_ProxyReceptionInterface());
        
        get_pRiderShift()->setItsEvLeftShiftDown_ProxyReceptionInterface(itsRiderApplication.get_pRiderShift()->getItsEvLeftShiftDown_ProxyReceptionInterface());
        
        get_pRiderShift()->setItsEvLeftShiftUp_ProxyReceptionInterface(itsRiderApplication.get_pRiderShift()->getItsEvLeftShiftUp_ProxyReceptionInterface());
        
        get_pRiderShift()->setItsEvRightShiftDown_ProxyReceptionInterface(itsRiderApplication.get_pRiderShift()->getItsEvRightShiftDown_ProxyReceptionInterface());
        
        get_pRiderShift()->setItsEvRightShiftUp_ProxyReceptionInterface(itsRiderApplication.get_pRiderShift()->getItsEvRightShiftUp_ProxyReceptionInterface());
        
    }{
        
        itsRiderApplication.get_pRiderShift()->setItsEvDIShifting_ProxyReceptionInterface(get_pRiderShift()->getItsEvDIShifting_ProxyReceptionInterface());
        
        itsRiderApplication.get_pRiderShift()->setItsEvMechanicalShifting_ProxyReceptionInterface(get_pRiderShift()->getItsEvMechanicalShifting_ProxyReceptionInterface());
        
        itsRiderApplication.get_pRiderShift()->setItsEvDisplayGearing_ProxyReceptionInterface(get_pRiderShift()->getItsEvDisplayGearing_ProxyReceptionInterface());
        
    }
}

void MainComputingPlatform::setActiveContext(IOxfActive* theActiveContext, bool activeInstance) {
    OMReactive::setActiveContext(theActiveContext, activeInstance);
    {
        itsRiderApplication.setActiveContext(theActiveContext, false);
    }
}

void MainComputingPlatform::destroy() {
    itsRiderApplication.destroy();
    OMReactive::destroy();
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedMainComputingPlatform::serializeRelations(AOMSRelations* aomsRelations) const {
    aomsRelations->addRelation("itsRiderApplication", true, true);
    aomsRelations->ADD_ITEM(&myReal->itsRiderApplication);
}
//#]

IMPLEMENT_REACTIVE_META_SIMPLE_P(MainComputingPlatform, DesignSynthesisPkg_RiderInteractionDesignPkg, DesignSynthesisPkg::RiderInteractionDesignPkg, false, OMAnimatedMainComputingPlatform)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: GearShiftingComponent/GSC_Animation/MainComputingPlatform.cpp
*********************************************************************/
