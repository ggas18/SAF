/*********************************************************************
	Rhapsody	: 8.1.1 
	Login		: GANOU Arouna
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: ActorPkg
//!	Generated Date	: Thu, 8, Jun 2017  
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
#define reqEchangeFeutre_ActorPkg_id 5001

#define reqDechargementFournitureEchangee_ActorPkg_id 5002

#define repEchangeSecretaire_ActorPkg_id 5003
//#]

//## package ActorPkg



//## event reqEchangeFeutre()
class reqEchangeFeutre : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedreqEchangeFeutre;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    reqEchangeFeutre();
    
    ////    Framework operations    ////
    
    //## statechart_method
    virtual bool isTypeOf(const short id) const;
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedreqEchangeFeutre : virtual public AOMEvent {
    DECLARE_META_EVENT(reqEchangeFeutre)
};
//#]
#endif // _OMINSTRUMENT

//## event reqDechargementFournitureEchangee()
class reqDechargementFournitureEchangee : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedreqDechargementFournitureEchangee;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    reqDechargementFournitureEchangee();
    
    ////    Framework operations    ////
    
    //## statechart_method
    virtual bool isTypeOf(const short id) const;
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedreqDechargementFournitureEchangee : virtual public AOMEvent {
    DECLARE_META_EVENT(reqDechargementFournitureEchangee)
};
//#]
#endif // _OMINSTRUMENT

//## event repEchangeSecretaire()
class repEchangeSecretaire : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedrepEchangeSecretaire;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    repEchangeSecretaire();
    
    ////    Framework operations    ////
    
    //## statechart_method
    virtual bool isTypeOf(const short id) const;
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedrepEchangeSecretaire : virtual public AOMEvent {
    DECLARE_META_EVENT(repEchangeSecretaire)
};
//#]
#endif // _OMINSTRUMENT

#endif
/*********************************************************************
	File Path	: DefaultComponent/DefaultConfig/ActorPkg.h
*********************************************************************/
