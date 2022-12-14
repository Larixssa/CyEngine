cmake_minimum_required (VERSION 3.2)

project ("CyEngine")

set (CY_SRC_BROWSER
	src/browser/Browser.cpp
	src/browser/Browser.h
	src/browser/Link.cpp
	src/browser/Link.h
)

source_group("browser" FILES ${CY_SRC_BROWSER})

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
	src/display/ConsoleMessageDisplayer.cpp
	src/display/ConsoleMessageDisplayer.h
	src/display/Linebar.cpp
	src/display/Linebar.h
	src/display/Prompt.cpp
	src/display/Prompt.h
	src/display/Title.cpp
	src/display/Title.h
)

source_group("display" FILES ${CY_SRC_DISPLAY})

set (CY_SRC_GITLIB
	src/gitlib/GitCmd.cpp
	src/gitlib/GitCmd.h
	src/gitlib/GitMD.cpp
	src/gitlib/GitMD.h
	src/gitlib/GitRepo.cpp
	src/gitlib/GitRepo.h
	src/gitlib/GitRepoInfo.cpp
	src/gitlib/GitRepoInfo.h
)

source_group("gitlib" FILES ${CY_SRC_GITLIB})

set(CY_SRC_GUI
	src/gui/GitRepoGui.cpp
	src/gui/GitRepoGui.h
	src/gui/InfoGui.cpp
	src/gui/InfoGui.h
	src/gui/IUrlGui.cpp
	src/gui/IUrlGui.h
)

set (CY_SRC_GUI_UTILS
	src/gui/guiutils/BaseGui.cpp
	src/gui/guiutils/BaseGui.h
	src/gui/guiutils/GuiGuide.cpp
	src/gui/guiutils/GuiGuide.h
	src/gui/guiutils/GuiTitle.cpp
	src/gui/guiutils/GuiTitle.h
)

source_group("gui" FILES ${CY_SRC_GUI})
source_group("gui\\guiutils" FILES ${CY_SRC_GUI_UTILS})

set (CY_SRC_INFO
	src/info/Info.cpp
	src/info/Info.h
	src/info/GitInfo.cpp
	src/info/GitInfo.h
)

source_group("info" FILES ${CY_SRC_INFO})

set (CY_SRC_INIT
	src/init/Init.cpp
	src/init/Init.h
)

set (CY_SRC_SUBINIT
	src/init/subinit/InputGen.cpp
	src/init/subinit/InputGen.h
	src/init/subinit/TitleGen.cpp
	src/init/subinit/TitleGen.h
)

source_group("init" FILES ${CY_SRC_INIT})
source_group("init\\subinit" FILES ${CY_SRC_SUBINIT})

set (CY_SRC_MATHLIB
	src/mathlib/CFormula.cpp
	src/mathlib/CFormula.h
	src/mathlib/CMath.cpp
	src/mathlib/CMath.h
	src/mathlib/CMathUtils.cpp
	src/mathlib/CMathUtils.h
)

source_group("mathlib" FILES ${CY_SRC_MATHLIB})

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

set(CY_SRC_PROCLIB
	src/proclib/Error.cpp
	src/proclib/Error.h
	src/proclib/ProcessHandler.cpp
	src/proclib/ProcessHandler.h
	src/proclib/Warning.cpp
	src/proclib/Warning.h
)

source_group("proclib" FILES ${CY_SRC_PROCLIB})

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
	${CY_SRC_BROWSER}
	${CY_SRC_CMDUTILS}
	${CY_SRC_IO}
	${CY_SRC_DISPLAY}
	${CY_SRC_GITLIB}
	${CY_SRC_GUI}
	${CY_SRC_GUI_UTILS}
	${CY_SRC_INFO}
	${CY_SRC_INIT}
	${CY_SRC_SUBINIT}
	${CY_SRC_MATHLIB}
	${CY_SRC_PARSER}
	${CY_SRC_PARSER_SOURCES}
	${CY_SRC_PROCLIB}
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

add_library(CyEngineSrc STATIC ${CY_SOURCE_FILES} ${CYENGINE_RC})

add_executable (CyEngine src/CyEngine.cpp ${CYENGINE_RC})
target_link_libraries (CyEngine CyEngineSrc)
