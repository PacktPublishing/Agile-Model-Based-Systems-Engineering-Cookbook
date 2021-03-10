
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
OMROOT="C:/Program Files (x86)/IBM/Rhapsody/9.0/Share"
RHPROOT="C:/Program Files (x86)/IBM/Rhapsody/9.0"
FRAMEWORK_LIB_ROOT=""

CPP_EXT=.cpp
H_EXT=.h
OBJ_EXT=.o
EXE_EXT=.exe
LIB_EXT=.a

INSTRUMENTATION=Animation

TIME_MODEL=RealTime

TARGET_TYPE=Executable

TARGET_NAME=GearShiftingComponent

all : $(TARGET_NAME)$(EXE_EXT) GearShiftingComponent.mak

TARGET_MAIN=MainGearShiftingComponent

LIBS=

INCLUDE_PATH= \
  $(INCLUDE_QUALIFIER)$(OMROOT)/LangCpp/osconfig/Cygwin

ADDITIONAL_OBJS=

OBJS= \
  Pegasus_System.o \
  MainComputingPlatform.o \
  RiderApplication.o \
  RiderInteraction.o \
  GearControl.o \
  ShiftLever.o \
  DIButton.o \
  RiderInteractionDesignPkg.o \
  ProxyPortInterfaces.o




#########################################
####### Predefined macros ###############
$(OBJS) : $(INST_LIBS) $(OXF_LIBS)

ifeq ($(INSTRUMENTATION),Animation)

INST_FLAGS=$(DEFINE_QUALIFIER)OMANIMATOR $(DEFINE_QUALIFIER)__USE_W32_SOCKETS 
INST_INCLUDES=$(INCLUDE_QUALIFIER)$(OMROOT)/LangCpp/aom $(INCLUDE_QUALIFIER)$(OMROOT)/LangCpp/tom
INST_LIBS=$(FRAMEWORK_LIB_ROOT)/LangCpp/lib/cygwinaomanim$(LIB_EXT) $(FRAMEWORK_LIB_ROOT)/LangCpp/lib/cygwinoxsiminst$(LIB_EXT)
OXF_LIBS=$(FRAMEWORK_LIB_ROOT)/LangCpp/lib/cygwinoxfinst$(LIB_EXT) $(FRAMEWORK_LIB_ROOT)/LangCpp/lib/cygwinomcomappl$(LIB_EXT)
SOCK_LIB=-lws2_32

else
ifeq ($(INSTRUMENTATION),Tracing)

INST_FLAGS=$(DEFINE_QUALIFIER)OMTRACER 
INST_INCLUDES=$(INCLUDE_QUALIFIER)$(OMROOT)/LangCpp/aom $(INCLUDE_QUALIFIER)$(OMROOT)/LangCpp/tom
INST_LIBS=$(FRAMEWORK_LIB_ROOT)/LangCpp/lib/cygwintomtrace$(LIB_EXT) $(FRAMEWORK_LIB_ROOT)/LangCpp/lib/cygwinaomtrace$(LIB_EXT) $(FRAMEWORK_LIB_ROOT)/LangCpp/lib/cygwinoxsiminst$(LIB_EXT)
OXF_LIBS=$(FRAMEWORK_LIB_ROOT)/LangCpp/lib/cygwinoxfinst$(LIB_EXT) $(FRAMEWORK_LIB_ROOT)/LangCpp/lib/cygwinomcomappl$(LIB_EXT)
SOCK_LIB=-lws2_32

else
ifeq ($(INSTRUMENTATION),None)

INST_FLAGS= 
INST_INCLUDES=
INST_LIBS=$(FRAMEWORK_LIB_ROOT)/LangCpp/lib/cygwinoxsim$(LIB_EXT)
OXF_LIBS=$(FRAMEWORK_LIB_ROOT)/LangCpp/lib/cygwinoxf$(LIB_EXT)
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






Pegasus_System.o : Pegasus_System.cpp Pegasus_System.h    RiderInteractionDesignPkg.h MainComputingPlatform.h RiderInteraction.h evDIDown_ProxyReceptionInterface.h evDIUp_ProxyReceptionInterface.h evLeftShiftDown_ProxyReceptionInterface.h evLeftShiftUp_ProxyReceptionInterface.h evRightShiftDown_ProxyReceptionInterface.h evRightShiftUp_ProxyReceptionInterface.h evDIShifting_ProxyReceptionInterface.h evMechanicalShifting_ProxyReceptionInterface.h evDisplayGearing_ProxyReceptionInterface.h 
	@echo Compiling Pegasus_System.cpp
	@$(CC) $(ConfigurationCPPCompileSwitches)  -o Pegasus_System.o Pegasus_System.cpp




MainComputingPlatform.o : MainComputingPlatform.cpp MainComputingPlatform.h    RiderInteractionDesignPkg.h RiderApplication.h evDIShifting_ProxyReceptionInterface.h evMechanicalShifting_ProxyReceptionInterface.h evDisplayGearing_ProxyReceptionInterface.h evDIDown_ProxyReceptionInterface.h evDIUp_ProxyReceptionInterface.h evLeftShiftDown_ProxyReceptionInterface.h evLeftShiftUp_ProxyReceptionInterface.h evRightShiftDown_ProxyReceptionInterface.h evRightShiftUp_ProxyReceptionInterface.h 
	@echo Compiling MainComputingPlatform.cpp
	@$(CC) $(ConfigurationCPPCompileSwitches)  -o MainComputingPlatform.o MainComputingPlatform.cpp




RiderApplication.o : RiderApplication.cpp RiderApplication.h    RiderInteractionDesignPkg.h evDIShifting_ProxyReceptionInterface.h evMechanicalShifting_ProxyReceptionInterface.h evDisplayGearing_ProxyReceptionInterface.h evDIDown_ProxyReceptionInterface.h evDIUp_ProxyReceptionInterface.h evLeftShiftDown_ProxyReceptionInterface.h evLeftShiftUp_ProxyReceptionInterface.h evRightShiftDown_ProxyReceptionInterface.h evRightShiftUp_ProxyReceptionInterface.h 
	@echo Compiling RiderApplication.cpp
	@$(CC) $(ConfigurationCPPCompileSwitches)  -o RiderApplication.o RiderApplication.cpp




RiderInteraction.o : RiderInteraction.cpp RiderInteraction.h    RiderInteractionDesignPkg.h GearControl.h evDIDown_ProxyReceptionInterface.h evDIUp_ProxyReceptionInterface.h evLeftShiftDown_ProxyReceptionInterface.h evLeftShiftUp_ProxyReceptionInterface.h evRightShiftDown_ProxyReceptionInterface.h evRightShiftUp_ProxyReceptionInterface.h evDIShifting_ProxyReceptionInterface.h evMechanicalShifting_ProxyReceptionInterface.h evDisplayGearing_ProxyReceptionInterface.h 
	@echo Compiling RiderInteraction.cpp
	@$(CC) $(ConfigurationCPPCompileSwitches)  -o RiderInteraction.o RiderInteraction.cpp




GearControl.o : GearControl.cpp GearControl.h    RiderInteractionDesignPkg.h ShiftLever.h DIButton.h evDIDown_ProxyReceptionInterface.h evDIUp_ProxyReceptionInterface.h evLeftShiftDown_ProxyReceptionInterface.h evLeftShiftUp_ProxyReceptionInterface.h evRightShiftDown_ProxyReceptionInterface.h evRightShiftUp_ProxyReceptionInterface.h evDIShifting_ProxyReceptionInterface.h evMechanicalShifting_ProxyReceptionInterface.h evDisplayGearing_ProxyReceptionInterface.h 
	@echo Compiling GearControl.cpp
	@$(CC) $(ConfigurationCPPCompileSwitches)  -o GearControl.o GearControl.cpp




ShiftLever.o : ShiftLever.cpp ShiftLever.h    RiderInteractionDesignPkg.h GearControl.h 
	@echo Compiling ShiftLever.cpp
	@$(CC) $(ConfigurationCPPCompileSwitches)  -o ShiftLever.o ShiftLever.cpp




DIButton.o : DIButton.cpp DIButton.h    RiderInteractionDesignPkg.h GearControl.h 
	@echo Compiling DIButton.cpp
	@$(CC) $(ConfigurationCPPCompileSwitches)  -o DIButton.o DIButton.cpp




RiderInteractionDesignPkg.o : RiderInteractionDesignPkg.cpp RiderInteractionDesignPkg.h    Pegasus_System.h MainComputingPlatform.h RiderApplication.h RiderInteraction.h GearControl.h ShiftLever.h DIButton.h 
	@echo Compiling RiderInteractionDesignPkg.cpp
	@$(CC) $(ConfigurationCPPCompileSwitches)  -o RiderInteractionDesignPkg.o RiderInteractionDesignPkg.cpp




ProxyPortInterfaces.o : ProxyPortInterfaces.cpp ProxyPortInterfaces.h    evDIShifting_ProxyReceptionInterface.h evMechanicalShifting_ProxyReceptionInterface.h evDisplayGearing_ProxyReceptionInterface.h evDIDown_ProxyReceptionInterface.h evDIUp_ProxyReceptionInterface.h evLeftShiftDown_ProxyReceptionInterface.h evLeftShiftUp_ProxyReceptionInterface.h evRightShiftDown_ProxyReceptionInterface.h evRightShiftUp_ProxyReceptionInterface.h 
	@echo Compiling ProxyPortInterfaces.cpp
	@$(CC) $(ConfigurationCPPCompileSwitches)  -o ProxyPortInterfaces.o ProxyPortInterfaces.cpp







$(TARGET_MAIN)$(OBJ_EXT) : $(TARGET_MAIN)$(CPP_EXT) $(OBJS)
	@echo Compiling $(TARGET_MAIN)$(CPP_EXT)
	@$(CC) $(ConfigurationCPPCompileSwitches) -o  $(TARGET_MAIN)$(OBJ_EXT) $(TARGET_MAIN)$(CPP_EXT)

####################################################################
############## Predefined Instructions #############################
$(TARGET_NAME)$(EXE_EXT): $(OBJS) $(ADDITIONAL_OBJS) $(TARGET_MAIN)$(OBJ_EXT) GearShiftingComponent.mak
	@echo Linking $(TARGET_NAME)$(EXE_EXT)
	@$(LINK_CMD)  $(TARGET_MAIN)$(OBJ_EXT) $(OBJS) $(ADDITIONAL_OBJS) \
	$(LIBS) \
	$(OXF_LIBS) \
	$(INST_LIBS) \
	$(OXF_LIBS) \
	$(INST_LIBS) \
	$(SOCK_LIB) \
	$(LINK_FLAGS) -o $(TARGET_NAME)$(EXE_EXT)

$(TARGET_NAME)$(LIB_EXT) : $(OBJS) $(ADDITIONAL_OBJS) GearShiftingComponent.mak
	@echo Building library $@
	@$(LIB_CMD) $(LIB_FLAGS) $(TARGET_NAME)$(LIB_EXT) $(OBJS) $(ADDITIONAL_OBJS)



clean:
	@echo Cleanup
	$(RM) Pegasus_System.o
	$(RM) MainComputingPlatform.o
	$(RM) RiderApplication.o
	$(RM) RiderInteraction.o
	$(RM) GearControl.o
	$(RM) ShiftLever.o
	$(RM) DIButton.o
	$(RM) RiderInteractionDesignPkg.o
	$(RM) ProxyPortInterfaces.o
	$(RM) $(TARGET_MAIN)$(OBJ_EXT) $(ADDITIONAL_OBJS)
	$(RM) $(TARGET_NAME)$(LIB_EXT)
	$(RM) $(TARGET_NAME)$(EXE_EXT)

