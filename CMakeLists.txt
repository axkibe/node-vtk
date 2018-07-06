cmake_minimum_required( VERSION 2.8 )

project( node-vtk )

include_directories( ${CMAKE_JS_INC} ../nan )

find_package( Qt5Widgets ) #workaround for 6.1 bug
find_package( VTK REQUIRED )
include( ${VTK_USE_FILE} )

file( GLOB WRAPPERS_ROOT "wrappers" )
file( GLOB VTK_SUPPORTED RELATIVE ${WRAPPERS_ROOT} "wrappers/*" )

if( NOT ";${VTK_SUPPORTED};" MATCHES ";${VTK_VERSION};" )
	message( FATAL_ERROR "VTK version \"${VTK_VERSION}\" not supported by node-vtk :(" )
endif()

file( GLOB SOURCE_FILES
	"wrappers/${VTK_VERSION}/*.cc"
	"wrappers/${VTK_VERSION}/*.h"
	"plus/*.h"
	"plus/*.cc"
)

include_directories( "wrappers/${VTK_VERSION}" )

add_library( ${PROJECT_NAME} SHARED ${SOURCE_FILES} )

set_target_properties( ${PROJECT_NAME} PROPERTIES PREFIX "" SUFFIX ".node" )

#target_include_directories(${PROJECT_NAME} PRIVATE ${CMAKE_JS_INC})

target_link_libraries( ${PROJECT_NAME} ${CMAKE_JS_LIB} ${VTK_LIBRARIES} )
