/*********************************************************************
	Rhapsody	: 9.0 
	Login		: Bruce
	Component	: Emulate_Basic_GearingSim 
	Configuration 	: Animate
	Model Element	: EmulateBasicGearingActorPkg
//!	Generated Date	: Wed, 25, Nov 2020  
	File Path	: Emulate_Basic_GearingSim/Animate/EmulateBasicGearingActorPkg.h
*********************************************************************/

#ifndef EmulateBasicGearingActorPkg_H
#define EmulateBasicGearingActorPkg_H

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
//## auto_generated
class aEBG_Rider;

//## auto_generated
class aEBG_TrainingApp;

//#[ ignore
#define chResistance_EmulateBasicGearingActorPkg_EmulateBasicGearingPkg_FunctionalAnalysisPkg_id 23201

#define exAugment_EmulateBasicGearingActorPkg_EmulateBasicGearingPkg_FunctionalAnalysisPkg_id 23202

#define exDecrement_EmulateBasicGearingActorPkg_EmulateBasicGearingPkg_FunctionalAnalysisPkg_id 23203
//#]

//## package FunctionalAnalysisPkg::EmulateBasicGearingPkg::EmulateBasicGearingActorPkg



//## event chResistance()
class chResistance : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedchResistance;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    chResistance();
    
    ////    Framework operations    ////
    
    //## statechart_method
    virtual bool isTypeOf(const short id) const;
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedchResistance : virtual public AOMEvent {
    DECLARE_META_EVENT(chResistance)
};
//#]
#endif // _OMINSTRUMENT

//## event exAugment()
class exAugment : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedexAugment;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    exAugment();
    
    ////    Framework operations    ////
    
    //## statechart_method
    virtual bool isTypeOf(const short id) const;
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedexAugment : virtual public AOMEvent {
    DECLARE_META_EVENT(exAugment)
};
//#]
#endif // _OMINSTRUMENT

//## event exDecrement()
class exDecrement : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedexDecrement;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    exDecrement();
    
    ////    Framework operations    ////
    
    //## statechart_method
    virtual bool isTypeOf(const short id) const;
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedexDecrement : virtual public AOMEvent {
    DECLARE_META_EVENT(exDecrement)
};
//#]
#endif // _OMINSTRUMENT

#endif
/*********************************************************************
	File Path	: Emulate_Basic_GearingSim/Animate/EmulateBasicGearingActorPkg.h
*********************************************************************/
