set(TypeLibrary_HEADERS
	GDoll.h
	GItem.h
	GSkill.h
	GStats.h
	GTile.h)
	
set(TypeLibrary_SOURCES
	GDoll.cpp
	GItem.cpp
	GSkill.cpp
	GStats.cpp
	GTile.cpp)

add_library(TypeLibrary SHARED
	${TypeLibrary_SOURCES}
	${TypeLibrary_HEADERS}
)