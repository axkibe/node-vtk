/* this file has been autogenerated by vtkNodeJsWrapInit */
/* editing this might proof futile */

#include <nan.h>

#include "vtkAMRCutPlaneWrap.h"
#include "vtkAMRGaussianPulseSourceWrap.h"
#include "vtkAMRResampleFilterWrap.h"
#include "vtkAMRSliceFilterWrap.h"
#include "vtkAMRToMultiBlockFilterWrap.h"
#include "vtkImageToAMRWrap.h"
#include "vtkParallelAMRUtilitiesWrap.h"

using namespace v8;

extern void vtkFiltersAMRNodeJsInit( v8::Local<v8::Object> exports )
{
	VtkAMRCutPlaneWrap::Init( exports );
	VtkAMRGaussianPulseSourceWrap::Init( exports );
	VtkAMRResampleFilterWrap::Init( exports );
	VtkAMRSliceFilterWrap::Init( exports );
	VtkAMRToMultiBlockFilterWrap::Init( exports );
	VtkImageToAMRWrap::Init( exports );
	VtkParallelAMRUtilitiesWrap::Init( exports );
}
