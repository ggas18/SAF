/********************************************************************
	Rhapsody	: 8.1.1 
	Login		: GANOU Arouna
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: ActorPkg
//!	Generated Date	: Thu, 8, Jun 2017  
	File Path	: DefaultComponent/DefaultConfig/ActorPkg.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "ActorPkg.h"
//#[ ignore
#define reqEchangeFeutre_SERIALIZE OM_NO_OP

#define reqEchangeFeutre_UNSERIALIZE OM_NO_OP

#define reqEchangeFeutre_CONSTRUCTOR reqEchangeFeutre()

#define reqDechargementFournitureEchangee_SERIALIZE OM_NO_OP

#define reqDechargementFournitureEchangee_UNSERIALIZE OM_NO_OP

#define reqDechargementFournitureEchangee_CONSTRUCTOR reqDechargementFournitureEchangee()

#define repEchangeSecretaire_SERIALIZE OM_NO_OP

#define repEchangeSecretaire_UNSERIALIZE OM_NO_OP

#define repEchangeSecretaire_CONSTRUCTOR repEchangeSecretaire()
//#]

//## package ActorPkg


#ifdef _OMINSTRUMENT
static void serializeGlobalVars(AOMSAttributes* /* aomsAttributes */);

IMPLEMENT_META_PACKAGE(ActorPkg, ActorPkg)

static void serializeGlobalVars(AOMSAttributes* /* aomsAttributes */) {
}
#endif // _OMINSTRUMENT

//## event reqEchangeFeutre()
reqEchangeFeutre::reqEchangeFeutre() {
    NOTIFY_EVENT_CONSTRUCTOR(reqEchangeFeutre)
    setId(reqEchangeFeutre_ActorPkg_id);
}

bool reqEchangeFeutre::isTypeOf(const short id) const {
    return (reqEchangeFeutre_ActorPkg_id==id);
}

IMPLEMENT_META_EVENT_P(reqEchangeFeutre, ActorPkg, ActorPkg, reqEchangeFeutre())

//## event reqDechargementFournitureEchangee()
reqDechargementFournitureEchangee::reqDechargementFournitureEchangee() {
    NOTIFY_EVENT_CONSTRUCTOR(reqDechargementFournitureEchangee)
    setId(reqDechargementFournitureEchangee_ActorPkg_id);
}

bool reqDechargementFournitureEchangee::isTypeOf(const short id) const {
    return (reqDechargementFournitureEchangee_ActorPkg_id==id);
}

IMPLEMENT_META_EVENT_P(reqDechargementFournitureEchangee, ActorPkg, ActorPkg, reqDechargementFournitureEchangee())

//## event repEchangeSecretaire()
repEchangeSecretaire::repEchangeSecretaire() {
    NOTIFY_EVENT_CONSTRUCTOR(repEchangeSecretaire)
    setId(repEchangeSecretaire_ActorPkg_id);
}

bool repEchangeSecretaire::isTypeOf(const short id) const {
    return (repEchangeSecretaire_ActorPkg_id==id);
}

IMPLEMENT_META_EVENT_P(repEchangeSecretaire, ActorPkg, ActorPkg, repEchangeSecretaire())

/*********************************************************************
	File Path	: DefaultComponent/DefaultConfig/ActorPkg.cpp
*********************************************************************/
