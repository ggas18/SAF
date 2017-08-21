/********************************************************************
	Rhapsody	: 8.1.1 
	Login		: GANOU Arouna
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: InterfacesPkg
//!	Generated Date	: Thu, 8, Jun 2017  
	File Path	: DefaultComponent/DefaultConfig/InterfacesPkg.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "InterfacesPkg.h"
//## auto_generated
#include "ienseignant_Uc_CommanderFeutres.h"
//## auto_generated
#include "ienseignant_Uc_EchangerFeutres.h"
//## auto_generated
#include "isecretaire_Uc_CommanderFeutres.h"
//## auto_generated
#include "isecretaire_Uc_EchangerFeutres.h"
//## auto_generated
#include "iUc_CommanderFeutres_enseignant.h"
//## auto_generated
#include "iUc_CommanderFeutres_secretaire.h"
//## auto_generated
#include "iUc_EchangerFeutres_enseignant.h"
//## auto_generated
#include "iUc_EchangerFeutres_secretaire.h"
//#[ ignore
#define reqCommande_SERIALIZE OM_NO_OP

#define reqCommande_UNSERIALIZE OM_NO_OP

#define reqCommande_CONSTRUCTOR reqCommande()

#define repCommande_SERIALIZE OM_NO_OP

#define repCommande_UNSERIALIZE OM_NO_OP

#define repCommande_CONSTRUCTOR repCommande()

#define repCommandeSecretaire_SERIALIZE OM_NO_OP

#define repCommandeSecretaire_UNSERIALIZE OM_NO_OP

#define repCommandeSecretaire_CONSTRUCTOR repCommandeSecretaire()

#define repChargementFourniture_SERIALIZE OM_NO_OP

#define repChargementFourniture_UNSERIALIZE OM_NO_OP

#define repChargementFourniture_CONSTRUCTOR repChargementFourniture()

#define reqChargementFourniture_SERIALIZE OM_NO_OP

#define reqChargementFourniture_UNSERIALIZE OM_NO_OP

#define reqChargementFourniture_CONSTRUCTOR reqChargementFourniture()

#define repDechargementFourniture_SERIALIZE OM_NO_OP

#define repDechargementFourniture_UNSERIALIZE OM_NO_OP

#define repDechargementFourniture_CONSTRUCTOR repDechargementFourniture()

#define reqDechargementFourniture_SERIALIZE OM_NO_OP

#define reqDechargementFourniture_UNSERIALIZE OM_NO_OP

#define reqDechargementFourniture_CONSTRUCTOR reqDechargementFourniture()

#define repFournitureUsagee_SERIALIZE OMADD_SER(retour, x2String(myEvent->retour))

#define repFournitureUsagee_UNSERIALIZE OMADD_UNSER(OMBoolean, retour, OMDestructiveString2X)

#define repFournitureUsagee_CONSTRUCTOR repFournitureUsagee(retour)

#define reqFournitureUsagee_SERIALIZE OM_NO_OP

#define reqFournitureUsagee_UNSERIALIZE OM_NO_OP

#define reqFournitureUsagee_CONSTRUCTOR reqFournitureUsagee()

#define repChargementFournitureUsagee_SERIALIZE OM_NO_OP

#define repChargementFournitureUsagee_UNSERIALIZE OM_NO_OP

#define repChargementFournitureUsagee_CONSTRUCTOR repChargementFournitureUsagee()

#define reqChargementFournitureUsagee_SERIALIZE OM_NO_OP

#define reqChargementFournitureUsagee_UNSERIALIZE OM_NO_OP

#define reqChargementFournitureUsagee_CONSTRUCTOR reqChargementFournitureUsagee()

#define repDechargementFournitureUsagee_SERIALIZE OM_NO_OP

#define repDechargementFournitureUsagee_UNSERIALIZE OM_NO_OP

#define repDechargementFournitureUsagee_CONSTRUCTOR repDechargementFournitureUsagee()

#define reqDechargementFournitureUsagee_SERIALIZE OM_NO_OP

#define reqDechargementFournitureUsagee_UNSERIALIZE OM_NO_OP

#define reqDechargementFournitureUsagee_CONSTRUCTOR reqDechargementFournitureUsagee()

#define reqEchange_SERIALIZE OM_NO_OP

#define reqEchange_UNSERIALIZE OM_NO_OP

#define reqEchange_CONSTRUCTOR reqEchange()

#define repEchange_SERIALIZE OM_NO_OP

#define repEchange_UNSERIALIZE OM_NO_OP

#define repEchange_CONSTRUCTOR repEchange()

#define repEchangeFourniture_SERIALIZE OM_NO_OP

#define repEchangeFourniture_UNSERIALIZE OM_NO_OP

#define repEchangeFourniture_CONSTRUCTOR repEchangeFourniture()

#define reqEchangeFourniture_SERIALIZE OM_NO_OP

#define reqEchangeFourniture_UNSERIALIZE OM_NO_OP

#define reqEchangeFourniture_CONSTRUCTOR reqEchangeFourniture()

#define repEchangeSecretaire_SERIALIZE OM_NO_OP

#define repEchangeSecretaire_UNSERIALIZE OM_NO_OP

#define repEchangeSecretaire_CONSTRUCTOR repEchangeSecretaire()
//#]

//## package InterfacesPkg


#ifdef _OMINSTRUMENT
static void serializeGlobalVars(AOMSAttributes* /* aomsAttributes */);

IMPLEMENT_META_PACKAGE(InterfacesPkg, InterfacesPkg)

static void serializeGlobalVars(AOMSAttributes* /* aomsAttributes */) {
}
#endif // _OMINSTRUMENT

//## event reqCommande()
reqCommande::reqCommande() {
    NOTIFY_EVENT_CONSTRUCTOR(reqCommande)
    setId(reqCommande_InterfacesPkg_id);
}

bool reqCommande::isTypeOf(const short id) const {
    return (reqCommande_InterfacesPkg_id==id);
}

IMPLEMENT_META_EVENT_P(reqCommande, InterfacesPkg, InterfacesPkg, reqCommande())

//## event repCommande()
repCommande::repCommande() {
    NOTIFY_EVENT_CONSTRUCTOR(repCommande)
    setId(repCommande_InterfacesPkg_id);
}

bool repCommande::isTypeOf(const short id) const {
    return (repCommande_InterfacesPkg_id==id);
}

IMPLEMENT_META_EVENT_P(repCommande, InterfacesPkg, InterfacesPkg, repCommande())

//## event repCommandeSecretaire()
repCommandeSecretaire::repCommandeSecretaire() {
    NOTIFY_EVENT_CONSTRUCTOR(repCommandeSecretaire)
    setId(repCommandeSecretaire_InterfacesPkg_id);
}

bool repCommandeSecretaire::isTypeOf(const short id) const {
    return (repCommandeSecretaire_InterfacesPkg_id==id);
}

IMPLEMENT_META_EVENT_P(repCommandeSecretaire, InterfacesPkg, InterfacesPkg, repCommandeSecretaire())

//## event repChargementFourniture()
repChargementFourniture::repChargementFourniture() {
    NOTIFY_EVENT_CONSTRUCTOR(repChargementFourniture)
    setId(repChargementFourniture_InterfacesPkg_id);
}

bool repChargementFourniture::isTypeOf(const short id) const {
    return (repChargementFourniture_InterfacesPkg_id==id);
}

IMPLEMENT_META_EVENT_P(repChargementFourniture, InterfacesPkg, InterfacesPkg, repChargementFourniture())

//## event reqChargementFourniture()
reqChargementFourniture::reqChargementFourniture() {
    NOTIFY_EVENT_CONSTRUCTOR(reqChargementFourniture)
    setId(reqChargementFourniture_InterfacesPkg_id);
}

bool reqChargementFourniture::isTypeOf(const short id) const {
    return (reqChargementFourniture_InterfacesPkg_id==id);
}

IMPLEMENT_META_EVENT_P(reqChargementFourniture, InterfacesPkg, InterfacesPkg, reqChargementFourniture())

//## event repDechargementFourniture()
repDechargementFourniture::repDechargementFourniture() {
    NOTIFY_EVENT_CONSTRUCTOR(repDechargementFourniture)
    setId(repDechargementFourniture_InterfacesPkg_id);
}

bool repDechargementFourniture::isTypeOf(const short id) const {
    return (repDechargementFourniture_InterfacesPkg_id==id);
}

IMPLEMENT_META_EVENT_P(repDechargementFourniture, InterfacesPkg, InterfacesPkg, repDechargementFourniture())

//## event reqDechargementFourniture()
reqDechargementFourniture::reqDechargementFourniture() {
    NOTIFY_EVENT_CONSTRUCTOR(reqDechargementFourniture)
    setId(reqDechargementFourniture_InterfacesPkg_id);
}

bool reqDechargementFourniture::isTypeOf(const short id) const {
    return (reqDechargementFourniture_InterfacesPkg_id==id);
}

IMPLEMENT_META_EVENT_P(reqDechargementFourniture, InterfacesPkg, InterfacesPkg, reqDechargementFourniture())

//## event repFournitureUsagee(OMBoolean)
repFournitureUsagee::repFournitureUsagee() {
    NOTIFY_EVENT_CONSTRUCTOR(repFournitureUsagee)
    setId(repFournitureUsagee_InterfacesPkg_id);
}

repFournitureUsagee::repFournitureUsagee(OMBoolean p_retour) : retour(p_retour) {
    NOTIFY_EVENT_CONSTRUCTOR(repFournitureUsagee)
    setId(repFournitureUsagee_InterfacesPkg_id);
}

bool repFournitureUsagee::isTypeOf(const short id) const {
    return (repFournitureUsagee_InterfacesPkg_id==id);
}

IMPLEMENT_META_EVENT_P(repFournitureUsagee, InterfacesPkg, InterfacesPkg, repFournitureUsagee(OMBoolean))

//## event reqFournitureUsagee()
reqFournitureUsagee::reqFournitureUsagee() {
    NOTIFY_EVENT_CONSTRUCTOR(reqFournitureUsagee)
    setId(reqFournitureUsagee_InterfacesPkg_id);
}

bool reqFournitureUsagee::isTypeOf(const short id) const {
    return (reqFournitureUsagee_InterfacesPkg_id==id);
}

IMPLEMENT_META_EVENT_P(reqFournitureUsagee, InterfacesPkg, InterfacesPkg, reqFournitureUsagee())

//## event repChargementFournitureUsagee()
repChargementFournitureUsagee::repChargementFournitureUsagee() {
    NOTIFY_EVENT_CONSTRUCTOR(repChargementFournitureUsagee)
    setId(repChargementFournitureUsagee_InterfacesPkg_id);
}

bool repChargementFournitureUsagee::isTypeOf(const short id) const {
    return (repChargementFournitureUsagee_InterfacesPkg_id==id);
}

IMPLEMENT_META_EVENT_P(repChargementFournitureUsagee, InterfacesPkg, InterfacesPkg, repChargementFournitureUsagee())

//## event reqChargementFournitureUsagee()
reqChargementFournitureUsagee::reqChargementFournitureUsagee() {
    NOTIFY_EVENT_CONSTRUCTOR(reqChargementFournitureUsagee)
    setId(reqChargementFournitureUsagee_InterfacesPkg_id);
}

bool reqChargementFournitureUsagee::isTypeOf(const short id) const {
    return (reqChargementFournitureUsagee_InterfacesPkg_id==id);
}

IMPLEMENT_META_EVENT_P(reqChargementFournitureUsagee, InterfacesPkg, InterfacesPkg, reqChargementFournitureUsagee())

//## event repDechargementFournitureUsagee()
repDechargementFournitureUsagee::repDechargementFournitureUsagee() {
    NOTIFY_EVENT_CONSTRUCTOR(repDechargementFournitureUsagee)
    setId(repDechargementFournitureUsagee_InterfacesPkg_id);
}

bool repDechargementFournitureUsagee::isTypeOf(const short id) const {
    return (repDechargementFournitureUsagee_InterfacesPkg_id==id);
}

IMPLEMENT_META_EVENT_P(repDechargementFournitureUsagee, InterfacesPkg, InterfacesPkg, repDechargementFournitureUsagee())

//## event reqDechargementFournitureUsagee()
reqDechargementFournitureUsagee::reqDechargementFournitureUsagee() {
    NOTIFY_EVENT_CONSTRUCTOR(reqDechargementFournitureUsagee)
    setId(reqDechargementFournitureUsagee_InterfacesPkg_id);
}

bool reqDechargementFournitureUsagee::isTypeOf(const short id) const {
    return (reqDechargementFournitureUsagee_InterfacesPkg_id==id);
}

IMPLEMENT_META_EVENT_P(reqDechargementFournitureUsagee, InterfacesPkg, InterfacesPkg, reqDechargementFournitureUsagee())

//## event reqEchange()
reqEchange::reqEchange() {
    NOTIFY_EVENT_CONSTRUCTOR(reqEchange)
    setId(reqEchange_InterfacesPkg_id);
}

bool reqEchange::isTypeOf(const short id) const {
    return (reqEchange_InterfacesPkg_id==id);
}

IMPLEMENT_META_EVENT_P(reqEchange, InterfacesPkg, InterfacesPkg, reqEchange())

//## event repEchange()
repEchange::repEchange() {
    NOTIFY_EVENT_CONSTRUCTOR(repEchange)
    setId(repEchange_InterfacesPkg_id);
}

bool repEchange::isTypeOf(const short id) const {
    return (repEchange_InterfacesPkg_id==id);
}

IMPLEMENT_META_EVENT_P(repEchange, InterfacesPkg, InterfacesPkg, repEchange())

//## event repEchangeFourniture()
repEchangeFourniture::repEchangeFourniture() {
    NOTIFY_EVENT_CONSTRUCTOR(repEchangeFourniture)
    setId(repEchangeFourniture_InterfacesPkg_id);
}

bool repEchangeFourniture::isTypeOf(const short id) const {
    return (repEchangeFourniture_InterfacesPkg_id==id);
}

IMPLEMENT_META_EVENT_P(repEchangeFourniture, InterfacesPkg, InterfacesPkg, repEchangeFourniture())

//## event reqEchangeFourniture()
reqEchangeFourniture::reqEchangeFourniture() {
    NOTIFY_EVENT_CONSTRUCTOR(reqEchangeFourniture)
    setId(reqEchangeFourniture_InterfacesPkg_id);
}

bool reqEchangeFourniture::isTypeOf(const short id) const {
    return (reqEchangeFourniture_InterfacesPkg_id==id);
}

IMPLEMENT_META_EVENT_P(reqEchangeFourniture, InterfacesPkg, InterfacesPkg, reqEchangeFourniture())

//## event repEchangeSecretaire()
repEchangeSecretaire::repEchangeSecretaire() {
    NOTIFY_EVENT_CONSTRUCTOR(repEchangeSecretaire)
    setId(repEchangeSecretaire_InterfacesPkg_id);
}

bool repEchangeSecretaire::isTypeOf(const short id) const {
    return (repEchangeSecretaire_InterfacesPkg_id==id);
}

IMPLEMENT_META_EVENT_P(repEchangeSecretaire, InterfacesPkg, InterfacesPkg, repEchangeSecretaire())

/*********************************************************************
	File Path	: DefaultComponent/DefaultConfig/InterfacesPkg.cpp
*********************************************************************/
