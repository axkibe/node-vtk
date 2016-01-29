/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkImageAlgorithmWrap.h"
#include "vtkVolumeReaderWrap.h"
#include "vtkObjectWrap.h"
#include "vtkImageDataWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkVolumeReaderWrap::ptpl;

VtkVolumeReaderWrap::VtkVolumeReaderWrap()
{ }

VtkVolumeReaderWrap::VtkVolumeReaderWrap(vtkSmartPointer<vtkVolumeReader> _native)
{ native = _native; }

VtkVolumeReaderWrap::~VtkVolumeReaderWrap()
{ }

void VtkVolumeReaderWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkVolumeReader").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("VolumeReader").ToLocalChecked(), ConstructorGetter);
}

void VtkVolumeReaderWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkVolumeReaderWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkImageAlgorithmWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkImageAlgorithmWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkVolumeReaderWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "GetFilePattern", GetFilePattern);
	Nan::SetPrototypeMethod(tpl, "getFilePattern", GetFilePattern);

	Nan::SetPrototypeMethod(tpl, "GetFilePrefix", GetFilePrefix);
	Nan::SetPrototypeMethod(tpl, "getFilePrefix", GetFilePrefix);

	Nan::SetPrototypeMethod(tpl, "GetImage", GetImage);
	Nan::SetPrototypeMethod(tpl, "getImage", GetImage);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetDataOrigin", SetDataOrigin);
	Nan::SetPrototypeMethod(tpl, "setDataOrigin", SetDataOrigin);

	Nan::SetPrototypeMethod(tpl, "SetDataSpacing", SetDataSpacing);
	Nan::SetPrototypeMethod(tpl, "setDataSpacing", SetDataSpacing);

	Nan::SetPrototypeMethod(tpl, "SetFilePattern", SetFilePattern);
	Nan::SetPrototypeMethod(tpl, "setFilePattern", SetFilePattern);

	Nan::SetPrototypeMethod(tpl, "SetFilePrefix", SetFilePrefix);
	Nan::SetPrototypeMethod(tpl, "setFilePrefix", SetFilePrefix);

	Nan::SetPrototypeMethod(tpl, "SetImageRange", SetImageRange);
	Nan::SetPrototypeMethod(tpl, "setImageRange", SetImageRange);

	ptpl.Reset( tpl );
}

void VtkVolumeReaderWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		Nan::ThrowError("Cannot create instance of abstract class.");
		return;
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

void VtkVolumeReaderWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkVolumeReaderWrap *wrapper = ObjectWrap::Unwrap<VtkVolumeReaderWrap>(info.Holder());
	vtkVolumeReader *native = (vtkVolumeReader *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkVolumeReaderWrap::GetFilePattern(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkVolumeReaderWrap *wrapper = ObjectWrap::Unwrap<VtkVolumeReaderWrap>(info.Holder());
	vtkVolumeReader *native = (vtkVolumeReader *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetFilePattern();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkVolumeReaderWrap::GetFilePrefix(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkVolumeReaderWrap *wrapper = ObjectWrap::Unwrap<VtkVolumeReaderWrap>(info.Holder());
	vtkVolumeReader *native = (vtkVolumeReader *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetFilePrefix();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkVolumeReaderWrap::GetImage(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkVolumeReaderWrap *wrapper = ObjectWrap::Unwrap<VtkVolumeReaderWrap>(info.Holder());
	vtkVolumeReader *native = (vtkVolumeReader *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		vtkImageData * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->GetImage(
			info[0]->Int32Value()
		);
			VtkImageDataWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkImageDataWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkImageDataWrap *w = new VtkImageDataWrap();
		w->native = r;
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkVolumeReaderWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkVolumeReaderWrap *wrapper = ObjectWrap::Unwrap<VtkVolumeReaderWrap>(info.Holder());
	vtkVolumeReader *native = (vtkVolumeReader *)wrapper->native.GetPointer();
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

void VtkVolumeReaderWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkVolumeReaderWrap *wrapper = ObjectWrap::Unwrap<VtkVolumeReaderWrap>(info.Holder());
	vtkVolumeReader *native = (vtkVolumeReader *)wrapper->native.GetPointer();
	vtkVolumeReader * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
		VtkVolumeReaderWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkVolumeReaderWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkVolumeReaderWrap *w = new VtkVolumeReaderWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkVolumeReaderWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkVolumeReaderWrap *wrapper = ObjectWrap::Unwrap<VtkVolumeReaderWrap>(info.Holder());
	vtkVolumeReader *native = (vtkVolumeReader *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkVolumeReader * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObject *) a0->native.GetPointer()
		);
			VtkVolumeReaderWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkVolumeReaderWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkVolumeReaderWrap *w = new VtkVolumeReaderWrap();
		w->native = r;
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkVolumeReaderWrap::SetDataOrigin(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkVolumeReaderWrap *wrapper = ObjectWrap::Unwrap<VtkVolumeReaderWrap>(info.Holder());
	vtkVolumeReader *native = (vtkVolumeReader *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsNumber())
	{
		if(info.Length() > 1 && info[1]->IsNumber())
		{
			if(info.Length() > 2 && info[2]->IsNumber())
			{
				if(info.Length() != 3)
				{
					Nan::ThrowError("Too many parameters.");
					return;
				}
				native->SetDataOrigin(
					info[0]->NumberValue(),
					info[1]->NumberValue(),
					info[2]->NumberValue()
				);
				return;
			}
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkVolumeReaderWrap::SetDataSpacing(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkVolumeReaderWrap *wrapper = ObjectWrap::Unwrap<VtkVolumeReaderWrap>(info.Holder());
	vtkVolumeReader *native = (vtkVolumeReader *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsNumber())
	{
		if(info.Length() > 1 && info[1]->IsNumber())
		{
			if(info.Length() > 2 && info[2]->IsNumber())
			{
				if(info.Length() != 3)
				{
					Nan::ThrowError("Too many parameters.");
					return;
				}
				native->SetDataSpacing(
					info[0]->NumberValue(),
					info[1]->NumberValue(),
					info[2]->NumberValue()
				);
				return;
			}
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkVolumeReaderWrap::SetFilePattern(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkVolumeReaderWrap *wrapper = ObjectWrap::Unwrap<VtkVolumeReaderWrap>(info.Holder());
	vtkVolumeReader *native = (vtkVolumeReader *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsString())
	{
		Nan::Utf8String a0(info[0]);
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetFilePattern(
			*a0
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkVolumeReaderWrap::SetFilePrefix(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkVolumeReaderWrap *wrapper = ObjectWrap::Unwrap<VtkVolumeReaderWrap>(info.Holder());
	vtkVolumeReader *native = (vtkVolumeReader *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsString())
	{
		Nan::Utf8String a0(info[0]);
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetFilePrefix(
			*a0
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkVolumeReaderWrap::SetImageRange(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkVolumeReaderWrap *wrapper = ObjectWrap::Unwrap<VtkVolumeReaderWrap>(info.Holder());
	vtkVolumeReader *native = (vtkVolumeReader *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() > 1 && info[1]->IsInt32())
		{
			if(info.Length() != 2)
			{
				Nan::ThrowError("Too many parameters.");
				return;
			}
			native->SetImageRange(
				info[0]->Int32Value(),
				info[1]->Int32Value()
			);
			return;
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

