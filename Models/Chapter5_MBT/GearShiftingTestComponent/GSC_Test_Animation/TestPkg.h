/*********************************************************************
	Rhapsody	: 9.0 
	Login		: Bruce
	Component	: GearShiftingTestComponent 
	Configuration 	: GSC_Test_Animation
	Model Element	: TestPkg
//!	Generated Date	: Sun, 29, Nov 2020  
	File Path	: GearShiftingTestComponent/GSC_Test_Animation/TestPkg.h
*********************************************************************/

#ifndef TestPkg_H
#define TestPkg_H

//## auto_generated
#include <oxf/oxf.h>
//## auto_generated
#include <../Profiles/SysML/SIDefinitions.h>
//## auto_generated
#include <aom/aom.h>
//## auto_generated
#include <oxf/event.h>
//## classInstance itsPegasus_Test_Architecture
class Pegasus_Test_Architecture;

//#[ ignore
#define exMechShifting_TestPkg_DesignSynthesisPkg_id 28001

#define exDIShifting_TestPkg_DesignSynthesisPkg_id 28002

#define exTest1_TestPkg_DesignSynthesisPkg_id 28003

#define exStart_TestPkg_DesignSynthesisPkg_id 28004

#define exTest2_TestPkg_DesignSynthesisPkg_id 28005

#define exTest3_TestPkg_DesignSynthesisPkg_id 28006

#define exTest4_TestPkg_DesignSynthesisPkg_id 28007

#define exTest5_TestPkg_DesignSynthesisPkg_id 28008

#define exTest6_TestPkg_DesignSynthesisPkg_id 28009

#define exTest7_TestPkg_DesignSynthesisPkg_id 28010

#define exTest8_TestPkg_DesignSynthesisPkg_id 28011

#define exTest9_TestPkg_DesignSynthesisPkg_id 28012

#define exTest10_TestPkg_DesignSynthesisPkg_id 28013

#define exContinue_TestPkg_DesignSynthesisPkg_id 28014
//#]

//## package DesignSynthesisPkg::TestPkg


//## classInstance itsPegasus_Test_Architecture
extern Pegasus_Test_Architecture itsPegasus_Test_Architecture;

//## operation test001()
void test001();

//## auto_generated
void TestPkg_initRelations();

//## auto_generated
bool TestPkg_startBehavior();

//#[ ignore
class TestPkg_OMInitializer {
    ////    Constructors and destructors    ////
    
public :

    //## auto_generated
    TestPkg_OMInitializer();
    
    //## auto_generated
    virtual ~TestPkg_OMInitializer();
};
//#]

//## event exMechShifting()
class exMechShifting : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedexMechShifting;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    exMechShifting();
    
    ////    Framework operations    ////
    
    //## statechart_method
    virtual bool isTypeOf(const short id) const;
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedexMechShifting : virtual public AOMEvent {
    DECLARE_META_EVENT(exMechShifting)
};
//#]
#endif // _OMINSTRUMENT

//## event exDIShifting()
class exDIShifting : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedexDIShifting;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    exDIShifting();
    
    ////    Framework operations    ////
    
    //## statechart_method
    virtual bool isTypeOf(const short id) const;
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedexDIShifting : virtual public AOMEvent {
    DECLARE_META_EVENT(exDIShifting)
};
//#]
#endif // _OMINSTRUMENT

//## event exTest1()
class exTest1 : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedexTest1;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    exTest1();
    
    ////    Framework operations    ////
    
    //## statechart_method
    virtual bool isTypeOf(const short id) const;
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedexTest1 : virtual public AOMEvent {
    DECLARE_META_EVENT(exTest1)
};
//#]
#endif // _OMINSTRUMENT

//## event exStart()
class exStart : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedexStart;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    exStart();
    
    ////    Framework operations    ////
    
    //## statechart_method
    virtual bool isTypeOf(const short id) const;
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedexStart : virtual public AOMEvent {
    DECLARE_META_EVENT(exStart)
};
//#]
#endif // _OMINSTRUMENT

//## event exTest2()
class exTest2 : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedexTest2;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    exTest2();
    
    ////    Framework operations    ////
    
    //## statechart_method
    virtual bool isTypeOf(const short id) const;
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedexTest2 : virtual public AOMEvent {
    DECLARE_META_EVENT(exTest2)
};
//#]
#endif // _OMINSTRUMENT

//## event exTest3()
class exTest3 : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedexTest3;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    exTest3();
    
    ////    Framework operations    ////
    
    //## statechart_method
    virtual bool isTypeOf(const short id) const;
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedexTest3 : virtual public AOMEvent {
    DECLARE_META_EVENT(exTest3)
};
//#]
#endif // _OMINSTRUMENT

//## event exTest4()
class exTest4 : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedexTest4;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    exTest4();
    
    ////    Framework operations    ////
    
    //## statechart_method
    virtual bool isTypeOf(const short id) const;
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedexTest4 : virtual public AOMEvent {
    DECLARE_META_EVENT(exTest4)
};
//#]
#endif // _OMINSTRUMENT

//## event exTest5()
class exTest5 : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedexTest5;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    exTest5();
    
    ////    Framework operations    ////
    
    //## statechart_method
    virtual bool isTypeOf(const short id) const;
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedexTest5 : virtual public AOMEvent {
    DECLARE_META_EVENT(exTest5)
};
//#]
#endif // _OMINSTRUMENT

//## event exTest6()
class exTest6 : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedexTest6;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    exTest6();
    
    ////    Framework operations    ////
    
    //## statechart_method
    virtual bool isTypeOf(const short id) const;
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedexTest6 : virtual public AOMEvent {
    DECLARE_META_EVENT(exTest6)
};
//#]
#endif // _OMINSTRUMENT

//## event exTest7()
class exTest7 : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedexTest7;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    exTest7();
    
    ////    Framework operations    ////
    
    //## statechart_method
    virtual bool isTypeOf(const short id) const;
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedexTest7 : virtual public AOMEvent {
    DECLARE_META_EVENT(exTest7)
};
//#]
#endif // _OMINSTRUMENT

//## event exTest8()
class exTest8 : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedexTest8;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    exTest8();
    
    ////    Framework operations    ////
    
    //## statechart_method
    virtual bool isTypeOf(const short id) const;
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedexTest8 : virtual public AOMEvent {
    DECLARE_META_EVENT(exTest8)
};
//#]
#endif // _OMINSTRUMENT

//## event exTest9()
class exTest9 : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedexTest9;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    exTest9();
    
    ////    Framework operations    ////
    
    //## statechart_method
    virtual bool isTypeOf(const short id) const;
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedexTest9 : virtual public AOMEvent {
    DECLARE_META_EVENT(exTest9)
};
//#]
#endif // _OMINSTRUMENT

//## event exTest10()
class exTest10 : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedexTest10;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    exTest10();
    
    ////    Framework operations    ////
    
    //## statechart_method
    virtual bool isTypeOf(const short id) const;
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedexTest10 : virtual public AOMEvent {
    DECLARE_META_EVENT(exTest10)
};
//#]
#endif // _OMINSTRUMENT

//## event exContinue()
class exContinue : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedexContinue;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    exContinue();
    
    ////    Framework operations    ////
    
    //## statechart_method
    virtual bool isTypeOf(const short id) const;
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedexContinue : virtual public AOMEvent {
    DECLARE_META_EVENT(exContinue)
};
//#]
#endif // _OMINSTRUMENT

#endif
/*********************************************************************
	File Path	: GearShiftingTestComponent/GSC_Test_Animation/TestPkg.h
*********************************************************************/
