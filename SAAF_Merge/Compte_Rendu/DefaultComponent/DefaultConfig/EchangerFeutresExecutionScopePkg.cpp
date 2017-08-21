/********************************************************************
	Rhapsody	: 8.1.1 
	Login		: ganou2u
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: EchangerFeutresExecutionScopePkg
//!	Generated Date	: Thu, 8, Jun 2017  
	File Path	: DefaultComponent\DefaultConfig\EchangerFeutresExecutionScopePkg.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "EchangerFeutresExecutionScopePkg.h"
//## classInstance prtenseignant
#include "enseignant.h"
//## classInstance prtfeutre
#include "feutre.h"
//## classInstance prtsecretaire
#include "secretaire.h"
//## classInstance itsUc_EchangerFeutres
#include "Uc_EchangerFeutres.h"
//## package FunctionalAnalysisPkg::EchangerFeutresPkg::EchangerFeutresExecutionScopePkg


//## classInstance itsUc_EchangerFeutres
Uc_EchangerFeutres itsUc_EchangerFeutres;

//## classInstance prtenseignant
enseignant prtenseignant;

//## classInstance prtfeutre
feutre prtfeutre;

//## classInstance prtsecretaire
secretaire prtsecretaire;

#ifdef _OMINSTRUMENT
static void serializeGlobalVars(AOMSAttributes* /* aomsAttributes */);

static void RenameGlobalInstances();

IMPLEMENT_META_PACKAGE(FunctionalAnalysisPkg_EchangerFeutresPkg_EchangerFeutresExecutionScopePkg, FunctionalAnalysisPkg::EchangerFeutresPkg::EchangerFeutresExecutionScopePkg)
#endif // _OMINSTRUMENT

void EchangerFeutresExecutionScopePkg_initRelations() {
    {
        {
            itsUc_EchangerFeutres.setShouldDelete(false);
        }
        {
            prtenseignant.setShouldDelete(false);
        }
        {
            prtsecretaire.setShouldDelete(false);
        }
    }
    {
        
        prtenseignant.get_pUc_EchangerFeutres()->setItsIenseignant_Uc_EchangerFeutres(itsUc_EchangerFeutres.get_penseignant()->getItsIenseignant_Uc_EchangerFeutres());
        
    }{
        
        itsUc_EchangerFeutres.get_penseignant()->setItsIUc_EchangerFeutres_enseignant(prtenseignant.get_pUc_EchangerFeutres()->getItsIUc_EchangerFeutres_enseignant());
        
    }
    {
        
        prtsecretaire.get_pUc_EchangerFeutres()->setItsIsecretaire_Uc_EchangerFeutres(itsUc_EchangerFeutres.get_psecretaire()->getItsIsecretaire_Uc_EchangerFeutres());
        
    }{
        
        itsUc_EchangerFeutres.get_psecretaire()->setItsIUc_EchangerFeutres_secretaire(prtsecretaire.get_pUc_EchangerFeutres()->getItsIUc_EchangerFeutres_secretaire());
        
    }
    
    #ifdef _OMINSTRUMENT
    RenameGlobalInstances();
    #endif // _OMINSTRUMENT
}

bool EchangerFeutresExecutionScopePkg_startBehavior() {
    bool done = true;
    done &= itsUc_EchangerFeutres.startBehavior();
    done &= prtenseignant.startBehavior();
    done &= prtsecretaire.startBehavior();
    return done;
}

#ifdef _OMINSTRUMENT
static void serializeGlobalVars(AOMSAttributes* /* aomsAttributes */) {
}

static void RenameGlobalInstances() {
    OM_SET_INSTANCE_NAME(&itsUc_EchangerFeutres, Uc_EchangerFeutres, "itsUc_EchangerFeutres", AOMNoMultiplicity);
    OM_SET_INSTANCE_NAME(&prtenseignant, enseignant, "prtenseignant", AOMNoMultiplicity);
    OM_SET_INSTANCE_NAME(&prtsecretaire, secretaire, "prtsecretaire", AOMNoMultiplicity);
    OM_SET_INSTANCE_NAME(&prtfeutre, feutre, "prtfeutre", AOMNoMultiplicity);
}
#endif // _OMINSTRUMENT

//#[ ignore
EchangerFeutresExecutionScopePkg_OMInitializer::EchangerFeutresExecutionScopePkg_OMInitializer() {
    EchangerFeutresExecutionScopePkg_initRelations();
    EchangerFeutresExecutionScopePkg_startBehavior();
}

EchangerFeutresExecutionScopePkg_OMInitializer::~EchangerFeutresExecutionScopePkg_OMInitializer() {
}
//#]

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\EchangerFeutresExecutionScopePkg.cpp
*********************************************************************/
