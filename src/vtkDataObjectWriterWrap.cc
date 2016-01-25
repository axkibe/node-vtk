/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkWriterWrap.h"
#include "vtkDataObjectWriterWrap.h"
#include "vtkObjectWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::Function> VtkDataObjectWriterWrap::constructor;
Nan::Persistent<v8::FunctionTemplate> VtkDataObjectWriterWrap::ptpl;

VtkDataObjectWriterWrap::VtkDataObjectWriterWrap()
{ }

VtkDataObjectWriterWrap::VtkDataObjectWriterWrap(vtkSmartPointer<vtkDataObjectWriter> _native)
{ native = _native; }

VtkDataObjectWriterWrap::~VtkDataObjectWriterWrap()
{ }

void VtkDataObjectWriterWrap::Init(v8::Local<v8::Object> exports)
{
	if (!constructor.IsEmpty()) return;
	Nan::HandleScope scope;

	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkWriterWrap::Init( exports );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkWriterWrap::ptpl));

	tpl->SetClassName(Nan::New("VtkDataObjectWriterWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);
	InitTpl(tpl);

	constructor.Reset( tpl->GetFunction() );
	ptpl.Reset( tpl );

	exports->Set(Nan::New("vtkDataObjectWriter").ToLocalChecked(),tpl->GetFunction());
	exports->Set(Nan::New("DataObjectWriter").ToLocalChecked(),tpl->GetFunction());
}

void VtkDataObjectWriterWrap::InitTpl(v8::Local<v8::FunctionTemplate> tpl)
{
	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "GetFieldDataName", GetFieldDataName);
	Nan::SetPrototypeMethod(tpl, "getFieldDataName", GetFieldDataName);

	Nan::SetPrototypeMethod(tpl, "GetFileName", GetFileName);
	Nan::SetPrototypeMethod(tpl, "getFileName", GetFileName);

	Nan::SetPrototypeMethod(tpl, "GetFileType", GetFileType);
	Nan::SetPrototypeMethod(tpl, "getFileType", GetFileType);

	Nan::SetPrototypeMethod(tpl, "GetHeader", GetHeader);
	Nan::SetPrototypeMethod(tpl, "getHeader", GetHeader);

	Nan::SetPrototypeMethod(tpl, "GetOutputString", GetOutputString);
	Nan::SetPrototypeMethod(tpl, "getOutputString", GetOutputString);

	Nan::SetPrototypeMethod(tpl, "GetOutputStringLength", GetOutputStringLength);
	Nan::SetPrototypeMethod(tpl, "getOutputStringLength", GetOutputStringLength);

	Nan::SetPrototypeMethod(tpl, "GetWriteToOutputString", GetWriteToOutputString);
	Nan::SetPrototypeMethod(tpl, "getWriteToOutputString", GetWriteToOutputString);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

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

	Nan::SetPrototypeMethod(tpl, "SetHeader", SetHeader);
	Nan::SetPrototypeMethod(tpl, "setHeader", SetHeader);

	Nan::SetPrototypeMethod(tpl, "SetWriteToOutputString", SetWriteToOutputString);
	Nan::SetPrototypeMethod(tpl, "setWriteToOutputString", SetWriteToOutputString);

	Nan::SetPrototypeMethod(tpl, "WriteToOutputStringOff", WriteToOutputStringOff);
	Nan::SetPrototypeMethod(tpl, "writeToOutputStringOff", WriteToOutputStringOff);

	Nan::SetPrototypeMethod(tpl, "WriteToOutputStringOn", WriteToOutputStringOn);
	Nan::SetPrototypeMethod(tpl, "writeToOutputStringOn", WriteToOutputStringOn);

}

void VtkDataObjectWriterWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkDataObjectWriter> native = vtkSmartPointer<vtkDataObjectWriter>::New();
		VtkDataObjectWriterWrap* obj = new VtkDataObjectWriterWrap(native);		obj->Wrap(info.This());
	}
	else
	{
		Nan::Utf8String s(info[0]);
		if(info[0]->ToObject() != vtkNodeJsNoWrap )
			Nan::ThrowError("Parameter Error");
	}

	info.GetReturnValue().Set(info.This());
}

void VtkDataObjectWriterWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDataObjectWriterWrap *wrapper = ObjectWrap::Unwrap<VtkDataObjectWriterWrap>(info.Holder());
	vtkDataObjectWriter *native = (vtkDataObjectWriter *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkDataObjectWriterWrap::GetFieldDataName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDataObjectWriterWrap *wrapper = ObjectWrap::Unwrap<VtkDataObjectWriterWrap>(info.Holder());
	vtkDataObjectWriter *native = (vtkDataObjectWriter *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetFieldDataName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkDataObjectWriterWrap::GetFileName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDataObjectWriterWrap *wrapper = ObjectWrap::Unwrap<VtkDataObjectWriterWrap>(info.Holder());
	vtkDataObjectWriter *native = (vtkDataObjectWriter *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetFileName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkDataObjectWriterWrap::GetFileType(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDataObjectWriterWrap *wrapper = ObjectWrap::Unwrap<VtkDataObjectWriterWrap>(info.Holder());
	vtkDataObjectWriter *native = (vtkDataObjectWriter *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetFileType();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkDataObjectWriterWrap::GetHeader(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDataObjectWriterWrap *wrapper = ObjectWrap::Unwrap<VtkDataObjectWriterWrap>(info.Holder());
	vtkDataObjectWriter *native = (vtkDataObjectWriter *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetHeader();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkDataObjectWriterWrap::GetOutputString(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDataObjectWriterWrap *wrapper = ObjectWrap::Unwrap<VtkDataObjectWriterWrap>(info.Holder());
	vtkDataObjectWriter *native = (vtkDataObjectWriter *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetOutputString();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkDataObjectWriterWrap::GetOutputStringLength(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDataObjectWriterWrap *wrapper = ObjectWrap::Unwrap<VtkDataObjectWriterWrap>(info.Holder());
	vtkDataObjectWriter *native = (vtkDataObjectWriter *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetOutputStringLength();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkDataObjectWriterWrap::GetWriteToOutputString(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDataObjectWriterWrap *wrapper = ObjectWrap::Unwrap<VtkDataObjectWriterWrap>(info.Holder());
	vtkDataObjectWriter *native = (vtkDataObjectWriter *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetWriteToOutputString();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkDataObjectWriterWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDataObjectWriterWrap *wrapper = ObjectWrap::Unwrap<VtkDataObjectWriterWrap>(info.Holder());
	vtkDataObjectWriter *native = (vtkDataObjectWriter *)wrapper->native.GetPointer();
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

void VtkDataObjectWriterWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDataObjectWriterWrap *wrapper = ObjectWrap::Unwrap<VtkDataObjectWriterWrap>(info.Holder());
	vtkDataObjectWriter *native = (vtkDataObjectWriter *)wrapper->native.GetPointer();
	vtkDataObjectWriter * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::Function>(VtkDataObjectWriterWrap::constructor);
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkDataObjectWriterWrap *w = new VtkDataObjectWriterWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkDataObjectWriterWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDataObjectWriterWrap *wrapper = ObjectWrap::Unwrap<VtkDataObjectWriterWrap>(info.Holder());
	vtkDataObjectWriter *native = (vtkDataObjectWriter *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject())
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkDataObjectWriter * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObject *) a0->native.GetPointer()
		);
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::Function>(VtkDataObjectWriterWrap::constructor);
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkDataObjectWriterWrap *w = new VtkDataObjectWriterWrap();
		w->native.TakeReference(r);
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkDataObjectWriterWrap::SetFieldDataName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDataObjectWriterWrap *wrapper = ObjectWrap::Unwrap<VtkDataObjectWriterWrap>(info.Holder());
	vtkDataObjectWriter *native = (vtkDataObjectWriter *)wrapper->native.GetPointer();
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

void VtkDataObjectWriterWrap::SetFileName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDataObjectWriterWrap *wrapper = ObjectWrap::Unwrap<VtkDataObjectWriterWrap>(info.Holder());
	vtkDataObjectWriter *native = (vtkDataObjectWriter *)wrapper->native.GetPointer();
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

void VtkDataObjectWriterWrap::SetFileType(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDataObjectWriterWrap *wrapper = ObjectWrap::Unwrap<VtkDataObjectWriterWrap>(info.Holder());
	vtkDataObjectWriter *native = (vtkDataObjectWriter *)wrapper->native.GetPointer();
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

void VtkDataObjectWriterWrap::SetFileTypeToASCII(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDataObjectWriterWrap *wrapper = ObjectWrap::Unwrap<VtkDataObjectWriterWrap>(info.Holder());
	vtkDataObjectWriter *native = (vtkDataObjectWriter *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->SetFileTypeToASCII();
}

void VtkDataObjectWriterWrap::SetFileTypeToBinary(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDataObjectWriterWrap *wrapper = ObjectWrap::Unwrap<VtkDataObjectWriterWrap>(info.Holder());
	vtkDataObjectWriter *native = (vtkDataObjectWriter *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->SetFileTypeToBinary();
}

void VtkDataObjectWriterWrap::SetHeader(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDataObjectWriterWrap *wrapper = ObjectWrap::Unwrap<VtkDataObjectWriterWrap>(info.Holder());
	vtkDataObjectWriter *native = (vtkDataObjectWriter *)wrapper->native.GetPointer();
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

void VtkDataObjectWriterWrap::SetWriteToOutputString(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDataObjectWriterWrap *wrapper = ObjectWrap::Unwrap<VtkDataObjectWriterWrap>(info.Holder());
	vtkDataObjectWriter *native = (vtkDataObjectWriter *)wrapper->native.GetPointer();
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

void VtkDataObjectWriterWrap::WriteToOutputStringOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDataObjectWriterWrap *wrapper = ObjectWrap::Unwrap<VtkDataObjectWriterWrap>(info.Holder());
	vtkDataObjectWriter *native = (vtkDataObjectWriter *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->WriteToOutputStringOff();
}

void VtkDataObjectWriterWrap::WriteToOutputStringOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDataObjectWriterWrap *wrapper = ObjectWrap::Unwrap<VtkDataObjectWriterWrap>(info.Holder());
	vtkDataObjectWriter *native = (vtkDataObjectWriter *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->WriteToOutputStringOn();
}
