/* Allows direct buffer access */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY

#include <vtkDataArrayWrap.h>
#include "vtkCharArrayWrap.h"
#include "vtkObjectWrap.h"
#include "plus.h"

using namespace v8;

void VtkCharArrayWrap::GetBuffer(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCharArrayWrap *wrapper = ObjectWrap::Unwrap<VtkCharArrayWrap>(info.Holder());
	vtkCharArray *native = (vtkCharArray *)wrapper->native.GetPointer();
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
	Local<v8::Int8Array> at = v8::Int8Array::New(ab, 0, native->GetDataSize());
	info.GetReturnValue().Set(at);
}

