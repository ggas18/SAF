/*********************************************************************
	Rhapsody	: 8.1.1 
	Login		: GANOU Arouna
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: secretaire
//!	Generated Date	: Thu, 8, Jun 2017  
	File Path	: DefaultComponent/DefaultConfig/secretaire.h
*********************************************************************/

#ifndef secretaire_H
#define secretaire_H

//## auto_generated
#include <oxf/oxf.h>
//## auto_generated
#include <../Profiles/SysML/SIDefinitions.h>
//## auto_generated
#include <aom/aom.h>
//## auto_generated
#include "ActorPkg.h"
//## actor secretaire
#include "iUc_CommanderFeutres_secretaire.h"
//## actor secretaire
#include "iUc_EchangerFeutres_secretaire.h"
//## class OutBound
#include "isecretaire_Uc_CommanderFeutres.h"
//## class OutBound
#include "isecretaire_Uc_EchangerFeutres.h"
//## package ActorPkg

//## actor secretaire
class secretaire : public iUc_CommanderFeutres_secretaire, public iUc_EchangerFeutres_secretaire {
public :

//#[ ignore
    //## package ActorPkg
    class pUc_CommanderFeutres_C {
    public :
    
        //## auto_generated
        class InBound_C;
        
        //## auto_generated
        class OutBound_C;
        
        //## package ActorPkg
        class InBound_C : public iUc_CommanderFeutres_secretaire {
            ////    Constructors and destructors    ////
            
        public :
        
            //## auto_generated
            InBound_C();
            
            //## auto_generated
            virtual ~InBound_C();
            
            ////    Operations    ////
            
            //## auto_generated
            virtual bool send(IOxfEvent* event, const IOxfEventGenerationParams& params);
            
            //## auto_generated
            virtual bool send(IOxfEvent* event);
            
            ////    Additional operations    ////
            
            //## auto_generated
            void setItsIUc_CommanderFeutres_secretaire(iUc_CommanderFeutres_secretaire* p_iUc_CommanderFeutres_secretaire);
            
            //## auto_generated
            pUc_CommanderFeutres_C* getPort() const;
            
            //## auto_generated
            void setPort(pUc_CommanderFeutres_C* p_pUc_CommanderFeutres_C);
        
        protected :
        
            //## auto_generated
            void cleanUpRelations();
            
            ////    Relations and components    ////
            
            iUc_CommanderFeutres_secretaire* itsIUc_CommanderFeutres_secretaire;		//## link itsIUc_CommanderFeutres_secretaire
            
            pUc_CommanderFeutres_C* port;		//## link port
            
            ////    Framework operations    ////
        
        public :
        
            //## auto_generated
            void __setPort(pUc_CommanderFeutres_C* p_pUc_CommanderFeutres_C);
            
            //## auto_generated
            void _setPort(pUc_CommanderFeutres_C* p_pUc_CommanderFeutres_C);
            
            //## auto_generated
            void _clearPort();
        };
        
        //## package ActorPkg
        class OutBound_C : public isecretaire_Uc_CommanderFeutres {
            ////    Constructors and destructors    ////
            
        public :
        
            //## auto_generated
            OutBound_C();
            
            //## auto_generated
            virtual ~OutBound_C();
            
            ////    Operations    ////
            
            //## auto_generated
            virtual bool send(IOxfEvent* event, const IOxfEventGenerationParams& params);
            
            //## auto_generated
            virtual bool send(IOxfEvent* event);
            
            ////    Additional operations    ////
            
            //## auto_generated
            void setItsIsecretaire_Uc_CommanderFeutres(OMReactive* p_OMReactive);
        
        protected :
        
            //## auto_generated
            void cleanUpRelations();
            
            ////    Relations and components    ////
            
            OMReactive* itsIsecretaire_Uc_CommanderFeutres;		//## link itsIsecretaire_Uc_CommanderFeutres
        };
        
        ////    Constructors and destructors    ////
        
        //## auto_generated
        pUc_CommanderFeutres_C();
        
        //## auto_generated
        virtual ~pUc_CommanderFeutres_C();
        
        ////    Operations    ////
        
        //## auto_generated
        void connectSecretaire(secretaire* part);
        
        //## auto_generated
        iUc_CommanderFeutres_secretaire* getItsIUc_CommanderFeutres_secretaire();
        
        //## auto_generated
        isecretaire_Uc_CommanderFeutres* getItsIsecretaire_Uc_CommanderFeutres();
        
        //## auto_generated
        void setItsIUc_CommanderFeutres_secretaire(iUc_CommanderFeutres_secretaire* p_iUc_CommanderFeutres_secretaire);
        
        //## auto_generated
        void setItsIsecretaire_Uc_CommanderFeutres(OMReactive* p_isecretaire_Uc_CommanderFeutres);
        
        ////    Additional operations    ////
        
        //## auto_generated
        InBound_C* getInBound() const;
        
        //## auto_generated
        OutBound_C* getOutBound() const;
    
    protected :
    
        //## auto_generated
        void initRelations();
        
        ////    Attributes    ////
        
        int _p_;		//## attribute _p_
        
        ////    Relations and components    ////
        
        InBound_C InBound;		//## classInstance InBound
        
        OutBound_C OutBound;		//## classInstance OutBound
        
        ////    Framework operations    ////
    
    public :
    
        //## auto_generated
        virtual void destroy();
    };
    
    //## package ActorPkg
    class pUc_EchangerFeutres_C {
    public :
    
        //## auto_generated
        class InBound_C;
        
        //## auto_generated
        class OutBound_C;
        
        //## package ActorPkg
        class InBound_C : public iUc_EchangerFeutres_secretaire {
            ////    Constructors and destructors    ////
            
        public :
        
            //## auto_generated
            InBound_C();
            
            //## auto_generated
            virtual ~InBound_C();
            
            ////    Operations    ////
            
            //## auto_generated
            virtual bool send(IOxfEvent* event, const IOxfEventGenerationParams& params);
            
            //## auto_generated
            virtual bool send(IOxfEvent* event);
            
            ////    Additional operations    ////
            
            //## auto_generated
            void setItsIUc_EchangerFeutres_secretaire(iUc_EchangerFeutres_secretaire* p_iUc_EchangerFeutres_secretaire);
            
            //## auto_generated
            pUc_EchangerFeutres_C* getPort() const;
            
            //## auto_generated
            void setPort(pUc_EchangerFeutres_C* p_pUc_EchangerFeutres_C);
        
        protected :
        
            //## auto_generated
            void cleanUpRelations();
            
            ////    Relations and components    ////
            
            iUc_EchangerFeutres_secretaire* itsIUc_EchangerFeutres_secretaire;		//## link itsIUc_EchangerFeutres_secretaire
            
            pUc_EchangerFeutres_C* port;		//## link port
            
            ////    Framework operations    ////
        
        public :
        
            //## auto_generated
            void __setPort(pUc_EchangerFeutres_C* p_pUc_EchangerFeutres_C);
            
            //## auto_generated
            void _setPort(pUc_EchangerFeutres_C* p_pUc_EchangerFeutres_C);
            
            //## auto_generated
            void _clearPort();
        };
        
        //## package ActorPkg
        class OutBound_C : public isecretaire_Uc_EchangerFeutres {
            ////    Constructors and destructors    ////
            
        public :
        
            //## auto_generated
            OutBound_C();
            
            //## auto_generated
            virtual ~OutBound_C();
            
            ////    Operations    ////
            
            //## auto_generated
            virtual bool send(IOxfEvent* event, const IOxfEventGenerationParams& params);
            
            //## auto_generated
            virtual bool send(IOxfEvent* event);
            
            ////    Additional operations    ////
            
            //## auto_generated
            void setItsIsecretaire_Uc_EchangerFeutres(OMReactive* p_OMReactive);
        
        protected :
        
            //## auto_generated
            void cleanUpRelations();
            
            ////    Relations and components    ////
            
            OMReactive* itsIsecretaire_Uc_EchangerFeutres;		//## link itsIsecretaire_Uc_EchangerFeutres
        };
        
        ////    Constructors and destructors    ////
        
        //## auto_generated
        pUc_EchangerFeutres_C();
        
        //## auto_generated
        virtual ~pUc_EchangerFeutres_C();
        
        ////    Operations    ////
        
        //## auto_generated
        void connectSecretaire(secretaire* part);
        
        //## auto_generated
        iUc_EchangerFeutres_secretaire* getItsIUc_EchangerFeutres_secretaire();
        
        //## auto_generated
        isecretaire_Uc_EchangerFeutres* getItsIsecretaire_Uc_EchangerFeutres();
        
        //## auto_generated
        void setItsIUc_EchangerFeutres_secretaire(iUc_EchangerFeutres_secretaire* p_iUc_EchangerFeutres_secretaire);
        
        //## auto_generated
        void setItsIsecretaire_Uc_EchangerFeutres(OMReactive* p_isecretaire_Uc_EchangerFeutres);
        
        ////    Additional operations    ////
        
        //## auto_generated
        InBound_C* getInBound() const;
        
        //## auto_generated
        OutBound_C* getOutBound() const;
    
    protected :
    
        //## auto_generated
        void initRelations();
        
        ////    Attributes    ////
        
        int _p_;		//## attribute _p_
        
        ////    Relations and components    ////
        
        InBound_C InBound;		//## classInstance InBound
        
        OutBound_C OutBound;		//## classInstance OutBound
        
        ////    Framework operations    ////
    
    public :
    
        //## auto_generated
        virtual void destroy();
    };
//#]

    ////    Friends    ////
    
#ifdef _OMINSTRUMENT
    friend class OMAnimatedsecretaire;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    secretaire(IOxfActive* theActiveContext = 0);
    
    //## auto_generated
    ~secretaire();
    
    ////    Additional operations    ////
    
    //## auto_generated
    pUc_CommanderFeutres_C* getPUc_CommanderFeutres() const;
    
    //## auto_generated
    pUc_CommanderFeutres_C* get_pUc_CommanderFeutres() const;
    
    //## auto_generated
    pUc_EchangerFeutres_C* getPUc_EchangerFeutres() const;
    
    //## auto_generated
    pUc_EchangerFeutres_C* get_pUc_EchangerFeutres() const;
    
    //## auto_generated
    virtual bool startBehavior();

protected :

    //## auto_generated
    void initRelations();
    
    ////    Relations and components    ////
    
//#[ ignore
    pUc_CommanderFeutres_C pUc_CommanderFeutres;
    
    pUc_EchangerFeutres_C pUc_EchangerFeutres;
//#]
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedsecretaire : public OMAnimatediUc_CommanderFeutres_secretaire, public OMAnimatediUc_EchangerFeutres_secretaire {
    DECLARE_META(secretaire, OMAnimatedsecretaire)
    
    ////    Framework operations    ////
    
public :

    virtual void serializeAttributes(AOMSAttributes* aomsAttributes) const;
    
    virtual void serializeRelations(AOMSRelations* aomsRelations) const;
};
//#]
#endif // _OMINSTRUMENT

#endif
/*********************************************************************
	File Path	: DefaultComponent/DefaultConfig/secretaire.h
*********************************************************************/
