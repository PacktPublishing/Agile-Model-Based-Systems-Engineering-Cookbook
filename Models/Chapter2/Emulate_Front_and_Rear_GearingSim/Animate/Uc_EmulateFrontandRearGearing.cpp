/********************************************************************
	Rhapsody	: 8.4 
	Login		: Bruce
	Component	: Emulate_Front_and_Rear_GearingSim 
	Configuration 	: Animate
	Model Element	: Uc_EmulateFrontandRearGearing
//!	Generated Date	: Mon, 2, Mar 2020  
	File Path	: Emulate_Front_and_Rear_GearingSim/Animate/Uc_EmulateFrontandRearGearing.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX

#define _OMSTATECHART_ANIMATED
//#]

//## auto_generated
#include "Uc_EmulateFrontandRearGearing.h"
//## event evCurrentGearing(unsigned int,unsigned int)
#include "EmulateFrontandRearGearingActorPkg.h"
//#[ ignore
#define FunctionalAnalysisPkg_EmulateFrontandRearGearingPkg_Uc_EmulateFrontandRearGearing_computeGearInches_SERIALIZE \
    aomsmethod->addAttribute("front", x2String(front));\
    aomsmethod->addAttribute("rear", x2String(rear));
#define FunctionalAnalysisPkg_EmulateFrontandRearGearingPkg_Uc_EmulateFrontandRearGearing_display1Num_SERIALIZE \
    aomsmethod->addAttribute("s", x2String(s));\
    aomsmethod->addAttribute("num", x2String(num));
#define FunctionalAnalysisPkg_EmulateFrontandRearGearingPkg_Uc_EmulateFrontandRearGearing_display2Num_SERIALIZE \
    aomsmethod->addAttribute("s1", x2String(s1));\
    aomsmethod->addAttribute("n1", x2String(n1));\
    aomsmethod->addAttribute("s2", x2String(s2));\
    aomsmethod->addAttribute("n2", x2String(n2));
#define FunctionalAnalysisPkg_EmulateFrontandRearGearingPkg_Uc_EmulateFrontandRearGearing_selectGear_SERIALIZE \
    aomsmethod->addAttribute("frontRing", x2String(frontRing));\
    aomsmethod->addAttribute("rearRing", x2String(rearRing));
#define FunctionalAnalysisPkg_EmulateFrontandRearGearingPkg_Uc_EmulateFrontandRearGearing_setCassetteRing_SERIALIZE \
    aomsmethod->addAttribute("ring", x2String(ring));\
    aomsmethod->addAttribute("teeth", x2String(teeth));
#define FunctionalAnalysisPkg_EmulateFrontandRearGearingPkg_Uc_EmulateFrontandRearGearing_setFrontChainRing_SERIALIZE \
    aomsmethod->addAttribute("ring", x2String(ring));\
    aomsmethod->addAttribute("teeth", x2String(teeth));
#define FunctionalAnalysisPkg_EmulateFrontandRearGearingPkg_Uc_EmulateFrontandRearGearing_Uc_EmulateFrontandRearGearing_SERIALIZE OM_NO_OP

#define FunctionalAnalysisPkg_EmulateFrontandRearGearingPkg_Uc_EmulateFrontandRearGearing_augmentFrontGear_SERIALIZE OM_NO_OP

#define FunctionalAnalysisPkg_EmulateFrontandRearGearingPkg_Uc_EmulateFrontandRearGearing_augmentRearGear_SERIALIZE OM_NO_OP

#define FunctionalAnalysisPkg_EmulateFrontandRearGearingPkg_Uc_EmulateFrontandRearGearing_cassetteRingTeethOK_SERIALIZE aomsmethod->addAttribute("teeth", x2String(teeth));

#define FunctionalAnalysisPkg_EmulateFrontandRearGearingPkg_Uc_EmulateFrontandRearGearing_chainRingTeethOK_SERIALIZE aomsmethod->addAttribute("teeth", x2String(teeth));

#define FunctionalAnalysisPkg_EmulateFrontandRearGearingPkg_Uc_EmulateFrontandRearGearing_decrementFrontGear_SERIALIZE OM_NO_OP

#define FunctionalAnalysisPkg_EmulateFrontandRearGearingPkg_Uc_EmulateFrontandRearGearing_decrementRearGear_SERIALIZE OM_NO_OP

#define FunctionalAnalysisPkg_EmulateFrontandRearGearingPkg_Uc_EmulateFrontandRearGearing_displayError_SERIALIZE aomsmethod->addAttribute("s", x2String(s));

#define FunctionalAnalysisPkg_EmulateFrontandRearGearingPkg_Uc_EmulateFrontandRearGearing_displayGearing_SERIALIZE OM_NO_OP

#define FunctionalAnalysisPkg_EmulateFrontandRearGearingPkg_Uc_EmulateFrontandRearGearing_numberOfCassetteRingsOK_SERIALIZE aomsmethod->addAttribute("n", x2String(n));

#define FunctionalAnalysisPkg_EmulateFrontandRearGearingPkg_Uc_EmulateFrontandRearGearing_numberOfChainRingsOK_SERIALIZE aomsmethod->addAttribute("n", x2String(n));

#define FunctionalAnalysisPkg_EmulateFrontandRearGearingPkg_Uc_EmulateFrontandRearGearing_setDefaultsForCassetteRings_SERIALIZE aomsmethod->addAttribute("rings", x2String(rings));

#define FunctionalAnalysisPkg_EmulateFrontandRearGearingPkg_Uc_EmulateFrontandRearGearing_setDefaultsForChainRings_SERIALIZE aomsmethod->addAttribute("rings", x2String(rings));

#define OMAnim_FunctionalAnalysisPkg_EmulateFrontandRearGearingPkg_Uc_EmulateFrontandRearGearing_setGearInches_RhpReal_UNSERIALIZE_ARGS OP_UNSER(OMDestructiveString2X,p_gearInches)

#define OMAnim_FunctionalAnalysisPkg_EmulateFrontandRearGearingPkg_Uc_EmulateFrontandRearGearing_setGearInches_RhpReal_SERIALIZE_RET_VAL

#define OMAnim_FunctionalAnalysisPkg_EmulateFrontandRearGearingPkg_Uc_EmulateFrontandRearGearing_setNCassetteRings_int_UNSERIALIZE_ARGS OP_UNSER(OMDestructiveString2X,p_nCassetteRings)

#define OMAnim_FunctionalAnalysisPkg_EmulateFrontandRearGearingPkg_Uc_EmulateFrontandRearGearing_setNCassetteRings_int_SERIALIZE_RET_VAL

#define OMAnim_FunctionalAnalysisPkg_EmulateFrontandRearGearingPkg_Uc_EmulateFrontandRearGearing_setNFrontChainRings_int_UNSERIALIZE_ARGS OP_UNSER(OMDestructiveString2X,p_nFrontChainRings)

#define OMAnim_FunctionalAnalysisPkg_EmulateFrontandRearGearingPkg_Uc_EmulateFrontandRearGearing_setNFrontChainRings_int_SERIALIZE_RET_VAL

#define OMAnim_FunctionalAnalysisPkg_EmulateFrontandRearGearingPkg_Uc_EmulateFrontandRearGearing_setSelectedCassetteRing_int_UNSERIALIZE_ARGS OP_UNSER(OMDestructiveString2X,p_selectedCassetteRing)

#define OMAnim_FunctionalAnalysisPkg_EmulateFrontandRearGearingPkg_Uc_EmulateFrontandRearGearing_setSelectedCassetteRing_int_SERIALIZE_RET_VAL

#define OMAnim_FunctionalAnalysisPkg_EmulateFrontandRearGearingPkg_Uc_EmulateFrontandRearGearing_setSelectedChainRing_int_UNSERIALIZE_ARGS OP_UNSER(OMDestructiveString2X,p_selectedChainRing)

#define OMAnim_FunctionalAnalysisPkg_EmulateFrontandRearGearingPkg_Uc_EmulateFrontandRearGearing_setSelectedChainRing_int_SERIALIZE_RET_VAL
//#]

//## package FunctionalAnalysisPkg::EmulateFrontandRearGearingPkg

//## class Uc_EmulateFrontandRearGearing
//#[ ignore
Uc_EmulateFrontandRearGearing::paEFRG_TrainingApp_C::paEFRG_TrainingApp_C() : _p_(0) {
    itsEvCurrentGearing_ProxyReceptionInterface = NULL;
}

Uc_EmulateFrontandRearGearing::paEFRG_TrainingApp_C::~paEFRG_TrainingApp_C() {
    cleanUpRelations();
}

evCurrentGearing_ProxyReceptionInterface* Uc_EmulateFrontandRearGearing::paEFRG_TrainingApp_C::getItsEvCurrentGearing_ProxyReceptionInterface() {
    return this;
}

evCurrentGearing_ProxyReceptionInterface* Uc_EmulateFrontandRearGearing::paEFRG_TrainingApp_C::getOutBound() {
    return this;
}

bool Uc_EmulateFrontandRearGearing::paEFRG_TrainingApp_C::send(IOxfEvent* event, const IOxfEventGenerationParams& params) {
    bool res = false;
    if (event != NULL) {
        if (itsEvCurrentGearing_ProxyReceptionInterface != NULL) {
            if (event->isTypeOf(evCurrentGearing_EmulateFrontandRearGearingActorPkg_EmulateFrontandRearGearingPkg_FunctionalAnalysisPkg_id)) {
                res = itsEvCurrentGearing_ProxyReceptionInterface->send(event, params);
            }
        }
    }
    return res;
    
}

bool Uc_EmulateFrontandRearGearing::paEFRG_TrainingApp_C::send(IOxfEvent* event) {
    bool res = false;
    if (event != NULL) {
        if (itsEvCurrentGearing_ProxyReceptionInterface != NULL) {
            if (event->isTypeOf(evCurrentGearing_EmulateFrontandRearGearingActorPkg_EmulateFrontandRearGearingPkg_FunctionalAnalysisPkg_id)) {
                res = itsEvCurrentGearing_ProxyReceptionInterface->send(event);
            }
        }
    }
    return res;
    
}

void Uc_EmulateFrontandRearGearing::paEFRG_TrainingApp_C::setItsEvCurrentGearing_ProxyReceptionInterface(OMReactive* p_OMReactive) {
    itsEvCurrentGearing_ProxyReceptionInterface = p_OMReactive;
}

void Uc_EmulateFrontandRearGearing::paEFRG_TrainingApp_C::cleanUpRelations() {
    if(itsEvCurrentGearing_ProxyReceptionInterface != NULL)
        {
            itsEvCurrentGearing_ProxyReceptionInterface = NULL;
        }
}

Uc_EmulateFrontandRearGearing::paEFRG_Rider_C::InBound_C::InBound_C() {
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
    port = NULL;
}

Uc_EmulateFrontandRearGearing::paEFRG_Rider_C::InBound_C::~InBound_C() {
    cleanUpRelations();
}

bool Uc_EmulateFrontandRearGearing::paEFRG_Rider_C::InBound_C::send(IOxfEvent* event, const IOxfEventGenerationParams& params) {
    bool res = false;
    if (event != NULL) {
        event->setPort(getPort());
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

bool Uc_EmulateFrontandRearGearing::paEFRG_Rider_C::InBound_C::send(IOxfEvent* event) {
    bool res = false;
    if (event != NULL) {
        event->setPort(getPort());
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

void Uc_EmulateFrontandRearGearing::paEFRG_Rider_C::InBound_C::setItsEvAugmentFrontGear_ProxyReceptionInterface(evAugmentFrontGear_ProxyReceptionInterface* p_evAugmentFrontGear_ProxyReceptionInterface) {
    itsEvAugmentFrontGear_ProxyReceptionInterface = p_evAugmentFrontGear_ProxyReceptionInterface;
}

void Uc_EmulateFrontandRearGearing::paEFRG_Rider_C::InBound_C::setItsEvAugmentRearGear_ProxyReceptionInterface(evAugmentRearGear_ProxyReceptionInterface* p_evAugmentRearGear_ProxyReceptionInterface) {
    itsEvAugmentRearGear_ProxyReceptionInterface = p_evAugmentRearGear_ProxyReceptionInterface;
}

void Uc_EmulateFrontandRearGearing::paEFRG_Rider_C::InBound_C::setItsEvBeginRiding_ProxyReceptionInterface(evBeginRiding_ProxyReceptionInterface* p_evBeginRiding_ProxyReceptionInterface) {
    itsEvBeginRiding_ProxyReceptionInterface = p_evBeginRiding_ProxyReceptionInterface;
}

void Uc_EmulateFrontandRearGearing::paEFRG_Rider_C::InBound_C::setItsEvConfigureGearing_ProxyReceptionInterface(evConfigureGearing_ProxyReceptionInterface* p_evConfigureGearing_ProxyReceptionInterface) {
    itsEvConfigureGearing_ProxyReceptionInterface = p_evConfigureGearing_ProxyReceptionInterface;
}

void Uc_EmulateFrontandRearGearing::paEFRG_Rider_C::InBound_C::setItsEvDecrementFrontGear_ProxyReceptionInterface(evDecrementFrontGear_ProxyReceptionInterface* p_evDecrementFrontGear_ProxyReceptionInterface) {
    itsEvDecrementFrontGear_ProxyReceptionInterface = p_evDecrementFrontGear_ProxyReceptionInterface;
}

void Uc_EmulateFrontandRearGearing::paEFRG_Rider_C::InBound_C::setItsEvDecrementRearGear_ProxyReceptionInterface(evDecrementRearGear_ProxyReceptionInterface* p_evDecrementRearGear_ProxyReceptionInterface) {
    itsEvDecrementRearGear_ProxyReceptionInterface = p_evDecrementRearGear_ProxyReceptionInterface;
}

void Uc_EmulateFrontandRearGearing::paEFRG_Rider_C::InBound_C::setItsEvDoneConfiguring_ProxyReceptionInterface(evDoneConfiguring_ProxyReceptionInterface* p_evDoneConfiguring_ProxyReceptionInterface) {
    itsEvDoneConfiguring_ProxyReceptionInterface = p_evDoneConfiguring_ProxyReceptionInterface;
}

void Uc_EmulateFrontandRearGearing::paEFRG_Rider_C::InBound_C::setItsEvDoneRiding_ProxyReceptionInterface(evDoneRiding_ProxyReceptionInterface* p_evDoneRiding_ProxyReceptionInterface) {
    itsEvDoneRiding_ProxyReceptionInterface = p_evDoneRiding_ProxyReceptionInterface;
}

void Uc_EmulateFrontandRearGearing::paEFRG_Rider_C::InBound_C::setItsEvSetCassetteRingTeeth_ProxyReceptionInterface(evSetCassetteRingTeeth_ProxyReceptionInterface* p_evSetCassetteRingTeeth_ProxyReceptionInterface) {
    itsEvSetCassetteRingTeeth_ProxyReceptionInterface = p_evSetCassetteRingTeeth_ProxyReceptionInterface;
}

void Uc_EmulateFrontandRearGearing::paEFRG_Rider_C::InBound_C::setItsEvSetChainRingTeeth_ProxyReceptionInterface(evSetChainRingTeeth_ProxyReceptionInterface* p_evSetChainRingTeeth_ProxyReceptionInterface) {
    itsEvSetChainRingTeeth_ProxyReceptionInterface = p_evSetChainRingTeeth_ProxyReceptionInterface;
}

void Uc_EmulateFrontandRearGearing::paEFRG_Rider_C::InBound_C::setItsEvSetNumberOfCassetteRings_ProxyReceptionInterface(evSetNumberOfCassetteRings_ProxyReceptionInterface* p_evSetNumberOfCassetteRings_ProxyReceptionInterface) {
    itsEvSetNumberOfCassetteRings_ProxyReceptionInterface = p_evSetNumberOfCassetteRings_ProxyReceptionInterface;
}

void Uc_EmulateFrontandRearGearing::paEFRG_Rider_C::InBound_C::setItsEvSetNumberOfChainRings_ProxyReceptionInterface(evSetNumberOfChainRings_ProxyReceptionInterface* p_evSetNumberOfChainRings_ProxyReceptionInterface) {
    itsEvSetNumberOfChainRings_ProxyReceptionInterface = p_evSetNumberOfChainRings_ProxyReceptionInterface;
}

void Uc_EmulateFrontandRearGearing::paEFRG_Rider_C::InBound_C::setItsEvShowGearing_ProxyReceptionInterface(evShowGearing_ProxyReceptionInterface* p_evShowGearing_ProxyReceptionInterface) {
    itsEvShowGearing_ProxyReceptionInterface = p_evShowGearing_ProxyReceptionInterface;
}

Uc_EmulateFrontandRearGearing::paEFRG_Rider_C* Uc_EmulateFrontandRearGearing::paEFRG_Rider_C::InBound_C::getPort() const {
    return port;
}

void Uc_EmulateFrontandRearGearing::paEFRG_Rider_C::InBound_C::setPort(Uc_EmulateFrontandRearGearing::paEFRG_Rider_C* p_paEFRG_Rider_C) {
    _setPort(p_paEFRG_Rider_C);
}

void Uc_EmulateFrontandRearGearing::paEFRG_Rider_C::InBound_C::cleanUpRelations() {
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
    if(port != NULL)
        {
            port = NULL;
        }
}

void Uc_EmulateFrontandRearGearing::paEFRG_Rider_C::InBound_C::__setPort(Uc_EmulateFrontandRearGearing::paEFRG_Rider_C* p_paEFRG_Rider_C) {
    port = p_paEFRG_Rider_C;
}

void Uc_EmulateFrontandRearGearing::paEFRG_Rider_C::InBound_C::_setPort(Uc_EmulateFrontandRearGearing::paEFRG_Rider_C* p_paEFRG_Rider_C) {
    __setPort(p_paEFRG_Rider_C);
}

void Uc_EmulateFrontandRearGearing::paEFRG_Rider_C::InBound_C::_clearPort() {
    port = NULL;
}

Uc_EmulateFrontandRearGearing::paEFRG_Rider_C::OutBound_C::OutBound_C() {
    itsEvCurrentGearing_ProxyReceptionInterface = NULL;
    itsEvInitialSettings_ProxyReceptionInterface = NULL;
}

Uc_EmulateFrontandRearGearing::paEFRG_Rider_C::OutBound_C::~OutBound_C() {
    cleanUpRelations();
}

bool Uc_EmulateFrontandRearGearing::paEFRG_Rider_C::OutBound_C::send(IOxfEvent* event, const IOxfEventGenerationParams& params) {
    bool res = false;
    if (event != NULL) {
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

bool Uc_EmulateFrontandRearGearing::paEFRG_Rider_C::OutBound_C::send(IOxfEvent* event) {
    bool res = false;
    if (event != NULL) {
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

void Uc_EmulateFrontandRearGearing::paEFRG_Rider_C::OutBound_C::setItsEvCurrentGearing_ProxyReceptionInterface(OMReactive* p_OMReactive) {
    itsEvCurrentGearing_ProxyReceptionInterface = p_OMReactive;
}

void Uc_EmulateFrontandRearGearing::paEFRG_Rider_C::OutBound_C::setItsEvInitialSettings_ProxyReceptionInterface(OMReactive* p_OMReactive) {
    itsEvInitialSettings_ProxyReceptionInterface = p_OMReactive;
}

void Uc_EmulateFrontandRearGearing::paEFRG_Rider_C::OutBound_C::cleanUpRelations() {
    if(itsEvCurrentGearing_ProxyReceptionInterface != NULL)
        {
            itsEvCurrentGearing_ProxyReceptionInterface = NULL;
        }
    if(itsEvInitialSettings_ProxyReceptionInterface != NULL)
        {
            itsEvInitialSettings_ProxyReceptionInterface = NULL;
        }
}

Uc_EmulateFrontandRearGearing::paEFRG_Rider_C::paEFRG_Rider_C() : _p_(0) {
    initRelations();
}

Uc_EmulateFrontandRearGearing::paEFRG_Rider_C::~paEFRG_Rider_C() {
}

void Uc_EmulateFrontandRearGearing::paEFRG_Rider_C::connectUc_EmulateFrontandRearGearing(Uc_EmulateFrontandRearGearing* part) {
    InBound.setItsEvAugmentFrontGear_ProxyReceptionInterface(part);
    InBound.setItsEvAugmentRearGear_ProxyReceptionInterface(part);
    InBound.setItsEvBeginRiding_ProxyReceptionInterface(part);
    InBound.setItsEvConfigureGearing_ProxyReceptionInterface(part);
    InBound.setItsEvDecrementFrontGear_ProxyReceptionInterface(part);
    InBound.setItsEvDecrementRearGear_ProxyReceptionInterface(part);
    InBound.setItsEvDoneConfiguring_ProxyReceptionInterface(part);
    InBound.setItsEvDoneRiding_ProxyReceptionInterface(part);
    InBound.setItsEvSetCassetteRingTeeth_ProxyReceptionInterface(part);
    InBound.setItsEvSetChainRingTeeth_ProxyReceptionInterface(part);
    InBound.setItsEvSetNumberOfCassetteRings_ProxyReceptionInterface(part);
    InBound.setItsEvSetNumberOfChainRings_ProxyReceptionInterface(part);
    InBound.setItsEvShowGearing_ProxyReceptionInterface(part);
    InBound.setPort(this); // for IS_PORT macro support
    
}

evAugmentFrontGear_ProxyReceptionInterface* Uc_EmulateFrontandRearGearing::paEFRG_Rider_C::getItsEvAugmentFrontGear_ProxyReceptionInterface() {
    return &InBound;
}

evAugmentRearGear_ProxyReceptionInterface* Uc_EmulateFrontandRearGearing::paEFRG_Rider_C::getItsEvAugmentRearGear_ProxyReceptionInterface() {
    return &InBound;
}

evBeginRiding_ProxyReceptionInterface* Uc_EmulateFrontandRearGearing::paEFRG_Rider_C::getItsEvBeginRiding_ProxyReceptionInterface() {
    return &InBound;
}

evConfigureGearing_ProxyReceptionInterface* Uc_EmulateFrontandRearGearing::paEFRG_Rider_C::getItsEvConfigureGearing_ProxyReceptionInterface() {
    return &InBound;
}

evCurrentGearing_ProxyReceptionInterface* Uc_EmulateFrontandRearGearing::paEFRG_Rider_C::getItsEvCurrentGearing_ProxyReceptionInterface() {
    return &OutBound;
}

evDecrementFrontGear_ProxyReceptionInterface* Uc_EmulateFrontandRearGearing::paEFRG_Rider_C::getItsEvDecrementFrontGear_ProxyReceptionInterface() {
    return &InBound;
}

evDecrementRearGear_ProxyReceptionInterface* Uc_EmulateFrontandRearGearing::paEFRG_Rider_C::getItsEvDecrementRearGear_ProxyReceptionInterface() {
    return &InBound;
}

evDoneConfiguring_ProxyReceptionInterface* Uc_EmulateFrontandRearGearing::paEFRG_Rider_C::getItsEvDoneConfiguring_ProxyReceptionInterface() {
    return &InBound;
}

evDoneRiding_ProxyReceptionInterface* Uc_EmulateFrontandRearGearing::paEFRG_Rider_C::getItsEvDoneRiding_ProxyReceptionInterface() {
    return &InBound;
}

evInitialSettings_ProxyReceptionInterface* Uc_EmulateFrontandRearGearing::paEFRG_Rider_C::getItsEvInitialSettings_ProxyReceptionInterface() {
    return &OutBound;
}

evSetCassetteRingTeeth_ProxyReceptionInterface* Uc_EmulateFrontandRearGearing::paEFRG_Rider_C::getItsEvSetCassetteRingTeeth_ProxyReceptionInterface() {
    return &InBound;
}

evSetChainRingTeeth_ProxyReceptionInterface* Uc_EmulateFrontandRearGearing::paEFRG_Rider_C::getItsEvSetChainRingTeeth_ProxyReceptionInterface() {
    return &InBound;
}

evSetNumberOfCassetteRings_ProxyReceptionInterface* Uc_EmulateFrontandRearGearing::paEFRG_Rider_C::getItsEvSetNumberOfCassetteRings_ProxyReceptionInterface() {
    return &InBound;
}

evSetNumberOfChainRings_ProxyReceptionInterface* Uc_EmulateFrontandRearGearing::paEFRG_Rider_C::getItsEvSetNumberOfChainRings_ProxyReceptionInterface() {
    return &InBound;
}

evShowGearing_ProxyReceptionInterface* Uc_EmulateFrontandRearGearing::paEFRG_Rider_C::getItsEvShowGearing_ProxyReceptionInterface() {
    return &InBound;
}

void Uc_EmulateFrontandRearGearing::paEFRG_Rider_C::setItsEvAugmentFrontGear_ProxyReceptionInterface(evAugmentFrontGear_ProxyReceptionInterface* p_evAugmentFrontGear_ProxyReceptionInterface) {
    InBound.setItsEvAugmentFrontGear_ProxyReceptionInterface(p_evAugmentFrontGear_ProxyReceptionInterface);
}

void Uc_EmulateFrontandRearGearing::paEFRG_Rider_C::setItsEvAugmentRearGear_ProxyReceptionInterface(evAugmentRearGear_ProxyReceptionInterface* p_evAugmentRearGear_ProxyReceptionInterface) {
    InBound.setItsEvAugmentRearGear_ProxyReceptionInterface(p_evAugmentRearGear_ProxyReceptionInterface);
}

void Uc_EmulateFrontandRearGearing::paEFRG_Rider_C::setItsEvBeginRiding_ProxyReceptionInterface(evBeginRiding_ProxyReceptionInterface* p_evBeginRiding_ProxyReceptionInterface) {
    InBound.setItsEvBeginRiding_ProxyReceptionInterface(p_evBeginRiding_ProxyReceptionInterface);
}

void Uc_EmulateFrontandRearGearing::paEFRG_Rider_C::setItsEvConfigureGearing_ProxyReceptionInterface(evConfigureGearing_ProxyReceptionInterface* p_evConfigureGearing_ProxyReceptionInterface) {
    InBound.setItsEvConfigureGearing_ProxyReceptionInterface(p_evConfigureGearing_ProxyReceptionInterface);
}

void Uc_EmulateFrontandRearGearing::paEFRG_Rider_C::setItsEvCurrentGearing_ProxyReceptionInterface(OMReactive* p_evCurrentGearing_ProxyReceptionInterface) {
    OutBound.setItsEvCurrentGearing_ProxyReceptionInterface(p_evCurrentGearing_ProxyReceptionInterface);
}

void Uc_EmulateFrontandRearGearing::paEFRG_Rider_C::setItsEvDecrementFrontGear_ProxyReceptionInterface(evDecrementFrontGear_ProxyReceptionInterface* p_evDecrementFrontGear_ProxyReceptionInterface) {
    InBound.setItsEvDecrementFrontGear_ProxyReceptionInterface(p_evDecrementFrontGear_ProxyReceptionInterface);
}

void Uc_EmulateFrontandRearGearing::paEFRG_Rider_C::setItsEvDecrementRearGear_ProxyReceptionInterface(evDecrementRearGear_ProxyReceptionInterface* p_evDecrementRearGear_ProxyReceptionInterface) {
    InBound.setItsEvDecrementRearGear_ProxyReceptionInterface(p_evDecrementRearGear_ProxyReceptionInterface);
}

void Uc_EmulateFrontandRearGearing::paEFRG_Rider_C::setItsEvDoneConfiguring_ProxyReceptionInterface(evDoneConfiguring_ProxyReceptionInterface* p_evDoneConfiguring_ProxyReceptionInterface) {
    InBound.setItsEvDoneConfiguring_ProxyReceptionInterface(p_evDoneConfiguring_ProxyReceptionInterface);
}

void Uc_EmulateFrontandRearGearing::paEFRG_Rider_C::setItsEvDoneRiding_ProxyReceptionInterface(evDoneRiding_ProxyReceptionInterface* p_evDoneRiding_ProxyReceptionInterface) {
    InBound.setItsEvDoneRiding_ProxyReceptionInterface(p_evDoneRiding_ProxyReceptionInterface);
}

void Uc_EmulateFrontandRearGearing::paEFRG_Rider_C::setItsEvInitialSettings_ProxyReceptionInterface(OMReactive* p_evInitialSettings_ProxyReceptionInterface) {
    OutBound.setItsEvInitialSettings_ProxyReceptionInterface(p_evInitialSettings_ProxyReceptionInterface);
}

void Uc_EmulateFrontandRearGearing::paEFRG_Rider_C::setItsEvSetCassetteRingTeeth_ProxyReceptionInterface(evSetCassetteRingTeeth_ProxyReceptionInterface* p_evSetCassetteRingTeeth_ProxyReceptionInterface) {
    InBound.setItsEvSetCassetteRingTeeth_ProxyReceptionInterface(p_evSetCassetteRingTeeth_ProxyReceptionInterface);
}

void Uc_EmulateFrontandRearGearing::paEFRG_Rider_C::setItsEvSetChainRingTeeth_ProxyReceptionInterface(evSetChainRingTeeth_ProxyReceptionInterface* p_evSetChainRingTeeth_ProxyReceptionInterface) {
    InBound.setItsEvSetChainRingTeeth_ProxyReceptionInterface(p_evSetChainRingTeeth_ProxyReceptionInterface);
}

void Uc_EmulateFrontandRearGearing::paEFRG_Rider_C::setItsEvSetNumberOfCassetteRings_ProxyReceptionInterface(evSetNumberOfCassetteRings_ProxyReceptionInterface* p_evSetNumberOfCassetteRings_ProxyReceptionInterface) {
    InBound.setItsEvSetNumberOfCassetteRings_ProxyReceptionInterface(p_evSetNumberOfCassetteRings_ProxyReceptionInterface);
}

void Uc_EmulateFrontandRearGearing::paEFRG_Rider_C::setItsEvSetNumberOfChainRings_ProxyReceptionInterface(evSetNumberOfChainRings_ProxyReceptionInterface* p_evSetNumberOfChainRings_ProxyReceptionInterface) {
    InBound.setItsEvSetNumberOfChainRings_ProxyReceptionInterface(p_evSetNumberOfChainRings_ProxyReceptionInterface);
}

void Uc_EmulateFrontandRearGearing::paEFRG_Rider_C::setItsEvShowGearing_ProxyReceptionInterface(evShowGearing_ProxyReceptionInterface* p_evShowGearing_ProxyReceptionInterface) {
    InBound.setItsEvShowGearing_ProxyReceptionInterface(p_evShowGearing_ProxyReceptionInterface);
}

Uc_EmulateFrontandRearGearing::paEFRG_Rider_C::InBound_C* Uc_EmulateFrontandRearGearing::paEFRG_Rider_C::getInBound() const {
    return (Uc_EmulateFrontandRearGearing::paEFRG_Rider_C::InBound_C*) &InBound;
}

Uc_EmulateFrontandRearGearing::paEFRG_Rider_C::OutBound_C* Uc_EmulateFrontandRearGearing::paEFRG_Rider_C::getOutBound() const {
    return (Uc_EmulateFrontandRearGearing::paEFRG_Rider_C::OutBound_C*) &OutBound;
}

void Uc_EmulateFrontandRearGearing::paEFRG_Rider_C::initRelations() {
    InBound._setPort(this);
}

void Uc_EmulateFrontandRearGearing::paEFRG_Rider_C::destroy() {
}
//#]

Uc_EmulateFrontandRearGearing::Uc_EmulateFrontandRearGearing(IOxfActive* theActiveContext) {
    NOTIFY_REACTIVE_CONSTRUCTOR(Uc_EmulateFrontandRearGearing, Uc_EmulateFrontandRearGearing(), 0, FunctionalAnalysisPkg_EmulateFrontandRearGearingPkg_Uc_EmulateFrontandRearGearing_Uc_EmulateFrontandRearGearing_SERIALIZE);
    setActiveContext(theActiveContext, false);
    initRelations();
    initStatechart();
}

Uc_EmulateFrontandRearGearing::~Uc_EmulateFrontandRearGearing() {
    NOTIFY_DESTRUCTOR(~Uc_EmulateFrontandRearGearing, true);
}

void Uc_EmulateFrontandRearGearing::augmentFrontGear() {
    NOTIFY_OPERATION(augmentFrontGear, augmentFrontGear(), 0, FunctionalAnalysisPkg_EmulateFrontandRearGearingPkg_Uc_EmulateFrontandRearGearing_augmentFrontGear_SERIALIZE);
    //#[ operation augmentFrontGear()
    if (selectedChainRing < nFrontChainRings)
    	setSelectedChainRing(selectedChainRing+1);
    	
    //#]
}

void Uc_EmulateFrontandRearGearing::augmentRearGear() {
    NOTIFY_OPERATION(augmentRearGear, augmentRearGear(), 0, FunctionalAnalysisPkg_EmulateFrontandRearGearingPkg_Uc_EmulateFrontandRearGearing_augmentRearGear_SERIALIZE);
    //#[ operation augmentRearGear()
    if (selectedCassetteRing < nCassetteRings)
    	setSelectedCassetteRing(selectedCassetteRing+1);
    //#]
}

RhpBoolean Uc_EmulateFrontandRearGearing::cassetteRingTeethOK(int teeth) {
    NOTIFY_OPERATION(cassetteRingTeethOK, cassetteRingTeethOK(int), 1, FunctionalAnalysisPkg_EmulateFrontandRearGearingPkg_Uc_EmulateFrontandRearGearing_cassetteRingTeethOK_SERIALIZE);
    //#[ operation cassetteRingTeethOK(int)
    return ( (teeth >= MIN_CASSETTE_RING_TEETH) && (teeth <= MAX_CASSETTE_RING_TEETH) );
    //#]
}

RhpBoolean Uc_EmulateFrontandRearGearing::chainRingTeethOK(int teeth) {
    NOTIFY_OPERATION(chainRingTeethOK, chainRingTeethOK(int), 1, FunctionalAnalysisPkg_EmulateFrontandRearGearingPkg_Uc_EmulateFrontandRearGearing_chainRingTeethOK_SERIALIZE);
    //#[ operation chainRingTeethOK(int)
    return ( (teeth >= MIN_CHAIN_RING_TEETH) && (teeth <= MAX_CHAIN_RING_TEETH) );
    //#]
}

void Uc_EmulateFrontandRearGearing::computeGearInches(int front, int rear) {
    NOTIFY_OPERATION(computeGearInches, computeGearInches(int,int), 2, FunctionalAnalysisPkg_EmulateFrontandRearGearingPkg_Uc_EmulateFrontandRearGearing_computeGearInches_SERIALIZE);
    //#[ operation computeGearInches(int,int)
    double driveWheelDiameter = 26.0; // standard wheel diameter
    if (rear > 0)
    	setGearInches(driveWheelDiameter * front / rear);
    else
    	setGearInches(0); 	
    //#]
}

void Uc_EmulateFrontandRearGearing::decrementFrontGear() {
    NOTIFY_OPERATION(decrementFrontGear, decrementFrontGear(), 0, FunctionalAnalysisPkg_EmulateFrontandRearGearingPkg_Uc_EmulateFrontandRearGearing_decrementFrontGear_SERIALIZE);
    //#[ operation decrementFrontGear()
    if (selectedChainRing > 1)
     	setSelectedChainRing(selectedChainRing-1);
    //#]
}

void Uc_EmulateFrontandRearGearing::decrementRearGear() {
    NOTIFY_OPERATION(decrementRearGear, decrementRearGear(), 0, FunctionalAnalysisPkg_EmulateFrontandRearGearingPkg_Uc_EmulateFrontandRearGearing_decrementRearGear_SERIALIZE);
    //#[ operation decrementRearGear()
    if (selectedCassetteRing > 1)
     	setSelectedCassetteRing(selectedCassetteRing-1);
    //#]
}

void Uc_EmulateFrontandRearGearing::display1Num(const RhpString& s, RhpReal num) {
    NOTIFY_OPERATION(display1Num, display1Num(const RhpString&,RhpReal), 2, FunctionalAnalysisPkg_EmulateFrontandRearGearingPkg_Uc_EmulateFrontandRearGearing_display1Num_SERIALIZE);
    //#[ operation display1Num(RhpString,RhpReal)
    std::cout << s << num << std::endl;
    //#]
}

void Uc_EmulateFrontandRearGearing::display2Num(const RhpString& s1, RhpReal n1, const RhpString& s2, RhpReal n2) {
    NOTIFY_OPERATION(display2Num, display2Num(const RhpString&,RhpReal,const RhpString&,RhpReal), 4, FunctionalAnalysisPkg_EmulateFrontandRearGearingPkg_Uc_EmulateFrontandRearGearing_display2Num_SERIALIZE);
    //#[ operation display2Num(RhpString,RhpReal,RhpString,RhpReal)
    std::cout << s1 << n1 << s2 << n2 << std::endl;
    //#]
}

void Uc_EmulateFrontandRearGearing::displayError(const RhpString& s) {
    NOTIFY_OPERATION(displayError, displayError(const RhpString&), 1, FunctionalAnalysisPkg_EmulateFrontandRearGearingPkg_Uc_EmulateFrontandRearGearing_displayError_SERIALIZE);
    //#[ operation displayError(RhpString)
    std::cout << "ERROR: " << s << std::endl;
    //#]
}

void Uc_EmulateFrontandRearGearing::displayGearing() {
    NOTIFY_OPERATION(displayGearing, displayGearing(), 0, FunctionalAnalysisPkg_EmulateFrontandRearGearingPkg_Uc_EmulateFrontandRearGearing_displayGearing_SERIALIZE);
    //#[ operation displayGearing()
    // display chain rings 
    std::cout << std:: endl;
    display1Num("Number of Chain Rings: ", nFrontChainRings);
    for (int j=0; j<nFrontChainRings; j++)
    	display2Num("Chain Ring [", j, "] = ", chainRing[j]);
    	
    display1Num("Number of Cassette Rings: ", nCassetteRings);
    for (int j=0; j<nCassetteRings; j++) 
    	display2Num("Cassette Ring [", j, "] = ", cassette[j]);
    	
    std::cout << std:: endl;
    
    //#]
}

RhpBoolean Uc_EmulateFrontandRearGearing::numberOfCassetteRingsOK(int n) {
    NOTIFY_OPERATION(numberOfCassetteRingsOK, numberOfCassetteRingsOK(int), 1, FunctionalAnalysisPkg_EmulateFrontandRearGearingPkg_Uc_EmulateFrontandRearGearing_numberOfCassetteRingsOK_SERIALIZE);
    //#[ operation numberOfCassetteRingsOK(int)
     return ( (n>0) && (n <= MAX_CASSETTE_RINGS) ); 
    //#]
}

RhpBoolean Uc_EmulateFrontandRearGearing::numberOfChainRingsOK(int n) {
    NOTIFY_OPERATION(numberOfChainRingsOK, numberOfChainRingsOK(int), 1, FunctionalAnalysisPkg_EmulateFrontandRearGearingPkg_Uc_EmulateFrontandRearGearing_numberOfChainRingsOK_SERIALIZE);
    //#[ operation numberOfChainRingsOK(int)
    return ( (n>0) && (n <= MAX_CHAIN_RINGS) );
    //#]
}

void Uc_EmulateFrontandRearGearing::selectGear(int frontRing, int rearRing) {
    NOTIFY_OPERATION(selectGear, selectGear(int,int), 2, FunctionalAnalysisPkg_EmulateFrontandRearGearingPkg_Uc_EmulateFrontandRearGearing_selectGear_SERIALIZE);
    //#[ operation selectGear(int,int)
    if ( (frontRing>0) && (frontRing < nFrontChainRings) )
    	setSelectedChainRing(frontRing);
    if ( (rearRing > 0) && (rearRing < nCassetteRings) )  
    	setSelectedCassetteRing(rearRing);
    	
    //#]
}

void Uc_EmulateFrontandRearGearing::setCassetteRing(int ring, int teeth) {
    NOTIFY_OPERATION(setCassetteRing, setCassetteRing(int,int), 2, FunctionalAnalysisPkg_EmulateFrontandRearGearingPkg_Uc_EmulateFrontandRearGearing_setCassetteRing_SERIALIZE);
    //#[ operation setCassetteRing(int,int)
    cassette[ring] = teeth;
    //#]
}

void Uc_EmulateFrontandRearGearing::setDefaultsForCassetteRings(int rings) {
    NOTIFY_OPERATION(setDefaultsForCassetteRings, setDefaultsForCassetteRings(int), 1, FunctionalAnalysisPkg_EmulateFrontandRearGearingPkg_Uc_EmulateFrontandRearGearing_setDefaultsForCassetteRings_SERIALIZE);
    //#[ operation setDefaultsForCassetteRings(int)
    if (rings == 10) {
    	cassette[0] = 11;
    	cassette[1] = 12;
    	cassette[2] = 14;
    	cassette[3] = 16;
    	cassette[4] = 18;
    	cassette[5] = 20;
    	cassette[6] = 22;
    	cassette[7] = 25;
    	cassette[8] = 28;
    	cassette[9] = 32;
    }
    else if (rings == 11) {
    	cassette[0] = 11;
    	cassette[1] = 12;
    	cassette[2] = 13;
    	cassette[3] = 14;
    	cassette[4] = 15;
    	cassette[5] = 16;
    	cassette[6] = 17;
    	cassette[7] = 19;
    	cassette[8] = 21;
    	cassette[9] = 23;
    	cassette[10] = 25;
    }
    else {
    	cassette[0] = 11;
    	cassette[1] = 13;
    	cassette[2] = 15;
    	cassette[3] = 17;
    	cassette[4] = 19;
    	cassette[5] = 21;
    	cassette[6] = 24;
    	cassette[7] = 28;
    	cassette[8] = 32;
    	cassette[9] = 36;
    	cassette[10] = 42;
    	cassette[11] = 50;
    };
    
    
    
    //#]
}

void Uc_EmulateFrontandRearGearing::setDefaultsForChainRings(int rings) {
    NOTIFY_OPERATION(setDefaultsForChainRings, setDefaultsForChainRings(int), 1, FunctionalAnalysisPkg_EmulateFrontandRearGearingPkg_Uc_EmulateFrontandRearGearing_setDefaultsForChainRings_SERIALIZE);
    //#[ operation setDefaultsForChainRings(int)
    if (rings == 1) 
    	chainRing[0] = 48;
    else if (rings == 3) {
    	chainRing[0] = 28;
    	chainRing[1] = 40;
    	chainRing[2] = 56;
    	}
    else {
      chainRing[0] = 34;
      chainRing[1] = 53;  
      };
    
    //#]
}

void Uc_EmulateFrontandRearGearing::setFrontChainRing(int ring, int teeth) {
    NOTIFY_OPERATION(setFrontChainRing, setFrontChainRing(int,int), 2, FunctionalAnalysisPkg_EmulateFrontandRearGearingPkg_Uc_EmulateFrontandRearGearing_setFrontChainRing_SERIALIZE);
    //#[ operation setFrontChainRing(int,int)
    chainRing[ring] = teeth;
    //#]
}

Uc_EmulateFrontandRearGearing::paEFRG_TrainingApp_C* Uc_EmulateFrontandRearGearing::getPaEFRG_TrainingApp() const {
    return (Uc_EmulateFrontandRearGearing::paEFRG_TrainingApp_C*) &paEFRG_TrainingApp;
}

Uc_EmulateFrontandRearGearing::paEFRG_TrainingApp_C* Uc_EmulateFrontandRearGearing::get_paEFRG_TrainingApp() const {
    return (Uc_EmulateFrontandRearGearing::paEFRG_TrainingApp_C*) &paEFRG_TrainingApp;
}

Uc_EmulateFrontandRearGearing::paEFRG_Rider_C* Uc_EmulateFrontandRearGearing::getPaEFRG_Rider() const {
    return (Uc_EmulateFrontandRearGearing::paEFRG_Rider_C*) &paEFRG_Rider;
}

Uc_EmulateFrontandRearGearing::paEFRG_Rider_C* Uc_EmulateFrontandRearGearing::get_paEFRG_Rider() const {
    return (Uc_EmulateFrontandRearGearing::paEFRG_Rider_C*) &paEFRG_Rider;
}

int Uc_EmulateFrontandRearGearing::getCassette(int i1) const {
    return cassette[i1];
}

void Uc_EmulateFrontandRearGearing::setCassette(int i1, int p_cassette) {
    cassette[i1] = p_cassette;
}

int Uc_EmulateFrontandRearGearing::getChainRing(int i1) const {
    return chainRing[i1];
}

void Uc_EmulateFrontandRearGearing::setChainRing(int i1, int p_chainRing) {
    chainRing[i1] = p_chainRing;
}

RhpReal Uc_EmulateFrontandRearGearing::getGearInches() const {
    return gearInches;
}

void Uc_EmulateFrontandRearGearing::setGearInches(RhpReal p_gearInches) {
    gearInches = p_gearInches;
    NOTIFY_SET_OPERATION;
}

int Uc_EmulateFrontandRearGearing::getNCassetteRings() const {
    return nCassetteRings;
}

void Uc_EmulateFrontandRearGearing::setNCassetteRings(int p_nCassetteRings) {
    nCassetteRings = p_nCassetteRings;
    NOTIFY_SET_OPERATION;
}

int Uc_EmulateFrontandRearGearing::getNFrontChainRings() const {
    return nFrontChainRings;
}

void Uc_EmulateFrontandRearGearing::setNFrontChainRings(int p_nFrontChainRings) {
    nFrontChainRings = p_nFrontChainRings;
    NOTIFY_SET_OPERATION;
}

int Uc_EmulateFrontandRearGearing::getSelectedCassetteRing() const {
    return selectedCassetteRing;
}

void Uc_EmulateFrontandRearGearing::setSelectedCassetteRing(int p_selectedCassetteRing) {
    selectedCassetteRing = p_selectedCassetteRing;
    NOTIFY_SET_OPERATION;
}

int Uc_EmulateFrontandRearGearing::getSelectedChainRing() const {
    return selectedChainRing;
}

void Uc_EmulateFrontandRearGearing::setSelectedChainRing(int p_selectedChainRing) {
    selectedChainRing = p_selectedChainRing;
    NOTIFY_SET_OPERATION;
}

bool Uc_EmulateFrontandRearGearing::startBehavior() {
    bool done = false;
    done = OMReactive::startBehavior();
    return done;
}

void Uc_EmulateFrontandRearGearing::initRelations() {
    if (get_paEFRG_Rider() != NULL) {
        get_paEFRG_Rider()->connectUc_EmulateFrontandRearGearing(this);
    }
}

void Uc_EmulateFrontandRearGearing::initStatechart() {
    rootState_subState = OMNonState;
    rootState_active = OMNonState;
    state_6_subState = OMNonState;
    state_6_active = OMNonState;
    state_5_subState = OMNonState;
    state_5_active = OMNonState;
}

void Uc_EmulateFrontandRearGearing::rootState_entDef() {
    {
        NOTIFY_STATE_ENTERED("ROOT");
        NOTIFY_TRANSITION_STARTED("0");
        //#[ transition 0 
        
        // set up the front chainrings
        setNFrontChainRings(DEFAULT_CHAIN_RINGS);
        setDefaultsForChainRings(DEFAULT_CHAIN_RINGS);
        
        // set up the rear cassette
        setNCassetteRings(DEFAULT_CASSETTE_RINGS);
        setDefaultsForCassetteRings(DEFAULT_CASSETTE_RINGS);
        //#]
        NOTIFY_STATE_ENTERED("ROOT.sendaction_9");
        pushNullTransition();
        rootState_subState = sendaction_9;
        rootState_active = sendaction_9;
        //#[ state sendaction_9.(Entry) 
        OUT_PORT(paEFRG_Rider)->GEN(evInitialSettings(nFrontChainRings,nCassetteRings));
        //#]
        NOTIFY_TRANSITION_TERMINATED("0");
    }
}

IOxfReactive::TakeEventStatus Uc_EmulateFrontandRearGearing::rootState_processEvent() {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    switch (rootState_active) {
        // State Idle
        case Idle:
        {
            res = Idle_handleEvent();
        }
        break;
        // State SettingUpGearing
        case SettingUpGearing:
        {
            res = SettingUpGearing_processEvent();
        }
        break;
        // State ChangeGearing
        case ChangeGearing:
        {
            res = ChangeGearing_handleEvent();
        }
        break;
        // State sendaction_7
        case sendaction_7:
        {
            if(IS_EVENT_TYPE_OF(OMNullEventId))
                {
                    NOTIFY_TRANSITION_STARTED("25");
                    popNullTransition();
                    NOTIFY_STATE_EXITED("ROOT.sendaction_7");
                    NOTIFY_STATE_ENTERED("ROOT.sendaction_8");
                    pushNullTransition();
                    rootState_subState = sendaction_8;
                    rootState_active = sendaction_8;
                    //#[ state sendaction_8.(Entry) 
                    OUT_PORT(paEFRG_TrainingApp)->GEN(evCurrentGearing(selectedChainRing,selectedCassetteRing));
                    //#]
                    NOTIFY_TRANSITION_TERMINATED("25");
                    res = eventConsumed;
                }
            
        }
        break;
        // State sendaction_8
        case sendaction_8:
        {
            if(IS_EVENT_TYPE_OF(OMNullEventId))
                {
                    NOTIFY_TRANSITION_STARTED("23");
                    popNullTransition();
                    NOTIFY_STATE_EXITED("ROOT.sendaction_8");
                    NOTIFY_STATE_ENTERED("ROOT.ChangeGearing");
                    rootState_subState = ChangeGearing;
                    rootState_active = ChangeGearing;
                    //#[ state ChangeGearing.(Entry) 
                    computeGearInches(chainRing[selectedChainRing-1], cassette[selectedCassetteRing-1]);
                    //#]
                    NOTIFY_TRANSITION_TERMINATED("23");
                    res = eventConsumed;
                }
            
        }
        break;
        // State sendaction_9
        case sendaction_9:
        {
            if(IS_EVENT_TYPE_OF(OMNullEventId))
                {
                    NOTIFY_TRANSITION_STARTED("26");
                    popNullTransition();
                    NOTIFY_STATE_EXITED("ROOT.sendaction_9");
                    NOTIFY_STATE_ENTERED("ROOT.Idle");
                    rootState_subState = Idle;
                    rootState_active = Idle;
                    NOTIFY_TRANSITION_TERMINATED("26");
                    res = eventConsumed;
                }
            
        }
        break;
        default:
            break;
    }
    return res;
}

void Uc_EmulateFrontandRearGearing::SettingUpGearing_entDef() {
    NOTIFY_STATE_ENTERED("ROOT.SettingUpGearing");
    rootState_subState = SettingUpGearing;
    rootState_active = SettingUpGearing;
    state_5_entDef();
    state_6_entDef();
}

void Uc_EmulateFrontandRearGearing::SettingUpGearing_exit() {
    state_5_exit();
    state_6_exit();
    
    NOTIFY_STATE_EXITED("ROOT.SettingUpGearing");
}

IOxfReactive::TakeEventStatus Uc_EmulateFrontandRearGearing::SettingUpGearingTakeevShowGearing() {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    NOTIFY_TRANSITION_STARTED("24");
    SettingUpGearing_exit();
    //#[ transition 24 
    
    displayGearing();
    //#]
    SettingUpGearing_entDef();
    NOTIFY_TRANSITION_TERMINATED("24");
    res = eventConsumed;
    return res;
}

IOxfReactive::TakeEventStatus Uc_EmulateFrontandRearGearing::SettingUpGearing_processEvent() {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    // State state_5
    if(state_5_processEvent() != eventNotConsumed)
        {
            res = eventConsumed;
            if(!IS_IN(SettingUpGearing))
                {
                    return res;
                }
        }
    // State state_6
    if(state_6_processEvent() != eventNotConsumed)
        {
            res = eventConsumed;
            if(!IS_IN(SettingUpGearing))
                {
                    return res;
                }
        }
    if(res == eventNotConsumed)
        {
            res = SettingUpGearing_handleEvent();
        }
    return res;
}

IOxfReactive::TakeEventStatus Uc_EmulateFrontandRearGearing::SettingUpGearing_handleEvent() {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    if(IS_EVENT_TYPE_OF(evShowGearing_EmulateFrontandRearGearingPkg_FunctionalAnalysisPkg_id))
        {
            res = SettingUpGearingTakeevShowGearing();
        }
    
    return res;
}

void Uc_EmulateFrontandRearGearing::state_6_entDef() {
    NOTIFY_STATE_ENTERED("ROOT.SettingUpGearing.state_6");
    NOTIFY_TRANSITION_STARTED("18");
    NOTIFY_STATE_ENTERED("ROOT.SettingUpGearing.state_6.UpdateRearGear");
    state_6_subState = UpdateRearGear;
    state_6_active = UpdateRearGear;
    NOTIFY_TRANSITION_TERMINATED("18");
}

void Uc_EmulateFrontandRearGearing::state_6_exit() {
    // State UpdateRearGear
    if(state_6_subState == UpdateRearGear)
        {
            NOTIFY_STATE_EXITED("ROOT.SettingUpGearing.state_6.UpdateRearGear");
        }
    state_6_subState = OMNonState;
    
    NOTIFY_STATE_EXITED("ROOT.SettingUpGearing.state_6");
}

IOxfReactive::TakeEventStatus Uc_EmulateFrontandRearGearing::state_6_processEvent() {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    // State UpdateRearGear
    if(state_6_active == UpdateRearGear)
        {
            res = UpdateRearGear_handleEvent();
        }
    return res;
}

IOxfReactive::TakeEventStatus Uc_EmulateFrontandRearGearing::UpdateRearGear_handleEvent() {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    if(IS_EVENT_TYPE_OF(evSetNumberOfCassetteRings_EmulateFrontandRearGearingPkg_FunctionalAnalysisPkg_id))
        {
            OMSETPARAMS(evSetNumberOfCassetteRings);
            //## transition 13 
            if(numberOfCassetteRingsOK(params->n))
                {
                    NOTIFY_TRANSITION_STARTED("12");
                    NOTIFY_TRANSITION_STARTED("13");
                    NOTIFY_STATE_EXITED("ROOT.SettingUpGearing.state_6.UpdateRearGear");
                    //#[ transition 13 
                    
                    setNCassetteRings(params->n);
                    display1Num("Number of cassette rings set to ", params->n);
                    setDefaultsForCassetteRings(params->n);
                    //#]
                    NOTIFY_STATE_ENTERED("ROOT.SettingUpGearing.state_6.UpdateRearGear");
                    state_6_subState = UpdateRearGear;
                    state_6_active = UpdateRearGear;
                    NOTIFY_TRANSITION_TERMINATED("13");
                    NOTIFY_TRANSITION_TERMINATED("12");
                    res = eventConsumed;
                }
            else
                {
                    NOTIFY_TRANSITION_STARTED("12");
                    NOTIFY_TRANSITION_STARTED("14");
                    NOTIFY_STATE_EXITED("ROOT.SettingUpGearing.state_6.UpdateRearGear");
                    //#[ transition 14 
                    
                    displayError("Unsupported number of cassette rings");
                    //#]
                    NOTIFY_STATE_ENTERED("ROOT.SettingUpGearing.state_6.UpdateRearGear");
                    state_6_subState = UpdateRearGear;
                    state_6_active = UpdateRearGear;
                    NOTIFY_TRANSITION_TERMINATED("14");
                    NOTIFY_TRANSITION_TERMINATED("12");
                    res = eventConsumed;
                }
        }
    else if(IS_EVENT_TYPE_OF(evSetCassetteRingTeeth_EmulateFrontandRearGearingPkg_FunctionalAnalysisPkg_id))
        {
            OMSETPARAMS(evSetCassetteRingTeeth);
            //## transition 16 
            if(cassetteRingTeethOK(params->teeth))
                {
                    NOTIFY_TRANSITION_STARTED("15");
                    NOTIFY_TRANSITION_STARTED("16");
                    NOTIFY_STATE_EXITED("ROOT.SettingUpGearing.state_6.UpdateRearGear");
                    //#[ transition 16 
                    
                    setCassetteRing(params->cr-1, params->teeth);
                    display2Num("Cassette ring ", params->cr, " set to ", params->teeth);
                    //#]
                    NOTIFY_STATE_ENTERED("ROOT.SettingUpGearing.state_6.UpdateRearGear");
                    state_6_subState = UpdateRearGear;
                    state_6_active = UpdateRearGear;
                    NOTIFY_TRANSITION_TERMINATED("16");
                    NOTIFY_TRANSITION_TERMINATED("15");
                    res = eventConsumed;
                }
            else
                {
                    NOTIFY_TRANSITION_STARTED("15");
                    NOTIFY_TRANSITION_STARTED("17");
                    NOTIFY_STATE_EXITED("ROOT.SettingUpGearing.state_6.UpdateRearGear");
                    //#[ transition 17 
                    
                    displayError("Unsupported number of teeth");
                    //#]
                    NOTIFY_STATE_ENTERED("ROOT.SettingUpGearing.state_6.UpdateRearGear");
                    state_6_subState = UpdateRearGear;
                    state_6_active = UpdateRearGear;
                    NOTIFY_TRANSITION_TERMINATED("17");
                    NOTIFY_TRANSITION_TERMINATED("15");
                    res = eventConsumed;
                }
        }
    
    
    return res;
}

void Uc_EmulateFrontandRearGearing::state_5_entDef() {
    NOTIFY_STATE_ENTERED("ROOT.SettingUpGearing.state_5");
    NOTIFY_TRANSITION_STARTED("11");
    NOTIFY_STATE_ENTERED("ROOT.SettingUpGearing.state_5.UpdateFrontGear");
    state_5_subState = UpdateFrontGear;
    state_5_active = UpdateFrontGear;
    NOTIFY_TRANSITION_TERMINATED("11");
}

void Uc_EmulateFrontandRearGearing::state_5_exit() {
    // State UpdateFrontGear
    if(state_5_subState == UpdateFrontGear)
        {
            NOTIFY_STATE_EXITED("ROOT.SettingUpGearing.state_5.UpdateFrontGear");
        }
    state_5_subState = OMNonState;
    
    NOTIFY_STATE_EXITED("ROOT.SettingUpGearing.state_5");
}

IOxfReactive::TakeEventStatus Uc_EmulateFrontandRearGearing::state_5_processEvent() {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    // State UpdateFrontGear
    if(state_5_active == UpdateFrontGear)
        {
            res = UpdateFrontGear_handleEvent();
        }
    return res;
}

IOxfReactive::TakeEventStatus Uc_EmulateFrontandRearGearing::state_5_handleEvent() {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    if(IS_EVENT_TYPE_OF(evDoneConfiguring_EmulateFrontandRearGearingPkg_FunctionalAnalysisPkg_id))
        {
            NOTIFY_TRANSITION_STARTED("2");
            SettingUpGearing_exit();
            NOTIFY_STATE_ENTERED("ROOT.Idle");
            rootState_subState = Idle;
            rootState_active = Idle;
            NOTIFY_TRANSITION_TERMINATED("2");
            res = eventConsumed;
        }
    
    return res;
}

IOxfReactive::TakeEventStatus Uc_EmulateFrontandRearGearing::UpdateFrontGear_handleEvent() {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    if(IS_EVENT_TYPE_OF(evSetChainRingTeeth_EmulateFrontandRearGearingPkg_FunctionalAnalysisPkg_id))
        {
            OMSETPARAMS(evSetChainRingTeeth);
            //## transition 9 
            if(chainRingTeethOK(params->teeth))
                {
                    NOTIFY_TRANSITION_STARTED("6");
                    NOTIFY_TRANSITION_STARTED("9");
                    NOTIFY_STATE_EXITED("ROOT.SettingUpGearing.state_5.UpdateFrontGear");
                    //#[ transition 9 
                    
                    setFrontChainRing(params->cr-1, params->teeth);
                    display2Num("Chain ring ", params->cr, " set to ", params->teeth);
                    //#]
                    NOTIFY_STATE_ENTERED("ROOT.SettingUpGearing.state_5.UpdateFrontGear");
                    state_5_subState = UpdateFrontGear;
                    state_5_active = UpdateFrontGear;
                    NOTIFY_TRANSITION_TERMINATED("9");
                    NOTIFY_TRANSITION_TERMINATED("6");
                    res = eventConsumed;
                }
            else
                {
                    NOTIFY_TRANSITION_STARTED("6");
                    NOTIFY_TRANSITION_STARTED("10");
                    NOTIFY_STATE_EXITED("ROOT.SettingUpGearing.state_5.UpdateFrontGear");
                    //#[ transition 10 
                    
                    displayError("Unsupported number of teeth");
                    //#]
                    NOTIFY_STATE_ENTERED("ROOT.SettingUpGearing.state_5.UpdateFrontGear");
                    state_5_subState = UpdateFrontGear;
                    state_5_active = UpdateFrontGear;
                    NOTIFY_TRANSITION_TERMINATED("10");
                    NOTIFY_TRANSITION_TERMINATED("6");
                    res = eventConsumed;
                }
        }
    else if(IS_EVENT_TYPE_OF(evSetNumberOfChainRings_EmulateFrontandRearGearingPkg_FunctionalAnalysisPkg_id))
        {
            OMSETPARAMS(evSetNumberOfChainRings);
            //## transition 7 
            if(numberOfChainRingsOK(params->n))
                {
                    NOTIFY_TRANSITION_STARTED("5");
                    NOTIFY_TRANSITION_STARTED("7");
                    NOTIFY_STATE_EXITED("ROOT.SettingUpGearing.state_5.UpdateFrontGear");
                    //#[ transition 7 
                    
                    setNFrontChainRings(params->n);
                    display1Num("Number of chain rings set to ", params->n);
                    setDefaultsForChainRings(params->n);
                    //#]
                    NOTIFY_STATE_ENTERED("ROOT.SettingUpGearing.state_5.UpdateFrontGear");
                    state_5_subState = UpdateFrontGear;
                    state_5_active = UpdateFrontGear;
                    NOTIFY_TRANSITION_TERMINATED("7");
                    NOTIFY_TRANSITION_TERMINATED("5");
                    res = eventConsumed;
                }
            else
                {
                    NOTIFY_TRANSITION_STARTED("5");
                    NOTIFY_TRANSITION_STARTED("8");
                    NOTIFY_STATE_EXITED("ROOT.SettingUpGearing.state_5.UpdateFrontGear");
                    //#[ transition 8 
                    
                    displayError("Unsupported number of chain rings");
                    //#]
                    NOTIFY_STATE_ENTERED("ROOT.SettingUpGearing.state_5.UpdateFrontGear");
                    state_5_subState = UpdateFrontGear;
                    state_5_active = UpdateFrontGear;
                    NOTIFY_TRANSITION_TERMINATED("8");
                    NOTIFY_TRANSITION_TERMINATED("5");
                    res = eventConsumed;
                }
        }
    
    if(res == eventNotConsumed)
        {
            res = state_5_handleEvent();
        }
    return res;
}

IOxfReactive::TakeEventStatus Uc_EmulateFrontandRearGearing::Idle_handleEvent() {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    if(IS_EVENT_TYPE_OF(evConfigureGearing_EmulateFrontandRearGearingPkg_FunctionalAnalysisPkg_id))
        {
            NOTIFY_TRANSITION_STARTED("1");
            NOTIFY_STATE_EXITED("ROOT.Idle");
            SettingUpGearing_entDef();
            NOTIFY_TRANSITION_TERMINATED("1");
            res = eventConsumed;
        }
    else if(IS_EVENT_TYPE_OF(evBeginRiding_EmulateFrontandRearGearingPkg_FunctionalAnalysisPkg_id))
        {
            NOTIFY_TRANSITION_STARTED("3");
            NOTIFY_STATE_EXITED("ROOT.Idle");
            //#[ transition 3 
             
            selectGear(1,1);
            //#]
            NOTIFY_STATE_ENTERED("ROOT.ChangeGearing");
            rootState_subState = ChangeGearing;
            rootState_active = ChangeGearing;
            //#[ state ChangeGearing.(Entry) 
            computeGearInches(chainRing[selectedChainRing-1], cassette[selectedCassetteRing-1]);
            //#]
            NOTIFY_TRANSITION_TERMINATED("3");
            res = eventConsumed;
        }
    
    return res;
}

IOxfReactive::TakeEventStatus Uc_EmulateFrontandRearGearing::ChangeGearing_handleEvent() {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    if(IS_EVENT_TYPE_OF(evAugmentRearGear_EmulateFrontandRearGearingPkg_FunctionalAnalysisPkg_id))
        {
            NOTIFY_TRANSITION_STARTED("21");
            NOTIFY_STATE_EXITED("ROOT.ChangeGearing");
            //#[ transition 21 
            
            augmentRearGear();
            //#]
            NOTIFY_STATE_ENTERED("ROOT.sendaction_7");
            pushNullTransition();
            rootState_subState = sendaction_7;
            rootState_active = sendaction_7;
            //#[ state sendaction_7.(Entry) 
            OUT_PORT(paEFRG_Rider)->GEN(evCurrentGearing(selectedChainRing,selectedCassetteRing));
            //#]
            NOTIFY_TRANSITION_TERMINATED("21");
            res = eventConsumed;
        }
    else if(IS_EVENT_TYPE_OF(evDecrementFrontGear_EmulateFrontandRearGearingPkg_FunctionalAnalysisPkg_id))
        {
            NOTIFY_TRANSITION_STARTED("20");
            NOTIFY_STATE_EXITED("ROOT.ChangeGearing");
            //#[ transition 20 
            
            decrementFrontGear();
            //#]
            NOTIFY_STATE_ENTERED("ROOT.sendaction_7");
            pushNullTransition();
            rootState_subState = sendaction_7;
            rootState_active = sendaction_7;
            //#[ state sendaction_7.(Entry) 
            OUT_PORT(paEFRG_Rider)->GEN(evCurrentGearing(selectedChainRing,selectedCassetteRing));
            //#]
            NOTIFY_TRANSITION_TERMINATED("20");
            res = eventConsumed;
        }
    else if(IS_EVENT_TYPE_OF(evDoneRiding_EmulateFrontandRearGearingPkg_FunctionalAnalysisPkg_id))
        {
            NOTIFY_TRANSITION_STARTED("4");
            NOTIFY_STATE_EXITED("ROOT.ChangeGearing");
            NOTIFY_STATE_ENTERED("ROOT.Idle");
            rootState_subState = Idle;
            rootState_active = Idle;
            NOTIFY_TRANSITION_TERMINATED("4");
            res = eventConsumed;
        }
    else if(IS_EVENT_TYPE_OF(evAugmentFrontGear_EmulateFrontandRearGearingPkg_FunctionalAnalysisPkg_id))
        {
            NOTIFY_TRANSITION_STARTED("19");
            NOTIFY_STATE_EXITED("ROOT.ChangeGearing");
            //#[ transition 19 
            
            augmentFrontGear();
            //#]
            NOTIFY_STATE_ENTERED("ROOT.sendaction_7");
            pushNullTransition();
            rootState_subState = sendaction_7;
            rootState_active = sendaction_7;
            //#[ state sendaction_7.(Entry) 
            OUT_PORT(paEFRG_Rider)->GEN(evCurrentGearing(selectedChainRing,selectedCassetteRing));
            //#]
            NOTIFY_TRANSITION_TERMINATED("19");
            res = eventConsumed;
        }
    else if(IS_EVENT_TYPE_OF(evDecrementRearGear_EmulateFrontandRearGearingPkg_FunctionalAnalysisPkg_id))
        {
            NOTIFY_TRANSITION_STARTED("22");
            NOTIFY_STATE_EXITED("ROOT.ChangeGearing");
            //#[ transition 22 
            
            decrementRearGear();
            //#]
            NOTIFY_STATE_ENTERED("ROOT.sendaction_7");
            pushNullTransition();
            rootState_subState = sendaction_7;
            rootState_active = sendaction_7;
            //#[ state sendaction_7.(Entry) 
            OUT_PORT(paEFRG_Rider)->GEN(evCurrentGearing(selectedChainRing,selectedCassetteRing));
            //#]
            NOTIFY_TRANSITION_TERMINATED("22");
            res = eventConsumed;
        }
    
    return res;
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedUc_EmulateFrontandRearGearing::serializeAttributes(AOMSAttributes* aomsAttributes) const {
    aomsAttributes->addAttribute("nFrontChainRings", x2String(myReal->nFrontChainRings));
    aomsAttributes->addAttribute("nCassetteRings", x2String(myReal->nCassetteRings));
    aomsAttributes->addAttribute("chainRing", array2String(3, myReal->chainRing, sizeof(int), &x2String));
    aomsAttributes->addAttribute("cassette", array2String(12, myReal->cassette, sizeof(int), &x2String));
    aomsAttributes->addAttribute("selectedCassetteRing", x2String(myReal->selectedCassetteRing));
    aomsAttributes->addAttribute("selectedChainRing", x2String(myReal->selectedChainRing));
    aomsAttributes->addAttribute("gearInches", x2String(myReal->gearInches));
}

void OMAnimatedUc_EmulateFrontandRearGearing::serializeRelations(AOMSRelations* aomsRelations) const {
}

void OMAnimatedUc_EmulateFrontandRearGearing::rootState_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT");
    switch (myReal->rootState_subState) {
        case Uc_EmulateFrontandRearGearing::Idle:
        {
            Idle_serializeStates(aomsState);
        }
        break;
        case Uc_EmulateFrontandRearGearing::SettingUpGearing:
        {
            SettingUpGearing_serializeStates(aomsState);
        }
        break;
        case Uc_EmulateFrontandRearGearing::ChangeGearing:
        {
            ChangeGearing_serializeStates(aomsState);
        }
        break;
        case Uc_EmulateFrontandRearGearing::sendaction_7:
        {
            sendaction_7_serializeStates(aomsState);
        }
        break;
        case Uc_EmulateFrontandRearGearing::sendaction_8:
        {
            sendaction_8_serializeStates(aomsState);
        }
        break;
        case Uc_EmulateFrontandRearGearing::sendaction_9:
        {
            sendaction_9_serializeStates(aomsState);
        }
        break;
        default:
            break;
    }
}

void OMAnimatedUc_EmulateFrontandRearGearing::SettingUpGearing_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.SettingUpGearing");
    state_5_serializeStates(aomsState);
    state_6_serializeStates(aomsState);
}

void OMAnimatedUc_EmulateFrontandRearGearing::state_6_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.SettingUpGearing.state_6");
    if(myReal->state_6_subState == Uc_EmulateFrontandRearGearing::UpdateRearGear)
        {
            UpdateRearGear_serializeStates(aomsState);
        }
}

void OMAnimatedUc_EmulateFrontandRearGearing::UpdateRearGear_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.SettingUpGearing.state_6.UpdateRearGear");
}

void OMAnimatedUc_EmulateFrontandRearGearing::state_5_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.SettingUpGearing.state_5");
    if(myReal->state_5_subState == Uc_EmulateFrontandRearGearing::UpdateFrontGear)
        {
            UpdateFrontGear_serializeStates(aomsState);
        }
}

void OMAnimatedUc_EmulateFrontandRearGearing::UpdateFrontGear_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.SettingUpGearing.state_5.UpdateFrontGear");
}

void OMAnimatedUc_EmulateFrontandRearGearing::sendaction_9_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.sendaction_9");
}

void OMAnimatedUc_EmulateFrontandRearGearing::sendaction_8_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.sendaction_8");
}

void OMAnimatedUc_EmulateFrontandRearGearing::sendaction_7_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.sendaction_7");
}

void OMAnimatedUc_EmulateFrontandRearGearing::Idle_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.Idle");
}

void OMAnimatedUc_EmulateFrontandRearGearing::ChangeGearing_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.ChangeGearing");
}
//#]

IMPLEMENT_REACTIVE_META_P(Uc_EmulateFrontandRearGearing, FunctionalAnalysisPkg_EmulateFrontandRearGearingPkg, FunctionalAnalysisPkg::EmulateFrontandRearGearingPkg, false, OMAnimatedUc_EmulateFrontandRearGearing)

IMPLEMENT_META_OP(OMAnimatedUc_EmulateFrontandRearGearing, FunctionalAnalysisPkg_EmulateFrontandRearGearingPkg_Uc_EmulateFrontandRearGearing_setGearInches_RhpReal, "setGearInches", FALSE, "setGearInches(RhpReal)", 1)

IMPLEMENT_OP_CALL(FunctionalAnalysisPkg_EmulateFrontandRearGearingPkg_Uc_EmulateFrontandRearGearing_setGearInches_RhpReal, Uc_EmulateFrontandRearGearing, setGearInches(p_gearInches), NO_OP())

IMPLEMENT_META_OP(OMAnimatedUc_EmulateFrontandRearGearing, FunctionalAnalysisPkg_EmulateFrontandRearGearingPkg_Uc_EmulateFrontandRearGearing_setNCassetteRings_int, "setNCassetteRings", FALSE, "setNCassetteRings(int)", 1)

IMPLEMENT_OP_CALL(FunctionalAnalysisPkg_EmulateFrontandRearGearingPkg_Uc_EmulateFrontandRearGearing_setNCassetteRings_int, Uc_EmulateFrontandRearGearing, setNCassetteRings(p_nCassetteRings), NO_OP())

IMPLEMENT_META_OP(OMAnimatedUc_EmulateFrontandRearGearing, FunctionalAnalysisPkg_EmulateFrontandRearGearingPkg_Uc_EmulateFrontandRearGearing_setNFrontChainRings_int, "setNFrontChainRings", FALSE, "setNFrontChainRings(int)", 1)

IMPLEMENT_OP_CALL(FunctionalAnalysisPkg_EmulateFrontandRearGearingPkg_Uc_EmulateFrontandRearGearing_setNFrontChainRings_int, Uc_EmulateFrontandRearGearing, setNFrontChainRings(p_nFrontChainRings), NO_OP())

IMPLEMENT_META_OP(OMAnimatedUc_EmulateFrontandRearGearing, FunctionalAnalysisPkg_EmulateFrontandRearGearingPkg_Uc_EmulateFrontandRearGearing_setSelectedCassetteRing_int, "setSelectedCassetteRing", FALSE, "setSelectedCassetteRing(int)", 1)

IMPLEMENT_OP_CALL(FunctionalAnalysisPkg_EmulateFrontandRearGearingPkg_Uc_EmulateFrontandRearGearing_setSelectedCassetteRing_int, Uc_EmulateFrontandRearGearing, setSelectedCassetteRing(p_selectedCassetteRing), NO_OP())

IMPLEMENT_META_OP(OMAnimatedUc_EmulateFrontandRearGearing, FunctionalAnalysisPkg_EmulateFrontandRearGearingPkg_Uc_EmulateFrontandRearGearing_setSelectedChainRing_int, "setSelectedChainRing", FALSE, "setSelectedChainRing(int)", 1)

IMPLEMENT_OP_CALL(FunctionalAnalysisPkg_EmulateFrontandRearGearingPkg_Uc_EmulateFrontandRearGearing_setSelectedChainRing_int, Uc_EmulateFrontandRearGearing, setSelectedChainRing(p_selectedChainRing), NO_OP())
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: Emulate_Front_and_Rear_GearingSim/Animate/Uc_EmulateFrontandRearGearing.cpp
*********************************************************************/
