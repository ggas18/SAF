/********************************************************************
	Rhapsody	: 8.1.1 
	Login		: ganou2u
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: secretaire
//!	Generated Date	: Thu, 8, Jun 2017  
	File Path	: DefaultComponent\DefaultConfig\secretaire.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "secretaire.h"
//## event repCommandeSecretaire()
#include "InterfacesPkg.h"
//#[ ignore
#define ActorPkg_secretaire_secretaire_SERIALIZE OM_NO_OP
//#]

//## package ActorPkg

//## actor secretaire
//#[ ignore
secretaire::pUc_CommanderFeutres_C::InBound_C::InBound_C() {
    itsIUc_CommanderFeutres_secretaire = NULL;
    port = NULL;
}

secretaire::pUc_CommanderFeutres_C::InBound_C::~InBound_C() {
    cleanUpRelations();
}

bool secretaire::pUc_CommanderFeutres_C::InBound_C::send(IOxfEvent* event, const IOxfEventGenerationParams& params) {
    bool res = false;
    if (event != NULL) {
        event->setPort(getPort());
        if (itsIUc_CommanderFeutres_secretaire != NULL) {
            if (event->isTypeOf(repCommandeSecretaire_InterfacesPkg_id)) {
                res = itsIUc_CommanderFeutres_secretaire->send(event, params);
                return res;
            }
            if (event->isTypeOf(reqChargementFourniture_InterfacesPkg_id)) {
                res = itsIUc_CommanderFeutres_secretaire->send(event, params);
                return res;
            }
            if (event->isTypeOf(reqDechargementFournitureUsagee_InterfacesPkg_id)) {
                res = itsIUc_CommanderFeutres_secretaire->send(event, params);
                return res;
            }
        }
    }
    return res;
    
}

bool secretaire::pUc_CommanderFeutres_C::InBound_C::send(IOxfEvent* event) {
    bool res = false;
    if (event != NULL) {
        event->setPort(getPort());
        if (itsIUc_CommanderFeutres_secretaire != NULL) {
            if (event->isTypeOf(repCommandeSecretaire_InterfacesPkg_id)) {
                res = itsIUc_CommanderFeutres_secretaire->send(event);
                return res;
            }
            if (event->isTypeOf(reqChargementFourniture_InterfacesPkg_id)) {
                res = itsIUc_CommanderFeutres_secretaire->send(event);
                return res;
            }
            if (event->isTypeOf(reqDechargementFournitureUsagee_InterfacesPkg_id)) {
                res = itsIUc_CommanderFeutres_secretaire->send(event);
                return res;
            }
        }
    }
    return res;
    
}

void secretaire::pUc_CommanderFeutres_C::InBound_C::setItsIUc_CommanderFeutres_secretaire(iUc_CommanderFeutres_secretaire* p_iUc_CommanderFeutres_secretaire) {
    itsIUc_CommanderFeutres_secretaire = p_iUc_CommanderFeutres_secretaire;
}

secretaire::pUc_CommanderFeutres_C* secretaire::pUc_CommanderFeutres_C::InBound_C::getPort() const {
    return port;
}

void secretaire::pUc_CommanderFeutres_C::InBound_C::setPort(secretaire::pUc_CommanderFeutres_C* p_pUc_CommanderFeutres_C) {
    _setPort(p_pUc_CommanderFeutres_C);
}

void secretaire::pUc_CommanderFeutres_C::InBound_C::cleanUpRelations() {
    if(itsIUc_CommanderFeutres_secretaire != NULL)
        {
            itsIUc_CommanderFeutres_secretaire = NULL;
        }
    if(port != NULL)
        {
            port = NULL;
        }
}

void secretaire::pUc_CommanderFeutres_C::InBound_C::__setPort(secretaire::pUc_CommanderFeutres_C* p_pUc_CommanderFeutres_C) {
    port = p_pUc_CommanderFeutres_C;
}

void secretaire::pUc_CommanderFeutres_C::InBound_C::_setPort(secretaire::pUc_CommanderFeutres_C* p_pUc_CommanderFeutres_C) {
    __setPort(p_pUc_CommanderFeutres_C);
}

void secretaire::pUc_CommanderFeutres_C::InBound_C::_clearPort() {
    port = NULL;
}

secretaire::pUc_CommanderFeutres_C::OutBound_C::OutBound_C() {
    itsIsecretaire_Uc_CommanderFeutres = NULL;
}

secretaire::pUc_CommanderFeutres_C::OutBound_C::~OutBound_C() {
    cleanUpRelations();
}

bool secretaire::pUc_CommanderFeutres_C::OutBound_C::send(IOxfEvent* event, const IOxfEventGenerationParams& params) {
    bool res = false;
    if (event != NULL) {
        if (itsIsecretaire_Uc_CommanderFeutres != NULL) {
            if (event->isTypeOf(repChargementFourniture_InterfacesPkg_id)) {
                res = itsIsecretaire_Uc_CommanderFeutres->send(event, params);
                return res;
            }
            if (event->isTypeOf(repDechargementFournitureUsagee_InterfacesPkg_id)) {
                res = itsIsecretaire_Uc_CommanderFeutres->send(event, params);
                return res;
            }
        }
    }
    return res;
    
}

bool secretaire::pUc_CommanderFeutres_C::OutBound_C::send(IOxfEvent* event) {
    bool res = false;
    if (event != NULL) {
        if (itsIsecretaire_Uc_CommanderFeutres != NULL) {
            if (event->isTypeOf(repChargementFourniture_InterfacesPkg_id)) {
                res = itsIsecretaire_Uc_CommanderFeutres->send(event);
                return res;
            }
            if (event->isTypeOf(repDechargementFournitureUsagee_InterfacesPkg_id)) {
                res = itsIsecretaire_Uc_CommanderFeutres->send(event);
                return res;
            }
        }
    }
    return res;
    
}

void secretaire::pUc_CommanderFeutres_C::OutBound_C::setItsIsecretaire_Uc_CommanderFeutres(OMReactive* p_OMReactive) {
    itsIsecretaire_Uc_CommanderFeutres = p_OMReactive;
}

void secretaire::pUc_CommanderFeutres_C::OutBound_C::cleanUpRelations() {
    if(itsIsecretaire_Uc_CommanderFeutres != NULL)
        {
            itsIsecretaire_Uc_CommanderFeutres = NULL;
        }
}

secretaire::pUc_CommanderFeutres_C::pUc_CommanderFeutres_C() : _p_(0) {
    initRelations();
}

secretaire::pUc_CommanderFeutres_C::~pUc_CommanderFeutres_C() {
}

void secretaire::pUc_CommanderFeutres_C::connectSecretaire(secretaire* part) {
    InBound.setItsIUc_CommanderFeutres_secretaire(part);
    InBound.setPort(this); // for IS_PORT macro support
    
}

iUc_CommanderFeutres_secretaire* secretaire::pUc_CommanderFeutres_C::getItsIUc_CommanderFeutres_secretaire() {
    return &InBound;
}

isecretaire_Uc_CommanderFeutres* secretaire::pUc_CommanderFeutres_C::getItsIsecretaire_Uc_CommanderFeutres() {
    return &OutBound;
}

void secretaire::pUc_CommanderFeutres_C::setItsIUc_CommanderFeutres_secretaire(iUc_CommanderFeutres_secretaire* p_iUc_CommanderFeutres_secretaire) {
    InBound.setItsIUc_CommanderFeutres_secretaire(p_iUc_CommanderFeutres_secretaire);
}

void secretaire::pUc_CommanderFeutres_C::setItsIsecretaire_Uc_CommanderFeutres(OMReactive* p_isecretaire_Uc_CommanderFeutres) {
    OutBound.setItsIsecretaire_Uc_CommanderFeutres(p_isecretaire_Uc_CommanderFeutres);
}

secretaire::pUc_CommanderFeutres_C::InBound_C* secretaire::pUc_CommanderFeutres_C::getInBound() const {
    return (secretaire::pUc_CommanderFeutres_C::InBound_C*) &InBound;
}

secretaire::pUc_CommanderFeutres_C::OutBound_C* secretaire::pUc_CommanderFeutres_C::getOutBound() const {
    return (secretaire::pUc_CommanderFeutres_C::OutBound_C*) &OutBound;
}

void secretaire::pUc_CommanderFeutres_C::initRelations() {
    InBound._setPort(this);
}

void secretaire::pUc_CommanderFeutres_C::destroy() {
}

secretaire::pUc_EchangerFeutres_C::InBound_C::InBound_C() {
    itsIUc_EchangerFeutres_secretaire = NULL;
    port = NULL;
}

secretaire::pUc_EchangerFeutres_C::InBound_C::~InBound_C() {
    cleanUpRelations();
}

bool secretaire::pUc_EchangerFeutres_C::InBound_C::send(IOxfEvent* event, const IOxfEventGenerationParams& params) {
    bool res = false;
    if (event != NULL) {
        event->setPort(getPort());
        if (itsIUc_EchangerFeutres_secretaire != NULL) {
            if (event->isTypeOf(repEchange_InterfacesPkg_id)) {
                res = itsIUc_EchangerFeutres_secretaire->send(event, params);
                return res;
            }
            if (event->isTypeOf(reqEchangeFourniture_InterfacesPkg_id)) {
                res = itsIUc_EchangerFeutres_secretaire->send(event, params);
                return res;
            }
            if (event->isTypeOf(repEchangeSecretaire_InterfacesPkg_id)) {
                res = itsIUc_EchangerFeutres_secretaire->send(event, params);
                return res;
            }
        }
    }
    return res;
    
}

bool secretaire::pUc_EchangerFeutres_C::InBound_C::send(IOxfEvent* event) {
    bool res = false;
    if (event != NULL) {
        event->setPort(getPort());
        if (itsIUc_EchangerFeutres_secretaire != NULL) {
            if (event->isTypeOf(repEchange_InterfacesPkg_id)) {
                res = itsIUc_EchangerFeutres_secretaire->send(event);
                return res;
            }
            if (event->isTypeOf(reqEchangeFourniture_InterfacesPkg_id)) {
                res = itsIUc_EchangerFeutres_secretaire->send(event);
                return res;
            }
            if (event->isTypeOf(repEchangeSecretaire_InterfacesPkg_id)) {
                res = itsIUc_EchangerFeutres_secretaire->send(event);
                return res;
            }
        }
    }
    return res;
    
}

void secretaire::pUc_EchangerFeutres_C::InBound_C::setItsIUc_EchangerFeutres_secretaire(iUc_EchangerFeutres_secretaire* p_iUc_EchangerFeutres_secretaire) {
    itsIUc_EchangerFeutres_secretaire = p_iUc_EchangerFeutres_secretaire;
}

secretaire::pUc_EchangerFeutres_C* secretaire::pUc_EchangerFeutres_C::InBound_C::getPort() const {
    return port;
}

void secretaire::pUc_EchangerFeutres_C::InBound_C::setPort(secretaire::pUc_EchangerFeutres_C* p_pUc_EchangerFeutres_C) {
    _setPort(p_pUc_EchangerFeutres_C);
}

void secretaire::pUc_EchangerFeutres_C::InBound_C::cleanUpRelations() {
    if(itsIUc_EchangerFeutres_secretaire != NULL)
        {
            itsIUc_EchangerFeutres_secretaire = NULL;
        }
    if(port != NULL)
        {
            port = NULL;
        }
}

void secretaire::pUc_EchangerFeutres_C::InBound_C::__setPort(secretaire::pUc_EchangerFeutres_C* p_pUc_EchangerFeutres_C) {
    port = p_pUc_EchangerFeutres_C;
}

void secretaire::pUc_EchangerFeutres_C::InBound_C::_setPort(secretaire::pUc_EchangerFeutres_C* p_pUc_EchangerFeutres_C) {
    __setPort(p_pUc_EchangerFeutres_C);
}

void secretaire::pUc_EchangerFeutres_C::InBound_C::_clearPort() {
    port = NULL;
}

secretaire::pUc_EchangerFeutres_C::OutBound_C::OutBound_C() {
    itsIsecretaire_Uc_EchangerFeutres = NULL;
}

secretaire::pUc_EchangerFeutres_C::OutBound_C::~OutBound_C() {
    cleanUpRelations();
}

bool secretaire::pUc_EchangerFeutres_C::OutBound_C::send(IOxfEvent* event, const IOxfEventGenerationParams& params) {
    bool res = false;
    if (event != NULL) {
        if (itsIsecretaire_Uc_EchangerFeutres != NULL) {
            if (event->isTypeOf(repEchangeFourniture_InterfacesPkg_id)) {
                res = itsIsecretaire_Uc_EchangerFeutres->send(event, params);
            }
        }
    }
    return res;
    
}

bool secretaire::pUc_EchangerFeutres_C::OutBound_C::send(IOxfEvent* event) {
    bool res = false;
    if (event != NULL) {
        if (itsIsecretaire_Uc_EchangerFeutres != NULL) {
            if (event->isTypeOf(repEchangeFourniture_InterfacesPkg_id)) {
                res = itsIsecretaire_Uc_EchangerFeutres->send(event);
            }
        }
    }
    return res;
    
}

void secretaire::pUc_EchangerFeutres_C::OutBound_C::setItsIsecretaire_Uc_EchangerFeutres(OMReactive* p_OMReactive) {
    itsIsecretaire_Uc_EchangerFeutres = p_OMReactive;
}

void secretaire::pUc_EchangerFeutres_C::OutBound_C::cleanUpRelations() {
    if(itsIsecretaire_Uc_EchangerFeutres != NULL)
        {
            itsIsecretaire_Uc_EchangerFeutres = NULL;
        }
}

secretaire::pUc_EchangerFeutres_C::pUc_EchangerFeutres_C() : _p_(0) {
    initRelations();
}

secretaire::pUc_EchangerFeutres_C::~pUc_EchangerFeutres_C() {
}

void secretaire::pUc_EchangerFeutres_C::connectSecretaire(secretaire* part) {
    InBound.setItsIUc_EchangerFeutres_secretaire(part);
    InBound.setPort(this); // for IS_PORT macro support
    
}

iUc_EchangerFeutres_secretaire* secretaire::pUc_EchangerFeutres_C::getItsIUc_EchangerFeutres_secretaire() {
    return &InBound;
}

isecretaire_Uc_EchangerFeutres* secretaire::pUc_EchangerFeutres_C::getItsIsecretaire_Uc_EchangerFeutres() {
    return &OutBound;
}

void secretaire::pUc_EchangerFeutres_C::setItsIUc_EchangerFeutres_secretaire(iUc_EchangerFeutres_secretaire* p_iUc_EchangerFeutres_secretaire) {
    InBound.setItsIUc_EchangerFeutres_secretaire(p_iUc_EchangerFeutres_secretaire);
}

void secretaire::pUc_EchangerFeutres_C::setItsIsecretaire_Uc_EchangerFeutres(OMReactive* p_isecretaire_Uc_EchangerFeutres) {
    OutBound.setItsIsecretaire_Uc_EchangerFeutres(p_isecretaire_Uc_EchangerFeutres);
}

secretaire::pUc_EchangerFeutres_C::InBound_C* secretaire::pUc_EchangerFeutres_C::getInBound() const {
    return (secretaire::pUc_EchangerFeutres_C::InBound_C*) &InBound;
}

secretaire::pUc_EchangerFeutres_C::OutBound_C* secretaire::pUc_EchangerFeutres_C::getOutBound() const {
    return (secretaire::pUc_EchangerFeutres_C::OutBound_C*) &OutBound;
}

void secretaire::pUc_EchangerFeutres_C::initRelations() {
    InBound._setPort(this);
}

void secretaire::pUc_EchangerFeutres_C::destroy() {
}
//#]

secretaire::secretaire(IOxfActive* theActiveContext) {
    NOTIFY_REACTIVE_CONSTRUCTOR(secretaire, secretaire(), 0, ActorPkg_secretaire_secretaire_SERIALIZE);
    setActiveContext(theActiveContext, false);
    initRelations();
}

secretaire::~secretaire() {
    NOTIFY_DESTRUCTOR(~secretaire, false);
}

secretaire::pUc_CommanderFeutres_C* secretaire::getPUc_CommanderFeutres() const {
    return (secretaire::pUc_CommanderFeutres_C*) &pUc_CommanderFeutres;
}

secretaire::pUc_CommanderFeutres_C* secretaire::get_pUc_CommanderFeutres() const {
    return (secretaire::pUc_CommanderFeutres_C*) &pUc_CommanderFeutres;
}

secretaire::pUc_EchangerFeutres_C* secretaire::getPUc_EchangerFeutres() const {
    return (secretaire::pUc_EchangerFeutres_C*) &pUc_EchangerFeutres;
}

secretaire::pUc_EchangerFeutres_C* secretaire::get_pUc_EchangerFeutres() const {
    return (secretaire::pUc_EchangerFeutres_C*) &pUc_EchangerFeutres;
}

bool secretaire::startBehavior() {
    bool done = false;
    done = OMReactive::startBehavior();
    return done;
}

void secretaire::initRelations() {
    if (get_pUc_CommanderFeutres() != NULL) {
        get_pUc_CommanderFeutres()->connectSecretaire(this);
    }
    if (get_pUc_EchangerFeutres() != NULL) {
        get_pUc_EchangerFeutres()->connectSecretaire(this);
    }
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedsecretaire::serializeAttributes(AOMSAttributes* aomsAttributes) const {
    OMAnimatediUc_CommanderFeutres_secretaire::serializeAttributes(aomsAttributes);
    OMAnimatediUc_EchangerFeutres_secretaire::serializeAttributes(aomsAttributes);
}

void OMAnimatedsecretaire::serializeRelations(AOMSRelations* aomsRelations) const {
    OMAnimatediUc_CommanderFeutres_secretaire::serializeRelations(aomsRelations);
    OMAnimatediUc_EchangerFeutres_secretaire::serializeRelations(aomsRelations);
}

static AOMClass* _secretaireSuper[2] = {
OMAnimatediUc_CommanderFeutres_secretaire::staticGetClass(),
OMAnimatediUc_EchangerFeutres_secretaire::staticGetClass()};
//#]

IMPLEMENT_REACTIVE_META_M_SIMPLE_P(secretaire, ActorPkg, false, _secretaireSuper, 2, OMAnimatedsecretaire)

OMINIT_SUPERCLASS(iUc_CommanderFeutres_secretaire, OMAnimatediUc_CommanderFeutres_secretaire)

OMINIT_SUPERCLASS(iUc_EchangerFeutres_secretaire, OMAnimatediUc_EchangerFeutres_secretaire)

OMREGISTER_REACTIVE_CLASS
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\secretaire.cpp
*********************************************************************/
