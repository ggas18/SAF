/*********************************************************************
	Rhapsody	: 8.1.1 
	Login		: GANOU Arouna
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: feutre
//!	Generated Date	: Thu, 8, Jun 2017  
	File Path	: DefaultComponent/DefaultConfig/feutre.h
*********************************************************************/

#ifndef feutre_H
#define feutre_H

//## auto_generated
#include <oxf/oxf.h>
//## auto_generated
#include <../Profiles/SysML/SIDefinitions.h>
//## auto_generated
#include <aom/aom.h>
//## auto_generated
#include "ActorPkg.h"
//## package ActorPkg

//## actor feutre
class feutre {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedfeutre;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    feutre();
    
    //## auto_generated
    ~feutre();
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedfeutre : virtual public AOMInstance {
    DECLARE_META(feutre, OMAnimatedfeutre)
    
    ////    Framework operations    ////
    
public :

    virtual void serializeRelations(AOMSRelations* aomsRelations) const;
};
//#]
#endif // _OMINSTRUMENT

#endif
/*********************************************************************
	File Path	: DefaultComponent/DefaultConfig/feutre.h
*********************************************************************/
