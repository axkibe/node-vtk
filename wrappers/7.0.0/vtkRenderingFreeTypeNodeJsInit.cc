/* this file has been autogenerated by vtkNodeJsWrapInit */
/* editing this might proof futile */

#include <nan.h>

#include "vtkFreeTypeStringToImageWrap.h"
#include "vtkMathTextFreeTypeTextRendererWrap.h"
#include "vtkMathTextUtilitiesWrap.h"
#include "vtkTextRendererStringToImageWrap.h"
#include "vtkScaledTextActorWrap.h"
#include "vtkVectorTextWrap.h"

using namespace v8;

extern void vtkRenderingFreeTypeNodeJsInit( v8::Local<v8::Object> exports )
{
	VtkFreeTypeStringToImageWrap::Init( exports );
	VtkMathTextFreeTypeTextRendererWrap::Init( exports );
	VtkMathTextUtilitiesWrap::Init( exports );
	VtkTextRendererStringToImageWrap::Init( exports );
	VtkScaledTextActorWrap::Init( exports );
	VtkVectorTextWrap::Init( exports );
}

