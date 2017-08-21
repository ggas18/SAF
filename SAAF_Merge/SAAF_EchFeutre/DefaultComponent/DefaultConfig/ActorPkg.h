/*********************************************************************
	Rhapsody	: 8.1.1 
	Login		: GANOU Arouna
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: ActorPkg
//!	Generated Date	: Sun, 11, Jun 2017  
	File Path	: DefaultComponent/DefaultConfig/ActorPkg.h
*********************************************************************/

#ifndef ActorPkg_H
#define ActorPkg_H

//## auto_generated
#include <oxf/oxf.h>
//## auto_generated
#include <../Profiles/SysML/SIDefinitions.h>
//## auto_generated
#include <aom/aom.h>
//## auto_generated
#include <oxf/event.h>
//#[ ignore
#define feutreUsagee_ActorPkg_id 5001

#define pasDeFeutre_ActorPkg_id 5002
//#]

//## package ActorPkg



//## event feutreUsagee()
class feutreUsagee : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedfeutreUsagee;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    feutreUsagee();
    
    ////    Framework operations    ////
    
    //## statechart_method
    virtual bool isTypeOf(const short id) const;
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedfeutreUsagee : virtual public AOMEvent {
    DECLARE_META_EVENT(feutreUsagee)
};
//#]
#endif // _OMINSTRUMENT

//## event pasDeFeutre()
class pasDeFeutre : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedpasDeFeutre;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    pasDeFeutre();
    
    ////    Framework operations    ////
    
    //## statechart_method
    virtual bool isTypeOf(const short id) const;
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedpasDeFeutre : virtual public AOMEvent {
    DECLARE_META_EVENT(pasDeFeutre)
};
//#]
#endif // _OMINSTRUMENT

#endif
/*********************************************************************
	File Path	: DefaultComponent/DefaultConfig/ActorPkg.h
*********************************************************************/
