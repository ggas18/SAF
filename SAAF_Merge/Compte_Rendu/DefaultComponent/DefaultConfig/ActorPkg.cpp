/********************************************************************
	Rhapsody	: 8.1.1 
	Login		: GANOU Arouna
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: ActorPkg
//!	Generated Date	: Sun, 11, Jun 2017  
	File Path	: DefaultComponent/DefaultConfig/ActorPkg.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "ActorPkg.h"
//#[ ignore
#define feutreUsagee_SERIALIZE OM_NO_OP

#define feutreUsagee_UNSERIALIZE OM_NO_OP

#define feutreUsagee_CONSTRUCTOR feutreUsagee()

#define pasDeFeutre_SERIALIZE OM_NO_OP

#define pasDeFeutre_UNSERIALIZE OM_NO_OP

#define pasDeFeutre_CONSTRUCTOR pasDeFeutre()

#define prevenue_SERIALIZE OM_NO_OP

#define prevenue_UNSERIALIZE OM_NO_OP

#define prevenue_CONSTRUCTOR prevenue()
//#]

//## package ActorPkg


#ifdef _OMINSTRUMENT
static void serializeGlobalVars(AOMSAttributes* /* aomsAttributes */);

IMPLEMENT_META_PACKAGE(ActorPkg, ActorPkg)

static void serializeGlobalVars(AOMSAttributes* /* aomsAttributes */) {
}
#endif // _OMINSTRUMENT

//## event feutreUsagee()
feutreUsagee::feutreUsagee() {
    NOTIFY_EVENT_CONSTRUCTOR(feutreUsagee)
    setId(feutreUsagee_ActorPkg_id);
}

bool feutreUsagee::isTypeOf(const short id) const {
    return (feutreUsagee_ActorPkg_id==id);
}

IMPLEMENT_META_EVENT_P(feutreUsagee, ActorPkg, ActorPkg, feutreUsagee())

//## event pasDeFeutre()
pasDeFeutre::pasDeFeutre() {
    NOTIFY_EVENT_CONSTRUCTOR(pasDeFeutre)
    setId(pasDeFeutre_ActorPkg_id);
}

bool pasDeFeutre::isTypeOf(const short id) const {
    return (pasDeFeutre_ActorPkg_id==id);
}

IMPLEMENT_META_EVENT_P(pasDeFeutre, ActorPkg, ActorPkg, pasDeFeutre())

//## event prevenue()
prevenue::prevenue() {
    NOTIFY_EVENT_CONSTRUCTOR(prevenue)
    setId(prevenue_ActorPkg_id);
}

bool prevenue::isTypeOf(const short id) const {
    return (prevenue_ActorPkg_id==id);
}

IMPLEMENT_META_EVENT_P(prevenue, ActorPkg, ActorPkg, prevenue())

/*********************************************************************
	File Path	: DefaultComponent/DefaultConfig/ActorPkg.cpp
*********************************************************************/
