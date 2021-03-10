/*********************************************************************
	Rhapsody	: 9.0 
	Login		: Bruce
	Component	: GearShiftingComponent 
	Configuration 	: GSC_Animation
	Model Element	: GearControl
//!	Generated Date	: Sat, 28, Nov 2020  
	File Path	: GearShiftingComponent/GSC_Animation/GearControl.h
*********************************************************************/

#ifndef GearControl_H
#define GearControl_H

//## auto_generated
#include <oxf/oxf.h>
//## auto_generated
#include <../Profiles/SysML/SIDefinitions.h>
//## auto_generated
#include <aom/aom.h>
//## auto_generated
#include "RiderInteractionDesignPkg.h"
//## classInstance DIDownShifter
#include "DIButton.h"
//## class GearControl
#include "evDIShifting_ProxyReceptionInterface.h"
//## class GearControl
#include "evDisplayGearing_ProxyReceptionInterface.h"
//## class GearControl
#include "evMechanicalShifting_ProxyReceptionInterface.h"
//## classInstance leftShifter
#include "ShiftLever.h"
//## class OutBound
#include "evDIDown_ProxyReceptionInterface.h"
//## class OutBound
#include "evDIUp_ProxyReceptionInterface.h"
//## class OutBound
#include "evLeftShiftDown_ProxyReceptionInterface.h"
//## class OutBound
#include "evLeftShiftUp_ProxyReceptionInterface.h"
//## class OutBound
#include "evRightShiftDown_ProxyReceptionInterface.h"
//## class OutBound
#include "evRightShiftUp_ProxyReceptionInterface.h"
//#[ ignore
#define OMAnim_DesignSynthesisPkg_RiderInteractionDesignPkg_GearControl_setCurrentCassetteRing_int_ARGS_DECLARATION int p_currentCassetteRing;

#define OMAnim_DesignSynthesisPkg_RiderInteractionDesignPkg_GearControl_setCurrentChainRing_int_ARGS_DECLARATION int p_currentChainRing;
//#]

//## package DesignSynthesisPkg::RiderInteractionDesignPkg

//## class GearControl
class GearControl : public evDIShifting_ProxyReceptionInterface, public evMechanicalShifting_ProxyReceptionInterface, public evDisplayGearing_ProxyReceptionInterface {
public :

//#[ ignore
    //## package DesignSynthesisPkg::RiderInteractionDesignPkg
    class pMainShift_C {
    public :
    
        //## auto_generated
        class InBound_C;
        
        //## auto_generated
        class OutBound_C;
        
        //## package DesignSynthesisPkg::RiderInteractionDesignPkg
        class InBound_C : public evDIShifting_ProxyReceptionInterface, public evMechanicalShifting_ProxyReceptionInterface, public evDisplayGearing_ProxyReceptionInterface {
            ////    Constructors and destructors    ////
            
        public :
        
            //## auto_generated
            InBound_C();
            
            //## auto_generated
            virtual ~InBound_C();
            
            ////    Operations    ////
            
            //## auto_generated
            virtual bool send(IOxfEvent* event, const IOxfEventGenerationParams& params);
            
            //## auto_generated
            virtual bool send(IOxfEvent* event);
            
            ////    Additional operations    ////
            
            //## auto_generated
            void setItsEvDIShifting_ProxyReceptionInterface(evDIShifting_ProxyReceptionInterface* p_evDIShifting_ProxyReceptionInterface);
            
            //## auto_generated
            void setItsEvDisplayGearing_ProxyReceptionInterface(evDisplayGearing_ProxyReceptionInterface* p_evDisplayGearing_ProxyReceptionInterface);
            
            //## auto_generated
            void setItsEvMechanicalShifting_ProxyReceptionInterface(evMechanicalShifting_ProxyReceptionInterface* p_evMechanicalShifting_ProxyReceptionInterface);
            
            //## auto_generated
            pMainShift_C* getPort() const;
            
            //## auto_generated
            void setPort(pMainShift_C* p_pMainShift_C);
        
        protected :
        
            //## auto_generated
            void cleanUpRelations();
            
            ////    Relations and components    ////
            
            evDIShifting_ProxyReceptionInterface* itsEvDIShifting_ProxyReceptionInterface;		//## link itsEvDIShifting_ProxyReceptionInterface
            
            evDisplayGearing_ProxyReceptionInterface* itsEvDisplayGearing_ProxyReceptionInterface;		//## link itsEvDisplayGearing_ProxyReceptionInterface
            
            evMechanicalShifting_ProxyReceptionInterface* itsEvMechanicalShifting_ProxyReceptionInterface;		//## link itsEvMechanicalShifting_ProxyReceptionInterface
            
            pMainShift_C* port;		//## link port
            
            ////    Framework operations    ////
        
        public :
        
            //## auto_generated
            void __setPort(pMainShift_C* p_pMainShift_C);
            
            //## auto_generated
            void _setPort(pMainShift_C* p_pMainShift_C);
            
            //## auto_generated
            void _clearPort();
        };
        
        //## package DesignSynthesisPkg::RiderInteractionDesignPkg
        class OutBound_C : public evDIDown_ProxyReceptionInterface, public evDIUp_ProxyReceptionInterface, public evLeftShiftDown_ProxyReceptionInterface, public evLeftShiftUp_ProxyReceptionInterface, public evRightShiftDown_ProxyReceptionInterface, public evRightShiftUp_ProxyReceptionInterface {
            ////    Constructors and destructors    ////
            
        public :
        
            //## auto_generated
            OutBound_C();
            
            //## auto_generated
            virtual ~OutBound_C();
            
            ////    Operations    ////
            
            //## auto_generated
            virtual bool send(IOxfEvent* event, const IOxfEventGenerationParams& params);
            
            //## auto_generated
            virtual bool send(IOxfEvent* event);
            
            ////    Additional operations    ////
            
            //## auto_generated
            void setItsEvDIDown_ProxyReceptionInterface(OMReactive* p_OMReactive);
            
            //## auto_generated
            void setItsEvDIUp_ProxyReceptionInterface(OMReactive* p_OMReactive);
            
            //## auto_generated
            void setItsEvLeftShiftDown_ProxyReceptionInterface(OMReactive* p_OMReactive);
            
            //## auto_generated
            void setItsEvLeftShiftUp_ProxyReceptionInterface(OMReactive* p_OMReactive);
            
            //## auto_generated
            void setItsEvRightShiftDown_ProxyReceptionInterface(OMReactive* p_OMReactive);
            
            //## auto_generated
            void setItsEvRightShiftUp_ProxyReceptionInterface(OMReactive* p_OMReactive);
        
        protected :
        
            //## auto_generated
            void cleanUpRelations();
            
            ////    Relations and components    ////
            
            OMReactive* itsEvDIDown_ProxyReceptionInterface;		//## link itsEvDIDown_ProxyReceptionInterface
            
            OMReactive* itsEvDIUp_ProxyReceptionInterface;		//## link itsEvDIUp_ProxyReceptionInterface
            
            OMReactive* itsEvLeftShiftDown_ProxyReceptionInterface;		//## link itsEvLeftShiftDown_ProxyReceptionInterface
            
            OMReactive* itsEvLeftShiftUp_ProxyReceptionInterface;		//## link itsEvLeftShiftUp_ProxyReceptionInterface
            
            OMReactive* itsEvRightShiftDown_ProxyReceptionInterface;		//## link itsEvRightShiftDown_ProxyReceptionInterface
            
            OMReactive* itsEvRightShiftUp_ProxyReceptionInterface;		//## link itsEvRightShiftUp_ProxyReceptionInterface
        };
        
        ////    Constructors and destructors    ////
        
        //## auto_generated
        pMainShift_C();
        
        //## auto_generated
        virtual ~pMainShift_C();
        
        ////    Operations    ////
        
        //## auto_generated
        void connectGearControl(GearControl* part);
        
        //## auto_generated
        evDIDown_ProxyReceptionInterface* getItsEvDIDown_ProxyReceptionInterface();
        
        //## auto_generated
        evDIShifting_ProxyReceptionInterface* getItsEvDIShifting_ProxyReceptionInterface();
        
        //## auto_generated
        evDIUp_ProxyReceptionInterface* getItsEvDIUp_ProxyReceptionInterface();
        
        //## auto_generated
        evDisplayGearing_ProxyReceptionInterface* getItsEvDisplayGearing_ProxyReceptionInterface();
        
        //## auto_generated
        evLeftShiftDown_ProxyReceptionInterface* getItsEvLeftShiftDown_ProxyReceptionInterface();
        
        //## auto_generated
        evLeftShiftUp_ProxyReceptionInterface* getItsEvLeftShiftUp_ProxyReceptionInterface();
        
        //## auto_generated
        evMechanicalShifting_ProxyReceptionInterface* getItsEvMechanicalShifting_ProxyReceptionInterface();
        
        //## auto_generated
        evRightShiftDown_ProxyReceptionInterface* getItsEvRightShiftDown_ProxyReceptionInterface();
        
        //## auto_generated
        evRightShiftUp_ProxyReceptionInterface* getItsEvRightShiftUp_ProxyReceptionInterface();
        
        //## auto_generated
        void setItsEvDIDown_ProxyReceptionInterface(OMReactive* p_evDIDown_ProxyReceptionInterface);
        
        //## auto_generated
        void setItsEvDIShifting_ProxyReceptionInterface(evDIShifting_ProxyReceptionInterface* p_evDIShifting_ProxyReceptionInterface);
        
        //## auto_generated
        void setItsEvDIUp_ProxyReceptionInterface(OMReactive* p_evDIUp_ProxyReceptionInterface);
        
        //## auto_generated
        void setItsEvDisplayGearing_ProxyReceptionInterface(evDisplayGearing_ProxyReceptionInterface* p_evDisplayGearing_ProxyReceptionInterface);
        
        //## auto_generated
        void setItsEvLeftShiftDown_ProxyReceptionInterface(OMReactive* p_evLeftShiftDown_ProxyReceptionInterface);
        
        //## auto_generated
        void setItsEvLeftShiftUp_ProxyReceptionInterface(OMReactive* p_evLeftShiftUp_ProxyReceptionInterface);
        
        //## auto_generated
        void setItsEvMechanicalShifting_ProxyReceptionInterface(evMechanicalShifting_ProxyReceptionInterface* p_evMechanicalShifting_ProxyReceptionInterface);
        
        //## auto_generated
        void setItsEvRightShiftDown_ProxyReceptionInterface(OMReactive* p_evRightShiftDown_ProxyReceptionInterface);
        
        //## auto_generated
        void setItsEvRightShiftUp_ProxyReceptionInterface(OMReactive* p_evRightShiftUp_ProxyReceptionInterface);
        
        ////    Additional operations    ////
        
        //## auto_generated
        InBound_C* getInBound() const;
        
        //## auto_generated
        OutBound_C* getOutBound() const;
    
    protected :
    
        //## auto_generated
        void initRelations();
        
        ////    Attributes    ////
        
        int _p_;		//## attribute _p_
        
        ////    Relations and components    ////
        
        InBound_C InBound;		//## classInstance InBound
        
        OutBound_C OutBound;		//## classInstance OutBound
        
        ////    Framework operations    ////
    
    public :
    
        //## auto_generated
        virtual void destroy();
    };
//#]

    ////    Friends    ////
    
#ifdef _OMINSTRUMENT
    friend class OMAnimatedGearControl;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    GearControl(IOxfActive* theActiveContext = 0);
    
    //## auto_generated
    virtual ~GearControl();
    
    ////    Operations    ////
    
    //## operation displayGearing(int,int)
    virtual void displayGearing(int chainRing, int cassetteRing);
    
    ////    Additional operations    ////
    
    //## auto_generated
    pMainShift_C* getPMainShift() const;
    
    //## auto_generated
    pMainShift_C* get_pMainShift() const;
    
    //## auto_generated
    bool getDIUp() const;
    
    //## auto_generated
    void setDIUp(bool p_DIUp);
    
    //## auto_generated
    int getCurrentCassetteRing() const;
    
    //## auto_generated
    void setCurrentCassetteRing(int p_currentCassetteRing);
    
    //## auto_generated
    int getCurrentChainRing() const;
    
    //## auto_generated
    void setCurrentChainRing(int p_currentChainRing);
    
    //## auto_generated
    bool getLeftSide() const;
    
    //## auto_generated
    void setLeftSide(bool p_leftSide);
    
    //## auto_generated
    DIButton* getDIDownShifter() const;
    
    //## auto_generated
    DIButton* getDIUpShifter() const;
    
    //## auto_generated
    ShiftLever* getLeftShifter() const;
    
    //## auto_generated
    ShiftLever* getRightShifter() const;
    
    //## auto_generated
    virtual bool startBehavior();

protected :

    //## auto_generated
    void initRelations();
    
    //## auto_generated
    void initStatechart();
    
    ////    Attributes    ////
    
    bool DIUp;		//## attribute DIUp
    
    int currentCassetteRing;		//## attribute currentCassetteRing
    
    int currentChainRing;		//## attribute currentChainRing
    
    bool leftSide;		//## attribute leftSide
    
    ////    Relations and components    ////
    
//#[ ignore
    pMainShift_C pMainShift;
//#]

    DIButton DIDownShifter;		//## classInstance DIDownShifter
    
    DIButton DIUpShifter;		//## classInstance DIUpShifter
    
    ShiftLever leftShifter;		//## classInstance leftShifter
    
    ShiftLever rightShifter;		//## classInstance rightShifter
    
    ////    Framework operations    ////

public :

    //## auto_generated
    void setActiveContext(IOxfActive* theActiveContext, bool activeInstance);
    
    //## auto_generated
    virtual void destroy();
    
    // rootState:
    //## statechart_method
    inline bool rootState_IN() const;
    
    //## statechart_method
    virtual void rootState_entDef();
    
    //## statechart_method
    virtual IOxfReactive::TakeEventStatus rootState_processEvent();
    
    // Iniitializeing:
    //## statechart_method
    inline bool Iniitializeing_IN() const;
    
    // ControllingGears:
    //## statechart_method
    inline bool ControllingGears_IN() const;
    
    //## statechart_method
    void ControllingGears_entDef();
    
    //## statechart_method
    void ControllingGears_exit();
    
    //## statechart_method
    IOxfReactive::TakeEventStatus ControllingGears_processEvent();
    
    // state_17:
    //## statechart_method
    inline bool state_17_IN() const;
    
    //## statechart_method
    void state_17_entDef();
    
    //## statechart_method
    void state_17_exit();
    
    //## statechart_method
    IOxfReactive::TakeEventStatus state_17_processEvent();
    
    // WaitingFoGearingUpdate:
    //## statechart_method
    inline bool WaitingFoGearingUpdate_IN() const;
    
    // state_16:
    //## statechart_method
    inline bool state_16_IN() const;
    
    //## statechart_method
    void state_16_entDef();
    
    //## statechart_method
    void state_16_exit();
    
    //## statechart_method
    IOxfReactive::TakeEventStatus state_16_processEvent();
    
    // sendaction_9:
    //## statechart_method
    inline bool sendaction_9_IN() const;
    
    // sendaction_7:
    //## statechart_method
    inline bool sendaction_7_IN() const;
    
    // sendaction_2:
    //## statechart_method
    inline bool sendaction_2_IN() const;
    
    // sendaction_13:
    //## statechart_method
    inline bool sendaction_13_IN() const;
    
    // sendaction_12:
    //## statechart_method
    inline bool sendaction_12_IN() const;
    
    // sendaction_10:
    //## statechart_method
    inline bool sendaction_10_IN() const;
    
    // SCS_3:
    //## statechart_method
    inline bool SCS_3_IN() const;
    
    // SCS_2:
    //## statechart_method
    inline bool SCS_2_IN() const;
    
    // SCS_1:
    //## statechart_method
    inline bool SCS_1_IN() const;
    
    // MechanicalShifting:
    //## statechart_method
    inline bool MechanicalShifting_IN() const;
    
    // DIShifting:
    //## statechart_method
    inline bool DIShifting_IN() const;
    
    ////    Framework    ////

protected :

//#[ ignore
    enum GearControl_Enum {
        OMNonState = 0,
        Iniitializeing = 1,
        ControllingGears = 2,
        state_17 = 3,
        WaitingFoGearingUpdate = 4,
        state_16 = 5,
        sendaction_9 = 6,
        sendaction_7 = 7,
        sendaction_2 = 8,
        sendaction_13 = 9,
        sendaction_12 = 10,
        sendaction_10 = 11,
        SCS_3 = 12,
        SCS_2 = 13,
        SCS_1 = 14,
        MechanicalShifting = 15,
        DIShifting = 16
    };
    
    int rootState_subState;
    
    int rootState_active;
    
    int state_17_subState;
    
    int state_17_active;
    
    int state_16_subState;
    
    int state_16_active;
//#]
};

#ifdef _OMINSTRUMENT
DECLARE_OPERATION_CLASS(DesignSynthesisPkg_RiderInteractionDesignPkg_GearControl_setCurrentCassetteRing_int)

DECLARE_OPERATION_CLASS(DesignSynthesisPkg_RiderInteractionDesignPkg_GearControl_setCurrentChainRing_int)

//#[ ignore
class OMAnimatedGearControl : virtual public AOMInstance {
    DECLARE_REACTIVE_META(GearControl, OMAnimatedGearControl)
    
    DECLARE_META_OP(DesignSynthesisPkg_RiderInteractionDesignPkg_GearControl_setCurrentCassetteRing_int)
    
    DECLARE_META_OP(DesignSynthesisPkg_RiderInteractionDesignPkg_GearControl_setCurrentChainRing_int)
    
    ////    Framework operations    ////
    
public :

    virtual void serializeAttributes(AOMSAttributes* aomsAttributes) const;
    
    virtual void serializeRelations(AOMSRelations* aomsRelations) const;
    
    //## statechart_method
    void rootState_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void Iniitializeing_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void ControllingGears_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void state_17_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void WaitingFoGearingUpdate_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void state_16_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void sendaction_9_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void sendaction_7_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void sendaction_2_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void sendaction_13_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void sendaction_12_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void sendaction_10_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void SCS_3_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void SCS_2_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void SCS_1_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void MechanicalShifting_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void DIShifting_serializeStates(AOMSState* aomsState) const;
};
//#]
#endif // _OMINSTRUMENT

inline bool GearControl::rootState_IN() const {
    return true;
}

inline bool GearControl::Iniitializeing_IN() const {
    return rootState_subState == Iniitializeing;
}

inline bool GearControl::ControllingGears_IN() const {
    return rootState_subState == ControllingGears;
}

inline bool GearControl::state_17_IN() const {
    return ControllingGears_IN();
}

inline bool GearControl::WaitingFoGearingUpdate_IN() const {
    return state_17_subState == WaitingFoGearingUpdate;
}

inline bool GearControl::state_16_IN() const {
    return ControllingGears_IN();
}

inline bool GearControl::sendaction_9_IN() const {
    return state_16_subState == sendaction_9;
}

inline bool GearControl::sendaction_7_IN() const {
    return state_16_subState == sendaction_7;
}

inline bool GearControl::sendaction_2_IN() const {
    return state_16_subState == sendaction_2;
}

inline bool GearControl::sendaction_13_IN() const {
    return state_16_subState == sendaction_13;
}

inline bool GearControl::sendaction_12_IN() const {
    return state_16_subState == sendaction_12;
}

inline bool GearControl::sendaction_10_IN() const {
    return state_16_subState == sendaction_10;
}

inline bool GearControl::SCS_3_IN() const {
    return state_16_subState == SCS_3;
}

inline bool GearControl::SCS_2_IN() const {
    return state_16_subState == SCS_2;
}

inline bool GearControl::SCS_1_IN() const {
    return state_16_subState == SCS_1;
}

inline bool GearControl::MechanicalShifting_IN() const {
    return state_16_subState == MechanicalShifting;
}

inline bool GearControl::DIShifting_IN() const {
    return state_16_subState == DIShifting;
}

#endif
/*********************************************************************
	File Path	: GearShiftingComponent/GSC_Animation/GearControl.h
*********************************************************************/
