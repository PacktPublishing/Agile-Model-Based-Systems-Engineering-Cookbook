/*********************************************************************
	Rhapsody	: 8.4 
	Login		: Bruce
	Component	: Emulate_Front_and_Rear_GearingSim 
	Configuration 	: Animate
	Model Element	: EmulateFrontandRearGearingPkg
//!	Generated Date	: Mon, 2, Mar 2020  
	File Path	: Emulate_Front_and_Rear_GearingSim/Animate/EmulateFrontandRearGearingPkg.h
*********************************************************************/

#ifndef EmulateFrontandRearGearingPkg_H
#define EmulateFrontandRearGearingPkg_H

//## auto_generated
#include <oxf/oxf.h>
//## auto_generated
#include <../Profiles/SysML/SIDefinitions.h>
//## auto_generated
#include <aom/aom.h>
//## auto_generated
#include <oxf/event.h>
//## auto_generated
class Uc_EmulateFrontandRearGearing;

//#[ ignore
#define evConfigureGearing_EmulateFrontandRearGearingPkg_FunctionalAnalysisPkg_id 2001

#define evDoneConfiguring_EmulateFrontandRearGearingPkg_FunctionalAnalysisPkg_id 2002

#define evBeginRiding_EmulateFrontandRearGearingPkg_FunctionalAnalysisPkg_id 2003

#define evDoneRiding_EmulateFrontandRearGearingPkg_FunctionalAnalysisPkg_id 2004

#define evSetNumberOfChainRings_EmulateFrontandRearGearingPkg_FunctionalAnalysisPkg_id 2005

#define evSetNumberOfCassetteRings_EmulateFrontandRearGearingPkg_FunctionalAnalysisPkg_id 2006

#define evSetCassetteRingTeeth_EmulateFrontandRearGearingPkg_FunctionalAnalysisPkg_id 2007

#define evAugmentFrontGear_EmulateFrontandRearGearingPkg_FunctionalAnalysisPkg_id 2008

#define evDecrementFrontGear_EmulateFrontandRearGearingPkg_FunctionalAnalysisPkg_id 2009

#define evAugmentRearGear_EmulateFrontandRearGearingPkg_FunctionalAnalysisPkg_id 2010

#define evDecrementRearGear_EmulateFrontandRearGearingPkg_FunctionalAnalysisPkg_id 2011

#define evSetChainRingTeeth_EmulateFrontandRearGearingPkg_FunctionalAnalysisPkg_id 2012

#define evShowGearing_EmulateFrontandRearGearingPkg_FunctionalAnalysisPkg_id 2013
//#]

//## package FunctionalAnalysisPkg::EmulateFrontandRearGearingPkg



//## event evConfigureGearing()
class evConfigureGearing : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedevConfigureGearing;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    evConfigureGearing();
    
    ////    Framework operations    ////
    
    //## statechart_method
    virtual bool isTypeOf(const short id) const;
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedevConfigureGearing : virtual public AOMEvent {
    DECLARE_META_EVENT(evConfigureGearing)
};
//#]
#endif // _OMINSTRUMENT

//## event evDoneConfiguring()
class evDoneConfiguring : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedevDoneConfiguring;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    evDoneConfiguring();
    
    ////    Framework operations    ////
    
    //## statechart_method
    virtual bool isTypeOf(const short id) const;
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedevDoneConfiguring : virtual public AOMEvent {
    DECLARE_META_EVENT(evDoneConfiguring)
};
//#]
#endif // _OMINSTRUMENT

//## event evBeginRiding()
class evBeginRiding : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedevBeginRiding;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    evBeginRiding();
    
    ////    Framework operations    ////
    
    //## statechart_method
    virtual bool isTypeOf(const short id) const;
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedevBeginRiding : virtual public AOMEvent {
    DECLARE_META_EVENT(evBeginRiding)
};
//#]
#endif // _OMINSTRUMENT

//## event evDoneRiding()
class evDoneRiding : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedevDoneRiding;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    evDoneRiding();
    
    ////    Framework operations    ////
    
    //## statechart_method
    virtual bool isTypeOf(const short id) const;
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedevDoneRiding : virtual public AOMEvent {
    DECLARE_META_EVENT(evDoneRiding)
};
//#]
#endif // _OMINSTRUMENT

//## event evSetNumberOfChainRings(unsigned int)
class evSetNumberOfChainRings : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedevSetNumberOfChainRings;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    evSetNumberOfChainRings();
    
    //## auto_generated
    evSetNumberOfChainRings(unsigned int p_n);
    
    ////    Framework operations    ////
    
    //## statechart_method
    virtual bool isTypeOf(const short id) const;
    
    ////    Framework    ////
    
    unsigned int n;		//## auto_generated
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedevSetNumberOfChainRings : virtual public AOMEvent {
    DECLARE_META_EVENT(evSetNumberOfChainRings)
};
//#]
#endif // _OMINSTRUMENT

//## event evSetNumberOfCassetteRings(unsigned int)
class evSetNumberOfCassetteRings : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedevSetNumberOfCassetteRings;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    evSetNumberOfCassetteRings();
    
    //## auto_generated
    evSetNumberOfCassetteRings(unsigned int p_n);
    
    ////    Framework operations    ////
    
    //## statechart_method
    virtual bool isTypeOf(const short id) const;
    
    ////    Framework    ////
    
    unsigned int n;		//## auto_generated
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedevSetNumberOfCassetteRings : virtual public AOMEvent {
    DECLARE_META_EVENT(evSetNumberOfCassetteRings)
};
//#]
#endif // _OMINSTRUMENT

//## event evSetCassetteRingTeeth(unsigned int,unsigned int)
class evSetCassetteRingTeeth : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedevSetCassetteRingTeeth;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    evSetCassetteRingTeeth();
    
    //## auto_generated
    evSetCassetteRingTeeth(unsigned int p_cr, unsigned int p_teeth);
    
    ////    Framework operations    ////
    
    //## statechart_method
    virtual bool isTypeOf(const short id) const;
    
    ////    Framework    ////
    
    unsigned int cr;		//## auto_generated
    
    unsigned int teeth;		//## auto_generated
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedevSetCassetteRingTeeth : virtual public AOMEvent {
    DECLARE_META_EVENT(evSetCassetteRingTeeth)
};
//#]
#endif // _OMINSTRUMENT

//## event evAugmentFrontGear()
class evAugmentFrontGear : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedevAugmentFrontGear;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    evAugmentFrontGear();
    
    ////    Framework operations    ////
    
    //## statechart_method
    virtual bool isTypeOf(const short id) const;
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedevAugmentFrontGear : virtual public AOMEvent {
    DECLARE_META_EVENT(evAugmentFrontGear)
};
//#]
#endif // _OMINSTRUMENT

//## event evDecrementFrontGear()
class evDecrementFrontGear : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedevDecrementFrontGear;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    evDecrementFrontGear();
    
    ////    Framework operations    ////
    
    //## statechart_method
    virtual bool isTypeOf(const short id) const;
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedevDecrementFrontGear : virtual public AOMEvent {
    DECLARE_META_EVENT(evDecrementFrontGear)
};
//#]
#endif // _OMINSTRUMENT

//## event evAugmentRearGear()
class evAugmentRearGear : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedevAugmentRearGear;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    evAugmentRearGear();
    
    ////    Framework operations    ////
    
    //## statechart_method
    virtual bool isTypeOf(const short id) const;
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedevAugmentRearGear : virtual public AOMEvent {
    DECLARE_META_EVENT(evAugmentRearGear)
};
//#]
#endif // _OMINSTRUMENT

//## event evDecrementRearGear()
class evDecrementRearGear : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedevDecrementRearGear;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    evDecrementRearGear();
    
    ////    Framework operations    ////
    
    //## statechart_method
    virtual bool isTypeOf(const short id) const;
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedevDecrementRearGear : virtual public AOMEvent {
    DECLARE_META_EVENT(evDecrementRearGear)
};
//#]
#endif // _OMINSTRUMENT

//## event evSetChainRingTeeth(unsigned int,unsigned int)
class evSetChainRingTeeth : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedevSetChainRingTeeth;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    evSetChainRingTeeth();
    
    //## auto_generated
    evSetChainRingTeeth(unsigned int p_cr, unsigned int p_teeth);
    
    ////    Framework operations    ////
    
    //## statechart_method
    virtual bool isTypeOf(const short id) const;
    
    ////    Framework    ////
    
    unsigned int cr;		//## auto_generated
    
    unsigned int teeth;		//## auto_generated
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedevSetChainRingTeeth : virtual public AOMEvent {
    DECLARE_META_EVENT(evSetChainRingTeeth)
};
//#]
#endif // _OMINSTRUMENT

//## event evShowGearing()
class evShowGearing : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedevShowGearing;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    evShowGearing();
    
    ////    Framework operations    ////
    
    //## statechart_method
    virtual bool isTypeOf(const short id) const;
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedevShowGearing : virtual public AOMEvent {
    DECLARE_META_EVENT(evShowGearing)
};
//#]
#endif // _OMINSTRUMENT

#endif
/*********************************************************************
	File Path	: Emulate_Front_and_Rear_GearingSim/Animate/EmulateFrontandRearGearingPkg.h
*********************************************************************/
