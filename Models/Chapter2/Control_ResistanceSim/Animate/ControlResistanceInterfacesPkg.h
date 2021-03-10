/*********************************************************************
	Rhapsody	: 8.4 
	Login		: Bruce
	Component	: Control_ResistanceSim 
	Configuration 	: Animate
	Model Element	: ControlResistanceInterfacesPkg
//!	Generated Date	: Thu, 20, Feb 2020  
	File Path	: Control_ResistanceSim/Animate/ControlResistanceInterfacesPkg.h
*********************************************************************/

#ifndef ControlResistanceInterfacesPkg_H
#define ControlResistanceInterfacesPkg_H

//## auto_generated
#include <oxf/oxf.h>
//## auto_generated
#include <../Profiles/SysML/SIDefinitions.h>
//## auto_generated
#include <aom/aom.h>
//## auto_generated
#include "math.h"
//## auto_generated
#include <oxf/event.h>
//## auto_generated
#include "ControlResistancePkg.h"
//#[ ignore
#define reqOn_ControlResistanceInterfacesPkg_ControlResistancePkg_FunctionalAnalysisPkg_id 24801

#define reqSetIncline_ControlResistanceInterfacesPkg_ControlResistancePkg_FunctionalAnalysisPkg_id 24802

#define reqSetGear_ControlResistanceInterfacesPkg_ControlResistancePkg_FunctionalAnalysisPkg_id 24803

#define reqSetPedalPosition_ControlResistanceInterfacesPkg_ControlResistancePkg_FunctionalAnalysisPkg_id 24804

#define reqSetPedalSpeed_ControlResistanceInterfacesPkg_ControlResistancePkg_FunctionalAnalysisPkg_id 24805

#define reqSetMeasuredPedalForce_ControlResistanceInterfacesPkg_ControlResistancePkg_FunctionalAnalysisPkg_id 24806

#define evSendPedalCadenceToApp_ControlResistanceInterfacesPkg_ControlResistancePkg_FunctionalAnalysisPkg_id 24807

#define evSendFilteredPowerToApp_ControlResistanceInterfacesPkg_ControlResistancePkg_FunctionalAnalysisPkg_id 24808

#define evApplyResistance_ControlResistanceInterfacesPkg_ControlResistancePkg_FunctionalAnalysisPkg_id 24809

#define evSendSpeedToApp_ControlResistanceInterfacesPkg_ControlResistancePkg_FunctionalAnalysisPkg_id 24810

#define evSendAccelerationToApp_ControlResistanceInterfacesPkg_ControlResistancePkg_FunctionalAnalysisPkg_id 24811
//#]

//## package FunctionalAnalysisPkg::ControlResistancePkg::ControlResistanceInterfacesPkg



//## event reqOn()
class reqOn : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedreqOn;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    reqOn();
    
    ////    Framework operations    ////
    
    //## statechart_method
    virtual bool isTypeOf(const short id) const;
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedreqOn : virtual public AOMEvent {
    DECLARE_META_EVENT(reqOn)
};
//#]
#endif // _OMINSTRUMENT

//## event reqSetIncline(int)
class reqSetIncline : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedreqSetIncline;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    reqSetIncline();
    
    //## auto_generated
    reqSetIncline(int p_inc);
    
    ////    Framework operations    ////
    
    //## statechart_method
    virtual bool isTypeOf(const short id) const;
    
    ////    Framework    ////
    
    int inc;		//## auto_generated
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedreqSetIncline : virtual public AOMEvent {
    DECLARE_META_EVENT(reqSetIncline)
};
//#]
#endif // _OMINSTRUMENT

//## event reqSetGear(int,int)
class reqSetGear : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedreqSetGear;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    reqSetGear();
    
    //## auto_generated
    reqSetGear(int p_bigRing, int p_cassetteRing);
    
    ////    Framework operations    ////
    
    //## statechart_method
    virtual bool isTypeOf(const short id) const;
    
    ////    Framework    ////
    
    int bigRing;		//## auto_generated
    
    int cassetteRing;		//## auto_generated
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedreqSetGear : virtual public AOMEvent {
    DECLARE_META_EVENT(reqSetGear)
};
//#]
#endif // _OMINSTRUMENT

//## event reqSetPedalPosition(Real)
class reqSetPedalPosition : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedreqSetPedalPosition;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    reqSetPedalPosition();
    
    //## auto_generated
    reqSetPedalPosition(Real p_pos);
    
    ////    Framework operations    ////
    
    //## statechart_method
    virtual bool isTypeOf(const short id) const;
    
    ////    Framework    ////
    
    Real pos;		//## auto_generated
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedreqSetPedalPosition : virtual public AOMEvent {
    DECLARE_META_EVENT(reqSetPedalPosition)
};
//#]
#endif // _OMINSTRUMENT

//## event reqSetPedalSpeed(Real)
class reqSetPedalSpeed : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedreqSetPedalSpeed;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    reqSetPedalSpeed();
    
    //## auto_generated
    reqSetPedalSpeed(Real p_pSpeed);
    
    ////    Framework operations    ////
    
    //## statechart_method
    virtual bool isTypeOf(const short id) const;
    
    ////    Framework    ////
    
    Real pSpeed;		//## auto_generated
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedreqSetPedalSpeed : virtual public AOMEvent {
    DECLARE_META_EVENT(reqSetPedalSpeed)
};
//#]
#endif // _OMINSTRUMENT

//## event reqSetMeasuredPedalForce(Real)
class reqSetMeasuredPedalForce : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedreqSetMeasuredPedalForce;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    reqSetMeasuredPedalForce();
    
    //## auto_generated
    reqSetMeasuredPedalForce(Real p_f);
    
    ////    Framework operations    ////
    
    //## statechart_method
    virtual bool isTypeOf(const short id) const;
    
    ////    Framework    ////
    
    Real f;		//## auto_generated
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedreqSetMeasuredPedalForce : virtual public AOMEvent {
    DECLARE_META_EVENT(reqSetMeasuredPedalForce)
};
//#]
#endif // _OMINSTRUMENT

//## event evSendPedalCadenceToApp(Real)
class evSendPedalCadenceToApp : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedevSendPedalCadenceToApp;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    evSendPedalCadenceToApp();
    
    //## auto_generated
    evSendPedalCadenceToApp(Real p_pCad);
    
    ////    Framework operations    ////
    
    //## statechart_method
    virtual bool isTypeOf(const short id) const;
    
    ////    Framework    ////
    
    Real pCad;		//## auto_generated
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedevSendPedalCadenceToApp : virtual public AOMEvent {
    DECLARE_META_EVENT(evSendPedalCadenceToApp)
};
//#]
#endif // _OMINSTRUMENT

//## event evSendFilteredPowerToApp(Real)
class evSendFilteredPowerToApp : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedevSendFilteredPowerToApp;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    evSendFilteredPowerToApp();
    
    //## auto_generated
    evSendFilteredPowerToApp(Real p_pow);
    
    ////    Framework operations    ////
    
    //## statechart_method
    virtual bool isTypeOf(const short id) const;
    
    ////    Framework    ////
    
    Real pow;		//## auto_generated
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedevSendFilteredPowerToApp : virtual public AOMEvent {
    DECLARE_META_EVENT(evSendFilteredPowerToApp)
};
//#]
#endif // _OMINSTRUMENT

//## event evApplyResistance(Real)
class evApplyResistance : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedevApplyResistance;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    evApplyResistance();
    
    //## auto_generated
    evApplyResistance(Real p_res);
    
    ////    Framework operations    ////
    
    //## statechart_method
    virtual bool isTypeOf(const short id) const;
    
    ////    Framework    ////
    
    Real res;		//## auto_generated
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedevApplyResistance : virtual public AOMEvent {
    DECLARE_META_EVENT(evApplyResistance)
};
//#]
#endif // _OMINSTRUMENT

//## event evSendSpeedToApp(Real)
class evSendSpeedToApp : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedevSendSpeedToApp;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    evSendSpeedToApp();
    
    //## auto_generated
    evSendSpeedToApp(Real p_bSpeed);
    
    ////    Framework operations    ////
    
    //## statechart_method
    virtual bool isTypeOf(const short id) const;
    
    ////    Framework    ////
    
    Real bSpeed;		//## auto_generated
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedevSendSpeedToApp : virtual public AOMEvent {
    DECLARE_META_EVENT(evSendSpeedToApp)
};
//#]
#endif // _OMINSTRUMENT

//## event evSendAccelerationToApp(Real)
class evSendAccelerationToApp : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedevSendAccelerationToApp;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    evSendAccelerationToApp();
    
    //## auto_generated
    evSendAccelerationToApp(Real p_bAcceleration);
    
    ////    Framework operations    ////
    
    //## statechart_method
    virtual bool isTypeOf(const short id) const;
    
    ////    Framework    ////
    
    Real bAcceleration;		//## auto_generated
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedevSendAccelerationToApp : virtual public AOMEvent {
    DECLARE_META_EVENT(evSendAccelerationToApp)
};
//#]
#endif // _OMINSTRUMENT

#endif
/*********************************************************************
	File Path	: Control_ResistanceSim/Animate/ControlResistanceInterfacesPkg.h
*********************************************************************/
