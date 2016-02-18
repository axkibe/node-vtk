/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>

#include "vtkImageReader2Wrap.h"
#include "vtkTIFFReaderWrap.h"
#include "vtkObjectWrap.h"
#include "../../plus/plus.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
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

	Nan::SetPrototypeMethod(tpl, "GetOrientationType", GetOrientationType);
	Nan::SetPrototypeMethod(tpl, "getOrientationType", GetOrientationType);

	Nan::SetPrototypeMethod(tpl, "GetOrientationTypeSpecifiedFlag", GetOrientationTypeSpecifiedFlag);
	Nan::SetPrototypeMethod(tpl, "getOrientationTypeSpecifiedFlag", GetOrientationTypeSpecifiedFlag);

	Nan::SetPrototypeMethod(tpl, "GetOriginSpecifiedFlag", GetOriginSpecifiedFlag);
	Nan::SetPrototypeMethod(tpl, "getOriginSpecifiedFlag", GetOriginSpecifiedFlag);

	Nan::SetPrototypeMethod(tpl, "GetSpacingSpecifiedFlag", GetSpacingSpecifiedFlag);
	Nan::SetPrototypeMethod(tpl, "getSpacingSpecifiedFlag", GetSpacingSpecifiedFlag);

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

	Nan::SetPrototypeMethod(tpl, "SetOrientationType", SetOrientationType);
	Nan::SetPrototypeMethod(tpl, "setOrientationType", SetOrientationType);

	Nan::SetPrototypeMethod(tpl, "SetOriginSpecifiedFlag", SetOriginSpecifiedFlag);
	Nan::SetPrototypeMethod(tpl, "setOriginSpecifiedFlag", SetOriginSpecifiedFlag);

	Nan::SetPrototypeMethod(tpl, "SetSpacingSpecifiedFlag", SetSpacingSpecifiedFlag);
	Nan::SetPrototypeMethod(tpl, "setSpacingSpecifiedFlag", SetSpacingSpecifiedFlag);

	Nan::SetPrototypeMethod(tpl, "SpacingSpecifiedFlagOff", SpacingSpecifiedFlagOff);
	Nan::SetPrototypeMethod(tpl, "spacingSpecifiedFlagOff", SpacingSpecifiedFlagOff);

	Nan::SetPrototypeMethod(tpl, "SpacingSpecifiedFlagOn", SpacingSpecifiedFlagOn);
	Nan::SetPrototypeMethod(tpl, "spacingSpecifiedFlagOn", SpacingSpecifiedFlagOn);

#ifdef VTK_NODE_PLUS_VTKTIFFREADERWRAP_INITPTPL
	VTK_NODE_PLUS_VTKTIFFREADERWRAP_INITPTPL
#endif
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
		VtkTIFFReaderWrap* obj = new VtkTIFFReaderWrap(native);
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

void VtkTIFFReaderWrap::CanReadFile(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTIFFReaderWrap *wrapper = ObjectWrap::Unwrap<VtkTIFFReaderWrap>(info.Holder());
	vtkTIFFReader *native = (vtkTIFFReader *)wrapper->native.GetPointer();
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

void VtkTIFFReaderWrap::GetOrientationType(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTIFFReaderWrap *wrapper = ObjectWrap::Unwrap<VtkTIFFReaderWrap>(info.Holder());
	vtkTIFFReader *native = (vtkTIFFReader *)wrapper->native.GetPointer();
	unsigned int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetOrientationType();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkTIFFReaderWrap::GetOrientationTypeSpecifiedFlag(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTIFFReaderWrap *wrapper = ObjectWrap::Unwrap<VtkTIFFReaderWrap>(info.Holder());
	vtkTIFFReader *native = (vtkTIFFReader *)wrapper->native.GetPointer();
	bool r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetOrientationTypeSpecifiedFlag();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkTIFFReaderWrap::GetOriginSpecifiedFlag(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTIFFReaderWrap *wrapper = ObjectWrap::Unwrap<VtkTIFFReaderWrap>(info.Holder());
	vtkTIFFReader *native = (vtkTIFFReader *)wrapper->native.GetPointer();
	bool r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetOriginSpecifiedFlag();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkTIFFReaderWrap::GetSpacingSpecifiedFlag(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTIFFReaderWrap *wrapper = ObjectWrap::Unwrap<VtkTIFFReaderWrap>(info.Holder());
	vtkTIFFReader *native = (vtkTIFFReader *)wrapper->native.GetPointer();
	bool r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetSpacingSpecifiedFlag();
	info.GetReturnValue().Set(Nan::New(r));
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
		Nan::New<v8::FunctionTemplate>(VtkTIFFReaderWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkTIFFReaderWrap *w = new VtkTIFFReaderWrap();
	w->native = r;
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
			Nan::New<v8::FunctionTemplate>(VtkTIFFReaderWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkTIFFReaderWrap *w = new VtkTIFFReaderWrap();
		w->native = r;
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkTIFFReaderWrap::SetOrientationType(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTIFFReaderWrap *wrapper = ObjectWrap::Unwrap<VtkTIFFReaderWrap>(info.Holder());
	vtkTIFFReader *native = (vtkTIFFReader *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsUint32())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetOrientationType(
			info[0]->Uint32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkTIFFReaderWrap::SetOriginSpecifiedFlag(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTIFFReaderWrap *wrapper = ObjectWrap::Unwrap<VtkTIFFReaderWrap>(info.Holder());
	vtkTIFFReader *native = (vtkTIFFReader *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsBoolean())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetOriginSpecifiedFlag(
			info[0]->BooleanValue()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkTIFFReaderWrap::SetSpacingSpecifiedFlag(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTIFFReaderWrap *wrapper = ObjectWrap::Unwrap<VtkTIFFReaderWrap>(info.Holder());
	vtkTIFFReader *native = (vtkTIFFReader *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsBoolean())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetSpacingSpecifiedFlag(
			info[0]->BooleanValue()
		);
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

