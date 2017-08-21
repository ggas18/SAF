/*********************************************************************
	Rhapsody	: 8.1.1 
	Login		: GANOU Arouna
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: InterfacesPkg
//!	Generated Date	: Thu, 8, Jun 2017  
	File Path	: DefaultComponent/DefaultConfig/InterfacesPkg.h
*********************************************************************/

#ifndef InterfacesPkg_H
#define InterfacesPkg_H

//## auto_generated
#include <oxf/oxf.h>
//## auto_generated
#include <../Profiles/SysML/SIDefinitions.h>
//## auto_generated
#include <aom/aom.h>
//## auto_generated
#include <oxf/event.h>
//## auto_generated
class iUc_CommanderFeutres_enseignant;

//## auto_generated
class iUc_CommanderFeutres_secretaire;

//## auto_generated
class iUc_EchangerFeutres_enseignant;

//## auto_generated
class iUc_EchangerFeutres_secretaire;

//## auto_generated
class ienseignant_Uc_CommanderFeutres;

//## auto_generated
class ienseignant_Uc_EchangerFeutres;

//## auto_generated
class isecretaire_Uc_CommanderFeutres;

//## auto_generated
class isecretaire_Uc_EchangerFeutres;

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

#define repChargementFournitureUsagee_InterfacesPkg_id 24610

#define reqChargementFournitureUsagee_InterfacesPkg_id 24611

#define repDechargementFournitureUsagee_InterfacesPkg_id 24612

#define reqDechargementFournitureUsagee_InterfacesPkg_id 24613

#define reqEchange_InterfacesPkg_id 24614

#define repEchange_InterfacesPkg_id 24615

#define repEchangeFourniture_InterfacesPkg_id 24616

#define reqEchangeFourniture_InterfacesPkg_id 24617

#define repEchangeSecretaire_InterfacesPkg_id 24618
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

//## event repFournitureUsagee(OMBoolean)
class repFournitureUsagee : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedrepFournitureUsagee;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    repFournitureUsagee();
    
    //## auto_generated
    repFournitureUsagee(OMBoolean p_retour);
    
    ////    Framework operations    ////
    
    //## statechart_method
    virtual bool isTypeOf(const short id) const;
    
    ////    Framework    ////
    
    OMBoolean retour;		//## auto_generated
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

//## event repChargementFournitureUsagee()
class repChargementFournitureUsagee : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedrepChargementFournitureUsagee;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    repChargementFournitureUsagee();
    
    ////    Framework operations    ////
    
    //## statechart_method
    virtual bool isTypeOf(const short id) const;
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedrepChargementFournitureUsagee : virtual public AOMEvent {
    DECLARE_META_EVENT(repChargementFournitureUsagee)
};
//#]
#endif // _OMINSTRUMENT

//## event reqChargementFournitureUsagee()
class reqChargementFournitureUsagee : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedreqChargementFournitureUsagee;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    reqChargementFournitureUsagee();
    
    ////    Framework operations    ////
    
    //## statechart_method
    virtual bool isTypeOf(const short id) const;
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedreqChargementFournitureUsagee : virtual public AOMEvent {
    DECLARE_META_EVENT(reqChargementFournitureUsagee)
};
//#]
#endif // _OMINSTRUMENT

//## event repDechargementFournitureUsagee()
class repDechargementFournitureUsagee : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedrepDechargementFournitureUsagee;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    repDechargementFournitureUsagee();
    
    ////    Framework operations    ////
    
    //## statechart_method
    virtual bool isTypeOf(const short id) const;
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedrepDechargementFournitureUsagee : virtual public AOMEvent {
    DECLARE_META_EVENT(repDechargementFournitureUsagee)
};
//#]
#endif // _OMINSTRUMENT

//## event reqDechargementFournitureUsagee()
class reqDechargementFournitureUsagee : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedreqDechargementFournitureUsagee;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    reqDechargementFournitureUsagee();
    
    ////    Framework operations    ////
    
    //## statechart_method
    virtual bool isTypeOf(const short id) const;
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedreqDechargementFournitureUsagee : virtual public AOMEvent {
    DECLARE_META_EVENT(reqDechargementFournitureUsagee)
};
//#]
#endif // _OMINSTRUMENT

//## event reqEchange()
class reqEchange : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedreqEchange;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    reqEchange();
    
    ////    Framework operations    ////
    
    //## statechart_method
    virtual bool isTypeOf(const short id) const;
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedreqEchange : virtual public AOMEvent {
    DECLARE_META_EVENT(reqEchange)
};
//#]
#endif // _OMINSTRUMENT

//## event repEchange()
class repEchange : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedrepEchange;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    repEchange();
    
    ////    Framework operations    ////
    
    //## statechart_method
    virtual bool isTypeOf(const short id) const;
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedrepEchange : virtual public AOMEvent {
    DECLARE_META_EVENT(repEchange)
};
//#]
#endif // _OMINSTRUMENT

//## event repEchangeFourniture()
class repEchangeFourniture : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedrepEchangeFourniture;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    repEchangeFourniture();
    
    ////    Framework operations    ////
    
    //## statechart_method
    virtual bool isTypeOf(const short id) const;
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedrepEchangeFourniture : virtual public AOMEvent {
    DECLARE_META_EVENT(repEchangeFourniture)
};
//#]
#endif // _OMINSTRUMENT

//## event reqEchangeFourniture()
class reqEchangeFourniture : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedreqEchangeFourniture;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    reqEchangeFourniture();
    
    ////    Framework operations    ////
    
    //## statechart_method
    virtual bool isTypeOf(const short id) const;
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedreqEchangeFourniture : virtual public AOMEvent {
    DECLARE_META_EVENT(reqEchangeFourniture)
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
	File Path	: DefaultComponent/DefaultConfig/InterfacesPkg.h
*********************************************************************/
