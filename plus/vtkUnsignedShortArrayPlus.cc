/* Allows direct buffer access */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY

#include <vtkDataArrayWrap.h>
#include "vtkUnsignedShortArrayWrap.h"
#include "vtkObjectWrap.h"
#include "plus.h"

using namespace v8;

void VtkUnsignedShortArrayWrap::GetBuffer(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkUnsignedShortArrayWrap *wrapper = ObjectWrap::Unwrap<VtkUnsignedShortArrayWrap>(info.Holder());
	vtkUnsignedShortArray *native = (vtkUnsignedShortArray *)wrapper->native.GetPointer();
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
	Local<v8::Uint16Array> at = v8::Uint16Array::New(ab, 0, native->GetDataSize());
	info.GetReturnValue().Set(at);
}

