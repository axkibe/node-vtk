/* this file has been autogenerated by vtkNodeJsWrapInit */
/* editing this might proof futile */

#include <nan.h>

#include "vtkImageButterworthHighPassWrap.h"
#include "vtkImageButterworthLowPassWrap.h"
#include "vtkImageFFTWrap.h"
#include "vtkImageFourierCenterWrap.h"
#include "vtkImageFourierFilterWrap.h"
#include "vtkImageIdealHighPassWrap.h"
#include "vtkImageIdealLowPassWrap.h"
#include "vtkImageRFFTWrap.h"
#include "vtkTableFFTWrap.h"

using namespace v8;

extern void vtkImagingFourierNodeJsInit( v8::Local<v8::Object> exports )
{
	VtkImageButterworthHighPassWrap::Init( exports );
	VtkImageButterworthLowPassWrap::Init( exports );
	VtkImageFFTWrap::Init( exports );
	VtkImageFourierCenterWrap::Init( exports );
	VtkImageFourierFilterWrap::Init( exports );
	VtkImageIdealHighPassWrap::Init( exports );
	VtkImageIdealLowPassWrap::Init( exports );
	VtkImageRFFTWrap::Init( exports );
	VtkTableFFTWrap::Init( exports );
}

