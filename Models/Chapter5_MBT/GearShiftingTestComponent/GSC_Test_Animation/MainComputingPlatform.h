/*********************************************************************
	Rhapsody	: 9.0 
	Login		: Bruce
	Component	: GearShiftingTestComponent 
	Configuration 	: GSC_Test_Animation
	Model Element	: MainComputingPlatform
//!	Generated Date	: Sat, 28, Nov 2020  
	File Path	: GearShiftingTestComponent/GSC_Test_Animation/MainComputingPlatform.h
*********************************************************************/

#ifndef MainComputingPlatform_H
#define MainComputingPlatform_H

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
//## classInstance itsRiderApplication
#include "RiderApplication.h"
//## class InBound
#include "evDIDown_ProxyReceptionInterface.h"
//## class InBound
#include "evDIUp_ProxyReceptionInterface.h"
//## class InBound
#include "evLeftShiftDown_ProxyReceptionInterface.h"
//## class InBound
#include "evLeftShiftUp_ProxyReceptionInterface.h"
//## class InBound
#include "evRightShiftDown_ProxyReceptionInterface.h"
//## class InBound
#include "evRightShiftUp_ProxyReceptionInterface.h"
//## class OutBound
#include "evDIShifting_ProxyReceptionInterface.h"
//## class OutBound
#include "evDisplayGearing_ProxyReceptionInterface.h"
//## class OutBound
#include "evMechanicalShifting_ProxyReceptionInterface.h"
//## package DesignSynthesisPkg::RiderInteractionDesignPkg

//## class MainComputingPlatform
class MainComputingPlatform : public OMReactive {
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
        
        ////    Attributes    ////
    
    private :
    
        int _p_;		//## attribute _p_
        
        ////    Relations and components    ////
    
    protected :
    
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
    friend class OMAnimatedMainComputingPlatform;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    MainComputingPlatform(IOxfActive* theActiveContext = 0);
    
    //## auto_generated
    ~MainComputingPlatform();
    
    ////    Additional operations    ////
    
    //## auto_generated
    pRiderShift_C* getPRiderShift() const;
    
    //## auto_generated
    pRiderShift_C* get_pRiderShift() const;
    
    //## auto_generated
    RiderApplication* getItsRiderApplication() const;
    
    //## auto_generated
    virtual bool startBehavior();

protected :

    //## auto_generated
    void initRelations();
    
    ////    Relations and components    ////
    
//#[ ignore
    pRiderShift_C pRiderShift;
//#]

    RiderApplication itsRiderApplication;		//## classInstance itsRiderApplication
    
    ////    Framework operations    ////

public :

    //## auto_generated
    void setActiveContext(IOxfActive* theActiveContext, bool activeInstance);
    
    //## auto_generated
    virtual void destroy();
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedMainComputingPlatform : virtual public AOMInstance {
    DECLARE_META(MainComputingPlatform, OMAnimatedMainComputingPlatform)
    
    ////    Framework operations    ////
    
public :

    virtual void serializeRelations(AOMSRelations* aomsRelations) const;
};
//#]
#endif // _OMINSTRUMENT

#endif
/*********************************************************************
	File Path	: GearShiftingTestComponent/GSC_Test_Animation/MainComputingPlatform.h
*********************************************************************/
