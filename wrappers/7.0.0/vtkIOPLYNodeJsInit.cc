/* this file has been autogenerated by vtkNodeJsWrapInit */
/* editing this might proof futile */

#include <nan.h>

#include "vtkPLYReaderWrap.h"
#include "vtkPLYWriterWrap.h"

using namespace v8;

extern void vtkIOPLYNodeJsInit( v8::Local<v8::Object> exports )
{
	VtkPLYReaderWrap::Init( exports );
	VtkPLYWriterWrap::Init( exports );
}
