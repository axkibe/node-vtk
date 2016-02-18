/* Allows direct buffer access */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY

#include <vtkDataArrayWrap.h>
#include "vtkIntArrayWrap.h"
#include "vtkObjectWrap.h"
#include "plus.h"

using namespace v8;

void VtkIntArrayWrap::GetBuffer(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkIntArrayWrap *wrapper = ObjectWrap::Unwrap<VtkIntArrayWrap>(info.Holder());
	vtkIntArray *native = (vtkIntArray *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	Local<v8::ArrayBuffer> ab =
		v8::ArrayBuffer::New(
			v8::Isolate::GetCurrent(),
			native->GetVoidPointer( 0 ),
			native->GetDataSize() * native->GetDataTypeSize()
		);
	Local<v8::Int16Array> at = v8::Int16Array::New(ab, 0, native->GetDataSize());
	info.GetReturnValue().Set(at);
}

