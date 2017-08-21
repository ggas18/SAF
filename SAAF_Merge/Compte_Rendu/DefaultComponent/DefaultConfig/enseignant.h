/*********************************************************************
	Rhapsody	: 8.1.1 
	Login		: GANOU Arouna
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: enseignant
//!	Generated Date	: Sun, 11, Jun 2017  
	File Path	: DefaultComponent/DefaultConfig/enseignant.h
*********************************************************************/

#ifndef enseignant_H
#define enseignant_H

//## auto_generated
#include <oxf/oxf.h>
//## auto_generated
#include <../Profiles/SysML/SIDefinitions.h>
//## auto_generated
#include <aom/aom.h>
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
    
    //## auto_generated
    void initStatechart();
    
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
    
    // sendaction_7:
    //## statechart_method
    inline bool sendaction_7_IN() const;
    
    // sendaction_3:
    //## statechart_method
    inline bool sendaction_3_IN() const;
    
    // sendaction_23:
    //## statechart_method
    inline bool sendaction_23_IN() const;
    
    // sendaction_22:
    //## statechart_method
    inline bool sendaction_22_IN() const;
    
    // sendaction_20:
    //## statechart_method
    inline bool sendaction_20_IN() const;
    
    // sendaction_16:
    //## statechart_method
    inline bool sendaction_16_IN() const;
    
    // sendaction_13:
    //## statechart_method
    inline bool sendaction_13_IN() const;
    
    // enReponseFournitureUsagee:
    //## statechart_method
    inline bool enReponseFournitureUsagee_IN() const;
    
    // enDechargementFourniture:
    //## statechart_method
    inline bool enDechargementFourniture_IN() const;
    
    // enCours:
    //## statechart_method
    inline bool enCours_IN() const;
    
    //## statechart_method
    IOxfReactive::TakeEventStatus enCours_handleEvent();
    
    // enChargementFournitureUsagee:
    //## statechart_method
    inline bool enChargementFournitureUsagee_IN() const;
    
    // enAttenteConfirmationEchange:
    //## statechart_method
    inline bool enAttenteConfirmationEchange_IN() const;
    
    // enAttenteConfirmationCommande:
    //## statechart_method
    inline bool enAttenteConfirmationCommande_IN() const;
    
    // accepteventaction_9:
    //## statechart_method
    inline bool accepteventaction_9_IN() const;
    
    // accepteventaction_5:
    //## statechart_method
    inline bool accepteventaction_5_IN() const;
    
    // accepteventaction_19:
    //## statechart_method
    inline bool accepteventaction_19_IN() const;
    
    // accepteventaction_14:
    //## statechart_method
    inline bool accepteventaction_14_IN() const;
    
    // accepteventaction_10:
    //## statechart_method
    inline bool accepteventaction_10_IN() const;
    
    ////    Framework    ////

protected :

//#[ ignore
    enum enseignant_Enum {
        OMNonState = 0,
        sendaction_7 = 1,
        sendaction_3 = 2,
        sendaction_23 = 3,
        sendaction_22 = 4,
        sendaction_20 = 5,
        sendaction_16 = 6,
        sendaction_13 = 7,
        enReponseFournitureUsagee = 8,
        enDechargementFourniture = 9,
        enCours = 10,
        enChargementFournitureUsagee = 11,
        enAttenteConfirmationEchange = 12,
        enAttenteConfirmationCommande = 13,
        accepteventaction_9 = 14,
        accepteventaction_5 = 15,
        accepteventaction_19 = 16,
        accepteventaction_14 = 17,
        accepteventaction_10 = 18
    };
    
    int rootState_subState;
    
    int rootState_active;
//#]
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedenseignant : public OMAnimatediUc_CommanderFeutres_enseignant, public OMAnimatediUc_EchangerFeutres_enseignant {
    DECLARE_REACTIVE_META(enseignant, OMAnimatedenseignant)
    
    ////    Framework operations    ////
    
public :

    virtual void serializeAttributes(AOMSAttributes* aomsAttributes) const;
    
    virtual void serializeRelations(AOMSRelations* aomsRelations) const;
    
    //## statechart_method
    void rootState_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void sendaction_7_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void sendaction_3_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void sendaction_23_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void sendaction_22_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void sendaction_20_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void sendaction_16_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void sendaction_13_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void enReponseFournitureUsagee_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void enDechargementFourniture_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void enCours_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void enChargementFournitureUsagee_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void enAttenteConfirmationEchange_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void enAttenteConfirmationCommande_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void accepteventaction_9_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void accepteventaction_5_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void accepteventaction_19_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void accepteventaction_14_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void accepteventaction_10_serializeStates(AOMSState* aomsState) const;
};
//#]
#endif // _OMINSTRUMENT

inline bool enseignant::rootState_IN() const {
    return true;
}

inline bool enseignant::sendaction_7_IN() const {
    return rootState_subState == sendaction_7;
}

inline bool enseignant::sendaction_3_IN() const {
    return rootState_subState == sendaction_3;
}

inline bool enseignant::sendaction_23_IN() const {
    return rootState_subState == sendaction_23;
}

inline bool enseignant::sendaction_22_IN() const {
    return rootState_subState == sendaction_22;
}

inline bool enseignant::sendaction_20_IN() const {
    return rootState_subState == sendaction_20;
}

inline bool enseignant::sendaction_16_IN() const {
    return rootState_subState == sendaction_16;
}

inline bool enseignant::sendaction_13_IN() const {
    return rootState_subState == sendaction_13;
}

inline bool enseignant::enReponseFournitureUsagee_IN() const {
    return rootState_subState == enReponseFournitureUsagee;
}

inline bool enseignant::enDechargementFourniture_IN() const {
    return rootState_subState == enDechargementFourniture;
}

inline bool enseignant::enCours_IN() const {
    return rootState_subState == enCours;
}

inline bool enseignant::enChargementFournitureUsagee_IN() const {
    return rootState_subState == enChargementFournitureUsagee;
}

inline bool enseignant::enAttenteConfirmationEchange_IN() const {
    return rootState_subState == enAttenteConfirmationEchange;
}

inline bool enseignant::enAttenteConfirmationCommande_IN() const {
    return rootState_subState == enAttenteConfirmationCommande;
}

inline bool enseignant::accepteventaction_9_IN() const {
    return rootState_subState == accepteventaction_9;
}

inline bool enseignant::accepteventaction_5_IN() const {
    return rootState_subState == accepteventaction_5;
}

inline bool enseignant::accepteventaction_19_IN() const {
    return rootState_subState == accepteventaction_19;
}

inline bool enseignant::accepteventaction_14_IN() const {
    return rootState_subState == accepteventaction_14;
}

inline bool enseignant::accepteventaction_10_IN() const {
    return rootState_subState == accepteventaction_10;
}

#endif
/*********************************************************************
	File Path	: DefaultComponent/DefaultConfig/enseignant.h
*********************************************************************/
