/*********************************************************************
	Rhapsody	: 9.0 
	Login		: Bruce
	Component	: GearShiftingComponent 
	Configuration 	: GSC_Animation
	Model Element	: RiderApplication
//!	Generated Date	: Sat, 28, Nov 2020  
	File Path	: GearShiftingComponent/GSC_Animation/RiderApplication.h
*********************************************************************/

#ifndef RiderApplication_H
#define RiderApplication_H

//## auto_generated
#include <oxf/oxf.h>
//## auto_generated
#include <../Profiles/SysML/SIDefinitions.h>
//## auto_generated
#include <aom/aom.h>
//## auto_generated
#include "RiderInteractionDesignPkg.h"
//## class RiderApplication
#include "evDIDown_ProxyReceptionInterface.h"
//## class RiderApplication
#include "evDIUp_ProxyReceptionInterface.h"
//## class RiderApplication
#include "evLeftShiftDown_ProxyReceptionInterface.h"
//## class RiderApplication
#include "evLeftShiftUp_ProxyReceptionInterface.h"
//## class RiderApplication
#include "evRightShiftDown_ProxyReceptionInterface.h"
//## class RiderApplication
#include "evRightShiftUp_ProxyReceptionInterface.h"
//## class OutBound
#include "evDIShifting_ProxyReceptionInterface.h"
//## class OutBound
#include "evDisplayGearing_ProxyReceptionInterface.h"
//## class OutBound
#include "evMechanicalShifting_ProxyReceptionInterface.h"
//#[ ignore
#define OMAnim_DesignSynthesisPkg_RiderInteractionDesignPkg_RiderApplication_setCassetteRingNumber_int_ARGS_DECLARATION int p_cassetteRingNumber;

#define OMAnim_DesignSynthesisPkg_RiderInteractionDesignPkg_RiderApplication_setChainRingNumber_int_ARGS_DECLARATION int p_chainRingNumber;

#define OMAnim_DesignSynthesisPkg_RiderInteractionDesignPkg_RiderApplication_setUseMechanicalShifting_bool_ARGS_DECLARATION bool p_useMechanicalShifting;
//#]

//## package DesignSynthesisPkg::RiderInteractionDesignPkg

//## class RiderApplication
class RiderApplication : public evDIDown_ProxyReceptionInterface, public evDIUp_ProxyReceptionInterface, public evLeftShiftDown_ProxyReceptionInterface, public evLeftShiftUp_ProxyReceptionInterface, public evRightShiftDown_ProxyReceptionInterface, public evRightShiftUp_ProxyReceptionInterface {
public :

//#[ ignore
    //## package DesignSynthesisPkg::RiderInteractionDesignPkg
    class pRiderShift_C {
    public :
    
        //## auto_generated
        class InBound_C;
        
        //## auto_generated
        class OutBound_C;
        
        //## package DesignSynthesisPkg::RiderInteractionDesignPkg
        class InBound_C : public evDIDown_ProxyReceptionInterface, public evDIUp_ProxyReceptionInterface, public evLeftShiftDown_ProxyReceptionInterface, public evLeftShiftUp_ProxyReceptionInterface, public evRightShiftDown_ProxyReceptionInterface, public evRightShiftUp_ProxyReceptionInterface {
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
            void setItsEvDIDown_ProxyReceptionInterface(evDIDown_ProxyReceptionInterface* p_evDIDown_ProxyReceptionInterface);
            
            //## auto_generated
            void setItsEvDIUp_ProxyReceptionInterface(evDIUp_ProxyReceptionInterface* p_evDIUp_ProxyReceptionInterface);
            
            //## auto_generated
            void setItsEvLeftShiftDown_ProxyReceptionInterface(evLeftShiftDown_ProxyReceptionInterface* p_evLeftShiftDown_ProxyReceptionInterface);
            
            //## auto_generated
            void setItsEvLeftShiftUp_ProxyReceptionInterface(evLeftShiftUp_ProxyReceptionInterface* p_evLeftShiftUp_ProxyReceptionInterface);
            
            //## auto_generated
            void setItsEvRightShiftDown_ProxyReceptionInterface(evRightShiftDown_ProxyReceptionInterface* p_evRightShiftDown_ProxyReceptionInterface);
            
            //## auto_generated
            void setItsEvRightShiftUp_ProxyReceptionInterface(evRightShiftUp_ProxyReceptionInterface* p_evRightShiftUp_ProxyReceptionInterface);
            
            //## auto_generated
            pRiderShift_C* getPort() const;
            
            //## auto_generated
            void setPort(pRiderShift_C* p_pRiderShift_C);
        
        protected :
        
            //## auto_generated
            void cleanUpRelations();
            
            ////    Relations and components    ////
            
            evDIDown_ProxyReceptionInterface* itsEvDIDown_ProxyReceptionInterface;		//## link itsEvDIDown_ProxyReceptionInterface
            
            evDIUp_ProxyReceptionInterface* itsEvDIUp_ProxyReceptionInterface;		//## link itsEvDIUp_ProxyReceptionInterface
            
            evLeftShiftDown_ProxyReceptionInterface* itsEvLeftShiftDown_ProxyReceptionInterface;		//## link itsEvLeftShiftDown_ProxyReceptionInterface
            
            evLeftShiftUp_ProxyReceptionInterface* itsEvLeftShiftUp_ProxyReceptionInterface;		//## link itsEvLeftShiftUp_ProxyReceptionInterface
            
            evRightShiftDown_ProxyReceptionInterface* itsEvRightShiftDown_ProxyReceptionInterface;		//## link itsEvRightShiftDown_ProxyReceptionInterface
            
            evRightShiftUp_ProxyReceptionInterface* itsEvRightShiftUp_ProxyReceptionInterface;		//## link itsEvRightShiftUp_ProxyReceptionInterface
            
            pRiderShift_C* port;		//## link port
            
            ////    Framework operations    ////
        
        public :
        
            //## auto_generated
            void __setPort(pRiderShift_C* p_pRiderShift_C);
            
            //## auto_generated
            void _setPort(pRiderShift_C* p_pRiderShift_C);
            
            //## auto_generated
            void _clearPort();
        };
        
        //## package DesignSynthesisPkg::RiderInteractionDesignPkg
        class OutBound_C : public evDIShifting_ProxyReceptionInterface, public evMechanicalShifting_ProxyReceptionInterface, public evDisplayGearing_ProxyReceptionInterface {
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
            void setItsEvDIShifting_ProxyReceptionInterface(OMReactive* p_OMReactive);
            
            //## auto_generated
            void setItsEvDisplayGearing_ProxyReceptionInterface(OMReactive* p_OMReactive);
            
            //## auto_generated
            void setItsEvMechanicalShifting_ProxyReceptionInterface(OMReactive* p_OMReactive);
        
        protected :
        
            //## auto_generated
            void cleanUpRelations();
            
            ////    Relations and components    ////
            
            OMReactive* itsEvDIShifting_ProxyReceptionInterface;		//## link itsEvDIShifting_ProxyReceptionInterface
            
            OMReactive* itsEvDisplayGearing_ProxyReceptionInterface;		//## link itsEvDisplayGearing_ProxyReceptionInterface
            
            OMReactive* itsEvMechanicalShifting_ProxyReceptionInterface;		//## link itsEvMechanicalShifting_ProxyReceptionInterface
        };
        
        ////    Constructors and destructors    ////
        
        //## auto_generated
        pRiderShift_C();
        
        //## auto_generated
        virtual ~pRiderShift_C();
        
        ////    Operations    ////
        
        //## auto_generated
        void connectRiderApplication(RiderApplication* part);
        
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
        void setItsEvDIDown_ProxyReceptionInterface(evDIDown_ProxyReceptionInterface* p_evDIDown_ProxyReceptionInterface);
        
        //## auto_generated
        void setItsEvDIShifting_ProxyReceptionInterface(OMReactive* p_evDIShifting_ProxyReceptionInterface);
        
        //## auto_generated
        void setItsEvDIUp_ProxyReceptionInterface(evDIUp_ProxyReceptionInterface* p_evDIUp_ProxyReceptionInterface);
        
        //## auto_generated
        void setItsEvDisplayGearing_ProxyReceptionInterface(OMReactive* p_evDisplayGearing_ProxyReceptionInterface);
        
        //## auto_generated
        void setItsEvLeftShiftDown_ProxyReceptionInterface(evLeftShiftDown_ProxyReceptionInterface* p_evLeftShiftDown_ProxyReceptionInterface);
        
        //## auto_generated
        void setItsEvLeftShiftUp_ProxyReceptionInterface(evLeftShiftUp_ProxyReceptionInterface* p_evLeftShiftUp_ProxyReceptionInterface);
        
        //## auto_generated
        void setItsEvMechanicalShifting_ProxyReceptionInterface(OMReactive* p_evMechanicalShifting_ProxyReceptionInterface);
        
        //## auto_generated
        void setItsEvRightShiftDown_ProxyReceptionInterface(evRightShiftDown_ProxyReceptionInterface* p_evRightShiftDown_ProxyReceptionInterface);
        
        //## auto_generated
        void setItsEvRightShiftUp_ProxyReceptionInterface(evRightShiftUp_ProxyReceptionInterface* p_evRightShiftUp_ProxyReceptionInterface);
        
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
    friend class OMAnimatedRiderApplication;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    RiderApplication(IOxfActive* theActiveContext = 0);
    
    //## auto_generated
    virtual ~RiderApplication();
    
    ////    Operations    ////
    
    //## operation augmentCassetteRing()
    virtual void augmentCassetteRing();
    
    //## operation augmentChainRing()
    virtual void augmentChainRing();
    
    //## operation decrementCassetteRing()
    virtual void decrementCassetteRing();
    
    //## operation decrementChainRing()
    virtual void decrementChainRing();
    
    ////    Additional operations    ////
    
    //## auto_generated
    pRiderShift_C* getPRiderShift() const;
    
    //## auto_generated
    pRiderShift_C* get_pRiderShift() const;
    
    //## auto_generated
    int getCassetteRingNumber() const;
    
    //## auto_generated
    void setCassetteRingNumber(int p_cassetteRingNumber);
    
    //## auto_generated
    int getChainRingNumber() const;
    
    //## auto_generated
    void setChainRingNumber(int p_chainRingNumber);
    
    //## auto_generated
    int getMaxCassetteRings() const;
    
    //## auto_generated
    void setMaxCassetteRings(int p_maxCassetteRings);
    
    //## auto_generated
    int getMaxChainRings() const;
    
    //## auto_generated
    void setMaxChainRings(int p_maxChainRings);
    
    //## auto_generated
    bool getUseMechanicalShifting() const;
    
    //## auto_generated
    void setUseMechanicalShifting(bool p_useMechanicalShifting);
    
    //## auto_generated
    virtual bool startBehavior();

protected :

    //## auto_generated
    void initRelations();
    
    //## auto_generated
    void initStatechart();
    
    ////    Attributes    ////
    
    int cassetteRingNumber;		//## attribute cassetteRingNumber
    
    int chainRingNumber;		//## attribute chainRingNumber
    
    int maxCassetteRings;		//## attribute maxCassetteRings
    
    int maxChainRings;		//## attribute maxChainRings
    
    bool useMechanicalShifting;		//## attribute useMechanicalShifting
    
    ////    Relations and components    ////
    
//#[ ignore
    pRiderShift_C pRiderShift;
//#]

    ////    Framework operations    ////

public :

    // rootState:
    //## statechart_method
    inline bool rootState_IN() const;
    
    //## statechart_method
    virtual void rootState_entDef();
    
    //## statechart_method
    virtual IOxfReactive::TakeEventStatus rootState_processEvent();
    
    // sendaction_5:
    //## statechart_method
    inline bool sendaction_5_IN() const;
    
    // sendaction_4:
    //## statechart_method
    inline bool sendaction_4_IN() const;
    
    // sendaction_3:
    //## statechart_method
    inline bool sendaction_3_IN() const;
    
    // Off:
    //## statechart_method
    inline bool Off_IN() const;
    
    // MechanicalShifting:
    //## statechart_method
    inline bool MechanicalShifting_IN() const;
    
    //## statechart_method
    IOxfReactive::TakeEventStatus MechanicalShifting_handleEvent();
    
    // DIShifting:
    //## statechart_method
    inline bool DIShifting_IN() const;
    
    ////    Framework    ////

protected :

//#[ ignore
    enum RiderApplication_Enum {
        OMNonState = 0,
        sendaction_5 = 1,
        sendaction_4 = 2,
        sendaction_3 = 3,
        Off = 4,
        MechanicalShifting = 5,
        DIShifting = 6
    };
    
    int rootState_subState;
    
    int rootState_active;
//#]
};

#ifdef _OMINSTRUMENT
DECLARE_OPERATION_CLASS(DesignSynthesisPkg_RiderInteractionDesignPkg_RiderApplication_setCassetteRingNumber_int)

DECLARE_OPERATION_CLASS(DesignSynthesisPkg_RiderInteractionDesignPkg_RiderApplication_setChainRingNumber_int)

DECLARE_OPERATION_CLASS(DesignSynthesisPkg_RiderInteractionDesignPkg_RiderApplication_setUseMechanicalShifting_bool)

//#[ ignore
class OMAnimatedRiderApplication : virtual public AOMInstance {
    DECLARE_REACTIVE_META(RiderApplication, OMAnimatedRiderApplication)
    
    DECLARE_META_OP(DesignSynthesisPkg_RiderInteractionDesignPkg_RiderApplication_setCassetteRingNumber_int)
    
    DECLARE_META_OP(DesignSynthesisPkg_RiderInteractionDesignPkg_RiderApplication_setChainRingNumber_int)
    
    DECLARE_META_OP(DesignSynthesisPkg_RiderInteractionDesignPkg_RiderApplication_setUseMechanicalShifting_bool)
    
    ////    Framework operations    ////
    
public :

    virtual void serializeAttributes(AOMSAttributes* aomsAttributes) const;
    
    virtual void serializeRelations(AOMSRelations* aomsRelations) const;
    
    //## statechart_method
    void rootState_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void sendaction_5_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void sendaction_4_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void sendaction_3_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void Off_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void MechanicalShifting_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void DIShifting_serializeStates(AOMSState* aomsState) const;
};
//#]
#endif // _OMINSTRUMENT

inline bool RiderApplication::rootState_IN() const {
    return true;
}

inline bool RiderApplication::sendaction_5_IN() const {
    return rootState_subState == sendaction_5;
}

inline bool RiderApplication::sendaction_4_IN() const {
    return rootState_subState == sendaction_4;
}

inline bool RiderApplication::sendaction_3_IN() const {
    return rootState_subState == sendaction_3;
}

inline bool RiderApplication::Off_IN() const {
    return rootState_subState == Off;
}

inline bool RiderApplication::MechanicalShifting_IN() const {
    return rootState_subState == MechanicalShifting;
}

inline bool RiderApplication::DIShifting_IN() const {
    return rootState_subState == DIShifting;
}

#endif
/*********************************************************************
	File Path	: GearShiftingComponent/GSC_Animation/RiderApplication.h
*********************************************************************/
