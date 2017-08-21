/*********************************************************************
	Rhapsody	: 8.1.1 
	Login		: ganou2u
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: enseignant
//!	Generated Date	: Thu, 8, Jun 2017  
	File Path	: DefaultComponent\DefaultConfig\enseignant.h
*********************************************************************/

#ifndef enseignant_H
#define enseignant_H

//## auto_generated
#include <oxf\oxf.h>
//## auto_generated
#include <..\Profiles\SysML\SIDefinitions.h>
//## auto_generated
#include <aom\aom.h>
//## auto_generated
#include "ActorPkg.h"
//## actor enseignant
#include "iUc_CommanderFeutres_enseignant.h"
//## actor enseignant
#include "iUc_EchangerFeutres_enseignant.h"
//## class OutBound
#include "ienseignant_Uc_CommanderFeutres.h"
//## class OutBound
#include "ienseignant_Uc_EchangerFeutres.h"
//## package ActorPkg

//## actor enseignant
class enseignant : public iUc_CommanderFeutres_enseignant, public iUc_EchangerFeutres_enseignant {
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
        class InBound_C : public iUc_CommanderFeutres_enseignant {
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
            void setItsIUc_CommanderFeutres_enseignant(iUc_CommanderFeutres_enseignant* p_iUc_CommanderFeutres_enseignant);
            
            //## auto_generated
            pUc_CommanderFeutres_C* getPort() const;
            
            //## auto_generated
            void setPort(pUc_CommanderFeutres_C* p_pUc_CommanderFeutres_C);
        
        protected :
        
            //## auto_generated
            void cleanUpRelations();
            
            ////    Relations and components    ////
            
            iUc_CommanderFeutres_enseignant* itsIUc_CommanderFeutres_enseignant;		//## link itsIUc_CommanderFeutres_enseignant
            
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
        class OutBound_C : public ienseignant_Uc_CommanderFeutres {
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
            void setItsIenseignant_Uc_CommanderFeutres(OMReactive* p_OMReactive);
        
        protected :
        
            //## auto_generated
            void cleanUpRelations();
            
            ////    Relations and components    ////
            
            OMReactive* itsIenseignant_Uc_CommanderFeutres;		//## link itsIenseignant_Uc_CommanderFeutres
        };
        
        ////    Constructors and destructors    ////
        
        //## auto_generated
        pUc_CommanderFeutres_C();
        
        //## auto_generated
        virtual ~pUc_CommanderFeutres_C();
        
        ////    Operations    ////
        
        //## auto_generated
        void connectEnseignant(enseignant* part);
        
        //## auto_generated
        iUc_CommanderFeutres_enseignant* getItsIUc_CommanderFeutres_enseignant();
        
        //## auto_generated
        ienseignant_Uc_CommanderFeutres* getItsIenseignant_Uc_CommanderFeutres();
        
        //## auto_generated
        void setItsIUc_CommanderFeutres_enseignant(iUc_CommanderFeutres_enseignant* p_iUc_CommanderFeutres_enseignant);
        
        //## auto_generated
        void setItsIenseignant_Uc_CommanderFeutres(OMReactive* p_ienseignant_Uc_CommanderFeutres);
        
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
        class InBound_C : public iUc_EchangerFeutres_enseignant {
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
            void setItsIUc_EchangerFeutres_enseignant(iUc_EchangerFeutres_enseignant* p_iUc_EchangerFeutres_enseignant);
            
            //## auto_generated
            pUc_EchangerFeutres_C* getPort() const;
            
            //## auto_generated
            void setPort(pUc_EchangerFeutres_C* p_pUc_EchangerFeutres_C);
        
        protected :
        
            //## auto_generated
            void cleanUpRelations();
            
            ////    Relations and components    ////
            
            iUc_EchangerFeutres_enseignant* itsIUc_EchangerFeutres_enseignant;		//## link itsIUc_EchangerFeutres_enseignant
            
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
        class OutBound_C : public ienseignant_Uc_EchangerFeutres {
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
            void setItsIenseignant_Uc_EchangerFeutres(OMReactive* p_OMReactive);
        
        protected :
        
            //## auto_generated
            void cleanUpRelations();
            
            ////    Relations and components    ////
            
            OMReactive* itsIenseignant_Uc_EchangerFeutres;		//## link itsIenseignant_Uc_EchangerFeutres
        };
        
        ////    Constructors and destructors    ////
        
        //## auto_generated
        pUc_EchangerFeutres_C();
        
        //## auto_generated
        virtual ~pUc_EchangerFeutres_C();
        
        ////    Operations    ////
        
        //## auto_generated
        void connectEnseignant(enseignant* part);
        
        //## auto_generated
        iUc_EchangerFeutres_enseignant* getItsIUc_EchangerFeutres_enseignant();
        
        //## auto_generated
        ienseignant_Uc_EchangerFeutres* getItsIenseignant_Uc_EchangerFeutres();
        
        //## auto_generated
        void setItsIUc_EchangerFeutres_enseignant(iUc_EchangerFeutres_enseignant* p_iUc_EchangerFeutres_enseignant);
        
        //## auto_generated
        void setItsIenseignant_Uc_EchangerFeutres(OMReactive* p_ienseignant_Uc_EchangerFeutres);
        
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
    friend class OMAnimatedenseignant;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    enseignant(IOxfActive* theActiveContext = 0);
    
    //## auto_generated
    ~enseignant();
    
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
class OMAnimatedenseignant : public OMAnimatediUc_CommanderFeutres_enseignant, public OMAnimatediUc_EchangerFeutres_enseignant {
    DECLARE_META(enseignant, OMAnimatedenseignant)
    
    ////    Framework operations    ////
    
public :

    virtual void serializeAttributes(AOMSAttributes* aomsAttributes) const;
    
    virtual void serializeRelations(AOMSRelations* aomsRelations) const;
};
//#]
#endif // _OMINSTRUMENT

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\enseignant.h
*********************************************************************/
