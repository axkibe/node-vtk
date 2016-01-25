/* this file has been autogenerated by vtkNodeJsWrapInit */
/* editing this might proof futile */

#include <nan.h>

#include "vtkCompositeDataGeometryFilterWrap.h"
#include "vtkGeometryFilterWrap.h"
#include "vtkHierarchicalDataSetGeometryFilterWrap.h"
#include "vtkImageDataGeometryFilterWrap.h"
#include "vtkImageDataToUniformGridWrap.h"
#include "vtkProjectSphereFilterWrap.h"
#include "vtkRectilinearGridGeometryFilterWrap.h"
#include "vtkStructuredGridGeometryFilterWrap.h"
#include "vtkStructuredPointsGeometryFilterWrap.h"
#include "vtkUnstructuredGridGeometryFilterWrap.h"
#include "vtkDataSetSurfaceFilterWrap.h"
#include "vtkAbstractGridConnectivityWrap.h"
#include "vtkDataSetGhostGeneratorWrap.h"
#include "vtkRectilinearGridPartitionerWrap.h"
#include "vtkStructuredAMRGridConnectivityWrap.h"
#include "vtkStructuredGridConnectivityWrap.h"
#include "vtkStructuredGridGhostDataGeneratorWrap.h"
#include "vtkStructuredGridPartitionerWrap.h"
#include "vtkUniformGridGhostDataGeneratorWrap.h"

using namespace v8;

extern void vtkFiltersGeometryNodeJsInit( v8::Local<v8::Object> exports )
{
	VtkCompositeDataGeometryFilterWrap::Init( exports );
	VtkGeometryFilterWrap::Init( exports );
	VtkHierarchicalDataSetGeometryFilterWrap::Init( exports );
	VtkImageDataGeometryFilterWrap::Init( exports );
	VtkImageDataToUniformGridWrap::Init( exports );
	VtkProjectSphereFilterWrap::Init( exports );
	VtkRectilinearGridGeometryFilterWrap::Init( exports );
	VtkStructuredGridGeometryFilterWrap::Init( exports );
	VtkStructuredPointsGeometryFilterWrap::Init( exports );
	VtkUnstructuredGridGeometryFilterWrap::Init( exports );
	VtkDataSetSurfaceFilterWrap::Init( exports );
	VtkAbstractGridConnectivityWrap::Init( exports );
	VtkDataSetGhostGeneratorWrap::Init( exports );
	VtkRectilinearGridPartitionerWrap::Init( exports );
	VtkStructuredAMRGridConnectivityWrap::Init( exports );
	VtkStructuredGridConnectivityWrap::Init( exports );
	VtkStructuredGridGhostDataGeneratorWrap::Init( exports );
	VtkStructuredGridPartitionerWrap::Init( exports );
	VtkUniformGridGhostDataGeneratorWrap::Init( exports );
}
