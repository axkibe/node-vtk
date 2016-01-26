/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkWriterWrap.h"
#include "vtkDataWriterWrap.h"
#include "vtkObjectWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkDataWriterWrap::ptpl;

VtkDataWriterWrap::VtkDataWriterWrap()
{ }

VtkDataWriterWrap::VtkDataWriterWrap(vtkSmartPointer<vtkDataWriter> _native)
{ native = _native; }

VtkDataWriterWrap::~VtkDataWriterWrap()
{ }

void VtkDataWriterWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkDataWriter").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("DataWriter").ToLocalChecked(), ConstructorGetter);
}

void VtkDataWriterWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkDataWriterWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkWriterWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkWriterWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkDataWriterWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "GetEdgeFlagsName", GetEdgeFlagsName);
	Nan::SetPrototypeMethod(tpl, "getEdgeFlagsName", GetEdgeFlagsName);

	Nan::SetPrototypeMethod(tpl, "GetFieldDataName", GetFieldDataName);
	Nan::SetPrototypeMethod(tpl, "getFieldDataName", GetFieldDataName);

	Nan::SetPrototypeMethod(tpl, "GetFileName", GetFileName);
	Nan::SetPrototypeMethod(tpl, "getFileName", GetFileName);

	Nan::SetPrototypeMethod(tpl, "GetFileType", GetFileType);
	Nan::SetPrototypeMethod(tpl, "getFileType", GetFileType);

	Nan::SetPrototypeMethod(tpl, "GetFileTypeMaxValue", GetFileTypeMaxValue);
	Nan::SetPrototypeMethod(tpl, "getFileTypeMaxValue", GetFileTypeMaxValue);

	Nan::SetPrototypeMethod(tpl, "GetFileTypeMinValue", GetFileTypeMinValue);
	Nan::SetPrototypeMethod(tpl, "getFileTypeMinValue", GetFileTypeMinValue);

	Nan::SetPrototypeMethod(tpl, "GetGlobalIdsName", GetGlobalIdsName);
	Nan::SetPrototypeMethod(tpl, "getGlobalIdsName", GetGlobalIdsName);

	Nan::SetPrototypeMethod(tpl, "GetHeader", GetHeader);
	Nan::SetPrototypeMethod(tpl, "getHeader", GetHeader);

	Nan::SetPrototypeMethod(tpl, "GetLookupTableName", GetLookupTableName);
	Nan::SetPrototypeMethod(tpl, "getLookupTableName", GetLookupTableName);

	Nan::SetPrototypeMethod(tpl, "GetNormalsName", GetNormalsName);
	Nan::SetPrototypeMethod(tpl, "getNormalsName", GetNormalsName);

	Nan::SetPrototypeMethod(tpl, "GetOutputString", GetOutputString);
	Nan::SetPrototypeMethod(tpl, "getOutputString", GetOutputString);

	Nan::SetPrototypeMethod(tpl, "GetOutputStringLength", GetOutputStringLength);
	Nan::SetPrototypeMethod(tpl, "getOutputStringLength", GetOutputStringLength);

	Nan::SetPrototypeMethod(tpl, "GetPedigreeIdsName", GetPedigreeIdsName);
	Nan::SetPrototypeMethod(tpl, "getPedigreeIdsName", GetPedigreeIdsName);

	Nan::SetPrototypeMethod(tpl, "GetScalarsName", GetScalarsName);
	Nan::SetPrototypeMethod(tpl, "getScalarsName", GetScalarsName);

	Nan::SetPrototypeMethod(tpl, "GetTCoordsName", GetTCoordsName);
	Nan::SetPrototypeMethod(tpl, "getTCoordsName", GetTCoordsName);

	Nan::SetPrototypeMethod(tpl, "GetTensorsName", GetTensorsName);
	Nan::SetPrototypeMethod(tpl, "getTensorsName", GetTensorsName);

	Nan::SetPrototypeMethod(tpl, "GetVectorsName", GetVectorsName);
	Nan::SetPrototypeMethod(tpl, "getVectorsName", GetVectorsName);

	Nan::SetPrototypeMethod(tpl, "GetWriteToOutputString", GetWriteToOutputString);
	Nan::SetPrototypeMethod(tpl, "getWriteToOutputString", GetWriteToOutputString);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "RegisterAndGetOutputString", RegisterAndGetOutputString);
	Nan::SetPrototypeMethod(tpl, "registerAndGetOutputString", RegisterAndGetOutputString);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetEdgeFlagsName", SetEdgeFlagsName);
	Nan::SetPrototypeMethod(tpl, "setEdgeFlagsName", SetEdgeFlagsName);

	Nan::SetPrototypeMethod(tpl, "SetFieldDataName", SetFieldDataName);
	Nan::SetPrototypeMethod(tpl, "setFieldDataName", SetFieldDataName);

	Nan::SetPrototypeMethod(tpl, "SetFileName", SetFileName);
	Nan::SetPrototypeMethod(tpl, "setFileName", SetFileName);

	Nan::SetPrototypeMethod(tpl, "SetFileType", SetFileType);
	Nan::SetPrototypeMethod(tpl, "setFileType", SetFileType);

	Nan::SetPrototypeMethod(tpl, "SetFileTypeToASCII", SetFileTypeToASCII);
	Nan::SetPrototypeMethod(tpl, "setFileTypeToASCII", SetFileTypeToASCII);

	Nan::SetPrototypeMethod(tpl, "SetFileTypeToBinary", SetFileTypeToBinary);
	Nan::SetPrototypeMethod(tpl, "setFileTypeToBinary", SetFileTypeToBinary);

	Nan::SetPrototypeMethod(tpl, "SetGlobalIdsName", SetGlobalIdsName);
	Nan::SetPrototypeMethod(tpl, "setGlobalIdsName", SetGlobalIdsName);

	Nan::SetPrototypeMethod(tpl, "SetHeader", SetHeader);
	Nan::SetPrototypeMethod(tpl, "setHeader", SetHeader);

	Nan::SetPrototypeMethod(tpl, "SetLookupTableName", SetLookupTableName);
	Nan::SetPrototypeMethod(tpl, "setLookupTableName", SetLookupTableName);

	Nan::SetPrototypeMethod(tpl, "SetNormalsName", SetNormalsName);
	Nan::SetPrototypeMethod(tpl, "setNormalsName", SetNormalsName);

	Nan::SetPrototypeMethod(tpl, "SetPedigreeIdsName", SetPedigreeIdsName);
	Nan::SetPrototypeMethod(tpl, "setPedigreeIdsName", SetPedigreeIdsName);

	Nan::SetPrototypeMethod(tpl, "SetScalarsName", SetScalarsName);
	Nan::SetPrototypeMethod(tpl, "setScalarsName", SetScalarsName);

	Nan::SetPrototypeMethod(tpl, "SetTCoordsName", SetTCoordsName);
	Nan::SetPrototypeMethod(tpl, "setTCoordsName", SetTCoordsName);

	Nan::SetPrototypeMethod(tpl, "SetTensorsName", SetTensorsName);
	Nan::SetPrototypeMethod(tpl, "setTensorsName", SetTensorsName);

	Nan::SetPrototypeMethod(tpl, "SetVectorsName", SetVectorsName);
	Nan::SetPrototypeMethod(tpl, "setVectorsName", SetVectorsName);

	Nan::SetPrototypeMethod(tpl, "SetWriteToOutputString", SetWriteToOutputString);
	Nan::SetPrototypeMethod(tpl, "setWriteToOutputString", SetWriteToOutputString);

	Nan::SetPrototypeMethod(tpl, "WriteToOutputStringOff", WriteToOutputStringOff);
	Nan::SetPrototypeMethod(tpl, "writeToOutputStringOff", WriteToOutputStringOff);

	Nan::SetPrototypeMethod(tpl, "WriteToOutputStringOn", WriteToOutputStringOn);
	Nan::SetPrototypeMethod(tpl, "writeToOutputStringOn", WriteToOutputStringOn);

	ptpl.Reset( tpl );
}

void VtkDataWriterWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkDataWriter> native = vtkSmartPointer<vtkDataWriter>::New();
		VtkDataWriterWrap* obj = new VtkDataWriterWrap(native);		obj->Wrap(info.This());
	}
	else
	{
		Nan::Utf8String s(info[0]);
		if(info[0]->ToObject() != vtkNodeJsNoWrap )
			Nan::ThrowError("Parameter Error");
	}

	info.GetReturnValue().Set(info.This());
}

void VtkDataWriterWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDataWriterWrap *wrapper = ObjectWrap::Unwrap<VtkDataWriterWrap>(info.Holder());
	vtkDataWriter *native = (vtkDataWriter *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkDataWriterWrap::GetEdgeFlagsName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDataWriterWrap *wrapper = ObjectWrap::Unwrap<VtkDataWriterWrap>(info.Holder());
	vtkDataWriter *native = (vtkDataWriter *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetEdgeFlagsName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkDataWriterWrap::GetFieldDataName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDataWriterWrap *wrapper = ObjectWrap::Unwrap<VtkDataWriterWrap>(info.Holder());
	vtkDataWriter *native = (vtkDataWriter *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetFieldDataName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkDataWriterWrap::GetFileName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDataWriterWrap *wrapper = ObjectWrap::Unwrap<VtkDataWriterWrap>(info.Holder());
	vtkDataWriter *native = (vtkDataWriter *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetFileName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkDataWriterWrap::GetFileType(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDataWriterWrap *wrapper = ObjectWrap::Unwrap<VtkDataWriterWrap>(info.Holder());
	vtkDataWriter *native = (vtkDataWriter *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetFileType();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkDataWriterWrap::GetFileTypeMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDataWriterWrap *wrapper = ObjectWrap::Unwrap<VtkDataWriterWrap>(info.Holder());
	vtkDataWriter *native = (vtkDataWriter *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetFileTypeMaxValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkDataWriterWrap::GetFileTypeMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDataWriterWrap *wrapper = ObjectWrap::Unwrap<VtkDataWriterWrap>(info.Holder());
	vtkDataWriter *native = (vtkDataWriter *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetFileTypeMinValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkDataWriterWrap::GetGlobalIdsName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDataWriterWrap *wrapper = ObjectWrap::Unwrap<VtkDataWriterWrap>(info.Holder());
	vtkDataWriter *native = (vtkDataWriter *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetGlobalIdsName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkDataWriterWrap::GetHeader(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDataWriterWrap *wrapper = ObjectWrap::Unwrap<VtkDataWriterWrap>(info.Holder());
	vtkDataWriter *native = (vtkDataWriter *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetHeader();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkDataWriterWrap::GetLookupTableName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDataWriterWrap *wrapper = ObjectWrap::Unwrap<VtkDataWriterWrap>(info.Holder());
	vtkDataWriter *native = (vtkDataWriter *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetLookupTableName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkDataWriterWrap::GetNormalsName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDataWriterWrap *wrapper = ObjectWrap::Unwrap<VtkDataWriterWrap>(info.Holder());
	vtkDataWriter *native = (vtkDataWriter *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetNormalsName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkDataWriterWrap::GetOutputString(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDataWriterWrap *wrapper = ObjectWrap::Unwrap<VtkDataWriterWrap>(info.Holder());
	vtkDataWriter *native = (vtkDataWriter *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetOutputString();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkDataWriterWrap::GetOutputStringLength(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDataWriterWrap *wrapper = ObjectWrap::Unwrap<VtkDataWriterWrap>(info.Holder());
	vtkDataWriter *native = (vtkDataWriter *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetOutputStringLength();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkDataWriterWrap::GetPedigreeIdsName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDataWriterWrap *wrapper = ObjectWrap::Unwrap<VtkDataWriterWrap>(info.Holder());
	vtkDataWriter *native = (vtkDataWriter *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetPedigreeIdsName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkDataWriterWrap::GetScalarsName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDataWriterWrap *wrapper = ObjectWrap::Unwrap<VtkDataWriterWrap>(info.Holder());
	vtkDataWriter *native = (vtkDataWriter *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetScalarsName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkDataWriterWrap::GetTCoordsName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDataWriterWrap *wrapper = ObjectWrap::Unwrap<VtkDataWriterWrap>(info.Holder());
	vtkDataWriter *native = (vtkDataWriter *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetTCoordsName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkDataWriterWrap::GetTensorsName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDataWriterWrap *wrapper = ObjectWrap::Unwrap<VtkDataWriterWrap>(info.Holder());
	vtkDataWriter *native = (vtkDataWriter *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetTensorsName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkDataWriterWrap::GetVectorsName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDataWriterWrap *wrapper = ObjectWrap::Unwrap<VtkDataWriterWrap>(info.Holder());
	vtkDataWriter *native = (vtkDataWriter *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetVectorsName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkDataWriterWrap::GetWriteToOutputString(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDataWriterWrap *wrapper = ObjectWrap::Unwrap<VtkDataWriterWrap>(info.Holder());
	vtkDataWriter *native = (vtkDataWriter *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetWriteToOutputString();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkDataWriterWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDataWriterWrap *wrapper = ObjectWrap::Unwrap<VtkDataWriterWrap>(info.Holder());
	vtkDataWriter *native = (vtkDataWriter *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		Nan::Utf8String a0(info[0]);
		int r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->IsA(
			*a0
		);
		info.GetReturnValue().Set(Nan::New(r));
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkDataWriterWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDataWriterWrap *wrapper = ObjectWrap::Unwrap<VtkDataWriterWrap>(info.Holder());
	vtkDataWriter *native = (vtkDataWriter *)wrapper->native.GetPointer();
	vtkDataWriter * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
		VtkDataWriterWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkDataWriterWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkDataWriterWrap *w = new VtkDataWriterWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkDataWriterWrap::RegisterAndGetOutputString(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDataWriterWrap *wrapper = ObjectWrap::Unwrap<VtkDataWriterWrap>(info.Holder());
	vtkDataWriter *native = (vtkDataWriter *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->RegisterAndGetOutputString();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkDataWriterWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDataWriterWrap *wrapper = ObjectWrap::Unwrap<VtkDataWriterWrap>(info.Holder());
	vtkDataWriter *native = (vtkDataWriter *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkDataWriter * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObject *) a0->native.GetPointer()
		);
			VtkDataWriterWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkDataWriterWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkDataWriterWrap *w = new VtkDataWriterWrap();
		w->native.TakeReference(r);
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkDataWriterWrap::SetEdgeFlagsName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDataWriterWrap *wrapper = ObjectWrap::Unwrap<VtkDataWriterWrap>(info.Holder());
	vtkDataWriter *native = (vtkDataWriter *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		Nan::Utf8String a0(info[0]);
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetEdgeFlagsName(
			*a0
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkDataWriterWrap::SetFieldDataName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDataWriterWrap *wrapper = ObjectWrap::Unwrap<VtkDataWriterWrap>(info.Holder());
	vtkDataWriter *native = (vtkDataWriter *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		Nan::Utf8String a0(info[0]);
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetFieldDataName(
			*a0
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkDataWriterWrap::SetFileName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDataWriterWrap *wrapper = ObjectWrap::Unwrap<VtkDataWriterWrap>(info.Holder());
	vtkDataWriter *native = (vtkDataWriter *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		Nan::Utf8String a0(info[0]);
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetFileName(
			*a0
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkDataWriterWrap::SetFileType(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDataWriterWrap *wrapper = ObjectWrap::Unwrap<VtkDataWriterWrap>(info.Holder());
	vtkDataWriter *native = (vtkDataWriter *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetFileType(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkDataWriterWrap::SetFileTypeToASCII(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDataWriterWrap *wrapper = ObjectWrap::Unwrap<VtkDataWriterWrap>(info.Holder());
	vtkDataWriter *native = (vtkDataWriter *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->SetFileTypeToASCII();
}

void VtkDataWriterWrap::SetFileTypeToBinary(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDataWriterWrap *wrapper = ObjectWrap::Unwrap<VtkDataWriterWrap>(info.Holder());
	vtkDataWriter *native = (vtkDataWriter *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->SetFileTypeToBinary();
}

void VtkDataWriterWrap::SetGlobalIdsName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDataWriterWrap *wrapper = ObjectWrap::Unwrap<VtkDataWriterWrap>(info.Holder());
	vtkDataWriter *native = (vtkDataWriter *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		Nan::Utf8String a0(info[0]);
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetGlobalIdsName(
			*a0
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkDataWriterWrap::SetHeader(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDataWriterWrap *wrapper = ObjectWrap::Unwrap<VtkDataWriterWrap>(info.Holder());
	vtkDataWriter *native = (vtkDataWriter *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		Nan::Utf8String a0(info[0]);
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetHeader(
			*a0
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkDataWriterWrap::SetLookupTableName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDataWriterWrap *wrapper = ObjectWrap::Unwrap<VtkDataWriterWrap>(info.Holder());
	vtkDataWriter *native = (vtkDataWriter *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		Nan::Utf8String a0(info[0]);
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetLookupTableName(
			*a0
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkDataWriterWrap::SetNormalsName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDataWriterWrap *wrapper = ObjectWrap::Unwrap<VtkDataWriterWrap>(info.Holder());
	vtkDataWriter *native = (vtkDataWriter *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		Nan::Utf8String a0(info[0]);
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetNormalsName(
			*a0
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkDataWriterWrap::SetPedigreeIdsName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDataWriterWrap *wrapper = ObjectWrap::Unwrap<VtkDataWriterWrap>(info.Holder());
	vtkDataWriter *native = (vtkDataWriter *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		Nan::Utf8String a0(info[0]);
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetPedigreeIdsName(
			*a0
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkDataWriterWrap::SetScalarsName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDataWriterWrap *wrapper = ObjectWrap::Unwrap<VtkDataWriterWrap>(info.Holder());
	vtkDataWriter *native = (vtkDataWriter *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		Nan::Utf8String a0(info[0]);
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetScalarsName(
			*a0
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkDataWriterWrap::SetTCoordsName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDataWriterWrap *wrapper = ObjectWrap::Unwrap<VtkDataWriterWrap>(info.Holder());
	vtkDataWriter *native = (vtkDataWriter *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		Nan::Utf8String a0(info[0]);
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetTCoordsName(
			*a0
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkDataWriterWrap::SetTensorsName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDataWriterWrap *wrapper = ObjectWrap::Unwrap<VtkDataWriterWrap>(info.Holder());
	vtkDataWriter *native = (vtkDataWriter *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		Nan::Utf8String a0(info[0]);
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetTensorsName(
			*a0
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkDataWriterWrap::SetVectorsName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDataWriterWrap *wrapper = ObjectWrap::Unwrap<VtkDataWriterWrap>(info.Holder());
	vtkDataWriter *native = (vtkDataWriter *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		Nan::Utf8String a0(info[0]);
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetVectorsName(
			*a0
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkDataWriterWrap::SetWriteToOutputString(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDataWriterWrap *wrapper = ObjectWrap::Unwrap<VtkDataWriterWrap>(info.Holder());
	vtkDataWriter *native = (vtkDataWriter *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetWriteToOutputString(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkDataWriterWrap::WriteToOutputStringOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDataWriterWrap *wrapper = ObjectWrap::Unwrap<VtkDataWriterWrap>(info.Holder());
	vtkDataWriter *native = (vtkDataWriter *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->WriteToOutputStringOff();
}

void VtkDataWriterWrap::WriteToOutputStringOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDataWriterWrap *wrapper = ObjectWrap::Unwrap<VtkDataWriterWrap>(info.Holder());
	vtkDataWriter *native = (vtkDataWriter *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->WriteToOutputStringOn();
}

