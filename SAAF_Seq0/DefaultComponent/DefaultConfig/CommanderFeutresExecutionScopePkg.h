/*********************************************************************
	Rhapsody	: 8.1.1 
	Login		: GANOU Arouna
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: CommanderFeutresExecutionScopePkg
//!	Generated Date	: Tue, 6, Jun 2017  
	File Path	: DefaultComponent\DefaultConfig\CommanderFeutresExecutionScopePkg.h
*********************************************************************/

#ifndef CommanderFeutresExecutionScopePkg_H
#define CommanderFeutresExecutionScopePkg_H

//## auto_generated
#include <oxf\oxf.h>
//## auto_generated
#include <..\Profiles\SysML\SIDefinitions.h>
//## auto_generated
#include <aom\aom.h>
//## auto_generated
#include "CommanderFeutresPkg.h"
//## classInstance itsUc_CommanderFeutres
class Uc_CommanderFeutres;

//## classInstance prtenseignant
class enseignant;

//## classInstance prtfeutre
class feutre;

//## classInstance prtsecretaire
class secretaire;

//## package FunctionalAnalysisPkg::CommanderFeutresPkg::CommanderFeutresExecutionScopePkg


//## classInstance itsUc_CommanderFeutres
extern Uc_CommanderFeutres itsUc_CommanderFeutres;

//## classInstance prtenseignant
extern enseignant prtenseignant;

//## classInstance prtfeutre
extern feutre prtfeutre;

//## classInstance prtsecretaire
extern secretaire prtsecretaire;

//## auto_generated
void CommanderFeutresExecutionScopePkg_initRelations();

//## auto_generated
bool CommanderFeutresExecutionScopePkg_startBehavior();

//#[ ignore
class CommanderFeutresExecutionScopePkg_OMInitializer {
    ////    Constructors and destructors    ////
    
public :

    //## auto_generated
    CommanderFeutresExecutionScopePkg_OMInitializer();
    
    //## auto_generated
    ~CommanderFeutresExecutionScopePkg_OMInitializer();
};
//#]

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\CommanderFeutresExecutionScopePkg.h
*********************************************************************/
