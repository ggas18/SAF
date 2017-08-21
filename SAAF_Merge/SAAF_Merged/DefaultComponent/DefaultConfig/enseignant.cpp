/********************************************************************
	Rhapsody	: 8.1.1 
	Login		: ganou2u
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: enseignant
//!	Generated Date	: Thu, 8, Jun 2017  
	File Path	: DefaultComponent\DefaultConfig\enseignant.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
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

static AOMClass* _enseignantSuper[2] = {
OMAnimatediUc_CommanderFeutres_enseignant::staticGetClass(),
OMAnimatediUc_EchangerFeutres_enseignant::staticGetClass()};
//#]

IMPLEMENT_REACTIVE_META_M_SIMPLE_P(enseignant, ActorPkg, false, _enseignantSuper, 2, OMAnimatedenseignant)

OMINIT_SUPERCLASS(iUc_CommanderFeutres_enseignant, OMAnimatediUc_CommanderFeutres_enseignant)

OMINIT_SUPERCLASS(iUc_EchangerFeutres_enseignant, OMAnimatediUc_EchangerFeutres_enseignant)

OMREGISTER_REACTIVE_CLASS
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\enseignant.cpp
*********************************************************************/
