/********************************************************************
	Rhapsody	: 8.1.1 
	Login		: GANOU Arouna
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: secretaire
//!	Generated Date	: Sun, 11, Jun 2017  
	File Path	: DefaultComponent/DefaultConfig/secretaire.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX

#define _OMSTATECHART_ANIMATED
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
    initStatechart();
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

OMBoolean secretaire::getPrevenue() const {
    return prevenue;
}

void secretaire::setPrevenue(OMBoolean p_prevenue) {
    prevenue = p_prevenue;
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

void secretaire::initStatechart() {
    rootState_subState = OMNonState;
    rootState_active = OMNonState;
}

void secretaire::rootState_entDef() {
    {
        NOTIFY_STATE_ENTERED("ROOT");
        NOTIFY_TRANSITION_STARTED("0");
        NOTIFY_STATE_ENTERED("ROOT.auTravail");
        rootState_subState = auTravail;
        rootState_active = auTravail;
        NOTIFY_TRANSITION_TERMINATED("0");
    }
}

IOxfReactive::TakeEventStatus secretaire::rootState_processEvent() {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    switch (rootState_active) {
        // State auTravail
        case auTravail:
        {
            res = auTravail_handleEvent();
        }
        break;
        case accepteventaction_2:
        {
            if(IS_EVENT_TYPE_OF(OMNullEventId))
                {
                    NOTIFY_TRANSITION_STARTED("8");
                    popNullTransition();
                    NOTIFY_STATE_EXITED("ROOT.accepteventaction_2");
                    //#[ transition 8 
                    prevenue==true;
                    //#]
                    NOTIFY_STATE_ENTERED("ROOT.auTravail");
                    rootState_subState = auTravail;
                    rootState_active = auTravail;
                    NOTIFY_TRANSITION_TERMINATED("8");
                    res = eventConsumed;
                }
            
        }
        break;
        case accepteventaction_6:
        {
            if(IS_EVENT_TYPE_OF(OMNullEventId))
                {
                    NOTIFY_TRANSITION_STARTED("9");
                    popNullTransition();
                    NOTIFY_STATE_EXITED("ROOT.accepteventaction_6");
                    //#[ transition 9 
                    prevenue==true;
                    //#]
                    NOTIFY_STATE_ENTERED("ROOT.auTravail");
                    rootState_subState = auTravail;
                    rootState_active = auTravail;
                    NOTIFY_TRANSITION_TERMINATED("9");
                    res = eventConsumed;
                }
            
        }
        break;
        // State enChargementFourniture
        case enChargementFourniture:
        {
            if(IS_EVENT_TYPE_OF(OMNullEventId))
                {
                    NOTIFY_TRANSITION_STARTED("3");
                    popNullTransition();
                    NOTIFY_STATE_EXITED("ROOT.enChargementFourniture");
                    NOTIFY_STATE_ENTERED("ROOT.sendaction_9");
                    pushNullTransition();
                    rootState_subState = sendaction_9;
                    rootState_active = sendaction_9;
                    //#[ state sendaction_9.(Entry) 
                    OUT_PORT(pUc_EchangerFeutres)->GEN(repEchangeFourniture);
                    //#]
                    NOTIFY_TRANSITION_TERMINATED("3");
                    res = eventConsumed;
                }
            
        }
        break;
        // State sendaction_9
        case sendaction_9:
        {
            if(IS_EVENT_TYPE_OF(OMNullEventId))
                {
                    NOTIFY_TRANSITION_STARTED("4");
                    popNullTransition();
                    NOTIFY_STATE_EXITED("ROOT.sendaction_9");
                    NOTIFY_STATE_ENTERED("ROOT.auTravail");
                    rootState_subState = auTravail;
                    rootState_active = auTravail;
                    NOTIFY_TRANSITION_TERMINATED("4");
                    res = eventConsumed;
                }
            
        }
        break;
        case accepteventaction_10:
        {
            if(IS_EVENT_TYPE_OF(OMNullEventId))
                {
                    NOTIFY_TRANSITION_STARTED("6");
                    popNullTransition();
                    NOTIFY_STATE_EXITED("ROOT.accepteventaction_10");
                    NOTIFY_STATE_ENTERED("ROOT.enDechargementFournitureUsagee");
                    pushNullTransition();
                    rootState_subState = enDechargementFournitureUsagee;
                    rootState_active = enDechargementFournitureUsagee;
                    NOTIFY_TRANSITION_TERMINATED("6");
                    res = eventConsumed;
                }
            
        }
        break;
        // State enDechargementFournitureUsagee
        case enDechargementFournitureUsagee:
        {
            if(IS_EVENT_TYPE_OF(OMNullEventId))
                {
                    NOTIFY_TRANSITION_STARTED("12");
                    popNullTransition();
                    NOTIFY_STATE_EXITED("ROOT.enDechargementFournitureUsagee");
                    NOTIFY_STATE_ENTERED("ROOT.sendaction_15");
                    pushNullTransition();
                    rootState_subState = sendaction_15;
                    rootState_active = sendaction_15;
                    //#[ state sendaction_15.(Entry) 
                    OUT_PORT(pUc_EchangerFeutres)->GEN(repDechargementFournitureUsagee);
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
                    NOTIFY_TRANSITION_STARTED("7");
                    popNullTransition();
                    NOTIFY_STATE_EXITED("ROOT.sendaction_12");
                    NOTIFY_STATE_ENTERED("ROOT.auTravail");
                    rootState_subState = auTravail;
                    rootState_active = auTravail;
                    NOTIFY_TRANSITION_TERMINATED("7");
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
                    NOTIFY_STATE_ENTERED("ROOT.enChargementFourniture");
                    pushNullTransition();
                    rootState_subState = enChargementFourniture;
                    rootState_active = enChargementFourniture;
                    NOTIFY_TRANSITION_TERMINATED("11");
                    res = eventConsumed;
                }
            
        }
        break;
        // State sendaction_15
        case sendaction_15:
        {
            if(IS_EVENT_TYPE_OF(OMNullEventId))
                {
                    NOTIFY_TRANSITION_STARTED("13");
                    popNullTransition();
                    NOTIFY_STATE_EXITED("ROOT.sendaction_15");
                    NOTIFY_STATE_ENTERED("ROOT.sendaction_12");
                    pushNullTransition();
                    rootState_subState = sendaction_12;
                    rootState_active = sendaction_12;
                    //#[ state sendaction_12.(Entry) 
                    OUT_PORT(pUc_CommanderFeutres)->GEN(repDechargementFournitureUsagee);
                    //#]
                    NOTIFY_TRANSITION_TERMINATED("13");
                    res = eventConsumed;
                }
            
        }
        break;
        default:
            break;
    }
    return res;
}

IOxfReactive::TakeEventStatus secretaire::auTravail_handleEvent() {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    if(IS_EVENT_TYPE_OF(reqChargementFourniture_InterfacesPkg_id))
        {
            NOTIFY_TRANSITION_STARTED("10");
            NOTIFY_STATE_EXITED("ROOT.auTravail");
            NOTIFY_STATE_ENTERED("ROOT.accepteventaction_14");
            pushNullTransition();
            rootState_subState = accepteventaction_14;
            rootState_active = accepteventaction_14;
            NOTIFY_TRANSITION_TERMINATED("10");
            res = eventConsumed;
        }
    else if(IS_EVENT_TYPE_OF(repEchangeFourniture_InterfacesPkg_id))
        {
            NOTIFY_TRANSITION_STARTED("2");
            NOTIFY_STATE_EXITED("ROOT.auTravail");
            NOTIFY_STATE_ENTERED("ROOT.accepteventaction_6");
            pushNullTransition();
            rootState_subState = accepteventaction_6;
            rootState_active = accepteventaction_6;
            NOTIFY_TRANSITION_TERMINATED("2");
            res = eventConsumed;
        }
    else if(IS_EVENT_TYPE_OF(repCommandeSecretaire_InterfacesPkg_id))
        {
            NOTIFY_TRANSITION_STARTED("1");
            NOTIFY_STATE_EXITED("ROOT.auTravail");
            NOTIFY_STATE_ENTERED("ROOT.accepteventaction_2");
            pushNullTransition();
            rootState_subState = accepteventaction_2;
            rootState_active = accepteventaction_2;
            NOTIFY_TRANSITION_TERMINATED("1");
            res = eventConsumed;
        }
    else if(IS_EVENT_TYPE_OF(reqDechargementFournitureUsagee_InterfacesPkg_id))
        {
            NOTIFY_TRANSITION_STARTED("5");
            NOTIFY_STATE_EXITED("ROOT.auTravail");
            NOTIFY_STATE_ENTERED("ROOT.accepteventaction_10");
            pushNullTransition();
            rootState_subState = accepteventaction_10;
            rootState_active = accepteventaction_10;
            NOTIFY_TRANSITION_TERMINATED("5");
            res = eventConsumed;
        }
    
    return res;
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedsecretaire::serializeAttributes(AOMSAttributes* aomsAttributes) const {
    aomsAttributes->addAttribute("prevenue", x2String(myReal->prevenue));
    OMAnimatediUc_CommanderFeutres_secretaire::serializeAttributes(aomsAttributes);
    OMAnimatediUc_EchangerFeutres_secretaire::serializeAttributes(aomsAttributes);
}

void OMAnimatedsecretaire::serializeRelations(AOMSRelations* aomsRelations) const {
    OMAnimatediUc_CommanderFeutres_secretaire::serializeRelations(aomsRelations);
    OMAnimatediUc_EchangerFeutres_secretaire::serializeRelations(aomsRelations);
}

void OMAnimatedsecretaire::rootState_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT");
    switch (myReal->rootState_subState) {
        case secretaire::auTravail:
        {
            auTravail_serializeStates(aomsState);
        }
        break;
        case secretaire::accepteventaction_2:
        {
            accepteventaction_2_serializeStates(aomsState);
        }
        break;
        case secretaire::accepteventaction_6:
        {
            accepteventaction_6_serializeStates(aomsState);
        }
        break;
        case secretaire::enChargementFourniture:
        {
            enChargementFourniture_serializeStates(aomsState);
        }
        break;
        case secretaire::sendaction_9:
        {
            sendaction_9_serializeStates(aomsState);
        }
        break;
        case secretaire::accepteventaction_10:
        {
            accepteventaction_10_serializeStates(aomsState);
        }
        break;
        case secretaire::enDechargementFournitureUsagee:
        {
            enDechargementFournitureUsagee_serializeStates(aomsState);
        }
        break;
        case secretaire::sendaction_12:
        {
            sendaction_12_serializeStates(aomsState);
        }
        break;
        case secretaire::accepteventaction_14:
        {
            accepteventaction_14_serializeStates(aomsState);
        }
        break;
        case secretaire::sendaction_15:
        {
            sendaction_15_serializeStates(aomsState);
        }
        break;
        default:
            break;
    }
}

void OMAnimatedsecretaire::sendaction_9_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.sendaction_9");
}

void OMAnimatedsecretaire::sendaction_15_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.sendaction_15");
}

void OMAnimatedsecretaire::sendaction_12_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.sendaction_12");
}

void OMAnimatedsecretaire::enDechargementFournitureUsagee_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.enDechargementFournitureUsagee");
}

void OMAnimatedsecretaire::enChargementFourniture_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.enChargementFourniture");
}

void OMAnimatedsecretaire::auTravail_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.auTravail");
}

void OMAnimatedsecretaire::accepteventaction_6_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.accepteventaction_6");
}

void OMAnimatedsecretaire::accepteventaction_2_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.accepteventaction_2");
}

void OMAnimatedsecretaire::accepteventaction_14_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.accepteventaction_14");
}

void OMAnimatedsecretaire::accepteventaction_10_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.accepteventaction_10");
}

static AOMClass* _secretaireSuper[2] = {
OMAnimatediUc_CommanderFeutres_secretaire::staticGetClass(),
OMAnimatediUc_EchangerFeutres_secretaire::staticGetClass()};
//#]

IMPLEMENT_REACTIVE_META_M_P(secretaire, ActorPkg, false, _secretaireSuper, 2, OMAnimatedsecretaire)

OMINIT_SUPERCLASS(iUc_CommanderFeutres_secretaire, OMAnimatediUc_CommanderFeutres_secretaire)

OMINIT_SUPERCLASS(iUc_EchangerFeutres_secretaire, OMAnimatediUc_EchangerFeutres_secretaire)

OMREGISTER_REACTIVE_CLASS
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent/DefaultConfig/secretaire.cpp
*********************************************************************/
