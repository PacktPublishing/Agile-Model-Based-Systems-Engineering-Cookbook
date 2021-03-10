/*********************************************************************
	Rhapsody	: 8.4 
	Login		: Bruce
	Component	: Emulate_Front_and_Rear_GearingSim 
	Configuration 	: Animate
	Model Element	: EmulateFrontandRearGearingActorPkg
//!	Generated Date	: Mon, 2, Mar 2020  
	File Path	: Emulate_Front_and_Rear_GearingSim/Animate/EmulateFrontandRearGearingActorPkg.h
*********************************************************************/

#ifndef EmulateFrontandRearGearingActorPkg_H
#define EmulateFrontandRearGearingActorPkg_H

//## auto_generated
#include <oxf/oxf.h>
//## auto_generated
#include <../Profiles/SysML/SIDefinitions.h>
//## auto_generated
#include <aom/aom.h>
//## auto_generated
#include <oxf/event.h>
//## auto_generated
#include "EmulateFrontandRearGearingPkg.h"
//## auto_generated
class aEFRG_Rider;

//## auto_generated
class aEFRG_TrainingApp;

//#[ ignore
#define exConfigure_EmulateFrontandRearGearingActorPkg_EmulateFrontandRearGearingPkg_FunctionalAnalysisPkg_id 26001

#define exDoneConfiguring_EmulateFrontandRearGearingActorPkg_EmulateFrontandRearGearingPkg_FunctionalAnalysisPkg_id 26002

#define exSetNChainRings_EmulateFrontandRearGearingActorPkg_EmulateFrontandRearGearingPkg_FunctionalAnalysisPkg_id 26003

#define exSetChainRing_EmulateFrontandRearGearingActorPkg_EmulateFrontandRearGearingPkg_FunctionalAnalysisPkg_id 26004

#define exSetNCassetteRings_EmulateFrontandRearGearingActorPkg_EmulateFrontandRearGearingPkg_FunctionalAnalysisPkg_id 26005

#define exSetCassetteRing_EmulateFrontandRearGearingActorPkg_EmulateFrontandRearGearingPkg_FunctionalAnalysisPkg_id 26006

#define exBeginRiding_EmulateFrontandRearGearingActorPkg_EmulateFrontandRearGearingPkg_FunctionalAnalysisPkg_id 26007

#define exDoneRiding_EmulateFrontandRearGearingActorPkg_EmulateFrontandRearGearingPkg_FunctionalAnalysisPkg_id 26008

#define exAugFront_EmulateFrontandRearGearingActorPkg_EmulateFrontandRearGearingPkg_FunctionalAnalysisPkg_id 26009

#define exDecFront_EmulateFrontandRearGearingActorPkg_EmulateFrontandRearGearingPkg_FunctionalAnalysisPkg_id 26010

#define exAugRear_EmulateFrontandRearGearingActorPkg_EmulateFrontandRearGearingPkg_FunctionalAnalysisPkg_id 26011

#define exDecRear_EmulateFrontandRearGearingActorPkg_EmulateFrontandRearGearingPkg_FunctionalAnalysisPkg_id 26012

#define evCurrentGearing_EmulateFrontandRearGearingActorPkg_EmulateFrontandRearGearingPkg_FunctionalAnalysisPkg_id 26013

#define exShowGearing_EmulateFrontandRearGearingActorPkg_EmulateFrontandRearGearingPkg_FunctionalAnalysisPkg_id 26014

#define evInitialSettings_EmulateFrontandRearGearingActorPkg_EmulateFrontandRearGearingPkg_FunctionalAnalysisPkg_id 26015
//#]

//## package FunctionalAnalysisPkg::EmulateFrontandRearGearingPkg::EmulateFrontandRearGearingActorPkg



//## event exConfigure()
class exConfigure : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedexConfigure;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    exConfigure();
    
    ////    Framework operations    ////
    
    //## statechart_method
    virtual bool isTypeOf(const short id) const;
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedexConfigure : virtual public AOMEvent {
    DECLARE_META_EVENT(exConfigure)
};
//#]
#endif // _OMINSTRUMENT

//## event exDoneConfiguring()
class exDoneConfiguring : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedexDoneConfiguring;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    exDoneConfiguring();
    
    ////    Framework operations    ////
    
    //## statechart_method
    virtual bool isTypeOf(const short id) const;
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedexDoneConfiguring : virtual public AOMEvent {
    DECLARE_META_EVENT(exDoneConfiguring)
};
//#]
#endif // _OMINSTRUMENT

//## event exSetNChainRings()
class exSetNChainRings : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedexSetNChainRings;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    exSetNChainRings();
    
    ////    Framework operations    ////
    
    //## statechart_method
    virtual bool isTypeOf(const short id) const;
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedexSetNChainRings : virtual public AOMEvent {
    DECLARE_META_EVENT(exSetNChainRings)
};
//#]
#endif // _OMINSTRUMENT

//## event exSetChainRing()
class exSetChainRing : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedexSetChainRing;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    exSetChainRing();
    
    ////    Framework operations    ////
    
    //## statechart_method
    virtual bool isTypeOf(const short id) const;
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedexSetChainRing : virtual public AOMEvent {
    DECLARE_META_EVENT(exSetChainRing)
};
//#]
#endif // _OMINSTRUMENT

//## event exSetNCassetteRings()
class exSetNCassetteRings : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedexSetNCassetteRings;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    exSetNCassetteRings();
    
    ////    Framework operations    ////
    
    //## statechart_method
    virtual bool isTypeOf(const short id) const;
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedexSetNCassetteRings : virtual public AOMEvent {
    DECLARE_META_EVENT(exSetNCassetteRings)
};
//#]
#endif // _OMINSTRUMENT

//## event exSetCassetteRing()
class exSetCassetteRing : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedexSetCassetteRing;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    exSetCassetteRing();
    
    ////    Framework operations    ////
    
    //## statechart_method
    virtual bool isTypeOf(const short id) const;
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedexSetCassetteRing : virtual public AOMEvent {
    DECLARE_META_EVENT(exSetCassetteRing)
};
//#]
#endif // _OMINSTRUMENT

//## event exBeginRiding()
class exBeginRiding : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedexBeginRiding;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    exBeginRiding();
    
    ////    Framework operations    ////
    
    //## statechart_method
    virtual bool isTypeOf(const short id) const;
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedexBeginRiding : virtual public AOMEvent {
    DECLARE_META_EVENT(exBeginRiding)
};
//#]
#endif // _OMINSTRUMENT

//## event exDoneRiding()
class exDoneRiding : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedexDoneRiding;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    exDoneRiding();
    
    ////    Framework operations    ////
    
    //## statechart_method
    virtual bool isTypeOf(const short id) const;
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedexDoneRiding : virtual public AOMEvent {
    DECLARE_META_EVENT(exDoneRiding)
};
//#]
#endif // _OMINSTRUMENT

//## event exAugFront()
class exAugFront : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedexAugFront;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    exAugFront();
    
    ////    Framework operations    ////
    
    //## statechart_method
    virtual bool isTypeOf(const short id) const;
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedexAugFront : virtual public AOMEvent {
    DECLARE_META_EVENT(exAugFront)
};
//#]
#endif // _OMINSTRUMENT

//## event exDecFront()
class exDecFront : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedexDecFront;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    exDecFront();
    
    ////    Framework operations    ////
    
    //## statechart_method
    virtual bool isTypeOf(const short id) const;
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedexDecFront : virtual public AOMEvent {
    DECLARE_META_EVENT(exDecFront)
};
//#]
#endif // _OMINSTRUMENT

//## event exAugRear()
class exAugRear : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedexAugRear;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    exAugRear();
    
    ////    Framework operations    ////
    
    //## statechart_method
    virtual bool isTypeOf(const short id) const;
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedexAugRear : virtual public AOMEvent {
    DECLARE_META_EVENT(exAugRear)
};
//#]
#endif // _OMINSTRUMENT

//## event exDecRear()
class exDecRear : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedexDecRear;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    exDecRear();
    
    ////    Framework operations    ////
    
    //## statechart_method
    virtual bool isTypeOf(const short id) const;
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedexDecRear : virtual public AOMEvent {
    DECLARE_META_EVENT(exDecRear)
};
//#]
#endif // _OMINSTRUMENT

//## event evCurrentGearing(unsigned int,unsigned int)
class evCurrentGearing : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedevCurrentGearing;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    evCurrentGearing();
    
    //## auto_generated
    evCurrentGearing(unsigned int p_front, unsigned int p_rear);
    
    ////    Framework operations    ////
    
    //## statechart_method
    virtual bool isTypeOf(const short id) const;
    
    ////    Framework    ////
    
    unsigned int front;		//## auto_generated
    
    unsigned int rear;		//## auto_generated
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedevCurrentGearing : virtual public AOMEvent {
    DECLARE_META_EVENT(evCurrentGearing)
};
//#]
#endif // _OMINSTRUMENT

//## event exShowGearing()
class exShowGearing : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedexShowGearing;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    exShowGearing();
    
    ////    Framework operations    ////
    
    //## statechart_method
    virtual bool isTypeOf(const short id) const;
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedexShowGearing : virtual public AOMEvent {
    DECLARE_META_EVENT(exShowGearing)
};
//#]
#endif // _OMINSTRUMENT

//## event evInitialSettings(unsigned int,unsigned int)
class evInitialSettings : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedevInitialSettings;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    evInitialSettings();
    
    //## auto_generated
    evInitialSettings(unsigned int p_chainRings, unsigned int p_cassetteRings);
    
    ////    Framework operations    ////
    
    //## statechart_method
    virtual bool isTypeOf(const short id) const;
    
    ////    Framework    ////
    
    unsigned int chainRings;		//## auto_generated
    
    unsigned int cassetteRings;		//## auto_generated
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedevInitialSettings : virtual public AOMEvent {
    DECLARE_META_EVENT(evInitialSettings)
};
//#]
#endif // _OMINSTRUMENT

#endif
/*********************************************************************
	File Path	: Emulate_Front_and_Rear_GearingSim/Animate/EmulateFrontandRearGearingActorPkg.h
*********************************************************************/
