/********************************************************************
	Rhapsody	: 8.1.1 
	Login		: GANOU Arouna
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: secretaire
//!	Generated Date	: Tue, 6, Jun 2017  
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

bool secretaire::startBehavior() {
    bool done = false;
    done = OMReactive::startBehavior();
    return done;
}

void secretaire::initRelations() {
    if (get_pUc_CommanderFeutres() != NULL) {
        get_pUc_CommanderFeutres()->connectSecretaire(this);
    }
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedsecretaire::serializeAttributes(AOMSAttributes* aomsAttributes) const {
    OMAnimatediUc_CommanderFeutres_secretaire::serializeAttributes(aomsAttributes);
}

void OMAnimatedsecretaire::serializeRelations(AOMSRelations* aomsRelations) const {
    OMAnimatediUc_CommanderFeutres_secretaire::serializeRelations(aomsRelations);
}
//#]

IMPLEMENT_REACTIVE_META_S_SIMPLE_P(secretaire, ActorPkg, false, iUc_CommanderFeutres_secretaire, OMAnimatediUc_CommanderFeutres_secretaire, OMAnimatedsecretaire)

OMINIT_SUPERCLASS(iUc_CommanderFeutres_secretaire, OMAnimatediUc_CommanderFeutres_secretaire)

OMREGISTER_REACTIVE_CLASS
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\secretaire.cpp
*********************************************************************/
