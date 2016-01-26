cmake_minimum_required(VERSION 2.8)

project(node-vtk)
include_directories(${CMAKE_JS_INC} ../nan)

file(GLOB SOURCE_FILES "src/*.cc" "src/*.h")
add_library(${PROJECT_NAME} SHARED ${SOURCE_FILES})

set_target_properties(${PROJECT_NAME} PROPERTIES PREFIX "" SUFFIX ".node")

#target_include_directories(${PROJECT_NAME} PRIVATE ${CMAKE_JS_INC})

find_package(Qt5Widgets) #workaround for 6.1 bug
find_package(VTK REQUIRED)
include(${VTK_USE_FILE})

target_link_libraries(${PROJECT_NAME} ${CMAKE_JS_LIB} ${VTK_LIBRARIES})
