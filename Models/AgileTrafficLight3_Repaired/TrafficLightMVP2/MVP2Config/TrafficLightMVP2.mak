
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

TARGET_NAME=TrafficLightMVP2

all : $(TARGET_NAME)$(EXE_EXT) TrafficLightMVP2.mak

TARGET_MAIN=MainTrafficLightMVP2

LIBS=

INCLUDE_PATH= \
  $(INCLUDE_QUALIFIER)$(OMROOT)/LangCpp/osconfig/Cygwin

ADDITIONAL_OBJS=

OBJS= \
  TrafficLightSystem.o \
  TrafficLane.o \
  ThruLane.o \
  TurnLane.o \
  CrossWalk.o \
  Default.o \
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






TrafficLightSystem.o : TrafficLightSystem.cpp TrafficLightSystem.h    Default.h ThruLane.h TurnLane.h CrossWalk.h TrafficLane.h evLaneDone_ProxyReceptionInterface.h evTurnDone_ProxyReceptionInterface.h evCarArrive_ProxyReceptionInterface.h evPedestrianArrive_ProxyReceptionInterface.h evWalkComplete_ProxyReceptionInterface.h evGoTurn_ProxyReceptionInterface.h evWalk_ProxyReceptionInterface.h 
	@echo Compiling TrafficLightSystem.cpp
	@$(CC) $(ConfigurationCPPCompileSwitches)  -o TrafficLightSystem.o TrafficLightSystem.cpp




TrafficLane.o : TrafficLane.cpp TrafficLane.h    Default.h 
	@echo Compiling TrafficLane.cpp
	@$(CC) $(ConfigurationCPPCompileSwitches)  -o TrafficLane.o TrafficLane.cpp




ThruLane.o : ThruLane.cpp ThruLane.h    Default.h evLaneDone_ProxyReceptionInterface.h evGoTurn_ProxyReceptionInterface.h evWalk_ProxyReceptionInterface.h TrafficLane.h evTurnDone_ProxyReceptionInterface.h evCarArrive_ProxyReceptionInterface.h evPedestrianArrive_ProxyReceptionInterface.h evWalkComplete_ProxyReceptionInterface.h 
	@echo Compiling ThruLane.cpp
	@$(CC) $(ConfigurationCPPCompileSwitches)  -o ThruLane.o ThruLane.cpp




TurnLane.o : TurnLane.cpp TurnLane.h    Default.h evTurnDone_ProxyReceptionInterface.h evCarArrive_ProxyReceptionInterface.h TrafficLane.h evGoTurn_ProxyReceptionInterface.h 
	@echo Compiling TurnLane.cpp
	@$(CC) $(ConfigurationCPPCompileSwitches)  -o TurnLane.o TurnLane.cpp




CrossWalk.o : CrossWalk.cpp CrossWalk.h    Default.h evPedestrianArrive_ProxyReceptionInterface.h evWalkComplete_ProxyReceptionInterface.h TrafficLane.h evWalk_ProxyReceptionInterface.h 
	@echo Compiling CrossWalk.cpp
	@$(CC) $(ConfigurationCPPCompileSwitches)  -o CrossWalk.o CrossWalk.cpp




Default.o : Default.cpp Default.h    TrafficLightSystem.h TrafficLane.h ThruLane.h TurnLane.h CrossWalk.h 
	@echo Compiling Default.cpp
	@$(CC) $(ConfigurationCPPCompileSwitches)  -o Default.o Default.cpp




ProxyPortInterfaces.o : ProxyPortInterfaces.cpp ProxyPortInterfaces.h    evLaneDone_ProxyReceptionInterface.h evGoTurn_ProxyReceptionInterface.h evTurnDone_ProxyReceptionInterface.h evCarArrive_ProxyReceptionInterface.h evWalk_ProxyReceptionInterface.h evPedestrianArrive_ProxyReceptionInterface.h evWalkComplete_ProxyReceptionInterface.h 
	@echo Compiling ProxyPortInterfaces.cpp
	@$(CC) $(ConfigurationCPPCompileSwitches)  -o ProxyPortInterfaces.o ProxyPortInterfaces.cpp







$(TARGET_MAIN)$(OBJ_EXT) : $(TARGET_MAIN)$(CPP_EXT) $(OBJS)
	@echo Compiling $(TARGET_MAIN)$(CPP_EXT)
	@$(CC) $(ConfigurationCPPCompileSwitches) -o  $(TARGET_MAIN)$(OBJ_EXT) $(TARGET_MAIN)$(CPP_EXT)

####################################################################
############## Predefined Instructions #############################
$(TARGET_NAME)$(EXE_EXT): $(OBJS) $(ADDITIONAL_OBJS) $(TARGET_MAIN)$(OBJ_EXT) TrafficLightMVP2.mak
	@echo Linking $(TARGET_NAME)$(EXE_EXT)
	@$(LINK_CMD)  $(TARGET_MAIN)$(OBJ_EXT) $(OBJS) $(ADDITIONAL_OBJS) \
	$(LIBS) \
	$(OXF_LIBS) \
	$(INST_LIBS) \
	$(OXF_LIBS) \
	$(INST_LIBS) \
	$(SOCK_LIB) \
	$(LINK_FLAGS) -o $(TARGET_NAME)$(EXE_EXT)

$(TARGET_NAME)$(LIB_EXT) : $(OBJS) $(ADDITIONAL_OBJS) TrafficLightMVP2.mak
	@echo Building library $@
	@$(LIB_CMD) $(LIB_FLAGS) $(TARGET_NAME)$(LIB_EXT) $(OBJS) $(ADDITIONAL_OBJS)



clean:
	@echo Cleanup
	$(RM) TrafficLightSystem.o
	$(RM) TrafficLane.o
	$(RM) ThruLane.o
	$(RM) TurnLane.o
	$(RM) CrossWalk.o
	$(RM) Default.o
	$(RM) ProxyPortInterfaces.o
	$(RM) $(TARGET_MAIN)$(OBJ_EXT) $(ADDITIONAL_OBJS)
	$(RM) $(TARGET_NAME)$(LIB_EXT)
	$(RM) $(TARGET_NAME)$(EXE_EXT)

