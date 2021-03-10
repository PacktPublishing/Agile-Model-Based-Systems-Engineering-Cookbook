/*********************************************************************
	Rhapsody	: 9.0 
	Login		: Bruce
	Component	: Emulate_Basic_GearingSim 
	Configuration 	: Animate
	Model Element	: EmulateBasicGearingInterfacesPkg
//!	Generated Date	: Wed, 25, Nov 2020  
	File Path	: Emulate_Basic_GearingSim/Animate/EmulateBasicGearingInterfacesPkg.h
*********************************************************************/

#ifndef EmulateBasicGearingInterfacesPkg_H
#define EmulateBasicGearingInterfacesPkg_H

//## auto_generated
#include <oxf/oxf.h>
//## auto_generated
#include <../Profiles/SysML/SIDefinitions.h>
//## auto_generated
#include <aom/aom.h>
//## auto_generated
#include <oxf/event.h>
//## auto_generated
#include "EmulateBasicGearingPkg.h"
//#[ ignore
#define decrementGear_EmulateBasicGearingInterfacesPkg_EmulateBasicGearingPkg_FunctionalAnalysisPkg_id 12001

#define incrementGear_EmulateBasicGearingInterfacesPkg_EmulateBasicGearingPkg_FunctionalAnalysisPkg_id 12002

#define gearing_EmulateBasicGearingInterfacesPkg_EmulateBasicGearingPkg_FunctionalAnalysisPkg_id 12003
//#]

//## package FunctionalAnalysisPkg::EmulateBasicGearingPkg::EmulateBasicGearingInterfacesPkg



//## event decrementGear()
class decrementGear : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimateddecrementGear;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    decrementGear();
    
    ////    Framework operations    ////
    
    //## statechart_method
    virtual bool isTypeOf(const short id) const;
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimateddecrementGear : virtual public AOMEvent {
    DECLARE_META_EVENT(decrementGear)
};
//#]
#endif // _OMINSTRUMENT

//## event incrementGear()
class incrementGear : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedincrementGear;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    incrementGear();
    
    ////    Framework operations    ////
    
    //## statechart_method
    virtual bool isTypeOf(const short id) const;
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedincrementGear : virtual public AOMEvent {
    DECLARE_META_EVENT(incrementGear)
};
//#]
#endif // _OMINSTRUMENT

//## event gearing(Real)
class gearing : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedgearing;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    gearing();
    
    //## auto_generated
    gearing(Real p_gear);
    
    ////    Framework operations    ////
    
    //## statechart_method
    virtual bool isTypeOf(const short id) const;
    
    ////    Framework    ////
    
    Real gear;		//## auto_generated
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedgearing : virtual public AOMEvent {
    DECLARE_META_EVENT(gearing)
};
//#]
#endif // _OMINSTRUMENT

#endif
/*********************************************************************
	File Path	: Emulate_Basic_GearingSim/Animate/EmulateBasicGearingInterfacesPkg.h
*********************************************************************/
