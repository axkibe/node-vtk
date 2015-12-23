cmake_minimum_required(VERSION 3.1)

project(node-vtk)

find_package(VTK REQUIRED)
include(${VTK_USE_FILE})

list(APPEND CMAKE_MODULE_PATH 
    ${CMAKE_CURRENT_SOURCE_DIR}/node_modules/node-cmake
)

find_package(NodeJS)

add_nodejs_module(
	${PROJECT_NAME}
	src/init.cc
	src/vtkConeSourceWrap.cc
	src/render.cc
)
target_link_libraries(${PROJECT_NAME} ${VTK_LIBRARIES})

