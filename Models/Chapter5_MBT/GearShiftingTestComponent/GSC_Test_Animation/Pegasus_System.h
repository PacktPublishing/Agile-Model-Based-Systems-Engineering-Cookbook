/*********************************************************************
	Rhapsody	: 9.0 
	Login		: Bruce
	Component	: GearShiftingTestComponent 
	Configuration 	: GSC_Test_Animation
	Model Element	: Pegasus_System
//!	Generated Date	: Sat, 28, Nov 2020  
	File Path	: GearShiftingTestComponent/GSC_Test_Animation/Pegasus_System.h
*********************************************************************/

#ifndef Pegasus_System_H
#define Pegasus_System_H

//## auto_generated
#include <oxf/oxf.h>
//## auto_generated
#include <../Profiles/SysML/SIDefinitions.h>
//## auto_generated
#include <aom/aom.h>
//## auto_generated
#include "RiderInteractionDesignPkg.h"
//## auto_generated
#include <oxf/omthread.h>
//## auto_generated
#include <oxf/omreactive.h>
//## auto_generated
#include <oxf/state.h>
//## auto_generated
#include <oxf/event.h>
//## classInstance itsMainComputingPlatform
#include "MainComputingPlatform.h"
//## classInstance itsRiderInteraction
#include "RiderInteraction.h"
//## package DesignSynthesisPkg::RiderInteractionDesignPkg

//## class Pegasus_System
class Pegasus_System : public OMReactive {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedPegasus_System;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    Pegasus_System(IOxfActive* theActiveContext = 0);
    
    //## auto_generated
    ~Pegasus_System();
    
    ////    Additional operations    ////
    
    //## auto_generated
    MainComputingPlatform* getItsMainComputingPlatform() const;
    
    //## auto_generated
    RiderInteraction* getItsRiderInteraction() const;
    
    //## auto_generated
    virtual bool startBehavior();

protected :

    //## auto_generated
    void initRelations();
    
    ////    Relations and components    ////
    
    MainComputingPlatform itsMainComputingPlatform;		//## classInstance itsMainComputingPlatform
    
    RiderInteraction itsRiderInteraction;		//## classInstance itsRiderInteraction
    
    ////    Framework operations    ////

public :

    //## auto_generated
    void setActiveContext(IOxfActive* theActiveContext, bool activeInstance);
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedPegasus_System : virtual public AOMInstance {
    DECLARE_META(Pegasus_System, OMAnimatedPegasus_System)
    
    ////    Framework operations    ////
    
public :

    virtual void serializeRelations(AOMSRelations* aomsRelations) const;
};
//#]
#endif // _OMINSTRUMENT

#endif
/*********************************************************************
	File Path	: GearShiftingTestComponent/GSC_Test_Animation/Pegasus_System.h
*********************************************************************/
