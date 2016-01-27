cmake_minimum_required(VERSION 2.8)

project(node-vtk)
include_directories(${CMAKE_JS_INC} ../nan)

find_package(Qt5Widgets) #workaround for 6.1 bug
find_package(VTK REQUIRED)
include(${VTK_USE_FILE})

if(${VTK_VERSION}!="6.1.0" AND ${VTK_VERSION}!="6.3.0")
	message( FATAL_ERROR "VTK version \"${VTK_VERSION}\" not supported by node-vtk :(" )
endif()

file(GLOB SOURCE_FILES "wrappers/${VTK_VERSION}/*.cc" "wrapper/${VTK_VERSION}/*.h")
add_library(${PROJECT_NAME} SHARED ${SOURCE_FILES})

set_target_properties(${PROJECT_NAME} PROPERTIES PREFIX "" SUFFIX ".node")

#target_include_directories(${PROJECT_NAME} PRIVATE ${CMAKE_JS_INC})

target_link_libraries(${PROJECT_NAME} ${CMAKE_JS_LIB} ${VTK_LIBRARIES})
