cmake_minimum_required (VERSION 3.8)

project ("CyEngine")

set (CY_SRC_CMDUTILS
	src/commandutils/Command.cpp
	src/commandutils/Command.h
	src/commandutils/CommandHandler.cpp
	src/commandutils/CommandHandler.h
	src/commandutils/Flag.cpp
	src/commandutils/Flag.h
)

source_group("commandutils" FILES ${CY_SRC_CMDUTILS})

set (CY_SRC_IO
	src/cystdio/CyStdio.cpp
	src/cystdio/CyStdio.h
	src/cystdio/CyBits.cpp
	src/cystdio/CyBits.h
)

source_group("cystdio" FILES ${CY_SRC_IO})

set (CY_SRC_DISPLAY
	src/display/Title.cpp
	src/display/Title.h
	src/display/Linebar.cpp
	src/display/Linebar.h
)

source_group("display" FILES ${CY_SRC_DISPLAY})

set (CY_SRC_INIT
	src/init/Init.cpp
	src/init/Init.h
)

set (CY_SRC_SUBINIT
	src/init/subinit/TitleGen.cpp
	src/init/subinit/TitleGen.h
)

source_group("init" FILES ${CY_SRC_INIT})
source_group("init\\subinit" FILES ${CY_SRC_SUBINIT})

set (CY_SRC_PARSER
	src/parser/CommandParser.cpp
	src/parser/CommandParser.h
	src/parser/ConsoleMessage.cpp
	src/parser/ConsoleMessage.h
)

set (CY_SRC_PARSER_SOURCES
	src/parser/sources/CommandCalls.cpp
	src/parser/sources/CommandCalls.h
	src/parser/sources/CommandsSource.cpp
	src/parser/sources/CommandsSource.h
)

source_group("parser" FILES ${CY_SRC_PARSER})
source_group("parser\\sources" FILES ${CY_SRC_PARSER_SOURCES})

set (CY_LIB
	src/cylib/Convert.cpp
	src/cylib/Convert.h
	src/cylib/StringUtils.cpp
	src/cylib/StringUtils.h
	src/cylib/Thread.cpp
	src/cylib/Thread.h
)

set (CY_LIB_SYS
	src/cylib/sys/Platform.cpp
	src/cylib/sys/Platform.h
	src/cylib/sys/PlatformVars.cpp
	src/cylib/sys/PlatformVars.h
	src/cylib/sys/ProcessExec.cpp
	src/cylib/sys/ProcessExec.h
)

source_group("cylib" FILES ${CY_LIB})
source_group("cylib\\sys" FILES ${CY_LIB_SYS})

set(CY_SOURCE_FILES
	${CY_SRC_CMDUTILS}
	${CY_SRC_IO}
	${CY_SRC_DISPLAY}
	${CY_SRC_INIT}
	${CY_SRC_SUBINIT}
	${CY_SRC_PARSER}
	${CY_SRC_PARSER_SOURCES}
	${CY_LIB}
	${CY_LIB_SYS}
)

link_directories(${CY_SOURCE_FILES})

include_directories(
	BEFORE
	src
	src/init
	src/cylib
)

add_library(CyEngineSrc STATIC ${CY_SOURCE_FILES})

add_executable (CyEngine src/CyEngine.cpp)
target_link_libraries (CyEngine CyEngineSrc)
