/********************************************************************
	Rhapsody	: 9.0 
	Login		: Bruce
	Component	: GearShiftingTestComponent 
	Configuration 	: GSC_Test_Animation
	Model Element	: Pegasus_System
//!	Generated Date	: Sat, 28, Nov 2020  
	File Path	: GearShiftingTestComponent/GSC_Test_Animation/Pegasus_System.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "Pegasus_System.h"
//#[ ignore
#define DesignSynthesisPkg_RiderInteractionDesignPkg_Pegasus_System_Pegasus_System_SERIALIZE OM_NO_OP
//#]

//## package DesignSynthesisPkg::RiderInteractionDesignPkg

//## class Pegasus_System
Pegasus_System::Pegasus_System(IOxfActive* theActiveContext) {
    NOTIFY_REACTIVE_CONSTRUCTOR(Pegasus_System, Pegasus_System(), 0, DesignSynthesisPkg_RiderInteractionDesignPkg_Pegasus_System_Pegasus_System_SERIALIZE);
    setActiveContext(theActiveContext, false);
    {
        {
            itsMainComputingPlatform.setShouldDelete(false);
        }
        {
            itsRiderInteraction.setShouldDelete(false);
        }
    }
    initRelations();
}

Pegasus_System::~Pegasus_System() {
    NOTIFY_DESTRUCTOR(~Pegasus_System, true);
}

MainComputingPlatform* Pegasus_System::getItsMainComputingPlatform() const {
    return (MainComputingPlatform*) &itsMainComputingPlatform;
}

RiderInteraction* Pegasus_System::getItsRiderInteraction() const {
    return (RiderInteraction*) &itsRiderInteraction;
}

bool Pegasus_System::startBehavior() {
    bool done = true;
    done &= itsMainComputingPlatform.startBehavior();
    done &= itsRiderInteraction.startBehavior();
    done &= OMReactive::startBehavior();
    return done;
}

void Pegasus_System::initRelations() {
    {
        
        itsMainComputingPlatform.get_pRiderShift()->setItsEvDIShifting_ProxyReceptionInterface(itsRiderInteraction.get_pMain()->getItsEvDIShifting_ProxyReceptionInterface());
        
        itsMainComputingPlatform.get_pRiderShift()->setItsEvMechanicalShifting_ProxyReceptionInterface(itsRiderInteraction.get_pMain()->getItsEvMechanicalShifting_ProxyReceptionInterface());
        
        itsMainComputingPlatform.get_pRiderShift()->setItsEvDisplayGearing_ProxyReceptionInterface(itsRiderInteraction.get_pMain()->getItsEvDisplayGearing_ProxyReceptionInterface());
        
    }{
        
        itsRiderInteraction.get_pMain()->setItsEvDIDown_ProxyReceptionInterface(itsMainComputingPlatform.get_pRiderShift()->getItsEvDIDown_ProxyReceptionInterface());
        
        itsRiderInteraction.get_pMain()->setItsEvDIUp_ProxyReceptionInterface(itsMainComputingPlatform.get_pRiderShift()->getItsEvDIUp_ProxyReceptionInterface());
        
        itsRiderInteraction.get_pMain()->setItsEvLeftShiftDown_ProxyReceptionInterface(itsMainComputingPlatform.get_pRiderShift()->getItsEvLeftShiftDown_ProxyReceptionInterface());
        
        itsRiderInteraction.get_pMain()->setItsEvLeftShiftUp_ProxyReceptionInterface(itsMainComputingPlatform.get_pRiderShift()->getItsEvLeftShiftUp_ProxyReceptionInterface());
        
        itsRiderInteraction.get_pMain()->setItsEvRightShiftDown_ProxyReceptionInterface(itsMainComputingPlatform.get_pRiderShift()->getItsEvRightShiftDown_ProxyReceptionInterface());
        
        itsRiderInteraction.get_pMain()->setItsEvRightShiftUp_ProxyReceptionInterface(itsMainComputingPlatform.get_pRiderShift()->getItsEvRightShiftUp_ProxyReceptionInterface());
        
    }
}

void Pegasus_System::setActiveContext(IOxfActive* theActiveContext, bool activeInstance) {
    OMReactive::setActiveContext(theActiveContext, activeInstance);
    {
        itsMainComputingPlatform.setActiveContext(theActiveContext, false);
        itsRiderInteraction.setActiveContext(theActiveContext, false);
    }
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedPegasus_System::serializeRelations(AOMSRelations* aomsRelations) const {
    aomsRelations->addRelation("itsMainComputingPlatform", true, true);
    aomsRelations->ADD_ITEM(&myReal->itsMainComputingPlatform);
    aomsRelations->addRelation("itsRiderInteraction", true, true);
    aomsRelations->ADD_ITEM(&myReal->itsRiderInteraction);
}
//#]

IMPLEMENT_REACTIVE_META_SIMPLE_P(Pegasus_System, DesignSynthesisPkg_RiderInteractionDesignPkg, DesignSynthesisPkg::RiderInteractionDesignPkg, false, OMAnimatedPegasus_System)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: GearShiftingTestComponent/GSC_Test_Animation/Pegasus_System.cpp
*********************************************************************/
