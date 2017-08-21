/********************************************************************
	Rhapsody	: 8.1.1 
	Login		: GANOU Arouna
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: feutre
//!	Generated Date	: Tue, 6, Jun 2017  
	File Path	: DefaultComponent\DefaultConfig\feutre.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "feutre.h"
//#[ ignore
#define ActorPkg_feutre_feutre_SERIALIZE OM_NO_OP
//#]

//## package ActorPkg

//## actor feutre
feutre::feutre() {
    NOTIFY_CONSTRUCTOR(feutre, feutre(), 0, ActorPkg_feutre_feutre_SERIALIZE);
}

feutre::~feutre() {
    NOTIFY_DESTRUCTOR(~feutre, true);
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedfeutre::serializeRelations(AOMSRelations* aomsRelations) const {
}
//#]

IMPLEMENT_META_P(feutre, ActorPkg, ActorPkg, false, OMAnimatedfeutre)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\feutre.cpp
*********************************************************************/
