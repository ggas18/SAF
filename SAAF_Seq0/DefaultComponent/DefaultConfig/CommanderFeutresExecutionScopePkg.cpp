/********************************************************************
	Rhapsody	: 8.1.1 
	Login		: GANOU Arouna
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: CommanderFeutresExecutionScopePkg
//!	Generated Date	: Tue, 6, Jun 2017  
	File Path	: DefaultComponent\DefaultConfig\CommanderFeutresExecutionScopePkg.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "CommanderFeutresExecutionScopePkg.h"
//## classInstance prtenseignant
#include "enseignant.h"
//## classInstance prtfeutre
#include "feutre.h"
//## classInstance prtsecretaire
#include "secretaire.h"
//## classInstance itsUc_CommanderFeutres
#include "Uc_CommanderFeutres.h"
//## package FunctionalAnalysisPkg::CommanderFeutresPkg::CommanderFeutresExecutionScopePkg


//## classInstance itsUc_CommanderFeutres
Uc_CommanderFeutres itsUc_CommanderFeutres;

//## classInstance prtenseignant
enseignant prtenseignant;

//## classInstance prtfeutre
feutre prtfeutre;

//## classInstance prtsecretaire
secretaire prtsecretaire;

#ifdef _OMINSTRUMENT
static void serializeGlobalVars(AOMSAttributes* /* aomsAttributes */);

static void RenameGlobalInstances();

IMPLEMENT_META_PACKAGE(FunctionalAnalysisPkg_CommanderFeutresPkg_CommanderFeutresExecutionScopePkg, FunctionalAnalysisPkg::CommanderFeutresPkg::CommanderFeutresExecutionScopePkg)
#endif // _OMINSTRUMENT

void CommanderFeutresExecutionScopePkg_initRelations() {
    {
        {
            itsUc_CommanderFeutres.setShouldDelete(false);
        }
        {
            prtenseignant.setShouldDelete(false);
        }
        {
            prtsecretaire.setShouldDelete(false);
        }
    }
    {
        
        itsUc_CommanderFeutres.get_penseignant()->setItsIUc_CommanderFeutres_enseignant(prtenseignant.get_pUc_CommanderFeutres()->getItsIUc_CommanderFeutres_enseignant());
        
    }{
        
        prtenseignant.get_pUc_CommanderFeutres()->setItsIenseignant_Uc_CommanderFeutres(itsUc_CommanderFeutres.get_penseignant()->getItsIenseignant_Uc_CommanderFeutres());
        
    }
    {
        
        itsUc_CommanderFeutres.get_psecretaire()->setItsIUc_CommanderFeutres_secretaire(prtsecretaire.get_pUc_CommanderFeutres()->getItsIUc_CommanderFeutres_secretaire());
        
    }{
        
        prtsecretaire.get_pUc_CommanderFeutres()->setItsIsecretaire_Uc_CommanderFeutres(itsUc_CommanderFeutres.get_psecretaire()->getItsIsecretaire_Uc_CommanderFeutres());
        
    }
    
    #ifdef _OMINSTRUMENT
    RenameGlobalInstances();
    #endif // _OMINSTRUMENT
}

bool CommanderFeutresExecutionScopePkg_startBehavior() {
    bool done = true;
    done &= itsUc_CommanderFeutres.startBehavior();
    done &= prtenseignant.startBehavior();
    done &= prtsecretaire.startBehavior();
    return done;
}

#ifdef _OMINSTRUMENT
static void serializeGlobalVars(AOMSAttributes* /* aomsAttributes */) {
}

static void RenameGlobalInstances() {
    OM_SET_INSTANCE_NAME(&itsUc_CommanderFeutres, Uc_CommanderFeutres, "itsUc_CommanderFeutres", AOMNoMultiplicity);
    OM_SET_INSTANCE_NAME(&prtenseignant, enseignant, "prtenseignant", AOMNoMultiplicity);
    OM_SET_INSTANCE_NAME(&prtsecretaire, secretaire, "prtsecretaire", AOMNoMultiplicity);
    OM_SET_INSTANCE_NAME(&prtfeutre, feutre, "prtfeutre", AOMNoMultiplicity);
}
#endif // _OMINSTRUMENT

//#[ ignore
CommanderFeutresExecutionScopePkg_OMInitializer::CommanderFeutresExecutionScopePkg_OMInitializer() {
    CommanderFeutresExecutionScopePkg_initRelations();
    CommanderFeutresExecutionScopePkg_startBehavior();
}

CommanderFeutresExecutionScopePkg_OMInitializer::~CommanderFeutresExecutionScopePkg_OMInitializer() {
}
//#]

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\CommanderFeutresExecutionScopePkg.cpp
*********************************************************************/
