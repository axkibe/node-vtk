/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>

#include "vtkCellPickerWrap.h"
#include "vtkVolumePickerWrap.h"
#include "vtkObjectBaseWrap.h"
#include "../../plus/plus.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkVolumePickerWrap::ptpl;

VtkVolumePickerWrap::VtkVolumePickerWrap()
{ }

VtkVolumePickerWrap::VtkVolumePickerWrap(vtkSmartPointer<vtkVolumePicker> _native)
{ native = _native; }

VtkVolumePickerWrap::~VtkVolumePickerWrap()
{ }

void VtkVolumePickerWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkVolumePicker").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("VolumePicker").ToLocalChecked(), ConstructorGetter);
}

void VtkVolumePickerWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkVolumePickerWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkCellPickerWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkCellPickerWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkVolumePickerWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "GetCroppingPlaneId", GetCroppingPlaneId);
	Nan::SetPrototypeMethod(tpl, "getCroppingPlaneId", GetCroppingPlaneId);

	Nan::SetPrototypeMethod(tpl, "GetPickCroppingPlanes", GetPickCroppingPlanes);
	Nan::SetPrototypeMethod(tpl, "getPickCroppingPlanes", GetPickCroppingPlanes);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "PickCroppingPlanesOff", PickCroppingPlanesOff);
	Nan::SetPrototypeMethod(tpl, "pickCroppingPlanesOff", PickCroppingPlanesOff);

	Nan::SetPrototypeMethod(tpl, "PickCroppingPlanesOn", PickCroppingPlanesOn);
	Nan::SetPrototypeMethod(tpl, "pickCroppingPlanesOn", PickCroppingPlanesOn);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetPickCroppingPlanes", SetPickCroppingPlanes);
	Nan::SetPrototypeMethod(tpl, "setPickCroppingPlanes", SetPickCroppingPlanes);

#ifdef VTK_NODE_PLUS_VTKVOLUMEPICKERWRAP_INITPTPL
	VTK_NODE_PLUS_VTKVOLUMEPICKERWRAP_INITPTPL
#endif
	ptpl.Reset( tpl );
}

void VtkVolumePickerWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkVolumePicker> native = vtkSmartPointer<vtkVolumePicker>::New();
		VtkVolumePickerWrap* obj = new VtkVolumePickerWrap(native);
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

void VtkVolumePickerWrap::GetCroppingPlaneId(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkVolumePickerWrap *wrapper = ObjectWrap::Unwrap<VtkVolumePickerWrap>(info.Holder());
	vtkVolumePicker *native = (vtkVolumePicker *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetCroppingPlaneId();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkVolumePickerWrap::GetPickCroppingPlanes(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkVolumePickerWrap *wrapper = ObjectWrap::Unwrap<VtkVolumePickerWrap>(info.Holder());
	vtkVolumePicker *native = (vtkVolumePicker *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetPickCroppingPlanes();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkVolumePickerWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkVolumePickerWrap *wrapper = ObjectWrap::Unwrap<VtkVolumePickerWrap>(info.Holder());
	vtkVolumePicker *native = (vtkVolumePicker *)wrapper->native.GetPointer();
	vtkVolumePicker * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
	VtkVolumePickerWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkVolumePickerWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkVolumePickerWrap *w = new VtkVolumePickerWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkVolumePickerWrap::PickCroppingPlanesOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkVolumePickerWrap *wrapper = ObjectWrap::Unwrap<VtkVolumePickerWrap>(info.Holder());
	vtkVolumePicker *native = (vtkVolumePicker *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->PickCroppingPlanesOff();
}

void VtkVolumePickerWrap::PickCroppingPlanesOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkVolumePickerWrap *wrapper = ObjectWrap::Unwrap<VtkVolumePickerWrap>(info.Holder());
	vtkVolumePicker *native = (vtkVolumePicker *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->PickCroppingPlanesOn();
}

void VtkVolumePickerWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkVolumePickerWrap *wrapper = ObjectWrap::Unwrap<VtkVolumePickerWrap>(info.Holder());
	vtkVolumePicker *native = (vtkVolumePicker *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectBaseWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectBaseWrap *a0 = ObjectWrap::Unwrap<VtkObjectBaseWrap>(info[0]->ToObject());
		vtkVolumePicker * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObjectBase *) a0->native.GetPointer()
		);
		VtkVolumePickerWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkVolumePickerWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkVolumePickerWrap *w = new VtkVolumePickerWrap();
		w->native = r;
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkVolumePickerWrap::SetPickCroppingPlanes(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkVolumePickerWrap *wrapper = ObjectWrap::Unwrap<VtkVolumePickerWrap>(info.Holder());
	vtkVolumePicker *native = (vtkVolumePicker *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetPickCroppingPlanes(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

