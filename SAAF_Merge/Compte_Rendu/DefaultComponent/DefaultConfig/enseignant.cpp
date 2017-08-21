/********************************************************************
	Rhapsody	: 8.1.1 
	Login		: GANOU Arouna
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: enseignant
//!	Generated Date	: Sun, 11, Jun 2017  
	File Path	: DefaultComponent/DefaultConfig/enseignant.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX

#define _OMSTATECHART_ANIMATED
//#]

//## auto_generated
#include "enseignant.h"
//## event repCommande()
#include "InterfacesPkg.h"
//#[ ignore
#define ActorPkg_enseignant_enseignant_SERIALIZE OM_NO_OP
//#]

//## package ActorPkg

//## actor enseignant
//#[ ignore
enseignant::pUc_CommanderFeutres_C::InBound_C::InBound_C() {
    itsIUc_CommanderFeutres_enseignant = NULL;
    port = NULL;
}

enseignant::pUc_CommanderFeutres_C::InBound_C::~InBound_C() {
    cleanUpRelations();
}

bool enseignant::pUc_CommanderFeutres_C::InBound_C::send(IOxfEvent* event, const IOxfEventGenerationParams& params) {
    bool res = false;
    if (event != NULL) {
        event->setPort(getPort());
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

bool enseignant::pUc_CommanderFeutres_C::InBound_C::send(IOxfEvent* event) {
    bool res = false;
    if (event != NULL) {
        event->setPort(getPort());
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

void enseignant::pUc_CommanderFeutres_C::InBound_C::setItsIUc_CommanderFeutres_enseignant(iUc_CommanderFeutres_enseignant* p_iUc_CommanderFeutres_enseignant) {
    itsIUc_CommanderFeutres_enseignant = p_iUc_CommanderFeutres_enseignant;
}

enseignant::pUc_CommanderFeutres_C* enseignant::pUc_CommanderFeutres_C::InBound_C::getPort() const {
    return port;
}

void enseignant::pUc_CommanderFeutres_C::InBound_C::setPort(enseignant::pUc_CommanderFeutres_C* p_pUc_CommanderFeutres_C) {
    _setPort(p_pUc_CommanderFeutres_C);
}

void enseignant::pUc_CommanderFeutres_C::InBound_C::cleanUpRelations() {
    if(itsIUc_CommanderFeutres_enseignant != NULL)
        {
            itsIUc_CommanderFeutres_enseignant = NULL;
        }
    if(port != NULL)
        {
            port = NULL;
        }
}

void enseignant::pUc_CommanderFeutres_C::InBound_C::__setPort(enseignant::pUc_CommanderFeutres_C* p_pUc_CommanderFeutres_C) {
    port = p_pUc_CommanderFeutres_C;
}

void enseignant::pUc_CommanderFeutres_C::InBound_C::_setPort(enseignant::pUc_CommanderFeutres_C* p_pUc_CommanderFeutres_C) {
    __setPort(p_pUc_CommanderFeutres_C);
}

void enseignant::pUc_CommanderFeutres_C::InBound_C::_clearPort() {
    port = NULL;
}

enseignant::pUc_CommanderFeutres_C::OutBound_C::OutBound_C() {
    itsIenseignant_Uc_CommanderFeutres = NULL;
}

enseignant::pUc_CommanderFeutres_C::OutBound_C::~OutBound_C() {
    cleanUpRelations();
}

bool enseignant::pUc_CommanderFeutres_C::OutBound_C::send(IOxfEvent* event, const IOxfEventGenerationParams& params) {
    bool res = false;
    if (event != NULL) {
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

bool enseignant::pUc_CommanderFeutres_C::OutBound_C::send(IOxfEvent* event) {
    bool res = false;
    if (event != NULL) {
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

void enseignant::pUc_CommanderFeutres_C::OutBound_C::setItsIenseignant_Uc_CommanderFeutres(OMReactive* p_OMReactive) {
    itsIenseignant_Uc_CommanderFeutres = p_OMReactive;
}

void enseignant::pUc_CommanderFeutres_C::OutBound_C::cleanUpRelations() {
    if(itsIenseignant_Uc_CommanderFeutres != NULL)
        {
            itsIenseignant_Uc_CommanderFeutres = NULL;
        }
}

enseignant::pUc_CommanderFeutres_C::pUc_CommanderFeutres_C() : _p_(0) {
    initRelations();
}

enseignant::pUc_CommanderFeutres_C::~pUc_CommanderFeutres_C() {
}

void enseignant::pUc_CommanderFeutres_C::connectEnseignant(enseignant* part) {
    InBound.setItsIUc_CommanderFeutres_enseignant(part);
    InBound.setPort(this); // for IS_PORT macro support
    
}

iUc_CommanderFeutres_enseignant* enseignant::pUc_CommanderFeutres_C::getItsIUc_CommanderFeutres_enseignant() {
    return &InBound;
}

ienseignant_Uc_CommanderFeutres* enseignant::pUc_CommanderFeutres_C::getItsIenseignant_Uc_CommanderFeutres() {
    return &OutBound;
}

void enseignant::pUc_CommanderFeutres_C::setItsIUc_CommanderFeutres_enseignant(iUc_CommanderFeutres_enseignant* p_iUc_CommanderFeutres_enseignant) {
    InBound.setItsIUc_CommanderFeutres_enseignant(p_iUc_CommanderFeutres_enseignant);
}

void enseignant::pUc_CommanderFeutres_C::setItsIenseignant_Uc_CommanderFeutres(OMReactive* p_ienseignant_Uc_CommanderFeutres) {
    OutBound.setItsIenseignant_Uc_CommanderFeutres(p_ienseignant_Uc_CommanderFeutres);
}

enseignant::pUc_CommanderFeutres_C::InBound_C* enseignant::pUc_CommanderFeutres_C::getInBound() const {
    return (enseignant::pUc_CommanderFeutres_C::InBound_C*) &InBound;
}

enseignant::pUc_CommanderFeutres_C::OutBound_C* enseignant::pUc_CommanderFeutres_C::getOutBound() const {
    return (enseignant::pUc_CommanderFeutres_C::OutBound_C*) &OutBound;
}

void enseignant::pUc_CommanderFeutres_C::initRelations() {
    InBound._setPort(this);
}

void enseignant::pUc_CommanderFeutres_C::destroy() {
}

enseignant::pUc_EchangerFeutres_C::InBound_C::InBound_C() {
    itsIUc_EchangerFeutres_enseignant = NULL;
    port = NULL;
}

enseignant::pUc_EchangerFeutres_C::InBound_C::~InBound_C() {
    cleanUpRelations();
}

bool enseignant::pUc_EchangerFeutres_C::InBound_C::send(IOxfEvent* event, const IOxfEventGenerationParams& params) {
    bool res = false;
    if (event != NULL) {
        event->setPort(getPort());
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

bool enseignant::pUc_EchangerFeutres_C::InBound_C::send(IOxfEvent* event) {
    bool res = false;
    if (event != NULL) {
        event->setPort(getPort());
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

void enseignant::pUc_EchangerFeutres_C::InBound_C::setItsIUc_EchangerFeutres_enseignant(iUc_EchangerFeutres_enseignant* p_iUc_EchangerFeutres_enseignant) {
    itsIUc_EchangerFeutres_enseignant = p_iUc_EchangerFeutres_enseignant;
}

enseignant::pUc_EchangerFeutres_C* enseignant::pUc_EchangerFeutres_C::InBound_C::getPort() const {
    return port;
}

void enseignant::pUc_EchangerFeutres_C::InBound_C::setPort(enseignant::pUc_EchangerFeutres_C* p_pUc_EchangerFeutres_C) {
    _setPort(p_pUc_EchangerFeutres_C);
}

void enseignant::pUc_EchangerFeutres_C::InBound_C::cleanUpRelations() {
    if(itsIUc_EchangerFeutres_enseignant != NULL)
        {
            itsIUc_EchangerFeutres_enseignant = NULL;
        }
    if(port != NULL)
        {
            port = NULL;
        }
}

void enseignant::pUc_EchangerFeutres_C::InBound_C::__setPort(enseignant::pUc_EchangerFeutres_C* p_pUc_EchangerFeutres_C) {
    port = p_pUc_EchangerFeutres_C;
}

void enseignant::pUc_EchangerFeutres_C::InBound_C::_setPort(enseignant::pUc_EchangerFeutres_C* p_pUc_EchangerFeutres_C) {
    __setPort(p_pUc_EchangerFeutres_C);
}

void enseignant::pUc_EchangerFeutres_C::InBound_C::_clearPort() {
    port = NULL;
}

enseignant::pUc_EchangerFeutres_C::OutBound_C::OutBound_C() {
    itsIenseignant_Uc_EchangerFeutres = NULL;
}

enseignant::pUc_EchangerFeutres_C::OutBound_C::~OutBound_C() {
    cleanUpRelations();
}

bool enseignant::pUc_EchangerFeutres_C::OutBound_C::send(IOxfEvent* event, const IOxfEventGenerationParams& params) {
    bool res = false;
    if (event != NULL) {
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

bool enseignant::pUc_EchangerFeutres_C::OutBound_C::send(IOxfEvent* event) {
    bool res = false;
    if (event != NULL) {
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

void enseignant::pUc_EchangerFeutres_C::OutBound_C::setItsIenseignant_Uc_EchangerFeutres(OMReactive* p_OMReactive) {
    itsIenseignant_Uc_EchangerFeutres = p_OMReactive;
}

void enseignant::pUc_EchangerFeutres_C::OutBound_C::cleanUpRelations() {
    if(itsIenseignant_Uc_EchangerFeutres != NULL)
        {
            itsIenseignant_Uc_EchangerFeutres = NULL;
        }
}

enseignant::pUc_EchangerFeutres_C::pUc_EchangerFeutres_C() : _p_(0) {
    initRelations();
}

enseignant::pUc_EchangerFeutres_C::~pUc_EchangerFeutres_C() {
}

void enseignant::pUc_EchangerFeutres_C::connectEnseignant(enseignant* part) {
    InBound.setItsIUc_EchangerFeutres_enseignant(part);
    InBound.setPort(this); // for IS_PORT macro support
    
}

iUc_EchangerFeutres_enseignant* enseignant::pUc_EchangerFeutres_C::getItsIUc_EchangerFeutres_enseignant() {
    return &InBound;
}

ienseignant_Uc_EchangerFeutres* enseignant::pUc_EchangerFeutres_C::getItsIenseignant_Uc_EchangerFeutres() {
    return &OutBound;
}

void enseignant::pUc_EchangerFeutres_C::setItsIUc_EchangerFeutres_enseignant(iUc_EchangerFeutres_enseignant* p_iUc_EchangerFeutres_enseignant) {
    InBound.setItsIUc_EchangerFeutres_enseignant(p_iUc_EchangerFeutres_enseignant);
}

void enseignant::pUc_EchangerFeutres_C::setItsIenseignant_Uc_EchangerFeutres(OMReactive* p_ienseignant_Uc_EchangerFeutres) {
    OutBound.setItsIenseignant_Uc_EchangerFeutres(p_ienseignant_Uc_EchangerFeutres);
}

enseignant::pUc_EchangerFeutres_C::InBound_C* enseignant::pUc_EchangerFeutres_C::getInBound() const {
    return (enseignant::pUc_EchangerFeutres_C::InBound_C*) &InBound;
}

enseignant::pUc_EchangerFeutres_C::OutBound_C* enseignant::pUc_EchangerFeutres_C::getOutBound() const {
    return (enseignant::pUc_EchangerFeutres_C::OutBound_C*) &OutBound;
}

void enseignant::pUc_EchangerFeutres_C::initRelations() {
    InBound._setPort(this);
}

void enseignant::pUc_EchangerFeutres_C::destroy() {
}
//#]

enseignant::enseignant(IOxfActive* theActiveContext) {
    NOTIFY_REACTIVE_CONSTRUCTOR(enseignant, enseignant(), 0, ActorPkg_enseignant_enseignant_SERIALIZE);
    setActiveContext(theActiveContext, false);
    initRelations();
    initStatechart();
}

enseignant::~enseignant() {
    NOTIFY_DESTRUCTOR(~enseignant, false);
}

enseignant::pUc_CommanderFeutres_C* enseignant::getPUc_CommanderFeutres() const {
    return (enseignant::pUc_CommanderFeutres_C*) &pUc_CommanderFeutres;
}

enseignant::pUc_CommanderFeutres_C* enseignant::get_pUc_CommanderFeutres() const {
    return (enseignant::pUc_CommanderFeutres_C*) &pUc_CommanderFeutres;
}

enseignant::pUc_EchangerFeutres_C* enseignant::getPUc_EchangerFeutres() const {
    return (enseignant::pUc_EchangerFeutres_C*) &pUc_EchangerFeutres;
}

enseignant::pUc_EchangerFeutres_C* enseignant::get_pUc_EchangerFeutres() const {
    return (enseignant::pUc_EchangerFeutres_C*) &pUc_EchangerFeutres;
}

bool enseignant::startBehavior() {
    bool done = false;
    done = OMReactive::startBehavior();
    return done;
}

void enseignant::initRelations() {
    if (get_pUc_CommanderFeutres() != NULL) {
        get_pUc_CommanderFeutres()->connectEnseignant(this);
    }
    if (get_pUc_EchangerFeutres() != NULL) {
        get_pUc_EchangerFeutres()->connectEnseignant(this);
    }
}

void enseignant::initStatechart() {
    rootState_subState = OMNonState;
    rootState_active = OMNonState;
}

void enseignant::rootState_entDef() {
    {
        NOTIFY_STATE_ENTERED("ROOT");
        NOTIFY_TRANSITION_STARTED("17");
        NOTIFY_STATE_ENTERED("ROOT.enCours");
        pushNullTransition();
        rootState_subState = enCours;
        rootState_active = enCours;
        NOTIFY_TRANSITION_TERMINATED("17");
    }
}

IOxfReactive::TakeEventStatus enseignant::rootState_processEvent() {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    switch (rootState_active) {
        // State enCours
        case enCours:
        {
            res = enCours_handleEvent();
        }
        break;
        // State enAttenteConfirmationEchange
        case enAttenteConfirmationEchange:
        {
            if(IS_EVENT_TYPE_OF(repEchange_InterfacesPkg_id))
                {
                    NOTIFY_TRANSITION_STARTED("5");
                    NOTIFY_STATE_EXITED("ROOT.enAttenteConfirmationEchange");
                    NOTIFY_STATE_ENTERED("ROOT.accepteventaction_5");
                    pushNullTransition();
                    rootState_subState = accepteventaction_5;
                    rootState_active = accepteventaction_5;
                    NOTIFY_TRANSITION_TERMINATED("5");
                    res = eventConsumed;
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
                    NOTIFY_STATE_ENTERED("ROOT.enAttenteConfirmationEchange");
                    rootState_subState = enAttenteConfirmationEchange;
                    rootState_active = enAttenteConfirmationEchange;
                    NOTIFY_TRANSITION_TERMINATED("4");
                    res = eventConsumed;
                }
            
        }
        break;
        case accepteventaction_5:
        {
            if(IS_EVENT_TYPE_OF(OMNullEventId))
                {
                    NOTIFY_TRANSITION_STARTED("6");
                    popNullTransition();
                    NOTIFY_STATE_EXITED("ROOT.accepteventaction_5");
                    NOTIFY_STATE_ENTERED("ROOT.enCours");
                    pushNullTransition();
                    rootState_subState = enCours;
                    rootState_active = enCours;
                    NOTIFY_TRANSITION_TERMINATED("6");
                    res = eventConsumed;
                }
            
        }
        break;
        // State sendaction_7
        case sendaction_7:
        {
            if(IS_EVENT_TYPE_OF(OMNullEventId))
                {
                    NOTIFY_TRANSITION_STARTED("0");
                    popNullTransition();
                    NOTIFY_STATE_EXITED("ROOT.sendaction_7");
                    NOTIFY_STATE_ENTERED("ROOT.enAttenteConfirmationCommande");
                    rootState_subState = enAttenteConfirmationCommande;
                    rootState_active = enAttenteConfirmationCommande;
                    NOTIFY_TRANSITION_TERMINATED("0");
                    res = eventConsumed;
                }
            
        }
        break;
        // State enAttenteConfirmationCommande
        case enAttenteConfirmationCommande:
        {
            if(IS_EVENT_TYPE_OF(repCommande_InterfacesPkg_id))
                {
                    NOTIFY_TRANSITION_STARTED("1");
                    NOTIFY_STATE_EXITED("ROOT.enAttenteConfirmationCommande");
                    NOTIFY_STATE_ENTERED("ROOT.accepteventaction_9");
                    pushNullTransition();
                    rootState_subState = accepteventaction_9;
                    rootState_active = accepteventaction_9;
                    NOTIFY_TRANSITION_TERMINATED("1");
                    res = eventConsumed;
                }
            
        }
        break;
        case accepteventaction_9:
        {
            if(IS_EVENT_TYPE_OF(OMNullEventId))
                {
                    NOTIFY_TRANSITION_STARTED("2");
                    popNullTransition();
                    NOTIFY_STATE_EXITED("ROOT.accepteventaction_9");
                    NOTIFY_STATE_ENTERED("ROOT.enCours");
                    pushNullTransition();
                    rootState_subState = enCours;
                    rootState_active = enCours;
                    NOTIFY_TRANSITION_TERMINATED("2");
                    res = eventConsumed;
                }
            
        }
        break;
        case accepteventaction_10:
        {
            if(IS_EVENT_TYPE_OF(OMNullEventId))
                {
                    NOTIFY_TRANSITION_STARTED("9");
                    popNullTransition();
                    NOTIFY_STATE_EXITED("ROOT.accepteventaction_10");
                    NOTIFY_STATE_ENTERED("ROOT.enDechargementFourniture");
                    pushNullTransition();
                    rootState_subState = enDechargementFourniture;
                    rootState_active = enDechargementFourniture;
                    NOTIFY_TRANSITION_TERMINATED("9");
                    res = eventConsumed;
                }
            
        }
        break;
        // State enDechargementFourniture
        case enDechargementFourniture:
        {
            if(IS_EVENT_TYPE_OF(OMNullEventId))
                {
                    NOTIFY_TRANSITION_STARTED("10");
                    popNullTransition();
                    NOTIFY_STATE_EXITED("ROOT.enDechargementFourniture");
                    NOTIFY_STATE_ENTERED("ROOT.sendaction_13");
                    pushNullTransition();
                    rootState_subState = sendaction_13;
                    rootState_active = sendaction_13;
                    //#[ state sendaction_13.(Entry) 
                    OUT_PORT(pUc_CommanderFeutres)->GEN(repDechargementFourniture);
                    //#]
                    NOTIFY_TRANSITION_TERMINATED("10");
                    res = eventConsumed;
                }
            
        }
        break;
        // State sendaction_13
        case sendaction_13:
        {
            if(IS_EVENT_TYPE_OF(OMNullEventId))
                {
                    NOTIFY_TRANSITION_STARTED("14");
                    popNullTransition();
                    NOTIFY_STATE_EXITED("ROOT.sendaction_13");
                    NOTIFY_STATE_ENTERED("ROOT.sendaction_20");
                    rootState_subState = sendaction_20;
                    rootState_active = sendaction_20;
                    //#[ state sendaction_20.(Entry) 
                    OUT_PORT(pUc_EchangerFeutres)->GEN(repDechargementFourniture);
                    //#]
                    NOTIFY_TRANSITION_TERMINATED("14");
                    res = eventConsumed;
                }
            
        }
        break;
        case accepteventaction_14:
        {
            if(IS_EVENT_TYPE_OF(OMNullEventId))
                {
                    NOTIFY_TRANSITION_STARTED("11");
                    popNullTransition();
                    NOTIFY_STATE_EXITED("ROOT.accepteventaction_14");
                    NOTIFY_STATE_ENTERED("ROOT.enReponseFournitureUsagee");
                    pushNullTransition();
                    rootState_subState = enReponseFournitureUsagee;
                    rootState_active = enReponseFournitureUsagee;
                    NOTIFY_TRANSITION_TERMINATED("11");
                    res = eventConsumed;
                }
            
        }
        break;
        // State enReponseFournitureUsagee
        case enReponseFournitureUsagee:
        {
            if(IS_EVENT_TYPE_OF(OMNullEventId))
                {
                    NOTIFY_TRANSITION_STARTED("12");
                    popNullTransition();
                    NOTIFY_STATE_EXITED("ROOT.enReponseFournitureUsagee");
                    NOTIFY_STATE_ENTERED("ROOT.sendaction_16");
                    pushNullTransition();
                    rootState_subState = sendaction_16;
                    rootState_active = sendaction_16;
                    //#[ state sendaction_16.(Entry) 
                    OUT_PORT(pUc_CommanderFeutres)->GEN(repFournitureUsagee());
                    //#]
                    NOTIFY_TRANSITION_TERMINATED("12");
                    res = eventConsumed;
                }
            
        }
        break;
        // State sendaction_16
        case sendaction_16:
        {
            if(IS_EVENT_TYPE_OF(OMNullEventId))
                {
                    NOTIFY_TRANSITION_STARTED("16");
                    popNullTransition();
                    NOTIFY_STATE_EXITED("ROOT.sendaction_16");
                    NOTIFY_STATE_ENTERED("ROOT.enCours");
                    pushNullTransition();
                    rootState_subState = enCours;
                    rootState_active = enCours;
                    NOTIFY_TRANSITION_TERMINATED("16");
                    res = eventConsumed;
                }
            
        }
        break;
        case accepteventaction_19:
        {
            if(IS_EVENT_TYPE_OF(OMNullEventId))
                {
                    NOTIFY_TRANSITION_STARTED("18");
                    popNullTransition();
                    NOTIFY_STATE_EXITED("ROOT.accepteventaction_19");
                    NOTIFY_STATE_ENTERED("ROOT.enChargementFournitureUsagee");
                    pushNullTransition();
                    rootState_subState = enChargementFournitureUsagee;
                    rootState_active = enChargementFournitureUsagee;
                    NOTIFY_TRANSITION_TERMINATED("18");
                    res = eventConsumed;
                }
            
        }
        break;
        // State sendaction_20
        case sendaction_20:
        {
            if(IS_EVENT_TYPE_OF(reqFournitureUsagee_InterfacesPkg_id))
                {
                    NOTIFY_TRANSITION_STARTED("15");
                    NOTIFY_STATE_EXITED("ROOT.sendaction_20");
                    NOTIFY_STATE_ENTERED("ROOT.accepteventaction_14");
                    pushNullTransition();
                    rootState_subState = accepteventaction_14;
                    rootState_active = accepteventaction_14;
                    NOTIFY_TRANSITION_TERMINATED("15");
                    res = eventConsumed;
                }
            
        }
        break;
        // State enChargementFournitureUsagee
        case enChargementFournitureUsagee:
        {
            if(IS_EVENT_TYPE_OF(OMNullEventId))
                {
                    NOTIFY_TRANSITION_STARTED("19");
                    popNullTransition();
                    NOTIFY_STATE_EXITED("ROOT.enChargementFournitureUsagee");
                    NOTIFY_STATE_ENTERED("ROOT.sendaction_22");
                    pushNullTransition();
                    rootState_subState = sendaction_22;
                    rootState_active = sendaction_22;
                    //#[ state sendaction_22.(Entry) 
                    OUT_PORT(pUc_CommanderFeutres)->GEN(repChargementFournitureUsagee);
                    //#]
                    NOTIFY_TRANSITION_TERMINATED("19");
                    res = eventConsumed;
                }
            
        }
        break;
        // State sendaction_22
        case sendaction_22:
        {
            if(IS_EVENT_TYPE_OF(OMNullEventId))
                {
                    NOTIFY_TRANSITION_STARTED("20");
                    popNullTransition();
                    NOTIFY_STATE_EXITED("ROOT.sendaction_22");
                    NOTIFY_STATE_ENTERED("ROOT.sendaction_23");
                    pushNullTransition();
                    rootState_subState = sendaction_23;
                    rootState_active = sendaction_23;
                    //#[ state sendaction_23.(Entry) 
                    OUT_PORT(pUc_EchangerFeutres)->GEN(repChargementFournitureUsagee);
                    //#]
                    NOTIFY_TRANSITION_TERMINATED("20");
                    res = eventConsumed;
                }
            
        }
        break;
        // State sendaction_23
        case sendaction_23:
        {
            if(IS_EVENT_TYPE_OF(OMNullEventId))
                {
                    NOTIFY_TRANSITION_STARTED("21");
                    popNullTransition();
                    NOTIFY_STATE_EXITED("ROOT.sendaction_23");
                    NOTIFY_STATE_ENTERED("ROOT.enCours");
                    pushNullTransition();
                    rootState_subState = enCours;
                    rootState_active = enCours;
                    NOTIFY_TRANSITION_TERMINATED("21");
                    res = eventConsumed;
                }
            
        }
        break;
        default:
            break;
    }
    return res;
}

IOxfReactive::TakeEventStatus enseignant::enCours_handleEvent() {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    if(IS_EVENT_TYPE_OF(OMNullEventId))
        {
            //## transition 3 
            if(feutreUsagee)
                {
                    NOTIFY_TRANSITION_STARTED("3");
                    popNullTransition();
                    NOTIFY_STATE_EXITED("ROOT.enCours");
                    NOTIFY_STATE_ENTERED("ROOT.sendaction_3");
                    pushNullTransition();
                    rootState_subState = sendaction_3;
                    rootState_active = sendaction_3;
                    //#[ state sendaction_3.(Entry) 
                    OUT_PORT(pUc_EchangerFeutres)->GEN(reqEchange);
                    //#]
                    NOTIFY_TRANSITION_TERMINATED("3");
                    res = eventConsumed;
                }
            else
                {
                    //## transition 7 
                    if(pasDeFeutre)
                        {
                            NOTIFY_TRANSITION_STARTED("7");
                            popNullTransition();
                            NOTIFY_STATE_EXITED("ROOT.enCours");
                            NOTIFY_STATE_ENTERED("ROOT.sendaction_7");
                            pushNullTransition();
                            rootState_subState = sendaction_7;
                            rootState_active = sendaction_7;
                            //#[ state sendaction_7.(Entry) 
                            OUT_PORT(pUc_CommanderFeutres)->GEN(reqCommande);
                            //#]
                            NOTIFY_TRANSITION_TERMINATED("7");
                            res = eventConsumed;
                        }
                }
        }
    else if(IS_EVENT_TYPE_OF(reqChargementFournitureUsagee_InterfacesPkg_id))
        {
            NOTIFY_TRANSITION_STARTED("13");
            popNullTransition();
            NOTIFY_STATE_EXITED("ROOT.enCours");
            NOTIFY_STATE_ENTERED("ROOT.accepteventaction_19");
            pushNullTransition();
            rootState_subState = accepteventaction_19;
            rootState_active = accepteventaction_19;
            NOTIFY_TRANSITION_TERMINATED("13");
            res = eventConsumed;
        }
    else if(IS_EVENT_TYPE_OF(reqDechargementFourniture_InterfacesPkg_id))
        {
            NOTIFY_TRANSITION_STARTED("8");
            popNullTransition();
            NOTIFY_STATE_EXITED("ROOT.enCours");
            NOTIFY_STATE_ENTERED("ROOT.accepteventaction_10");
            pushNullTransition();
            rootState_subState = accepteventaction_10;
            rootState_active = accepteventaction_10;
            NOTIFY_TRANSITION_TERMINATED("8");
            res = eventConsumed;
        }
    
    return res;
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedenseignant::serializeAttributes(AOMSAttributes* aomsAttributes) const {
    OMAnimatediUc_CommanderFeutres_enseignant::serializeAttributes(aomsAttributes);
    OMAnimatediUc_EchangerFeutres_enseignant::serializeAttributes(aomsAttributes);
}

void OMAnimatedenseignant::serializeRelations(AOMSRelations* aomsRelations) const {
    OMAnimatediUc_CommanderFeutres_enseignant::serializeRelations(aomsRelations);
    OMAnimatediUc_EchangerFeutres_enseignant::serializeRelations(aomsRelations);
}

void OMAnimatedenseignant::rootState_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT");
    switch (myReal->rootState_subState) {
        case enseignant::enCours:
        {
            enCours_serializeStates(aomsState);
        }
        break;
        case enseignant::enAttenteConfirmationEchange:
        {
            enAttenteConfirmationEchange_serializeStates(aomsState);
        }
        break;
        case enseignant::sendaction_3:
        {
            sendaction_3_serializeStates(aomsState);
        }
        break;
        case enseignant::accepteventaction_5:
        {
            accepteventaction_5_serializeStates(aomsState);
        }
        break;
        case enseignant::sendaction_7:
        {
            sendaction_7_serializeStates(aomsState);
        }
        break;
        case enseignant::enAttenteConfirmationCommande:
        {
            enAttenteConfirmationCommande_serializeStates(aomsState);
        }
        break;
        case enseignant::accepteventaction_9:
        {
            accepteventaction_9_serializeStates(aomsState);
        }
        break;
        case enseignant::accepteventaction_10:
        {
            accepteventaction_10_serializeStates(aomsState);
        }
        break;
        case enseignant::enDechargementFourniture:
        {
            enDechargementFourniture_serializeStates(aomsState);
        }
        break;
        case enseignant::sendaction_13:
        {
            sendaction_13_serializeStates(aomsState);
        }
        break;
        case enseignant::accepteventaction_14:
        {
            accepteventaction_14_serializeStates(aomsState);
        }
        break;
        case enseignant::enReponseFournitureUsagee:
        {
            enReponseFournitureUsagee_serializeStates(aomsState);
        }
        break;
        case enseignant::sendaction_16:
        {
            sendaction_16_serializeStates(aomsState);
        }
        break;
        case enseignant::accepteventaction_19:
        {
            accepteventaction_19_serializeStates(aomsState);
        }
        break;
        case enseignant::sendaction_20:
        {
            sendaction_20_serializeStates(aomsState);
        }
        break;
        case enseignant::enChargementFournitureUsagee:
        {
            enChargementFournitureUsagee_serializeStates(aomsState);
        }
        break;
        case enseignant::sendaction_22:
        {
            sendaction_22_serializeStates(aomsState);
        }
        break;
        case enseignant::sendaction_23:
        {
            sendaction_23_serializeStates(aomsState);
        }
        break;
        default:
            break;
    }
}

void OMAnimatedenseignant::sendaction_7_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.sendaction_7");
}

void OMAnimatedenseignant::sendaction_3_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.sendaction_3");
}

void OMAnimatedenseignant::sendaction_23_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.sendaction_23");
}

void OMAnimatedenseignant::sendaction_22_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.sendaction_22");
}

void OMAnimatedenseignant::sendaction_20_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.sendaction_20");
}

void OMAnimatedenseignant::sendaction_16_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.sendaction_16");
}

void OMAnimatedenseignant::sendaction_13_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.sendaction_13");
}

void OMAnimatedenseignant::enReponseFournitureUsagee_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.enReponseFournitureUsagee");
}

void OMAnimatedenseignant::enDechargementFourniture_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.enDechargementFourniture");
}

void OMAnimatedenseignant::enCours_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.enCours");
}

void OMAnimatedenseignant::enChargementFournitureUsagee_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.enChargementFournitureUsagee");
}

void OMAnimatedenseignant::enAttenteConfirmationEchange_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.enAttenteConfirmationEchange");
}

void OMAnimatedenseignant::enAttenteConfirmationCommande_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.enAttenteConfirmationCommande");
}

void OMAnimatedenseignant::accepteventaction_9_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.accepteventaction_9");
}

void OMAnimatedenseignant::accepteventaction_5_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.accepteventaction_5");
}

void OMAnimatedenseignant::accepteventaction_19_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.accepteventaction_19");
}

void OMAnimatedenseignant::accepteventaction_14_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.accepteventaction_14");
}

void OMAnimatedenseignant::accepteventaction_10_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.accepteventaction_10");
}

static AOMClass* _enseignantSuper[2] = {
OMAnimatediUc_CommanderFeutres_enseignant::staticGetClass(),
OMAnimatediUc_EchangerFeutres_enseignant::staticGetClass()};
//#]

IMPLEMENT_REACTIVE_META_M_P(enseignant, ActorPkg, false, _enseignantSuper, 2, OMAnimatedenseignant)

OMINIT_SUPERCLASS(iUc_CommanderFeutres_enseignant, OMAnimatediUc_CommanderFeutres_enseignant)

OMINIT_SUPERCLASS(iUc_EchangerFeutres_enseignant, OMAnimatediUc_EchangerFeutres_enseignant)

OMREGISTER_REACTIVE_CLASS
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent/DefaultConfig/enseignant.cpp
*********************************************************************/
