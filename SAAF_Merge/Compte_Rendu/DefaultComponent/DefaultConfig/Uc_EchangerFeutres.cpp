/********************************************************************
	Rhapsody	: 8.1.1 
	Login		: ganou2u
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Uc_EchangerFeutres
//!	Generated Date	: Thu, 8, Jun 2017  
	File Path	: DefaultComponent\DefaultConfig\Uc_EchangerFeutres.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX

#define _OMSTATECHART_ANIMATED
//#]

//## auto_generated
#include "Uc_EchangerFeutres.h"
//## event reqEchange()
#include "InterfacesPkg.h"
//#[ ignore
#define FunctionalAnalysisPkg_EchangerFeutresPkg_Uc_EchangerFeutres_Uc_EchangerFeutres_SERIALIZE OM_NO_OP

#define FunctionalAnalysisPkg_EchangerFeutresPkg_Uc_EchangerFeutres_LibererZone_SERIALIZE OM_NO_OP

#define FunctionalAnalysisPkg_EchangerFeutresPkg_Uc_EchangerFeutres_ReceptionnerEchange_SERIALIZE OM_NO_OP

#define FunctionalAnalysisPkg_EchangerFeutresPkg_Uc_EchangerFeutres_SeDeplacerVersAccueil_SERIALIZE OM_NO_OP

#define FunctionalAnalysisPkg_EchangerFeutresPkg_Uc_EchangerFeutres_SeDeplacerVersSalle_SERIALIZE OM_NO_OP
//#]

//## package FunctionalAnalysisPkg::EchangerFeutresPkg

//## class Uc_EchangerFeutres
//#[ ignore
Uc_EchangerFeutres::penseignant_C::InBound_C::InBound_C() {
    itsIenseignant_Uc_EchangerFeutres = NULL;
    port = NULL;
}

Uc_EchangerFeutres::penseignant_C::InBound_C::~InBound_C() {
    cleanUpRelations();
}

bool Uc_EchangerFeutres::penseignant_C::InBound_C::send(IOxfEvent* event, const IOxfEventGenerationParams& params) {
    bool res = false;
    if (event != NULL) {
        event->setPort(getPort());
        if (itsIenseignant_Uc_EchangerFeutres != NULL) {
            if (event->isTypeOf(reqEchange_InterfacesPkg_id)) {
                res = itsIenseignant_Uc_EchangerFeutres->send(event, params);
                return res;
            }
            if (event->isTypeOf(repChargementFournitureUsagee_InterfacesPkg_id)) {
                res = itsIenseignant_Uc_EchangerFeutres->send(event, params);
                return res;
            }
            if (event->isTypeOf(repDechargementFourniture_InterfacesPkg_id)) {
                res = itsIenseignant_Uc_EchangerFeutres->send(event, params);
                return res;
            }
        }
    }
    return res;
    
}

bool Uc_EchangerFeutres::penseignant_C::InBound_C::send(IOxfEvent* event) {
    bool res = false;
    if (event != NULL) {
        event->setPort(getPort());
        if (itsIenseignant_Uc_EchangerFeutres != NULL) {
            if (event->isTypeOf(reqEchange_InterfacesPkg_id)) {
                res = itsIenseignant_Uc_EchangerFeutres->send(event);
                return res;
            }
            if (event->isTypeOf(repChargementFournitureUsagee_InterfacesPkg_id)) {
                res = itsIenseignant_Uc_EchangerFeutres->send(event);
                return res;
            }
            if (event->isTypeOf(repDechargementFourniture_InterfacesPkg_id)) {
                res = itsIenseignant_Uc_EchangerFeutres->send(event);
                return res;
            }
        }
    }
    return res;
    
}

void Uc_EchangerFeutres::penseignant_C::InBound_C::setItsIenseignant_Uc_EchangerFeutres(ienseignant_Uc_EchangerFeutres* p_ienseignant_Uc_EchangerFeutres) {
    itsIenseignant_Uc_EchangerFeutres = p_ienseignant_Uc_EchangerFeutres;
}

Uc_EchangerFeutres::penseignant_C* Uc_EchangerFeutres::penseignant_C::InBound_C::getPort() const {
    return port;
}

void Uc_EchangerFeutres::penseignant_C::InBound_C::setPort(Uc_EchangerFeutres::penseignant_C* p_penseignant_C) {
    _setPort(p_penseignant_C);
}

void Uc_EchangerFeutres::penseignant_C::InBound_C::cleanUpRelations() {
    if(itsIenseignant_Uc_EchangerFeutres != NULL)
        {
            itsIenseignant_Uc_EchangerFeutres = NULL;
        }
    if(port != NULL)
        {
            port = NULL;
        }
}

void Uc_EchangerFeutres::penseignant_C::InBound_C::__setPort(Uc_EchangerFeutres::penseignant_C* p_penseignant_C) {
    port = p_penseignant_C;
}

void Uc_EchangerFeutres::penseignant_C::InBound_C::_setPort(Uc_EchangerFeutres::penseignant_C* p_penseignant_C) {
    __setPort(p_penseignant_C);
}

void Uc_EchangerFeutres::penseignant_C::InBound_C::_clearPort() {
    port = NULL;
}

Uc_EchangerFeutres::penseignant_C::OutBound_C::OutBound_C() {
    itsIUc_EchangerFeutres_enseignant = NULL;
}

Uc_EchangerFeutres::penseignant_C::OutBound_C::~OutBound_C() {
    cleanUpRelations();
}

bool Uc_EchangerFeutres::penseignant_C::OutBound_C::send(IOxfEvent* event, const IOxfEventGenerationParams& params) {
    bool res = false;
    if (event != NULL) {
        if (itsIUc_EchangerFeutres_enseignant != NULL) {
            if (event->isTypeOf(repEchange_InterfacesPkg_id)) {
                res = itsIUc_EchangerFeutres_enseignant->send(event, params);
                return res;
            }
            if (event->isTypeOf(reqChargementFournitureUsagee_InterfacesPkg_id)) {
                res = itsIUc_EchangerFeutres_enseignant->send(event, params);
                return res;
            }
            if (event->isTypeOf(reqDechargementFourniture_InterfacesPkg_id)) {
                res = itsIUc_EchangerFeutres_enseignant->send(event, params);
                return res;
            }
        }
    }
    return res;
    
}

bool Uc_EchangerFeutres::penseignant_C::OutBound_C::send(IOxfEvent* event) {
    bool res = false;
    if (event != NULL) {
        if (itsIUc_EchangerFeutres_enseignant != NULL) {
            if (event->isTypeOf(repEchange_InterfacesPkg_id)) {
                res = itsIUc_EchangerFeutres_enseignant->send(event);
                return res;
            }
            if (event->isTypeOf(reqChargementFournitureUsagee_InterfacesPkg_id)) {
                res = itsIUc_EchangerFeutres_enseignant->send(event);
                return res;
            }
            if (event->isTypeOf(reqDechargementFourniture_InterfacesPkg_id)) {
                res = itsIUc_EchangerFeutres_enseignant->send(event);
                return res;
            }
        }
    }
    return res;
    
}

void Uc_EchangerFeutres::penseignant_C::OutBound_C::setItsIUc_EchangerFeutres_enseignant(OMReactive* p_OMReactive) {
    itsIUc_EchangerFeutres_enseignant = p_OMReactive;
}

void Uc_EchangerFeutres::penseignant_C::OutBound_C::cleanUpRelations() {
    if(itsIUc_EchangerFeutres_enseignant != NULL)
        {
            itsIUc_EchangerFeutres_enseignant = NULL;
        }
}

Uc_EchangerFeutres::penseignant_C::penseignant_C() : _p_(0) {
    initRelations();
}

Uc_EchangerFeutres::penseignant_C::~penseignant_C() {
}

void Uc_EchangerFeutres::penseignant_C::connectUc_EchangerFeutres(Uc_EchangerFeutres* part) {
    InBound.setItsIenseignant_Uc_EchangerFeutres(part);
    InBound.setPort(this); // for IS_PORT macro support
    
}

iUc_EchangerFeutres_enseignant* Uc_EchangerFeutres::penseignant_C::getItsIUc_EchangerFeutres_enseignant() {
    return &OutBound;
}

ienseignant_Uc_EchangerFeutres* Uc_EchangerFeutres::penseignant_C::getItsIenseignant_Uc_EchangerFeutres() {
    return &InBound;
}

void Uc_EchangerFeutres::penseignant_C::setItsIUc_EchangerFeutres_enseignant(OMReactive* p_iUc_EchangerFeutres_enseignant) {
    OutBound.setItsIUc_EchangerFeutres_enseignant(p_iUc_EchangerFeutres_enseignant);
}

void Uc_EchangerFeutres::penseignant_C::setItsIenseignant_Uc_EchangerFeutres(ienseignant_Uc_EchangerFeutres* p_ienseignant_Uc_EchangerFeutres) {
    InBound.setItsIenseignant_Uc_EchangerFeutres(p_ienseignant_Uc_EchangerFeutres);
}

Uc_EchangerFeutres::penseignant_C::InBound_C* Uc_EchangerFeutres::penseignant_C::getInBound() const {
    return (Uc_EchangerFeutres::penseignant_C::InBound_C*) &InBound;
}

Uc_EchangerFeutres::penseignant_C::OutBound_C* Uc_EchangerFeutres::penseignant_C::getOutBound() const {
    return (Uc_EchangerFeutres::penseignant_C::OutBound_C*) &OutBound;
}

void Uc_EchangerFeutres::penseignant_C::initRelations() {
    InBound._setPort(this);
}

void Uc_EchangerFeutres::penseignant_C::destroy() {
}

Uc_EchangerFeutres::psecretaire_C::InBound_C::InBound_C() {
    itsIsecretaire_Uc_EchangerFeutres = NULL;
    port = NULL;
}

Uc_EchangerFeutres::psecretaire_C::InBound_C::~InBound_C() {
    cleanUpRelations();
}

bool Uc_EchangerFeutres::psecretaire_C::InBound_C::send(IOxfEvent* event, const IOxfEventGenerationParams& params) {
    bool res = false;
    if (event != NULL) {
        event->setPort(getPort());
        if (itsIsecretaire_Uc_EchangerFeutres != NULL) {
            if (event->isTypeOf(repEchangeFourniture_InterfacesPkg_id)) {
                res = itsIsecretaire_Uc_EchangerFeutres->send(event, params);
            }
        }
    }
    return res;
    
}

bool Uc_EchangerFeutres::psecretaire_C::InBound_C::send(IOxfEvent* event) {
    bool res = false;
    if (event != NULL) {
        event->setPort(getPort());
        if (itsIsecretaire_Uc_EchangerFeutres != NULL) {
            if (event->isTypeOf(repEchangeFourniture_InterfacesPkg_id)) {
                res = itsIsecretaire_Uc_EchangerFeutres->send(event);
            }
        }
    }
    return res;
    
}

void Uc_EchangerFeutres::psecretaire_C::InBound_C::setItsIsecretaire_Uc_EchangerFeutres(isecretaire_Uc_EchangerFeutres* p_isecretaire_Uc_EchangerFeutres) {
    itsIsecretaire_Uc_EchangerFeutres = p_isecretaire_Uc_EchangerFeutres;
}

Uc_EchangerFeutres::psecretaire_C* Uc_EchangerFeutres::psecretaire_C::InBound_C::getPort() const {
    return port;
}

void Uc_EchangerFeutres::psecretaire_C::InBound_C::setPort(Uc_EchangerFeutres::psecretaire_C* p_psecretaire_C) {
    _setPort(p_psecretaire_C);
}

void Uc_EchangerFeutres::psecretaire_C::InBound_C::cleanUpRelations() {
    if(itsIsecretaire_Uc_EchangerFeutres != NULL)
        {
            itsIsecretaire_Uc_EchangerFeutres = NULL;
        }
    if(port != NULL)
        {
            port = NULL;
        }
}

void Uc_EchangerFeutres::psecretaire_C::InBound_C::__setPort(Uc_EchangerFeutres::psecretaire_C* p_psecretaire_C) {
    port = p_psecretaire_C;
}

void Uc_EchangerFeutres::psecretaire_C::InBound_C::_setPort(Uc_EchangerFeutres::psecretaire_C* p_psecretaire_C) {
    __setPort(p_psecretaire_C);
}

void Uc_EchangerFeutres::psecretaire_C::InBound_C::_clearPort() {
    port = NULL;
}

Uc_EchangerFeutres::psecretaire_C::OutBound_C::OutBound_C() {
    itsIUc_EchangerFeutres_secretaire = NULL;
}

Uc_EchangerFeutres::psecretaire_C::OutBound_C::~OutBound_C() {
    cleanUpRelations();
}

bool Uc_EchangerFeutres::psecretaire_C::OutBound_C::send(IOxfEvent* event, const IOxfEventGenerationParams& params) {
    bool res = false;
    if (event != NULL) {
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

bool Uc_EchangerFeutres::psecretaire_C::OutBound_C::send(IOxfEvent* event) {
    bool res = false;
    if (event != NULL) {
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

void Uc_EchangerFeutres::psecretaire_C::OutBound_C::setItsIUc_EchangerFeutres_secretaire(OMReactive* p_OMReactive) {
    itsIUc_EchangerFeutres_secretaire = p_OMReactive;
}

void Uc_EchangerFeutres::psecretaire_C::OutBound_C::cleanUpRelations() {
    if(itsIUc_EchangerFeutres_secretaire != NULL)
        {
            itsIUc_EchangerFeutres_secretaire = NULL;
        }
}

Uc_EchangerFeutres::psecretaire_C::psecretaire_C() : _p_(0) {
    initRelations();
}

Uc_EchangerFeutres::psecretaire_C::~psecretaire_C() {
}

void Uc_EchangerFeutres::psecretaire_C::connectUc_EchangerFeutres(Uc_EchangerFeutres* part) {
    InBound.setItsIsecretaire_Uc_EchangerFeutres(part);
    InBound.setPort(this); // for IS_PORT macro support
    
}

iUc_EchangerFeutres_secretaire* Uc_EchangerFeutres::psecretaire_C::getItsIUc_EchangerFeutres_secretaire() {
    return &OutBound;
}

isecretaire_Uc_EchangerFeutres* Uc_EchangerFeutres::psecretaire_C::getItsIsecretaire_Uc_EchangerFeutres() {
    return &InBound;
}

void Uc_EchangerFeutres::psecretaire_C::setItsIUc_EchangerFeutres_secretaire(OMReactive* p_iUc_EchangerFeutres_secretaire) {
    OutBound.setItsIUc_EchangerFeutres_secretaire(p_iUc_EchangerFeutres_secretaire);
}

void Uc_EchangerFeutres::psecretaire_C::setItsIsecretaire_Uc_EchangerFeutres(isecretaire_Uc_EchangerFeutres* p_isecretaire_Uc_EchangerFeutres) {
    InBound.setItsIsecretaire_Uc_EchangerFeutres(p_isecretaire_Uc_EchangerFeutres);
}

Uc_EchangerFeutres::psecretaire_C::InBound_C* Uc_EchangerFeutres::psecretaire_C::getInBound() const {
    return (Uc_EchangerFeutres::psecretaire_C::InBound_C*) &InBound;
}

Uc_EchangerFeutres::psecretaire_C::OutBound_C* Uc_EchangerFeutres::psecretaire_C::getOutBound() const {
    return (Uc_EchangerFeutres::psecretaire_C::OutBound_C*) &OutBound;
}

void Uc_EchangerFeutres::psecretaire_C::initRelations() {
    InBound._setPort(this);
}

void Uc_EchangerFeutres::psecretaire_C::destroy() {
}
//#]

Uc_EchangerFeutres::Uc_EchangerFeutres(IOxfActive* theActiveContext) {
    NOTIFY_REACTIVE_CONSTRUCTOR(Uc_EchangerFeutres, Uc_EchangerFeutres(), 0, FunctionalAnalysisPkg_EchangerFeutresPkg_Uc_EchangerFeutres_Uc_EchangerFeutres_SERIALIZE);
    setActiveContext(theActiveContext, false);
    initRelations();
    initStatechart();
}

Uc_EchangerFeutres::~Uc_EchangerFeutres() {
    NOTIFY_DESTRUCTOR(~Uc_EchangerFeutres, false);
    cancelTimeouts();
}

void Uc_EchangerFeutres::LibererZone() {
    NOTIFY_OPERATION(LibererZone, LibererZone(), 0, FunctionalAnalysisPkg_EchangerFeutresPkg_Uc_EchangerFeutres_LibererZone_SERIALIZE);
    //#[ operation LibererZone()
    //#]
}

void Uc_EchangerFeutres::ReceptionnerEchange() {
    NOTIFY_OPERATION(ReceptionnerEchange, ReceptionnerEchange(), 0, FunctionalAnalysisPkg_EchangerFeutresPkg_Uc_EchangerFeutres_ReceptionnerEchange_SERIALIZE);
    //#[ operation ReceptionnerEchange()
    //#]
}

void Uc_EchangerFeutres::SeDeplacerVersAccueil() {
    NOTIFY_OPERATION(SeDeplacerVersAccueil, SeDeplacerVersAccueil(), 0, FunctionalAnalysisPkg_EchangerFeutresPkg_Uc_EchangerFeutres_SeDeplacerVersAccueil_SERIALIZE);
    //#[ operation SeDeplacerVersAccueil()
    //#]
}

void Uc_EchangerFeutres::SeDeplacerVersSalle() {
    NOTIFY_OPERATION(SeDeplacerVersSalle, SeDeplacerVersSalle(), 0, FunctionalAnalysisPkg_EchangerFeutresPkg_Uc_EchangerFeutres_SeDeplacerVersSalle_SERIALIZE);
    //#[ operation SeDeplacerVersSalle()
    //#]
}

Uc_EchangerFeutres::penseignant_C* Uc_EchangerFeutres::getPenseignant() const {
    return (Uc_EchangerFeutres::penseignant_C*) &penseignant;
}

Uc_EchangerFeutres::penseignant_C* Uc_EchangerFeutres::get_penseignant() const {
    return (Uc_EchangerFeutres::penseignant_C*) &penseignant;
}

Uc_EchangerFeutres::psecretaire_C* Uc_EchangerFeutres::getPsecretaire() const {
    return (Uc_EchangerFeutres::psecretaire_C*) &psecretaire;
}

Uc_EchangerFeutres::psecretaire_C* Uc_EchangerFeutres::get_psecretaire() const {
    return (Uc_EchangerFeutres::psecretaire_C*) &psecretaire;
}

bool Uc_EchangerFeutres::startBehavior() {
    bool done = false;
    done = OMReactive::startBehavior();
    return done;
}

void Uc_EchangerFeutres::initRelations() {
    if (get_penseignant() != NULL) {
        get_penseignant()->connectUc_EchangerFeutres(this);
    }
    if (get_psecretaire() != NULL) {
        get_psecretaire()->connectUc_EchangerFeutres(this);
    }
}

void Uc_EchangerFeutres::initStatechart() {
    rootState_subState = OMNonState;
    rootState_active = OMNonState;
    rootState_timeout = NULL;
}

void Uc_EchangerFeutres::cancelTimeouts() {
    cancel(rootState_timeout);
}

bool Uc_EchangerFeutres::cancelTimeout(const IOxfTimeout* arg) {
    bool res = false;
    if(rootState_timeout == arg)
        {
            rootState_timeout = NULL;
            res = true;
        }
    return res;
}

void Uc_EchangerFeutres::rootState_entDef() {
    {
        NOTIFY_STATE_ENTERED("ROOT");
        NOTIFY_TRANSITION_STARTED("0");
        NOTIFY_STATE_ENTERED("ROOT.enAttente");
        rootState_subState = enAttente;
        rootState_active = enAttente;
        NOTIFY_TRANSITION_TERMINATED("0");
    }
}

IOxfReactive::TakeEventStatus Uc_EchangerFeutres::rootState_processEvent() {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    switch (rootState_active) {
        // State enAttente
        case enAttente:
        {
            if(IS_EVENT_TYPE_OF(reqEchange_InterfacesPkg_id))
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
                    NOTIFY_STATE_ENTERED("ROOT.enReceptionEchange");
                    rootState_subState = enReceptionEchange;
                    rootState_active = enReceptionEchange;
                    rootState_timeout = scheduleTimeout(1000, "ROOT.enReceptionEchange");
                    NOTIFY_TRANSITION_TERMINATED("2");
                    res = eventConsumed;
                }
            
        }
        break;
        // State sendaction_2
        case sendaction_2:
        {
            if(IS_EVENT_TYPE_OF(OMNullEventId))
                {
                    NOTIFY_TRANSITION_STARTED("4");
                    popNullTransition();
                    NOTIFY_STATE_EXITED("ROOT.sendaction_2");
                    NOTIFY_STATE_ENTERED("ROOT.sendaction_4");
                    pushNullTransition();
                    rootState_subState = sendaction_4;
                    rootState_active = sendaction_4;
                    //#[ state sendaction_4.(Entry) 
                    OUT_PORT(psecretaire)->GEN(repEchangeSecretaire);
                    //#]
                    NOTIFY_TRANSITION_TERMINATED("4");
                    res = eventConsumed;
                }
            
        }
        break;
        // State enReceptionEchange
        case enReceptionEchange:
        {
            if(IS_EVENT_TYPE_OF(OMTimeoutEventId))
                {
                    if(getCurrentEvent() == rootState_timeout)
                        {
                            NOTIFY_TRANSITION_STARTED("3");
                            cancel(rootState_timeout);
                            NOTIFY_STATE_EXITED("ROOT.enReceptionEchange");
                            NOTIFY_STATE_ENTERED("ROOT.sendaction_2");
                            pushNullTransition();
                            rootState_subState = sendaction_2;
                            rootState_active = sendaction_2;
                            //#[ state sendaction_2.(Entry) 
                            OUT_PORT(penseignant)->GEN(repEchange);
                            //#]
                            NOTIFY_TRANSITION_TERMINATED("3");
                            res = eventConsumed;
                        }
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
                    NOTIFY_STATE_ENTERED("ROOT.enDeplacementVersSalle");
                    pushNullTransition();
                    rootState_subState = enDeplacementVersSalle;
                    rootState_active = enDeplacementVersSalle;
                    NOTIFY_TRANSITION_TERMINATED("5");
                    res = eventConsumed;
                }
            
        }
        break;
        // State enDeplacementVersSalle
        case enDeplacementVersSalle:
        {
            if(IS_EVENT_TYPE_OF(OMNullEventId))
                {
                    NOTIFY_TRANSITION_STARTED("6");
                    popNullTransition();
                    NOTIFY_STATE_EXITED("ROOT.enDeplacementVersSalle");
                    NOTIFY_STATE_ENTERED("ROOT.sendaction_6");
                    pushNullTransition();
                    rootState_subState = sendaction_6;
                    rootState_active = sendaction_6;
                    //#[ state sendaction_6.(Entry) 
                    OUT_PORT(penseignant)->GEN(reqChargementFournitureUsagee);
                    //#]
                    NOTIFY_TRANSITION_TERMINATED("6");
                    res = eventConsumed;
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
                    NOTIFY_STATE_ENTERED("ROOT.enAttenteChargementFournitureUsagee");
                    rootState_subState = enAttenteChargementFournitureUsagee;
                    rootState_active = enAttenteChargementFournitureUsagee;
                    NOTIFY_TRANSITION_TERMINATED("7");
                    res = eventConsumed;
                }
            
        }
        break;
        // State enAttenteChargementFournitureUsagee
        case enAttenteChargementFournitureUsagee:
        {
            if(IS_EVENT_TYPE_OF(repChargementFournitureUsagee_InterfacesPkg_id))
                {
                    NOTIFY_TRANSITION_STARTED("8");
                    NOTIFY_STATE_EXITED("ROOT.enAttenteChargementFournitureUsagee");
                    NOTIFY_STATE_ENTERED("ROOT.accepteventaction_9");
                    pushNullTransition();
                    rootState_subState = accepteventaction_9;
                    rootState_active = accepteventaction_9;
                    NOTIFY_TRANSITION_TERMINATED("8");
                    res = eventConsumed;
                }
            
        }
        break;
        case accepteventaction_9:
        {
            if(IS_EVENT_TYPE_OF(OMNullEventId))
                {
                    NOTIFY_TRANSITION_STARTED("9");
                    popNullTransition();
                    NOTIFY_STATE_EXITED("ROOT.accepteventaction_9");
                    NOTIFY_STATE_ENTERED("ROOT.enDeplacementVersAcceuil");
                    pushNullTransition();
                    rootState_subState = enDeplacementVersAcceuil;
                    rootState_active = enDeplacementVersAcceuil;
                    NOTIFY_TRANSITION_TERMINATED("9");
                    res = eventConsumed;
                }
            
        }
        break;
        // State enDeplacementVersAcceuil
        case enDeplacementVersAcceuil:
        {
            if(IS_EVENT_TYPE_OF(OMNullEventId))
                {
                    NOTIFY_TRANSITION_STARTED("10");
                    popNullTransition();
                    NOTIFY_STATE_EXITED("ROOT.enDeplacementVersAcceuil");
                    NOTIFY_STATE_ENTERED("ROOT.sendaction_11");
                    pushNullTransition();
                    rootState_subState = sendaction_11;
                    rootState_active = sendaction_11;
                    //#[ state sendaction_11.(Entry) 
                    OUT_PORT(psecretaire)->GEN(reqEchangeFourniture);
                    //#]
                    NOTIFY_TRANSITION_TERMINATED("10");
                    res = eventConsumed;
                }
            
        }
        break;
        // State sendaction_11
        case sendaction_11:
        {
            if(IS_EVENT_TYPE_OF(OMNullEventId))
                {
                    NOTIFY_TRANSITION_STARTED("11");
                    popNullTransition();
                    NOTIFY_STATE_EXITED("ROOT.sendaction_11");
                    NOTIFY_STATE_ENTERED("ROOT.enAttenteEchangeFouniture");
                    rootState_subState = enAttenteEchangeFouniture;
                    rootState_active = enAttenteEchangeFouniture;
                    NOTIFY_TRANSITION_TERMINATED("11");
                    res = eventConsumed;
                }
            
        }
        break;
        // State enAttenteEchangeFouniture
        case enAttenteEchangeFouniture:
        {
            if(IS_EVENT_TYPE_OF(repEchangeFourniture_InterfacesPkg_id))
                {
                    NOTIFY_TRANSITION_STARTED("12");
                    NOTIFY_STATE_EXITED("ROOT.enAttenteEchangeFouniture");
                    NOTIFY_STATE_ENTERED("ROOT.accepteventaction_13");
                    pushNullTransition();
                    rootState_subState = accepteventaction_13;
                    rootState_active = accepteventaction_13;
                    NOTIFY_TRANSITION_TERMINATED("12");
                    res = eventConsumed;
                }
            
        }
        break;
        case accepteventaction_13:
        {
            if(IS_EVENT_TYPE_OF(OMNullEventId))
                {
                    NOTIFY_TRANSITION_STARTED("13");
                    popNullTransition();
                    NOTIFY_STATE_EXITED("ROOT.accepteventaction_13");
                    NOTIFY_STATE_ENTERED("ROOT.enDeplacementVersSalleAvecFourniture");
                    pushNullTransition();
                    rootState_subState = enDeplacementVersSalleAvecFourniture;
                    rootState_active = enDeplacementVersSalleAvecFourniture;
                    NOTIFY_TRANSITION_TERMINATED("13");
                    res = eventConsumed;
                }
            
        }
        break;
        // State enDeplacementVersSalleAvecFourniture
        case enDeplacementVersSalleAvecFourniture:
        {
            if(IS_EVENT_TYPE_OF(OMNullEventId))
                {
                    NOTIFY_TRANSITION_STARTED("14");
                    popNullTransition();
                    NOTIFY_STATE_EXITED("ROOT.enDeplacementVersSalleAvecFourniture");
                    NOTIFY_STATE_ENTERED("ROOT.sendaction_16");
                    pushNullTransition();
                    rootState_subState = sendaction_16;
                    rootState_active = sendaction_16;
                    //#[ state sendaction_16.(Entry) 
                    OUT_PORT(penseignant)->GEN(reqDechargementFourniture);
                    //#]
                    NOTIFY_TRANSITION_TERMINATED("14");
                    res = eventConsumed;
                }
            
        }
        break;
        // State sendaction_16
        case sendaction_16:
        {
            if(IS_EVENT_TYPE_OF(OMNullEventId))
                {
                    NOTIFY_TRANSITION_STARTED("15");
                    popNullTransition();
                    NOTIFY_STATE_EXITED("ROOT.sendaction_16");
                    NOTIFY_STATE_ENTERED("ROOT.enAttenteDechargementNouvelleFourniture");
                    rootState_subState = enAttenteDechargementNouvelleFourniture;
                    rootState_active = enAttenteDechargementNouvelleFourniture;
                    NOTIFY_TRANSITION_TERMINATED("15");
                    res = eventConsumed;
                }
            
        }
        break;
        // State enAttenteDechargementNouvelleFourniture
        case enAttenteDechargementNouvelleFourniture:
        {
            if(IS_EVENT_TYPE_OF(repDechargementFourniture_InterfacesPkg_id))
                {
                    NOTIFY_TRANSITION_STARTED("16");
                    NOTIFY_STATE_EXITED("ROOT.enAttenteDechargementNouvelleFourniture");
                    NOTIFY_STATE_ENTERED("ROOT.accepteventaction_18");
                    pushNullTransition();
                    rootState_subState = accepteventaction_18;
                    rootState_active = accepteventaction_18;
                    NOTIFY_TRANSITION_TERMINATED("16");
                    res = eventConsumed;
                }
            
        }
        break;
        case accepteventaction_18:
        {
            if(IS_EVENT_TYPE_OF(OMNullEventId))
                {
                    NOTIFY_TRANSITION_STARTED("17");
                    popNullTransition();
                    NOTIFY_STATE_EXITED("ROOT.accepteventaction_18");
                    NOTIFY_STATE_ENTERED("ROOT.enLiberationZone");
                    pushNullTransition();
                    rootState_subState = enLiberationZone;
                    rootState_active = enLiberationZone;
                    NOTIFY_TRANSITION_TERMINATED("17");
                    res = eventConsumed;
                }
            
        }
        break;
        // State enLiberationZone
        case enLiberationZone:
        {
            if(IS_EVENT_TYPE_OF(OMNullEventId))
                {
                    NOTIFY_TRANSITION_STARTED("18");
                    popNullTransition();
                    NOTIFY_STATE_EXITED("ROOT.enLiberationZone");
                    NOTIFY_STATE_ENTERED("ROOT.enAttente");
                    rootState_subState = enAttente;
                    rootState_active = enAttente;
                    NOTIFY_TRANSITION_TERMINATED("18");
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
void OMAnimatedUc_EchangerFeutres::serializeAttributes(AOMSAttributes* aomsAttributes) const {
    OMAnimatedienseignant_Uc_EchangerFeutres::serializeAttributes(aomsAttributes);
    OMAnimatedisecretaire_Uc_EchangerFeutres::serializeAttributes(aomsAttributes);
}

void OMAnimatedUc_EchangerFeutres::serializeRelations(AOMSRelations* aomsRelations) const {
    OMAnimatedienseignant_Uc_EchangerFeutres::serializeRelations(aomsRelations);
    OMAnimatedisecretaire_Uc_EchangerFeutres::serializeRelations(aomsRelations);
}

void OMAnimatedUc_EchangerFeutres::rootState_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT");
    switch (myReal->rootState_subState) {
        case Uc_EchangerFeutres::enAttente:
        {
            enAttente_serializeStates(aomsState);
        }
        break;
        case Uc_EchangerFeutres::accepteventaction_1:
        {
            accepteventaction_1_serializeStates(aomsState);
        }
        break;
        case Uc_EchangerFeutres::sendaction_2:
        {
            sendaction_2_serializeStates(aomsState);
        }
        break;
        case Uc_EchangerFeutres::enReceptionEchange:
        {
            enReceptionEchange_serializeStates(aomsState);
        }
        break;
        case Uc_EchangerFeutres::sendaction_4:
        {
            sendaction_4_serializeStates(aomsState);
        }
        break;
        case Uc_EchangerFeutres::enDeplacementVersSalle:
        {
            enDeplacementVersSalle_serializeStates(aomsState);
        }
        break;
        case Uc_EchangerFeutres::sendaction_6:
        {
            sendaction_6_serializeStates(aomsState);
        }
        break;
        case Uc_EchangerFeutres::enAttenteChargementFournitureUsagee:
        {
            enAttenteChargementFournitureUsagee_serializeStates(aomsState);
        }
        break;
        case Uc_EchangerFeutres::accepteventaction_9:
        {
            accepteventaction_9_serializeStates(aomsState);
        }
        break;
        case Uc_EchangerFeutres::enDeplacementVersAcceuil:
        {
            enDeplacementVersAcceuil_serializeStates(aomsState);
        }
        break;
        case Uc_EchangerFeutres::sendaction_11:
        {
            sendaction_11_serializeStates(aomsState);
        }
        break;
        case Uc_EchangerFeutres::enAttenteEchangeFouniture:
        {
            enAttenteEchangeFouniture_serializeStates(aomsState);
        }
        break;
        case Uc_EchangerFeutres::accepteventaction_13:
        {
            accepteventaction_13_serializeStates(aomsState);
        }
        break;
        case Uc_EchangerFeutres::enDeplacementVersSalleAvecFourniture:
        {
            enDeplacementVersSalleAvecFourniture_serializeStates(aomsState);
        }
        break;
        case Uc_EchangerFeutres::sendaction_16:
        {
            sendaction_16_serializeStates(aomsState);
        }
        break;
        case Uc_EchangerFeutres::enAttenteDechargementNouvelleFourniture:
        {
            enAttenteDechargementNouvelleFourniture_serializeStates(aomsState);
        }
        break;
        case Uc_EchangerFeutres::accepteventaction_18:
        {
            accepteventaction_18_serializeStates(aomsState);
        }
        break;
        case Uc_EchangerFeutres::enLiberationZone:
        {
            enLiberationZone_serializeStates(aomsState);
        }
        break;
        default:
            break;
    }
}

void OMAnimatedUc_EchangerFeutres::sendaction_6_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.sendaction_6");
}

void OMAnimatedUc_EchangerFeutres::sendaction_4_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.sendaction_4");
}

void OMAnimatedUc_EchangerFeutres::sendaction_2_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.sendaction_2");
}

void OMAnimatedUc_EchangerFeutres::sendaction_16_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.sendaction_16");
}

void OMAnimatedUc_EchangerFeutres::sendaction_11_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.sendaction_11");
}

void OMAnimatedUc_EchangerFeutres::enReceptionEchange_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.enReceptionEchange");
}

void OMAnimatedUc_EchangerFeutres::enLiberationZone_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.enLiberationZone");
}

void OMAnimatedUc_EchangerFeutres::enDeplacementVersSalleAvecFourniture_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.enDeplacementVersSalleAvecFourniture");
}

void OMAnimatedUc_EchangerFeutres::enDeplacementVersSalle_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.enDeplacementVersSalle");
}

void OMAnimatedUc_EchangerFeutres::enDeplacementVersAcceuil_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.enDeplacementVersAcceuil");
}

void OMAnimatedUc_EchangerFeutres::enAttenteEchangeFouniture_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.enAttenteEchangeFouniture");
}

void OMAnimatedUc_EchangerFeutres::enAttenteDechargementNouvelleFourniture_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.enAttenteDechargementNouvelleFourniture");
}

void OMAnimatedUc_EchangerFeutres::enAttenteChargementFournitureUsagee_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.enAttenteChargementFournitureUsagee");
}

void OMAnimatedUc_EchangerFeutres::enAttente_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.enAttente");
}

void OMAnimatedUc_EchangerFeutres::accepteventaction_9_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.accepteventaction_9");
}

void OMAnimatedUc_EchangerFeutres::accepteventaction_18_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.accepteventaction_18");
}

void OMAnimatedUc_EchangerFeutres::accepteventaction_13_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.accepteventaction_13");
}

void OMAnimatedUc_EchangerFeutres::accepteventaction_1_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.accepteventaction_1");
}

static AOMClass* _Uc_EchangerFeutresSuper[2] = {
OMAnimatedienseignant_Uc_EchangerFeutres::staticGetClass(),
OMAnimatedisecretaire_Uc_EchangerFeutres::staticGetClass()};
//#]

IMPLEMENT_REACTIVE_META_M_P(Uc_EchangerFeutres, FunctionalAnalysisPkg::EchangerFeutresPkg, false, _Uc_EchangerFeutresSuper, 2, OMAnimatedUc_EchangerFeutres)

OMINIT_SUPERCLASS(ienseignant_Uc_EchangerFeutres, OMAnimatedienseignant_Uc_EchangerFeutres)

OMINIT_SUPERCLASS(isecretaire_Uc_EchangerFeutres, OMAnimatedisecretaire_Uc_EchangerFeutres)

OMREGISTER_REACTIVE_CLASS
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\Uc_EchangerFeutres.cpp
*********************************************************************/
