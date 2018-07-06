/* this file has been autogenerated by vtkNodeJsWrapInit */
/* editing this might proof futile */

#include <nan.h>

#include "vtkTextureMapToCylinderWrap.h"
#include "vtkTextureMapToPlaneWrap.h"
#include "vtkTextureMapToSphereWrap.h"
#include "vtkImplicitTextureCoordsWrap.h"
#include "vtkThresholdTextureCoordsWrap.h"
#include "vtkTransformTextureCoordsWrap.h"
#include "vtkTriangularTCoordsWrap.h"

using namespace v8;

extern void vtkFiltersTextureNodeJsInit( v8::Local<v8::Object> exports )
{
	VtkTextureMapToCylinderWrap::Init( exports );
	VtkTextureMapToPlaneWrap::Init( exports );
	VtkTextureMapToSphereWrap::Init( exports );
	VtkImplicitTextureCoordsWrap::Init( exports );
	VtkThresholdTextureCoordsWrap::Init( exports );
	VtkTransformTextureCoordsWrap::Init( exports );
	VtkTriangularTCoordsWrap::Init( exports );
}

