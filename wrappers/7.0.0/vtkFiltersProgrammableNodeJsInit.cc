/* this file has been autogenerated by vtkNodeJsWrapInit */
/* editing this might proof futile */

#include <nan.h>

#include "vtkProgrammableAttributeDataFilterWrap.h"
#include "vtkProgrammableFilterWrap.h"
#include "vtkProgrammableGlyphFilterWrap.h"

using namespace v8;

extern void vtkFiltersProgrammableNodeJsInit( v8::Local<v8::Object> exports )
{
	VtkProgrammableAttributeDataFilterWrap::Init( exports );
	VtkProgrammableFilterWrap::Init( exports );
	VtkProgrammableGlyphFilterWrap::Init( exports );
}

