/*********************************************************************
	Rhapsody	: 8.1.1 
	Login		: GANOU Arouna
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: InterfacesPkg
//!	Generated Date	: Tue, 6, Jun 2017  
	File Path	: DefaultComponent\DefaultConfig\InterfacesPkg.h
*********************************************************************/

#ifndef InterfacesPkg_H
#define InterfacesPkg_H

//## auto_generated
#include <oxf\oxf.h>
//## auto_generated
#include <..\Profiles\SysML\SIDefinitions.h>
//## auto_generated
#include <aom\aom.h>
//## auto_generated
#include <oxf\event.h>
//## auto_generated
class iUc_CommanderFeutres_enseignant;

//## auto_generated
class iUc_CommanderFeutres_secretaire;

//## auto_generated
class ienseignant_Uc_CommanderFeutres;

//## auto_generated
class isecretaire_Uc_CommanderFeutres;

//#[ ignore
#define reqCommande_InterfacesPkg_id 24601

#define repCommande_InterfacesPkg_id 24602

#define repCommandeSecretaire_InterfacesPkg_id 24603

#define repChargementFourniture_InterfacesPkg_id 24604

#define reqChargementFourniture_InterfacesPkg_id 24605

#define repDechargementFourniture_InterfacesPkg_id 24606

#define reqDechargementFourniture_InterfacesPkg_id 24607

#define repFournitureUsagee_InterfacesPkg_id 24608

#define reqFournitureUsagee_InterfacesPkg_id 24609
//#]

//## package InterfacesPkg



//## event reqCommande()
class reqCommande : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedreqCommande;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    reqCommande();
    
    ////    Framework operations    ////
    
    //## statechart_method
    virtual bool isTypeOf(const short id) const;
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedreqCommande : virtual public AOMEvent {
    DECLARE_META_EVENT(reqCommande)
};
//#]
#endif // _OMINSTRUMENT

//## event repCommande()
class repCommande : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedrepCommande;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    repCommande();
    
    ////    Framework operations    ////
    
    //## statechart_method
    virtual bool isTypeOf(const short id) const;
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedrepCommande : virtual public AOMEvent {
    DECLARE_META_EVENT(repCommande)
};
//#]
#endif // _OMINSTRUMENT

//## event repCommandeSecretaire()
class repCommandeSecretaire : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedrepCommandeSecretaire;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    repCommandeSecretaire();
    
    ////    Framework operations    ////
    
    //## statechart_method
    virtual bool isTypeOf(const short id) const;
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedrepCommandeSecretaire : virtual public AOMEvent {
    DECLARE_META_EVENT(repCommandeSecretaire)
};
//#]
#endif // _OMINSTRUMENT

//## event repChargementFourniture()
class repChargementFourniture : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedrepChargementFourniture;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    repChargementFourniture();
    
    ////    Framework operations    ////
    
    //## statechart_method
    virtual bool isTypeOf(const short id) const;
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedrepChargementFourniture : virtual public AOMEvent {
    DECLARE_META_EVENT(repChargementFourniture)
};
//#]
#endif // _OMINSTRUMENT

//## event reqChargementFourniture()
class reqChargementFourniture : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedreqChargementFourniture;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    reqChargementFourniture();
    
    ////    Framework operations    ////
    
    //## statechart_method
    virtual bool isTypeOf(const short id) const;
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedreqChargementFourniture : virtual public AOMEvent {
    DECLARE_META_EVENT(reqChargementFourniture)
};
//#]
#endif // _OMINSTRUMENT

//## event repDechargementFourniture()
class repDechargementFourniture : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedrepDechargementFourniture;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    repDechargementFourniture();
    
    ////    Framework operations    ////
    
    //## statechart_method
    virtual bool isTypeOf(const short id) const;
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedrepDechargementFourniture : virtual public AOMEvent {
    DECLARE_META_EVENT(repDechargementFourniture)
};
//#]
#endif // _OMINSTRUMENT

//## event reqDechargementFourniture()
class reqDechargementFourniture : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedreqDechargementFourniture;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    reqDechargementFourniture();
    
    ////    Framework operations    ////
    
    //## statechart_method
    virtual bool isTypeOf(const short id) const;
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedreqDechargementFourniture : virtual public AOMEvent {
    DECLARE_META_EVENT(reqDechargementFourniture)
};
//#]
#endif // _OMINSTRUMENT

//## event repFournitureUsagee()
class repFournitureUsagee : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedrepFournitureUsagee;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    repFournitureUsagee();
    
    ////    Framework operations    ////
    
    //## statechart_method
    virtual bool isTypeOf(const short id) const;
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedrepFournitureUsagee : virtual public AOMEvent {
    DECLARE_META_EVENT(repFournitureUsagee)
};
//#]
#endif // _OMINSTRUMENT

//## event reqFournitureUsagee()
class reqFournitureUsagee : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedreqFournitureUsagee;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    reqFournitureUsagee();
    
    ////    Framework operations    ////
    
    //## statechart_method
    virtual bool isTypeOf(const short id) const;
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedreqFournitureUsagee : virtual public AOMEvent {
    DECLARE_META_EVENT(reqFournitureUsagee)
};
//#]
#endif // _OMINSTRUMENT

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\InterfacesPkg.h
*********************************************************************/
