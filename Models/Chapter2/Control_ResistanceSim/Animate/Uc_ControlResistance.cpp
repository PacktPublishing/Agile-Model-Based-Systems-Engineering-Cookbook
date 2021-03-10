/********************************************************************
	Rhapsody	: 8.4 
	Login		: Bruce
	Component	: Control_ResistanceSim 
	Configuration 	: Animate
	Model Element	: Uc_ControlResistance
//!	Generated Date	: Thu, 20, Feb 2020  
	File Path	: Control_ResistanceSim/Animate/Uc_ControlResistance.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX

#define _OMSTATECHART_ANIMATED
//#]

//## auto_generated
#include "Uc_ControlResistance.h"
//## event evSendWattsPerKgToApp(Real)
#include "ControlResistanceActorPkg.h"
//## auto_generated
#include "ControlResistanceInterfacesPkg.h"
//#[ ignore
#define FunctionalAnalysisPkg_ControlResistancePkg_Uc_ControlResistance_computeGearRatio_SERIALIZE \
    aomsmethod->addAttribute("big", x2String(big));\
    aomsmethod->addAttribute("small", x2String(small));
#define FunctionalAnalysisPkg_ControlResistancePkg_Uc_ControlResistance_Uc_ControlResistance_SERIALIZE OM_NO_OP

#define FunctionalAnalysisPkg_ControlResistancePkg_Uc_ControlResistance_RetrieveCurrentGear_SERIALIZE OM_NO_OP

#define FunctionalAnalysisPkg_ControlResistancePkg_Uc_ControlResistance_RetrieveRiderMass_SERIALIZE OM_NO_OP

#define FunctionalAnalysisPkg_ControlResistancePkg_Uc_ControlResistance_applyResistance_SERIALIZE OM_NO_OP

#define FunctionalAnalysisPkg_ControlResistancePkg_Uc_ControlResistance_applyTimeFilterToPower_SERIALIZE OM_NO_OP

#define FunctionalAnalysisPkg_ControlResistancePkg_Uc_ControlResistance_computeAcceleration_SERIALIZE OM_NO_OP

#define FunctionalAnalysisPkg_ControlResistancePkg_Uc_ControlResistance_computeDrag_SERIALIZE OM_NO_OP

#define FunctionalAnalysisPkg_ControlResistancePkg_Uc_ControlResistance_computeInertia_SERIALIZE OM_NO_OP

#define FunctionalAnalysisPkg_ControlResistancePkg_Uc_ControlResistance_computePedalCadence_SERIALIZE aomsmethod->addAttribute("speed", x2String(speed));

#define FunctionalAnalysisPkg_ControlResistancePkg_Uc_ControlResistance_computeResistancecToApplyAtThePedal_SERIALIZE OM_NO_OP

#define FunctionalAnalysisPkg_ControlResistancePkg_Uc_ControlResistance_computeSpeedAndAcceleration_SERIALIZE OM_NO_OP

#define FunctionalAnalysisPkg_ControlResistancePkg_Uc_ControlResistance_retrieveCurrentIncline_SERIALIZE OM_NO_OP

#define FunctionalAnalysisPkg_ControlResistancePkg_Uc_ControlResistance_sendAccelarationToApp_SERIALIZE OM_NO_OP

#define FunctionalAnalysisPkg_ControlResistancePkg_Uc_ControlResistance_sendFilteredPowerToApp_SERIALIZE OM_NO_OP

#define FunctionalAnalysisPkg_ControlResistancePkg_Uc_ControlResistance_sendPedalCadenceToApp_SERIALIZE OM_NO_OP

#define FunctionalAnalysisPkg_ControlResistancePkg_Uc_ControlResistance_sendSpeedToApp_SERIALIZE OM_NO_OP

#define OMAnim_FunctionalAnalysisPkg_ControlResistancePkg_Uc_ControlResistance_setAPP_UPDATE_TM_int_UNSERIALIZE_ARGS OP_UNSER(OMDestructiveString2X,p_APP_UPDATE_TM)

#define OMAnim_FunctionalAnalysisPkg_ControlResistancePkg_Uc_ControlResistance_setAPP_UPDATE_TM_int_SERIALIZE_RET_VAL

#define OMAnim_FunctionalAnalysisPkg_ControlResistancePkg_Uc_ControlResistance_setPHYSICS_UPDATE_TM_int_UNSERIALIZE_ARGS OP_UNSER(OMDestructiveString2X,p_PHYSICS_UPDATE_TM)

#define OMAnim_FunctionalAnalysisPkg_ControlResistancePkg_Uc_ControlResistance_setPHYSICS_UPDATE_TM_int_SERIALIZE_RET_VAL

#define OMAnim_FunctionalAnalysisPkg_ControlResistancePkg_Uc_ControlResistance_setAcceleration_Real_UNSERIALIZE_ARGS OP_UNSER(OMDestructiveString2X,p_acceleration)

#define OMAnim_FunctionalAnalysisPkg_ControlResistancePkg_Uc_ControlResistance_setAcceleration_Real_SERIALIZE_RET_VAL

#define OMAnim_FunctionalAnalysisPkg_ControlResistancePkg_Uc_ControlResistance_setCadence_int_UNSERIALIZE_ARGS OP_UNSER(OMDestructiveString2X,p_cadence)

#define OMAnim_FunctionalAnalysisPkg_ControlResistancePkg_Uc_ControlResistance_setCadence_int_SERIALIZE_RET_VAL

#define OMAnim_FunctionalAnalysisPkg_ControlResistancePkg_Uc_ControlResistance_setGearRatio_Real_UNSERIALIZE_ARGS OP_UNSER(OMDestructiveString2X,p_gearRatio)

#define OMAnim_FunctionalAnalysisPkg_ControlResistancePkg_Uc_ControlResistance_setGearRatio_Real_SERIALIZE_RET_VAL

#define OMAnim_FunctionalAnalysisPkg_ControlResistancePkg_Uc_ControlResistance_setIncline_int_UNSERIALIZE_ARGS OP_UNSER(OMDestructiveString2X,p_incline)

#define OMAnim_FunctionalAnalysisPkg_ControlResistancePkg_Uc_ControlResistance_setIncline_int_SERIALIZE_RET_VAL

#define OMAnim_FunctionalAnalysisPkg_ControlResistancePkg_Uc_ControlResistance_setMeasuredPedalForce_Real_UNSERIALIZE_ARGS OP_UNSER(OMDestructiveString2X,p_measuredPedalForce)

#define OMAnim_FunctionalAnalysisPkg_ControlResistancePkg_Uc_ControlResistance_setMeasuredPedalForce_Real_SERIALIZE_RET_VAL

#define OMAnim_FunctionalAnalysisPkg_ControlResistancePkg_Uc_ControlResistance_setPedalPosition_Real_UNSERIALIZE_ARGS OP_UNSER(OMDestructiveString2X,p_pedalPosition)

#define OMAnim_FunctionalAnalysisPkg_ControlResistancePkg_Uc_ControlResistance_setPedalPosition_Real_SERIALIZE_RET_VAL

#define OMAnim_FunctionalAnalysisPkg_ControlResistancePkg_Uc_ControlResistance_setResistance_Real_UNSERIALIZE_ARGS OP_UNSER(OMDestructiveString2X,p_resistance)

#define OMAnim_FunctionalAnalysisPkg_ControlResistancePkg_Uc_ControlResistance_setResistance_Real_SERIALIZE_RET_VAL

#define OMAnim_FunctionalAnalysisPkg_ControlResistancePkg_Uc_ControlResistance_setRiderMass_Kilogram_UNSERIALIZE_ARGS OP_UNSER(OMDestructiveString2X,p_riderMass)

#define OMAnim_FunctionalAnalysisPkg_ControlResistancePkg_Uc_ControlResistance_setRiderMass_Kilogram_SERIALIZE_RET_VAL

#define OMAnim_FunctionalAnalysisPkg_ControlResistancePkg_Uc_ControlResistance_setSpeed_Real_UNSERIALIZE_ARGS OP_UNSER(OMDestructiveString2X,p_speed)

#define OMAnim_FunctionalAnalysisPkg_ControlResistancePkg_Uc_ControlResistance_setSpeed_Real_SERIALIZE_RET_VAL
//#]

//## package FunctionalAnalysisPkg::ControlResistancePkg

//## class Uc_ControlResistance
//#[ ignore
Uc_ControlResistance::paCR_TrainingApp_C::InBound_C::InBound_C() {
    itsReqSetIncline_ProxyReceptionInterface = NULL;
    port = NULL;
}

Uc_ControlResistance::paCR_TrainingApp_C::InBound_C::~InBound_C() {
    cleanUpRelations();
}

bool Uc_ControlResistance::paCR_TrainingApp_C::InBound_C::send(IOxfEvent* event, const IOxfEventGenerationParams& params) {
    bool res = false;
    if (event != NULL) {
        event->setPort(getPort());
        if (itsReqSetIncline_ProxyReceptionInterface != NULL) {
            if (event->isTypeOf(reqSetIncline_ControlResistanceInterfacesPkg_ControlResistancePkg_FunctionalAnalysisPkg_id)) {
                res = itsReqSetIncline_ProxyReceptionInterface->send(event, params);
            }
        }
    }
    return res;
    
}

bool Uc_ControlResistance::paCR_TrainingApp_C::InBound_C::send(IOxfEvent* event) {
    bool res = false;
    if (event != NULL) {
        event->setPort(getPort());
        if (itsReqSetIncline_ProxyReceptionInterface != NULL) {
            if (event->isTypeOf(reqSetIncline_ControlResistanceInterfacesPkg_ControlResistancePkg_FunctionalAnalysisPkg_id)) {
                res = itsReqSetIncline_ProxyReceptionInterface->send(event);
            }
        }
    }
    return res;
    
}

void Uc_ControlResistance::paCR_TrainingApp_C::InBound_C::setItsReqSetIncline_ProxyReceptionInterface(reqSetIncline_ProxyReceptionInterface* p_reqSetIncline_ProxyReceptionInterface) {
    itsReqSetIncline_ProxyReceptionInterface = p_reqSetIncline_ProxyReceptionInterface;
}

Uc_ControlResistance::paCR_TrainingApp_C* Uc_ControlResistance::paCR_TrainingApp_C::InBound_C::getPort() const {
    return port;
}

void Uc_ControlResistance::paCR_TrainingApp_C::InBound_C::setPort(Uc_ControlResistance::paCR_TrainingApp_C* p_paCR_TrainingApp_C) {
    _setPort(p_paCR_TrainingApp_C);
}

void Uc_ControlResistance::paCR_TrainingApp_C::InBound_C::cleanUpRelations() {
    if(itsReqSetIncline_ProxyReceptionInterface != NULL)
        {
            itsReqSetIncline_ProxyReceptionInterface = NULL;
        }
    if(port != NULL)
        {
            port = NULL;
        }
}

void Uc_ControlResistance::paCR_TrainingApp_C::InBound_C::__setPort(Uc_ControlResistance::paCR_TrainingApp_C* p_paCR_TrainingApp_C) {
    port = p_paCR_TrainingApp_C;
}

void Uc_ControlResistance::paCR_TrainingApp_C::InBound_C::_setPort(Uc_ControlResistance::paCR_TrainingApp_C* p_paCR_TrainingApp_C) {
    __setPort(p_paCR_TrainingApp_C);
}

void Uc_ControlResistance::paCR_TrainingApp_C::InBound_C::_clearPort() {
    port = NULL;
}

Uc_ControlResistance::paCR_TrainingApp_C::OutBound_C::OutBound_C() {
    itsEvSendAccelerationToApp_ProxyReceptionInterface = NULL;
    itsEvSendFilteredPowerToApp_ProxyReceptionInterface = NULL;
    itsEvSendPedalCadenceToApp_ProxyReceptionInterface = NULL;
    itsEvSendSpeedToApp_ProxyReceptionInterface = NULL;
}

Uc_ControlResistance::paCR_TrainingApp_C::OutBound_C::~OutBound_C() {
    cleanUpRelations();
}

bool Uc_ControlResistance::paCR_TrainingApp_C::OutBound_C::send(IOxfEvent* event, const IOxfEventGenerationParams& params) {
    bool res = false;
    if (event != NULL) {
        if (itsEvSendPedalCadenceToApp_ProxyReceptionInterface != NULL) {
            if (event->isTypeOf(evSendPedalCadenceToApp_ControlResistanceInterfacesPkg_ControlResistancePkg_FunctionalAnalysisPkg_id)) {
                res = itsEvSendPedalCadenceToApp_ProxyReceptionInterface->send(event, params);
                return res;
            }
        }
        if (itsEvSendFilteredPowerToApp_ProxyReceptionInterface != NULL) {
            if (event->isTypeOf(evSendFilteredPowerToApp_ControlResistanceInterfacesPkg_ControlResistancePkg_FunctionalAnalysisPkg_id)) {
                res = itsEvSendFilteredPowerToApp_ProxyReceptionInterface->send(event, params);
                return res;
            }
        }
        if (itsEvSendSpeedToApp_ProxyReceptionInterface != NULL) {
            if (event->isTypeOf(evSendSpeedToApp_ControlResistanceInterfacesPkg_ControlResistancePkg_FunctionalAnalysisPkg_id)) {
                res = itsEvSendSpeedToApp_ProxyReceptionInterface->send(event, params);
                return res;
            }
        }
        if (itsEvSendAccelerationToApp_ProxyReceptionInterface != NULL) {
            if (event->isTypeOf(evSendAccelerationToApp_ControlResistanceInterfacesPkg_ControlResistancePkg_FunctionalAnalysisPkg_id)) {
                res = itsEvSendAccelerationToApp_ProxyReceptionInterface->send(event, params);
                return res;
            }
        }
    }
    return res;
    
}

bool Uc_ControlResistance::paCR_TrainingApp_C::OutBound_C::send(IOxfEvent* event) {
    bool res = false;
    if (event != NULL) {
        if (itsEvSendPedalCadenceToApp_ProxyReceptionInterface != NULL) {
            if (event->isTypeOf(evSendPedalCadenceToApp_ControlResistanceInterfacesPkg_ControlResistancePkg_FunctionalAnalysisPkg_id)) {
                res = itsEvSendPedalCadenceToApp_ProxyReceptionInterface->send(event);
                return res;
            }
        }
        if (itsEvSendFilteredPowerToApp_ProxyReceptionInterface != NULL) {
            if (event->isTypeOf(evSendFilteredPowerToApp_ControlResistanceInterfacesPkg_ControlResistancePkg_FunctionalAnalysisPkg_id)) {
                res = itsEvSendFilteredPowerToApp_ProxyReceptionInterface->send(event);
                return res;
            }
        }
        if (itsEvSendSpeedToApp_ProxyReceptionInterface != NULL) {
            if (event->isTypeOf(evSendSpeedToApp_ControlResistanceInterfacesPkg_ControlResistancePkg_FunctionalAnalysisPkg_id)) {
                res = itsEvSendSpeedToApp_ProxyReceptionInterface->send(event);
                return res;
            }
        }
        if (itsEvSendAccelerationToApp_ProxyReceptionInterface != NULL) {
            if (event->isTypeOf(evSendAccelerationToApp_ControlResistanceInterfacesPkg_ControlResistancePkg_FunctionalAnalysisPkg_id)) {
                res = itsEvSendAccelerationToApp_ProxyReceptionInterface->send(event);
                return res;
            }
        }
    }
    return res;
    
}

void Uc_ControlResistance::paCR_TrainingApp_C::OutBound_C::setItsEvSendAccelerationToApp_ProxyReceptionInterface(OMReactive* p_OMReactive) {
    itsEvSendAccelerationToApp_ProxyReceptionInterface = p_OMReactive;
}

void Uc_ControlResistance::paCR_TrainingApp_C::OutBound_C::setItsEvSendFilteredPowerToApp_ProxyReceptionInterface(OMReactive* p_OMReactive) {
    itsEvSendFilteredPowerToApp_ProxyReceptionInterface = p_OMReactive;
}

void Uc_ControlResistance::paCR_TrainingApp_C::OutBound_C::setItsEvSendPedalCadenceToApp_ProxyReceptionInterface(OMReactive* p_OMReactive) {
    itsEvSendPedalCadenceToApp_ProxyReceptionInterface = p_OMReactive;
}

void Uc_ControlResistance::paCR_TrainingApp_C::OutBound_C::setItsEvSendSpeedToApp_ProxyReceptionInterface(OMReactive* p_OMReactive) {
    itsEvSendSpeedToApp_ProxyReceptionInterface = p_OMReactive;
}

void Uc_ControlResistance::paCR_TrainingApp_C::OutBound_C::cleanUpRelations() {
    if(itsEvSendAccelerationToApp_ProxyReceptionInterface != NULL)
        {
            itsEvSendAccelerationToApp_ProxyReceptionInterface = NULL;
        }
    if(itsEvSendFilteredPowerToApp_ProxyReceptionInterface != NULL)
        {
            itsEvSendFilteredPowerToApp_ProxyReceptionInterface = NULL;
        }
    if(itsEvSendPedalCadenceToApp_ProxyReceptionInterface != NULL)
        {
            itsEvSendPedalCadenceToApp_ProxyReceptionInterface = NULL;
        }
    if(itsEvSendSpeedToApp_ProxyReceptionInterface != NULL)
        {
            itsEvSendSpeedToApp_ProxyReceptionInterface = NULL;
        }
}

Uc_ControlResistance::paCR_TrainingApp_C::paCR_TrainingApp_C() : _p_(0) {
    initRelations();
}

Uc_ControlResistance::paCR_TrainingApp_C::~paCR_TrainingApp_C() {
}

void Uc_ControlResistance::paCR_TrainingApp_C::connectUc_ControlResistance(Uc_ControlResistance* part) {
    InBound.setItsReqSetIncline_ProxyReceptionInterface(part);
    InBound.setPort(this); // for IS_PORT macro support
    
}

evSendAccelerationToApp_ProxyReceptionInterface* Uc_ControlResistance::paCR_TrainingApp_C::getItsEvSendAccelerationToApp_ProxyReceptionInterface() {
    return &OutBound;
}

evSendFilteredPowerToApp_ProxyReceptionInterface* Uc_ControlResistance::paCR_TrainingApp_C::getItsEvSendFilteredPowerToApp_ProxyReceptionInterface() {
    return &OutBound;
}

evSendPedalCadenceToApp_ProxyReceptionInterface* Uc_ControlResistance::paCR_TrainingApp_C::getItsEvSendPedalCadenceToApp_ProxyReceptionInterface() {
    return &OutBound;
}

evSendSpeedToApp_ProxyReceptionInterface* Uc_ControlResistance::paCR_TrainingApp_C::getItsEvSendSpeedToApp_ProxyReceptionInterface() {
    return &OutBound;
}

reqSetIncline_ProxyReceptionInterface* Uc_ControlResistance::paCR_TrainingApp_C::getItsReqSetIncline_ProxyReceptionInterface() {
    return &InBound;
}

void Uc_ControlResistance::paCR_TrainingApp_C::setItsEvSendAccelerationToApp_ProxyReceptionInterface(OMReactive* p_evSendAccelerationToApp_ProxyReceptionInterface) {
    OutBound.setItsEvSendAccelerationToApp_ProxyReceptionInterface(p_evSendAccelerationToApp_ProxyReceptionInterface);
}

void Uc_ControlResistance::paCR_TrainingApp_C::setItsEvSendFilteredPowerToApp_ProxyReceptionInterface(OMReactive* p_evSendFilteredPowerToApp_ProxyReceptionInterface) {
    OutBound.setItsEvSendFilteredPowerToApp_ProxyReceptionInterface(p_evSendFilteredPowerToApp_ProxyReceptionInterface);
}

void Uc_ControlResistance::paCR_TrainingApp_C::setItsEvSendPedalCadenceToApp_ProxyReceptionInterface(OMReactive* p_evSendPedalCadenceToApp_ProxyReceptionInterface) {
    OutBound.setItsEvSendPedalCadenceToApp_ProxyReceptionInterface(p_evSendPedalCadenceToApp_ProxyReceptionInterface);
}

void Uc_ControlResistance::paCR_TrainingApp_C::setItsEvSendSpeedToApp_ProxyReceptionInterface(OMReactive* p_evSendSpeedToApp_ProxyReceptionInterface) {
    OutBound.setItsEvSendSpeedToApp_ProxyReceptionInterface(p_evSendSpeedToApp_ProxyReceptionInterface);
}

void Uc_ControlResistance::paCR_TrainingApp_C::setItsReqSetIncline_ProxyReceptionInterface(reqSetIncline_ProxyReceptionInterface* p_reqSetIncline_ProxyReceptionInterface) {
    InBound.setItsReqSetIncline_ProxyReceptionInterface(p_reqSetIncline_ProxyReceptionInterface);
}

Uc_ControlResistance::paCR_TrainingApp_C::InBound_C* Uc_ControlResistance::paCR_TrainingApp_C::getInBound() const {
    return (Uc_ControlResistance::paCR_TrainingApp_C::InBound_C*) &InBound;
}

Uc_ControlResistance::paCR_TrainingApp_C::OutBound_C* Uc_ControlResistance::paCR_TrainingApp_C::getOutBound() const {
    return (Uc_ControlResistance::paCR_TrainingApp_C::OutBound_C*) &OutBound;
}

void Uc_ControlResistance::paCR_TrainingApp_C::initRelations() {
    InBound._setPort(this);
}

void Uc_ControlResistance::paCR_TrainingApp_C::destroy() {
}

Uc_ControlResistance::paCR_Rider_C::InBound_C::InBound_C() {
    itsReqOn_ProxyReceptionInterface = NULL;
    itsReqSetGear_ProxyReceptionInterface = NULL;
    itsReqSetMeasuredPedalForce_ProxyReceptionInterface = NULL;
    itsReqSetPedalPosition_ProxyReceptionInterface = NULL;
    itsReqSetPedalSpeed_ProxyReceptionInterface = NULL;
    port = NULL;
}

Uc_ControlResistance::paCR_Rider_C::InBound_C::~InBound_C() {
    cleanUpRelations();
}

bool Uc_ControlResistance::paCR_Rider_C::InBound_C::send(IOxfEvent* event, const IOxfEventGenerationParams& params) {
    bool res = false;
    if (event != NULL) {
        event->setPort(getPort());
        if (itsReqOn_ProxyReceptionInterface != NULL) {
            if (event->isTypeOf(reqOn_ControlResistanceInterfacesPkg_ControlResistancePkg_FunctionalAnalysisPkg_id)) {
                res = itsReqOn_ProxyReceptionInterface->send(event, params);
                return res;
            }
        }
        if (itsReqSetGear_ProxyReceptionInterface != NULL) {
            if (event->isTypeOf(reqSetGear_ControlResistanceInterfacesPkg_ControlResistancePkg_FunctionalAnalysisPkg_id)) {
                res = itsReqSetGear_ProxyReceptionInterface->send(event, params);
                return res;
            }
        }
        if (itsReqSetPedalPosition_ProxyReceptionInterface != NULL) {
            if (event->isTypeOf(reqSetPedalPosition_ControlResistanceInterfacesPkg_ControlResistancePkg_FunctionalAnalysisPkg_id)) {
                res = itsReqSetPedalPosition_ProxyReceptionInterface->send(event, params);
                return res;
            }
        }
        if (itsReqSetPedalSpeed_ProxyReceptionInterface != NULL) {
            if (event->isTypeOf(reqSetPedalSpeed_ControlResistanceInterfacesPkg_ControlResistancePkg_FunctionalAnalysisPkg_id)) {
                res = itsReqSetPedalSpeed_ProxyReceptionInterface->send(event, params);
                return res;
            }
        }
        if (itsReqSetMeasuredPedalForce_ProxyReceptionInterface != NULL) {
            if (event->isTypeOf(reqSetMeasuredPedalForce_ControlResistanceInterfacesPkg_ControlResistancePkg_FunctionalAnalysisPkg_id)) {
                res = itsReqSetMeasuredPedalForce_ProxyReceptionInterface->send(event, params);
                return res;
            }
        }
    }
    return res;
    
}

bool Uc_ControlResistance::paCR_Rider_C::InBound_C::send(IOxfEvent* event) {
    bool res = false;
    if (event != NULL) {
        event->setPort(getPort());
        if (itsReqOn_ProxyReceptionInterface != NULL) {
            if (event->isTypeOf(reqOn_ControlResistanceInterfacesPkg_ControlResistancePkg_FunctionalAnalysisPkg_id)) {
                res = itsReqOn_ProxyReceptionInterface->send(event);
                return res;
            }
        }
        if (itsReqSetGear_ProxyReceptionInterface != NULL) {
            if (event->isTypeOf(reqSetGear_ControlResistanceInterfacesPkg_ControlResistancePkg_FunctionalAnalysisPkg_id)) {
                res = itsReqSetGear_ProxyReceptionInterface->send(event);
                return res;
            }
        }
        if (itsReqSetPedalPosition_ProxyReceptionInterface != NULL) {
            if (event->isTypeOf(reqSetPedalPosition_ControlResistanceInterfacesPkg_ControlResistancePkg_FunctionalAnalysisPkg_id)) {
                res = itsReqSetPedalPosition_ProxyReceptionInterface->send(event);
                return res;
            }
        }
        if (itsReqSetPedalSpeed_ProxyReceptionInterface != NULL) {
            if (event->isTypeOf(reqSetPedalSpeed_ControlResistanceInterfacesPkg_ControlResistancePkg_FunctionalAnalysisPkg_id)) {
                res = itsReqSetPedalSpeed_ProxyReceptionInterface->send(event);
                return res;
            }
        }
        if (itsReqSetMeasuredPedalForce_ProxyReceptionInterface != NULL) {
            if (event->isTypeOf(reqSetMeasuredPedalForce_ControlResistanceInterfacesPkg_ControlResistancePkg_FunctionalAnalysisPkg_id)) {
                res = itsReqSetMeasuredPedalForce_ProxyReceptionInterface->send(event);
                return res;
            }
        }
    }
    return res;
    
}

void Uc_ControlResistance::paCR_Rider_C::InBound_C::setItsReqOn_ProxyReceptionInterface(reqOn_ProxyReceptionInterface* p_reqOn_ProxyReceptionInterface) {
    itsReqOn_ProxyReceptionInterface = p_reqOn_ProxyReceptionInterface;
}

void Uc_ControlResistance::paCR_Rider_C::InBound_C::setItsReqSetGear_ProxyReceptionInterface(reqSetGear_ProxyReceptionInterface* p_reqSetGear_ProxyReceptionInterface) {
    itsReqSetGear_ProxyReceptionInterface = p_reqSetGear_ProxyReceptionInterface;
}

void Uc_ControlResistance::paCR_Rider_C::InBound_C::setItsReqSetMeasuredPedalForce_ProxyReceptionInterface(reqSetMeasuredPedalForce_ProxyReceptionInterface* p_reqSetMeasuredPedalForce_ProxyReceptionInterface) {
    itsReqSetMeasuredPedalForce_ProxyReceptionInterface = p_reqSetMeasuredPedalForce_ProxyReceptionInterface;
}

void Uc_ControlResistance::paCR_Rider_C::InBound_C::setItsReqSetPedalPosition_ProxyReceptionInterface(reqSetPedalPosition_ProxyReceptionInterface* p_reqSetPedalPosition_ProxyReceptionInterface) {
    itsReqSetPedalPosition_ProxyReceptionInterface = p_reqSetPedalPosition_ProxyReceptionInterface;
}

void Uc_ControlResistance::paCR_Rider_C::InBound_C::setItsReqSetPedalSpeed_ProxyReceptionInterface(reqSetPedalSpeed_ProxyReceptionInterface* p_reqSetPedalSpeed_ProxyReceptionInterface) {
    itsReqSetPedalSpeed_ProxyReceptionInterface = p_reqSetPedalSpeed_ProxyReceptionInterface;
}

Uc_ControlResistance::paCR_Rider_C* Uc_ControlResistance::paCR_Rider_C::InBound_C::getPort() const {
    return port;
}

void Uc_ControlResistance::paCR_Rider_C::InBound_C::setPort(Uc_ControlResistance::paCR_Rider_C* p_paCR_Rider_C) {
    _setPort(p_paCR_Rider_C);
}

void Uc_ControlResistance::paCR_Rider_C::InBound_C::cleanUpRelations() {
    if(itsReqOn_ProxyReceptionInterface != NULL)
        {
            itsReqOn_ProxyReceptionInterface = NULL;
        }
    if(itsReqSetGear_ProxyReceptionInterface != NULL)
        {
            itsReqSetGear_ProxyReceptionInterface = NULL;
        }
    if(itsReqSetMeasuredPedalForce_ProxyReceptionInterface != NULL)
        {
            itsReqSetMeasuredPedalForce_ProxyReceptionInterface = NULL;
        }
    if(itsReqSetPedalPosition_ProxyReceptionInterface != NULL)
        {
            itsReqSetPedalPosition_ProxyReceptionInterface = NULL;
        }
    if(itsReqSetPedalSpeed_ProxyReceptionInterface != NULL)
        {
            itsReqSetPedalSpeed_ProxyReceptionInterface = NULL;
        }
    if(port != NULL)
        {
            port = NULL;
        }
}

void Uc_ControlResistance::paCR_Rider_C::InBound_C::__setPort(Uc_ControlResistance::paCR_Rider_C* p_paCR_Rider_C) {
    port = p_paCR_Rider_C;
}

void Uc_ControlResistance::paCR_Rider_C::InBound_C::_setPort(Uc_ControlResistance::paCR_Rider_C* p_paCR_Rider_C) {
    __setPort(p_paCR_Rider_C);
}

void Uc_ControlResistance::paCR_Rider_C::InBound_C::_clearPort() {
    port = NULL;
}

Uc_ControlResistance::paCR_Rider_C::OutBound_C::OutBound_C() {
    itsEvApplyResistance_ProxyReceptionInterface = NULL;
}

Uc_ControlResistance::paCR_Rider_C::OutBound_C::~OutBound_C() {
    cleanUpRelations();
}

bool Uc_ControlResistance::paCR_Rider_C::OutBound_C::send(IOxfEvent* event, const IOxfEventGenerationParams& params) {
    bool res = false;
    if (event != NULL) {
        if (itsEvApplyResistance_ProxyReceptionInterface != NULL) {
            if (event->isTypeOf(evApplyResistance_ControlResistanceInterfacesPkg_ControlResistancePkg_FunctionalAnalysisPkg_id)) {
                res = itsEvApplyResistance_ProxyReceptionInterface->send(event, params);
            }
        }
    }
    return res;
    
}

bool Uc_ControlResistance::paCR_Rider_C::OutBound_C::send(IOxfEvent* event) {
    bool res = false;
    if (event != NULL) {
        if (itsEvApplyResistance_ProxyReceptionInterface != NULL) {
            if (event->isTypeOf(evApplyResistance_ControlResistanceInterfacesPkg_ControlResistancePkg_FunctionalAnalysisPkg_id)) {
                res = itsEvApplyResistance_ProxyReceptionInterface->send(event);
            }
        }
    }
    return res;
    
}

void Uc_ControlResistance::paCR_Rider_C::OutBound_C::setItsEvApplyResistance_ProxyReceptionInterface(OMReactive* p_OMReactive) {
    itsEvApplyResistance_ProxyReceptionInterface = p_OMReactive;
}

void Uc_ControlResistance::paCR_Rider_C::OutBound_C::cleanUpRelations() {
    if(itsEvApplyResistance_ProxyReceptionInterface != NULL)
        {
            itsEvApplyResistance_ProxyReceptionInterface = NULL;
        }
}

Uc_ControlResistance::paCR_Rider_C::paCR_Rider_C() : _p_(0) {
    initRelations();
}

Uc_ControlResistance::paCR_Rider_C::~paCR_Rider_C() {
}

void Uc_ControlResistance::paCR_Rider_C::connectUc_ControlResistance(Uc_ControlResistance* part) {
    InBound.setItsReqOn_ProxyReceptionInterface(part);
    InBound.setItsReqSetGear_ProxyReceptionInterface(part);
    InBound.setItsReqSetPedalPosition_ProxyReceptionInterface(part);
    InBound.setItsReqSetPedalSpeed_ProxyReceptionInterface(part);
    InBound.setItsReqSetMeasuredPedalForce_ProxyReceptionInterface(part);
    InBound.setPort(this); // for IS_PORT macro support
    
}

evApplyResistance_ProxyReceptionInterface* Uc_ControlResistance::paCR_Rider_C::getItsEvApplyResistance_ProxyReceptionInterface() {
    return &OutBound;
}

reqOn_ProxyReceptionInterface* Uc_ControlResistance::paCR_Rider_C::getItsReqOn_ProxyReceptionInterface() {
    return &InBound;
}

reqSetGear_ProxyReceptionInterface* Uc_ControlResistance::paCR_Rider_C::getItsReqSetGear_ProxyReceptionInterface() {
    return &InBound;
}

reqSetMeasuredPedalForce_ProxyReceptionInterface* Uc_ControlResistance::paCR_Rider_C::getItsReqSetMeasuredPedalForce_ProxyReceptionInterface() {
    return &InBound;
}

reqSetPedalPosition_ProxyReceptionInterface* Uc_ControlResistance::paCR_Rider_C::getItsReqSetPedalPosition_ProxyReceptionInterface() {
    return &InBound;
}

reqSetPedalSpeed_ProxyReceptionInterface* Uc_ControlResistance::paCR_Rider_C::getItsReqSetPedalSpeed_ProxyReceptionInterface() {
    return &InBound;
}

void Uc_ControlResistance::paCR_Rider_C::setItsEvApplyResistance_ProxyReceptionInterface(OMReactive* p_evApplyResistance_ProxyReceptionInterface) {
    OutBound.setItsEvApplyResistance_ProxyReceptionInterface(p_evApplyResistance_ProxyReceptionInterface);
}

void Uc_ControlResistance::paCR_Rider_C::setItsReqOn_ProxyReceptionInterface(reqOn_ProxyReceptionInterface* p_reqOn_ProxyReceptionInterface) {
    InBound.setItsReqOn_ProxyReceptionInterface(p_reqOn_ProxyReceptionInterface);
}

void Uc_ControlResistance::paCR_Rider_C::setItsReqSetGear_ProxyReceptionInterface(reqSetGear_ProxyReceptionInterface* p_reqSetGear_ProxyReceptionInterface) {
    InBound.setItsReqSetGear_ProxyReceptionInterface(p_reqSetGear_ProxyReceptionInterface);
}

void Uc_ControlResistance::paCR_Rider_C::setItsReqSetMeasuredPedalForce_ProxyReceptionInterface(reqSetMeasuredPedalForce_ProxyReceptionInterface* p_reqSetMeasuredPedalForce_ProxyReceptionInterface) {
    InBound.setItsReqSetMeasuredPedalForce_ProxyReceptionInterface(p_reqSetMeasuredPedalForce_ProxyReceptionInterface);
}

void Uc_ControlResistance::paCR_Rider_C::setItsReqSetPedalPosition_ProxyReceptionInterface(reqSetPedalPosition_ProxyReceptionInterface* p_reqSetPedalPosition_ProxyReceptionInterface) {
    InBound.setItsReqSetPedalPosition_ProxyReceptionInterface(p_reqSetPedalPosition_ProxyReceptionInterface);
}

void Uc_ControlResistance::paCR_Rider_C::setItsReqSetPedalSpeed_ProxyReceptionInterface(reqSetPedalSpeed_ProxyReceptionInterface* p_reqSetPedalSpeed_ProxyReceptionInterface) {
    InBound.setItsReqSetPedalSpeed_ProxyReceptionInterface(p_reqSetPedalSpeed_ProxyReceptionInterface);
}

Uc_ControlResistance::paCR_Rider_C::InBound_C* Uc_ControlResistance::paCR_Rider_C::getInBound() const {
    return (Uc_ControlResistance::paCR_Rider_C::InBound_C*) &InBound;
}

Uc_ControlResistance::paCR_Rider_C::OutBound_C* Uc_ControlResistance::paCR_Rider_C::getOutBound() const {
    return (Uc_ControlResistance::paCR_Rider_C::OutBound_C*) &OutBound;
}

void Uc_ControlResistance::paCR_Rider_C::initRelations() {
    InBound._setPort(this);
}

void Uc_ControlResistance::paCR_Rider_C::destroy() {
}
//#]

Uc_ControlResistance::Uc_ControlResistance(IOxfActive* theActiveContext) : APP_UPDATE_TM(10000), PHYSICS_UPDATE_TM(5000), acceleration(0), gearFront(53), gearRatio(49.2), gearRear(28), riderMass(70), speed(0) {
    NOTIFY_REACTIVE_CONSTRUCTOR(Uc_ControlResistance, Uc_ControlResistance(), 0, FunctionalAnalysisPkg_ControlResistancePkg_Uc_ControlResistance_Uc_ControlResistance_SERIALIZE);
    setActiveContext(theActiveContext, false);
    initRelations();
    initStatechart();
    initWebAdapters();
}

Uc_ControlResistance::~Uc_ControlResistance() {
    NOTIFY_DESTRUCTOR(~Uc_ControlResistance, true);
    delete itsWebAdapter;
    cancelTimeouts();
}

void Uc_ControlResistance::RetrieveCurrentGear() {
    NOTIFY_OPERATION(RetrieveCurrentGear, RetrieveCurrentGear(), 0, FunctionalAnalysisPkg_ControlResistancePkg_Uc_ControlResistance_RetrieveCurrentGear_SERIALIZE);
    //#[ operation RetrieveCurrentGear()
    //#]
}

void Uc_ControlResistance::RetrieveRiderMass() {
    NOTIFY_OPERATION(RetrieveRiderMass, RetrieveRiderMass(), 0, FunctionalAnalysisPkg_ControlResistancePkg_Uc_ControlResistance_RetrieveRiderMass_SERIALIZE);
    //#[ operation RetrieveRiderMass()
    //#]
}

void Uc_ControlResistance::applyResistance() {
    NOTIFY_OPERATION(applyResistance, applyResistance(), 0, FunctionalAnalysisPkg_ControlResistancePkg_Uc_ControlResistance_applyResistance_SERIALIZE);
    //#[ operation applyResistance()
    //#]
}

void Uc_ControlResistance::applyTimeFilterToPower() {
    NOTIFY_OPERATION(applyTimeFilterToPower, applyTimeFilterToPower(), 0, FunctionalAnalysisPkg_ControlResistancePkg_Uc_ControlResistance_applyTimeFilterToPower_SERIALIZE);
    //#[ operation applyTimeFilterToPower()
    //#]
}

void Uc_ControlResistance::computeAcceleration() {
    NOTIFY_OPERATION(computeAcceleration, computeAcceleration(), 0, FunctionalAnalysisPkg_ControlResistancePkg_Uc_ControlResistance_computeAcceleration_SERIALIZE);
    //#[ operation computeAcceleration()
    //#]
}

void Uc_ControlResistance::computeDrag() {
    NOTIFY_OPERATION(computeDrag, computeDrag(), 0, FunctionalAnalysisPkg_ControlResistancePkg_Uc_ControlResistance_computeDrag_SERIALIZE);
    //#[ operation computeDrag()
    //#]
}

Real Uc_ControlResistance::computeGearRatio(int big, int small) {
    NOTIFY_OPERATION(computeGearRatio, computeGearRatio(int,int), 2, FunctionalAnalysisPkg_ControlResistancePkg_Uc_ControlResistance_computeGearRatio_SERIALIZE);
    //#[ operation computeGearRatio(int,int)
     double driveWheelDiameter = 26.0; // standard wheel diamteter
     double gearInches = driveWheelDiameter * big / small;
     return gearInches;
    //#]
}

void Uc_ControlResistance::computeInertia() {
    NOTIFY_OPERATION(computeInertia, computeInertia(), 0, FunctionalAnalysisPkg_ControlResistancePkg_Uc_ControlResistance_computeInertia_SERIALIZE);
    //#[ operation computeInertia()
    //#]
}

void Uc_ControlResistance::computePedalCadence(Real speed) {
    NOTIFY_OPERATION(computePedalCadence, computePedalCadence(Real), 1, FunctionalAnalysisPkg_ControlResistancePkg_Uc_ControlResistance_computePedalCadence_SERIALIZE);
    //#[ operation computePedalCadence(Real)
    cadence = (int) speed;
    //#]
}

void Uc_ControlResistance::computeResistancecToApplyAtThePedal() {
    NOTIFY_OPERATION(computeResistancecToApplyAtThePedal, computeResistancecToApplyAtThePedal(), 0, FunctionalAnalysisPkg_ControlResistancePkg_Uc_ControlResistance_computeResistancecToApplyAtThePedal_SERIALIZE);
    //#[ operation computeResistancecToApplyAtThePedal()
    //#]
}

void Uc_ControlResistance::computeSpeedAndAcceleration() {
    NOTIFY_OPERATION(computeSpeedAndAcceleration, computeSpeedAndAcceleration(), 0, FunctionalAnalysisPkg_ControlResistancePkg_Uc_ControlResistance_computeSpeedAndAcceleration_SERIALIZE);
    //#[ operation computeSpeedAndAcceleration()
    // linear approximation based on power output for rider weighing 165 lb and
    // a bike weighing 17 lbs, in which speed at 12 mph requires 53 watts
    // and 22 mph requires 234 watts     
    // The actual computation is highly nonlinear and a cubic function of speed
    double oldSpeed = speed;
    speed =  17.8*measuredPedalForce - 160.5;      
    acceleration = (speed-oldSpeed)/ 36000; // also simple approximation
    //#]
}

void Uc_ControlResistance::retrieveCurrentIncline() {
    NOTIFY_OPERATION(retrieveCurrentIncline, retrieveCurrentIncline(), 0, FunctionalAnalysisPkg_ControlResistancePkg_Uc_ControlResistance_retrieveCurrentIncline_SERIALIZE);
    //#[ operation retrieveCurrentIncline()
    //#]
}

void Uc_ControlResistance::sendAccelarationToApp() {
    NOTIFY_OPERATION(sendAccelarationToApp, sendAccelarationToApp(), 0, FunctionalAnalysisPkg_ControlResistancePkg_Uc_ControlResistance_sendAccelarationToApp_SERIALIZE);
    //#[ operation sendAccelarationToApp()
    //#]
}

void Uc_ControlResistance::sendFilteredPowerToApp() {
    NOTIFY_OPERATION(sendFilteredPowerToApp, sendFilteredPowerToApp(), 0, FunctionalAnalysisPkg_ControlResistancePkg_Uc_ControlResistance_sendFilteredPowerToApp_SERIALIZE);
    //#[ operation sendFilteredPowerToApp()
    //#]
}

void Uc_ControlResistance::sendPedalCadenceToApp() {
    NOTIFY_OPERATION(sendPedalCadenceToApp, sendPedalCadenceToApp(), 0, FunctionalAnalysisPkg_ControlResistancePkg_Uc_ControlResistance_sendPedalCadenceToApp_SERIALIZE);
    //#[ operation sendPedalCadenceToApp()
    //#]
}

void Uc_ControlResistance::sendSpeedToApp() {
    NOTIFY_OPERATION(sendSpeedToApp, sendSpeedToApp(), 0, FunctionalAnalysisPkg_ControlResistancePkg_Uc_ControlResistance_sendSpeedToApp_SERIALIZE);
    //#[ operation sendSpeedToApp()
    //#]
}

Uc_ControlResistance::paCR_TrainingApp_C* Uc_ControlResistance::getPaCR_TrainingApp() const {
    return (Uc_ControlResistance::paCR_TrainingApp_C*) &paCR_TrainingApp;
}

Uc_ControlResistance::paCR_TrainingApp_C* Uc_ControlResistance::get_paCR_TrainingApp() const {
    return (Uc_ControlResistance::paCR_TrainingApp_C*) &paCR_TrainingApp;
}

Uc_ControlResistance::paCR_Rider_C* Uc_ControlResistance::getPaCR_Rider() const {
    return (Uc_ControlResistance::paCR_Rider_C*) &paCR_Rider;
}

Uc_ControlResistance::paCR_Rider_C* Uc_ControlResistance::get_paCR_Rider() const {
    return (Uc_ControlResistance::paCR_Rider_C*) &paCR_Rider;
}

int Uc_ControlResistance::getAPP_UPDATE_TM() const {
    return APP_UPDATE_TM;
}

void Uc_ControlResistance::setAPP_UPDATE_TM(int p_APP_UPDATE_TM) {
    APP_UPDATE_TM = p_APP_UPDATE_TM;
    NOTIFY_SET_OPERATION;
}

int Uc_ControlResistance::getPHYSICS_UPDATE_TM() const {
    return PHYSICS_UPDATE_TM;
}

void Uc_ControlResistance::setPHYSICS_UPDATE_TM(int p_PHYSICS_UPDATE_TM) {
    PHYSICS_UPDATE_TM = p_PHYSICS_UPDATE_TM;
    NOTIFY_SET_OPERATION;
}

Real Uc_ControlResistance::getAcceleration() const {
    return acceleration;
}

void Uc_ControlResistance::setAcceleration(Real p_acceleration) {
    acceleration = p_acceleration;
    NOTIFY_SET_OPERATION;
}

int Uc_ControlResistance::getCadence() const {
    return cadence;
}

void Uc_ControlResistance::setCadence(int p_cadence) {
    cadence = p_cadence;
    NOTIFY_SET_OPERATION;
}

int Uc_ControlResistance::getGearFront() const {
    return gearFront;
}

void Uc_ControlResistance::setGearFront(int p_gearFront) {
    gearFront = p_gearFront;
}

Real Uc_ControlResistance::getGearRatio() const {
    return gearRatio;
}

void Uc_ControlResistance::setGearRatio(Real p_gearRatio) {
    gearRatio = p_gearRatio;
    NOTIFY_SET_OPERATION;
}

Real Uc_ControlResistance::getGearRear() const {
    return gearRear;
}

void Uc_ControlResistance::setGearRear(Real p_gearRear) {
    gearRear = p_gearRear;
}

int Uc_ControlResistance::getIncline() const {
    return incline;
}

void Uc_ControlResistance::setIncline(int p_incline) {
    incline = p_incline;
    NOTIFY_SET_OPERATION;
}

Real Uc_ControlResistance::getMeasuredPedalForce() const {
    return measuredPedalForce;
}

void Uc_ControlResistance::setMeasuredPedalForce(Real p_measuredPedalForce) {
    measuredPedalForce = p_measuredPedalForce;
    NOTIFY_SET_OPERATION;
}

Real Uc_ControlResistance::getPedalPosition() const {
    return pedalPosition;
}

void Uc_ControlResistance::setPedalPosition(Real p_pedalPosition) {
    pedalPosition = p_pedalPosition;
    NOTIFY_SET_OPERATION;
}

Real Uc_ControlResistance::getPedalSpeed() const {
    return pedalSpeed;
}

void Uc_ControlResistance::setPedalSpeed(Real p_pedalSpeed) {
    pedalSpeed = p_pedalSpeed;
}

Real Uc_ControlResistance::getResistance() const {
    return resistance;
}

void Uc_ControlResistance::setResistance(Real p_resistance) {
    resistance = p_resistance;
    NOTIFY_SET_OPERATION;
}

Kilogram Uc_ControlResistance::getRiderMass() const {
    return riderMass;
}

void Uc_ControlResistance::setRiderMass(Kilogram p_riderMass) {
    riderMass = p_riderMass;
    NOTIFY_SET_OPERATION;
}

Real Uc_ControlResistance::getSpeed() const {
    return speed;
}

void Uc_ControlResistance::setSpeed(Real p_speed) {
    speed = p_speed;
    NOTIFY_SET_OPERATION;
}

bool Uc_ControlResistance::startBehavior() {
    bool done = false;
    done = OMReactive::startBehavior();
    return done;
}

void Uc_ControlResistance::initRelations() {
    if (get_paCR_TrainingApp() != NULL) {
        get_paCR_TrainingApp()->connectUc_ControlResistance(this);
    }
    if (get_paCR_Rider() != NULL) {
        get_paCR_Rider()->connectUc_ControlResistance(this);
    }
}

void Uc_ControlResistance::initStatechart() {
    rootState_subState = OMNonState;
    rootState_active = OMNonState;
    state_25_subState = OMNonState;
    state_25_active = OMNonState;
    state_24_subState = OMNonState;
    state_24_active = OMNonState;
    state_18_subState = OMNonState;
    state_18_active = OMNonState;
    state_22_subState = OMNonState;
    state_22_active = OMNonState;
    state_22_timeout = NULL;
    state_21_subState = OMNonState;
    state_21_active = OMNonState;
    state_21_timeout = NULL;
    state_16_subState = OMNonState;
    state_16_active = OMNonState;
    state_9_subState = OMNonState;
    state_9_active = OMNonState;
    state_10_subState = OMNonState;
    state_10_active = OMNonState;
    state_10_timeout = NULL;
}

void Uc_ControlResistance::cancelTimeouts() {
    cancel(state_22_timeout);
    cancel(state_21_timeout);
    cancel(state_10_timeout);
}

bool Uc_ControlResistance::cancelTimeout(const IOxfTimeout* arg) {
    bool res = false;
    if(state_22_timeout == arg)
        {
            state_22_timeout = NULL;
            res = true;
        }
    if(state_21_timeout == arg)
        {
            state_21_timeout = NULL;
            res = true;
        }
    if(state_10_timeout == arg)
        {
            state_10_timeout = NULL;
            res = true;
        }
    return res;
}

//#[ ignore
const ClassWebAdapter * Uc_ControlResistance::getItsWebAdapter() const {
    return itsWebAdapter;
}

void Uc_ControlResistance::visitWebAdaptedRelations() const {
}

void Uc_ControlResistance::initWebAdapters() {
    itsWebAdapter = new ClassWebAdapterTmpl< Uc_ControlResistance >(this, "Uc_ControlResistance");
    itsWebAdapter->AddSubObject(new DoubleAttrWebAdapterTmpl< Uc_ControlResistance >(this,
                                    "pedalPosition",
                                     &Uc_ControlResistance::getPedalPosition,
                                     &Uc_ControlResistance::setPedalPosition));
    itsWebAdapter->AddSubObject(new DoubleAttrWebAdapterTmpl< Uc_ControlResistance >(this,
                                    "pedalSpeed",
                                     &Uc_ControlResistance::getPedalSpeed,
                                     &Uc_ControlResistance::setPedalSpeed));
    itsWebAdapter->AddSubObject(new DoubleAttrWebAdapterTmpl< Uc_ControlResistance >(this,
                                    "measuredPedalForce",
                                     &Uc_ControlResistance::getMeasuredPedalForce,
                                     &Uc_ControlResistance::setMeasuredPedalForce));
    itsWebAdapter->AddSubObject(new IntAttrWebAdapterTmpl< Uc_ControlResistance >(this,
                                    "incline",
                                     &Uc_ControlResistance::getIncline,
                                     &Uc_ControlResistance::setIncline));
    itsWebAdapter->AddSubObject(new IntAttrWebAdapterTmpl< Uc_ControlResistance >(this,
                                    "gearFront",
                                     &Uc_ControlResistance::getGearFront,
                                     &Uc_ControlResistance::setGearFront));
    itsWebAdapter->AddSubObject(new DoubleAttrWebAdapterTmpl< Uc_ControlResistance >(this,
                                    "gearRear",
                                     &Uc_ControlResistance::getGearRear,
                                     &Uc_ControlResistance::setGearRear));
    itsWebAdapter->AddSubObject(new DoubleAttrWebAdapterTmpl< Uc_ControlResistance >(this,
                                    "gearRatio",
                                     &Uc_ControlResistance::getGearRatio,
                                     &Uc_ControlResistance::setGearRatio));
    itsWebAdapter->AddSubObject(new IntAttrWebAdapterTmpl< Uc_ControlResistance >(this,
                                    "cadence",
                                     &Uc_ControlResistance::getCadence,
                                     &Uc_ControlResistance::setCadence));
    itsWebAdapter->AddSubObject(new DoubleAttrWebAdapterTmpl< Uc_ControlResistance >(this,
                                    "resistance",
                                     &Uc_ControlResistance::getResistance,
                                     &Uc_ControlResistance::setResistance));
    itsWebAdapter->AddSubObject(new IntAttrWebAdapterTmpl< Uc_ControlResistance >(this,
                                    "APP_UPDATE_TM",
                                     &Uc_ControlResistance::getAPP_UPDATE_TM,
                                     &Uc_ControlResistance::setAPP_UPDATE_TM));
    itsWebAdapter->AddSubObject(new IntAttrWebAdapterTmpl< Uc_ControlResistance >(this,
                                    "PHYSICS_UPDATE_TM",
                                     &Uc_ControlResistance::getPHYSICS_UPDATE_TM,
                                     &Uc_ControlResistance::setPHYSICS_UPDATE_TM));
    itsWebAdapter->AddSubObject(new DoubleAttrWebAdapterTmpl< Uc_ControlResistance >(this,
                                    "acceleration",
                                     &Uc_ControlResistance::getAcceleration,
                                     &Uc_ControlResistance::setAcceleration));
    itsWebAdapter->AddSubObject(new DoubleAttrWebAdapterTmpl< Uc_ControlResistance >(this,
                                    "speed",
                                     &Uc_ControlResistance::getSpeed,
                                     &Uc_ControlResistance::setSpeed));
}
//#]

void Uc_ControlResistance::rootState_entDef() {
    {
        NOTIFY_STATE_ENTERED("ROOT");
        NOTIFY_TRANSITION_STARTED("0");
        NOTIFY_STATE_ENTERED("ROOT.Ready");
        rootState_subState = Ready;
        rootState_active = Ready;
        NOTIFY_TRANSITION_TERMINATED("0");
    }
}

IOxfReactive::TakeEventStatus Uc_ControlResistance::rootState_processEvent() {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    switch (rootState_active) {
        // State Ready
        case Ready:
        {
            res = Ready_handleEvent();
        }
        break;
        // State Running
        case Running:
        {
            res = Running_processEvent();
        }
        break;
        default:
            break;
    }
    return res;
}

void Uc_ControlResistance::Running_entDef() {
    NOTIFY_STATE_ENTERED("ROOT.Running");
    rootState_subState = Running;
    rootState_active = Running;
    state_16_entDef();
    state_18_entDef();
    state_24_entDef();
    state_25_entDef();
}

void Uc_ControlResistance::Running_exit() {
    state_16_exit();
    state_18_exit();
    state_24_exit();
    state_25_exit();
    
    NOTIFY_STATE_EXITED("ROOT.Running");
}

IOxfReactive::TakeEventStatus Uc_ControlResistance::RunningTakereqOff() {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    NOTIFY_TRANSITION_STARTED("18");
    Running_exit();
    NOTIFY_STATE_ENTERED("ROOT.Ready");
    rootState_subState = Ready;
    rootState_active = Ready;
    NOTIFY_TRANSITION_TERMINATED("18");
    res = eventConsumed;
    return res;
}

IOxfReactive::TakeEventStatus Uc_ControlResistance::Running_processEvent() {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    // State state_16
    if(state_16_processEvent() != eventNotConsumed)
        {
            res = eventConsumed;
            if(!IS_IN(Running))
                {
                    return res;
                }
        }
    // State state_18
    if(state_18_processEvent() != eventNotConsumed)
        {
            res = eventConsumed;
            if(!IS_IN(Running))
                {
                    return res;
                }
        }
    // State state_24
    if(state_24_processEvent() != eventNotConsumed)
        {
            res = eventConsumed;
            if(!IS_IN(Running))
                {
                    return res;
                }
        }
    // State state_25
    if(state_25_processEvent() != eventNotConsumed)
        {
            res = eventConsumed;
            if(!IS_IN(Running))
                {
                    return res;
                }
        }
    if(res == eventNotConsumed)
        {
            res = Running_handleEvent();
        }
    return res;
}

IOxfReactive::TakeEventStatus Uc_ControlResistance::Running_handleEvent() {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    if(IS_EVENT_TYPE_OF(reqOff_ControlResistancePkg_FunctionalAnalysisPkg_id))
        {
            res = RunningTakereqOff();
        }
    
    return res;
}

void Uc_ControlResistance::state_25_entDef() {
    NOTIFY_STATE_ENTERED("ROOT.Running.state_25");
    NOTIFY_STATE_ENTERED("ROOT.Running.state_25.Gearing");
    state_25_subState = Gearing;
    state_25_active = Gearing;
}

void Uc_ControlResistance::state_25_exit() {
    // State Gearing
    if(state_25_subState == Gearing)
        {
            NOTIFY_STATE_EXITED("ROOT.Running.state_25.Gearing");
        }
    state_25_subState = OMNonState;
    
    NOTIFY_STATE_EXITED("ROOT.Running.state_25");
}

IOxfReactive::TakeEventStatus Uc_ControlResistance::state_25_processEvent() {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    // State Gearing
    if(state_25_active == Gearing)
        {
            if(IS_EVENT_TYPE_OF(reqSetGear_ControlResistanceInterfacesPkg_ControlResistancePkg_FunctionalAnalysisPkg_id))
                {
                    OMSETPARAMS(reqSetGear);
                    NOTIFY_TRANSITION_STARTED("16");
                    NOTIFY_STATE_EXITED("ROOT.Running.state_25.Gearing");
                    //#[ transition 16 
                    
                    setGearFront(params->bigRing);
                    setGearRear(params->cassetteRing);
                    setGearRatio(computeGearRatio(gearFront, gearRear));
                    //#]
                    NOTIFY_STATE_ENTERED("ROOT.Running.state_25.Gearing");
                    state_25_subState = Gearing;
                    state_25_active = Gearing;
                    NOTIFY_TRANSITION_TERMINATED("16");
                    res = eventConsumed;
                }
            
            
        }
    return res;
}

void Uc_ControlResistance::state_24_entDef() {
    NOTIFY_STATE_ENTERED("ROOT.Running.state_24");
    NOTIFY_STATE_ENTERED("ROOT.Running.state_24.Inclining");
    state_24_subState = Inclining;
    state_24_active = Inclining;
}

void Uc_ControlResistance::state_24_exit() {
    // State Inclining
    if(state_24_subState == Inclining)
        {
            NOTIFY_STATE_EXITED("ROOT.Running.state_24.Inclining");
        }
    state_24_subState = OMNonState;
    
    NOTIFY_STATE_EXITED("ROOT.Running.state_24");
}

IOxfReactive::TakeEventStatus Uc_ControlResistance::state_24_processEvent() {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    // State Inclining
    if(state_24_active == Inclining)
        {
            if(IS_EVENT_TYPE_OF(reqSetIncline_ControlResistanceInterfacesPkg_ControlResistancePkg_FunctionalAnalysisPkg_id))
                {
                    OMSETPARAMS(reqSetIncline);
                    NOTIFY_TRANSITION_STARTED("15");
                    NOTIFY_STATE_EXITED("ROOT.Running.state_24.Inclining");
                    //#[ transition 15 
                    
                    setIncline(params->inc);
                    //#]
                    NOTIFY_STATE_ENTERED("ROOT.Running.state_24.Inclining");
                    state_24_subState = Inclining;
                    state_24_active = Inclining;
                    NOTIFY_TRANSITION_TERMINATED("15");
                    res = eventConsumed;
                }
            
            
        }
    return res;
}

void Uc_ControlResistance::state_18_entDef() {
    NOTIFY_STATE_ENTERED("ROOT.Running.state_18");
    ComputingPhysicsModel_entDef();
}

void Uc_ControlResistance::state_18_exit() {
    // State ComputingPhysicsModel
    if(state_18_subState == ComputingPhysicsModel)
        {
            ComputingPhysicsModel_exit();
        }
    state_18_subState = OMNonState;
    
    NOTIFY_STATE_EXITED("ROOT.Running.state_18");
}

IOxfReactive::TakeEventStatus Uc_ControlResistance::state_18_processEvent() {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    // State ComputingPhysicsModel
    if(state_18_active == ComputingPhysicsModel)
        {
            res = ComputingPhysicsModel_processEvent();
        }
    return res;
}

void Uc_ControlResistance::ComputingPhysicsModel_entDef() {
    NOTIFY_STATE_ENTERED("ROOT.Running.state_18.ComputingPhysicsModel");
    state_18_subState = ComputingPhysicsModel;
    state_18_active = ComputingPhysicsModel;
    state_21_entDef();
    state_22_entDef();
}

void Uc_ControlResistance::ComputingPhysicsModel_exit() {
    switch (state_21_subState) {
        // State WaitingToCompute
        case WaitingToCompute:
        {
            cancel(state_21_timeout);
            NOTIFY_STATE_EXITED("ROOT.Running.state_18.ComputingPhysicsModel.state_21.WaitingToCompute");
        }
        break;
        // State sendaction_12
        case sendaction_12:
        {
            popNullTransition();
            NOTIFY_STATE_EXITED("ROOT.Running.state_18.ComputingPhysicsModel.state_21.sendaction_12");
        }
        break;
        default:
            break;
    }
    state_21_subState = OMNonState;
    NOTIFY_STATE_EXITED("ROOT.Running.state_18.ComputingPhysicsModel.state_21");
    switch (state_22_subState) {
        // State sendaction_13
        case sendaction_13:
        {
            popNullTransition();
            NOTIFY_STATE_EXITED("ROOT.Running.state_18.ComputingPhysicsModel.state_22.sendaction_13");
        }
        break;
        // State WaitingToUpdateApp
        case WaitingToUpdateApp:
        {
            cancel(state_22_timeout);
            NOTIFY_STATE_EXITED("ROOT.Running.state_18.ComputingPhysicsModel.state_22.WaitingToUpdateApp");
        }
        break;
        // State sendaction_14
        case sendaction_14:
        {
            popNullTransition();
            NOTIFY_STATE_EXITED("ROOT.Running.state_18.ComputingPhysicsModel.state_22.sendaction_14");
        }
        break;
        default:
            break;
    }
    state_22_subState = OMNonState;
    NOTIFY_STATE_EXITED("ROOT.Running.state_18.ComputingPhysicsModel.state_22");
    
    NOTIFY_STATE_EXITED("ROOT.Running.state_18.ComputingPhysicsModel");
}

IOxfReactive::TakeEventStatus Uc_ControlResistance::ComputingPhysicsModel_processEvent() {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    // State state_21
    if(state_21_processEvent() != eventNotConsumed)
        {
            res = eventConsumed;
            if(!IS_IN(ComputingPhysicsModel))
                {
                    return res;
                }
        }
    // State state_22
    if(state_22_processEvent() != eventNotConsumed)
        {
            res = eventConsumed;
            if(!IS_IN(ComputingPhysicsModel))
                {
                    return res;
                }
        }
    
    return res;
}

void Uc_ControlResistance::state_22_entDef() {
    NOTIFY_STATE_ENTERED("ROOT.Running.state_18.ComputingPhysicsModel.state_22");
    NOTIFY_TRANSITION_STARTED("19");
    NOTIFY_STATE_ENTERED("ROOT.Running.state_18.ComputingPhysicsModel.state_22.WaitingToUpdateApp");
    state_22_subState = WaitingToUpdateApp;
    state_22_active = WaitingToUpdateApp;
    state_22_timeout = scheduleTimeout(APP_UPDATE_TM, "ROOT.Running.state_18.ComputingPhysicsModel.state_22.WaitingToUpdateApp");
    NOTIFY_TRANSITION_TERMINATED("19");
}

IOxfReactive::TakeEventStatus Uc_ControlResistance::state_22_processEvent() {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    switch (state_22_active) {
        // State sendaction_13
        case sendaction_13:
        {
            if(IS_EVENT_TYPE_OF(OMNullEventId))
                {
                    NOTIFY_TRANSITION_STARTED("12");
                    popNullTransition();
                    NOTIFY_STATE_EXITED("ROOT.Running.state_18.ComputingPhysicsModel.state_22.sendaction_13");
                    //#[ transition 12 
                     sendAccelarationToApp();
                    //#]
                    NOTIFY_STATE_ENTERED("ROOT.Running.state_18.ComputingPhysicsModel.state_22.sendaction_14");
                    pushNullTransition();
                    state_22_subState = sendaction_14;
                    state_22_active = sendaction_14;
                    //#[ state Running.state_18.ComputingPhysicsModel.state_22.sendaction_14.(Entry) 
                    OUT_PORT(paCR_TrainingApp)->GEN(evSendAccelerationToApp(acceleration));
                    //#]
                    NOTIFY_TRANSITION_TERMINATED("12");
                    res = eventConsumed;
                }
            
            
        }
        break;
        // State WaitingToUpdateApp
        case WaitingToUpdateApp:
        {
            if(IS_EVENT_TYPE_OF(OMTimeoutEventId))
                {
                    if(getCurrentEvent() == state_22_timeout)
                        {
                            NOTIFY_TRANSITION_STARTED("11");
                            cancel(state_22_timeout);
                            NOTIFY_STATE_EXITED("ROOT.Running.state_18.ComputingPhysicsModel.state_22.WaitingToUpdateApp");
                            //#[ transition 11 
                             sendSpeedToApp();
                            //#]
                            NOTIFY_STATE_ENTERED("ROOT.Running.state_18.ComputingPhysicsModel.state_22.sendaction_13");
                            pushNullTransition();
                            state_22_subState = sendaction_13;
                            state_22_active = sendaction_13;
                            //#[ state Running.state_18.ComputingPhysicsModel.state_22.sendaction_13.(Entry) 
                            OUT_PORT(paCR_TrainingApp)->GEN(evSendSpeedToApp(speed));
                            //#]
                            NOTIFY_TRANSITION_TERMINATED("11");
                            res = eventConsumed;
                        }
                }
            
            
        }
        break;
        // State sendaction_14
        case sendaction_14:
        {
            if(IS_EVENT_TYPE_OF(OMNullEventId))
                {
                    NOTIFY_TRANSITION_STARTED("13");
                    popNullTransition();
                    NOTIFY_STATE_EXITED("ROOT.Running.state_18.ComputingPhysicsModel.state_22.sendaction_14");
                    NOTIFY_STATE_ENTERED("ROOT.Running.state_18.ComputingPhysicsModel.state_22.WaitingToUpdateApp");
                    state_22_subState = WaitingToUpdateApp;
                    state_22_active = WaitingToUpdateApp;
                    state_22_timeout = scheduleTimeout(APP_UPDATE_TM, "ROOT.Running.state_18.ComputingPhysicsModel.state_22.WaitingToUpdateApp");
                    NOTIFY_TRANSITION_TERMINATED("13");
                    res = eventConsumed;
                }
            
            
        }
        break;
        default:
            break;
    }
    return res;
}

void Uc_ControlResistance::state_21_entDef() {
    NOTIFY_STATE_ENTERED("ROOT.Running.state_18.ComputingPhysicsModel.state_21");
    NOTIFY_TRANSITION_STARTED("14");
    NOTIFY_STATE_ENTERED("ROOT.Running.state_18.ComputingPhysicsModel.state_21.WaitingToCompute");
    state_21_subState = WaitingToCompute;
    state_21_active = WaitingToCompute;
    state_21_timeout = scheduleTimeout(PHYSICS_UPDATE_TM, "ROOT.Running.state_18.ComputingPhysicsModel.state_21.WaitingToCompute");
    NOTIFY_TRANSITION_TERMINATED("14");
}

IOxfReactive::TakeEventStatus Uc_ControlResistance::state_21_processEvent() {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    switch (state_21_active) {
        // State WaitingToCompute
        case WaitingToCompute:
        {
            if(IS_EVENT_TYPE_OF(OMTimeoutEventId))
                {
                    if(getCurrentEvent() == state_21_timeout)
                        {
                            NOTIFY_TRANSITION_STARTED("9");
                            cancel(state_21_timeout);
                            NOTIFY_STATE_EXITED("ROOT.Running.state_18.ComputingPhysicsModel.state_21.WaitingToCompute");
                            //#[ transition 9 
                            
                            computeInertia();
                            retrieveCurrentIncline();
                            computeDrag();
                            computeSpeedAndAcceleration();
                            computeResistancecToApplyAtThePedal();
                            applyResistance();
                            //#]
                            NOTIFY_STATE_ENTERED("ROOT.Running.state_18.ComputingPhysicsModel.state_21.sendaction_12");
                            pushNullTransition();
                            state_21_subState = sendaction_12;
                            state_21_active = sendaction_12;
                            //#[ state Running.state_18.ComputingPhysicsModel.state_21.sendaction_12.(Entry) 
                            OUT_PORT(paCR_Rider)->GEN(evApplyResistance(resistance));
                            //#]
                            NOTIFY_TRANSITION_TERMINATED("9");
                            res = eventConsumed;
                        }
                }
            
            
        }
        break;
        // State sendaction_12
        case sendaction_12:
        {
            if(IS_EVENT_TYPE_OF(OMNullEventId))
                {
                    NOTIFY_TRANSITION_STARTED("10");
                    popNullTransition();
                    NOTIFY_STATE_EXITED("ROOT.Running.state_18.ComputingPhysicsModel.state_21.sendaction_12");
                    NOTIFY_STATE_ENTERED("ROOT.Running.state_18.ComputingPhysicsModel.state_21.WaitingToCompute");
                    state_21_subState = WaitingToCompute;
                    state_21_active = WaitingToCompute;
                    state_21_timeout = scheduleTimeout(PHYSICS_UPDATE_TM, "ROOT.Running.state_18.ComputingPhysicsModel.state_21.WaitingToCompute");
                    NOTIFY_TRANSITION_TERMINATED("10");
                    res = eventConsumed;
                }
            
            
        }
        break;
        default:
            break;
    }
    return res;
}

void Uc_ControlResistance::state_16_entDef() {
    NOTIFY_STATE_ENTERED("ROOT.Running.state_16");
    Pedaling_entDef();
}

void Uc_ControlResistance::state_16_exit() {
    // State Pedaling
    if(state_16_subState == Pedaling)
        {
            Pedaling_exit();
        }
    state_16_subState = OMNonState;
    
    NOTIFY_STATE_EXITED("ROOT.Running.state_16");
}

IOxfReactive::TakeEventStatus Uc_ControlResistance::state_16_processEvent() {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    // State Pedaling
    if(state_16_active == Pedaling)
        {
            res = Pedaling_processEvent();
        }
    return res;
}

void Uc_ControlResistance::Pedaling_entDef() {
    NOTIFY_STATE_ENTERED("ROOT.Running.state_16.Pedaling");
    state_16_subState = Pedaling;
    state_16_active = Pedaling;
    state_9_entDef();
    state_10_entDef();
}

void Uc_ControlResistance::Pedaling_exit() {
    state_9_exit();
    state_10_exit();
    
    NOTIFY_STATE_EXITED("ROOT.Running.state_16.Pedaling");
}

IOxfReactive::TakeEventStatus Uc_ControlResistance::Pedaling_processEvent() {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    // State state_9
    if(state_9_processEvent() != eventNotConsumed)
        {
            res = eventConsumed;
            if(!IS_IN(Pedaling))
                {
                    return res;
                }
        }
    // State state_10
    if(state_10_processEvent() != eventNotConsumed)
        {
            res = eventConsumed;
            if(!IS_IN(Pedaling))
                {
                    return res;
                }
        }
    
    return res;
}

void Uc_ControlResistance::state_9_entDef() {
    NOTIFY_STATE_ENTERED("ROOT.Running.state_16.Pedaling.state_9");
    NOTIFY_TRANSITION_STARTED("7");
    NOTIFY_STATE_ENTERED("ROOT.Running.state_16.Pedaling.state_9.MonitoringPedal");
    state_9_subState = MonitoringPedal;
    state_9_active = MonitoringPedal;
    NOTIFY_TRANSITION_TERMINATED("7");
}

void Uc_ControlResistance::state_9_exit() {
    // State MonitoringPedal
    if(state_9_subState == MonitoringPedal)
        {
            NOTIFY_STATE_EXITED("ROOT.Running.state_16.Pedaling.state_9.MonitoringPedal");
        }
    state_9_subState = OMNonState;
    
    NOTIFY_STATE_EXITED("ROOT.Running.state_16.Pedaling.state_9");
}

IOxfReactive::TakeEventStatus Uc_ControlResistance::state_9_processEvent() {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    // State MonitoringPedal
    if(state_9_active == MonitoringPedal)
        {
            if(IS_EVENT_TYPE_OF(reqSetPedalPosition_ControlResistanceInterfacesPkg_ControlResistancePkg_FunctionalAnalysisPkg_id))
                {
                    OMSETPARAMS(reqSetPedalPosition);
                    NOTIFY_TRANSITION_STARTED("1");
                    NOTIFY_STATE_EXITED("ROOT.Running.state_16.Pedaling.state_9.MonitoringPedal");
                    //#[ transition 1 
                      
                    setPedalPosition(params->pos);
                    //#]
                    NOTIFY_STATE_ENTERED("ROOT.Running.state_16.Pedaling.state_9.MonitoringPedal");
                    state_9_subState = MonitoringPedal;
                    state_9_active = MonitoringPedal;
                    NOTIFY_TRANSITION_TERMINATED("1");
                    res = eventConsumed;
                }
            else if(IS_EVENT_TYPE_OF(reqSetPedalSpeed_ControlResistanceInterfacesPkg_ControlResistancePkg_FunctionalAnalysisPkg_id))
                {
                    OMSETPARAMS(reqSetPedalSpeed);
                    NOTIFY_TRANSITION_STARTED("2");
                    NOTIFY_STATE_EXITED("ROOT.Running.state_16.Pedaling.state_9.MonitoringPedal");
                    //#[ transition 2 
                    
                    setPedalSpeed(params->pSpeed);
                    computePedalCadence(params->pSpeed);
                    //#]
                    NOTIFY_STATE_ENTERED("ROOT.Running.state_16.Pedaling.state_9.MonitoringPedal");
                    state_9_subState = MonitoringPedal;
                    state_9_active = MonitoringPedal;
                    NOTIFY_TRANSITION_TERMINATED("2");
                    res = eventConsumed;
                }
            else if(IS_EVENT_TYPE_OF(reqSetMeasuredPedalForce_ControlResistanceInterfacesPkg_ControlResistancePkg_FunctionalAnalysisPkg_id))
                {
                    OMSETPARAMS(reqSetMeasuredPedalForce);
                    NOTIFY_TRANSITION_STARTED("3");
                    NOTIFY_STATE_EXITED("ROOT.Running.state_16.Pedaling.state_9.MonitoringPedal");
                    //#[ transition 3 
                    
                    setMeasuredPedalForce(params->f);
                    applyTimeFilterToPower();
                    //#]
                    NOTIFY_STATE_ENTERED("ROOT.Running.state_16.Pedaling.state_9.MonitoringPedal");
                    state_9_subState = MonitoringPedal;
                    state_9_active = MonitoringPedal;
                    NOTIFY_TRANSITION_TERMINATED("3");
                    res = eventConsumed;
                }
            
            
        }
    return res;
}

void Uc_ControlResistance::state_10_entDef() {
    NOTIFY_STATE_ENTERED("ROOT.Running.state_16.Pedaling.state_10");
    NOTIFY_TRANSITION_STARTED("8");
    NOTIFY_STATE_ENTERED("ROOT.Running.state_16.Pedaling.state_10.ComputingPedalMetrics");
    state_10_subState = ComputingPedalMetrics;
    state_10_active = ComputingPedalMetrics;
    state_10_timeout = scheduleTimeout(APP_UPDATE_TM, "ROOT.Running.state_16.Pedaling.state_10.ComputingPedalMetrics");
    NOTIFY_TRANSITION_TERMINATED("8");
}

void Uc_ControlResistance::state_10_exit() {
    switch (state_10_subState) {
        // State sendaction_7
        case sendaction_7:
        {
            popNullTransition();
            NOTIFY_STATE_EXITED("ROOT.Running.state_16.Pedaling.state_10.sendaction_7");
        }
        break;
        // State ComputingPedalMetrics
        case ComputingPedalMetrics:
        {
            cancel(state_10_timeout);
            NOTIFY_STATE_EXITED("ROOT.Running.state_16.Pedaling.state_10.ComputingPedalMetrics");
        }
        break;
        // State sendaction_6
        case sendaction_6:
        {
            popNullTransition();
            NOTIFY_STATE_EXITED("ROOT.Running.state_16.Pedaling.state_10.sendaction_6");
        }
        break;
        // State sendaction_23
        case sendaction_23:
        {
            popNullTransition();
            NOTIFY_STATE_EXITED("ROOT.Running.state_16.Pedaling.state_10.sendaction_23");
        }
        break;
        default:
            break;
    }
    state_10_subState = OMNonState;
    
    NOTIFY_STATE_EXITED("ROOT.Running.state_16.Pedaling.state_10");
}

IOxfReactive::TakeEventStatus Uc_ControlResistance::state_10_processEvent() {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    switch (state_10_active) {
        // State sendaction_7
        case sendaction_7:
        {
            if(IS_EVENT_TYPE_OF(OMNullEventId))
                {
                    NOTIFY_TRANSITION_STARTED("5");
                    popNullTransition();
                    NOTIFY_STATE_EXITED("ROOT.Running.state_16.Pedaling.state_10.sendaction_7");
                    //#[ transition 5 
                    sendFilteredPowerToApp();
                    //#]
                    NOTIFY_STATE_ENTERED("ROOT.Running.state_16.Pedaling.state_10.sendaction_6");
                    pushNullTransition();
                    state_10_subState = sendaction_6;
                    state_10_active = sendaction_6;
                    //#[ state Running.state_16.Pedaling.state_10.sendaction_6.(Entry) 
                    OUT_PORT(paCR_TrainingApp)->GEN(evSendFilteredPowerToApp(measuredPedalForce));
                    //#]
                    NOTIFY_TRANSITION_TERMINATED("5");
                    res = eventConsumed;
                }
            
            
        }
        break;
        // State ComputingPedalMetrics
        case ComputingPedalMetrics:
        {
            if(IS_EVENT_TYPE_OF(OMTimeoutEventId))
                {
                    if(getCurrentEvent() == state_10_timeout)
                        {
                            NOTIFY_TRANSITION_STARTED("4");
                            cancel(state_10_timeout);
                            NOTIFY_STATE_EXITED("ROOT.Running.state_16.Pedaling.state_10.ComputingPedalMetrics");
                            //#[ transition 4 
                            
                            sendPedalCadenceToApp();
                            //#]
                            NOTIFY_STATE_ENTERED("ROOT.Running.state_16.Pedaling.state_10.sendaction_7");
                            pushNullTransition();
                            state_10_subState = sendaction_7;
                            state_10_active = sendaction_7;
                            //#[ state Running.state_16.Pedaling.state_10.sendaction_7.(Entry) 
                            OUT_PORT(paCR_TrainingApp)->GEN(evSendPedalCadenceToApp(cadence));
                            //#]
                            NOTIFY_TRANSITION_TERMINATED("4");
                            res = eventConsumed;
                        }
                }
            
            
        }
        break;
        // State sendaction_6
        case sendaction_6:
        {
            if(IS_EVENT_TYPE_OF(OMNullEventId))
                {
                    NOTIFY_TRANSITION_STARTED("20");
                    popNullTransition();
                    NOTIFY_STATE_EXITED("ROOT.Running.state_16.Pedaling.state_10.sendaction_6");
                    NOTIFY_STATE_ENTERED("ROOT.Running.state_16.Pedaling.state_10.sendaction_23");
                    pushNullTransition();
                    state_10_subState = sendaction_23;
                    state_10_active = sendaction_23;
                    //#[ state Running.state_16.Pedaling.state_10.sendaction_23.(Entry) 
                    OUT_PORT(paCR_TrainingApp)->GEN(evSendWattsPerKgToApp(measuredPedalForce/riderMass));
                    //#]
                    NOTIFY_TRANSITION_TERMINATED("20");
                    res = eventConsumed;
                }
            
            
        }
        break;
        // State sendaction_23
        case sendaction_23:
        {
            if(IS_EVENT_TYPE_OF(OMNullEventId))
                {
                    NOTIFY_TRANSITION_STARTED("6");
                    popNullTransition();
                    NOTIFY_STATE_EXITED("ROOT.Running.state_16.Pedaling.state_10.sendaction_23");
                    NOTIFY_STATE_ENTERED("ROOT.Running.state_16.Pedaling.state_10.ComputingPedalMetrics");
                    state_10_subState = ComputingPedalMetrics;
                    state_10_active = ComputingPedalMetrics;
                    state_10_timeout = scheduleTimeout(APP_UPDATE_TM, "ROOT.Running.state_16.Pedaling.state_10.ComputingPedalMetrics");
                    NOTIFY_TRANSITION_TERMINATED("6");
                    res = eventConsumed;
                }
            
            
        }
        break;
        default:
            break;
    }
    return res;
}

IOxfReactive::TakeEventStatus Uc_ControlResistance::ReadyTakereqOn() {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    NOTIFY_TRANSITION_STARTED("17");
    NOTIFY_STATE_EXITED("ROOT.Ready");
    //#[ transition 17 
    
    RetrieveRiderMass();
    RetrieveCurrentGear();
    //#]
    Running_entDef();
    NOTIFY_TRANSITION_TERMINATED("17");
    res = eventConsumed;
    return res;
}

IOxfReactive::TakeEventStatus Uc_ControlResistance::Ready_handleEvent() {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    if(IS_EVENT_TYPE_OF(reqOn_ControlResistanceInterfacesPkg_ControlResistancePkg_FunctionalAnalysisPkg_id))
        {
            res = ReadyTakereqOn();
        }
    
    return res;
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedUc_ControlResistance::serializeAttributes(AOMSAttributes* aomsAttributes) const {
    aomsAttributes->addAttribute("pedalPosition", x2String(myReal->pedalPosition));
    aomsAttributes->addAttribute("pedalSpeed", x2String(myReal->pedalSpeed));
    aomsAttributes->addAttribute("measuredPedalForce", x2String(myReal->measuredPedalForce));
    aomsAttributes->addAttribute("incline", x2String(myReal->incline));
    aomsAttributes->addAttribute("gearFront", x2String(myReal->gearFront));
    aomsAttributes->addAttribute("gearRear", x2String(myReal->gearRear));
    aomsAttributes->addAttribute("gearRatio", x2String(myReal->gearRatio));
    aomsAttributes->addAttribute("cadence", x2String(myReal->cadence));
    aomsAttributes->addAttribute("resistance", x2String(myReal->resistance));
    aomsAttributes->addAttribute("APP_UPDATE_TM", x2String(myReal->APP_UPDATE_TM));
    aomsAttributes->addAttribute("PHYSICS_UPDATE_TM", x2String(myReal->PHYSICS_UPDATE_TM));
    aomsAttributes->addAttribute("riderMass", x2String(myReal->riderMass));
    aomsAttributes->addAttribute("acceleration", x2String(myReal->acceleration));
    aomsAttributes->addAttribute("speed", x2String(myReal->speed));
}

void OMAnimatedUc_ControlResistance::serializeRelations(AOMSRelations* aomsRelations) const {
}

void OMAnimatedUc_ControlResistance::rootState_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT");
    switch (myReal->rootState_subState) {
        case Uc_ControlResistance::Ready:
        {
            Ready_serializeStates(aomsState);
        }
        break;
        case Uc_ControlResistance::Running:
        {
            Running_serializeStates(aomsState);
        }
        break;
        default:
            break;
    }
}

void OMAnimatedUc_ControlResistance::Running_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.Running");
    state_16_serializeStates(aomsState);
    state_18_serializeStates(aomsState);
    state_24_serializeStates(aomsState);
    state_25_serializeStates(aomsState);
}

void OMAnimatedUc_ControlResistance::state_25_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.Running.state_25");
    if(myReal->state_25_subState == Uc_ControlResistance::Gearing)
        {
            Gearing_serializeStates(aomsState);
        }
}

void OMAnimatedUc_ControlResistance::Gearing_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.Running.state_25.Gearing");
}

void OMAnimatedUc_ControlResistance::state_24_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.Running.state_24");
    if(myReal->state_24_subState == Uc_ControlResistance::Inclining)
        {
            Inclining_serializeStates(aomsState);
        }
}

void OMAnimatedUc_ControlResistance::Inclining_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.Running.state_24.Inclining");
}

void OMAnimatedUc_ControlResistance::state_18_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.Running.state_18");
    if(myReal->state_18_subState == Uc_ControlResistance::ComputingPhysicsModel)
        {
            ComputingPhysicsModel_serializeStates(aomsState);
        }
}

void OMAnimatedUc_ControlResistance::ComputingPhysicsModel_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.Running.state_18.ComputingPhysicsModel");
    state_21_serializeStates(aomsState);
    state_22_serializeStates(aomsState);
}

void OMAnimatedUc_ControlResistance::state_22_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.Running.state_18.ComputingPhysicsModel.state_22");
    switch (myReal->state_22_subState) {
        case Uc_ControlResistance::sendaction_13:
        {
            sendaction_13_serializeStates(aomsState);
        }
        break;
        case Uc_ControlResistance::WaitingToUpdateApp:
        {
            WaitingToUpdateApp_serializeStates(aomsState);
        }
        break;
        case Uc_ControlResistance::sendaction_14:
        {
            sendaction_14_serializeStates(aomsState);
        }
        break;
        default:
            break;
    }
}

void OMAnimatedUc_ControlResistance::WaitingToUpdateApp_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.Running.state_18.ComputingPhysicsModel.state_22.WaitingToUpdateApp");
}

void OMAnimatedUc_ControlResistance::sendaction_14_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.Running.state_18.ComputingPhysicsModel.state_22.sendaction_14");
}

void OMAnimatedUc_ControlResistance::sendaction_13_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.Running.state_18.ComputingPhysicsModel.state_22.sendaction_13");
}

void OMAnimatedUc_ControlResistance::state_21_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.Running.state_18.ComputingPhysicsModel.state_21");
    switch (myReal->state_21_subState) {
        case Uc_ControlResistance::WaitingToCompute:
        {
            WaitingToCompute_serializeStates(aomsState);
        }
        break;
        case Uc_ControlResistance::sendaction_12:
        {
            sendaction_12_serializeStates(aomsState);
        }
        break;
        default:
            break;
    }
}

void OMAnimatedUc_ControlResistance::WaitingToCompute_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.Running.state_18.ComputingPhysicsModel.state_21.WaitingToCompute");
}

void OMAnimatedUc_ControlResistance::sendaction_12_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.Running.state_18.ComputingPhysicsModel.state_21.sendaction_12");
}

void OMAnimatedUc_ControlResistance::state_16_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.Running.state_16");
    if(myReal->state_16_subState == Uc_ControlResistance::Pedaling)
        {
            Pedaling_serializeStates(aomsState);
        }
}

void OMAnimatedUc_ControlResistance::Pedaling_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.Running.state_16.Pedaling");
    state_9_serializeStates(aomsState);
    state_10_serializeStates(aomsState);
}

void OMAnimatedUc_ControlResistance::state_9_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.Running.state_16.Pedaling.state_9");
    if(myReal->state_9_subState == Uc_ControlResistance::MonitoringPedal)
        {
            MonitoringPedal_serializeStates(aomsState);
        }
}

void OMAnimatedUc_ControlResistance::MonitoringPedal_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.Running.state_16.Pedaling.state_9.MonitoringPedal");
}

void OMAnimatedUc_ControlResistance::state_10_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.Running.state_16.Pedaling.state_10");
    switch (myReal->state_10_subState) {
        case Uc_ControlResistance::sendaction_7:
        {
            sendaction_7_serializeStates(aomsState);
        }
        break;
        case Uc_ControlResistance::ComputingPedalMetrics:
        {
            ComputingPedalMetrics_serializeStates(aomsState);
        }
        break;
        case Uc_ControlResistance::sendaction_6:
        {
            sendaction_6_serializeStates(aomsState);
        }
        break;
        case Uc_ControlResistance::sendaction_23:
        {
            sendaction_23_serializeStates(aomsState);
        }
        break;
        default:
            break;
    }
}

void OMAnimatedUc_ControlResistance::sendaction_7_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.Running.state_16.Pedaling.state_10.sendaction_7");
}

void OMAnimatedUc_ControlResistance::sendaction_6_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.Running.state_16.Pedaling.state_10.sendaction_6");
}

void OMAnimatedUc_ControlResistance::sendaction_23_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.Running.state_16.Pedaling.state_10.sendaction_23");
}

void OMAnimatedUc_ControlResistance::ComputingPedalMetrics_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.Running.state_16.Pedaling.state_10.ComputingPedalMetrics");
}

void OMAnimatedUc_ControlResistance::Ready_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.Ready");
}
//#]

IMPLEMENT_REACTIVE_META_P(Uc_ControlResistance, FunctionalAnalysisPkg_ControlResistancePkg, FunctionalAnalysisPkg::ControlResistancePkg, false, OMAnimatedUc_ControlResistance)

IMPLEMENT_META_OP(OMAnimatedUc_ControlResistance, FunctionalAnalysisPkg_ControlResistancePkg_Uc_ControlResistance_setAPP_UPDATE_TM_int, "setAPP_UPDATE_TM", FALSE, "setAPP_UPDATE_TM(int)", 1)

IMPLEMENT_OP_CALL(FunctionalAnalysisPkg_ControlResistancePkg_Uc_ControlResistance_setAPP_UPDATE_TM_int, Uc_ControlResistance, setAPP_UPDATE_TM(p_APP_UPDATE_TM), NO_OP())

IMPLEMENT_META_OP(OMAnimatedUc_ControlResistance, FunctionalAnalysisPkg_ControlResistancePkg_Uc_ControlResistance_setPHYSICS_UPDATE_TM_int, "setPHYSICS_UPDATE_TM", FALSE, "setPHYSICS_UPDATE_TM(int)", 1)

IMPLEMENT_OP_CALL(FunctionalAnalysisPkg_ControlResistancePkg_Uc_ControlResistance_setPHYSICS_UPDATE_TM_int, Uc_ControlResistance, setPHYSICS_UPDATE_TM(p_PHYSICS_UPDATE_TM), NO_OP())

IMPLEMENT_META_OP(OMAnimatedUc_ControlResistance, FunctionalAnalysisPkg_ControlResistancePkg_Uc_ControlResistance_setAcceleration_Real, "setAcceleration", FALSE, "setAcceleration(Real)", 1)

IMPLEMENT_OP_CALL(FunctionalAnalysisPkg_ControlResistancePkg_Uc_ControlResistance_setAcceleration_Real, Uc_ControlResistance, setAcceleration(p_acceleration), NO_OP())

IMPLEMENT_META_OP(OMAnimatedUc_ControlResistance, FunctionalAnalysisPkg_ControlResistancePkg_Uc_ControlResistance_setCadence_int, "setCadence", FALSE, "setCadence(int)", 1)

IMPLEMENT_OP_CALL(FunctionalAnalysisPkg_ControlResistancePkg_Uc_ControlResistance_setCadence_int, Uc_ControlResistance, setCadence(p_cadence), NO_OP())

IMPLEMENT_META_OP(OMAnimatedUc_ControlResistance, FunctionalAnalysisPkg_ControlResistancePkg_Uc_ControlResistance_setGearRatio_Real, "setGearRatio", FALSE, "setGearRatio(Real)", 1)

IMPLEMENT_OP_CALL(FunctionalAnalysisPkg_ControlResistancePkg_Uc_ControlResistance_setGearRatio_Real, Uc_ControlResistance, setGearRatio(p_gearRatio), NO_OP())

IMPLEMENT_META_OP(OMAnimatedUc_ControlResistance, FunctionalAnalysisPkg_ControlResistancePkg_Uc_ControlResistance_setIncline_int, "setIncline", FALSE, "setIncline(int)", 1)

IMPLEMENT_OP_CALL(FunctionalAnalysisPkg_ControlResistancePkg_Uc_ControlResistance_setIncline_int, Uc_ControlResistance, setIncline(p_incline), NO_OP())

IMPLEMENT_META_OP(OMAnimatedUc_ControlResistance, FunctionalAnalysisPkg_ControlResistancePkg_Uc_ControlResistance_setMeasuredPedalForce_Real, "setMeasuredPedalForce", FALSE, "setMeasuredPedalForce(Real)", 1)

IMPLEMENT_OP_CALL(FunctionalAnalysisPkg_ControlResistancePkg_Uc_ControlResistance_setMeasuredPedalForce_Real, Uc_ControlResistance, setMeasuredPedalForce(p_measuredPedalForce), NO_OP())

IMPLEMENT_META_OP(OMAnimatedUc_ControlResistance, FunctionalAnalysisPkg_ControlResistancePkg_Uc_ControlResistance_setPedalPosition_Real, "setPedalPosition", FALSE, "setPedalPosition(Real)", 1)

IMPLEMENT_OP_CALL(FunctionalAnalysisPkg_ControlResistancePkg_Uc_ControlResistance_setPedalPosition_Real, Uc_ControlResistance, setPedalPosition(p_pedalPosition), NO_OP())

IMPLEMENT_META_OP(OMAnimatedUc_ControlResistance, FunctionalAnalysisPkg_ControlResistancePkg_Uc_ControlResistance_setResistance_Real, "setResistance", FALSE, "setResistance(Real)", 1)

IMPLEMENT_OP_CALL(FunctionalAnalysisPkg_ControlResistancePkg_Uc_ControlResistance_setResistance_Real, Uc_ControlResistance, setResistance(p_resistance), NO_OP())

IMPLEMENT_META_OP(OMAnimatedUc_ControlResistance, FunctionalAnalysisPkg_ControlResistancePkg_Uc_ControlResistance_setRiderMass_Kilogram, "setRiderMass", FALSE, "setRiderMass(Kilogram)", 1)

IMPLEMENT_OP_CALL(FunctionalAnalysisPkg_ControlResistancePkg_Uc_ControlResistance_setRiderMass_Kilogram, Uc_ControlResistance, setRiderMass(p_riderMass), NO_OP())

IMPLEMENT_META_OP(OMAnimatedUc_ControlResistance, FunctionalAnalysisPkg_ControlResistancePkg_Uc_ControlResistance_setSpeed_Real, "setSpeed", FALSE, "setSpeed(Real)", 1)

IMPLEMENT_OP_CALL(FunctionalAnalysisPkg_ControlResistancePkg_Uc_ControlResistance_setSpeed_Real, Uc_ControlResistance, setSpeed(p_speed), NO_OP())
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: Control_ResistanceSim/Animate/Uc_ControlResistance.cpp
*********************************************************************/
