
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

TARGET_NAME=Emulate_Front_and_Rear_GearingSim

all : $(TARGET_NAME)$(EXE_EXT) Emulate_Front_and_Rear_GearingSim.mak

TARGET_MAIN=MainEmulate_Front_and_Rear_GearingSim

LIBS=

INCLUDE_PATH= \
  $(INCLUDE_QUALIFIER)$(OMROOT)/LangCpp/osconfig/Cygwin

ADDITIONAL_OBJS=

OBJS= \
  Uc_EmulateFrontandRearGearing.o \
  aEFRG_TrainingApp.o \
  aEFRG_Rider.o \
  EmulateFrontandRearGearingPkg.o \
  EmulateFrontandRearGearingExecutionScopePkg.o \
  EmulateFrontandRearGearingInterfacesPkg.o \
  EmulateFrontandRearGearingActorPkg.o \
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






Uc_EmulateFrontandRearGearing.o : Uc_EmulateFrontandRearGearing.cpp Uc_EmulateFrontandRearGearing.h    EmulateFrontandRearGearingPkg.h evCurrentGearing_ProxyReceptionInterface.h evInitialSettings_ProxyReceptionInterface.h evAugmentFrontGear_ProxyReceptionInterface.h evAugmentRearGear_ProxyReceptionInterface.h evBeginRiding_ProxyReceptionInterface.h evConfigureGearing_ProxyReceptionInterface.h evDecrementFrontGear_ProxyReceptionInterface.h evDecrementRearGear_ProxyReceptionInterface.h evDoneConfiguring_ProxyReceptionInterface.h evDoneRiding_ProxyReceptionInterface.h evSetCassetteRingTeeth_ProxyReceptionInterface.h evSetChainRingTeeth_ProxyReceptionInterface.h evSetNumberOfCassetteRings_ProxyReceptionInterface.h evSetNumberOfChainRings_ProxyReceptionInterface.h evShowGearing_ProxyReceptionInterface.h 
	@echo Compiling Uc_EmulateFrontandRearGearing.cpp
	@$(CC) $(ConfigurationCPPCompileSwitches)  -o Uc_EmulateFrontandRearGearing.o Uc_EmulateFrontandRearGearing.cpp




aEFRG_TrainingApp.o : aEFRG_TrainingApp.cpp aEFRG_TrainingApp.h    EmulateFrontandRearGearingActorPkg.h evCurrentGearing_ProxyReceptionInterface.h 
	@echo Compiling aEFRG_TrainingApp.cpp
	@$(CC) $(ConfigurationCPPCompileSwitches)  -o aEFRG_TrainingApp.o aEFRG_TrainingApp.cpp




aEFRG_Rider.o : aEFRG_Rider.cpp aEFRG_Rider.h    EmulateFrontandRearGearingActorPkg.h evAugmentFrontGear_ProxyReceptionInterface.h evAugmentRearGear_ProxyReceptionInterface.h evBeginRiding_ProxyReceptionInterface.h evConfigureGearing_ProxyReceptionInterface.h evDecrementFrontGear_ProxyReceptionInterface.h evDecrementRearGear_ProxyReceptionInterface.h evDoneConfiguring_ProxyReceptionInterface.h evDoneRiding_ProxyReceptionInterface.h evSetCassetteRingTeeth_ProxyReceptionInterface.h evSetChainRingTeeth_ProxyReceptionInterface.h evSetNumberOfCassetteRings_ProxyReceptionInterface.h evSetNumberOfChainRings_ProxyReceptionInterface.h evShowGearing_ProxyReceptionInterface.h evCurrentGearing_ProxyReceptionInterface.h evInitialSettings_ProxyReceptionInterface.h 
	@echo Compiling aEFRG_Rider.cpp
	@$(CC) $(ConfigurationCPPCompileSwitches)  -o aEFRG_Rider.o aEFRG_Rider.cpp




EmulateFrontandRearGearingPkg.o : EmulateFrontandRearGearingPkg.cpp EmulateFrontandRearGearingPkg.h    Uc_EmulateFrontandRearGearing.h 
	@echo Compiling EmulateFrontandRearGearingPkg.cpp
	@$(CC) $(ConfigurationCPPCompileSwitches)  -o EmulateFrontandRearGearingPkg.o EmulateFrontandRearGearingPkg.cpp




EmulateFrontandRearGearingExecutionScopePkg.o : EmulateFrontandRearGearingExecutionScopePkg.cpp EmulateFrontandRearGearingExecutionScopePkg.h    EmulateFrontandRearGearingPkg.h Uc_EmulateFrontandRearGearing.h aEFRG_TrainingApp.h aEFRG_Rider.h 
	@echo Compiling EmulateFrontandRearGearingExecutionScopePkg.cpp
	@$(CC) $(ConfigurationCPPCompileSwitches)  -o EmulateFrontandRearGearingExecutionScopePkg.o EmulateFrontandRearGearingExecutionScopePkg.cpp




EmulateFrontandRearGearingInterfacesPkg.o : EmulateFrontandRearGearingInterfacesPkg.cpp EmulateFrontandRearGearingInterfacesPkg.h    EmulateFrontandRearGearingPkg.h 
	@echo Compiling EmulateFrontandRearGearingInterfacesPkg.cpp
	@$(CC) $(ConfigurationCPPCompileSwitches)  -o EmulateFrontandRearGearingInterfacesPkg.o EmulateFrontandRearGearingInterfacesPkg.cpp




EmulateFrontandRearGearingActorPkg.o : EmulateFrontandRearGearingActorPkg.cpp EmulateFrontandRearGearingActorPkg.h    aEFRG_TrainingApp.h aEFRG_Rider.h EmulateFrontandRearGearingPkg.h 
	@echo Compiling EmulateFrontandRearGearingActorPkg.cpp
	@$(CC) $(ConfigurationCPPCompileSwitches)  -o EmulateFrontandRearGearingActorPkg.o EmulateFrontandRearGearingActorPkg.cpp




ProxyPortInterfaces.o : ProxyPortInterfaces.cpp ProxyPortInterfaces.h    evCurrentGearing_ProxyReceptionInterface.h evAugmentFrontGear_ProxyReceptionInterface.h evAugmentRearGear_ProxyReceptionInterface.h evBeginRiding_ProxyReceptionInterface.h evConfigureGearing_ProxyReceptionInterface.h evDecrementFrontGear_ProxyReceptionInterface.h evDecrementRearGear_ProxyReceptionInterface.h evDoneConfiguring_ProxyReceptionInterface.h evDoneRiding_ProxyReceptionInterface.h evSetCassetteRingTeeth_ProxyReceptionInterface.h evSetChainRingTeeth_ProxyReceptionInterface.h evSetNumberOfCassetteRings_ProxyReceptionInterface.h evSetNumberOfChainRings_ProxyReceptionInterface.h evShowGearing_ProxyReceptionInterface.h evInitialSettings_ProxyReceptionInterface.h 
	@echo Compiling ProxyPortInterfaces.cpp
	@$(CC) $(ConfigurationCPPCompileSwitches)  -o ProxyPortInterfaces.o ProxyPortInterfaces.cpp







$(TARGET_MAIN)$(OBJ_EXT) : $(TARGET_MAIN)$(CPP_EXT) $(OBJS)
	@echo Compiling $(TARGET_MAIN)$(CPP_EXT)
	@$(CC) $(ConfigurationCPPCompileSwitches) -o  $(TARGET_MAIN)$(OBJ_EXT) $(TARGET_MAIN)$(CPP_EXT)

####################################################################
############## Predefined Instructions #############################
$(TARGET_NAME)$(EXE_EXT): $(OBJS) $(ADDITIONAL_OBJS) $(TARGET_MAIN)$(OBJ_EXT) Emulate_Front_and_Rear_GearingSim.mak
	@echo Linking $(TARGET_NAME)$(EXE_EXT)
	@$(LINK_CMD)  $(TARGET_MAIN)$(OBJ_EXT) $(OBJS) $(ADDITIONAL_OBJS) \
	$(LIBS) \
	$(OXF_LIBS) \
	$(INST_LIBS) \
	$(OXF_LIBS) \
	$(INST_LIBS) \
	$(SOCK_LIB) \
	$(LINK_FLAGS) -o $(TARGET_NAME)$(EXE_EXT)

$(TARGET_NAME)$(LIB_EXT) : $(OBJS) $(ADDITIONAL_OBJS) Emulate_Front_and_Rear_GearingSim.mak
	@echo Building library $@
	@$(LIB_CMD) $(LIB_FLAGS) $(TARGET_NAME)$(LIB_EXT) $(OBJS) $(ADDITIONAL_OBJS)



clean:
	@echo Cleanup
	$(RM) Uc_EmulateFrontandRearGearing.o
	$(RM) aEFRG_TrainingApp.o
	$(RM) aEFRG_Rider.o
	$(RM) EmulateFrontandRearGearingPkg.o
	$(RM) EmulateFrontandRearGearingExecutionScopePkg.o
	$(RM) EmulateFrontandRearGearingInterfacesPkg.o
	$(RM) EmulateFrontandRearGearingActorPkg.o
	$(RM) ProxyPortInterfaces.o
	$(RM) $(TARGET_MAIN)$(OBJ_EXT) $(ADDITIONAL_OBJS)
	$(RM) $(TARGET_NAME)$(LIB_EXT)
	$(RM) $(TARGET_NAME)$(EXE_EXT)

