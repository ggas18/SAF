/*********************************************************************
	Rhapsody	: 8.1.1 
	Login		: ganou2u
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Uc_EchangerFeutres
//!	Generated Date	: Thu, 8, Jun 2017  
	File Path	: DefaultComponent\DefaultConfig\Uc_EchangerFeutres.h
*********************************************************************/

#ifndef Uc_EchangerFeutres_H
#define Uc_EchangerFeutres_H

//## auto_generated
#include <oxf\oxf.h>
//## auto_generated
#include <..\Profiles\SysML\SIDefinitions.h>
//## auto_generated
#include <aom\aom.h>
//## auto_generated
#include "EchangerFeutresPkg.h"
//## class Uc_EchangerFeutres
#include "ienseignant_Uc_EchangerFeutres.h"
//## class Uc_EchangerFeutres
#include "isecretaire_Uc_EchangerFeutres.h"
//## class OutBound
#include "iUc_EchangerFeutres_enseignant.h"
//## class OutBound
#include "iUc_EchangerFeutres_secretaire.h"
//## package FunctionalAnalysisPkg::EchangerFeutresPkg

//## class Uc_EchangerFeutres
class Uc_EchangerFeutres : public ienseignant_Uc_EchangerFeutres, public isecretaire_Uc_EchangerFeutres {
public :

//#[ ignore
    //## package FunctionalAnalysisPkg::EchangerFeutresPkg
    class penseignant_C {
    public :
    
        //## auto_generated
        class InBound_C;
        
        //## auto_generated
        class OutBound_C;
        
        //## package FunctionalAnalysisPkg::EchangerFeutresPkg
        class InBound_C : public ienseignant_Uc_EchangerFeutres {
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
            void setItsIenseignant_Uc_EchangerFeutres(ienseignant_Uc_EchangerFeutres* p_ienseignant_Uc_EchangerFeutres);
            
            //## auto_generated
            penseignant_C* getPort() const;
            
            //## auto_generated
            void setPort(penseignant_C* p_penseignant_C);
        
        protected :
        
            //## auto_generated
            void cleanUpRelations();
            
            ////    Relations and components    ////
            
            ienseignant_Uc_EchangerFeutres* itsIenseignant_Uc_EchangerFeutres;		//## link itsIenseignant_Uc_EchangerFeutres
            
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
        
        //## package FunctionalAnalysisPkg::EchangerFeutresPkg
        class OutBound_C : public iUc_EchangerFeutres_enseignant {
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
            void setItsIUc_EchangerFeutres_enseignant(OMReactive* p_OMReactive);
        
        protected :
        
            //## auto_generated
            void cleanUpRelations();
            
            ////    Relations and components    ////
            
            OMReactive* itsIUc_EchangerFeutres_enseignant;		//## link itsIUc_EchangerFeutres_enseignant
        };
        
        ////    Constructors and destructors    ////
        
        //## auto_generated
        penseignant_C();
        
        //## auto_generated
        virtual ~penseignant_C();
        
        ////    Operations    ////
        
        //## auto_generated
        void connectUc_EchangerFeutres(Uc_EchangerFeutres* part);
        
        //## auto_generated
        iUc_EchangerFeutres_enseignant* getItsIUc_EchangerFeutres_enseignant();
        
        //## auto_generated
        ienseignant_Uc_EchangerFeutres* getItsIenseignant_Uc_EchangerFeutres();
        
        //## auto_generated
        void setItsIUc_EchangerFeutres_enseignant(OMReactive* p_iUc_EchangerFeutres_enseignant);
        
        //## auto_generated
        void setItsIenseignant_Uc_EchangerFeutres(ienseignant_Uc_EchangerFeutres* p_ienseignant_Uc_EchangerFeutres);
        
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
    
    //## package FunctionalAnalysisPkg::EchangerFeutresPkg
    class psecretaire_C {
    public :
    
        //## auto_generated
        class InBound_C;
        
        //## auto_generated
        class OutBound_C;
        
        //## package FunctionalAnalysisPkg::EchangerFeutresPkg
        class InBound_C : public isecretaire_Uc_EchangerFeutres {
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
            void setItsIsecretaire_Uc_EchangerFeutres(isecretaire_Uc_EchangerFeutres* p_isecretaire_Uc_EchangerFeutres);
            
            //## auto_generated
            psecretaire_C* getPort() const;
            
            //## auto_generated
            void setPort(psecretaire_C* p_psecretaire_C);
        
        protected :
        
            //## auto_generated
            void cleanUpRelations();
            
            ////    Relations and components    ////
            
            isecretaire_Uc_EchangerFeutres* itsIsecretaire_Uc_EchangerFeutres;		//## link itsIsecretaire_Uc_EchangerFeutres
            
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
        
        //## package FunctionalAnalysisPkg::EchangerFeutresPkg
        class OutBound_C : public iUc_EchangerFeutres_secretaire {
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
            void setItsIUc_EchangerFeutres_secretaire(OMReactive* p_OMReactive);
        
        protected :
        
            //## auto_generated
            void cleanUpRelations();
            
            ////    Relations and components    ////
            
            OMReactive* itsIUc_EchangerFeutres_secretaire;		//## link itsIUc_EchangerFeutres_secretaire
        };
        
        ////    Constructors and destructors    ////
        
        //## auto_generated
        psecretaire_C();
        
        //## auto_generated
        virtual ~psecretaire_C();
        
        ////    Operations    ////
        
        //## auto_generated
        void connectUc_EchangerFeutres(Uc_EchangerFeutres* part);
        
        //## auto_generated
        iUc_EchangerFeutres_secretaire* getItsIUc_EchangerFeutres_secretaire();
        
        //## auto_generated
        isecretaire_Uc_EchangerFeutres* getItsIsecretaire_Uc_EchangerFeutres();
        
        //## auto_generated
        void setItsIUc_EchangerFeutres_secretaire(OMReactive* p_iUc_EchangerFeutres_secretaire);
        
        //## auto_generated
        void setItsIsecretaire_Uc_EchangerFeutres(isecretaire_Uc_EchangerFeutres* p_isecretaire_Uc_EchangerFeutres);
        
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
    friend class OMAnimatedUc_EchangerFeutres;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    Uc_EchangerFeutres(IOxfActive* theActiveContext = 0);
    
    //## auto_generated
    virtual ~Uc_EchangerFeutres();
    
    ////    Operations    ////
    
    //## operation LibererZone()
    virtual void LibererZone();
    
    //## operation ReceptionnerEchange()
    virtual void ReceptionnerEchange();
    
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
    
    // sendaction_2:
    //## statechart_method
    inline bool sendaction_2_IN() const;
    
    // sendaction_16:
    //## statechart_method
    inline bool sendaction_16_IN() const;
    
    // sendaction_11:
    //## statechart_method
    inline bool sendaction_11_IN() const;
    
    // enReceptionEchange:
    //## statechart_method
    inline bool enReceptionEchange_IN() const;
    
    // enLiberationZone:
    //## statechart_method
    inline bool enLiberationZone_IN() const;
    
    // enDeplacementVersSalleAvecFourniture:
    //## statechart_method
    inline bool enDeplacementVersSalleAvecFourniture_IN() const;
    
    // enDeplacementVersSalle:
    //## statechart_method
    inline bool enDeplacementVersSalle_IN() const;
    
    // enDeplacementVersAcceuil:
    //## statechart_method
    inline bool enDeplacementVersAcceuil_IN() const;
    
    // enAttenteEchangeFouniture:
    //## statechart_method
    inline bool enAttenteEchangeFouniture_IN() const;
    
    // enAttenteDechargementNouvelleFourniture:
    //## statechart_method
    inline bool enAttenteDechargementNouvelleFourniture_IN() const;
    
    // enAttenteChargementFournitureUsagee:
    //## statechart_method
    inline bool enAttenteChargementFournitureUsagee_IN() const;
    
    // enAttente:
    //## statechart_method
    inline bool enAttente_IN() const;
    
    // accepteventaction_9:
    //## statechart_method
    inline bool accepteventaction_9_IN() const;
    
    // accepteventaction_18:
    //## statechart_method
    inline bool accepteventaction_18_IN() const;
    
    // accepteventaction_13:
    //## statechart_method
    inline bool accepteventaction_13_IN() const;
    
    // accepteventaction_1:
    //## statechart_method
    inline bool accepteventaction_1_IN() const;
    
    ////    Framework    ////

protected :

//#[ ignore
    enum Uc_EchangerFeutres_Enum {
        OMNonState = 0,
        sendaction_6 = 1,
        sendaction_4 = 2,
        sendaction_2 = 3,
        sendaction_16 = 4,
        sendaction_11 = 5,
        enReceptionEchange = 6,
        enLiberationZone = 7,
        enDeplacementVersSalleAvecFourniture = 8,
        enDeplacementVersSalle = 9,
        enDeplacementVersAcceuil = 10,
        enAttenteEchangeFouniture = 11,
        enAttenteDechargementNouvelleFourniture = 12,
        enAttenteChargementFournitureUsagee = 13,
        enAttente = 14,
        accepteventaction_9 = 15,
        accepteventaction_18 = 16,
        accepteventaction_13 = 17,
        accepteventaction_1 = 18
    };
    
    int rootState_subState;
    
    int rootState_active;
    
    IOxfTimeout* rootState_timeout;
//#]
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedUc_EchangerFeutres : public OMAnimatedienseignant_Uc_EchangerFeutres, public OMAnimatedisecretaire_Uc_EchangerFeutres {
    DECLARE_REACTIVE_META(Uc_EchangerFeutres, OMAnimatedUc_EchangerFeutres)
    
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
    void sendaction_2_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void sendaction_16_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void sendaction_11_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void enReceptionEchange_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void enLiberationZone_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void enDeplacementVersSalleAvecFourniture_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void enDeplacementVersSalle_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void enDeplacementVersAcceuil_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void enAttenteEchangeFouniture_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void enAttenteDechargementNouvelleFourniture_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void enAttenteChargementFournitureUsagee_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void enAttente_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void accepteventaction_9_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void accepteventaction_18_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void accepteventaction_13_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void accepteventaction_1_serializeStates(AOMSState* aomsState) const;
};
//#]
#endif // _OMINSTRUMENT

inline bool Uc_EchangerFeutres::rootState_IN() const {
    return true;
}

inline bool Uc_EchangerFeutres::sendaction_6_IN() const {
    return rootState_subState == sendaction_6;
}

inline bool Uc_EchangerFeutres::sendaction_4_IN() const {
    return rootState_subState == sendaction_4;
}

inline bool Uc_EchangerFeutres::sendaction_2_IN() const {
    return rootState_subState == sendaction_2;
}

inline bool Uc_EchangerFeutres::sendaction_16_IN() const {
    return rootState_subState == sendaction_16;
}

inline bool Uc_EchangerFeutres::sendaction_11_IN() const {
    return rootState_subState == sendaction_11;
}

inline bool Uc_EchangerFeutres::enReceptionEchange_IN() const {
    return rootState_subState == enReceptionEchange;
}

inline bool Uc_EchangerFeutres::enLiberationZone_IN() const {
    return rootState_subState == enLiberationZone;
}

inline bool Uc_EchangerFeutres::enDeplacementVersSalleAvecFourniture_IN() const {
    return rootState_subState == enDeplacementVersSalleAvecFourniture;
}

inline bool Uc_EchangerFeutres::enDeplacementVersSalle_IN() const {
    return rootState_subState == enDeplacementVersSalle;
}

inline bool Uc_EchangerFeutres::enDeplacementVersAcceuil_IN() const {
    return rootState_subState == enDeplacementVersAcceuil;
}

inline bool Uc_EchangerFeutres::enAttenteEchangeFouniture_IN() const {
    return rootState_subState == enAttenteEchangeFouniture;
}

inline bool Uc_EchangerFeutres::enAttenteDechargementNouvelleFourniture_IN() const {
    return rootState_subState == enAttenteDechargementNouvelleFourniture;
}

inline bool Uc_EchangerFeutres::enAttenteChargementFournitureUsagee_IN() const {
    return rootState_subState == enAttenteChargementFournitureUsagee;
}

inline bool Uc_EchangerFeutres::enAttente_IN() const {
    return rootState_subState == enAttente;
}

inline bool Uc_EchangerFeutres::accepteventaction_9_IN() const {
    return rootState_subState == accepteventaction_9;
}

inline bool Uc_EchangerFeutres::accepteventaction_18_IN() const {
    return rootState_subState == accepteventaction_18;
}

inline bool Uc_EchangerFeutres::accepteventaction_13_IN() const {
    return rootState_subState == accepteventaction_13;
}

inline bool Uc_EchangerFeutres::accepteventaction_1_IN() const {
    return rootState_subState == accepteventaction_1;
}

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\Uc_EchangerFeutres.h
*********************************************************************/
