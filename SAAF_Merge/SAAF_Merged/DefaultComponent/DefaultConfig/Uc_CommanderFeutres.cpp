/********************************************************************
	Rhapsody	: 8.1.1 
	Login		: ganou2u
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Uc_CommanderFeutres
//!	Generated Date	: Thu, 8, Jun 2017  
	File Path	: DefaultComponent\DefaultConfig\Uc_CommanderFeutres.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX

#define _OMSTATECHART_ANIMATED
//#]

//## auto_generated
#include "Uc_CommanderFeutres.h"
//## event reqCommande()
#include "InterfacesPkg.h"
//#[ ignore
#define FunctionalAnalysisPkg_CommanderFeutresPkg_Uc_CommanderFeutres_Uc_CommanderFeutres_SERIALIZE OM_NO_OP

#define FunctionalAnalysisPkg_CommanderFeutresPkg_Uc_CommanderFeutres_AttendreChargementFourniture_SERIALIZE OM_NO_OP

#define FunctionalAnalysisPkg_CommanderFeutresPkg_Uc_CommanderFeutres_LibererZone_SERIALIZE OM_NO_OP

#define FunctionalAnalysisPkg_CommanderFeutresPkg_Uc_CommanderFeutres_ReceptionnerCommande_SERIALIZE OM_NO_OP

#define FunctionalAnalysisPkg_CommanderFeutresPkg_Uc_CommanderFeutres_SeDeplacerVersAcceuil_SERIALIZE OM_NO_OP

#define FunctionalAnalysisPkg_CommanderFeutresPkg_Uc_CommanderFeutres_SeDeplacerVersAccueil_SERIALIZE OM_NO_OP

#define FunctionalAnalysisPkg_CommanderFeutresPkg_Uc_CommanderFeutres_SeDeplacerVersSalle_SERIALIZE OM_NO_OP
//#]

//## package FunctionalAnalysisPkg::CommanderFeutresPkg

//## class Uc_CommanderFeutres
//#[ ignore
Uc_CommanderFeutres::penseignant_C::InBound_C::InBound_C() {
    itsIenseignant_Uc_CommanderFeutres = NULL;
    port = NULL;
}

Uc_CommanderFeutres::penseignant_C::InBound_C::~InBound_C() {
    cleanUpRelations();
}

bool Uc_CommanderFeutres::penseignant_C::InBound_C::send(IOxfEvent* event, const IOxfEventGenerationParams& params) {
    bool res = false;
    if (event != NULL) {
        event->setPort(getPort());
        if (itsIenseignant_Uc_CommanderFeutres != NULL) {
            if (event->isTypeOf(reqCommande_InterfacesPkg_id)) {
                res = itsIenseignant_Uc_CommanderFeutres->send(event, params);
                return res;
            }
            if (event->isTypeOf(repDechargementFourniture_InterfacesPkg_id)) {
                res = itsIenseignant_Uc_CommanderFeutres->send(event, params);
                return res;
            }
            if (event->isTypeOf(repFournitureUsagee_InterfacesPkg_id)) {
                res = itsIenseignant_Uc_CommanderFeutres->send(event, params);
                return res;
            }
            if (event->isTypeOf(repChargementFournitureUsagee_InterfacesPkg_id)) {
                res = itsIenseignant_Uc_CommanderFeutres->send(event, params);
                return res;
            }
        }
    }
    return res;
    
}

bool Uc_CommanderFeutres::penseignant_C::InBound_C::send(IOxfEvent* event) {
    bool res = false;
    if (event != NULL) {
        event->setPort(getPort());
        if (itsIenseignant_Uc_CommanderFeutres != NULL) {
            if (event->isTypeOf(reqCommande_InterfacesPkg_id)) {
                res = itsIenseignant_Uc_CommanderFeutres->send(event);
                return res;
            }
            if (event->isTypeOf(repDechargementFourniture_InterfacesPkg_id)) {
                res = itsIenseignant_Uc_CommanderFeutres->send(event);
                return res;
            }
            if (event->isTypeOf(repFournitureUsagee_InterfacesPkg_id)) {
                res = itsIenseignant_Uc_CommanderFeutres->send(event);
                return res;
            }
            if (event->isTypeOf(repChargementFournitureUsagee_InterfacesPkg_id)) {
                res = itsIenseignant_Uc_CommanderFeutres->send(event);
                return res;
            }
        }
    }
    return res;
    
}

void Uc_CommanderFeutres::penseignant_C::InBound_C::setItsIenseignant_Uc_CommanderFeutres(ienseignant_Uc_CommanderFeutres* p_ienseignant_Uc_CommanderFeutres) {
    itsIenseignant_Uc_CommanderFeutres = p_ienseignant_Uc_CommanderFeutres;
}

Uc_CommanderFeutres::penseignant_C* Uc_CommanderFeutres::penseignant_C::InBound_C::getPort() const {
    return port;
}

void Uc_CommanderFeutres::penseignant_C::InBound_C::setPort(Uc_CommanderFeutres::penseignant_C* p_penseignant_C) {
    _setPort(p_penseignant_C);
}

void Uc_CommanderFeutres::penseignant_C::InBound_C::cleanUpRelations() {
    if(itsIenseignant_Uc_CommanderFeutres != NULL)
        {
            itsIenseignant_Uc_CommanderFeutres = NULL;
        }
    if(port != NULL)
        {
            port = NULL;
        }
}

void Uc_CommanderFeutres::penseignant_C::InBound_C::__setPort(Uc_CommanderFeutres::penseignant_C* p_penseignant_C) {
    port = p_penseignant_C;
}

void Uc_CommanderFeutres::penseignant_C::InBound_C::_setPort(Uc_CommanderFeutres::penseignant_C* p_penseignant_C) {
    __setPort(p_penseignant_C);
}

void Uc_CommanderFeutres::penseignant_C::InBound_C::_clearPort() {
    port = NULL;
}

Uc_CommanderFeutres::penseignant_C::OutBound_C::OutBound_C() {
    itsIUc_CommanderFeutres_enseignant = NULL;
}

Uc_CommanderFeutres::penseignant_C::OutBound_C::~OutBound_C() {
    cleanUpRelations();
}

bool Uc_CommanderFeutres::penseignant_C::OutBound_C::send(IOxfEvent* event, const IOxfEventGenerationParams& params) {
    bool res = false;
    if (event != NULL) {
        if (itsIUc_CommanderFeutres_enseignant != NULL) {
            if (event->isTypeOf(repCommande_InterfacesPkg_id)) {
                res = itsIUc_CommanderFeutres_enseignant->send(event, params);
                return res;
            }
            if (event->isTypeOf(reqDechargementFourniture_InterfacesPkg_id)) {
                res = itsIUc_CommanderFeutres_enseignant->send(event, params);
                return res;
            }
            if (event->isTypeOf(reqFournitureUsagee_InterfacesPkg_id)) {
                res = itsIUc_CommanderFeutres_enseignant->send(event, params);
                return res;
            }
            if (event->isTypeOf(reqChargementFournitureUsagee_InterfacesPkg_id)) {
                res = itsIUc_CommanderFeutres_enseignant->send(event, params);
                return res;
            }
        }
    }
    return res;
    
}

bool Uc_CommanderFeutres::penseignant_C::OutBound_C::send(IOxfEvent* event) {
    bool res = false;
    if (event != NULL) {
        if (itsIUc_CommanderFeutres_enseignant != NULL) {
            if (event->isTypeOf(repCommande_InterfacesPkg_id)) {
                res = itsIUc_CommanderFeutres_enseignant->send(event);
                return res;
            }
            if (event->isTypeOf(reqDechargementFourniture_InterfacesPkg_id)) {
                res = itsIUc_CommanderFeutres_enseignant->send(event);
                return res;
            }
            if (event->isTypeOf(reqFournitureUsagee_InterfacesPkg_id)) {
                res = itsIUc_CommanderFeutres_enseignant->send(event);
                return res;
            }
            if (event->isTypeOf(reqChargementFournitureUsagee_InterfacesPkg_id)) {
                res = itsIUc_CommanderFeutres_enseignant->send(event);
                return res;
            }
        }
    }
    return res;
    
}

void Uc_CommanderFeutres::penseignant_C::OutBound_C::setItsIUc_CommanderFeutres_enseignant(OMReactive* p_OMReactive) {
    itsIUc_CommanderFeutres_enseignant = p_OMReactive;
}

void Uc_CommanderFeutres::penseignant_C::OutBound_C::cleanUpRelations() {
    if(itsIUc_CommanderFeutres_enseignant != NULL)
        {
            itsIUc_CommanderFeutres_enseignant = NULL;
        }
}

Uc_CommanderFeutres::penseignant_C::penseignant_C() : _p_(0) {
    initRelations();
}

Uc_CommanderFeutres::penseignant_C::~penseignant_C() {
}

void Uc_CommanderFeutres::penseignant_C::connectUc_CommanderFeutres(Uc_CommanderFeutres* part) {
    InBound.setItsIenseignant_Uc_CommanderFeutres(part);
    InBound.setPort(this); // for IS_PORT macro support
    
}

iUc_CommanderFeutres_enseignant* Uc_CommanderFeutres::penseignant_C::getItsIUc_CommanderFeutres_enseignant() {
    return &OutBound;
}

ienseignant_Uc_CommanderFeutres* Uc_CommanderFeutres::penseignant_C::getItsIenseignant_Uc_CommanderFeutres() {
    return &InBound;
}

void Uc_CommanderFeutres::penseignant_C::setItsIUc_CommanderFeutres_enseignant(OMReactive* p_iUc_CommanderFeutres_enseignant) {
    OutBound.setItsIUc_CommanderFeutres_enseignant(p_iUc_CommanderFeutres_enseignant);
}

void Uc_CommanderFeutres::penseignant_C::setItsIenseignant_Uc_CommanderFeutres(ienseignant_Uc_CommanderFeutres* p_ienseignant_Uc_CommanderFeutres) {
    InBound.setItsIenseignant_Uc_CommanderFeutres(p_ienseignant_Uc_CommanderFeutres);
}

Uc_CommanderFeutres::penseignant_C::InBound_C* Uc_CommanderFeutres::penseignant_C::getInBound() const {
    return (Uc_CommanderFeutres::penseignant_C::InBound_C*) &InBound;
}

Uc_CommanderFeutres::penseignant_C::OutBound_C* Uc_CommanderFeutres::penseignant_C::getOutBound() const {
    return (Uc_CommanderFeutres::penseignant_C::OutBound_C*) &OutBound;
}

void Uc_CommanderFeutres::penseignant_C::initRelations() {
    InBound._setPort(this);
}

void Uc_CommanderFeutres::penseignant_C::destroy() {
}

Uc_CommanderFeutres::psecretaire_C::InBound_C::InBound_C() {
    itsIsecretaire_Uc_CommanderFeutres = NULL;
    port = NULL;
}

Uc_CommanderFeutres::psecretaire_C::InBound_C::~InBound_C() {
    cleanUpRelations();
}

bool Uc_CommanderFeutres::psecretaire_C::InBound_C::send(IOxfEvent* event, const IOxfEventGenerationParams& params) {
    bool res = false;
    if (event != NULL) {
        event->setPort(getPort());
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

bool Uc_CommanderFeutres::psecretaire_C::InBound_C::send(IOxfEvent* event) {
    bool res = false;
    if (event != NULL) {
        event->setPort(getPort());
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

void Uc_CommanderFeutres::psecretaire_C::InBound_C::setItsIsecretaire_Uc_CommanderFeutres(isecretaire_Uc_CommanderFeutres* p_isecretaire_Uc_CommanderFeutres) {
    itsIsecretaire_Uc_CommanderFeutres = p_isecretaire_Uc_CommanderFeutres;
}

Uc_CommanderFeutres::psecretaire_C* Uc_CommanderFeutres::psecretaire_C::InBound_C::getPort() const {
    return port;
}

void Uc_CommanderFeutres::psecretaire_C::InBound_C::setPort(Uc_CommanderFeutres::psecretaire_C* p_psecretaire_C) {
    _setPort(p_psecretaire_C);
}

void Uc_CommanderFeutres::psecretaire_C::InBound_C::cleanUpRelations() {
    if(itsIsecretaire_Uc_CommanderFeutres != NULL)
        {
            itsIsecretaire_Uc_CommanderFeutres = NULL;
        }
    if(port != NULL)
        {
            port = NULL;
        }
}

void Uc_CommanderFeutres::psecretaire_C::InBound_C::__setPort(Uc_CommanderFeutres::psecretaire_C* p_psecretaire_C) {
    port = p_psecretaire_C;
}

void Uc_CommanderFeutres::psecretaire_C::InBound_C::_setPort(Uc_CommanderFeutres::psecretaire_C* p_psecretaire_C) {
    __setPort(p_psecretaire_C);
}

void Uc_CommanderFeutres::psecretaire_C::InBound_C::_clearPort() {
    port = NULL;
}

Uc_CommanderFeutres::psecretaire_C::OutBound_C::OutBound_C() {
    itsIUc_CommanderFeutres_secretaire = NULL;
}

Uc_CommanderFeutres::psecretaire_C::OutBound_C::~OutBound_C() {
    cleanUpRelations();
}

bool Uc_CommanderFeutres::psecretaire_C::OutBound_C::send(IOxfEvent* event, const IOxfEventGenerationParams& params) {
    bool res = false;
    if (event != NULL) {
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

bool Uc_CommanderFeutres::psecretaire_C::OutBound_C::send(IOxfEvent* event) {
    bool res = false;
    if (event != NULL) {
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

void Uc_CommanderFeutres::psecretaire_C::OutBound_C::setItsIUc_CommanderFeutres_secretaire(OMReactive* p_OMReactive) {
    itsIUc_CommanderFeutres_secretaire = p_OMReactive;
}

void Uc_CommanderFeutres::psecretaire_C::OutBound_C::cleanUpRelations() {
    if(itsIUc_CommanderFeutres_secretaire != NULL)
        {
            itsIUc_CommanderFeutres_secretaire = NULL;
        }
}

Uc_CommanderFeutres::psecretaire_C::psecretaire_C() : _p_(0) {
    initRelations();
}

Uc_CommanderFeutres::psecretaire_C::~psecretaire_C() {
}

void Uc_CommanderFeutres::psecretaire_C::connectUc_CommanderFeutres(Uc_CommanderFeutres* part) {
    InBound.setItsIsecretaire_Uc_CommanderFeutres(part);
    InBound.setPort(this); // for IS_PORT macro support
    
}

iUc_CommanderFeutres_secretaire* Uc_CommanderFeutres::psecretaire_C::getItsIUc_CommanderFeutres_secretaire() {
    return &OutBound;
}

isecretaire_Uc_CommanderFeutres* Uc_CommanderFeutres::psecretaire_C::getItsIsecretaire_Uc_CommanderFeutres() {
    return &InBound;
}

void Uc_CommanderFeutres::psecretaire_C::setItsIUc_CommanderFeutres_secretaire(OMReactive* p_iUc_CommanderFeutres_secretaire) {
    OutBound.setItsIUc_CommanderFeutres_secretaire(p_iUc_CommanderFeutres_secretaire);
}

void Uc_CommanderFeutres::psecretaire_C::setItsIsecretaire_Uc_CommanderFeutres(isecretaire_Uc_CommanderFeutres* p_isecretaire_Uc_CommanderFeutres) {
    InBound.setItsIsecretaire_Uc_CommanderFeutres(p_isecretaire_Uc_CommanderFeutres);
}

Uc_CommanderFeutres::psecretaire_C::InBound_C* Uc_CommanderFeutres::psecretaire_C::getInBound() const {
    return (Uc_CommanderFeutres::psecretaire_C::InBound_C*) &InBound;
}

Uc_CommanderFeutres::psecretaire_C::OutBound_C* Uc_CommanderFeutres::psecretaire_C::getOutBound() const {
    return (Uc_CommanderFeutres::psecretaire_C::OutBound_C*) &OutBound;
}

void Uc_CommanderFeutres::psecretaire_C::initRelations() {
    InBound._setPort(this);
}

void Uc_CommanderFeutres::psecretaire_C::destroy() {
}
//#]

Uc_CommanderFeutres::Uc_CommanderFeutres(IOxfActive* theActiveContext) {
    NOTIFY_REACTIVE_CONSTRUCTOR(Uc_CommanderFeutres, Uc_CommanderFeutres(), 0, FunctionalAnalysisPkg_CommanderFeutresPkg_Uc_CommanderFeutres_Uc_CommanderFeutres_SERIALIZE);
    setActiveContext(theActiveContext, false);
    initRelations();
    initStatechart();
}

Uc_CommanderFeutres::~Uc_CommanderFeutres() {
    NOTIFY_DESTRUCTOR(~Uc_CommanderFeutres, false);
    cancelTimeouts();
}

void Uc_CommanderFeutres::AttendreChargementFourniture() {
    NOTIFY_OPERATION(AttendreChargementFourniture, AttendreChargementFourniture(), 0, FunctionalAnalysisPkg_CommanderFeutresPkg_Uc_CommanderFeutres_AttendreChargementFourniture_SERIALIZE);
    //#[ operation AttendreChargementFourniture()
    //#]
}

void Uc_CommanderFeutres::LibererZone() {
    NOTIFY_OPERATION(LibererZone, LibererZone(), 0, FunctionalAnalysisPkg_CommanderFeutresPkg_Uc_CommanderFeutres_LibererZone_SERIALIZE);
    //#[ operation LibererZone()
    //#]
}

void Uc_CommanderFeutres::ReceptionnerCommande() {
    NOTIFY_OPERATION(ReceptionnerCommande, ReceptionnerCommande(), 0, FunctionalAnalysisPkg_CommanderFeutresPkg_Uc_CommanderFeutres_ReceptionnerCommande_SERIALIZE);
    //#[ operation ReceptionnerCommande()
    //#]
}

void Uc_CommanderFeutres::SeDeplacerVersAcceuil() {
    NOTIFY_OPERATION(SeDeplacerVersAcceuil, SeDeplacerVersAcceuil(), 0, FunctionalAnalysisPkg_CommanderFeutresPkg_Uc_CommanderFeutres_SeDeplacerVersAcceuil_SERIALIZE);
    //#[ operation SeDeplacerVersAcceuil()
    //#]
}

void Uc_CommanderFeutres::SeDeplacerVersAccueil() {
    NOTIFY_OPERATION(SeDeplacerVersAccueil, SeDeplacerVersAccueil(), 0, FunctionalAnalysisPkg_CommanderFeutresPkg_Uc_CommanderFeutres_SeDeplacerVersAccueil_SERIALIZE);
    //#[ operation SeDeplacerVersAccueil()
    //#]
}

void Uc_CommanderFeutres::SeDeplacerVersSalle() {
    NOTIFY_OPERATION(SeDeplacerVersSalle, SeDeplacerVersSalle(), 0, FunctionalAnalysisPkg_CommanderFeutresPkg_Uc_CommanderFeutres_SeDeplacerVersSalle_SERIALIZE);
    //#[ operation SeDeplacerVersSalle()
    //#]
}

Uc_CommanderFeutres::penseignant_C* Uc_CommanderFeutres::getPenseignant() const {
    return (Uc_CommanderFeutres::penseignant_C*) &penseignant;
}

Uc_CommanderFeutres::penseignant_C* Uc_CommanderFeutres::get_penseignant() const {
    return (Uc_CommanderFeutres::penseignant_C*) &penseignant;
}

Uc_CommanderFeutres::psecretaire_C* Uc_CommanderFeutres::getPsecretaire() const {
    return (Uc_CommanderFeutres::psecretaire_C*) &psecretaire;
}

Uc_CommanderFeutres::psecretaire_C* Uc_CommanderFeutres::get_psecretaire() const {
    return (Uc_CommanderFeutres::psecretaire_C*) &psecretaire;
}

OMBoolean Uc_CommanderFeutres::getRetour() const {
    return retour;
}

void Uc_CommanderFeutres::setRetour(OMBoolean p_retour) {
    retour = p_retour;
}

bool Uc_CommanderFeutres::startBehavior() {
    bool done = false;
    done = OMReactive::startBehavior();
    return done;
}

void Uc_CommanderFeutres::initRelations() {
    if (get_penseignant() != NULL) {
        get_penseignant()->connectUc_CommanderFeutres(this);
    }
    if (get_psecretaire() != NULL) {
        get_psecretaire()->connectUc_CommanderFeutres(this);
    }
}

void Uc_CommanderFeutres::initStatechart() {
    rootState_subState = OMNonState;
    rootState_active = OMNonState;
    rootState_timeout = NULL;
}

void Uc_CommanderFeutres::cancelTimeouts() {
    cancel(rootState_timeout);
}

bool Uc_CommanderFeutres::cancelTimeout(const IOxfTimeout* arg) {
    bool res = false;
    if(rootState_timeout == arg)
        {
            rootState_timeout = NULL;
            res = true;
        }
    return res;
}

void Uc_CommanderFeutres::rootState_entDef() {
    {
        NOTIFY_STATE_ENTERED("ROOT");
        NOTIFY_TRANSITION_STARTED("0");
        NOTIFY_STATE_ENTERED("ROOT.enAttente");
        rootState_subState = enAttente;
        rootState_active = enAttente;
        NOTIFY_TRANSITION_TERMINATED("0");
    }
}

IOxfReactive::TakeEventStatus Uc_CommanderFeutres::rootState_processEvent() {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    switch (rootState_active) {
        // State enAttente
        case enAttente:
        {
            if(IS_EVENT_TYPE_OF(reqCommande_InterfacesPkg_id))
                {
                    NOTIFY_TRANSITION_STARTED("1");
                    NOTIFY_STATE_EXITED("ROOT.enAttente");
                    NOTIFY_STATE_ENTERED("ROOT.accepteventaction_1");
                    pushNullTransition();
                    rootState_subState = accepteventaction_1;
                    rootState_active = accepteventaction_1;
                    NOTIFY_TRANSITION_TERMINATED("1");
                    res = eventConsumed;
                }
            
        }
        break;
        case accepteventaction_1:
        {
            if(IS_EVENT_TYPE_OF(OMNullEventId))
                {
                    NOTIFY_TRANSITION_STARTED("2");
                    popNullTransition();
                    NOTIFY_STATE_EXITED("ROOT.accepteventaction_1");
                    NOTIFY_STATE_ENTERED("ROOT.enReceptionCommande");
                    rootState_subState = enReceptionCommande;
                    rootState_active = enReceptionCommande;
                    rootState_timeout = scheduleTimeout(1000, "ROOT.enReceptionCommande");
                    NOTIFY_TRANSITION_TERMINATED("2");
                    res = eventConsumed;
                }
            
        }
        break;
        // State enReceptionCommande
        case enReceptionCommande:
        {
            if(IS_EVENT_TYPE_OF(OMTimeoutEventId))
                {
                    if(getCurrentEvent() == rootState_timeout)
                        {
                            NOTIFY_TRANSITION_STARTED("3");
                            cancel(rootState_timeout);
                            NOTIFY_STATE_EXITED("ROOT.enReceptionCommande");
                            NOTIFY_STATE_ENTERED("ROOT.sendaction_3");
                            pushNullTransition();
                            rootState_subState = sendaction_3;
                            rootState_active = sendaction_3;
                            //#[ state sendaction_3.(Entry) 
                            OUT_PORT(penseignant)->GEN(repCommande);
                            //#]
                            NOTIFY_TRANSITION_TERMINATED("3");
                            res = eventConsumed;
                        }
                }
            
        }
        break;
        // State sendaction_3
        case sendaction_3:
        {
            if(IS_EVENT_TYPE_OF(OMNullEventId))
                {
                    NOTIFY_TRANSITION_STARTED("4");
                    popNullTransition();
                    NOTIFY_STATE_EXITED("ROOT.sendaction_3");
                    NOTIFY_STATE_ENTERED("ROOT.sendaction_4");
                    pushNullTransition();
                    rootState_subState = sendaction_4;
                    rootState_active = sendaction_4;
                    //#[ state sendaction_4.(Entry) 
                    OUT_PORT(psecretaire)->GEN(repCommandeSecretaire);
                    //#]
                    NOTIFY_TRANSITION_TERMINATED("4");
                    res = eventConsumed;
                }
            
        }
        break;
        // State sendaction_4
        case sendaction_4:
        {
            if(IS_EVENT_TYPE_OF(OMNullEventId))
                {
                    NOTIFY_TRANSITION_STARTED("5");
                    popNullTransition();
                    NOTIFY_STATE_EXITED("ROOT.sendaction_4");
                    NOTIFY_STATE_ENTERED("ROOT.enDeplacementVersAccueil");
                    rootState_subState = enDeplacementVersAccueil;
                    rootState_active = enDeplacementVersAccueil;
                    rootState_timeout = scheduleTimeout(5000, "ROOT.enDeplacementVersAccueil");
                    NOTIFY_TRANSITION_TERMINATED("5");
                    res = eventConsumed;
                }
            
        }
        break;
        // State enDeplacementVersAccueil
        case enDeplacementVersAccueil:
        {
            if(IS_EVENT_TYPE_OF(OMTimeoutEventId))
                {
                    if(getCurrentEvent() == rootState_timeout)
                        {
                            NOTIFY_TRANSITION_STARTED("6");
                            cancel(rootState_timeout);
                            NOTIFY_STATE_EXITED("ROOT.enDeplacementVersAccueil");
                            NOTIFY_STATE_ENTERED("ROOT.sendaction_6");
                            pushNullTransition();
                            rootState_subState = sendaction_6;
                            rootState_active = sendaction_6;
                            //#[ state sendaction_6.(Entry) 
                            OUT_PORT(psecretaire)->GEN(reqChargementFourniture);
                            //#]
                            NOTIFY_TRANSITION_TERMINATED("6");
                            res = eventConsumed;
                        }
                }
            
        }
        break;
        // State sendaction_6
        case sendaction_6:
        {
            if(IS_EVENT_TYPE_OF(OMNullEventId))
                {
                    NOTIFY_TRANSITION_STARTED("7");
                    popNullTransition();
                    NOTIFY_STATE_EXITED("ROOT.sendaction_6");
                    NOTIFY_STATE_ENTERED("ROOT.enAttenteChargementFourniture");
                    rootState_subState = enAttenteChargementFourniture;
                    rootState_active = enAttenteChargementFourniture;
                    NOTIFY_TRANSITION_TERMINATED("7");
                    res = eventConsumed;
                }
            
        }
        break;
        case accepteventaction_7:
        {
            if(IS_EVENT_TYPE_OF(OMNullEventId))
                {
                    NOTIFY_TRANSITION_STARTED("9");
                    popNullTransition();
                    NOTIFY_STATE_EXITED("ROOT.accepteventaction_7");
                    NOTIFY_STATE_ENTERED("ROOT.enDeplacementVersSalle");
                    pushNullTransition();
                    rootState_subState = enDeplacementVersSalle;
                    rootState_active = enDeplacementVersSalle;
                    NOTIFY_TRANSITION_TERMINATED("9");
                    res = eventConsumed;
                }
            
        }
        break;
        // State enAttenteChargementFourniture
        case enAttenteChargementFourniture:
        {
            if(IS_EVENT_TYPE_OF(repChargementFourniture_InterfacesPkg_id))
                {
                    NOTIFY_TRANSITION_STARTED("8");
                    NOTIFY_STATE_EXITED("ROOT.enAttenteChargementFourniture");
                    NOTIFY_STATE_ENTERED("ROOT.accepteventaction_7");
                    pushNullTransition();
                    rootState_subState = accepteventaction_7;
                    rootState_active = accepteventaction_7;
                    NOTIFY_TRANSITION_TERMINATED("8");
                    res = eventConsumed;
                }
            
        }
        break;
        // State enDeplacementVersSalle
        case enDeplacementVersSalle:
        {
            if(IS_EVENT_TYPE_OF(OMNullEventId))
                {
                    NOTIFY_TRANSITION_STARTED("10");
                    popNullTransition();
                    NOTIFY_STATE_EXITED("ROOT.enDeplacementVersSalle");
                    NOTIFY_STATE_ENTERED("ROOT.sendaction_10");
                    pushNullTransition();
                    rootState_subState = sendaction_10;
                    rootState_active = sendaction_10;
                    //#[ state sendaction_10.(Entry) 
                    OUT_PORT(penseignant)->GEN(reqDechargementFourniture);
                    //#]
                    NOTIFY_TRANSITION_TERMINATED("10");
                    res = eventConsumed;
                }
            
        }
        break;
        // State sendaction_10
        case sendaction_10:
        {
            if(IS_EVENT_TYPE_OF(OMNullEventId))
                {
                    NOTIFY_TRANSITION_STARTED("11");
                    popNullTransition();
                    NOTIFY_STATE_EXITED("ROOT.sendaction_10");
                    NOTIFY_STATE_ENTERED("ROOT.enAttenteDechargementDechargementFourniture");
                    pushNullTransition();
                    rootState_subState = enAttenteDechargementDechargementFourniture;
                    rootState_active = enAttenteDechargementDechargementFourniture;
                    NOTIFY_TRANSITION_TERMINATED("11");
                    res = eventConsumed;
                }
            
        }
        break;
        // State enAttenteDechargementDechargementFourniture
        case enAttenteDechargementDechargementFourniture:
        {
            if(IS_EVENT_TYPE_OF(OMNullEventId))
                {
                    NOTIFY_TRANSITION_STARTED("12");
                    popNullTransition();
                    NOTIFY_STATE_EXITED("ROOT.enAttenteDechargementDechargementFourniture");
                    NOTIFY_STATE_ENTERED("ROOT.sendaction_12");
                    pushNullTransition();
                    rootState_subState = sendaction_12;
                    rootState_active = sendaction_12;
                    //#[ state sendaction_12.(Entry) 
                    OUT_PORT(penseignant)->GEN(reqDechargementFourniture);
                    //#]
                    NOTIFY_TRANSITION_TERMINATED("12");
                    res = eventConsumed;
                }
            
        }
        break;
        // State sendaction_12
        case sendaction_12:
        {
            if(IS_EVENT_TYPE_OF(OMNullEventId))
                {
                    NOTIFY_TRANSITION_STARTED("13");
                    popNullTransition();
                    NOTIFY_STATE_EXITED("ROOT.sendaction_12");
                    NOTIFY_STATE_ENTERED("ROOT.enAttenteFourntureUsagee");
                    rootState_subState = enAttenteFourntureUsagee;
                    rootState_active = enAttenteFourntureUsagee;
                    NOTIFY_TRANSITION_TERMINATED("13");
                    res = eventConsumed;
                }
            
        }
        break;
        // State enAttenteFourntureUsagee
        case enAttenteFourntureUsagee:
        {
            if(IS_EVENT_TYPE_OF(repFournitureUsagee_InterfacesPkg_id))
                {
                    OMSETPARAMS(repFournitureUsagee);
                    NOTIFY_TRANSITION_STARTED("15");
                    NOTIFY_STATE_EXITED("ROOT.enAttenteFourntureUsagee");
                    //#[ transition 15 
                    retour=params->retour;
                    //#]
                    NOTIFY_STATE_ENTERED("ROOT.accepteventaction_14");
                    pushNullTransition();
                    rootState_subState = accepteventaction_14;
                    rootState_active = accepteventaction_14;
                    NOTIFY_TRANSITION_TERMINATED("15");
                    res = eventConsumed;
                }
            
        }
        break;
        case accepteventaction_14:
        {
            if(IS_EVENT_TYPE_OF(OMNullEventId))
                {
                    //## transition 17 
                    if( retour==false)
                        {
                            NOTIFY_TRANSITION_STARTED("16");
                            NOTIFY_TRANSITION_STARTED("17");
                            popNullTransition();
                            NOTIFY_STATE_EXITED("ROOT.accepteventaction_14");
                            NOTIFY_STATE_ENTERED("ROOT.enLiberationZone");
                            rootState_subState = enLiberationZone;
                            rootState_active = enLiberationZone;
                            rootState_timeout = scheduleTimeout(3000, "ROOT.enLiberationZone");
                            NOTIFY_TRANSITION_TERMINATED("17");
                            NOTIFY_TRANSITION_TERMINATED("16");
                            res = eventConsumed;
                        }
                    else
                        {
                            NOTIFY_TRANSITION_STARTED("16");
                            NOTIFY_TRANSITION_STARTED("18");
                            popNullTransition();
                            NOTIFY_STATE_EXITED("ROOT.accepteventaction_14");
                            NOTIFY_STATE_ENTERED("ROOT.sendaction_17");
                            pushNullTransition();
                            rootState_subState = sendaction_17;
                            rootState_active = sendaction_17;
                            //#[ state sendaction_17.(Entry) 
                            OUT_PORT(psecretaire)->GEN(reqChargementFournitureUsagee);
                            //#]
                            NOTIFY_TRANSITION_TERMINATED("18");
                            NOTIFY_TRANSITION_TERMINATED("16");
                            res = eventConsumed;
                        }
                }
            
        }
        break;
        // State enLiberationZone
        case enLiberationZone:
        {
            if(IS_EVENT_TYPE_OF(OMTimeoutEventId))
                {
                    if(getCurrentEvent() == rootState_timeout)
                        {
                            NOTIFY_TRANSITION_STARTED("14");
                            cancel(rootState_timeout);
                            NOTIFY_STATE_EXITED("ROOT.enLiberationZone");
                            NOTIFY_STATE_ENTERED("ROOT.enAttente");
                            rootState_subState = enAttente;
                            rootState_active = enAttente;
                            NOTIFY_TRANSITION_TERMINATED("14");
                            res = eventConsumed;
                        }
                }
            
        }
        break;
        // State sendaction_17
        case sendaction_17:
        {
            if(IS_EVENT_TYPE_OF(OMNullEventId))
                {
                    NOTIFY_TRANSITION_STARTED("19");
                    popNullTransition();
                    NOTIFY_STATE_EXITED("ROOT.sendaction_17");
                    NOTIFY_STATE_ENTERED("ROOT.enAttenteChargmentFournitureUsagee");
                    rootState_subState = enAttenteChargmentFournitureUsagee;
                    rootState_active = enAttenteChargmentFournitureUsagee;
                    NOTIFY_TRANSITION_TERMINATED("19");
                    res = eventConsumed;
                }
            
        }
        break;
        // State enAttenteChargmentFournitureUsagee
        case enAttenteChargmentFournitureUsagee:
        {
            if(IS_EVENT_TYPE_OF(repChargementFournitureUsagee_InterfacesPkg_id))
                {
                    NOTIFY_TRANSITION_STARTED("20");
                    NOTIFY_STATE_EXITED("ROOT.enAttenteChargmentFournitureUsagee");
                    NOTIFY_STATE_ENTERED("ROOT.accepteventaction_20");
                    pushNullTransition();
                    rootState_subState = accepteventaction_20;
                    rootState_active = accepteventaction_20;
                    NOTIFY_TRANSITION_TERMINATED("20");
                    res = eventConsumed;
                }
            
        }
        break;
        case accepteventaction_20:
        {
            if(IS_EVENT_TYPE_OF(OMNullEventId))
                {
                    NOTIFY_TRANSITION_STARTED("21");
                    popNullTransition();
                    NOTIFY_STATE_EXITED("ROOT.accepteventaction_20");
                    NOTIFY_STATE_ENTERED("ROOT.enDeplacementVersAcceuilAvecFournitureUsagee");
                    pushNullTransition();
                    rootState_subState = enDeplacementVersAcceuilAvecFournitureUsagee;
                    rootState_active = enDeplacementVersAcceuilAvecFournitureUsagee;
                    NOTIFY_TRANSITION_TERMINATED("21");
                    res = eventConsumed;
                }
            
        }
        break;
        // State enDeplacementVersAcceuilAvecFournitureUsagee
        case enDeplacementVersAcceuilAvecFournitureUsagee:
        {
            if(IS_EVENT_TYPE_OF(OMNullEventId))
                {
                    NOTIFY_TRANSITION_STARTED("22");
                    popNullTransition();
                    NOTIFY_STATE_EXITED("ROOT.enDeplacementVersAcceuilAvecFournitureUsagee");
                    NOTIFY_STATE_ENTERED("ROOT.sendaction_22");
                    pushNullTransition();
                    rootState_subState = sendaction_22;
                    rootState_active = sendaction_22;
                    //#[ state sendaction_22.(Entry) 
                    OUT_PORT(psecretaire)->GEN(reqDechargementFournitureUsagee);
                    //#]
                    NOTIFY_TRANSITION_TERMINATED("22");
                    res = eventConsumed;
                }
            
        }
        break;
        // State sendaction_22
        case sendaction_22:
        {
            if(IS_EVENT_TYPE_OF(OMNullEventId))
                {
                    NOTIFY_TRANSITION_STARTED("23");
                    popNullTransition();
                    NOTIFY_STATE_EXITED("ROOT.sendaction_22");
                    NOTIFY_STATE_ENTERED("ROOT.enAttenteDechargementFournitureUsagee");
                    rootState_subState = enAttenteDechargementFournitureUsagee;
                    rootState_active = enAttenteDechargementFournitureUsagee;
                    NOTIFY_TRANSITION_TERMINATED("23");
                    res = eventConsumed;
                }
            
        }
        break;
        // State enAttenteDechargementFournitureUsagee
        case enAttenteDechargementFournitureUsagee:
        {
            if(IS_EVENT_TYPE_OF(repDechargementFournitureUsagee_InterfacesPkg_id))
                {
                    NOTIFY_TRANSITION_STARTED("24");
                    NOTIFY_STATE_EXITED("ROOT.enAttenteDechargementFournitureUsagee");
                    NOTIFY_STATE_ENTERED("ROOT.accepteventaction_24");
                    pushNullTransition();
                    rootState_subState = accepteventaction_24;
                    rootState_active = accepteventaction_24;
                    NOTIFY_TRANSITION_TERMINATED("24");
                    res = eventConsumed;
                }
            
        }
        break;
        case accepteventaction_24:
        {
            if(IS_EVENT_TYPE_OF(OMNullEventId))
                {
                    NOTIFY_TRANSITION_STARTED("25");
                    popNullTransition();
                    NOTIFY_STATE_EXITED("ROOT.accepteventaction_24");
                    NOTIFY_STATE_ENTERED("ROOT.enLiberationZone");
                    rootState_subState = enLiberationZone;
                    rootState_active = enLiberationZone;
                    rootState_timeout = scheduleTimeout(3000, "ROOT.enLiberationZone");
                    NOTIFY_TRANSITION_TERMINATED("25");
                    res = eventConsumed;
                }
            
        }
        break;
        default:
            break;
    }
    return res;
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedUc_CommanderFeutres::serializeAttributes(AOMSAttributes* aomsAttributes) const {
    aomsAttributes->addAttribute("retour", x2String(myReal->retour));
    OMAnimatedienseignant_Uc_CommanderFeutres::serializeAttributes(aomsAttributes);
    OMAnimatedisecretaire_Uc_CommanderFeutres::serializeAttributes(aomsAttributes);
}

void OMAnimatedUc_CommanderFeutres::serializeRelations(AOMSRelations* aomsRelations) const {
    OMAnimatedienseignant_Uc_CommanderFeutres::serializeRelations(aomsRelations);
    OMAnimatedisecretaire_Uc_CommanderFeutres::serializeRelations(aomsRelations);
}

void OMAnimatedUc_CommanderFeutres::rootState_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT");
    switch (myReal->rootState_subState) {
        case Uc_CommanderFeutres::enAttente:
        {
            enAttente_serializeStates(aomsState);
        }
        break;
        case Uc_CommanderFeutres::accepteventaction_1:
        {
            accepteventaction_1_serializeStates(aomsState);
        }
        break;
        case Uc_CommanderFeutres::enReceptionCommande:
        {
            enReceptionCommande_serializeStates(aomsState);
        }
        break;
        case Uc_CommanderFeutres::sendaction_3:
        {
            sendaction_3_serializeStates(aomsState);
        }
        break;
        case Uc_CommanderFeutres::sendaction_4:
        {
            sendaction_4_serializeStates(aomsState);
        }
        break;
        case Uc_CommanderFeutres::enDeplacementVersAccueil:
        {
            enDeplacementVersAccueil_serializeStates(aomsState);
        }
        break;
        case Uc_CommanderFeutres::sendaction_6:
        {
            sendaction_6_serializeStates(aomsState);
        }
        break;
        case Uc_CommanderFeutres::accepteventaction_7:
        {
            accepteventaction_7_serializeStates(aomsState);
        }
        break;
        case Uc_CommanderFeutres::enAttenteChargementFourniture:
        {
            enAttenteChargementFourniture_serializeStates(aomsState);
        }
        break;
        case Uc_CommanderFeutres::enDeplacementVersSalle:
        {
            enDeplacementVersSalle_serializeStates(aomsState);
        }
        break;
        case Uc_CommanderFeutres::sendaction_10:
        {
            sendaction_10_serializeStates(aomsState);
        }
        break;
        case Uc_CommanderFeutres::enAttenteDechargementDechargementFourniture:
        {
            enAttenteDechargementDechargementFourniture_serializeStates(aomsState);
        }
        break;
        case Uc_CommanderFeutres::sendaction_12:
        {
            sendaction_12_serializeStates(aomsState);
        }
        break;
        case Uc_CommanderFeutres::enAttenteFourntureUsagee:
        {
            enAttenteFourntureUsagee_serializeStates(aomsState);
        }
        break;
        case Uc_CommanderFeutres::accepteventaction_14:
        {
            accepteventaction_14_serializeStates(aomsState);
        }
        break;
        case Uc_CommanderFeutres::enLiberationZone:
        {
            enLiberationZone_serializeStates(aomsState);
        }
        break;
        case Uc_CommanderFeutres::sendaction_17:
        {
            sendaction_17_serializeStates(aomsState);
        }
        break;
        case Uc_CommanderFeutres::enAttenteChargmentFournitureUsagee:
        {
            enAttenteChargmentFournitureUsagee_serializeStates(aomsState);
        }
        break;
        case Uc_CommanderFeutres::accepteventaction_20:
        {
            accepteventaction_20_serializeStates(aomsState);
        }
        break;
        case Uc_CommanderFeutres::enDeplacementVersAcceuilAvecFournitureUsagee:
        {
            enDeplacementVersAcceuilAvecFournitureUsagee_serializeStates(aomsState);
        }
        break;
        case Uc_CommanderFeutres::sendaction_22:
        {
            sendaction_22_serializeStates(aomsState);
        }
        break;
        case Uc_CommanderFeutres::enAttenteDechargementFournitureUsagee:
        {
            enAttenteDechargementFournitureUsagee_serializeStates(aomsState);
        }
        break;
        case Uc_CommanderFeutres::accepteventaction_24:
        {
            accepteventaction_24_serializeStates(aomsState);
        }
        break;
        default:
            break;
    }
}

void OMAnimatedUc_CommanderFeutres::sendaction_6_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.sendaction_6");
}

void OMAnimatedUc_CommanderFeutres::sendaction_4_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.sendaction_4");
}

void OMAnimatedUc_CommanderFeutres::sendaction_3_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.sendaction_3");
}

void OMAnimatedUc_CommanderFeutres::sendaction_22_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.sendaction_22");
}

void OMAnimatedUc_CommanderFeutres::sendaction_17_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.sendaction_17");
}

void OMAnimatedUc_CommanderFeutres::sendaction_12_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.sendaction_12");
}

void OMAnimatedUc_CommanderFeutres::sendaction_10_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.sendaction_10");
}

void OMAnimatedUc_CommanderFeutres::enReceptionCommande_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.enReceptionCommande");
}

void OMAnimatedUc_CommanderFeutres::enLiberationZone_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.enLiberationZone");
}

void OMAnimatedUc_CommanderFeutres::enDeplacementVersSalle_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.enDeplacementVersSalle");
}

void OMAnimatedUc_CommanderFeutres::enDeplacementVersAccueil_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.enDeplacementVersAccueil");
}

void OMAnimatedUc_CommanderFeutres::enDeplacementVersAcceuilAvecFournitureUsagee_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.enDeplacementVersAcceuilAvecFournitureUsagee");
}

void OMAnimatedUc_CommanderFeutres::enAttenteFourntureUsagee_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.enAttenteFourntureUsagee");
}

void OMAnimatedUc_CommanderFeutres::enAttenteDechargementFournitureUsagee_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.enAttenteDechargementFournitureUsagee");
}

void OMAnimatedUc_CommanderFeutres::enAttenteDechargementDechargementFourniture_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.enAttenteDechargementDechargementFourniture");
}

void OMAnimatedUc_CommanderFeutres::enAttenteChargmentFournitureUsagee_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.enAttenteChargmentFournitureUsagee");
}

void OMAnimatedUc_CommanderFeutres::enAttenteChargementFourniture_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.enAttenteChargementFourniture");
}

void OMAnimatedUc_CommanderFeutres::enAttente_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.enAttente");
}

void OMAnimatedUc_CommanderFeutres::accepteventaction_7_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.accepteventaction_7");
}

void OMAnimatedUc_CommanderFeutres::accepteventaction_24_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.accepteventaction_24");
}

void OMAnimatedUc_CommanderFeutres::accepteventaction_20_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.accepteventaction_20");
}

void OMAnimatedUc_CommanderFeutres::accepteventaction_14_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.accepteventaction_14");
}

void OMAnimatedUc_CommanderFeutres::accepteventaction_1_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.accepteventaction_1");
}

static AOMClass* _Uc_CommanderFeutresSuper[2] = {
OMAnimatedienseignant_Uc_CommanderFeutres::staticGetClass(),
OMAnimatedisecretaire_Uc_CommanderFeutres::staticGetClass()};
//#]

IMPLEMENT_REACTIVE_META_M_P(Uc_CommanderFeutres, FunctionalAnalysisPkg::CommanderFeutresPkg, false, _Uc_CommanderFeutresSuper, 2, OMAnimatedUc_CommanderFeutres)

OMINIT_SUPERCLASS(ienseignant_Uc_CommanderFeutres, OMAnimatedienseignant_Uc_CommanderFeutres)

OMINIT_SUPERCLASS(isecretaire_Uc_CommanderFeutres, OMAnimatedisecretaire_Uc_CommanderFeutres)

OMREGISTER_REACTIVE_CLASS
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\Uc_CommanderFeutres.cpp
*********************************************************************/
