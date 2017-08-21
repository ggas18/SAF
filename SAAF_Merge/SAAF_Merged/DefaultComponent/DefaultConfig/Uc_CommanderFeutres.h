/*********************************************************************
	Rhapsody	: 8.1.1 
	Login		: ganou2u
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Uc_CommanderFeutres
//!	Generated Date	: Thu, 8, Jun 2017  
	File Path	: DefaultComponent\DefaultConfig\Uc_CommanderFeutres.h
*********************************************************************/

#ifndef Uc_CommanderFeutres_H
#define Uc_CommanderFeutres_H

//## auto_generated
#include <oxf\oxf.h>
//## auto_generated
#include <..\Profiles\SysML\SIDefinitions.h>
//## auto_generated
#include <aom\aom.h>
//## auto_generated
#include "CommanderFeutresPkg.h"
//## class Uc_CommanderFeutres
#include "ienseignant_Uc_CommanderFeutres.h"
//## class Uc_CommanderFeutres
#include "isecretaire_Uc_CommanderFeutres.h"
//## class OutBound
#include "iUc_CommanderFeutres_enseignant.h"
//## class OutBound
#include "iUc_CommanderFeutres_secretaire.h"
//## package FunctionalAnalysisPkg::CommanderFeutresPkg

//## class Uc_CommanderFeutres
class Uc_CommanderFeutres : public ienseignant_Uc_CommanderFeutres, public isecretaire_Uc_CommanderFeutres {
public :

//#[ ignore
    //## package FunctionalAnalysisPkg::CommanderFeutresPkg
    class penseignant_C {
    public :
    
        //## auto_generated
        class InBound_C;
        
        //## auto_generated
        class OutBound_C;
        
        //## package FunctionalAnalysisPkg::CommanderFeutresPkg
        class InBound_C : public ienseignant_Uc_CommanderFeutres {
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
            void setItsIenseignant_Uc_CommanderFeutres(ienseignant_Uc_CommanderFeutres* p_ienseignant_Uc_CommanderFeutres);
            
            //## auto_generated
            penseignant_C* getPort() const;
            
            //## auto_generated
            void setPort(penseignant_C* p_penseignant_C);
        
        protected :
        
            //## auto_generated
            void cleanUpRelations();
            
            ////    Relations and components    ////
            
            ienseignant_Uc_CommanderFeutres* itsIenseignant_Uc_CommanderFeutres;		//## link itsIenseignant_Uc_CommanderFeutres
            
            penseignant_C* port;		//## link port
            
            ////    Framework operations    ////
        
        public :
        
            //## auto_generated
            void __setPort(penseignant_C* p_penseignant_C);
            
            //## auto_generated
            void _setPort(penseignant_C* p_penseignant_C);
            
            //## auto_generated
            void _clearPort();
        };
        
        //## package FunctionalAnalysisPkg::CommanderFeutresPkg
        class OutBound_C : public iUc_CommanderFeutres_enseignant {
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
            void setItsIUc_CommanderFeutres_enseignant(OMReactive* p_OMReactive);
        
        protected :
        
            //## auto_generated
            void cleanUpRelations();
            
            ////    Relations and components    ////
            
            OMReactive* itsIUc_CommanderFeutres_enseignant;		//## link itsIUc_CommanderFeutres_enseignant
        };
        
        ////    Constructors and destructors    ////
        
        //## auto_generated
        penseignant_C();
        
        //## auto_generated
        virtual ~penseignant_C();
        
        ////    Operations    ////
        
        //## auto_generated
        void connectUc_CommanderFeutres(Uc_CommanderFeutres* part);
        
        //## auto_generated
        iUc_CommanderFeutres_enseignant* getItsIUc_CommanderFeutres_enseignant();
        
        //## auto_generated
        ienseignant_Uc_CommanderFeutres* getItsIenseignant_Uc_CommanderFeutres();
        
        //## auto_generated
        void setItsIUc_CommanderFeutres_enseignant(OMReactive* p_iUc_CommanderFeutres_enseignant);
        
        //## auto_generated
        void setItsIenseignant_Uc_CommanderFeutres(ienseignant_Uc_CommanderFeutres* p_ienseignant_Uc_CommanderFeutres);
        
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
    
    //## package FunctionalAnalysisPkg::CommanderFeutresPkg
    class psecretaire_C {
    public :
    
        //## auto_generated
        class InBound_C;
        
        //## auto_generated
        class OutBound_C;
        
        //## package FunctionalAnalysisPkg::CommanderFeutresPkg
        class InBound_C : public isecretaire_Uc_CommanderFeutres {
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
            void setItsIsecretaire_Uc_CommanderFeutres(isecretaire_Uc_CommanderFeutres* p_isecretaire_Uc_CommanderFeutres);
            
            //## auto_generated
            psecretaire_C* getPort() const;
            
            //## auto_generated
            void setPort(psecretaire_C* p_psecretaire_C);
        
        protected :
        
            //## auto_generated
            void cleanUpRelations();
            
            ////    Relations and components    ////
            
            isecretaire_Uc_CommanderFeutres* itsIsecretaire_Uc_CommanderFeutres;		//## link itsIsecretaire_Uc_CommanderFeutres
            
            psecretaire_C* port;		//## link port
            
            ////    Framework operations    ////
        
        public :
        
            //## auto_generated
            void __setPort(psecretaire_C* p_psecretaire_C);
            
            //## auto_generated
            void _setPort(psecretaire_C* p_psecretaire_C);
            
            //## auto_generated
            void _clearPort();
        };
        
        //## package FunctionalAnalysisPkg::CommanderFeutresPkg
        class OutBound_C : public iUc_CommanderFeutres_secretaire {
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
            void setItsIUc_CommanderFeutres_secretaire(OMReactive* p_OMReactive);
        
        protected :
        
            //## auto_generated
            void cleanUpRelations();
            
            ////    Relations and components    ////
            
            OMReactive* itsIUc_CommanderFeutres_secretaire;		//## link itsIUc_CommanderFeutres_secretaire
        };
        
        ////    Constructors and destructors    ////
        
        //## auto_generated
        psecretaire_C();
        
        //## auto_generated
        virtual ~psecretaire_C();
        
        ////    Operations    ////
        
        //## auto_generated
        void connectUc_CommanderFeutres(Uc_CommanderFeutres* part);
        
        //## auto_generated
        iUc_CommanderFeutres_secretaire* getItsIUc_CommanderFeutres_secretaire();
        
        //## auto_generated
        isecretaire_Uc_CommanderFeutres* getItsIsecretaire_Uc_CommanderFeutres();
        
        //## auto_generated
        void setItsIUc_CommanderFeutres_secretaire(OMReactive* p_iUc_CommanderFeutres_secretaire);
        
        //## auto_generated
        void setItsIsecretaire_Uc_CommanderFeutres(isecretaire_Uc_CommanderFeutres* p_isecretaire_Uc_CommanderFeutres);
        
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
    friend class OMAnimatedUc_CommanderFeutres;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    Uc_CommanderFeutres(IOxfActive* theActiveContext = 0);
    
    //## auto_generated
    virtual ~Uc_CommanderFeutres();
    
    ////    Operations    ////
    
    //## operation AttendreChargementFourniture()
    virtual void AttendreChargementFourniture();
    
    //## operation LibererZone()
    virtual void LibererZone();
    
    //## operation ReceptionnerCommande()
    virtual void ReceptionnerCommande();
    
    //## operation SeDeplacerVersAcceuil()
    virtual void SeDeplacerVersAcceuil();
    
    //## operation SeDeplacerVersAccueil()
    virtual void SeDeplacerVersAccueil();
    
    //## operation SeDeplacerVersSalle()
    virtual void SeDeplacerVersSalle();
    
    ////    Additional operations    ////
    
    //## auto_generated
    penseignant_C* getPenseignant() const;
    
    //## auto_generated
    penseignant_C* get_penseignant() const;
    
    //## auto_generated
    psecretaire_C* getPsecretaire() const;
    
    //## auto_generated
    psecretaire_C* get_psecretaire() const;
    
    //## auto_generated
    OMBoolean getRetour() const;
    
    //## auto_generated
    void setRetour(OMBoolean p_retour);
    
    //## auto_generated
    virtual bool startBehavior();

protected :

    //## auto_generated
    void initRelations();
    
    //## auto_generated
    void initStatechart();
    
    //## auto_generated
    void cancelTimeouts();
    
    //## auto_generated
    bool cancelTimeout(const IOxfTimeout* arg);
    
    ////    Attributes    ////
    
    OMBoolean retour;		//## attribute retour
    
    ////    Relations and components    ////
    
//#[ ignore
    penseignant_C penseignant;
    
    psecretaire_C psecretaire;
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
    
    // sendaction_6:
    //## statechart_method
    inline bool sendaction_6_IN() const;
    
    // sendaction_4:
    //## statechart_method
    inline bool sendaction_4_IN() const;
    
    // sendaction_3:
    //## statechart_method
    inline bool sendaction_3_IN() const;
    
    // sendaction_22:
    //## statechart_method
    inline bool sendaction_22_IN() const;
    
    // sendaction_17:
    //## statechart_method
    inline bool sendaction_17_IN() const;
    
    // sendaction_12:
    //## statechart_method
    inline bool sendaction_12_IN() const;
    
    // sendaction_10:
    //## statechart_method
    inline bool sendaction_10_IN() const;
    
    // enReceptionCommande:
    //## statechart_method
    inline bool enReceptionCommande_IN() const;
    
    // enLiberationZone:
    //## statechart_method
    inline bool enLiberationZone_IN() const;
    
    // enDeplacementVersSalle:
    //## statechart_method
    inline bool enDeplacementVersSalle_IN() const;
    
    // enDeplacementVersAccueil:
    //## statechart_method
    inline bool enDeplacementVersAccueil_IN() const;
    
    // enDeplacementVersAcceuilAvecFournitureUsagee:
    //## statechart_method
    inline bool enDeplacementVersAcceuilAvecFournitureUsagee_IN() const;
    
    // enAttenteFourntureUsagee:
    //## statechart_method
    inline bool enAttenteFourntureUsagee_IN() const;
    
    // enAttenteDechargementFournitureUsagee:
    //## statechart_method
    inline bool enAttenteDechargementFournitureUsagee_IN() const;
    
    // enAttenteDechargementDechargementFourniture:
    //## statechart_method
    inline bool enAttenteDechargementDechargementFourniture_IN() const;
    
    // enAttenteChargmentFournitureUsagee:
    //## statechart_method
    inline bool enAttenteChargmentFournitureUsagee_IN() const;
    
    // enAttenteChargementFourniture:
    //## statechart_method
    inline bool enAttenteChargementFourniture_IN() const;
    
    // enAttente:
    //## statechart_method
    inline bool enAttente_IN() const;
    
    // accepteventaction_7:
    //## statechart_method
    inline bool accepteventaction_7_IN() const;
    
    // accepteventaction_24:
    //## statechart_method
    inline bool accepteventaction_24_IN() const;
    
    // accepteventaction_20:
    //## statechart_method
    inline bool accepteventaction_20_IN() const;
    
    // accepteventaction_14:
    //## statechart_method
    inline bool accepteventaction_14_IN() const;
    
    // accepteventaction_1:
    //## statechart_method
    inline bool accepteventaction_1_IN() const;
    
    ////    Framework    ////

protected :

//#[ ignore
    enum Uc_CommanderFeutres_Enum {
        OMNonState = 0,
        sendaction_6 = 1,
        sendaction_4 = 2,
        sendaction_3 = 3,
        sendaction_22 = 4,
        sendaction_17 = 5,
        sendaction_12 = 6,
        sendaction_10 = 7,
        enReceptionCommande = 8,
        enLiberationZone = 9,
        enDeplacementVersSalle = 10,
        enDeplacementVersAccueil = 11,
        enDeplacementVersAcceuilAvecFournitureUsagee = 12,
        enAttenteFourntureUsagee = 13,
        enAttenteDechargementFournitureUsagee = 14,
        enAttenteDechargementDechargementFourniture = 15,
        enAttenteChargmentFournitureUsagee = 16,
        enAttenteChargementFourniture = 17,
        enAttente = 18,
        accepteventaction_7 = 19,
        accepteventaction_24 = 20,
        accepteventaction_20 = 21,
        accepteventaction_14 = 22,
        accepteventaction_1 = 23
    };
    
    int rootState_subState;
    
    int rootState_active;
    
    IOxfTimeout* rootState_timeout;
//#]
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedUc_CommanderFeutres : public OMAnimatedienseignant_Uc_CommanderFeutres, public OMAnimatedisecretaire_Uc_CommanderFeutres {
    DECLARE_REACTIVE_META(Uc_CommanderFeutres, OMAnimatedUc_CommanderFeutres)
    
    ////    Framework operations    ////
    
public :

    virtual void serializeAttributes(AOMSAttributes* aomsAttributes) const;
    
    virtual void serializeRelations(AOMSRelations* aomsRelations) const;
    
    //## statechart_method
    void rootState_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void sendaction_6_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void sendaction_4_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void sendaction_3_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void sendaction_22_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void sendaction_17_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void sendaction_12_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void sendaction_10_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void enReceptionCommande_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void enLiberationZone_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void enDeplacementVersSalle_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void enDeplacementVersAccueil_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void enDeplacementVersAcceuilAvecFournitureUsagee_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void enAttenteFourntureUsagee_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void enAttenteDechargementFournitureUsagee_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void enAttenteDechargementDechargementFourniture_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void enAttenteChargmentFournitureUsagee_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void enAttenteChargementFourniture_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void enAttente_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void accepteventaction_7_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void accepteventaction_24_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void accepteventaction_20_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void accepteventaction_14_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void accepteventaction_1_serializeStates(AOMSState* aomsState) const;
};
//#]
#endif // _OMINSTRUMENT

inline bool Uc_CommanderFeutres::rootState_IN() const {
    return true;
}

inline bool Uc_CommanderFeutres::sendaction_6_IN() const {
    return rootState_subState == sendaction_6;
}

inline bool Uc_CommanderFeutres::sendaction_4_IN() const {
    return rootState_subState == sendaction_4;
}

inline bool Uc_CommanderFeutres::sendaction_3_IN() const {
    return rootState_subState == sendaction_3;
}

inline bool Uc_CommanderFeutres::sendaction_22_IN() const {
    return rootState_subState == sendaction_22;
}

inline bool Uc_CommanderFeutres::sendaction_17_IN() const {
    return rootState_subState == sendaction_17;
}

inline bool Uc_CommanderFeutres::sendaction_12_IN() const {
    return rootState_subState == sendaction_12;
}

inline bool Uc_CommanderFeutres::sendaction_10_IN() const {
    return rootState_subState == sendaction_10;
}

inline bool Uc_CommanderFeutres::enReceptionCommande_IN() const {
    return rootState_subState == enReceptionCommande;
}

inline bool Uc_CommanderFeutres::enLiberationZone_IN() const {
    return rootState_subState == enLiberationZone;
}

inline bool Uc_CommanderFeutres::enDeplacementVersSalle_IN() const {
    return rootState_subState == enDeplacementVersSalle;
}

inline bool Uc_CommanderFeutres::enDeplacementVersAccueil_IN() const {
    return rootState_subState == enDeplacementVersAccueil;
}

inline bool Uc_CommanderFeutres::enDeplacementVersAcceuilAvecFournitureUsagee_IN() const {
    return rootState_subState == enDeplacementVersAcceuilAvecFournitureUsagee;
}

inline bool Uc_CommanderFeutres::enAttenteFourntureUsagee_IN() const {
    return rootState_subState == enAttenteFourntureUsagee;
}

inline bool Uc_CommanderFeutres::enAttenteDechargementFournitureUsagee_IN() const {
    return rootState_subState == enAttenteDechargementFournitureUsagee;
}

inline bool Uc_CommanderFeutres::enAttenteDechargementDechargementFourniture_IN() const {
    return rootState_subState == enAttenteDechargementDechargementFourniture;
}

inline bool Uc_CommanderFeutres::enAttenteChargmentFournitureUsagee_IN() const {
    return rootState_subState == enAttenteChargmentFournitureUsagee;
}

inline bool Uc_CommanderFeutres::enAttenteChargementFourniture_IN() const {
    return rootState_subState == enAttenteChargementFourniture;
}

inline bool Uc_CommanderFeutres::enAttente_IN() const {
    return rootState_subState == enAttente;
}

inline bool Uc_CommanderFeutres::accepteventaction_7_IN() const {
    return rootState_subState == accepteventaction_7;
}

inline bool Uc_CommanderFeutres::accepteventaction_24_IN() const {
    return rootState_subState == accepteventaction_24;
}

inline bool Uc_CommanderFeutres::accepteventaction_20_IN() const {
    return rootState_subState == accepteventaction_20;
}

inline bool Uc_CommanderFeutres::accepteventaction_14_IN() const {
    return rootState_subState == accepteventaction_14;
}

inline bool Uc_CommanderFeutres::accepteventaction_1_IN() const {
    return rootState_subState == accepteventaction_1;
}

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\Uc_CommanderFeutres.h
*********************************************************************/
