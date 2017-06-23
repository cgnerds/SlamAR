ADD_LIBRARY(slamar SHARED 
    frame.cpp
	mappoint.cpp
	map.cpp
	camera.cpp
	config.cpp
)

target_link_libraries(slamar
    ${THIRD_PARTY_LIBS}
)