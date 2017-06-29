ADD_LIBRARY(slamar SHARED 
    frame.cpp
	mappoint.cpp
	map.cpp
	camera.cpp
	config.cpp
	g2o_types.cpp
	visual_odometry.cpp
)

target_link_libraries(slamar
    ${THIRD_PARTY_LIBS}
)