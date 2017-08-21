/*********************************************************************
	Rhapsody	: 8.1.1 
	Login		: ganou2u
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: EchangerFeutresExecutionScopePkg
//!	Generated Date	: Thu, 8, Jun 2017  
	File Path	: DefaultComponent\DefaultConfig\EchangerFeutresExecutionScopePkg.h
*********************************************************************/

#ifndef EchangerFeutresExecutionScopePkg_H
#define EchangerFeutresExecutionScopePkg_H

//## auto_generated
#include <oxf\oxf.h>
//## auto_generated
#include <..\Profiles\SysML\SIDefinitions.h>
//## auto_generated
#include <aom\aom.h>
//## auto_generated
#include "EchangerFeutresPkg.h"
//## classInstance itsUc_EchangerFeutres
class Uc_EchangerFeutres;

//## classInstance prtenseignant
class enseignant;

//## classInstance prtfeutre
class feutre;

//## classInstance prtsecretaire
class secretaire;

//## package FunctionalAnalysisPkg::EchangerFeutresPkg::EchangerFeutresExecutionScopePkg


//## classInstance itsUc_EchangerFeutres
extern Uc_EchangerFeutres itsUc_EchangerFeutres;

//## classInstance prtenseignant
extern enseignant prtenseignant;

//## classInstance prtfeutre
extern feutre prtfeutre;

//## classInstance prtsecretaire
extern secretaire prtsecretaire;

//## auto_generated
void EchangerFeutresExecutionScopePkg_initRelations();

//## auto_generated
bool EchangerFeutresExecutionScopePkg_startBehavior();

//#[ ignore
class EchangerFeutresExecutionScopePkg_OMInitializer {
    ////    Constructors and destructors    ////
    
public :

    //## auto_generated
    EchangerFeutresExecutionScopePkg_OMInitializer();
    
    //## auto_generated
    ~EchangerFeutresExecutionScopePkg_OMInitializer();
};
//#]

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\EchangerFeutresExecutionScopePkg.h
*********************************************************************/
