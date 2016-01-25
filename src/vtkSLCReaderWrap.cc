/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkImageReader2Wrap.h"
#include "vtkSLCReaderWrap.h"
#include "vtkObjectWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::Function> VtkSLCReaderWrap::constructor;
Nan::Persistent<v8::FunctionTemplate> VtkSLCReaderWrap::ptpl;

VtkSLCReaderWrap::VtkSLCReaderWrap()
{ }

VtkSLCReaderWrap::VtkSLCReaderWrap(vtkSmartPointer<vtkSLCReader> _native)
{ native = _native; }

VtkSLCReaderWrap::~VtkSLCReaderWrap()
{ }

void VtkSLCReaderWrap::Init(v8::Local<v8::Object> exports)
{
	if (!constructor.IsEmpty()) return;
	Nan::HandleScope scope;

	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkImageReader2Wrap::Init( exports );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkImageReader2Wrap::ptpl));

	tpl->SetClassName(Nan::New("VtkSLCReaderWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);
	InitTpl(tpl);

	constructor.Reset( tpl->GetFunction() );
	ptpl.Reset( tpl );

	exports->Set(Nan::New("vtkSLCReader").ToLocalChecked(),tpl->GetFunction());
	exports->Set(Nan::New("SLCReader").ToLocalChecked(),tpl->GetFunction());
}

void VtkSLCReaderWrap::InitTpl(v8::Local<v8::FunctionTemplate> tpl)
{
	Nan::SetPrototypeMethod(tpl, "CanReadFile", CanReadFile);
	Nan::SetPrototypeMethod(tpl, "canReadFile", CanReadFile);

	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "GetDescriptiveName", GetDescriptiveName);
	Nan::SetPrototypeMethod(tpl, "getDescriptiveName", GetDescriptiveName);

	Nan::SetPrototypeMethod(tpl, "GetError", GetError);
	Nan::SetPrototypeMethod(tpl, "getError", GetError);

	Nan::SetPrototypeMethod(tpl, "GetFileExtensions", GetFileExtensions);
	Nan::SetPrototypeMethod(tpl, "getFileExtensions", GetFileExtensions);

	Nan::SetPrototypeMethod(tpl, "GetFileName", GetFileName);
	Nan::SetPrototypeMethod(tpl, "getFileName", GetFileName);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetFileName", SetFileName);
	Nan::SetPrototypeMethod(tpl, "setFileName", SetFileName);

}

void VtkSLCReaderWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkSLCReader> native = vtkSmartPointer<vtkSLCReader>::New();
		VtkSLCReaderWrap* obj = new VtkSLCReaderWrap(native);		obj->Wrap(info.This());
	}
	else
	{
		Nan::Utf8String s(info[0]);
		if(info[0]->ToObject() != vtkNodeJsNoWrap )
			Nan::ThrowError("Parameter Error");
	}

	info.GetReturnValue().Set(info.This());
}

void VtkSLCReaderWrap::CanReadFile(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSLCReaderWrap *wrapper = ObjectWrap::Unwrap<VtkSLCReaderWrap>(info.Holder());
	vtkSLCReader *native = (vtkSLCReader *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		Nan::Utf8String a0(info[0]);
		int r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->CanReadFile(
			*a0
		);
		info.GetReturnValue().Set(Nan::New(r));
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkSLCReaderWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSLCReaderWrap *wrapper = ObjectWrap::Unwrap<VtkSLCReaderWrap>(info.Holder());
	vtkSLCReader *native = (vtkSLCReader *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkSLCReaderWrap::GetDescriptiveName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSLCReaderWrap *wrapper = ObjectWrap::Unwrap<VtkSLCReaderWrap>(info.Holder());
	vtkSLCReader *native = (vtkSLCReader *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetDescriptiveName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkSLCReaderWrap::GetError(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSLCReaderWrap *wrapper = ObjectWrap::Unwrap<VtkSLCReaderWrap>(info.Holder());
	vtkSLCReader *native = (vtkSLCReader *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetError();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkSLCReaderWrap::GetFileExtensions(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSLCReaderWrap *wrapper = ObjectWrap::Unwrap<VtkSLCReaderWrap>(info.Holder());
	vtkSLCReader *native = (vtkSLCReader *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetFileExtensions();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkSLCReaderWrap::GetFileName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSLCReaderWrap *wrapper = ObjectWrap::Unwrap<VtkSLCReaderWrap>(info.Holder());
	vtkSLCReader *native = (vtkSLCReader *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetFileName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkSLCReaderWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSLCReaderWrap *wrapper = ObjectWrap::Unwrap<VtkSLCReaderWrap>(info.Holder());
	vtkSLCReader *native = (vtkSLCReader *)wrapper->native.GetPointer();
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

void VtkSLCReaderWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSLCReaderWrap *wrapper = ObjectWrap::Unwrap<VtkSLCReaderWrap>(info.Holder());
	vtkSLCReader *native = (vtkSLCReader *)wrapper->native.GetPointer();
	vtkSLCReader * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::Function>(VtkSLCReaderWrap::constructor);
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkSLCReaderWrap *w = new VtkSLCReaderWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkSLCReaderWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSLCReaderWrap *wrapper = ObjectWrap::Unwrap<VtkSLCReaderWrap>(info.Holder());
	vtkSLCReader *native = (vtkSLCReader *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject())
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkSLCReader * r;
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
			Nan::New<v8::Function>(VtkSLCReaderWrap::constructor);
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkSLCReaderWrap *w = new VtkSLCReaderWrap();
		w->native.TakeReference(r);
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkSLCReaderWrap::SetFileName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSLCReaderWrap *wrapper = ObjectWrap::Unwrap<VtkSLCReaderWrap>(info.Holder());
	vtkSLCReader *native = (vtkSLCReader *)wrapper->native.GetPointer();
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

