
############# Target type (Debug/Release) ##################
############################################################
CPPCompileDebug= /Zi /Od /D "_DEBUG" $(LIBCRT_FLAG)d  /Fd"$(TARGET_NAME)" 
CPPCompileRelease= /Ox /D"NDEBUG" $(LIBCRT_FLAG) /Fd"$(TARGET_NAME)" 
LinkDebug=
LinkRelease=
BuildSet=Debug
SUBSYSTEM=/SUBSYSTEM:console
RPFrameWorkDll=False
SimulinkLibName=

ConfigurationCPPCompileSwitches=   /I . /I . /I $(OMROOT)\LangCpp /I $(OMROOT)\LangCpp\oxf /nologo /W3 $(ENABLE_EH) $(CRT_FLAGS) $(CPPCompileDebug) /D "_AFXDLL" /D "WIN32" /D "_CONSOLE" /D "_MBCS" /D "_WINDOWS" $(INST_FLAGS) $(INCLUDE_PATH) $(INST_INCLUDES) /c   

!IF "$(RPFrameWorkDll)" == "True"
ConfigurationCPPCompileSwitches=$(ConfigurationCPPCompileSwitches) /D "FRAMEWORK_DLL"
!ENDIF

################### Compilation flags ######################
############################################################
INCLUDE_QUALIFIER=/I
DEFINE_QUALIFIER=/D

!IF "False" == "True"
MT_PREFIX=MT
LIBCRT_FLAG=/MT
!ELSE
MT_PREFIX=
LIBCRT_FLAG=/MD
!ENDIF

LIB_PREFIX=MSVC10x86$(MT_PREFIX)

CRT_FLAGS=$(DEFINE_QUALIFIER)_CRT_SECURE_NO_DEPRECATE $(DEFINE_QUALIFIER)_CRT_SECURE_NO_WARNINGS
ENABLE_EH=/EHa

WINMM_LIB=winmm.lib

################### Commands definition #########################
#################################################################
RMDIR = rmdir
LIB_CMD=link.exe -lib
LINK_CMD=link.exe
LIB_FLAGS=$(LinkDebug)  /NOLOGO   
LINK_FLAGS=$(LinkDebug)  /NOLOGO    $(SUBSYSTEM) /MACHINE:x86 

############### Generated macros #################
##################################################

FLAGSFILE=
RULESFILE=
OMROOT="C:\Rhapsody\Share"
RHPROOT="C:\Rhapsody"

CPP_EXT=.cpp
H_EXT=.h
OBJ_EXT=.obj
EXE_EXT=.exe
LIB_EXT=.lib

INSTRUMENTATION=Animation

TIME_MODEL=RealTime

TARGET_TYPE=Executable

TARGET_NAME=DefaultComponent

all : $(TARGET_NAME)$(EXE_EXT) DefaultComponent.mak

TARGET_MAIN=MainDefaultComponent

LIBS=

INCLUDE_PATH= \
  $(INCLUDE_QUALIFIER)$(OMROOT)/LangCpp/osconfig/WIN32

ADDITIONAL_OBJS=

OBJS= \
  enseignant.obj \
  secretaire.obj \
  feutre.obj \
  ienseignant_Uc_CommanderFeutres.obj \
  iUc_CommanderFeutres_enseignant.obj \
  iUc_CommanderFeutres_secretaire.obj \
  isecretaire_Uc_CommanderFeutres.obj \
  ienseignant_Uc_EchangerFeutres.obj \
  iUc_EchangerFeutres_enseignant.obj \
  iUc_EchangerFeutres_secretaire.obj \
  isecretaire_Uc_EchangerFeutres.obj \
  Uc_EchangerFeutres.obj \
  ActorPkg.obj \
  InterfacesPkg.obj \
  EchangerFeutresPkg.obj \
  EchangerFeutresExecutionScopePkg.obj




OBJ_DIR=

!IF "$(OBJ_DIR)"!=""
CREATE_OBJ_DIR=if not exist $(OBJ_DIR) mkdir $(OBJ_DIR)
CLEAN_OBJ_DIR= if exist $(OBJ_DIR) $(RMDIR) $(OBJ_DIR)
!ELSE
CREATE_OBJ_DIR=
CLEAN_OBJ_DIR=
!ENDIF

######################## Predefined macros ############################
#######################################################################
!IF "$(OBJS)" != ""
$(OBJS) : $(INST_LIBS) $(OXF_LIBS)
!ENDIF

LIB_POSTFIX=
!IF "$(BuildSet)"=="Release"
LIB_POSTFIX=R
!ENDIF

!IF "$(TARGET_TYPE)" == "Executable"
LinkDebug=$(LinkDebug) /DEBUG
LinkRelease=$(LinkRelease) /OPT:NOREF
!ELSEIF "$(TARGET_TYPE)" == "Library"
LinkDebug=$(LinkDebug)
!ENDIF


!IF "$(INSTRUMENTATION)" == "Animation"
INST_FLAGS=/D "OMANIMATOR"
INST_INCLUDES=/I $(OMROOT)\LangCpp\aom /I $(OMROOT)\LangCpp\tom
!IF "$(RPFrameWorkDll)" == "True"
INST_LIBS= 
OXF_LIBS=$(OMROOT)\LangCpp\lib\$(LIB_PREFIX)oxfanimdll$(LIB_POSTFIX)$(LIB_EXT) 
!ELSE
INST_LIBS= $(OMROOT)\LangCpp\lib\$(LIB_PREFIX)aomanim$(LIB_POSTFIX)$(LIB_EXT) $(OMROOT)\LangCpp\lib\$(LIB_PREFIX)oxsiminst$(LIB_POSTFIX)$(LIB_EXT)
OXF_LIBS=$(OMROOT)\LangCpp\lib\$(LIB_PREFIX)oxfinst$(LIB_POSTFIX)$(LIB_EXT) $(OMROOT)\LangCpp\lib\$(LIB_PREFIX)omComAppl$(LIB_POSTFIX)$(LIB_EXT) $(SimulinkLibName)
!ENDIF
SOCK_LIB=wsock32.lib

!ELSEIF "$(INSTRUMENTATION)" == "Tracing"
INST_FLAGS=/D "OMTRACER"
INST_INCLUDES=/I $(OMROOT)\LangCpp\aom /I $(OMROOT)\LangCpp\tom
!IF "$(RPFrameWorkDll)" == "True"
INST_LIBS=
OXF_LIBS= $(OMROOT)\LangCpp\lib\$(LIB_PREFIX)oxftracedll$(LIB_POSTFIX)$(LIB_EXT) 
!ELSE
INST_LIBS=$(OMROOT)\LangCpp\lib\$(LIB_PREFIX)tomtrace$(LIB_POSTFIX)$(LIB_EXT) $(OMROOT)\LangCpp\lib\$(LIB_PREFIX)aomtrace$(LIB_POSTFIX)$(LIB_EXT) $(OMROOT)\LangCpp\lib\$(LIB_PREFIX)oxsiminst$(LIB_POSTFIX)$(LIB_EXT)
OXF_LIBS= $(OMROOT)\LangCpp\lib\$(LIB_PREFIX)oxfinst$(LIB_POSTFIX)$(LIB_EXT) $(OMROOT)\LangCpp\lib\$(LIB_PREFIX)omComAppl$(LIB_POSTFIX)$(LIB_EXT) $(SimulinkLibName)
!ENDIF
SOCK_LIB=wsock32.lib

!ELSEIF "$(INSTRUMENTATION)" == "None" 
INST_FLAGS=
INST_INCLUDES=
INST_LIBS=
!IF "$(RPFrameWorkDll)" == "True"
OXF_LIBS=$(OMROOT)\LangCpp\lib\$(LIB_PREFIX)oxfdll$(LIB_POSTFIX)$(LIB_EXT) $(OMROOT)\LangCpp\lib\$(LIB_PREFIX)oxsim$(LIB_POSTFIX)$(LIB_EXT)
!ELSE
OXF_LIBS=$(OMROOT)\LangCpp\lib\$(LIB_PREFIX)oxf$(LIB_POSTFIX)$(LIB_EXT) $(SimulinkLibName) $(OMROOT)\LangCpp\lib\$(LIB_PREFIX)oxsim$(LIB_POSTFIX)$(LIB_EXT)
!ENDIF
SOCK_LIB=

!ELSE
!ERROR An invalid Instrumentation $(INSTRUMENTATION) is specified.
!ENDIF



################## Generated dependencies ########################
##################################################################






enseignant.obj : enseignant.cpp enseignant.h    ActorPkg.h ienseignant_Uc_CommanderFeutres.h ienseignant_Uc_EchangerFeutres.h InterfacesPkg.h iUc_CommanderFeutres_enseignant.h iUc_EchangerFeutres_enseignant.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"enseignant.obj" "enseignant.cpp" 



secretaire.obj : secretaire.cpp secretaire.h    ActorPkg.h isecretaire_Uc_CommanderFeutres.h isecretaire_Uc_EchangerFeutres.h InterfacesPkg.h iUc_CommanderFeutres_secretaire.h iUc_EchangerFeutres_secretaire.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"secretaire.obj" "secretaire.cpp" 



feutre.obj : feutre.cpp feutre.h    ActorPkg.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"feutre.obj" "feutre.cpp" 



ienseignant_Uc_CommanderFeutres.obj : ienseignant_Uc_CommanderFeutres.cpp ienseignant_Uc_CommanderFeutres.h    InterfacesPkg.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"ienseignant_Uc_CommanderFeutres.obj" "ienseignant_Uc_CommanderFeutres.cpp" 



iUc_CommanderFeutres_enseignant.obj : iUc_CommanderFeutres_enseignant.cpp iUc_CommanderFeutres_enseignant.h    InterfacesPkg.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"iUc_CommanderFeutres_enseignant.obj" "iUc_CommanderFeutres_enseignant.cpp" 



iUc_CommanderFeutres_secretaire.obj : iUc_CommanderFeutres_secretaire.cpp iUc_CommanderFeutres_secretaire.h    InterfacesPkg.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"iUc_CommanderFeutres_secretaire.obj" "iUc_CommanderFeutres_secretaire.cpp" 



isecretaire_Uc_CommanderFeutres.obj : isecretaire_Uc_CommanderFeutres.cpp isecretaire_Uc_CommanderFeutres.h    InterfacesPkg.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"isecretaire_Uc_CommanderFeutres.obj" "isecretaire_Uc_CommanderFeutres.cpp" 



ienseignant_Uc_EchangerFeutres.obj : ienseignant_Uc_EchangerFeutres.cpp ienseignant_Uc_EchangerFeutres.h    InterfacesPkg.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"ienseignant_Uc_EchangerFeutres.obj" "ienseignant_Uc_EchangerFeutres.cpp" 



iUc_EchangerFeutres_enseignant.obj : iUc_EchangerFeutres_enseignant.cpp iUc_EchangerFeutres_enseignant.h    InterfacesPkg.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"iUc_EchangerFeutres_enseignant.obj" "iUc_EchangerFeutres_enseignant.cpp" 



iUc_EchangerFeutres_secretaire.obj : iUc_EchangerFeutres_secretaire.cpp iUc_EchangerFeutres_secretaire.h    InterfacesPkg.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"iUc_EchangerFeutres_secretaire.obj" "iUc_EchangerFeutres_secretaire.cpp" 



isecretaire_Uc_EchangerFeutres.obj : isecretaire_Uc_EchangerFeutres.cpp isecretaire_Uc_EchangerFeutres.h    InterfacesPkg.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"isecretaire_Uc_EchangerFeutres.obj" "isecretaire_Uc_EchangerFeutres.cpp" 



Uc_EchangerFeutres.obj : Uc_EchangerFeutres.cpp Uc_EchangerFeutres.h    EchangerFeutresPkg.h iUc_EchangerFeutres_enseignant.h iUc_EchangerFeutres_secretaire.h InterfacesPkg.h ienseignant_Uc_EchangerFeutres.h isecretaire_Uc_EchangerFeutres.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"Uc_EchangerFeutres.obj" "Uc_EchangerFeutres.cpp" 



ActorPkg.obj : ActorPkg.cpp ActorPkg.h    
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"ActorPkg.obj" "ActorPkg.cpp" 



InterfacesPkg.obj : InterfacesPkg.cpp InterfacesPkg.h    ienseignant_Uc_CommanderFeutres.h iUc_CommanderFeutres_enseignant.h iUc_CommanderFeutres_secretaire.h isecretaire_Uc_CommanderFeutres.h ienseignant_Uc_EchangerFeutres.h iUc_EchangerFeutres_enseignant.h iUc_EchangerFeutres_secretaire.h isecretaire_Uc_EchangerFeutres.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"InterfacesPkg.obj" "InterfacesPkg.cpp" 



EchangerFeutresPkg.obj : EchangerFeutresPkg.cpp EchangerFeutresPkg.h    Uc_EchangerFeutres.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"EchangerFeutresPkg.obj" "EchangerFeutresPkg.cpp" 



EchangerFeutresExecutionScopePkg.obj : EchangerFeutresExecutionScopePkg.cpp EchangerFeutresExecutionScopePkg.h    EchangerFeutresPkg.h Uc_EchangerFeutres.h enseignant.h secretaire.h feutre.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"EchangerFeutresExecutionScopePkg.obj" "EchangerFeutresExecutionScopePkg.cpp" 






$(TARGET_MAIN)$(OBJ_EXT) : $(TARGET_MAIN)$(CPP_EXT) $(OBJS) 
	$(CPP) $(ConfigurationCPPCompileSwitches) /Fo"$(TARGET_MAIN)$(OBJ_EXT)" $(TARGET_MAIN)$(CPP_EXT)

########################## Linking instructions ###############################
###############################################################################
$(TARGET_NAME)$(EXE_EXT): $(OBJS) $(ADDITIONAL_OBJS) $(TARGET_MAIN)$(OBJ_EXT) DefaultComponent.mak 
	@echo Linking $(TARGET_NAME)$(EXE_EXT)
	$(LINK_CMD)  $(TARGET_MAIN)$(OBJ_EXT) $(OBJS) $(ADDITIONAL_OBJS) \
	$(LIBS) \
	$(INST_LIBS) \
	$(OXF_LIBS) \
	$(SOCK_LIB) \
	$(WINMM_LIB) \
	$(LINK_FLAGS) /out:$(TARGET_NAME)$(EXE_EXT)
	if exist $(TARGET_NAME)$(EXE_EXT).manifest mt.exe -manifest $@.manifest -outputresource:$(TARGET_NAME)$(EXE_EXT);1



$(TARGET_NAME)$(LIB_EXT) : $(OBJS) $(ADDITIONAL_OBJS) DefaultComponent.mak
	@echo Building library $@
	$(LIB_CMD) $(LIB_FLAGS) /out:$(TARGET_NAME)$(LIB_EXT) $(OBJS) $(ADDITIONAL_OBJS) $(LIBS)

clean:
	@echo Cleanup
	if exist enseignant.obj erase enseignant.obj
	if exist secretaire.obj erase secretaire.obj
	if exist feutre.obj erase feutre.obj
	if exist ienseignant_Uc_CommanderFeutres.obj erase ienseignant_Uc_CommanderFeutres.obj
	if exist iUc_CommanderFeutres_enseignant.obj erase iUc_CommanderFeutres_enseignant.obj
	if exist iUc_CommanderFeutres_secretaire.obj erase iUc_CommanderFeutres_secretaire.obj
	if exist isecretaire_Uc_CommanderFeutres.obj erase isecretaire_Uc_CommanderFeutres.obj
	if exist ienseignant_Uc_EchangerFeutres.obj erase ienseignant_Uc_EchangerFeutres.obj
	if exist iUc_EchangerFeutres_enseignant.obj erase iUc_EchangerFeutres_enseignant.obj
	if exist iUc_EchangerFeutres_secretaire.obj erase iUc_EchangerFeutres_secretaire.obj
	if exist isecretaire_Uc_EchangerFeutres.obj erase isecretaire_Uc_EchangerFeutres.obj
	if exist Uc_EchangerFeutres.obj erase Uc_EchangerFeutres.obj
	if exist ActorPkg.obj erase ActorPkg.obj
	if exist InterfacesPkg.obj erase InterfacesPkg.obj
	if exist EchangerFeutresPkg.obj erase EchangerFeutresPkg.obj
	if exist EchangerFeutresExecutionScopePkg.obj erase EchangerFeutresExecutionScopePkg.obj
	if exist $(TARGET_MAIN)$(OBJ_EXT) erase $(TARGET_MAIN)$(OBJ_EXT)
	if exist *$(OBJ_EXT) erase *$(OBJ_EXT)
	if exist $(TARGET_NAME).pdb erase $(TARGET_NAME).pdb
	if exist $(TARGET_NAME)$(LIB_EXT) erase $(TARGET_NAME)$(LIB_EXT)
	if exist $(TARGET_NAME).ilk erase $(TARGET_NAME).ilk
	if exist $(TARGET_NAME)$(EXE_EXT) erase $(TARGET_NAME)$(EXE_EXT)
	if exist $(TARGET_NAME)$(EXE_EXT).manifest erase $(TARGET_NAME)$(EXE_EXT).manifest
	$(CLEAN_OBJ_DIR)
	
