/* this file has been autogenerated by vtkNodeJsWrapInit */
/* editing this might proof futile */

#include <nan.h>

#include "vtkContourValuesWrap.h"
#include "vtkFunctionParserWrap.h"
#include "vtkHeapWrap.h"

using namespace v8;

extern void vtkCommonMiscNodeJsInit( v8::Local<v8::Object> exports )
{
	VtkContourValuesWrap::Init( exports );
	VtkFunctionParserWrap::Init( exports );
	VtkHeapWrap::Init( exports );
}

