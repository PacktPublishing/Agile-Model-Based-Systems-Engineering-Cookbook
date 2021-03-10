/*********************************************************************
	Rhapsody	: 8.4 
	Login		: Bruce
	Component	: Control_ResistanceSim 
	Configuration 	: Animate
	Model Element	: ControlResistancePkg
//!	Generated Date	: Wed, 19, Feb 2020  
	File Path	: Control_ResistanceSim/Animate/ControlResistancePkg.h
*********************************************************************/

#ifndef ControlResistancePkg_H
#define ControlResistancePkg_H

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
class Uc_ControlResistance;

//#[ ignore
#define storeIncline_ControlResistancePkg_FunctionalAnalysisPkg_id 7001

#define reqOff_ControlResistancePkg_FunctionalAnalysisPkg_id 7002
//#]

//## package FunctionalAnalysisPkg::ControlResistancePkg



//## event storeIncline()
class storeIncline : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedstoreIncline;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    storeIncline();
    
    ////    Framework operations    ////
    
    //## statechart_method
    virtual bool isTypeOf(const short id) const;
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedstoreIncline : virtual public AOMEvent {
    DECLARE_META_EVENT(storeIncline)
};
//#]
#endif // _OMINSTRUMENT

//## event reqOff()
class reqOff : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedreqOff;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    reqOff();
    
    ////    Framework operations    ////
    
    //## statechart_method
    virtual bool isTypeOf(const short id) const;
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedreqOff : virtual public AOMEvent {
    DECLARE_META_EVENT(reqOff)
};
//#]
#endif // _OMINSTRUMENT

#endif
/*********************************************************************
	File Path	: Control_ResistanceSim/Animate/ControlResistancePkg.h
*********************************************************************/
