/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkMedicalImageReader2Wrap.h"
#include "vtkGESignaReaderWrap.h"
#include "vtkObjectWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkGESignaReaderWrap::ptpl;

VtkGESignaReaderWrap::VtkGESignaReaderWrap()
{ }

VtkGESignaReaderWrap::VtkGESignaReaderWrap(vtkSmartPointer<vtkGESignaReader> _native)
{ native = _native; }

VtkGESignaReaderWrap::~VtkGESignaReaderWrap()
{ }

void VtkGESignaReaderWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkGESignaReader").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("GESignaReader").ToLocalChecked(), ConstructorGetter);
}

void VtkGESignaReaderWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkGESignaReaderWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkMedicalImageReader2Wrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkMedicalImageReader2Wrap::ptpl));
	tpl->SetClassName(Nan::New("VtkGESignaReaderWrap").ToLocalChecked());
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

void VtkGESignaReaderWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkGESignaReader> native = vtkSmartPointer<vtkGESignaReader>::New();
		VtkGESignaReaderWrap* obj = new VtkGESignaReaderWrap(native);		obj->Wrap(info.This());
	}
	else
	{
		if(info[0]->ToObject() != vtkNodeJsNoWrap )
			Nan::ThrowError("Parameter Error");
	}

	info.GetReturnValue().Set(info.This());
}

void VtkGESignaReaderWrap::CanReadFile(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGESignaReaderWrap *wrapper = ObjectWrap::Unwrap<VtkGESignaReaderWrap>(info.Holder());
	vtkGESignaReader *native = (vtkGESignaReader *)wrapper->native.GetPointer();
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

void VtkGESignaReaderWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGESignaReaderWrap *wrapper = ObjectWrap::Unwrap<VtkGESignaReaderWrap>(info.Holder());
	vtkGESignaReader *native = (vtkGESignaReader *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkGESignaReaderWrap::GetDescriptiveName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGESignaReaderWrap *wrapper = ObjectWrap::Unwrap<VtkGESignaReaderWrap>(info.Holder());
	vtkGESignaReader *native = (vtkGESignaReader *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetDescriptiveName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkGESignaReaderWrap::GetFileExtensions(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGESignaReaderWrap *wrapper = ObjectWrap::Unwrap<VtkGESignaReaderWrap>(info.Holder());
	vtkGESignaReader *native = (vtkGESignaReader *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetFileExtensions();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkGESignaReaderWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGESignaReaderWrap *wrapper = ObjectWrap::Unwrap<VtkGESignaReaderWrap>(info.Holder());
	vtkGESignaReader *native = (vtkGESignaReader *)wrapper->native.GetPointer();
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

void VtkGESignaReaderWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGESignaReaderWrap *wrapper = ObjectWrap::Unwrap<VtkGESignaReaderWrap>(info.Holder());
	vtkGESignaReader *native = (vtkGESignaReader *)wrapper->native.GetPointer();
	vtkGESignaReader * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
		VtkGESignaReaderWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkGESignaReaderWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkGESignaReaderWrap *w = new VtkGESignaReaderWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkGESignaReaderWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGESignaReaderWrap *wrapper = ObjectWrap::Unwrap<VtkGESignaReaderWrap>(info.Holder());
	vtkGESignaReader *native = (vtkGESignaReader *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkGESignaReader * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObject *) a0->native.GetPointer()
		);
			VtkGESignaReaderWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkGESignaReaderWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkGESignaReaderWrap *w = new VtkGESignaReaderWrap();
		w->native = r;
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

