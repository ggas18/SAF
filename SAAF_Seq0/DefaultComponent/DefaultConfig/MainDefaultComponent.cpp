/********************************************************************
	Rhapsody	: 8.1.1 
	Login		: GANOU Arouna
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: DefaultConfig
//!	Generated Date	: Tue, 6, Jun 2017  
	File Path	: DefaultComponent\DefaultConfig\MainDefaultComponent.cpp
*********************************************************************/

//## auto_generated
#include "MainDefaultComponent.h"
//## auto_generated
#include "ActorPkg.h"
//## auto_generated
#include "CommanderFeutresExecutionScopePkg.h"
//## auto_generated
#include "CommanderFeutresPkg.h"
//## auto_generated
#include "InterfacesPkg.h"
DefaultComponent::DefaultComponent() {
    CommanderFeutresExecutionScopePkg_initRelations();
    CommanderFeutresExecutionScopePkg_startBehavior();
}

int main(int argc, char* argv[]) {
    int status = 0;
    if(OXF::initialize(argc, argv, 6423))
        {
            DefaultComponent initializer_DefaultComponent;
            //#[ configuration DefaultComponent::DefaultConfig 
            //#]
            OXF::start();
            status = 0;
        }
    else
        {
            status = 1;
        }
    return status;
}

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\MainDefaultComponent.cpp
*********************************************************************/
