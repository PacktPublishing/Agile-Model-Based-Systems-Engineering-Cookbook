/*********************************************************************
	Rhapsody	: 8.4 
	Login		: Bruce
	Component	: Control_ResistanceSim 
	Configuration 	: Animate
	Model Element	: ControlResistanceActorPkg
//!	Generated Date	: Thu, 20, Feb 2020  
	File Path	: Control_ResistanceSim/Animate/ControlResistanceActorPkg.h
*********************************************************************/

#ifndef ControlResistanceActorPkg_H
#define ControlResistanceActorPkg_H

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
//## auto_generated
class aCR_Rider;

//## auto_generated
class aCR_TrainingApp;

//#[ ignore
#define exStartPedaling_ControlResistanceActorPkg_ControlResistancePkg_FunctionalAnalysisPkg_id 5201

#define exStopPedaling_ControlResistanceActorPkg_ControlResistancePkg_FunctionalAnalysisPkg_id 5202

#define exSetGear_ControlResistanceActorPkg_ControlResistancePkg_FunctionalAnalysisPkg_id 5203

#define exSetIncline_ControlResistanceActorPkg_ControlResistancePkg_FunctionalAnalysisPkg_id 5204

#define evSendWattsPerKgToApp_ControlResistanceActorPkg_ControlResistancePkg_FunctionalAnalysisPkg_id 5205
//#]

//## package FunctionalAnalysisPkg::ControlResistancePkg::ControlResistanceActorPkg



//## event exStartPedaling()
class exStartPedaling : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedexStartPedaling;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    exStartPedaling();
    
    ////    Framework operations    ////
    
    //## statechart_method
    virtual bool isTypeOf(const short id) const;
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedexStartPedaling : virtual public AOMEvent {
    DECLARE_META_EVENT(exStartPedaling)
};
//#]
#endif // _OMINSTRUMENT

//## event exStopPedaling()
class exStopPedaling : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedexStopPedaling;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    exStopPedaling();
    
    ////    Framework operations    ////
    
    //## statechart_method
    virtual bool isTypeOf(const short id) const;
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedexStopPedaling : virtual public AOMEvent {
    DECLARE_META_EVENT(exStopPedaling)
};
//#]
#endif // _OMINSTRUMENT

//## event exSetGear()
class exSetGear : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedexSetGear;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    exSetGear();
    
    ////    Framework operations    ////
    
    //## statechart_method
    virtual bool isTypeOf(const short id) const;
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedexSetGear : virtual public AOMEvent {
    DECLARE_META_EVENT(exSetGear)
};
//#]
#endif // _OMINSTRUMENT

//## event exSetIncline()
class exSetIncline : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedexSetIncline;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    exSetIncline();
    
    ////    Framework operations    ////
    
    //## statechart_method
    virtual bool isTypeOf(const short id) const;
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedexSetIncline : virtual public AOMEvent {
    DECLARE_META_EVENT(exSetIncline)
};
//#]
#endif // _OMINSTRUMENT

//## event evSendWattsPerKgToApp(Real)
class evSendWattsPerKgToApp : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedevSendWattsPerKgToApp;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    evSendWattsPerKgToApp();
    
    //## auto_generated
    evSendWattsPerKgToApp(Real p_wpk);
    
    ////    Framework operations    ////
    
    //## statechart_method
    virtual bool isTypeOf(const short id) const;
    
    ////    Framework    ////
    
    Real wpk;		//## auto_generated
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedevSendWattsPerKgToApp : virtual public AOMEvent {
    DECLARE_META_EVENT(evSendWattsPerKgToApp)
};
//#]
#endif // _OMINSTRUMENT

#endif
/*********************************************************************
	File Path	: Control_ResistanceSim/Animate/ControlResistanceActorPkg.h
*********************************************************************/
