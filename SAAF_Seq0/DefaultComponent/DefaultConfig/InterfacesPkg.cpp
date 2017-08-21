/********************************************************************
	Rhapsody	: 8.1.1 
	Login		: GANOU Arouna
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: InterfacesPkg
//!	Generated Date	: Tue, 6, Jun 2017  
	File Path	: DefaultComponent\DefaultConfig\InterfacesPkg.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "InterfacesPkg.h"
//## auto_generated
#include "ienseignant_Uc_CommanderFeutres.h"
//## auto_generated
#include "isecretaire_Uc_CommanderFeutres.h"
//## auto_generated
#include "iUc_CommanderFeutres_enseignant.h"
//## auto_generated
#include "iUc_CommanderFeutres_secretaire.h"
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

#define repFournitureUsagee_SERIALIZE OM_NO_OP

#define repFournitureUsagee_UNSERIALIZE OM_NO_OP

#define repFournitureUsagee_CONSTRUCTOR repFournitureUsagee()

#define reqFournitureUsagee_SERIALIZE OM_NO_OP

#define reqFournitureUsagee_UNSERIALIZE OM_NO_OP

#define reqFournitureUsagee_CONSTRUCTOR reqFournitureUsagee()
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

//## event repFournitureUsagee()
repFournitureUsagee::repFournitureUsagee() {
    NOTIFY_EVENT_CONSTRUCTOR(repFournitureUsagee)
    setId(repFournitureUsagee_InterfacesPkg_id);
}

bool repFournitureUsagee::isTypeOf(const short id) const {
    return (repFournitureUsagee_InterfacesPkg_id==id);
}

IMPLEMENT_META_EVENT_P(repFournitureUsagee, InterfacesPkg, InterfacesPkg, repFournitureUsagee())

//## event reqFournitureUsagee()
reqFournitureUsagee::reqFournitureUsagee() {
    NOTIFY_EVENT_CONSTRUCTOR(reqFournitureUsagee)
    setId(reqFournitureUsagee_InterfacesPkg_id);
}

bool reqFournitureUsagee::isTypeOf(const short id) const {
    return (reqFournitureUsagee_InterfacesPkg_id==id);
}

IMPLEMENT_META_EVENT_P(reqFournitureUsagee, InterfacesPkg, InterfacesPkg, reqFournitureUsagee())

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\InterfacesPkg.cpp
*********************************************************************/
