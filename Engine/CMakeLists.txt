set(Core_HEADERS
	Core.h)
	
#set(Core_SOURCES
#	Core.cpp)

#add_library(Core SHARED
#	${Core_SOURCES}
#	${Core_HEADERS}
#)

add_executable(GFSE Core.cpp)

target_link_libraries(GFSE PUBLIC UtilityLibrary)
target_link_libraries(GFSE PUBLIC TypeLibrary)