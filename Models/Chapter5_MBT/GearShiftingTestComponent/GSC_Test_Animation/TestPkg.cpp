/********************************************************************
	Rhapsody	: 9.0 
	Login		: Bruce
	Component	: GearShiftingTestComponent 
	Configuration 	: GSC_Test_Animation
	Model Element	: TestPkg
//!	Generated Date	: Sun, 29, Nov 2020  
	File Path	: GearShiftingTestComponent/GSC_Test_Animation/TestPkg.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "TestPkg.h"
//## classInstance itsPegasus_Test_Architecture
#include "Pegasus_Test_Architecture.h"
//#[ ignore
#define DesignSynthesisPkg_TestPkg_test001_SERIALIZE OM_NO_OP

#define exMechShifting_SERIALIZE OM_NO_OP

#define exMechShifting_UNSERIALIZE OM_NO_OP

#define exMechShifting_CONSTRUCTOR exMechShifting()

#define exDIShifting_SERIALIZE OM_NO_OP

#define exDIShifting_UNSERIALIZE OM_NO_OP

#define exDIShifting_CONSTRUCTOR exDIShifting()

#define exTest1_SERIALIZE OM_NO_OP

#define exTest1_UNSERIALIZE OM_NO_OP

#define exTest1_CONSTRUCTOR exTest1()

#define exStart_SERIALIZE OM_NO_OP

#define exStart_UNSERIALIZE OM_NO_OP

#define exStart_CONSTRUCTOR exStart()

#define exTest2_SERIALIZE OM_NO_OP

#define exTest2_UNSERIALIZE OM_NO_OP

#define exTest2_CONSTRUCTOR exTest2()

#define exTest3_SERIALIZE OM_NO_OP

#define exTest3_UNSERIALIZE OM_NO_OP

#define exTest3_CONSTRUCTOR exTest3()

#define exTest4_SERIALIZE OM_NO_OP

#define exTest4_UNSERIALIZE OM_NO_OP

#define exTest4_CONSTRUCTOR exTest4()

#define exTest5_SERIALIZE OM_NO_OP

#define exTest5_UNSERIALIZE OM_NO_OP

#define exTest5_CONSTRUCTOR exTest5()

#define exTest6_SERIALIZE OM_NO_OP

#define exTest6_UNSERIALIZE OM_NO_OP

#define exTest6_CONSTRUCTOR exTest6()

#define exTest7_SERIALIZE OM_NO_OP

#define exTest7_UNSERIALIZE OM_NO_OP

#define exTest7_CONSTRUCTOR exTest7()

#define exTest8_SERIALIZE OM_NO_OP

#define exTest8_UNSERIALIZE OM_NO_OP

#define exTest8_CONSTRUCTOR exTest8()

#define exTest9_SERIALIZE OM_NO_OP

#define exTest9_UNSERIALIZE OM_NO_OP

#define exTest9_CONSTRUCTOR exTest9()

#define exTest10_SERIALIZE OM_NO_OP

#define exTest10_UNSERIALIZE OM_NO_OP

#define exTest10_CONSTRUCTOR exTest10()

#define exContinue_SERIALIZE OM_NO_OP

#define exContinue_UNSERIALIZE OM_NO_OP

#define exContinue_CONSTRUCTOR exContinue()
//#]

//## package DesignSynthesisPkg::TestPkg


//## classInstance itsPegasus_Test_Architecture
Pegasus_Test_Architecture itsPegasus_Test_Architecture;

#ifdef _OMINSTRUMENT
static void serializeGlobalVars(AOMSAttributes* /* aomsAttributes */);

static void RenameGlobalInstances();

IMPLEMENT_META_PACKAGE(DesignSynthesisPkg_TestPkg, DesignSynthesisPkg::TestPkg)
#endif // _OMINSTRUMENT

//## operation test001()
void test001() {
    NOTIFY_FUNCTION(DesignSynthesisPkg_TestPkg, test001, test001(), 0, DesignSynthesisPkg_TestPkg_test001_SERIALIZE);
    //#[ operation test001()
    //#]
}

void TestPkg_initRelations() {
    {
        {
            itsPegasus_Test_Architecture.setShouldDelete(false);
        }
    }
    
    #ifdef _OMINSTRUMENT
    RenameGlobalInstances();
    #endif // _OMINSTRUMENT
}

bool TestPkg_startBehavior() {
    bool done = true;
    done &= itsPegasus_Test_Architecture.startBehavior();
    return done;
}

#ifdef _OMINSTRUMENT
static void serializeGlobalVars(AOMSAttributes* /* aomsAttributes */) {
}

static void RenameGlobalInstances() {
    OM_SET_INSTANCE_NAME(&itsPegasus_Test_Architecture, Pegasus_Test_Architecture, "itsPegasus_Test_Architecture", AOMNoMultiplicity);
}
#endif // _OMINSTRUMENT

//#[ ignore
TestPkg_OMInitializer::TestPkg_OMInitializer() {
    TestPkg_initRelations();
    TestPkg_startBehavior();
}

TestPkg_OMInitializer::~TestPkg_OMInitializer() {
}
//#]

//## event exMechShifting()
exMechShifting::exMechShifting() {
    NOTIFY_EVENT_CONSTRUCTOR(exMechShifting)
    setId(exMechShifting_TestPkg_DesignSynthesisPkg_id);
}

bool exMechShifting::isTypeOf(const short id) const {
    return (exMechShifting_TestPkg_DesignSynthesisPkg_id==id);
}

IMPLEMENT_META_EVENT_P(exMechShifting, DesignSynthesisPkg_TestPkg, DesignSynthesisPkg::TestPkg, exMechShifting())

//## event exDIShifting()
exDIShifting::exDIShifting() {
    NOTIFY_EVENT_CONSTRUCTOR(exDIShifting)
    setId(exDIShifting_TestPkg_DesignSynthesisPkg_id);
}

bool exDIShifting::isTypeOf(const short id) const {
    return (exDIShifting_TestPkg_DesignSynthesisPkg_id==id);
}

IMPLEMENT_META_EVENT_P(exDIShifting, DesignSynthesisPkg_TestPkg, DesignSynthesisPkg::TestPkg, exDIShifting())

//## event exTest1()
exTest1::exTest1() {
    NOTIFY_EVENT_CONSTRUCTOR(exTest1)
    setId(exTest1_TestPkg_DesignSynthesisPkg_id);
}

bool exTest1::isTypeOf(const short id) const {
    return (exTest1_TestPkg_DesignSynthesisPkg_id==id);
}

IMPLEMENT_META_EVENT_P(exTest1, DesignSynthesisPkg_TestPkg, DesignSynthesisPkg::TestPkg, exTest1())

//## event exStart()
exStart::exStart() {
    NOTIFY_EVENT_CONSTRUCTOR(exStart)
    setId(exStart_TestPkg_DesignSynthesisPkg_id);
}

bool exStart::isTypeOf(const short id) const {
    return (exStart_TestPkg_DesignSynthesisPkg_id==id);
}

IMPLEMENT_META_EVENT_P(exStart, DesignSynthesisPkg_TestPkg, DesignSynthesisPkg::TestPkg, exStart())

//## event exTest2()
exTest2::exTest2() {
    NOTIFY_EVENT_CONSTRUCTOR(exTest2)
    setId(exTest2_TestPkg_DesignSynthesisPkg_id);
}

bool exTest2::isTypeOf(const short id) const {
    return (exTest2_TestPkg_DesignSynthesisPkg_id==id);
}

IMPLEMENT_META_EVENT_P(exTest2, DesignSynthesisPkg_TestPkg, DesignSynthesisPkg::TestPkg, exTest2())

//## event exTest3()
exTest3::exTest3() {
    NOTIFY_EVENT_CONSTRUCTOR(exTest3)
    setId(exTest3_TestPkg_DesignSynthesisPkg_id);
}

bool exTest3::isTypeOf(const short id) const {
    return (exTest3_TestPkg_DesignSynthesisPkg_id==id);
}

IMPLEMENT_META_EVENT_P(exTest3, DesignSynthesisPkg_TestPkg, DesignSynthesisPkg::TestPkg, exTest3())

//## event exTest4()
exTest4::exTest4() {
    NOTIFY_EVENT_CONSTRUCTOR(exTest4)
    setId(exTest4_TestPkg_DesignSynthesisPkg_id);
}

bool exTest4::isTypeOf(const short id) const {
    return (exTest4_TestPkg_DesignSynthesisPkg_id==id);
}

IMPLEMENT_META_EVENT_P(exTest4, DesignSynthesisPkg_TestPkg, DesignSynthesisPkg::TestPkg, exTest4())

//## event exTest5()
exTest5::exTest5() {
    NOTIFY_EVENT_CONSTRUCTOR(exTest5)
    setId(exTest5_TestPkg_DesignSynthesisPkg_id);
}

bool exTest5::isTypeOf(const short id) const {
    return (exTest5_TestPkg_DesignSynthesisPkg_id==id);
}

IMPLEMENT_META_EVENT_P(exTest5, DesignSynthesisPkg_TestPkg, DesignSynthesisPkg::TestPkg, exTest5())

//## event exTest6()
exTest6::exTest6() {
    NOTIFY_EVENT_CONSTRUCTOR(exTest6)
    setId(exTest6_TestPkg_DesignSynthesisPkg_id);
}

bool exTest6::isTypeOf(const short id) const {
    return (exTest6_TestPkg_DesignSynthesisPkg_id==id);
}

IMPLEMENT_META_EVENT_P(exTest6, DesignSynthesisPkg_TestPkg, DesignSynthesisPkg::TestPkg, exTest6())

//## event exTest7()
exTest7::exTest7() {
    NOTIFY_EVENT_CONSTRUCTOR(exTest7)
    setId(exTest7_TestPkg_DesignSynthesisPkg_id);
}

bool exTest7::isTypeOf(const short id) const {
    return (exTest7_TestPkg_DesignSynthesisPkg_id==id);
}

IMPLEMENT_META_EVENT_P(exTest7, DesignSynthesisPkg_TestPkg, DesignSynthesisPkg::TestPkg, exTest7())

//## event exTest8()
exTest8::exTest8() {
    NOTIFY_EVENT_CONSTRUCTOR(exTest8)
    setId(exTest8_TestPkg_DesignSynthesisPkg_id);
}

bool exTest8::isTypeOf(const short id) const {
    return (exTest8_TestPkg_DesignSynthesisPkg_id==id);
}

IMPLEMENT_META_EVENT_P(exTest8, DesignSynthesisPkg_TestPkg, DesignSynthesisPkg::TestPkg, exTest8())

//## event exTest9()
exTest9::exTest9() {
    NOTIFY_EVENT_CONSTRUCTOR(exTest9)
    setId(exTest9_TestPkg_DesignSynthesisPkg_id);
}

bool exTest9::isTypeOf(const short id) const {
    return (exTest9_TestPkg_DesignSynthesisPkg_id==id);
}

IMPLEMENT_META_EVENT_P(exTest9, DesignSynthesisPkg_TestPkg, DesignSynthesisPkg::TestPkg, exTest9())

//## event exTest10()
exTest10::exTest10() {
    NOTIFY_EVENT_CONSTRUCTOR(exTest10)
    setId(exTest10_TestPkg_DesignSynthesisPkg_id);
}

bool exTest10::isTypeOf(const short id) const {
    return (exTest10_TestPkg_DesignSynthesisPkg_id==id);
}

IMPLEMENT_META_EVENT_P(exTest10, DesignSynthesisPkg_TestPkg, DesignSynthesisPkg::TestPkg, exTest10())

//## event exContinue()
exContinue::exContinue() {
    NOTIFY_EVENT_CONSTRUCTOR(exContinue)
    setId(exContinue_TestPkg_DesignSynthesisPkg_id);
}

bool exContinue::isTypeOf(const short id) const {
    return (exContinue_TestPkg_DesignSynthesisPkg_id==id);
}

IMPLEMENT_META_EVENT_P(exContinue, DesignSynthesisPkg_TestPkg, DesignSynthesisPkg::TestPkg, exContinue())

/*********************************************************************
	File Path	: GearShiftingTestComponent/GSC_Test_Animation/TestPkg.cpp
*********************************************************************/
