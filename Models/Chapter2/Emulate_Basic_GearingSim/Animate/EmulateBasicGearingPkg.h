/*********************************************************************
	Rhapsody	: 8.4 
	Login		: Bruce
	Component	: Emulate_Basic_GearingSim 
	Configuration 	: Animate
	Model Element	: EmulateBasicGearingPkg
//!	Generated Date	: Fri, 27, Dec 2019  
	File Path	: Emulate_Basic_GearingSim/Animate/EmulateBasicGearingPkg.h
*********************************************************************/

#ifndef EmulateBasicGearingPkg_H
#define EmulateBasicGearingPkg_H

//## auto_generated
#include <oxf/oxf.h>
//## auto_generated
#include <../Profiles/SysML/SIDefinitions.h>
//## auto_generated
#include <aom/aom.h>
//## auto_generated
#include <oxf/event.h>
//## auto_generated
class Uc_EmulateBasicGearing;

//#[ ignore
#define chApplliedTorque_EmulateBasicGearingPkg_FunctionalAnalysisPkg_id 601

#define chAppliedTorque_EmulateBasicGearingPkg_FunctionalAnalysisPkg_id 602
//#]

//## package FunctionalAnalysisPkg::EmulateBasicGearingPkg



//## event chApplliedTorque()
class chApplliedTorque : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedchApplliedTorque;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    chApplliedTorque();
    
    ////    Framework operations    ////
    
    //## statechart_method
    virtual bool isTypeOf(const short id) const;
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedchApplliedTorque : virtual public AOMEvent {
    DECLARE_META_EVENT(chApplliedTorque)
};
//#]
#endif // _OMINSTRUMENT

//## event chAppliedTorque()
class chAppliedTorque : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedchAppliedTorque;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    chAppliedTorque();
    
    ////    Framework operations    ////
    
    //## statechart_method
    virtual bool isTypeOf(const short id) const;
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedchAppliedTorque : virtual public AOMEvent {
    DECLARE_META_EVENT(chAppliedTorque)
};
//#]
#endif // _OMINSTRUMENT

#endif
/*********************************************************************
	File Path	: Emulate_Basic_GearingSim/Animate/EmulateBasicGearingPkg.h
*********************************************************************/
