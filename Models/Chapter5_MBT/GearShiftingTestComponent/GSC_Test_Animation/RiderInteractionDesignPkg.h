/*********************************************************************
	Rhapsody	: 9.0 
	Login		: Bruce
	Component	: GearShiftingTestComponent 
	Configuration 	: GSC_Test_Animation
	Model Element	: RiderInteractionDesignPkg
//!	Generated Date	: Sat, 28, Nov 2020  
	File Path	: GearShiftingTestComponent/GSC_Test_Animation/RiderInteractionDesignPkg.h
*********************************************************************/

#ifndef RiderInteractionDesignPkg_H
#define RiderInteractionDesignPkg_H

//## auto_generated
#include <oxf/oxf.h>
//## auto_generated
#include <../Profiles/SysML/SIDefinitions.h>
//## auto_generated
#include <aom/aom.h>
//## auto_generated
#include <oxf/event.h>
//## auto_generated
class DIButton;

//## auto_generated
class GearControl;

//## auto_generated
class MainComputingPlatform;

//## auto_generated
class Pegasus_System;

//## auto_generated
class RiderApplication;

//## auto_generated
class RiderInteraction;

//## auto_generated
class ShiftLever;

//#[ ignore
#define evLeftShiftUp_RiderInteractionDesignPkg_DesignSynthesisPkg_id 4001

#define evLeftShiftDown_RiderInteractionDesignPkg_DesignSynthesisPkg_id 4002

#define evRightShiftUp_RiderInteractionDesignPkg_DesignSynthesisPkg_id 4003

#define evRightShiftDown_RiderInteractionDesignPkg_DesignSynthesisPkg_id 4004

#define evDIUp_RiderInteractionDesignPkg_DesignSynthesisPkg_id 4005

#define evDIDown_RiderInteractionDesignPkg_DesignSynthesisPkg_id 4006

#define evMechanicalShifting_RiderInteractionDesignPkg_DesignSynthesisPkg_id 4007

#define evDIShifting_RiderInteractionDesignPkg_DesignSynthesisPkg_id 4008

#define evShiftDown_RiderInteractionDesignPkg_DesignSynthesisPkg_id 4009

#define evStart_RiderInteractionDesignPkg_DesignSynthesisPkg_id 4010

#define evUp_RiderInteractionDesignPkg_DesignSynthesisPkg_id 4011

#define evDown_RiderInteractionDesignPkg_DesignSynthesisPkg_id 4012

#define evShiftUp_RiderInteractionDesignPkg_DesignSynthesisPkg_id 4013

#define evPress_RiderInteractionDesignPkg_DesignSynthesisPkg_id 4014

#define evDiShift_RiderInteractionDesignPkg_DesignSynthesisPkg_id 4015

#define evDisplayGearing_RiderInteractionDesignPkg_DesignSynthesisPkg_id 4016
//#]

//## package DesignSynthesisPkg::RiderInteractionDesignPkg



//## event evLeftShiftUp()
class evLeftShiftUp : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedevLeftShiftUp;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    evLeftShiftUp();
    
    ////    Framework operations    ////
    
    //## statechart_method
    virtual bool isTypeOf(const short id) const;
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedevLeftShiftUp : virtual public AOMEvent {
    DECLARE_META_EVENT(evLeftShiftUp)
};
//#]
#endif // _OMINSTRUMENT

//## event evLeftShiftDown()
class evLeftShiftDown : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedevLeftShiftDown;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    evLeftShiftDown();
    
    ////    Framework operations    ////
    
    //## statechart_method
    virtual bool isTypeOf(const short id) const;
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedevLeftShiftDown : virtual public AOMEvent {
    DECLARE_META_EVENT(evLeftShiftDown)
};
//#]
#endif // _OMINSTRUMENT

//## event evRightShiftUp()
class evRightShiftUp : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedevRightShiftUp;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    evRightShiftUp();
    
    ////    Framework operations    ////
    
    //## statechart_method
    virtual bool isTypeOf(const short id) const;
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedevRightShiftUp : virtual public AOMEvent {
    DECLARE_META_EVENT(evRightShiftUp)
};
//#]
#endif // _OMINSTRUMENT

//## event evRightShiftDown()
class evRightShiftDown : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedevRightShiftDown;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    evRightShiftDown();
    
    ////    Framework operations    ////
    
    //## statechart_method
    virtual bool isTypeOf(const short id) const;
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedevRightShiftDown : virtual public AOMEvent {
    DECLARE_META_EVENT(evRightShiftDown)
};
//#]
#endif // _OMINSTRUMENT

//## event evDIUp()
class evDIUp : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedevDIUp;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    evDIUp();
    
    ////    Framework operations    ////
    
    //## statechart_method
    virtual bool isTypeOf(const short id) const;
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedevDIUp : virtual public AOMEvent {
    DECLARE_META_EVENT(evDIUp)
};
//#]
#endif // _OMINSTRUMENT

//## event evDIDown()
class evDIDown : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedevDIDown;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    evDIDown();
    
    ////    Framework operations    ////
    
    //## statechart_method
    virtual bool isTypeOf(const short id) const;
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedevDIDown : virtual public AOMEvent {
    DECLARE_META_EVENT(evDIDown)
};
//#]
#endif // _OMINSTRUMENT

//## event evMechanicalShifting()
class evMechanicalShifting : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedevMechanicalShifting;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    evMechanicalShifting();
    
    ////    Framework operations    ////
    
    //## statechart_method
    virtual bool isTypeOf(const short id) const;
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedevMechanicalShifting : virtual public AOMEvent {
    DECLARE_META_EVENT(evMechanicalShifting)
};
//#]
#endif // _OMINSTRUMENT

//## event evDIShifting()
class evDIShifting : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedevDIShifting;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    evDIShifting();
    
    ////    Framework operations    ////
    
    //## statechart_method
    virtual bool isTypeOf(const short id) const;
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedevDIShifting : virtual public AOMEvent {
    DECLARE_META_EVENT(evDIShifting)
};
//#]
#endif // _OMINSTRUMENT

//## event evShiftDown(bool)
class evShiftDown : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedevShiftDown;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    evShiftDown();
    
    //## auto_generated
    evShiftDown(bool p_isLeftButton);
    
    ////    Framework operations    ////
    
    //## statechart_method
    virtual bool isTypeOf(const short id) const;
    
    ////    Framework    ////
    
    bool isLeftButton;		//## auto_generated
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedevShiftDown : virtual public AOMEvent {
    DECLARE_META_EVENT(evShiftDown)
};
//#]
#endif // _OMINSTRUMENT

//## event evStart()
class evStart : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedevStart;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    evStart();
    
    ////    Framework operations    ////
    
    //## statechart_method
    virtual bool isTypeOf(const short id) const;
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedevStart : virtual public AOMEvent {
    DECLARE_META_EVENT(evStart)
};
//#]
#endif // _OMINSTRUMENT

//## event evUp()
class evUp : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedevUp;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    evUp();
    
    ////    Framework operations    ////
    
    //## statechart_method
    virtual bool isTypeOf(const short id) const;
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedevUp : virtual public AOMEvent {
    DECLARE_META_EVENT(evUp)
};
//#]
#endif // _OMINSTRUMENT

//## event evDown()
class evDown : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedevDown;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    evDown();
    
    ////    Framework operations    ////
    
    //## statechart_method
    virtual bool isTypeOf(const short id) const;
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedevDown : virtual public AOMEvent {
    DECLARE_META_EVENT(evDown)
};
//#]
#endif // _OMINSTRUMENT

//## event evShiftUp(bool)
class evShiftUp : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedevShiftUp;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    evShiftUp();
    
    //## auto_generated
    evShiftUp(bool p_isLeftButton);
    
    ////    Framework operations    ////
    
    //## statechart_method
    virtual bool isTypeOf(const short id) const;
    
    ////    Framework    ////
    
    bool isLeftButton;		//## auto_generated
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedevShiftUp : virtual public AOMEvent {
    DECLARE_META_EVENT(evShiftUp)
};
//#]
#endif // _OMINSTRUMENT

//## event evPress()
class evPress : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedevPress;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    evPress();
    
    ////    Framework operations    ////
    
    //## statechart_method
    virtual bool isTypeOf(const short id) const;
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedevPress : virtual public AOMEvent {
    DECLARE_META_EVENT(evPress)
};
//#]
#endif // _OMINSTRUMENT

//## event evDiShift(bool)
class evDiShift : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedevDiShift;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    evDiShift();
    
    //## auto_generated
    evDiShift(bool p_isUpButton);
    
    ////    Framework operations    ////
    
    //## statechart_method
    virtual bool isTypeOf(const short id) const;
    
    ////    Framework    ////
    
    bool isUpButton;		//## auto_generated
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedevDiShift : virtual public AOMEvent {
    DECLARE_META_EVENT(evDiShift)
};
//#]
#endif // _OMINSTRUMENT

//## event evDisplayGearing(int,int)
class evDisplayGearing : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedevDisplayGearing;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    evDisplayGearing();
    
    //## auto_generated
    evDisplayGearing(int p_chainRingIndex, int p_cassetteRingIndex);
    
    ////    Framework operations    ////
    
    //## statechart_method
    virtual bool isTypeOf(const short id) const;
    
    ////    Framework    ////
    
    int chainRingIndex;		//## auto_generated
    
    int cassetteRingIndex;		//## auto_generated
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedevDisplayGearing : virtual public AOMEvent {
    DECLARE_META_EVENT(evDisplayGearing)
};
//#]
#endif // _OMINSTRUMENT

#endif
/*********************************************************************
	File Path	: GearShiftingTestComponent/GSC_Test_Animation/RiderInteractionDesignPkg.h
*********************************************************************/
