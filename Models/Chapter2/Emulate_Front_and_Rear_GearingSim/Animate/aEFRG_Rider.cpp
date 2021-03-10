/********************************************************************
	Rhapsody	: 8.4 
	Login		: Bruce
	Component	: Emulate_Front_and_Rear_GearingSim 
	Configuration 	: Animate
	Model Element	: aEFRG_Rider
//!	Generated Date	: Mon, 2, Mar 2020  
	File Path	: Emulate_Front_and_Rear_GearingSim/Animate/aEFRG_Rider.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX

#define _OMSTATECHART_ANIMATED
//#]

//## auto_generated
#include "aEFRG_Rider.h"
//## event evConfigureGearing()
#include "EmulateFrontandRearGearingPkg.h"
//#[ ignore
#define FunctionalAnalysisPkg_EmulateFrontandRearGearingPkg_EmulateFrontandRearGearingActorPkg_aEFRG_Rider_aEFRG_Rider_SERIALIZE OM_NO_OP

#define OMAnim_FunctionalAnalysisPkg_EmulateFrontandRearGearingPkg_EmulateFrontandRearGearingActorPkg_aEFRG_Rider_setCurrentCassetteRing_int_UNSERIALIZE_ARGS OP_UNSER(OMDestructiveString2X,p_currentCassetteRing)

#define OMAnim_FunctionalAnalysisPkg_EmulateFrontandRearGearingPkg_EmulateFrontandRearGearingActorPkg_aEFRG_Rider_setCurrentCassetteRing_int_SERIALIZE_RET_VAL

#define OMAnim_FunctionalAnalysisPkg_EmulateFrontandRearGearingPkg_EmulateFrontandRearGearingActorPkg_aEFRG_Rider_setCurrentChainRing_int_UNSERIALIZE_ARGS OP_UNSER(OMDestructiveString2X,p_currentChainRing)

#define OMAnim_FunctionalAnalysisPkg_EmulateFrontandRearGearingPkg_EmulateFrontandRearGearingActorPkg_aEFRG_Rider_setCurrentChainRing_int_SERIALIZE_RET_VAL

#define OMAnim_FunctionalAnalysisPkg_EmulateFrontandRearGearingPkg_EmulateFrontandRearGearingActorPkg_aEFRG_Rider_setNCassetteRings_int_UNSERIALIZE_ARGS OP_UNSER(OMDestructiveString2X,p_nCassetteRings)

#define OMAnim_FunctionalAnalysisPkg_EmulateFrontandRearGearingPkg_EmulateFrontandRearGearingActorPkg_aEFRG_Rider_setNCassetteRings_int_SERIALIZE_RET_VAL

#define OMAnim_FunctionalAnalysisPkg_EmulateFrontandRearGearingPkg_EmulateFrontandRearGearingActorPkg_aEFRG_Rider_setNChainRings_int_UNSERIALIZE_ARGS OP_UNSER(OMDestructiveString2X,p_nChainRings)

#define OMAnim_FunctionalAnalysisPkg_EmulateFrontandRearGearingPkg_EmulateFrontandRearGearingActorPkg_aEFRG_Rider_setNChainRings_int_SERIALIZE_RET_VAL

#define OMAnim_FunctionalAnalysisPkg_EmulateFrontandRearGearingPkg_EmulateFrontandRearGearingActorPkg_aEFRG_Rider_setRingTeeth_int_UNSERIALIZE_ARGS OP_UNSER(OMDestructiveString2X,p_ringTeeth)

#define OMAnim_FunctionalAnalysisPkg_EmulateFrontandRearGearingPkg_EmulateFrontandRearGearingActorPkg_aEFRG_Rider_setRingTeeth_int_SERIALIZE_RET_VAL
//#]

//## package FunctionalAnalysisPkg::EmulateFrontandRearGearingPkg::EmulateFrontandRearGearingActorPkg

//## class aEFRG_Rider
//#[ ignore
aEFRG_Rider::pUc_EmulateFrontandRearGearing_C::InBound_C::InBound_C() {
    itsEvCurrentGearing_ProxyReceptionInterface = NULL;
    itsEvInitialSettings_ProxyReceptionInterface = NULL;
    port = NULL;
}

aEFRG_Rider::pUc_EmulateFrontandRearGearing_C::InBound_C::~InBound_C() {
    cleanUpRelations();
}

bool aEFRG_Rider::pUc_EmulateFrontandRearGearing_C::InBound_C::send(IOxfEvent* event, const IOxfEventGenerationParams& params) {
    bool res = false;
    if (event != NULL) {
        event->setPort(getPort());
        if (itsEvCurrentGearing_ProxyReceptionInterface != NULL) {
            if (event->isTypeOf(evCurrentGearing_EmulateFrontandRearGearingActorPkg_EmulateFrontandRearGearingPkg_FunctionalAnalysisPkg_id)) {
                res = itsEvCurrentGearing_ProxyReceptionInterface->send(event, params);
                return res;
            }
        }
        if (itsEvInitialSettings_ProxyReceptionInterface != NULL) {
            if (event->isTypeOf(evInitialSettings_EmulateFrontandRearGearingActorPkg_EmulateFrontandRearGearingPkg_FunctionalAnalysisPkg_id)) {
                res = itsEvInitialSettings_ProxyReceptionInterface->send(event, params);
                return res;
            }
        }
    }
    return res;
    
}

bool aEFRG_Rider::pUc_EmulateFrontandRearGearing_C::InBound_C::send(IOxfEvent* event) {
    bool res = false;
    if (event != NULL) {
        event->setPort(getPort());
        if (itsEvCurrentGearing_ProxyReceptionInterface != NULL) {
            if (event->isTypeOf(evCurrentGearing_EmulateFrontandRearGearingActorPkg_EmulateFrontandRearGearingPkg_FunctionalAnalysisPkg_id)) {
                res = itsEvCurrentGearing_ProxyReceptionInterface->send(event);
                return res;
            }
        }
        if (itsEvInitialSettings_ProxyReceptionInterface != NULL) {
            if (event->isTypeOf(evInitialSettings_EmulateFrontandRearGearingActorPkg_EmulateFrontandRearGearingPkg_FunctionalAnalysisPkg_id)) {
                res = itsEvInitialSettings_ProxyReceptionInterface->send(event);
                return res;
            }
        }
    }
    return res;
    
}

void aEFRG_Rider::pUc_EmulateFrontandRearGearing_C::InBound_C::setItsEvCurrentGearing_ProxyReceptionInterface(evCurrentGearing_ProxyReceptionInterface* p_evCurrentGearing_ProxyReceptionInterface) {
    itsEvCurrentGearing_ProxyReceptionInterface = p_evCurrentGearing_ProxyReceptionInterface;
}

void aEFRG_Rider::pUc_EmulateFrontandRearGearing_C::InBound_C::setItsEvInitialSettings_ProxyReceptionInterface(evInitialSettings_ProxyReceptionInterface* p_evInitialSettings_ProxyReceptionInterface) {
    itsEvInitialSettings_ProxyReceptionInterface = p_evInitialSettings_ProxyReceptionInterface;
}

aEFRG_Rider::pUc_EmulateFrontandRearGearing_C* aEFRG_Rider::pUc_EmulateFrontandRearGearing_C::InBound_C::getPort() const {
    return port;
}

void aEFRG_Rider::pUc_EmulateFrontandRearGearing_C::InBound_C::setPort(aEFRG_Rider::pUc_EmulateFrontandRearGearing_C* p_pUc_EmulateFrontandRearGearing_C) {
    _setPort(p_pUc_EmulateFrontandRearGearing_C);
}

void aEFRG_Rider::pUc_EmulateFrontandRearGearing_C::InBound_C::cleanUpRelations() {
    if(itsEvCurrentGearing_ProxyReceptionInterface != NULL)
        {
            itsEvCurrentGearing_ProxyReceptionInterface = NULL;
        }
    if(itsEvInitialSettings_ProxyReceptionInterface != NULL)
        {
            itsEvInitialSettings_ProxyReceptionInterface = NULL;
        }
    if(port != NULL)
        {
            port = NULL;
        }
}

void aEFRG_Rider::pUc_EmulateFrontandRearGearing_C::InBound_C::__setPort(aEFRG_Rider::pUc_EmulateFrontandRearGearing_C* p_pUc_EmulateFrontandRearGearing_C) {
    port = p_pUc_EmulateFrontandRearGearing_C;
}

void aEFRG_Rider::pUc_EmulateFrontandRearGearing_C::InBound_C::_setPort(aEFRG_Rider::pUc_EmulateFrontandRearGearing_C* p_pUc_EmulateFrontandRearGearing_C) {
    __setPort(p_pUc_EmulateFrontandRearGearing_C);
}

void aEFRG_Rider::pUc_EmulateFrontandRearGearing_C::InBound_C::_clearPort() {
    port = NULL;
}

aEFRG_Rider::pUc_EmulateFrontandRearGearing_C::OutBound_C::OutBound_C() {
    itsEvAugmentFrontGear_ProxyReceptionInterface = NULL;
    itsEvAugmentRearGear_ProxyReceptionInterface = NULL;
    itsEvBeginRiding_ProxyReceptionInterface = NULL;
    itsEvConfigureGearing_ProxyReceptionInterface = NULL;
    itsEvDecrementFrontGear_ProxyReceptionInterface = NULL;
    itsEvDecrementRearGear_ProxyReceptionInterface = NULL;
    itsEvDoneConfiguring_ProxyReceptionInterface = NULL;
    itsEvDoneRiding_ProxyReceptionInterface = NULL;
    itsEvSetCassetteRingTeeth_ProxyReceptionInterface = NULL;
    itsEvSetChainRingTeeth_ProxyReceptionInterface = NULL;
    itsEvSetNumberOfCassetteRings_ProxyReceptionInterface = NULL;
    itsEvSetNumberOfChainRings_ProxyReceptionInterface = NULL;
    itsEvShowGearing_ProxyReceptionInterface = NULL;
}

aEFRG_Rider::pUc_EmulateFrontandRearGearing_C::OutBound_C::~OutBound_C() {
    cleanUpRelations();
}

bool aEFRG_Rider::pUc_EmulateFrontandRearGearing_C::OutBound_C::send(IOxfEvent* event, const IOxfEventGenerationParams& params) {
    bool res = false;
    if (event != NULL) {
        if (itsEvAugmentFrontGear_ProxyReceptionInterface != NULL) {
            if (event->isTypeOf(evAugmentFrontGear_EmulateFrontandRearGearingPkg_FunctionalAnalysisPkg_id)) {
                res = itsEvAugmentFrontGear_ProxyReceptionInterface->send(event, params);
                return res;
            }
        }
        if (itsEvAugmentRearGear_ProxyReceptionInterface != NULL) {
            if (event->isTypeOf(evAugmentRearGear_EmulateFrontandRearGearingPkg_FunctionalAnalysisPkg_id)) {
                res = itsEvAugmentRearGear_ProxyReceptionInterface->send(event, params);
                return res;
            }
        }
        if (itsEvBeginRiding_ProxyReceptionInterface != NULL) {
            if (event->isTypeOf(evBeginRiding_EmulateFrontandRearGearingPkg_FunctionalAnalysisPkg_id)) {
                res = itsEvBeginRiding_ProxyReceptionInterface->send(event, params);
                return res;
            }
        }
        if (itsEvConfigureGearing_ProxyReceptionInterface != NULL) {
            if (event->isTypeOf(evConfigureGearing_EmulateFrontandRearGearingPkg_FunctionalAnalysisPkg_id)) {
                res = itsEvConfigureGearing_ProxyReceptionInterface->send(event, params);
                return res;
            }
        }
        if (itsEvDecrementFrontGear_ProxyReceptionInterface != NULL) {
            if (event->isTypeOf(evDecrementFrontGear_EmulateFrontandRearGearingPkg_FunctionalAnalysisPkg_id)) {
                res = itsEvDecrementFrontGear_ProxyReceptionInterface->send(event, params);
                return res;
            }
        }
        if (itsEvDecrementRearGear_ProxyReceptionInterface != NULL) {
            if (event->isTypeOf(evDecrementRearGear_EmulateFrontandRearGearingPkg_FunctionalAnalysisPkg_id)) {
                res = itsEvDecrementRearGear_ProxyReceptionInterface->send(event, params);
                return res;
            }
        }
        if (itsEvDoneConfiguring_ProxyReceptionInterface != NULL) {
            if (event->isTypeOf(evDoneConfiguring_EmulateFrontandRearGearingPkg_FunctionalAnalysisPkg_id)) {
                res = itsEvDoneConfiguring_ProxyReceptionInterface->send(event, params);
                return res;
            }
        }
        if (itsEvDoneRiding_ProxyReceptionInterface != NULL) {
            if (event->isTypeOf(evDoneRiding_EmulateFrontandRearGearingPkg_FunctionalAnalysisPkg_id)) {
                res = itsEvDoneRiding_ProxyReceptionInterface->send(event, params);
                return res;
            }
        }
        if (itsEvSetCassetteRingTeeth_ProxyReceptionInterface != NULL) {
            if (event->isTypeOf(evSetCassetteRingTeeth_EmulateFrontandRearGearingPkg_FunctionalAnalysisPkg_id)) {
                res = itsEvSetCassetteRingTeeth_ProxyReceptionInterface->send(event, params);
                return res;
            }
        }
        if (itsEvSetChainRingTeeth_ProxyReceptionInterface != NULL) {
            if (event->isTypeOf(evSetChainRingTeeth_EmulateFrontandRearGearingPkg_FunctionalAnalysisPkg_id)) {
                res = itsEvSetChainRingTeeth_ProxyReceptionInterface->send(event, params);
                return res;
            }
        }
        if (itsEvSetNumberOfCassetteRings_ProxyReceptionInterface != NULL) {
            if (event->isTypeOf(evSetNumberOfCassetteRings_EmulateFrontandRearGearingPkg_FunctionalAnalysisPkg_id)) {
                res = itsEvSetNumberOfCassetteRings_ProxyReceptionInterface->send(event, params);
                return res;
            }
        }
        if (itsEvSetNumberOfChainRings_ProxyReceptionInterface != NULL) {
            if (event->isTypeOf(evSetNumberOfChainRings_EmulateFrontandRearGearingPkg_FunctionalAnalysisPkg_id)) {
                res = itsEvSetNumberOfChainRings_ProxyReceptionInterface->send(event, params);
                return res;
            }
        }
        if (itsEvShowGearing_ProxyReceptionInterface != NULL) {
            if (event->isTypeOf(evShowGearing_EmulateFrontandRearGearingPkg_FunctionalAnalysisPkg_id)) {
                res = itsEvShowGearing_ProxyReceptionInterface->send(event, params);
                return res;
            }
        }
    }
    return res;
    
}

bool aEFRG_Rider::pUc_EmulateFrontandRearGearing_C::OutBound_C::send(IOxfEvent* event) {
    bool res = false;
    if (event != NULL) {
        if (itsEvAugmentFrontGear_ProxyReceptionInterface != NULL) {
            if (event->isTypeOf(evAugmentFrontGear_EmulateFrontandRearGearingPkg_FunctionalAnalysisPkg_id)) {
                res = itsEvAugmentFrontGear_ProxyReceptionInterface->send(event);
                return res;
            }
        }
        if (itsEvAugmentRearGear_ProxyReceptionInterface != NULL) {
            if (event->isTypeOf(evAugmentRearGear_EmulateFrontandRearGearingPkg_FunctionalAnalysisPkg_id)) {
                res = itsEvAugmentRearGear_ProxyReceptionInterface->send(event);
                return res;
            }
        }
        if (itsEvBeginRiding_ProxyReceptionInterface != NULL) {
            if (event->isTypeOf(evBeginRiding_EmulateFrontandRearGearingPkg_FunctionalAnalysisPkg_id)) {
                res = itsEvBeginRiding_ProxyReceptionInterface->send(event);
                return res;
            }
        }
        if (itsEvConfigureGearing_ProxyReceptionInterface != NULL) {
            if (event->isTypeOf(evConfigureGearing_EmulateFrontandRearGearingPkg_FunctionalAnalysisPkg_id)) {
                res = itsEvConfigureGearing_ProxyReceptionInterface->send(event);
                return res;
            }
        }
        if (itsEvDecrementFrontGear_ProxyReceptionInterface != NULL) {
            if (event->isTypeOf(evDecrementFrontGear_EmulateFrontandRearGearingPkg_FunctionalAnalysisPkg_id)) {
                res = itsEvDecrementFrontGear_ProxyReceptionInterface->send(event);
                return res;
            }
        }
        if (itsEvDecrementRearGear_ProxyReceptionInterface != NULL) {
            if (event->isTypeOf(evDecrementRearGear_EmulateFrontandRearGearingPkg_FunctionalAnalysisPkg_id)) {
                res = itsEvDecrementRearGear_ProxyReceptionInterface->send(event);
                return res;
            }
        }
        if (itsEvDoneConfiguring_ProxyReceptionInterface != NULL) {
            if (event->isTypeOf(evDoneConfiguring_EmulateFrontandRearGearingPkg_FunctionalAnalysisPkg_id)) {
                res = itsEvDoneConfiguring_ProxyReceptionInterface->send(event);
                return res;
            }
        }
        if (itsEvDoneRiding_ProxyReceptionInterface != NULL) {
            if (event->isTypeOf(evDoneRiding_EmulateFrontandRearGearingPkg_FunctionalAnalysisPkg_id)) {
                res = itsEvDoneRiding_ProxyReceptionInterface->send(event);
                return res;
            }
        }
        if (itsEvSetCassetteRingTeeth_ProxyReceptionInterface != NULL) {
            if (event->isTypeOf(evSetCassetteRingTeeth_EmulateFrontandRearGearingPkg_FunctionalAnalysisPkg_id)) {
                res = itsEvSetCassetteRingTeeth_ProxyReceptionInterface->send(event);
                return res;
            }
        }
        if (itsEvSetChainRingTeeth_ProxyReceptionInterface != NULL) {
            if (event->isTypeOf(evSetChainRingTeeth_EmulateFrontandRearGearingPkg_FunctionalAnalysisPkg_id)) {
                res = itsEvSetChainRingTeeth_ProxyReceptionInterface->send(event);
                return res;
            }
        }
        if (itsEvSetNumberOfCassetteRings_ProxyReceptionInterface != NULL) {
            if (event->isTypeOf(evSetNumberOfCassetteRings_EmulateFrontandRearGearingPkg_FunctionalAnalysisPkg_id)) {
                res = itsEvSetNumberOfCassetteRings_ProxyReceptionInterface->send(event);
                return res;
            }
        }
        if (itsEvSetNumberOfChainRings_ProxyReceptionInterface != NULL) {
            if (event->isTypeOf(evSetNumberOfChainRings_EmulateFrontandRearGearingPkg_FunctionalAnalysisPkg_id)) {
                res = itsEvSetNumberOfChainRings_ProxyReceptionInterface->send(event);
                return res;
            }
        }
        if (itsEvShowGearing_ProxyReceptionInterface != NULL) {
            if (event->isTypeOf(evShowGearing_EmulateFrontandRearGearingPkg_FunctionalAnalysisPkg_id)) {
                res = itsEvShowGearing_ProxyReceptionInterface->send(event);
                return res;
            }
        }
    }
    return res;
    
}

void aEFRG_Rider::pUc_EmulateFrontandRearGearing_C::OutBound_C::setItsEvAugmentFrontGear_ProxyReceptionInterface(OMReactive* p_OMReactive) {
    itsEvAugmentFrontGear_ProxyReceptionInterface = p_OMReactive;
}

void aEFRG_Rider::pUc_EmulateFrontandRearGearing_C::OutBound_C::setItsEvAugmentRearGear_ProxyReceptionInterface(OMReactive* p_OMReactive) {
    itsEvAugmentRearGear_ProxyReceptionInterface = p_OMReactive;
}

void aEFRG_Rider::pUc_EmulateFrontandRearGearing_C::OutBound_C::setItsEvBeginRiding_ProxyReceptionInterface(OMReactive* p_OMReactive) {
    itsEvBeginRiding_ProxyReceptionInterface = p_OMReactive;
}

void aEFRG_Rider::pUc_EmulateFrontandRearGearing_C::OutBound_C::setItsEvConfigureGearing_ProxyReceptionInterface(OMReactive* p_OMReactive) {
    itsEvConfigureGearing_ProxyReceptionInterface = p_OMReactive;
}

void aEFRG_Rider::pUc_EmulateFrontandRearGearing_C::OutBound_C::setItsEvDecrementFrontGear_ProxyReceptionInterface(OMReactive* p_OMReactive) {
    itsEvDecrementFrontGear_ProxyReceptionInterface = p_OMReactive;
}

void aEFRG_Rider::pUc_EmulateFrontandRearGearing_C::OutBound_C::setItsEvDecrementRearGear_ProxyReceptionInterface(OMReactive* p_OMReactive) {
    itsEvDecrementRearGear_ProxyReceptionInterface = p_OMReactive;
}

void aEFRG_Rider::pUc_EmulateFrontandRearGearing_C::OutBound_C::setItsEvDoneConfiguring_ProxyReceptionInterface(OMReactive* p_OMReactive) {
    itsEvDoneConfiguring_ProxyReceptionInterface = p_OMReactive;
}

void aEFRG_Rider::pUc_EmulateFrontandRearGearing_C::OutBound_C::setItsEvDoneRiding_ProxyReceptionInterface(OMReactive* p_OMReactive) {
    itsEvDoneRiding_ProxyReceptionInterface = p_OMReactive;
}

void aEFRG_Rider::pUc_EmulateFrontandRearGearing_C::OutBound_C::setItsEvSetCassetteRingTeeth_ProxyReceptionInterface(OMReactive* p_OMReactive) {
    itsEvSetCassetteRingTeeth_ProxyReceptionInterface = p_OMReactive;
}

void aEFRG_Rider::pUc_EmulateFrontandRearGearing_C::OutBound_C::setItsEvSetChainRingTeeth_ProxyReceptionInterface(OMReactive* p_OMReactive) {
    itsEvSetChainRingTeeth_ProxyReceptionInterface = p_OMReactive;
}

void aEFRG_Rider::pUc_EmulateFrontandRearGearing_C::OutBound_C::setItsEvSetNumberOfCassetteRings_ProxyReceptionInterface(OMReactive* p_OMReactive) {
    itsEvSetNumberOfCassetteRings_ProxyReceptionInterface = p_OMReactive;
}

void aEFRG_Rider::pUc_EmulateFrontandRearGearing_C::OutBound_C::setItsEvSetNumberOfChainRings_ProxyReceptionInterface(OMReactive* p_OMReactive) {
    itsEvSetNumberOfChainRings_ProxyReceptionInterface = p_OMReactive;
}

void aEFRG_Rider::pUc_EmulateFrontandRearGearing_C::OutBound_C::setItsEvShowGearing_ProxyReceptionInterface(OMReactive* p_OMReactive) {
    itsEvShowGearing_ProxyReceptionInterface = p_OMReactive;
}

void aEFRG_Rider::pUc_EmulateFrontandRearGearing_C::OutBound_C::cleanUpRelations() {
    if(itsEvAugmentFrontGear_ProxyReceptionInterface != NULL)
        {
            itsEvAugmentFrontGear_ProxyReceptionInterface = NULL;
        }
    if(itsEvAugmentRearGear_ProxyReceptionInterface != NULL)
        {
            itsEvAugmentRearGear_ProxyReceptionInterface = NULL;
        }
    if(itsEvBeginRiding_ProxyReceptionInterface != NULL)
        {
            itsEvBeginRiding_ProxyReceptionInterface = NULL;
        }
    if(itsEvConfigureGearing_ProxyReceptionInterface != NULL)
        {
            itsEvConfigureGearing_ProxyReceptionInterface = NULL;
        }
    if(itsEvDecrementFrontGear_ProxyReceptionInterface != NULL)
        {
            itsEvDecrementFrontGear_ProxyReceptionInterface = NULL;
        }
    if(itsEvDecrementRearGear_ProxyReceptionInterface != NULL)
        {
            itsEvDecrementRearGear_ProxyReceptionInterface = NULL;
        }
    if(itsEvDoneConfiguring_ProxyReceptionInterface != NULL)
        {
            itsEvDoneConfiguring_ProxyReceptionInterface = NULL;
        }
    if(itsEvDoneRiding_ProxyReceptionInterface != NULL)
        {
            itsEvDoneRiding_ProxyReceptionInterface = NULL;
        }
    if(itsEvSetCassetteRingTeeth_ProxyReceptionInterface != NULL)
        {
            itsEvSetCassetteRingTeeth_ProxyReceptionInterface = NULL;
        }
    if(itsEvSetChainRingTeeth_ProxyReceptionInterface != NULL)
        {
            itsEvSetChainRingTeeth_ProxyReceptionInterface = NULL;
        }
    if(itsEvSetNumberOfCassetteRings_ProxyReceptionInterface != NULL)
        {
            itsEvSetNumberOfCassetteRings_ProxyReceptionInterface = NULL;
        }
    if(itsEvSetNumberOfChainRings_ProxyReceptionInterface != NULL)
        {
            itsEvSetNumberOfChainRings_ProxyReceptionInterface = NULL;
        }
    if(itsEvShowGearing_ProxyReceptionInterface != NULL)
        {
            itsEvShowGearing_ProxyReceptionInterface = NULL;
        }
}

aEFRG_Rider::pUc_EmulateFrontandRearGearing_C::pUc_EmulateFrontandRearGearing_C() : _p_(0) {
    initRelations();
}

aEFRG_Rider::pUc_EmulateFrontandRearGearing_C::~pUc_EmulateFrontandRearGearing_C() {
}

void aEFRG_Rider::pUc_EmulateFrontandRearGearing_C::connectAEFRG_Rider(aEFRG_Rider* part) {
    InBound.setItsEvCurrentGearing_ProxyReceptionInterface(part);
    InBound.setItsEvInitialSettings_ProxyReceptionInterface(part);
    InBound.setPort(this); // for IS_PORT macro support
    
}

evAugmentFrontGear_ProxyReceptionInterface* aEFRG_Rider::pUc_EmulateFrontandRearGearing_C::getItsEvAugmentFrontGear_ProxyReceptionInterface() {
    return &OutBound;
}

evAugmentRearGear_ProxyReceptionInterface* aEFRG_Rider::pUc_EmulateFrontandRearGearing_C::getItsEvAugmentRearGear_ProxyReceptionInterface() {
    return &OutBound;
}

evBeginRiding_ProxyReceptionInterface* aEFRG_Rider::pUc_EmulateFrontandRearGearing_C::getItsEvBeginRiding_ProxyReceptionInterface() {
    return &OutBound;
}

evConfigureGearing_ProxyReceptionInterface* aEFRG_Rider::pUc_EmulateFrontandRearGearing_C::getItsEvConfigureGearing_ProxyReceptionInterface() {
    return &OutBound;
}

evCurrentGearing_ProxyReceptionInterface* aEFRG_Rider::pUc_EmulateFrontandRearGearing_C::getItsEvCurrentGearing_ProxyReceptionInterface() {
    return &InBound;
}

evDecrementFrontGear_ProxyReceptionInterface* aEFRG_Rider::pUc_EmulateFrontandRearGearing_C::getItsEvDecrementFrontGear_ProxyReceptionInterface() {
    return &OutBound;
}

evDecrementRearGear_ProxyReceptionInterface* aEFRG_Rider::pUc_EmulateFrontandRearGearing_C::getItsEvDecrementRearGear_ProxyReceptionInterface() {
    return &OutBound;
}

evDoneConfiguring_ProxyReceptionInterface* aEFRG_Rider::pUc_EmulateFrontandRearGearing_C::getItsEvDoneConfiguring_ProxyReceptionInterface() {
    return &OutBound;
}

evDoneRiding_ProxyReceptionInterface* aEFRG_Rider::pUc_EmulateFrontandRearGearing_C::getItsEvDoneRiding_ProxyReceptionInterface() {
    return &OutBound;
}

evInitialSettings_ProxyReceptionInterface* aEFRG_Rider::pUc_EmulateFrontandRearGearing_C::getItsEvInitialSettings_ProxyReceptionInterface() {
    return &InBound;
}

evSetCassetteRingTeeth_ProxyReceptionInterface* aEFRG_Rider::pUc_EmulateFrontandRearGearing_C::getItsEvSetCassetteRingTeeth_ProxyReceptionInterface() {
    return &OutBound;
}

evSetChainRingTeeth_ProxyReceptionInterface* aEFRG_Rider::pUc_EmulateFrontandRearGearing_C::getItsEvSetChainRingTeeth_ProxyReceptionInterface() {
    return &OutBound;
}

evSetNumberOfCassetteRings_ProxyReceptionInterface* aEFRG_Rider::pUc_EmulateFrontandRearGearing_C::getItsEvSetNumberOfCassetteRings_ProxyReceptionInterface() {
    return &OutBound;
}

evSetNumberOfChainRings_ProxyReceptionInterface* aEFRG_Rider::pUc_EmulateFrontandRearGearing_C::getItsEvSetNumberOfChainRings_ProxyReceptionInterface() {
    return &OutBound;
}

evShowGearing_ProxyReceptionInterface* aEFRG_Rider::pUc_EmulateFrontandRearGearing_C::getItsEvShowGearing_ProxyReceptionInterface() {
    return &OutBound;
}

void aEFRG_Rider::pUc_EmulateFrontandRearGearing_C::setItsEvAugmentFrontGear_ProxyReceptionInterface(OMReactive* p_evAugmentFrontGear_ProxyReceptionInterface) {
    OutBound.setItsEvAugmentFrontGear_ProxyReceptionInterface(p_evAugmentFrontGear_ProxyReceptionInterface);
}

void aEFRG_Rider::pUc_EmulateFrontandRearGearing_C::setItsEvAugmentRearGear_ProxyReceptionInterface(OMReactive* p_evAugmentRearGear_ProxyReceptionInterface) {
    OutBound.setItsEvAugmentRearGear_ProxyReceptionInterface(p_evAugmentRearGear_ProxyReceptionInterface);
}

void aEFRG_Rider::pUc_EmulateFrontandRearGearing_C::setItsEvBeginRiding_ProxyReceptionInterface(OMReactive* p_evBeginRiding_ProxyReceptionInterface) {
    OutBound.setItsEvBeginRiding_ProxyReceptionInterface(p_evBeginRiding_ProxyReceptionInterface);
}

void aEFRG_Rider::pUc_EmulateFrontandRearGearing_C::setItsEvConfigureGearing_ProxyReceptionInterface(OMReactive* p_evConfigureGearing_ProxyReceptionInterface) {
    OutBound.setItsEvConfigureGearing_ProxyReceptionInterface(p_evConfigureGearing_ProxyReceptionInterface);
}

void aEFRG_Rider::pUc_EmulateFrontandRearGearing_C::setItsEvCurrentGearing_ProxyReceptionInterface(evCurrentGearing_ProxyReceptionInterface* p_evCurrentGearing_ProxyReceptionInterface) {
    InBound.setItsEvCurrentGearing_ProxyReceptionInterface(p_evCurrentGearing_ProxyReceptionInterface);
}

void aEFRG_Rider::pUc_EmulateFrontandRearGearing_C::setItsEvDecrementFrontGear_ProxyReceptionInterface(OMReactive* p_evDecrementFrontGear_ProxyReceptionInterface) {
    OutBound.setItsEvDecrementFrontGear_ProxyReceptionInterface(p_evDecrementFrontGear_ProxyReceptionInterface);
}

void aEFRG_Rider::pUc_EmulateFrontandRearGearing_C::setItsEvDecrementRearGear_ProxyReceptionInterface(OMReactive* p_evDecrementRearGear_ProxyReceptionInterface) {
    OutBound.setItsEvDecrementRearGear_ProxyReceptionInterface(p_evDecrementRearGear_ProxyReceptionInterface);
}

void aEFRG_Rider::pUc_EmulateFrontandRearGearing_C::setItsEvDoneConfiguring_ProxyReceptionInterface(OMReactive* p_evDoneConfiguring_ProxyReceptionInterface) {
    OutBound.setItsEvDoneConfiguring_ProxyReceptionInterface(p_evDoneConfiguring_ProxyReceptionInterface);
}

void aEFRG_Rider::pUc_EmulateFrontandRearGearing_C::setItsEvDoneRiding_ProxyReceptionInterface(OMReactive* p_evDoneRiding_ProxyReceptionInterface) {
    OutBound.setItsEvDoneRiding_ProxyReceptionInterface(p_evDoneRiding_ProxyReceptionInterface);
}

void aEFRG_Rider::pUc_EmulateFrontandRearGearing_C::setItsEvInitialSettings_ProxyReceptionInterface(evInitialSettings_ProxyReceptionInterface* p_evInitialSettings_ProxyReceptionInterface) {
    InBound.setItsEvInitialSettings_ProxyReceptionInterface(p_evInitialSettings_ProxyReceptionInterface);
}

void aEFRG_Rider::pUc_EmulateFrontandRearGearing_C::setItsEvSetCassetteRingTeeth_ProxyReceptionInterface(OMReactive* p_evSetCassetteRingTeeth_ProxyReceptionInterface) {
    OutBound.setItsEvSetCassetteRingTeeth_ProxyReceptionInterface(p_evSetCassetteRingTeeth_ProxyReceptionInterface);
}

void aEFRG_Rider::pUc_EmulateFrontandRearGearing_C::setItsEvSetChainRingTeeth_ProxyReceptionInterface(OMReactive* p_evSetChainRingTeeth_ProxyReceptionInterface) {
    OutBound.setItsEvSetChainRingTeeth_ProxyReceptionInterface(p_evSetChainRingTeeth_ProxyReceptionInterface);
}

void aEFRG_Rider::pUc_EmulateFrontandRearGearing_C::setItsEvSetNumberOfCassetteRings_ProxyReceptionInterface(OMReactive* p_evSetNumberOfCassetteRings_ProxyReceptionInterface) {
    OutBound.setItsEvSetNumberOfCassetteRings_ProxyReceptionInterface(p_evSetNumberOfCassetteRings_ProxyReceptionInterface);
}

void aEFRG_Rider::pUc_EmulateFrontandRearGearing_C::setItsEvSetNumberOfChainRings_ProxyReceptionInterface(OMReactive* p_evSetNumberOfChainRings_ProxyReceptionInterface) {
    OutBound.setItsEvSetNumberOfChainRings_ProxyReceptionInterface(p_evSetNumberOfChainRings_ProxyReceptionInterface);
}

void aEFRG_Rider::pUc_EmulateFrontandRearGearing_C::setItsEvShowGearing_ProxyReceptionInterface(OMReactive* p_evShowGearing_ProxyReceptionInterface) {
    OutBound.setItsEvShowGearing_ProxyReceptionInterface(p_evShowGearing_ProxyReceptionInterface);
}

aEFRG_Rider::pUc_EmulateFrontandRearGearing_C::InBound_C* aEFRG_Rider::pUc_EmulateFrontandRearGearing_C::getInBound() const {
    return (aEFRG_Rider::pUc_EmulateFrontandRearGearing_C::InBound_C*) &InBound;
}

aEFRG_Rider::pUc_EmulateFrontandRearGearing_C::OutBound_C* aEFRG_Rider::pUc_EmulateFrontandRearGearing_C::getOutBound() const {
    return (aEFRG_Rider::pUc_EmulateFrontandRearGearing_C::OutBound_C*) &OutBound;
}

void aEFRG_Rider::pUc_EmulateFrontandRearGearing_C::initRelations() {
    InBound._setPort(this);
}

void aEFRG_Rider::pUc_EmulateFrontandRearGearing_C::destroy() {
}
//#]

aEFRG_Rider::aEFRG_Rider(IOxfActive* theActiveContext) {
    NOTIFY_REACTIVE_CONSTRUCTOR(aEFRG_Rider, aEFRG_Rider(), 0, FunctionalAnalysisPkg_EmulateFrontandRearGearingPkg_EmulateFrontandRearGearingActorPkg_aEFRG_Rider_aEFRG_Rider_SERIALIZE);
    setActiveContext(theActiveContext, false);
    initRelations();
    initStatechart();
}

aEFRG_Rider::~aEFRG_Rider() {
    NOTIFY_DESTRUCTOR(~aEFRG_Rider, true);
}

aEFRG_Rider::pUc_EmulateFrontandRearGearing_C* aEFRG_Rider::getPUc_EmulateFrontandRearGearing() const {
    return (aEFRG_Rider::pUc_EmulateFrontandRearGearing_C*) &pUc_EmulateFrontandRearGearing;
}

aEFRG_Rider::pUc_EmulateFrontandRearGearing_C* aEFRG_Rider::get_pUc_EmulateFrontandRearGearing() const {
    return (aEFRG_Rider::pUc_EmulateFrontandRearGearing_C*) &pUc_EmulateFrontandRearGearing;
}

int aEFRG_Rider::getCurrentCassetteRing() const {
    return currentCassetteRing;
}

void aEFRG_Rider::setCurrentCassetteRing(int p_currentCassetteRing) {
    currentCassetteRing = p_currentCassetteRing;
    NOTIFY_SET_OPERATION;
}

int aEFRG_Rider::getCurrentChainRing() const {
    return currentChainRing;
}

void aEFRG_Rider::setCurrentChainRing(int p_currentChainRing) {
    currentChainRing = p_currentChainRing;
    NOTIFY_SET_OPERATION;
}

int aEFRG_Rider::getNCassetteRings() const {
    return nCassetteRings;
}

void aEFRG_Rider::setNCassetteRings(int p_nCassetteRings) {
    nCassetteRings = p_nCassetteRings;
    NOTIFY_SET_OPERATION;
}

int aEFRG_Rider::getNChainRings() const {
    return nChainRings;
}

void aEFRG_Rider::setNChainRings(int p_nChainRings) {
    nChainRings = p_nChainRings;
    NOTIFY_SET_OPERATION;
}

int aEFRG_Rider::getRingTeeth() const {
    return ringTeeth;
}

void aEFRG_Rider::setRingTeeth(int p_ringTeeth) {
    ringTeeth = p_ringTeeth;
    NOTIFY_SET_OPERATION;
}

bool aEFRG_Rider::startBehavior() {
    bool done = false;
    done = OMReactive::startBehavior();
    return done;
}

void aEFRG_Rider::initRelations() {
    if (get_pUc_EmulateFrontandRearGearing() != NULL) {
        get_pUc_EmulateFrontandRearGearing()->connectAEFRG_Rider(this);
    }
}

void aEFRG_Rider::initStatechart() {
    rootState_subState = OMNonState;
    rootState_active = OMNonState;
}

void aEFRG_Rider::rootState_entDef() {
    {
        NOTIFY_STATE_ENTERED("ROOT");
        NOTIFY_TRANSITION_STARTED("0");
        NOTIFY_STATE_ENTERED("ROOT.Idle");
        rootState_subState = Idle;
        rootState_active = Idle;
        NOTIFY_TRANSITION_TERMINATED("0");
    }
}

IOxfReactive::TakeEventStatus aEFRG_Rider::rootState_processEvent() {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    switch (rootState_active) {
        // State SettingUp
        case SettingUp:
        {
            res = SettingUp_handleEvent();
        }
        break;
        // State Riding
        case Riding:
        {
            res = Riding_handleEvent();
        }
        break;
        // State sendaction_2
        case sendaction_2:
        {
            if(IS_EVENT_TYPE_OF(OMNullEventId))
                {
                    NOTIFY_TRANSITION_STARTED("4");
                    popNullTransition();
                    NOTIFY_STATE_EXITED("ROOT.sendaction_2");
                    NOTIFY_STATE_ENTERED("ROOT.SettingUp");
                    rootState_subState = SettingUp;
                    rootState_active = SettingUp;
                    NOTIFY_TRANSITION_TERMINATED("4");
                    res = eventConsumed;
                }
            
        }
        break;
        // State Idle
        case Idle:
        {
            if(IS_EVENT_TYPE_OF(exConfigure_EmulateFrontandRearGearingActorPkg_EmulateFrontandRearGearingPkg_FunctionalAnalysisPkg_id))
                {
                    NOTIFY_TRANSITION_STARTED("1");
                    NOTIFY_STATE_EXITED("ROOT.Idle");
                    NOTIFY_STATE_ENTERED("ROOT.sendaction_2");
                    pushNullTransition();
                    rootState_subState = sendaction_2;
                    rootState_active = sendaction_2;
                    //#[ state sendaction_2.(Entry) 
                    OUT_PORT(pUc_EmulateFrontandRearGearing)->GEN(evConfigureGearing);
                    //#]
                    NOTIFY_TRANSITION_TERMINATED("1");
                    res = eventConsumed;
                }
            else if(IS_EVENT_TYPE_OF(exBeginRiding_EmulateFrontandRearGearingActorPkg_EmulateFrontandRearGearingPkg_FunctionalAnalysisPkg_id))
                {
                    NOTIFY_TRANSITION_STARTED("12");
                    NOTIFY_STATE_EXITED("ROOT.Idle");
                    NOTIFY_STATE_ENTERED("ROOT.sendaction_9");
                    pushNullTransition();
                    rootState_subState = sendaction_9;
                    rootState_active = sendaction_9;
                    //#[ state sendaction_9.(Entry) 
                    OUT_PORT(pUc_EmulateFrontandRearGearing)->GEN(evBeginRiding);
                    //#]
                    NOTIFY_TRANSITION_TERMINATED("12");
                    res = eventConsumed;
                }
            else if(IS_EVENT_TYPE_OF(evInitialSettings_EmulateFrontandRearGearingActorPkg_EmulateFrontandRearGearingPkg_FunctionalAnalysisPkg_id))
                {
                    OMSETPARAMS(evInitialSettings);
                    NOTIFY_TRANSITION_STARTED("28");
                    NOTIFY_STATE_EXITED("ROOT.Idle");
                    //#[ transition 28 
                    
                    setNChainRings(params->chainRings);
                    setNCassetteRings(params->cassetteRings);
                    //#]
                    NOTIFY_STATE_ENTERED("ROOT.Idle");
                    rootState_subState = Idle;
                    rootState_active = Idle;
                    NOTIFY_TRANSITION_TERMINATED("28");
                    res = eventConsumed;
                }
            
        }
        break;
        // State sendaction_4
        case sendaction_4:
        {
            if(IS_EVENT_TYPE_OF(OMNullEventId))
                {
                    NOTIFY_TRANSITION_STARTED("3");
                    popNullTransition();
                    NOTIFY_STATE_EXITED("ROOT.sendaction_4");
                    NOTIFY_STATE_ENTERED("ROOT.Idle");
                    rootState_subState = Idle;
                    rootState_active = Idle;
                    NOTIFY_TRANSITION_TERMINATED("3");
                    res = eventConsumed;
                }
            
        }
        break;
        // State sendaction_5
        case sendaction_5:
        {
            if(IS_EVENT_TYPE_OF(OMNullEventId))
                {
                    NOTIFY_TRANSITION_STARTED("6");
                    popNullTransition();
                    NOTIFY_STATE_EXITED("ROOT.sendaction_5");
                    NOTIFY_STATE_ENTERED("ROOT.SettingUp");
                    rootState_subState = SettingUp;
                    rootState_active = SettingUp;
                    NOTIFY_TRANSITION_TERMINATED("6");
                    res = eventConsumed;
                }
            
        }
        break;
        // State sendaction_6
        case sendaction_6:
        {
            if(IS_EVENT_TYPE_OF(OMNullEventId))
                {
                    NOTIFY_TRANSITION_STARTED("8");
                    popNullTransition();
                    NOTIFY_STATE_EXITED("ROOT.sendaction_6");
                    NOTIFY_STATE_ENTERED("ROOT.SettingUp");
                    rootState_subState = SettingUp;
                    rootState_active = SettingUp;
                    NOTIFY_TRANSITION_TERMINATED("8");
                    res = eventConsumed;
                }
            
        }
        break;
        // State sendaction_7
        case sendaction_7:
        {
            if(IS_EVENT_TYPE_OF(OMNullEventId))
                {
                    NOTIFY_TRANSITION_STARTED("10");
                    popNullTransition();
                    NOTIFY_STATE_EXITED("ROOT.sendaction_7");
                    NOTIFY_STATE_ENTERED("ROOT.SettingUp");
                    rootState_subState = SettingUp;
                    rootState_active = SettingUp;
                    NOTIFY_TRANSITION_TERMINATED("10");
                    res = eventConsumed;
                }
            
        }
        break;
        // State sendaction_8
        case sendaction_8:
        {
            if(IS_EVENT_TYPE_OF(OMNullEventId))
                {
                    NOTIFY_TRANSITION_STARTED("25");
                    popNullTransition();
                    NOTIFY_STATE_EXITED("ROOT.sendaction_8");
                    NOTIFY_STATE_ENTERED("ROOT.SettingUp");
                    rootState_subState = SettingUp;
                    rootState_active = SettingUp;
                    NOTIFY_TRANSITION_TERMINATED("25");
                    res = eventConsumed;
                }
            
        }
        break;
        // State sendaction_9
        case sendaction_9:
        {
            if(IS_EVENT_TYPE_OF(OMNullEventId))
                {
                    NOTIFY_TRANSITION_STARTED("13");
                    popNullTransition();
                    NOTIFY_STATE_EXITED("ROOT.sendaction_9");
                    NOTIFY_STATE_ENTERED("ROOT.Riding");
                    rootState_subState = Riding;
                    rootState_active = Riding;
                    NOTIFY_TRANSITION_TERMINATED("13");
                    res = eventConsumed;
                }
            
        }
        break;
        // State sendaction_10
        case sendaction_10:
        {
            if(IS_EVENT_TYPE_OF(OMNullEventId))
                {
                    NOTIFY_TRANSITION_STARTED("15");
                    popNullTransition();
                    NOTIFY_STATE_EXITED("ROOT.sendaction_10");
                    NOTIFY_STATE_ENTERED("ROOT.Idle");
                    rootState_subState = Idle;
                    rootState_active = Idle;
                    NOTIFY_TRANSITION_TERMINATED("15");
                    res = eventConsumed;
                }
            
        }
        break;
        // State sendaction_11
        case sendaction_11:
        {
            if(IS_EVENT_TYPE_OF(OMNullEventId))
                {
                    NOTIFY_TRANSITION_STARTED("17");
                    popNullTransition();
                    NOTIFY_STATE_EXITED("ROOT.sendaction_11");
                    NOTIFY_STATE_ENTERED("ROOT.Riding");
                    rootState_subState = Riding;
                    rootState_active = Riding;
                    NOTIFY_TRANSITION_TERMINATED("17");
                    res = eventConsumed;
                }
            
        }
        break;
        // State sendaction_12
        case sendaction_12:
        {
            if(IS_EVENT_TYPE_OF(OMNullEventId))
                {
                    NOTIFY_TRANSITION_STARTED("19");
                    popNullTransition();
                    NOTIFY_STATE_EXITED("ROOT.sendaction_12");
                    NOTIFY_STATE_ENTERED("ROOT.Riding");
                    rootState_subState = Riding;
                    rootState_active = Riding;
                    NOTIFY_TRANSITION_TERMINATED("19");
                    res = eventConsumed;
                }
            
        }
        break;
        // State sendaction_13
        case sendaction_13:
        {
            if(IS_EVENT_TYPE_OF(OMNullEventId))
                {
                    NOTIFY_TRANSITION_STARTED("21");
                    popNullTransition();
                    NOTIFY_STATE_EXITED("ROOT.sendaction_13");
                    NOTIFY_STATE_ENTERED("ROOT.Riding");
                    rootState_subState = Riding;
                    rootState_active = Riding;
                    NOTIFY_TRANSITION_TERMINATED("21");
                    res = eventConsumed;
                }
            
        }
        break;
        // State sendaction_14
        case sendaction_14:
        {
            if(IS_EVENT_TYPE_OF(OMNullEventId))
                {
                    NOTIFY_TRANSITION_STARTED("23");
                    popNullTransition();
                    NOTIFY_STATE_EXITED("ROOT.sendaction_14");
                    NOTIFY_STATE_ENTERED("ROOT.Riding");
                    rootState_subState = Riding;
                    rootState_active = Riding;
                    NOTIFY_TRANSITION_TERMINATED("23");
                    res = eventConsumed;
                }
            
        }
        break;
        // State sendaction_15
        case sendaction_15:
        {
            if(IS_EVENT_TYPE_OF(OMNullEventId))
                {
                    NOTIFY_TRANSITION_STARTED("27");
                    popNullTransition();
                    NOTIFY_STATE_EXITED("ROOT.sendaction_15");
                    NOTIFY_STATE_ENTERED("ROOT.SettingUp");
                    rootState_subState = SettingUp;
                    rootState_active = SettingUp;
                    NOTIFY_TRANSITION_TERMINATED("27");
                    res = eventConsumed;
                }
            
        }
        break;
        default:
            break;
    }
    return res;
}

IOxfReactive::TakeEventStatus aEFRG_Rider::SettingUp_handleEvent() {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    if(IS_EVENT_TYPE_OF(exShowGearing_EmulateFrontandRearGearingActorPkg_EmulateFrontandRearGearingPkg_FunctionalAnalysisPkg_id))
        {
            NOTIFY_TRANSITION_STARTED("26");
            NOTIFY_STATE_EXITED("ROOT.SettingUp");
            NOTIFY_STATE_ENTERED("ROOT.sendaction_15");
            pushNullTransition();
            rootState_subState = sendaction_15;
            rootState_active = sendaction_15;
            //#[ state sendaction_15.(Entry) 
            OUT_PORT(pUc_EmulateFrontandRearGearing)->GEN(evShowGearing);
            //#]
            NOTIFY_TRANSITION_TERMINATED("26");
            res = eventConsumed;
        }
    else if(IS_EVENT_TYPE_OF(exSetChainRing_EmulateFrontandRearGearingActorPkg_EmulateFrontandRearGearingPkg_FunctionalAnalysisPkg_id))
        {
            NOTIFY_TRANSITION_STARTED("7");
            NOTIFY_STATE_EXITED("ROOT.SettingUp");
            NOTIFY_STATE_ENTERED("ROOT.sendaction_6");
            pushNullTransition();
            rootState_subState = sendaction_6;
            rootState_active = sendaction_6;
            //#[ state sendaction_6.(Entry) 
            OUT_PORT(pUc_EmulateFrontandRearGearing)->GEN(evSetChainRingTeeth(currentChainRing,ringTeeth));
            //#]
            NOTIFY_TRANSITION_TERMINATED("7");
            res = eventConsumed;
        }
    else if(IS_EVENT_TYPE_OF(exSetNCassetteRings_EmulateFrontandRearGearingActorPkg_EmulateFrontandRearGearingPkg_FunctionalAnalysisPkg_id))
        {
            NOTIFY_TRANSITION_STARTED("9");
            NOTIFY_STATE_EXITED("ROOT.SettingUp");
            NOTIFY_STATE_ENTERED("ROOT.sendaction_7");
            pushNullTransition();
            rootState_subState = sendaction_7;
            rootState_active = sendaction_7;
            //#[ state sendaction_7.(Entry) 
            OUT_PORT(pUc_EmulateFrontandRearGearing)->GEN(evSetNumberOfCassetteRings(nCassetteRings));
            //#]
            NOTIFY_TRANSITION_TERMINATED("9");
            res = eventConsumed;
        }
    else if(IS_EVENT_TYPE_OF(exSetNChainRings_EmulateFrontandRearGearingActorPkg_EmulateFrontandRearGearingPkg_FunctionalAnalysisPkg_id))
        {
            NOTIFY_TRANSITION_STARTED("5");
            NOTIFY_STATE_EXITED("ROOT.SettingUp");
            NOTIFY_STATE_ENTERED("ROOT.sendaction_5");
            pushNullTransition();
            rootState_subState = sendaction_5;
            rootState_active = sendaction_5;
            //#[ state sendaction_5.(Entry) 
            OUT_PORT(pUc_EmulateFrontandRearGearing)->GEN(evSetNumberOfChainRings(nChainRings));
            //#]
            NOTIFY_TRANSITION_TERMINATED("5");
            res = eventConsumed;
        }
    else if(IS_EVENT_TYPE_OF(exSetCassetteRing_EmulateFrontandRearGearingActorPkg_EmulateFrontandRearGearingPkg_FunctionalAnalysisPkg_id))
        {
            NOTIFY_TRANSITION_STARTED("11");
            NOTIFY_STATE_EXITED("ROOT.SettingUp");
            NOTIFY_STATE_ENTERED("ROOT.sendaction_8");
            pushNullTransition();
            rootState_subState = sendaction_8;
            rootState_active = sendaction_8;
            //#[ state sendaction_8.(Entry) 
            OUT_PORT(pUc_EmulateFrontandRearGearing)->GEN(evSetCassetteRingTeeth(currentCassetteRing,ringTeeth));
            //#]
            NOTIFY_TRANSITION_TERMINATED("11");
            res = eventConsumed;
        }
    else if(IS_EVENT_TYPE_OF(exDoneConfiguring_EmulateFrontandRearGearingActorPkg_EmulateFrontandRearGearingPkg_FunctionalAnalysisPkg_id))
        {
            NOTIFY_TRANSITION_STARTED("2");
            NOTIFY_STATE_EXITED("ROOT.SettingUp");
            NOTIFY_STATE_ENTERED("ROOT.sendaction_4");
            pushNullTransition();
            rootState_subState = sendaction_4;
            rootState_active = sendaction_4;
            //#[ state sendaction_4.(Entry) 
            OUT_PORT(pUc_EmulateFrontandRearGearing)->GEN(evDoneConfiguring);
            //#]
            NOTIFY_TRANSITION_TERMINATED("2");
            res = eventConsumed;
        }
    
    return res;
}

IOxfReactive::TakeEventStatus aEFRG_Rider::Riding_handleEvent() {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    if(IS_EVENT_TYPE_OF(exDecRear_EmulateFrontandRearGearingActorPkg_EmulateFrontandRearGearingPkg_FunctionalAnalysisPkg_id))
        {
            NOTIFY_TRANSITION_STARTED("22");
            NOTIFY_STATE_EXITED("ROOT.Riding");
            NOTIFY_STATE_ENTERED("ROOT.sendaction_14");
            pushNullTransition();
            rootState_subState = sendaction_14;
            rootState_active = sendaction_14;
            //#[ state sendaction_14.(Entry) 
            OUT_PORT(pUc_EmulateFrontandRearGearing)->GEN(evDecrementRearGear);
            //#]
            NOTIFY_TRANSITION_TERMINATED("22");
            res = eventConsumed;
        }
    else if(IS_EVENT_TYPE_OF(exDecFront_EmulateFrontandRearGearingActorPkg_EmulateFrontandRearGearingPkg_FunctionalAnalysisPkg_id))
        {
            NOTIFY_TRANSITION_STARTED("18");
            NOTIFY_STATE_EXITED("ROOT.Riding");
            NOTIFY_STATE_ENTERED("ROOT.sendaction_12");
            pushNullTransition();
            rootState_subState = sendaction_12;
            rootState_active = sendaction_12;
            //#[ state sendaction_12.(Entry) 
            OUT_PORT(pUc_EmulateFrontandRearGearing)->GEN(evDecrementFrontGear);
            //#]
            NOTIFY_TRANSITION_TERMINATED("18");
            res = eventConsumed;
        }
    else if(IS_EVENT_TYPE_OF(exAugRear_EmulateFrontandRearGearingActorPkg_EmulateFrontandRearGearingPkg_FunctionalAnalysisPkg_id))
        {
            NOTIFY_TRANSITION_STARTED("20");
            NOTIFY_STATE_EXITED("ROOT.Riding");
            NOTIFY_STATE_ENTERED("ROOT.sendaction_13");
            pushNullTransition();
            rootState_subState = sendaction_13;
            rootState_active = sendaction_13;
            //#[ state sendaction_13.(Entry) 
            OUT_PORT(pUc_EmulateFrontandRearGearing)->GEN(evAugmentRearGear);
            //#]
            NOTIFY_TRANSITION_TERMINATED("20");
            res = eventConsumed;
        }
    else if(IS_EVENT_TYPE_OF(evCurrentGearing_EmulateFrontandRearGearingActorPkg_EmulateFrontandRearGearingPkg_FunctionalAnalysisPkg_id))
        {
            OMSETPARAMS(evCurrentGearing);
            NOTIFY_TRANSITION_STARTED("24");
            NOTIFY_STATE_EXITED("ROOT.Riding");
            //#[ transition 24 
            
            currentChainRing = params->front;
            currentCassetteRing = params->rear;
            //#]
            NOTIFY_STATE_ENTERED("ROOT.Riding");
            rootState_subState = Riding;
            rootState_active = Riding;
            NOTIFY_TRANSITION_TERMINATED("24");
            res = eventConsumed;
        }
    else if(IS_EVENT_TYPE_OF(exAugFront_EmulateFrontandRearGearingActorPkg_EmulateFrontandRearGearingPkg_FunctionalAnalysisPkg_id))
        {
            NOTIFY_TRANSITION_STARTED("16");
            NOTIFY_STATE_EXITED("ROOT.Riding");
            NOTIFY_STATE_ENTERED("ROOT.sendaction_11");
            pushNullTransition();
            rootState_subState = sendaction_11;
            rootState_active = sendaction_11;
            //#[ state sendaction_11.(Entry) 
            OUT_PORT(pUc_EmulateFrontandRearGearing)->GEN(evAugmentFrontGear);
            //#]
            NOTIFY_TRANSITION_TERMINATED("16");
            res = eventConsumed;
        }
    else if(IS_EVENT_TYPE_OF(exDoneRiding_EmulateFrontandRearGearingActorPkg_EmulateFrontandRearGearingPkg_FunctionalAnalysisPkg_id))
        {
            NOTIFY_TRANSITION_STARTED("14");
            NOTIFY_STATE_EXITED("ROOT.Riding");
            NOTIFY_STATE_ENTERED("ROOT.sendaction_10");
            pushNullTransition();
            rootState_subState = sendaction_10;
            rootState_active = sendaction_10;
            //#[ state sendaction_10.(Entry) 
            OUT_PORT(pUc_EmulateFrontandRearGearing)->GEN(evDoneRiding);
            //#]
            NOTIFY_TRANSITION_TERMINATED("14");
            res = eventConsumed;
        }
    
    return res;
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedaEFRG_Rider::serializeAttributes(AOMSAttributes* aomsAttributes) const {
    aomsAttributes->addAttribute("nChainRings", x2String(myReal->nChainRings));
    aomsAttributes->addAttribute("nCassetteRings", x2String(myReal->nCassetteRings));
    aomsAttributes->addAttribute("currentChainRing", x2String(myReal->currentChainRing));
    aomsAttributes->addAttribute("currentCassetteRing", x2String(myReal->currentCassetteRing));
    aomsAttributes->addAttribute("ringTeeth", x2String(myReal->ringTeeth));
}

void OMAnimatedaEFRG_Rider::serializeRelations(AOMSRelations* aomsRelations) const {
}

void OMAnimatedaEFRG_Rider::rootState_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT");
    switch (myReal->rootState_subState) {
        case aEFRG_Rider::SettingUp:
        {
            SettingUp_serializeStates(aomsState);
        }
        break;
        case aEFRG_Rider::Riding:
        {
            Riding_serializeStates(aomsState);
        }
        break;
        case aEFRG_Rider::sendaction_2:
        {
            sendaction_2_serializeStates(aomsState);
        }
        break;
        case aEFRG_Rider::Idle:
        {
            Idle_serializeStates(aomsState);
        }
        break;
        case aEFRG_Rider::sendaction_4:
        {
            sendaction_4_serializeStates(aomsState);
        }
        break;
        case aEFRG_Rider::sendaction_5:
        {
            sendaction_5_serializeStates(aomsState);
        }
        break;
        case aEFRG_Rider::sendaction_6:
        {
            sendaction_6_serializeStates(aomsState);
        }
        break;
        case aEFRG_Rider::sendaction_7:
        {
            sendaction_7_serializeStates(aomsState);
        }
        break;
        case aEFRG_Rider::sendaction_8:
        {
            sendaction_8_serializeStates(aomsState);
        }
        break;
        case aEFRG_Rider::sendaction_9:
        {
            sendaction_9_serializeStates(aomsState);
        }
        break;
        case aEFRG_Rider::sendaction_10:
        {
            sendaction_10_serializeStates(aomsState);
        }
        break;
        case aEFRG_Rider::sendaction_11:
        {
            sendaction_11_serializeStates(aomsState);
        }
        break;
        case aEFRG_Rider::sendaction_12:
        {
            sendaction_12_serializeStates(aomsState);
        }
        break;
        case aEFRG_Rider::sendaction_13:
        {
            sendaction_13_serializeStates(aomsState);
        }
        break;
        case aEFRG_Rider::sendaction_14:
        {
            sendaction_14_serializeStates(aomsState);
        }
        break;
        case aEFRG_Rider::sendaction_15:
        {
            sendaction_15_serializeStates(aomsState);
        }
        break;
        default:
            break;
    }
}

void OMAnimatedaEFRG_Rider::SettingUp_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.SettingUp");
}

void OMAnimatedaEFRG_Rider::sendaction_9_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.sendaction_9");
}

void OMAnimatedaEFRG_Rider::sendaction_8_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.sendaction_8");
}

void OMAnimatedaEFRG_Rider::sendaction_7_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.sendaction_7");
}

void OMAnimatedaEFRG_Rider::sendaction_6_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.sendaction_6");
}

void OMAnimatedaEFRG_Rider::sendaction_5_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.sendaction_5");
}

void OMAnimatedaEFRG_Rider::sendaction_4_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.sendaction_4");
}

void OMAnimatedaEFRG_Rider::sendaction_2_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.sendaction_2");
}

void OMAnimatedaEFRG_Rider::sendaction_15_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.sendaction_15");
}

void OMAnimatedaEFRG_Rider::sendaction_14_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.sendaction_14");
}

void OMAnimatedaEFRG_Rider::sendaction_13_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.sendaction_13");
}

void OMAnimatedaEFRG_Rider::sendaction_12_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.sendaction_12");
}

void OMAnimatedaEFRG_Rider::sendaction_11_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.sendaction_11");
}

void OMAnimatedaEFRG_Rider::sendaction_10_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.sendaction_10");
}

void OMAnimatedaEFRG_Rider::Riding_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.Riding");
}

void OMAnimatedaEFRG_Rider::Idle_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.Idle");
}
//#]

IMPLEMENT_REACTIVE_META_P(aEFRG_Rider, FunctionalAnalysisPkg_EmulateFrontandRearGearingPkg_EmulateFrontandRearGearingActorPkg, FunctionalAnalysisPkg::EmulateFrontandRearGearingPkg::EmulateFrontandRearGearingActorPkg, false, OMAnimatedaEFRG_Rider)

IMPLEMENT_META_OP(OMAnimatedaEFRG_Rider, FunctionalAnalysisPkg_EmulateFrontandRearGearingPkg_EmulateFrontandRearGearingActorPkg_aEFRG_Rider_setCurrentCassetteRing_int, "setCurrentCassetteRing", FALSE, "setCurrentCassetteRing(int)", 1)

IMPLEMENT_OP_CALL(FunctionalAnalysisPkg_EmulateFrontandRearGearingPkg_EmulateFrontandRearGearingActorPkg_aEFRG_Rider_setCurrentCassetteRing_int, aEFRG_Rider, setCurrentCassetteRing(p_currentCassetteRing), NO_OP())

IMPLEMENT_META_OP(OMAnimatedaEFRG_Rider, FunctionalAnalysisPkg_EmulateFrontandRearGearingPkg_EmulateFrontandRearGearingActorPkg_aEFRG_Rider_setCurrentChainRing_int, "setCurrentChainRing", FALSE, "setCurrentChainRing(int)", 1)

IMPLEMENT_OP_CALL(FunctionalAnalysisPkg_EmulateFrontandRearGearingPkg_EmulateFrontandRearGearingActorPkg_aEFRG_Rider_setCurrentChainRing_int, aEFRG_Rider, setCurrentChainRing(p_currentChainRing), NO_OP())

IMPLEMENT_META_OP(OMAnimatedaEFRG_Rider, FunctionalAnalysisPkg_EmulateFrontandRearGearingPkg_EmulateFrontandRearGearingActorPkg_aEFRG_Rider_setNCassetteRings_int, "setNCassetteRings", FALSE, "setNCassetteRings(int)", 1)

IMPLEMENT_OP_CALL(FunctionalAnalysisPkg_EmulateFrontandRearGearingPkg_EmulateFrontandRearGearingActorPkg_aEFRG_Rider_setNCassetteRings_int, aEFRG_Rider, setNCassetteRings(p_nCassetteRings), NO_OP())

IMPLEMENT_META_OP(OMAnimatedaEFRG_Rider, FunctionalAnalysisPkg_EmulateFrontandRearGearingPkg_EmulateFrontandRearGearingActorPkg_aEFRG_Rider_setNChainRings_int, "setNChainRings", FALSE, "setNChainRings(int)", 1)

IMPLEMENT_OP_CALL(FunctionalAnalysisPkg_EmulateFrontandRearGearingPkg_EmulateFrontandRearGearingActorPkg_aEFRG_Rider_setNChainRings_int, aEFRG_Rider, setNChainRings(p_nChainRings), NO_OP())

IMPLEMENT_META_OP(OMAnimatedaEFRG_Rider, FunctionalAnalysisPkg_EmulateFrontandRearGearingPkg_EmulateFrontandRearGearingActorPkg_aEFRG_Rider_setRingTeeth_int, "setRingTeeth", FALSE, "setRingTeeth(int)", 1)

IMPLEMENT_OP_CALL(FunctionalAnalysisPkg_EmulateFrontandRearGearingPkg_EmulateFrontandRearGearingActorPkg_aEFRG_Rider_setRingTeeth_int, aEFRG_Rider, setRingTeeth(p_ringTeeth), NO_OP())
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: Emulate_Front_and_Rear_GearingSim/Animate/aEFRG_Rider.cpp
*********************************************************************/
