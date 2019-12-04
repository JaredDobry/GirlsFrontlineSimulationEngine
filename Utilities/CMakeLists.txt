set(UtilityLibrary_HEADERS
	GlobalIncludes.h)
	
set(UtilityLibrary_SOURCES
	GlobalIncludes.cpp)

add_library(UtilityLibrary SHARED
	${UtilityLibrary_SOURCES}
	${UtilityLibrary_HEADERS}
)