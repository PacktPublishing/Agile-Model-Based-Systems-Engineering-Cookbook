
############# Target type (Debug/Release) ##################
############################################################
CPPCompileDebug=-g
CPPCompileRelease=-O
LinkDebug=-g
LinkRelease=-O

CleanupFlagForSimulink=
SIMULINK_CONFIG=False
ifeq ($(SIMULINK_CONFIG),True)
CleanupFlagForSimulink=-DOM_WITH_CLEANUP
endif

ConfigurationCPPCompileSwitches=   $(INCLUDE_QUALIFIER). $(INCLUDE_QUALIFIER)$(OMROOT) $(INCLUDE_QUALIFIER)$(OMROOT)/LangCpp $(INCLUDE_QUALIFIER)$(OMROOT)/LangCpp/oxf $(DEFINE_QUALIFIER)CYGWIN $(INST_FLAGS) $(INCLUDE_PATH) $(INST_INCLUDES) -Wno-write-strings $(CPPCompileDebug) -c  $(CleanupFlagForSimulink)
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
OMROOT="C:/Users/Bruce/IBM/Rational/Rhapsody/8.4/Share"
RHPROOT="F:/Program Files (x86)/IBM/Rhapsody84"

CPP_EXT=.cpp
H_EXT=.h
OBJ_EXT=.o
EXE_EXT=.exe
LIB_EXT=.a

INSTRUMENTATION=Animation

TIME_MODEL=RealTime

TARGET_TYPE=Executable

TARGET_NAME=Control_ResistanceSim

all : $(TARGET_NAME)$(EXE_EXT) Control_ResistanceSim.mak

TARGET_MAIN=MainControl_ResistanceSim

LIBS= \
  $(OMROOT)/LangCpp/lib/cygwinWebComponents$(LIB_EXT) \
  $(OMROOT)/lib/cygwinWebServices$(LIB_EXT) \
  -lws2_32

INCLUDE_PATH= \
  $(INCLUDE_QUALIFIER)$(OMROOT)/LangCpp/osconfig/Cygwin

ADDITIONAL_OBJS=

OBJS= \
  Uc_ControlResistance.o \
  aCR_TrainingApp.o \
  aCR_Rider.o \
  ControlResistancePkg.o \
  ControlResistanceExecutionScopePkg.o \
  ControlResistanceTypesPkg.o \
  ControlResistanceInterfacesPkg.o \
  ControlResistanceActorPkg.o \
  ProxyPortInterfaces.o \
  InitWebResources.o




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






Uc_ControlResistance.o : Uc_ControlResistance.cpp Uc_ControlResistance.h    ControlResistancePkg.h evSendPedalCadenceToApp_ProxyReceptionInterface.h evSendFilteredPowerToApp_ProxyReceptionInterface.h evSendSpeedToApp_ProxyReceptionInterface.h evSendAccelerationToApp_ProxyReceptionInterface.h evApplyResistance_ProxyReceptionInterface.h ControlResistanceInterfacesPkg.h reqSetIncline_ProxyReceptionInterface.h reqOn_ProxyReceptionInterface.h reqSetGear_ProxyReceptionInterface.h reqSetPedalPosition_ProxyReceptionInterface.h reqSetPedalSpeed_ProxyReceptionInterface.h reqSetMeasuredPedalForce_ProxyReceptionInterface.h 
	@echo Compiling Uc_ControlResistance.cpp
	@$(CC) $(ConfigurationCPPCompileSwitches)  -o Uc_ControlResistance.o Uc_ControlResistance.cpp




aCR_TrainingApp.o : aCR_TrainingApp.cpp aCR_TrainingApp.h    ControlResistanceActorPkg.h reqSetIncline_ProxyReceptionInterface.h ControlResistanceInterfacesPkg.h evSendPedalCadenceToApp_ProxyReceptionInterface.h evSendFilteredPowerToApp_ProxyReceptionInterface.h evSendSpeedToApp_ProxyReceptionInterface.h evSendAccelerationToApp_ProxyReceptionInterface.h 
	@echo Compiling aCR_TrainingApp.cpp
	@$(CC) $(ConfigurationCPPCompileSwitches)  -o aCR_TrainingApp.o aCR_TrainingApp.cpp




aCR_Rider.o : aCR_Rider.cpp aCR_Rider.h    ControlResistanceActorPkg.h reqOn_ProxyReceptionInterface.h reqSetGear_ProxyReceptionInterface.h reqSetPedalPosition_ProxyReceptionInterface.h reqSetPedalSpeed_ProxyReceptionInterface.h reqSetMeasuredPedalForce_ProxyReceptionInterface.h ControlResistanceInterfacesPkg.h evApplyResistance_ProxyReceptionInterface.h 
	@echo Compiling aCR_Rider.cpp
	@$(CC) $(ConfigurationCPPCompileSwitches)  -o aCR_Rider.o aCR_Rider.cpp




ControlResistancePkg.o : ControlResistancePkg.cpp ControlResistancePkg.h    Uc_ControlResistance.h 
	@echo Compiling ControlResistancePkg.cpp
	@$(CC) $(ConfigurationCPPCompileSwitches)  -o ControlResistancePkg.o ControlResistancePkg.cpp




ControlResistanceExecutionScopePkg.o : ControlResistanceExecutionScopePkg.cpp ControlResistanceExecutionScopePkg.h    ControlResistancePkg.h Uc_ControlResistance.h aCR_TrainingApp.h aCR_Rider.h 
	@echo Compiling ControlResistanceExecutionScopePkg.cpp
	@$(CC) $(ConfigurationCPPCompileSwitches)  -o ControlResistanceExecutionScopePkg.o ControlResistanceExecutionScopePkg.cpp




ControlResistanceTypesPkg.o : ControlResistanceTypesPkg.cpp ControlResistanceTypesPkg.h    ControlResistancePkg.h 
	@echo Compiling ControlResistanceTypesPkg.cpp
	@$(CC) $(ConfigurationCPPCompileSwitches)  -o ControlResistanceTypesPkg.o ControlResistanceTypesPkg.cpp




ControlResistanceInterfacesPkg.o : ControlResistanceInterfacesPkg.cpp ControlResistanceInterfacesPkg.h    ControlResistancePkg.h 
	@echo Compiling ControlResistanceInterfacesPkg.cpp
	@$(CC) $(ConfigurationCPPCompileSwitches)  -o ControlResistanceInterfacesPkg.o ControlResistanceInterfacesPkg.cpp




ControlResistanceActorPkg.o : ControlResistanceActorPkg.cpp ControlResistanceActorPkg.h    aCR_TrainingApp.h aCR_Rider.h ControlResistancePkg.h 
	@echo Compiling ControlResistanceActorPkg.cpp
	@$(CC) $(ConfigurationCPPCompileSwitches)  -o ControlResistanceActorPkg.o ControlResistanceActorPkg.cpp




ProxyPortInterfaces.o : ProxyPortInterfaces.cpp ProxyPortInterfaces.h    reqSetIncline_ProxyReceptionInterface.h evSendPedalCadenceToApp_ProxyReceptionInterface.h evSendFilteredPowerToApp_ProxyReceptionInterface.h evSendSpeedToApp_ProxyReceptionInterface.h evSendAccelerationToApp_ProxyReceptionInterface.h reqOn_ProxyReceptionInterface.h reqSetGear_ProxyReceptionInterface.h reqSetPedalPosition_ProxyReceptionInterface.h reqSetPedalSpeed_ProxyReceptionInterface.h reqSetMeasuredPedalForce_ProxyReceptionInterface.h evApplyResistance_ProxyReceptionInterface.h 
	@echo Compiling ProxyPortInterfaces.cpp
	@$(CC) $(ConfigurationCPPCompileSwitches)  -o ProxyPortInterfaces.o ProxyPortInterfaces.cpp




InitWebResources.o : InitWebResources.cpp     
	@echo Compiling InitWebResources.cpp
	@$(CC) $(ConfigurationCPPCompileSwitches)  -o InitWebResources.o InitWebResources.cpp







$(TARGET_MAIN)$(OBJ_EXT) : $(TARGET_MAIN)$(CPP_EXT) $(OBJS)
	@echo Compiling $(TARGET_MAIN)$(CPP_EXT)
	@$(CC) $(ConfigurationCPPCompileSwitches) -o  $(TARGET_MAIN)$(OBJ_EXT) $(TARGET_MAIN)$(CPP_EXT)

####################################################################
############## Predefined Instructions #############################
$(TARGET_NAME)$(EXE_EXT): $(OBJS) $(ADDITIONAL_OBJS) $(TARGET_MAIN)$(OBJ_EXT) Control_ResistanceSim.mak
	@echo Linking $(TARGET_NAME)$(EXE_EXT)
	@$(LINK_CMD)  $(TARGET_MAIN)$(OBJ_EXT) $(OBJS) $(ADDITIONAL_OBJS) \
	$(LIBS) \
	$(OXF_LIBS) \
	$(INST_LIBS) \
	$(OXF_LIBS) \
	$(INST_LIBS) \
	$(SOCK_LIB) \
	$(LINK_FLAGS) -o $(TARGET_NAME)$(EXE_EXT)

$(TARGET_NAME)$(LIB_EXT) : $(OBJS) $(ADDITIONAL_OBJS) Control_ResistanceSim.mak
	@echo Building library $@
	@$(LIB_CMD) $(LIB_FLAGS) $(TARGET_NAME)$(LIB_EXT) $(OBJS) $(ADDITIONAL_OBJS)



clean:
	@echo Cleanup
	$(RM) Uc_ControlResistance.o
	$(RM) aCR_TrainingApp.o
	$(RM) aCR_Rider.o
	$(RM) ControlResistancePkg.o
	$(RM) ControlResistanceExecutionScopePkg.o
	$(RM) ControlResistanceTypesPkg.o
	$(RM) ControlResistanceInterfacesPkg.o
	$(RM) ControlResistanceActorPkg.o
	$(RM) ProxyPortInterfaces.o
	$(RM) InitWebResources.o
	$(RM) $(TARGET_MAIN)$(OBJ_EXT) $(ADDITIONAL_OBJS)
	$(RM) $(TARGET_NAME)$(LIB_EXT)
	$(RM) $(TARGET_NAME)$(EXE_EXT)

