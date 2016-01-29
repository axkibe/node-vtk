/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkAbstractPickerWrap.h"
#include "vtkAbstractPropPickerWrap.h"
#include "vtkObjectWrap.h"
#include "vtkAssemblyPathWrap.h"
#include "vtkPropWrap.h"
#include "vtkProp3DWrap.h"
#include "vtkActorWrap.h"
#include "vtkActor2DWrap.h"
#include "vtkVolumeWrap.h"
#include "vtkAssemblyWrap.h"
#include "vtkPropAssemblyWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkAbstractPropPickerWrap::ptpl;

VtkAbstractPropPickerWrap::VtkAbstractPropPickerWrap()
{ }

VtkAbstractPropPickerWrap::VtkAbstractPropPickerWrap(vtkSmartPointer<vtkAbstractPropPicker> _native)
{ native = _native; }

VtkAbstractPropPickerWrap::~VtkAbstractPropPickerWrap()
{ }

void VtkAbstractPropPickerWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkAbstractPropPicker").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("AbstractPropPicker").ToLocalChecked(), ConstructorGetter);
}

void VtkAbstractPropPickerWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkAbstractPropPickerWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkAbstractPickerWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkAbstractPickerWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkAbstractPropPickerWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "GetActor", GetActor);
	Nan::SetPrototypeMethod(tpl, "getActor", GetActor);

	Nan::SetPrototypeMethod(tpl, "GetActor2D", GetActor2D);
	Nan::SetPrototypeMethod(tpl, "getActor2D", GetActor2D);

	Nan::SetPrototypeMethod(tpl, "GetAssembly", GetAssembly);
	Nan::SetPrototypeMethod(tpl, "getAssembly", GetAssembly);

	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "GetPath", GetPath);
	Nan::SetPrototypeMethod(tpl, "getPath", GetPath);

	Nan::SetPrototypeMethod(tpl, "GetProp3D", GetProp3D);
	Nan::SetPrototypeMethod(tpl, "getProp3D", GetProp3D);

	Nan::SetPrototypeMethod(tpl, "GetPropAssembly", GetPropAssembly);
	Nan::SetPrototypeMethod(tpl, "getPropAssembly", GetPropAssembly);

	Nan::SetPrototypeMethod(tpl, "GetViewProp", GetViewProp);
	Nan::SetPrototypeMethod(tpl, "getViewProp", GetViewProp);

	Nan::SetPrototypeMethod(tpl, "GetVolume", GetVolume);
	Nan::SetPrototypeMethod(tpl, "getVolume", GetVolume);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetPath", SetPath);
	Nan::SetPrototypeMethod(tpl, "setPath", SetPath);

	ptpl.Reset( tpl );
}

void VtkAbstractPropPickerWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
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

void VtkAbstractPropPickerWrap::GetActor(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAbstractPropPickerWrap *wrapper = ObjectWrap::Unwrap<VtkAbstractPropPickerWrap>(info.Holder());
	vtkAbstractPropPicker *native = (vtkAbstractPropPicker *)wrapper->native.GetPointer();
	vtkActor * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetActor();
		VtkActorWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkActorWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkActorWrap *w = new VtkActorWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkAbstractPropPickerWrap::GetActor2D(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAbstractPropPickerWrap *wrapper = ObjectWrap::Unwrap<VtkAbstractPropPickerWrap>(info.Holder());
	vtkAbstractPropPicker *native = (vtkAbstractPropPicker *)wrapper->native.GetPointer();
	vtkActor2D * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetActor2D();
		VtkActor2DWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkActor2DWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkActor2DWrap *w = new VtkActor2DWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkAbstractPropPickerWrap::GetAssembly(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAbstractPropPickerWrap *wrapper = ObjectWrap::Unwrap<VtkAbstractPropPickerWrap>(info.Holder());
	vtkAbstractPropPicker *native = (vtkAbstractPropPicker *)wrapper->native.GetPointer();
	vtkAssembly * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetAssembly();
		VtkAssemblyWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkAssemblyWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkAssemblyWrap *w = new VtkAssemblyWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkAbstractPropPickerWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAbstractPropPickerWrap *wrapper = ObjectWrap::Unwrap<VtkAbstractPropPickerWrap>(info.Holder());
	vtkAbstractPropPicker *native = (vtkAbstractPropPicker *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkAbstractPropPickerWrap::GetPath(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAbstractPropPickerWrap *wrapper = ObjectWrap::Unwrap<VtkAbstractPropPickerWrap>(info.Holder());
	vtkAbstractPropPicker *native = (vtkAbstractPropPicker *)wrapper->native.GetPointer();
	vtkAssemblyPath * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetPath();
		VtkAssemblyPathWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkAssemblyPathWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkAssemblyPathWrap *w = new VtkAssemblyPathWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkAbstractPropPickerWrap::GetProp3D(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAbstractPropPickerWrap *wrapper = ObjectWrap::Unwrap<VtkAbstractPropPickerWrap>(info.Holder());
	vtkAbstractPropPicker *native = (vtkAbstractPropPicker *)wrapper->native.GetPointer();
	vtkProp3D * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetProp3D();
		VtkProp3DWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkProp3DWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkProp3DWrap *w = new VtkProp3DWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkAbstractPropPickerWrap::GetPropAssembly(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAbstractPropPickerWrap *wrapper = ObjectWrap::Unwrap<VtkAbstractPropPickerWrap>(info.Holder());
	vtkAbstractPropPicker *native = (vtkAbstractPropPicker *)wrapper->native.GetPointer();
	vtkPropAssembly * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetPropAssembly();
		VtkPropAssemblyWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkPropAssemblyWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkPropAssemblyWrap *w = new VtkPropAssemblyWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkAbstractPropPickerWrap::GetViewProp(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAbstractPropPickerWrap *wrapper = ObjectWrap::Unwrap<VtkAbstractPropPickerWrap>(info.Holder());
	vtkAbstractPropPicker *native = (vtkAbstractPropPicker *)wrapper->native.GetPointer();
	vtkProp * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetViewProp();
		VtkPropWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkPropWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkPropWrap *w = new VtkPropWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkAbstractPropPickerWrap::GetVolume(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAbstractPropPickerWrap *wrapper = ObjectWrap::Unwrap<VtkAbstractPropPickerWrap>(info.Holder());
	vtkAbstractPropPicker *native = (vtkAbstractPropPicker *)wrapper->native.GetPointer();
	vtkVolume * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetVolume();
		VtkVolumeWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkVolumeWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkVolumeWrap *w = new VtkVolumeWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkAbstractPropPickerWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAbstractPropPickerWrap *wrapper = ObjectWrap::Unwrap<VtkAbstractPropPickerWrap>(info.Holder());
	vtkAbstractPropPicker *native = (vtkAbstractPropPicker *)wrapper->native.GetPointer();
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

void VtkAbstractPropPickerWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAbstractPropPickerWrap *wrapper = ObjectWrap::Unwrap<VtkAbstractPropPickerWrap>(info.Holder());
	vtkAbstractPropPicker *native = (vtkAbstractPropPicker *)wrapper->native.GetPointer();
	vtkAbstractPropPicker * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
		VtkAbstractPropPickerWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkAbstractPropPickerWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkAbstractPropPickerWrap *w = new VtkAbstractPropPickerWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkAbstractPropPickerWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAbstractPropPickerWrap *wrapper = ObjectWrap::Unwrap<VtkAbstractPropPickerWrap>(info.Holder());
	vtkAbstractPropPicker *native = (vtkAbstractPropPicker *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkAbstractPropPicker * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObject *) a0->native.GetPointer()
		);
			VtkAbstractPropPickerWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkAbstractPropPickerWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkAbstractPropPickerWrap *w = new VtkAbstractPropPickerWrap();
		w->native = r;
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkAbstractPropPickerWrap::SetPath(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAbstractPropPickerWrap *wrapper = ObjectWrap::Unwrap<VtkAbstractPropPickerWrap>(info.Holder());
	vtkAbstractPropPicker *native = (vtkAbstractPropPicker *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkAssemblyPathWrap::ptpl))->HasInstance(info[0]))
	{
		VtkAssemblyPathWrap *a0 = ObjectWrap::Unwrap<VtkAssemblyPathWrap>(info[0]->ToObject());
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetPath(
			(vtkAssemblyPath *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

