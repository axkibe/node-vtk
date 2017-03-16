#include <nan.h>

#include "vtkCallbackWrap.h"

using namespace v8;

extern void vtkNodeJsPlusInit( v8::Local<v8::Object> exports )
{
	VtkCallbackWrap::Init( exports );	
}

