/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkImageReader2Wrap.h"
#include "vtkTIFFReaderWrap.h"
#include "vtkObjectWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::Function> VtkTIFFReaderWrap::constructor;
Nan::Persistent<v8::FunctionTemplate> VtkTIFFReaderWrap::ptpl;

VtkTIFFReaderWrap::VtkTIFFReaderWrap()
{ }

VtkTIFFReaderWrap::VtkTIFFReaderWrap(vtkSmartPointer<vtkTIFFReader> _native)
{ native = _native; }

VtkTIFFReaderWrap::~VtkTIFFReaderWrap()
{ }

void VtkTIFFReaderWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkTIFFReader").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("TIFFReader").ToLocalChecked(), ConstructorGetter);
}

void VtkTIFFReaderWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkTIFFReaderWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkImageReader2Wrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkImageReader2Wrap::ptpl));
	tpl->SetClassName(Nan::New("VtkTIFFReaderWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "CanReadFile", CanReadFile);
	Nan::SetPrototypeMethod(tpl, "canReadFile", CanReadFile);

	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "GetDescriptiveName", GetDescriptiveName);
	Nan::SetPrototypeMethod(tpl, "getDescriptiveName", GetDescriptiveName);

	Nan::SetPrototypeMethod(tpl, "GetFileExtensions", GetFileExtensions);
	Nan::SetPrototypeMethod(tpl, "getFileExtensions", GetFileExtensions);

	Nan::SetPrototypeMethod(tpl, "InitializeColors", InitializeColors);
	Nan::SetPrototypeMethod(tpl, "initializeColors", InitializeColors);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "OriginSpecifiedFlagOff", OriginSpecifiedFlagOff);
	Nan::SetPrototypeMethod(tpl, "originSpecifiedFlagOff", OriginSpecifiedFlagOff);

	Nan::SetPrototypeMethod(tpl, "OriginSpecifiedFlagOn", OriginSpecifiedFlagOn);
	Nan::SetPrototypeMethod(tpl, "originSpecifiedFlagOn", OriginSpecifiedFlagOn);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SpacingSpecifiedFlagOff", SpacingSpecifiedFlagOff);
	Nan::SetPrototypeMethod(tpl, "spacingSpecifiedFlagOff", SpacingSpecifiedFlagOff);

	Nan::SetPrototypeMethod(tpl, "SpacingSpecifiedFlagOn", SpacingSpecifiedFlagOn);
	Nan::SetPrototypeMethod(tpl, "spacingSpecifiedFlagOn", SpacingSpecifiedFlagOn);

	constructor.Reset( tpl->GetFunction() );
	ptpl.Reset( tpl );
}

void VtkTIFFReaderWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkTIFFReader> native = vtkSmartPointer<vtkTIFFReader>::New();
		VtkTIFFReaderWrap* obj = new VtkTIFFReaderWrap(native);		obj->Wrap(info.This());
	}
	else
	{
		Nan::Utf8String s(info[0]);
		if(info[0]->ToObject() != vtkNodeJsNoWrap )
			Nan::ThrowError("Parameter Error");
	}

	info.GetReturnValue().Set(info.This());
}

void VtkTIFFReaderWrap::CanReadFile(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTIFFReaderWrap *wrapper = ObjectWrap::Unwrap<VtkTIFFReaderWrap>(info.Holder());
	vtkTIFFReader *native = (vtkTIFFReader *)wrapper->native.GetPointer();
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

void VtkTIFFReaderWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTIFFReaderWrap *wrapper = ObjectWrap::Unwrap<VtkTIFFReaderWrap>(info.Holder());
	vtkTIFFReader *native = (vtkTIFFReader *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkTIFFReaderWrap::GetDescriptiveName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTIFFReaderWrap *wrapper = ObjectWrap::Unwrap<VtkTIFFReaderWrap>(info.Holder());
	vtkTIFFReader *native = (vtkTIFFReader *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetDescriptiveName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkTIFFReaderWrap::GetFileExtensions(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTIFFReaderWrap *wrapper = ObjectWrap::Unwrap<VtkTIFFReaderWrap>(info.Holder());
	vtkTIFFReader *native = (vtkTIFFReader *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetFileExtensions();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkTIFFReaderWrap::InitializeColors(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTIFFReaderWrap *wrapper = ObjectWrap::Unwrap<VtkTIFFReaderWrap>(info.Holder());
	vtkTIFFReader *native = (vtkTIFFReader *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->InitializeColors();
}

void VtkTIFFReaderWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTIFFReaderWrap *wrapper = ObjectWrap::Unwrap<VtkTIFFReaderWrap>(info.Holder());
	vtkTIFFReader *native = (vtkTIFFReader *)wrapper->native.GetPointer();
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

void VtkTIFFReaderWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTIFFReaderWrap *wrapper = ObjectWrap::Unwrap<VtkTIFFReaderWrap>(info.Holder());
	vtkTIFFReader *native = (vtkTIFFReader *)wrapper->native.GetPointer();
	vtkTIFFReader * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
		VtkTIFFReaderWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::Function>(VtkTIFFReaderWrap::constructor);
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkTIFFReaderWrap *w = new VtkTIFFReaderWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkTIFFReaderWrap::OriginSpecifiedFlagOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTIFFReaderWrap *wrapper = ObjectWrap::Unwrap<VtkTIFFReaderWrap>(info.Holder());
	vtkTIFFReader *native = (vtkTIFFReader *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->OriginSpecifiedFlagOff();
}

void VtkTIFFReaderWrap::OriginSpecifiedFlagOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTIFFReaderWrap *wrapper = ObjectWrap::Unwrap<VtkTIFFReaderWrap>(info.Holder());
	vtkTIFFReader *native = (vtkTIFFReader *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->OriginSpecifiedFlagOn();
}

void VtkTIFFReaderWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTIFFReaderWrap *wrapper = ObjectWrap::Unwrap<VtkTIFFReaderWrap>(info.Holder());
	vtkTIFFReader *native = (vtkTIFFReader *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkTIFFReader * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObject *) a0->native.GetPointer()
		);
			VtkTIFFReaderWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::Function>(VtkTIFFReaderWrap::constructor);
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkTIFFReaderWrap *w = new VtkTIFFReaderWrap();
		w->native.TakeReference(r);
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkTIFFReaderWrap::SpacingSpecifiedFlagOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTIFFReaderWrap *wrapper = ObjectWrap::Unwrap<VtkTIFFReaderWrap>(info.Holder());
	vtkTIFFReader *native = (vtkTIFFReader *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->SpacingSpecifiedFlagOff();
}

void VtkTIFFReaderWrap::SpacingSpecifiedFlagOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTIFFReaderWrap *wrapper = ObjectWrap::Unwrap<VtkTIFFReaderWrap>(info.Holder());
	vtkTIFFReader *native = (vtkTIFFReader *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->SpacingSpecifiedFlagOn();
}

