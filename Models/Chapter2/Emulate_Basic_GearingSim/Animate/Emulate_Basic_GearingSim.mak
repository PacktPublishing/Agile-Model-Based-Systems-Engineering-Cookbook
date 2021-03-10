
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

TARGET_NAME=Emulate_Basic_GearingSim

all : $(TARGET_NAME)$(EXE_EXT) Emulate_Basic_GearingSim.mak

TARGET_MAIN=MainEmulate_Basic_GearingSim

LIBS=

INCLUDE_PATH= \
  $(INCLUDE_QUALIFIER)$(OMROOT)/LangCpp/osconfig/Cygwin

ADDITIONAL_OBJS=

OBJS= \
  Uc_EmulateBasicGearing.o \
  aEBG_TrainingApp.o \
  aEBG_Rider.o \
  EmulateBasicGearingPkg.o \
  EmulateBasicGearingExecutionScopePkg.o \
  EmulateBasicGearingTypesPkg.o \
  EmulateBasicGearingInterfacesPkg.o \
  EmulateBasicGearingActorPkg.o \
  ProxyPortInterfaces.o




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






Uc_EmulateBasicGearing.o : Uc_EmulateBasicGearing.cpp Uc_EmulateBasicGearing.h    EmulateBasicGearingPkg.h gearing_ProxyReceptionInterface.h Real_resistance_ProxyFlowPropertyInterface.h EmulateBasicGearingInterfacesPkg.h decrementGear_ProxyReceptionInterface.h incrementGear_ProxyReceptionInterface.h Real_appliedTorque_ProxyFlowPropertyInterface.h 
	@echo Compiling Uc_EmulateBasicGearing.cpp
	@$(CC) $(ConfigurationCPPCompileSwitches)  -o Uc_EmulateBasicGearing.o Uc_EmulateBasicGearing.cpp




aEBG_TrainingApp.o : aEBG_TrainingApp.cpp aEBG_TrainingApp.h    EmulateBasicGearingActorPkg.h EmulateBasicGearingInterfacesPkg.h gearing_ProxyReceptionInterface.h 
	@echo Compiling aEBG_TrainingApp.cpp
	@$(CC) $(ConfigurationCPPCompileSwitches)  -o aEBG_TrainingApp.o aEBG_TrainingApp.cpp




aEBG_Rider.o : aEBG_Rider.cpp aEBG_Rider.h    EmulateBasicGearingActorPkg.h decrementGear_ProxyReceptionInterface.h incrementGear_ProxyReceptionInterface.h Real_appliedTorque_ProxyFlowPropertyInterface.h 
	@echo Compiling aEBG_Rider.cpp
	@$(CC) $(ConfigurationCPPCompileSwitches)  -o aEBG_Rider.o aEBG_Rider.cpp




EmulateBasicGearingPkg.o : EmulateBasicGearingPkg.cpp EmulateBasicGearingPkg.h    Uc_EmulateBasicGearing.h 
	@echo Compiling EmulateBasicGearingPkg.cpp
	@$(CC) $(ConfigurationCPPCompileSwitches)  -o EmulateBasicGearingPkg.o EmulateBasicGearingPkg.cpp




EmulateBasicGearingExecutionScopePkg.o : EmulateBasicGearingExecutionScopePkg.cpp EmulateBasicGearingExecutionScopePkg.h    EmulateBasicGearingPkg.h Uc_EmulateBasicGearing.h aEBG_TrainingApp.h aEBG_Rider.h 
	@echo Compiling EmulateBasicGearingExecutionScopePkg.cpp
	@$(CC) $(ConfigurationCPPCompileSwitches)  -o EmulateBasicGearingExecutionScopePkg.o EmulateBasicGearingExecutionScopePkg.cpp




EmulateBasicGearingTypesPkg.o : EmulateBasicGearingTypesPkg.cpp EmulateBasicGearingTypesPkg.h    EmulateBasicGearingPkg.h 
	@echo Compiling EmulateBasicGearingTypesPkg.cpp
	@$(CC) $(ConfigurationCPPCompileSwitches)  -o EmulateBasicGearingTypesPkg.o EmulateBasicGearingTypesPkg.cpp




EmulateBasicGearingInterfacesPkg.o : EmulateBasicGearingInterfacesPkg.cpp EmulateBasicGearingInterfacesPkg.h    EmulateBasicGearingPkg.h 
	@echo Compiling EmulateBasicGearingInterfacesPkg.cpp
	@$(CC) $(ConfigurationCPPCompileSwitches)  -o EmulateBasicGearingInterfacesPkg.o EmulateBasicGearingInterfacesPkg.cpp




EmulateBasicGearingActorPkg.o : EmulateBasicGearingActorPkg.cpp EmulateBasicGearingActorPkg.h    aEBG_TrainingApp.h aEBG_Rider.h EmulateBasicGearingPkg.h 
	@echo Compiling EmulateBasicGearingActorPkg.cpp
	@$(CC) $(ConfigurationCPPCompileSwitches)  -o EmulateBasicGearingActorPkg.o EmulateBasicGearingActorPkg.cpp




ProxyPortInterfaces.o : ProxyPortInterfaces.cpp ProxyPortInterfaces.h    gearing_ProxyReceptionInterface.h decrementGear_ProxyReceptionInterface.h incrementGear_ProxyReceptionInterface.h Real_resistance_ProxyFlowPropertyInterface.h Real_appliedTorque_ProxyFlowPropertyInterface.h 
	@echo Compiling ProxyPortInterfaces.cpp
	@$(CC) $(ConfigurationCPPCompileSwitches)  -o ProxyPortInterfaces.o ProxyPortInterfaces.cpp







$(TARGET_MAIN)$(OBJ_EXT) : $(TARGET_MAIN)$(CPP_EXT) $(OBJS)
	@echo Compiling $(TARGET_MAIN)$(CPP_EXT)
	@$(CC) $(ConfigurationCPPCompileSwitches) -o  $(TARGET_MAIN)$(OBJ_EXT) $(TARGET_MAIN)$(CPP_EXT)

####################################################################
############## Predefined Instructions #############################
$(TARGET_NAME)$(EXE_EXT): $(OBJS) $(ADDITIONAL_OBJS) $(TARGET_MAIN)$(OBJ_EXT) Emulate_Basic_GearingSim.mak
	@echo Linking $(TARGET_NAME)$(EXE_EXT)
	@$(LINK_CMD)  $(TARGET_MAIN)$(OBJ_EXT) $(OBJS) $(ADDITIONAL_OBJS) \
	$(LIBS) \
	$(OXF_LIBS) \
	$(INST_LIBS) \
	$(OXF_LIBS) \
	$(INST_LIBS) \
	$(SOCK_LIB) \
	$(LINK_FLAGS) -o $(TARGET_NAME)$(EXE_EXT)

$(TARGET_NAME)$(LIB_EXT) : $(OBJS) $(ADDITIONAL_OBJS) Emulate_Basic_GearingSim.mak
	@echo Building library $@
	@$(LIB_CMD) $(LIB_FLAGS) $(TARGET_NAME)$(LIB_EXT) $(OBJS) $(ADDITIONAL_OBJS)



clean:
	@echo Cleanup
	$(RM) Uc_EmulateBasicGearing.o
	$(RM) aEBG_TrainingApp.o
	$(RM) aEBG_Rider.o
	$(RM) EmulateBasicGearingPkg.o
	$(RM) EmulateBasicGearingExecutionScopePkg.o
	$(RM) EmulateBasicGearingTypesPkg.o
	$(RM) EmulateBasicGearingInterfacesPkg.o
	$(RM) EmulateBasicGearingActorPkg.o
	$(RM) ProxyPortInterfaces.o
	$(RM) $(TARGET_MAIN)$(OBJ_EXT) $(ADDITIONAL_OBJS)
	$(RM) $(TARGET_NAME)$(LIB_EXT)
	$(RM) $(TARGET_NAME)$(EXE_EXT)

