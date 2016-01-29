/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkImageReader2Wrap.h"
#include "vtkPNGReaderWrap.h"
#include "vtkObjectWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkPNGReaderWrap::ptpl;

VtkPNGReaderWrap::VtkPNGReaderWrap()
{ }

VtkPNGReaderWrap::VtkPNGReaderWrap(vtkSmartPointer<vtkPNGReader> _native)
{ native = _native; }

VtkPNGReaderWrap::~VtkPNGReaderWrap()
{ }

void VtkPNGReaderWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkPNGReader").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("PNGReader").ToLocalChecked(), ConstructorGetter);
}

void VtkPNGReaderWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkPNGReaderWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkImageReader2Wrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkImageReader2Wrap::ptpl));
	tpl->SetClassName(Nan::New("VtkPNGReaderWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "CanReadFile", CanReadFile);
	Nan::SetPrototypeMethod(tpl, "canReadFile", CanReadFile);

	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "GetDescriptiveName", GetDescriptiveName);
	Nan::SetPrototypeMethod(tpl, "getDescriptiveName", GetDescriptiveName);

	Nan::SetPrototypeMethod(tpl, "GetFileExtensions", GetFileExtensions);
	Nan::SetPrototypeMethod(tpl, "getFileExtensions", GetFileExtensions);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	ptpl.Reset( tpl );
}

void VtkPNGReaderWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkPNGReader> native = vtkSmartPointer<vtkPNGReader>::New();
		VtkPNGReaderWrap* obj = new VtkPNGReaderWrap(native);
		obj->Wrap(info.This());
	}
	else
	{
		if(info[0]->ToObject() != vtkNodeJsNoWrap )
		{
			Nan::ThrowError("Parameter Error");
			return;
		}
	}

	info.GetReturnValue().Set(info.This());
}

void VtkPNGReaderWrap::CanReadFile(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPNGReaderWrap *wrapper = ObjectWrap::Unwrap<VtkPNGReaderWrap>(info.Holder());
	vtkPNGReader *native = (vtkPNGReader *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsString())
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

void VtkPNGReaderWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPNGReaderWrap *wrapper = ObjectWrap::Unwrap<VtkPNGReaderWrap>(info.Holder());
	vtkPNGReader *native = (vtkPNGReader *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkPNGReaderWrap::GetDescriptiveName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPNGReaderWrap *wrapper = ObjectWrap::Unwrap<VtkPNGReaderWrap>(info.Holder());
	vtkPNGReader *native = (vtkPNGReader *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetDescriptiveName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkPNGReaderWrap::GetFileExtensions(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPNGReaderWrap *wrapper = ObjectWrap::Unwrap<VtkPNGReaderWrap>(info.Holder());
	vtkPNGReader *native = (vtkPNGReader *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetFileExtensions();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkPNGReaderWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPNGReaderWrap *wrapper = ObjectWrap::Unwrap<VtkPNGReaderWrap>(info.Holder());
	vtkPNGReader *native = (vtkPNGReader *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsString())
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

void VtkPNGReaderWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPNGReaderWrap *wrapper = ObjectWrap::Unwrap<VtkPNGReaderWrap>(info.Holder());
	vtkPNGReader *native = (vtkPNGReader *)wrapper->native.GetPointer();
	vtkPNGReader * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
		VtkPNGReaderWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkPNGReaderWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkPNGReaderWrap *w = new VtkPNGReaderWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkPNGReaderWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPNGReaderWrap *wrapper = ObjectWrap::Unwrap<VtkPNGReaderWrap>(info.Holder());
	vtkPNGReader *native = (vtkPNGReader *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkPNGReader * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObject *) a0->native.GetPointer()
		);
			VtkPNGReaderWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkPNGReaderWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkPNGReaderWrap *w = new VtkPNGReaderWrap();
		w->native = r;
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

