/* this file has been autogenerated by vtkNodeJsWrapInit */
/* editing this might proof futile */

#include <nan.h>

#include "vtkImageStencilWrap.h"
#include "vtkImageStencilToImageWrap.h"
#include "vtkImageToImageStencilWrap.h"
#include "vtkImplicitFunctionToImageStencilWrap.h"
#include "vtkLassoStencilSourceWrap.h"
#include "vtkPolyDataToImageStencilWrap.h"
#include "vtkROIStencilSourceWrap.h"

using namespace v8;

extern void vtkImagingStencilNodeJsInit( v8::Local<v8::Object> exports )
{
	VtkImageStencilWrap::Init( exports );
	VtkImageStencilToImageWrap::Init( exports );
	VtkImageToImageStencilWrap::Init( exports );
	VtkImplicitFunctionToImageStencilWrap::Init( exports );
	VtkLassoStencilSourceWrap::Init( exports );
	VtkPolyDataToImageStencilWrap::Init( exports );
	VtkROIStencilSourceWrap::Init( exports );
}

