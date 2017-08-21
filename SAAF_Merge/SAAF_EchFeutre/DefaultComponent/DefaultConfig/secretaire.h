/*********************************************************************
	Rhapsody	: 8.1.1 
	Login		: GANOU Arouna
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: secretaire
//!	Generated Date	: Sun, 11, Jun 2017  
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
    OMBoolean getPrevenue() const;
    
    //## auto_generated
    void setPrevenue(OMBoolean p_prevenue);
    
    //## auto_generated
    virtual bool startBehavior();

protected :

    //## auto_generated
    void initRelations();
    
    //## auto_generated
    void initStatechart();
    
    ////    Attributes    ////
    
    OMBoolean prevenue;		//## attribute prevenue
    
    ////    Relations and components    ////
    
//#[ ignore
    pUc_CommanderFeutres_C pUc_CommanderFeutres;
    
    pUc_EchangerFeutres_C pUc_EchangerFeutres;
//#]

    ////    Framework operations    ////

public :

    // rootState:
    //## statechart_method
    inline bool rootState_IN() const;
    
    //## statechart_method
    virtual void rootState_entDef();
    
    //## statechart_method
    virtual IOxfReactive::TakeEventStatus rootState_processEvent();
    
    // sendaction_9:
    //## statechart_method
    inline bool sendaction_9_IN() const;
    
    // sendaction_15:
    //## statechart_method
    inline bool sendaction_15_IN() const;
    
    // sendaction_12:
    //## statechart_method
    inline bool sendaction_12_IN() const;
    
    // enDechargementFournitureUsagee:
    //## statechart_method
    inline bool enDechargementFournitureUsagee_IN() const;
    
    // enChargementFourniture:
    //## statechart_method
    inline bool enChargementFourniture_IN() const;
    
    // auTravail:
    //## statechart_method
    inline bool auTravail_IN() const;
    
    //## statechart_method
    IOxfReactive::TakeEventStatus auTravail_handleEvent();
    
    // accepteventaction_6:
    //## statechart_method
    inline bool accepteventaction_6_IN() const;
    
    // accepteventaction_2:
    //## statechart_method
    inline bool accepteventaction_2_IN() const;
    
    // accepteventaction_14:
    //## statechart_method
    inline bool accepteventaction_14_IN() const;
    
    // accepteventaction_10:
    //## statechart_method
    inline bool accepteventaction_10_IN() const;
    
    ////    Framework    ////

protected :

//#[ ignore
    enum secretaire_Enum {
        OMNonState = 0,
        sendaction_9 = 1,
        sendaction_15 = 2,
        sendaction_12 = 3,
        enDechargementFournitureUsagee = 4,
        enChargementFourniture = 5,
        auTravail = 6,
        accepteventaction_6 = 7,
        accepteventaction_2 = 8,
        accepteventaction_14 = 9,
        accepteventaction_10 = 10
    };
    
    int rootState_subState;
    
    int rootState_active;
//#]
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedsecretaire : public OMAnimatediUc_CommanderFeutres_secretaire, public OMAnimatediUc_EchangerFeutres_secretaire {
    DECLARE_REACTIVE_META(secretaire, OMAnimatedsecretaire)
    
    ////    Framework operations    ////
    
public :

    virtual void serializeAttributes(AOMSAttributes* aomsAttributes) const;
    
    virtual void serializeRelations(AOMSRelations* aomsRelations) const;
    
    //## statechart_method
    void rootState_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void sendaction_9_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void sendaction_15_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void sendaction_12_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void enDechargementFournitureUsagee_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void enChargementFourniture_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void auTravail_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void accepteventaction_6_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void accepteventaction_2_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void accepteventaction_14_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void accepteventaction_10_serializeStates(AOMSState* aomsState) const;
};
//#]
#endif // _OMINSTRUMENT

inline bool secretaire::rootState_IN() const {
    return true;
}

inline bool secretaire::sendaction_9_IN() const {
    return rootState_subState == sendaction_9;
}

inline bool secretaire::sendaction_15_IN() const {
    return rootState_subState == sendaction_15;
}

inline bool secretaire::sendaction_12_IN() const {
    return rootState_subState == sendaction_12;
}

inline bool secretaire::enDechargementFournitureUsagee_IN() const {
    return rootState_subState == enDechargementFournitureUsagee;
}

inline bool secretaire::enChargementFourniture_IN() const {
    return rootState_subState == enChargementFourniture;
}

inline bool secretaire::auTravail_IN() const {
    return rootState_subState == auTravail;
}

inline bool secretaire::accepteventaction_6_IN() const {
    return rootState_subState == accepteventaction_6;
}

inline bool secretaire::accepteventaction_2_IN() const {
    return rootState_subState == accepteventaction_2;
}

inline bool secretaire::accepteventaction_14_IN() const {
    return rootState_subState == accepteventaction_14;
}

inline bool secretaire::accepteventaction_10_IN() const {
    return rootState_subState == accepteventaction_10;
}

#endif
/*********************************************************************
	File Path	: DefaultComponent/DefaultConfig/secretaire.h
*********************************************************************/
