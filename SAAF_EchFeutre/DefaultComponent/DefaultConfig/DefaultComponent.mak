
############# Target type (Debug/Release) ##################
############################################################
CPPCompileDebug=-g
CPPCompileRelease=-O
LinkDebug=-g
LinkRelease=-O

ConfigurationCPPCompileSwitches=   $(INCLUDE_QUALIFIER). $(INCLUDE_QUALIFIER)$(OMROOT) $(INCLUDE_QUALIFIER)$(OMROOT)/LangCpp $(INCLUDE_QUALIFIER)$(OMROOT)/LangCpp/oxf $(DEFINE_QUALIFIER)CYGWIN $(INST_FLAGS) $(INCLUDE_PATH) $(INST_INCLUDES) -Wno-write-strings $(CPPCompileDebug) -c 
ConfigurationCCCompileSwitches=$(INCLUDE_PATH) -c 

#########################################
###### Predefined macros ################
RM=/bin/rm -rf
INCLUDE_QUALIFIER=-I
DEFINE_QUALIFIER=-D
CC=g++
LIB_CMD=ar
LINK_CMD=g++
LIB_FLAGS=rvu
LINK_FLAGS= $(LinkDebug)   

#########################################
####### Context macros ##################

FLAGSFILE=
RULESFILE=
OMROOT="C:/Program Files (x86)/IBM/Rational/Rhapsody/8.1.1/Share"
RHPROOT="C:/Program Files (x86)/IBM/Rational/Rhapsody/8.1.1"

CPP_EXT=.cpp
H_EXT=.h
OBJ_EXT=.o
EXE_EXT=.exe
LIB_EXT=.a

INSTRUMENTATION=Animation

TIME_MODEL=RealTime

TARGET_TYPE=Executable

TARGET_NAME=DefaultComponent

all : $(TARGET_NAME)$(EXE_EXT) DefaultComponent.mak

TARGET_MAIN=MainDefaultComponent

LIBS=

INCLUDE_PATH= \
  $(INCLUDE_QUALIFIER)$(OMROOT)/LangCpp/osconfig/Cygwin

ADDITIONAL_OBJS=

OBJS= \
  enseignant.o \
  secretaire.o \
  feutre.o \
  Uc_CommanderFeutres.o \
  ienseignant_Uc_CommanderFeutres.o \
  iUc_CommanderFeutres_enseignant.o \
  iUc_CommanderFeutres_secretaire.o \
  isecretaire_Uc_CommanderFeutres.o \
  ienseignant_Uc_EchangerFeutres.o \
  iUc_EchangerFeutres_enseignant.o \
  iUc_EchangerFeutres_secretaire.o \
  isecretaire_Uc_EchangerFeutres.o \
  ActorPkg.o \
  CommanderFeutresPkg.o \
  CommanderFeutresExecutionScopePkg.o \
  InterfacesPkg.o




#########################################
####### Predefined macros ###############
$(OBJS) : $(INST_LIBS) $(OXF_LIBS)

ifeq ($(INSTRUMENTATION),Animation)

INST_FLAGS=$(DEFINE_QUALIFIER)OMANIMATOR $(DEFINE_QUALIFIER)__USE_W32_SOCKETS 
INST_INCLUDES=$(INCLUDE_QUALIFIER)$(OMROOT)/LangCpp/aom $(INCLUDE_QUALIFIER)$(OMROOT)/LangCpp/tom
INST_LIBS=$(OMROOT)/LangCpp/lib/cygwinaomanim$(LIB_EXT) $(OMROOT)/LangCpp/lib/cygwinoxsiminst$(LIB_EXT)
OXF_LIBS=$(OMROOT)/LangCpp/lib/cygwinoxfinst$(LIB_EXT) $(OMROOT)/LangCpp/lib/cygwinomcomappl$(LIB_EXT)
SOCK_LIB=-lws2_32

else
ifeq ($(INSTRUMENTATION),Tracing)

INST_FLAGS=$(DEFINE_QUALIFIER)OMTRACER 
INST_INCLUDES=$(INCLUDE_QUALIFIER)$(OMROOT)/LangCpp/aom $(INCLUDE_QUALIFIER)$(OMROOT)/LangCpp/tom
INST_LIBS=$(OMROOT)/LangCpp/lib/cygwintomtrace$(LIB_EXT) $(OMROOT)/LangCpp/lib/cygwinaomtrace$(LIB_EXT) $(OMROOT)/LangCpp/lib/cygwinoxsiminst$(LIB_EXT)
OXF_LIBS=$(OMROOT)/LangCpp/lib/cygwinoxfinst$(LIB_EXT) $(OMROOT)/LangCpp/lib/cygwinomcomappl$(LIB_EXT)
SOCK_LIB=-lws2_32

else
ifeq ($(INSTRUMENTATION),None)

INST_FLAGS= 
INST_INCLUDES=
INST_LIBS=$(OMROOT)/LangCpp/lib/cygwinoxsim$(LIB_EXT)
OXF_LIBS=$(OMROOT)/LangCpp/lib/cygwinoxf$(LIB_EXT)
SOCK_LIB=-lws2_32

else
	@echo An invalid Instrumentation $(INSTRUMENTATION) is specified.
	exit
endif
endif
endif

.SUFFIXES: $(CPP_EXT)

#####################################################################
##################### Context dependencies and commands #############






enseignant.o : enseignant.cpp enseignant.h    ActorPkg.h ienseignant_Uc_CommanderFeutres.h ienseignant_Uc_EchangerFeutres.h InterfacesPkg.h iUc_CommanderFeutres_enseignant.h iUc_EchangerFeutres_enseignant.h 
	@echo Compiling enseignant.cpp
	@$(CC) $(ConfigurationCPPCompileSwitches)  -o enseignant.o enseignant.cpp




secretaire.o : secretaire.cpp secretaire.h    ActorPkg.h isecretaire_Uc_CommanderFeutres.h isecretaire_Uc_EchangerFeutres.h InterfacesPkg.h iUc_CommanderFeutres_secretaire.h iUc_EchangerFeutres_secretaire.h 
	@echo Compiling secretaire.cpp
	@$(CC) $(ConfigurationCPPCompileSwitches)  -o secretaire.o secretaire.cpp




feutre.o : feutre.cpp feutre.h    ActorPkg.h 
	@echo Compiling feutre.cpp
	@$(CC) $(ConfigurationCPPCompileSwitches)  -o feutre.o feutre.cpp




Uc_CommanderFeutres.o : Uc_CommanderFeutres.cpp Uc_CommanderFeutres.h    CommanderFeutresPkg.h iUc_CommanderFeutres_enseignant.h iUc_CommanderFeutres_secretaire.h InterfacesPkg.h ienseignant_Uc_CommanderFeutres.h isecretaire_Uc_CommanderFeutres.h 
	@echo Compiling Uc_CommanderFeutres.cpp
	@$(CC) $(ConfigurationCPPCompileSwitches)  -o Uc_CommanderFeutres.o Uc_CommanderFeutres.cpp




ienseignant_Uc_CommanderFeutres.o : ienseignant_Uc_CommanderFeutres.cpp ienseignant_Uc_CommanderFeutres.h    InterfacesPkg.h 
	@echo Compiling ienseignant_Uc_CommanderFeutres.cpp
	@$(CC) $(ConfigurationCPPCompileSwitches)  -o ienseignant_Uc_CommanderFeutres.o ienseignant_Uc_CommanderFeutres.cpp




iUc_CommanderFeutres_enseignant.o : iUc_CommanderFeutres_enseignant.cpp iUc_CommanderFeutres_enseignant.h    InterfacesPkg.h 
	@echo Compiling iUc_CommanderFeutres_enseignant.cpp
	@$(CC) $(ConfigurationCPPCompileSwitches)  -o iUc_CommanderFeutres_enseignant.o iUc_CommanderFeutres_enseignant.cpp




iUc_CommanderFeutres_secretaire.o : iUc_CommanderFeutres_secretaire.cpp iUc_CommanderFeutres_secretaire.h    InterfacesPkg.h 
	@echo Compiling iUc_CommanderFeutres_secretaire.cpp
	@$(CC) $(ConfigurationCPPCompileSwitches)  -o iUc_CommanderFeutres_secretaire.o iUc_CommanderFeutres_secretaire.cpp




isecretaire_Uc_CommanderFeutres.o : isecretaire_Uc_CommanderFeutres.cpp isecretaire_Uc_CommanderFeutres.h    InterfacesPkg.h 
	@echo Compiling isecretaire_Uc_CommanderFeutres.cpp
	@$(CC) $(ConfigurationCPPCompileSwitches)  -o isecretaire_Uc_CommanderFeutres.o isecretaire_Uc_CommanderFeutres.cpp




ienseignant_Uc_EchangerFeutres.o : ienseignant_Uc_EchangerFeutres.cpp ienseignant_Uc_EchangerFeutres.h    InterfacesPkg.h 
	@echo Compiling ienseignant_Uc_EchangerFeutres.cpp
	@$(CC) $(ConfigurationCPPCompileSwitches)  -o ienseignant_Uc_EchangerFeutres.o ienseignant_Uc_EchangerFeutres.cpp




iUc_EchangerFeutres_enseignant.o : iUc_EchangerFeutres_enseignant.cpp iUc_EchangerFeutres_enseignant.h    InterfacesPkg.h 
	@echo Compiling iUc_EchangerFeutres_enseignant.cpp
	@$(CC) $(ConfigurationCPPCompileSwitches)  -o iUc_EchangerFeutres_enseignant.o iUc_EchangerFeutres_enseignant.cpp




iUc_EchangerFeutres_secretaire.o : iUc_EchangerFeutres_secretaire.cpp iUc_EchangerFeutres_secretaire.h    InterfacesPkg.h 
	@echo Compiling iUc_EchangerFeutres_secretaire.cpp
	@$(CC) $(ConfigurationCPPCompileSwitches)  -o iUc_EchangerFeutres_secretaire.o iUc_EchangerFeutres_secretaire.cpp




isecretaire_Uc_EchangerFeutres.o : isecretaire_Uc_EchangerFeutres.cpp isecretaire_Uc_EchangerFeutres.h    InterfacesPkg.h 
	@echo Compiling isecretaire_Uc_EchangerFeutres.cpp
	@$(CC) $(ConfigurationCPPCompileSwitches)  -o isecretaire_Uc_EchangerFeutres.o isecretaire_Uc_EchangerFeutres.cpp




ActorPkg.o : ActorPkg.cpp ActorPkg.h    
	@echo Compiling ActorPkg.cpp
	@$(CC) $(ConfigurationCPPCompileSwitches)  -o ActorPkg.o ActorPkg.cpp




CommanderFeutresPkg.o : CommanderFeutresPkg.cpp CommanderFeutresPkg.h    Uc_CommanderFeutres.h 
	@echo Compiling CommanderFeutresPkg.cpp
	@$(CC) $(ConfigurationCPPCompileSwitches)  -o CommanderFeutresPkg.o CommanderFeutresPkg.cpp




CommanderFeutresExecutionScopePkg.o : CommanderFeutresExecutionScopePkg.cpp CommanderFeutresExecutionScopePkg.h    CommanderFeutresPkg.h Uc_CommanderFeutres.h enseignant.h secretaire.h feutre.h 
	@echo Compiling CommanderFeutresExecutionScopePkg.cpp
	@$(CC) $(ConfigurationCPPCompileSwitches)  -o CommanderFeutresExecutionScopePkg.o CommanderFeutresExecutionScopePkg.cpp




InterfacesPkg.o : InterfacesPkg.cpp InterfacesPkg.h    ienseignant_Uc_CommanderFeutres.h iUc_CommanderFeutres_enseignant.h iUc_CommanderFeutres_secretaire.h isecretaire_Uc_CommanderFeutres.h ienseignant_Uc_EchangerFeutres.h iUc_EchangerFeutres_enseignant.h iUc_EchangerFeutres_secretaire.h isecretaire_Uc_EchangerFeutres.h 
	@echo Compiling InterfacesPkg.cpp
	@$(CC) $(ConfigurationCPPCompileSwitches)  -o InterfacesPkg.o InterfacesPkg.cpp







$(TARGET_MAIN)$(OBJ_EXT) : $(TARGET_MAIN)$(CPP_EXT) $(OBJS)
	@echo Compiling $(TARGET_MAIN)$(CPP_EXT)
	@$(CC) $(ConfigurationCPPCompileSwitches) -o  $(TARGET_MAIN)$(OBJ_EXT) $(TARGET_MAIN)$(CPP_EXT)

####################################################################
############## Predefined Instructions #############################
$(TARGET_NAME)$(EXE_EXT): $(OBJS) $(ADDITIONAL_OBJS) $(TARGET_MAIN)$(OBJ_EXT) DefaultComponent.mak
	@echo Linking $(TARGET_NAME)$(EXE_EXT)
	@$(LINK_CMD)  $(TARGET_MAIN)$(OBJ_EXT) $(OBJS) $(ADDITIONAL_OBJS) \
	$(LIBS) \
	$(OXF_LIBS) \
	$(INST_LIBS) \
	$(OXF_LIBS) \
	$(INST_LIBS) \
	$(SOCK_LIB) \
	$(LINK_FLAGS) -o $(TARGET_NAME)$(EXE_EXT)

$(TARGET_NAME)$(LIB_EXT) : $(OBJS) $(ADDITIONAL_OBJS) DefaultComponent.mak
	@echo Building library $@
	@$(LIB_CMD) $(LIB_FLAGS) $(TARGET_NAME)$(LIB_EXT) $(OBJS) $(ADDITIONAL_OBJS)



clean:
	@echo Cleanup
	$(RM) enseignant.o
	$(RM) secretaire.o
	$(RM) feutre.o
	$(RM) Uc_CommanderFeutres.o
	$(RM) ienseignant_Uc_CommanderFeutres.o
	$(RM) iUc_CommanderFeutres_enseignant.o
	$(RM) iUc_CommanderFeutres_secretaire.o
	$(RM) isecretaire_Uc_CommanderFeutres.o
	$(RM) ienseignant_Uc_EchangerFeutres.o
	$(RM) iUc_EchangerFeutres_enseignant.o
	$(RM) iUc_EchangerFeutres_secretaire.o
	$(RM) isecretaire_Uc_EchangerFeutres.o
	$(RM) ActorPkg.o
	$(RM) CommanderFeutresPkg.o
	$(RM) CommanderFeutresExecutionScopePkg.o
	$(RM) InterfacesPkg.o
	$(RM) $(TARGET_MAIN)$(OBJ_EXT) $(ADDITIONAL_OBJS)
	$(RM) $(TARGET_NAME)$(LIB_EXT)
	$(RM) $(TARGET_NAME)$(EXE_EXT)

