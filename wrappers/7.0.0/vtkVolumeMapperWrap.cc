/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>

#include "vtkAbstractVolumeMapperWrap.h"
#include "vtkVolumeMapperWrap.h"
#include "vtkObjectWrap.h"
#include "vtkImageDataWrap.h"
#include "vtkDataSetWrap.h"
#include "vtkWindowWrap.h"
#include "../../plus/plus.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkVolumeMapperWrap::ptpl;

VtkVolumeMapperWrap::VtkVolumeMapperWrap()
{ }

VtkVolumeMapperWrap::VtkVolumeMapperWrap(vtkSmartPointer<vtkVolumeMapper> _native)
{ native = _native; }

VtkVolumeMapperWrap::~VtkVolumeMapperWrap()
{ }

void VtkVolumeMapperWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkVolumeMapper").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("VolumeMapper").ToLocalChecked(), ConstructorGetter);
}

void VtkVolumeMapperWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkVolumeMapperWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkAbstractVolumeMapperWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkAbstractVolumeMapperWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkVolumeMapperWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "CroppingOff", CroppingOff);
	Nan::SetPrototypeMethod(tpl, "croppingOff", CroppingOff);

	Nan::SetPrototypeMethod(tpl, "CroppingOn", CroppingOn);
	Nan::SetPrototypeMethod(tpl, "croppingOn", CroppingOn);

	Nan::SetPrototypeMethod(tpl, "GetBlendMode", GetBlendMode);
	Nan::SetPrototypeMethod(tpl, "getBlendMode", GetBlendMode);

	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "GetCropping", GetCropping);
	Nan::SetPrototypeMethod(tpl, "getCropping", GetCropping);

	Nan::SetPrototypeMethod(tpl, "GetCroppingMaxValue", GetCroppingMaxValue);
	Nan::SetPrototypeMethod(tpl, "getCroppingMaxValue", GetCroppingMaxValue);

	Nan::SetPrototypeMethod(tpl, "GetCroppingMinValue", GetCroppingMinValue);
	Nan::SetPrototypeMethod(tpl, "getCroppingMinValue", GetCroppingMinValue);

	Nan::SetPrototypeMethod(tpl, "GetCroppingRegionFlags", GetCroppingRegionFlags);
	Nan::SetPrototypeMethod(tpl, "getCroppingRegionFlags", GetCroppingRegionFlags);

	Nan::SetPrototypeMethod(tpl, "GetCroppingRegionFlagsMaxValue", GetCroppingRegionFlagsMaxValue);
	Nan::SetPrototypeMethod(tpl, "getCroppingRegionFlagsMaxValue", GetCroppingRegionFlagsMaxValue);

	Nan::SetPrototypeMethod(tpl, "GetCroppingRegionFlagsMinValue", GetCroppingRegionFlagsMinValue);
	Nan::SetPrototypeMethod(tpl, "getCroppingRegionFlagsMinValue", GetCroppingRegionFlagsMinValue);

	Nan::SetPrototypeMethod(tpl, "GetCroppingRegionPlanes", GetCroppingRegionPlanes);
	Nan::SetPrototypeMethod(tpl, "getCroppingRegionPlanes", GetCroppingRegionPlanes);

	Nan::SetPrototypeMethod(tpl, "GetInput", GetInput);
	Nan::SetPrototypeMethod(tpl, "getInput", GetInput);

	Nan::SetPrototypeMethod(tpl, "GetVoxelCroppingRegionPlanes", GetVoxelCroppingRegionPlanes);
	Nan::SetPrototypeMethod(tpl, "getVoxelCroppingRegionPlanes", GetVoxelCroppingRegionPlanes);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "ReleaseGraphicsResources", ReleaseGraphicsResources);
	Nan::SetPrototypeMethod(tpl, "releaseGraphicsResources", ReleaseGraphicsResources);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetBlendMode", SetBlendMode);
	Nan::SetPrototypeMethod(tpl, "setBlendMode", SetBlendMode);

	Nan::SetPrototypeMethod(tpl, "SetBlendModeToAdditive", SetBlendModeToAdditive);
	Nan::SetPrototypeMethod(tpl, "setBlendModeToAdditive", SetBlendModeToAdditive);

	Nan::SetPrototypeMethod(tpl, "SetBlendModeToComposite", SetBlendModeToComposite);
	Nan::SetPrototypeMethod(tpl, "setBlendModeToComposite", SetBlendModeToComposite);

	Nan::SetPrototypeMethod(tpl, "SetBlendModeToMaximumIntensity", SetBlendModeToMaximumIntensity);
	Nan::SetPrototypeMethod(tpl, "setBlendModeToMaximumIntensity", SetBlendModeToMaximumIntensity);

	Nan::SetPrototypeMethod(tpl, "SetBlendModeToMinimumIntensity", SetBlendModeToMinimumIntensity);
	Nan::SetPrototypeMethod(tpl, "setBlendModeToMinimumIntensity", SetBlendModeToMinimumIntensity);

	Nan::SetPrototypeMethod(tpl, "SetCropping", SetCropping);
	Nan::SetPrototypeMethod(tpl, "setCropping", SetCropping);

	Nan::SetPrototypeMethod(tpl, "SetCroppingRegionFlags", SetCroppingRegionFlags);
	Nan::SetPrototypeMethod(tpl, "setCroppingRegionFlags", SetCroppingRegionFlags);

	Nan::SetPrototypeMethod(tpl, "SetCroppingRegionFlagsToCross", SetCroppingRegionFlagsToCross);
	Nan::SetPrototypeMethod(tpl, "setCroppingRegionFlagsToCross", SetCroppingRegionFlagsToCross);

	Nan::SetPrototypeMethod(tpl, "SetCroppingRegionFlagsToFence", SetCroppingRegionFlagsToFence);
	Nan::SetPrototypeMethod(tpl, "setCroppingRegionFlagsToFence", SetCroppingRegionFlagsToFence);

	Nan::SetPrototypeMethod(tpl, "SetCroppingRegionFlagsToInvertedCross", SetCroppingRegionFlagsToInvertedCross);
	Nan::SetPrototypeMethod(tpl, "setCroppingRegionFlagsToInvertedCross", SetCroppingRegionFlagsToInvertedCross);

	Nan::SetPrototypeMethod(tpl, "SetCroppingRegionFlagsToInvertedFence", SetCroppingRegionFlagsToInvertedFence);
	Nan::SetPrototypeMethod(tpl, "setCroppingRegionFlagsToInvertedFence", SetCroppingRegionFlagsToInvertedFence);

	Nan::SetPrototypeMethod(tpl, "SetCroppingRegionFlagsToSubVolume", SetCroppingRegionFlagsToSubVolume);
	Nan::SetPrototypeMethod(tpl, "setCroppingRegionFlagsToSubVolume", SetCroppingRegionFlagsToSubVolume);

	Nan::SetPrototypeMethod(tpl, "SetCroppingRegionPlanes", SetCroppingRegionPlanes);
	Nan::SetPrototypeMethod(tpl, "setCroppingRegionPlanes", SetCroppingRegionPlanes);

	Nan::SetPrototypeMethod(tpl, "SetInputData", SetInputData);
	Nan::SetPrototypeMethod(tpl, "setInputData", SetInputData);

#ifdef VTK_NODE_PLUS_VTKVOLUMEMAPPERWRAP_INITPTPL
	VTK_NODE_PLUS_VTKVOLUMEMAPPERWRAP_INITPTPL
#endif
	ptpl.Reset( tpl );
}

void VtkVolumeMapperWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
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

void VtkVolumeMapperWrap::CroppingOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkVolumeMapperWrap *wrapper = ObjectWrap::Unwrap<VtkVolumeMapperWrap>(info.Holder());
	vtkVolumeMapper *native = (vtkVolumeMapper *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->CroppingOff();
}

void VtkVolumeMapperWrap::CroppingOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkVolumeMapperWrap *wrapper = ObjectWrap::Unwrap<VtkVolumeMapperWrap>(info.Holder());
	vtkVolumeMapper *native = (vtkVolumeMapper *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->CroppingOn();
}

void VtkVolumeMapperWrap::GetBlendMode(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkVolumeMapperWrap *wrapper = ObjectWrap::Unwrap<VtkVolumeMapperWrap>(info.Holder());
	vtkVolumeMapper *native = (vtkVolumeMapper *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetBlendMode();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkVolumeMapperWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkVolumeMapperWrap *wrapper = ObjectWrap::Unwrap<VtkVolumeMapperWrap>(info.Holder());
	vtkVolumeMapper *native = (vtkVolumeMapper *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkVolumeMapperWrap::GetCropping(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkVolumeMapperWrap *wrapper = ObjectWrap::Unwrap<VtkVolumeMapperWrap>(info.Holder());
	vtkVolumeMapper *native = (vtkVolumeMapper *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetCropping();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkVolumeMapperWrap::GetCroppingMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkVolumeMapperWrap *wrapper = ObjectWrap::Unwrap<VtkVolumeMapperWrap>(info.Holder());
	vtkVolumeMapper *native = (vtkVolumeMapper *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetCroppingMaxValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkVolumeMapperWrap::GetCroppingMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkVolumeMapperWrap *wrapper = ObjectWrap::Unwrap<VtkVolumeMapperWrap>(info.Holder());
	vtkVolumeMapper *native = (vtkVolumeMapper *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetCroppingMinValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkVolumeMapperWrap::GetCroppingRegionFlags(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkVolumeMapperWrap *wrapper = ObjectWrap::Unwrap<VtkVolumeMapperWrap>(info.Holder());
	vtkVolumeMapper *native = (vtkVolumeMapper *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetCroppingRegionFlags();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkVolumeMapperWrap::GetCroppingRegionFlagsMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkVolumeMapperWrap *wrapper = ObjectWrap::Unwrap<VtkVolumeMapperWrap>(info.Holder());
	vtkVolumeMapper *native = (vtkVolumeMapper *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetCroppingRegionFlagsMaxValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkVolumeMapperWrap::GetCroppingRegionFlagsMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkVolumeMapperWrap *wrapper = ObjectWrap::Unwrap<VtkVolumeMapperWrap>(info.Holder());
	vtkVolumeMapper *native = (vtkVolumeMapper *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetCroppingRegionFlagsMinValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkVolumeMapperWrap::GetCroppingRegionPlanes(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkVolumeMapperWrap *wrapper = ObjectWrap::Unwrap<VtkVolumeMapperWrap>(info.Holder());
	vtkVolumeMapper *native = (vtkVolumeMapper *)wrapper->native.GetPointer();
	double const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetCroppingRegionPlanes();
	Local<v8::ArrayBuffer> ab = v8::ArrayBuffer::New(v8::Isolate::GetCurrent(), 6 * sizeof(double));
	Local<v8::Float64Array> at = v8::Float64Array::New(ab, 0, 6);
	memcpy(ab->GetContents().Data(), r, 6 * sizeof(double));
	info.GetReturnValue().Set(at);
}

void VtkVolumeMapperWrap::GetInput(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkVolumeMapperWrap *wrapper = ObjectWrap::Unwrap<VtkVolumeMapperWrap>(info.Holder());
	vtkVolumeMapper *native = (vtkVolumeMapper *)wrapper->native.GetPointer();
	vtkImageData * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetInput();
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
}

void VtkVolumeMapperWrap::GetVoxelCroppingRegionPlanes(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkVolumeMapperWrap *wrapper = ObjectWrap::Unwrap<VtkVolumeMapperWrap>(info.Holder());
	vtkVolumeMapper *native = (vtkVolumeMapper *)wrapper->native.GetPointer();
	double const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetVoxelCroppingRegionPlanes();
	Local<v8::ArrayBuffer> ab = v8::ArrayBuffer::New(v8::Isolate::GetCurrent(), 6 * sizeof(double));
	Local<v8::Float64Array> at = v8::Float64Array::New(ab, 0, 6);
	memcpy(ab->GetContents().Data(), r, 6 * sizeof(double));
	info.GetReturnValue().Set(at);
}

void VtkVolumeMapperWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkVolumeMapperWrap *wrapper = ObjectWrap::Unwrap<VtkVolumeMapperWrap>(info.Holder());
	vtkVolumeMapper *native = (vtkVolumeMapper *)wrapper->native.GetPointer();
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

void VtkVolumeMapperWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkVolumeMapperWrap *wrapper = ObjectWrap::Unwrap<VtkVolumeMapperWrap>(info.Holder());
	vtkVolumeMapper *native = (vtkVolumeMapper *)wrapper->native.GetPointer();
	vtkVolumeMapper * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
	VtkVolumeMapperWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkVolumeMapperWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkVolumeMapperWrap *w = new VtkVolumeMapperWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkVolumeMapperWrap::ReleaseGraphicsResources(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkVolumeMapperWrap *wrapper = ObjectWrap::Unwrap<VtkVolumeMapperWrap>(info.Holder());
	vtkVolumeMapper *native = (vtkVolumeMapper *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkWindowWrap::ptpl))->HasInstance(info[0]))
	{
		VtkWindowWrap *a0 = ObjectWrap::Unwrap<VtkWindowWrap>(info[0]->ToObject());
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->ReleaseGraphicsResources(
			(vtkWindow *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkVolumeMapperWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkVolumeMapperWrap *wrapper = ObjectWrap::Unwrap<VtkVolumeMapperWrap>(info.Holder());
	vtkVolumeMapper *native = (vtkVolumeMapper *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkVolumeMapper * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObject *) a0->native.GetPointer()
		);
		VtkVolumeMapperWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkVolumeMapperWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkVolumeMapperWrap *w = new VtkVolumeMapperWrap();
		w->native = r;
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkVolumeMapperWrap::SetBlendMode(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkVolumeMapperWrap *wrapper = ObjectWrap::Unwrap<VtkVolumeMapperWrap>(info.Holder());
	vtkVolumeMapper *native = (vtkVolumeMapper *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetBlendMode(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkVolumeMapperWrap::SetBlendModeToAdditive(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkVolumeMapperWrap *wrapper = ObjectWrap::Unwrap<VtkVolumeMapperWrap>(info.Holder());
	vtkVolumeMapper *native = (vtkVolumeMapper *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->SetBlendModeToAdditive();
}

void VtkVolumeMapperWrap::SetBlendModeToComposite(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkVolumeMapperWrap *wrapper = ObjectWrap::Unwrap<VtkVolumeMapperWrap>(info.Holder());
	vtkVolumeMapper *native = (vtkVolumeMapper *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->SetBlendModeToComposite();
}

void VtkVolumeMapperWrap::SetBlendModeToMaximumIntensity(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkVolumeMapperWrap *wrapper = ObjectWrap::Unwrap<VtkVolumeMapperWrap>(info.Holder());
	vtkVolumeMapper *native = (vtkVolumeMapper *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->SetBlendModeToMaximumIntensity();
}

void VtkVolumeMapperWrap::SetBlendModeToMinimumIntensity(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkVolumeMapperWrap *wrapper = ObjectWrap::Unwrap<VtkVolumeMapperWrap>(info.Holder());
	vtkVolumeMapper *native = (vtkVolumeMapper *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->SetBlendModeToMinimumIntensity();
}

void VtkVolumeMapperWrap::SetCropping(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkVolumeMapperWrap *wrapper = ObjectWrap::Unwrap<VtkVolumeMapperWrap>(info.Holder());
	vtkVolumeMapper *native = (vtkVolumeMapper *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetCropping(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkVolumeMapperWrap::SetCroppingRegionFlags(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkVolumeMapperWrap *wrapper = ObjectWrap::Unwrap<VtkVolumeMapperWrap>(info.Holder());
	vtkVolumeMapper *native = (vtkVolumeMapper *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetCroppingRegionFlags(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkVolumeMapperWrap::SetCroppingRegionFlagsToCross(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkVolumeMapperWrap *wrapper = ObjectWrap::Unwrap<VtkVolumeMapperWrap>(info.Holder());
	vtkVolumeMapper *native = (vtkVolumeMapper *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->SetCroppingRegionFlagsToCross();
}

void VtkVolumeMapperWrap::SetCroppingRegionFlagsToFence(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkVolumeMapperWrap *wrapper = ObjectWrap::Unwrap<VtkVolumeMapperWrap>(info.Holder());
	vtkVolumeMapper *native = (vtkVolumeMapper *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->SetCroppingRegionFlagsToFence();
}

void VtkVolumeMapperWrap::SetCroppingRegionFlagsToInvertedCross(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkVolumeMapperWrap *wrapper = ObjectWrap::Unwrap<VtkVolumeMapperWrap>(info.Holder());
	vtkVolumeMapper *native = (vtkVolumeMapper *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->SetCroppingRegionFlagsToInvertedCross();
}

void VtkVolumeMapperWrap::SetCroppingRegionFlagsToInvertedFence(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkVolumeMapperWrap *wrapper = ObjectWrap::Unwrap<VtkVolumeMapperWrap>(info.Holder());
	vtkVolumeMapper *native = (vtkVolumeMapper *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->SetCroppingRegionFlagsToInvertedFence();
}

void VtkVolumeMapperWrap::SetCroppingRegionFlagsToSubVolume(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkVolumeMapperWrap *wrapper = ObjectWrap::Unwrap<VtkVolumeMapperWrap>(info.Holder());
	vtkVolumeMapper *native = (vtkVolumeMapper *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->SetCroppingRegionFlagsToSubVolume();
}

void VtkVolumeMapperWrap::SetCroppingRegionPlanes(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkVolumeMapperWrap *wrapper = ObjectWrap::Unwrap<VtkVolumeMapperWrap>(info.Holder());
	vtkVolumeMapper *native = (vtkVolumeMapper *)wrapper->native.GetPointer();
	size_t i;
	if(info.Length() > 0 && info[0]->IsFloat64Array())
	{
		v8::Local<v8::Float64Array>a0(v8::Local<v8::Float64Array>::Cast(info[0]->ToObject()));
		if( a0->Length() < 6 )
		{
			Nan::ThrowError("Array too short.");
			return;
		}

				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetCroppingRegionPlanes(
			(double *)(a0->Buffer()->GetContents().Data())
		);
		return;
	}
	else if(info.Length() > 0 && info[0]->IsArray())
	{
		v8::Local<v8::Array>a0(v8::Local<v8::Array>::Cast(info[0]->ToObject()));
		double b0[6];
		if( a0->Length() < 6 )
		{
			Nan::ThrowError("Array too short.");
			return;
		}

		for( i = 0; i < 6; i++ )
		{
			if( !a0->Get(i)->IsNumber() )
			{
				Nan::ThrowError("Array contents invalid.");
				return;
			}
			b0[i] = a0->Get(i)->NumberValue();
		}
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetCroppingRegionPlanes(
			b0
		);
		return;
	}
	else if(info.Length() > 0 && info[0]->IsNumber())
	{
		if(info.Length() > 1 && info[1]->IsNumber())
		{
			if(info.Length() > 2 && info[2]->IsNumber())
			{
				if(info.Length() > 3 && info[3]->IsNumber())
				{
					if(info.Length() > 4 && info[4]->IsNumber())
					{
						if(info.Length() > 5 && info[5]->IsNumber())
						{
														if(info.Length() != 6)
							{
								Nan::ThrowError("Too many parameters.");
								return;
							}
							native->SetCroppingRegionPlanes(
								info[0]->NumberValue(),
								info[1]->NumberValue(),
								info[2]->NumberValue(),
								info[3]->NumberValue(),
								info[4]->NumberValue(),
								info[5]->NumberValue()
							);
							return;
						}
					}
				}
			}
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkVolumeMapperWrap::SetInputData(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkVolumeMapperWrap *wrapper = ObjectWrap::Unwrap<VtkVolumeMapperWrap>(info.Holder());
	vtkVolumeMapper *native = (vtkVolumeMapper *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkDataSetWrap::ptpl))->HasInstance(info[0]))
	{
		VtkDataSetWrap *a0 = ObjectWrap::Unwrap<VtkDataSetWrap>(info[0]->ToObject());
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetInputData(
			(vtkDataSet *) a0->native.GetPointer()
		);
		return;
	}
	else if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkImageDataWrap::ptpl))->HasInstance(info[0]))
	{
		VtkImageDataWrap *a0 = ObjectWrap::Unwrap<VtkImageDataWrap>(info[0]->ToObject());
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetInputData(
			(vtkImageData *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

