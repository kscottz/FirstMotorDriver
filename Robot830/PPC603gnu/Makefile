# Wind River Workbench generated Makefile.
# Do not edit!!!
#
# The file ".wrmakefile" is the template used by the Wind River Workbench to
# generate the makefiles of this project. Add user-specific build targets and
# make rules only(!) in this project's ".wrmakefile" file. These will then be
# automatically dumped into the makefiles.

WIND_HOME := $(subst \,/,$(WIND_HOME))
WIND_BASE := $(subst \,/,$(WIND_BASE))
WIND_USR := $(subst \,/,$(WIND_USR))
WRVX_COMPBASE := $(subst \,/,$(WRVX_COMPBASE))

all : pre_build main_all post_build

_clean ::
	@echo "make: removing targets and objects of `pwd`"

TRACE=0
TRACEON=$(TRACE:0=@)
TRACE_FLAG=$(TRACEON:1=)

MAKEFILE := Makefile

FLEXIBLE_BUILD := 1

BUILD_SPEC = PPC603gnu
DEBUG_MODE = 1
ifeq ($(DEBUG_MODE),1)
MODE_DIR := Debug
else
MODE_DIR := NonDebug
endif
OBJ_DIR := .
WS_ROOT_DIR := C:/
PRJ_ROOT_DIR := $(WS_ROOT_DIR)//FirstMotorDriver/Robot830



#Global Build Macros
PROJECT_TYPE = DKM
DEFINES = 
EXPAND_DBG = 0


#BuildSpec specific Build Macros
VX_CPU_FAMILY = ppc
CPU = PPC603
TOOL_FAMILY = gnu
TOOL = gnu
TOOL_PATH = 
CC_ARCH_SPEC = -mcpu=603 -mstrict-align -mno-implicit-fp
LIBPATH = 
LIBS = 

IDE_INCLUDES = -IC:/WindRiver/vxworks-6.3/target/h/WPILib -IC:/WindRiver/vxworks-6.3/target/h/wrn/coreip 

IDE_LIBRARIES = -L $(WIND_BASE)/target/lib/WPILib.a 

IDE_DEFINES = 



#BuildTool flags
ifeq ($(DEBUG_MODE),1)
DEBUGFLAGS_C-Compiler = -g
DEBUGFLAGS_C++-Compiler = -g
DEBUGFLAGS_Linker = -g
DEBUGFLAGS_Partial-Image-Linker = 
DEBUGFLAGS_Librarian = 
DEBUGFLAGS_Assembler = -g
else
DEBUGFLAGS_C-Compiler = -O2 -fstrength-reduce -fno-builtin
DEBUGFLAGS_C++-Compiler = -O2 -fstrength-reduce -fno-builtin
DEBUGFLAGS_Linker = -O2 -fstrength-reduce -fno-builtin
DEBUGFLAGS_Partial-Image-Linker = 
DEBUGFLAGS_Librarian = 
DEBUGFLAGS_Assembler = -O2 -fstrength-reduce -fno-builtin
endif


#Project Targets
PROJECT_TARGETS = Robot830/$(MODE_DIR)/Robot830.out \
	 Robot830_partialImage/$(MODE_DIR)/Robot830_partialImage.o


#Rules

# Robot830
ifeq ($(DEBUG_MODE),1)
Robot830/$(MODE_DIR)/% : DEBUGFLAGS_C-Compiler = -g
Robot830/$(MODE_DIR)/% : DEBUGFLAGS_C++-Compiler = -g
Robot830/$(MODE_DIR)/% : DEBUGFLAGS_Linker = -g
Robot830/$(MODE_DIR)/% : DEBUGFLAGS_Partial-Image-Linker = 
Robot830/$(MODE_DIR)/% : DEBUGFLAGS_Librarian = 
Robot830/$(MODE_DIR)/% : DEBUGFLAGS_Assembler = -g
else
Robot830/$(MODE_DIR)/% : DEBUGFLAGS_C-Compiler = -O2 -fstrength-reduce -fno-builtin
Robot830/$(MODE_DIR)/% : DEBUGFLAGS_C++-Compiler = -O2 -fstrength-reduce -fno-builtin
Robot830/$(MODE_DIR)/% : DEBUGFLAGS_Linker = -O2 -fstrength-reduce -fno-builtin
Robot830/$(MODE_DIR)/% : DEBUGFLAGS_Partial-Image-Linker = 
Robot830/$(MODE_DIR)/% : DEBUGFLAGS_Librarian = 
Robot830/$(MODE_DIR)/% : DEBUGFLAGS_Assembler = -O2 -fstrength-reduce -fno-builtin
endif
Robot830/$(MODE_DIR)/% : IDE_INCLUDES = -IC:/WindRiver/vxworks-6.3/target/h/WPILib -IC:/WindRiver/vxworks-6.3/target/h/wrn/coreip 
Robot830/$(MODE_DIR)/% : IDE_LIBRARIES = -L $(WIND_BASE)/target/lib/WPILib.a 
Robot830/$(MODE_DIR)/% : IDE_DEFINES = 
Robot830/$(MODE_DIR)/% : PROJECT_TYPE = DKM
Robot830/$(MODE_DIR)/% : DEFINES = 
Robot830/$(MODE_DIR)/% : EXPAND_DBG = 0
Robot830/$(MODE_DIR)/% : VX_CPU_FAMILY = ppc
Robot830/$(MODE_DIR)/% : CPU = PPC603
Robot830/$(MODE_DIR)/% : TOOL_FAMILY = gnu
Robot830/$(MODE_DIR)/% : TOOL = gnu
Robot830/$(MODE_DIR)/% : TOOL_PATH = 
Robot830/$(MODE_DIR)/% : CC_ARCH_SPEC = -mcpu=603 -mstrict-align -mno-implicit-fp
Robot830/$(MODE_DIR)/% : LIBPATH = 
Robot830/$(MODE_DIR)/% : LIBS = 
Robot830/$(MODE_DIR)/% : OBJ_DIR := Robot830/$(MODE_DIR)

OBJECTS_Robot830 = Robot830_partialImage/$(MODE_DIR)/Robot830_partialImage.o

Robot830/$(MODE_DIR)/Robot830.out : $(OBJECTS_Robot830)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@";rm -f "$@";nmppc $(OBJECTS_Robot830) $(IDE_LIBRARIES) | tclsh $(WIND_BASE)/host/resource/hutils/tcl/munch.tcl -c ppc > $(OBJ_DIR)/ctdt.c; $(TOOL_PATH)ccppc $(DEBUGFLAGS_Linker) $(CC_ARCH_SPEC) -fdollars-in-identifiers -Wall $(ADDED_CFLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES)  -o $(OBJ_DIR)/ctdt.o -c $(OBJ_DIR)/ctdt.c; $(TOOL_PATH)ccppc -r -nostdlib -Wl,-X -T $(WIND_BASE)/target/h/tool/gnu/ldscripts/link.OUT -o "$@" $(OBJ_DIR)/ctdt.o $(OBJECTS_Robot830) $(IDE_LIBRARIES) $(LIBPATH) $(LIBS)  $(ADDED_LIBPATH) $(ADDED_LIBS) && if [ "$(EXPAND_DBG)" = "1" ]; then plink "$@";fi

Robot830/$(MODE_DIR)/Robot830_compile_file : $(FILE) ;

_clean :: Robot830/$(MODE_DIR)/Robot830_clean

Robot830/$(MODE_DIR)/Robot830_clean : 
	$(TRACE_FLAG)if [ -d "Robot830" ]; then cd "Robot830"; rm -rf $(MODE_DIR); fi


# Robot830_partialImage
ifeq ($(DEBUG_MODE),1)
Robot830_partialImage/$(MODE_DIR)/% : DEBUGFLAGS_C-Compiler = -g
Robot830_partialImage/$(MODE_DIR)/% : DEBUGFLAGS_C++-Compiler = -g
Robot830_partialImage/$(MODE_DIR)/% : DEBUGFLAGS_Linker = -g
Robot830_partialImage/$(MODE_DIR)/% : DEBUGFLAGS_Partial-Image-Linker = 
Robot830_partialImage/$(MODE_DIR)/% : DEBUGFLAGS_Librarian = 
Robot830_partialImage/$(MODE_DIR)/% : DEBUGFLAGS_Assembler = -g
else
Robot830_partialImage/$(MODE_DIR)/% : DEBUGFLAGS_C-Compiler = -O2 -fstrength-reduce -fno-builtin
Robot830_partialImage/$(MODE_DIR)/% : DEBUGFLAGS_C++-Compiler = -O2 -fstrength-reduce -fno-builtin
Robot830_partialImage/$(MODE_DIR)/% : DEBUGFLAGS_Linker = -O2 -fstrength-reduce -fno-builtin
Robot830_partialImage/$(MODE_DIR)/% : DEBUGFLAGS_Partial-Image-Linker = 
Robot830_partialImage/$(MODE_DIR)/% : DEBUGFLAGS_Librarian = 
Robot830_partialImage/$(MODE_DIR)/% : DEBUGFLAGS_Assembler = -O2 -fstrength-reduce -fno-builtin
endif
Robot830_partialImage/$(MODE_DIR)/% : IDE_INCLUDES = -IC:/WindRiver/vxworks-6.3/target/h/WPILib -IC:/WindRiver/vxworks-6.3/target/h/wrn/coreip 
Robot830_partialImage/$(MODE_DIR)/% : IDE_LIBRARIES = -L $(WIND_BASE)/target/lib/WPILib.a 
Robot830_partialImage/$(MODE_DIR)/% : IDE_DEFINES = 
Robot830_partialImage/$(MODE_DIR)/% : PROJECT_TYPE = DKM
Robot830_partialImage/$(MODE_DIR)/% : DEFINES = 
Robot830_partialImage/$(MODE_DIR)/% : EXPAND_DBG = 0
Robot830_partialImage/$(MODE_DIR)/% : VX_CPU_FAMILY = ppc
Robot830_partialImage/$(MODE_DIR)/% : CPU = PPC603
Robot830_partialImage/$(MODE_DIR)/% : TOOL_FAMILY = gnu
Robot830_partialImage/$(MODE_DIR)/% : TOOL = gnu
Robot830_partialImage/$(MODE_DIR)/% : TOOL_PATH = 
Robot830_partialImage/$(MODE_DIR)/% : CC_ARCH_SPEC = -mcpu=603 -mstrict-align -mno-implicit-fp
Robot830_partialImage/$(MODE_DIR)/% : LIBPATH = 
Robot830_partialImage/$(MODE_DIR)/% : LIBS = 
Robot830_partialImage/$(MODE_DIR)/% : OBJ_DIR := Robot830_partialImage/$(MODE_DIR)

Robot830_partialImage/$(MODE_DIR)/Objects/Robot830/ShooterPrototype.o : $(PRJ_ROOT_DIR)/ShooterPrototype.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


Robot830_partialImage/$(MODE_DIR)/Objects/Robot830/ShooterRobot.o : $(PRJ_ROOT_DIR)/ShooterRobot.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


OBJECTS_Robot830_partialImage = Robot830_partialImage/$(MODE_DIR)/Objects/Robot830/ShooterPrototype.o \
	 Robot830_partialImage/$(MODE_DIR)/Objects/Robot830/ShooterRobot.o

Robot830_partialImage/$(MODE_DIR)/Robot830_partialImage.o : $(OBJECTS_Robot830_partialImage)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc -r -nostdlib -Wl,-X  -o "$@" $(OBJECTS_Robot830_partialImage) $(LIBPATH) $(LIBS) $(ADDED_LIBPATH) $(ADDED_LIBS)  && if [ "$(EXPAND_DBG)" = "1" ]; then plink "$@";fi

Robot830_partialImage/$(MODE_DIR)/Robot830_partialImage_compile_file : $(FILE) ;

_clean :: Robot830_partialImage/$(MODE_DIR)/Robot830_partialImage_clean

Robot830_partialImage/$(MODE_DIR)/Robot830_partialImage_clean : 
	$(TRACE_FLAG)if [ -d "Robot830_partialImage" ]; then cd "Robot830_partialImage"; rm -rf $(MODE_DIR); fi

force : 

DEP_FILES := Robot830_partialImage/$(MODE_DIR)/Objects/Robot830/ShooterPrototype.d Robot830_partialImage/$(MODE_DIR)/Objects/Robot830/ShooterRobot.d
-include $(DEP_FILES)



-include $(PRJ_ROOT_DIR)/*.makefile

-include *.makefile

JOBS?=1
ifeq ($(JOBS),1)
main_all : external_build  $(PROJECT_TARGETS)
	@echo "make: built targets of `pwd`"
else
main_all : external_build 
	@$(MAKE) -f $(MAKEFILE) --jobs $(JOBS) $(MFLAGS) $(PROJECT_TARGETS);\
	echo "make: built targets of `pwd`"
endif 

# entry point for extending the build
external_build ::
	@echo ""

# main entry point for pre processing prior to the build
pre_build :: $(PRE_BUILD_STEP) generate_sources
	@echo ""

# entry point for generating sources prior to the build
generate_sources ::
	@echo ""

# main entry point for post processing after the build
post_build :: $(POST_BUILD_STEP) deploy_output
	@echo ""

# entry point for deploying output after the build
deploy_output ::
	@echo ""

clean :: external_clean $(CLEAN_STEP) _clean

# entry point for extending the build clean
external_clean ::
	@echo ""
