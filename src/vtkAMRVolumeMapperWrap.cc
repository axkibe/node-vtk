/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkVolumeMapperWrap.h"
#include "vtkAMRVolumeMapperWrap.h"
#include "vtkObjectWrap.h"
#include "vtkImageDataWrap.h"
#include "vtkDataSetWrap.h"
#include "vtkOverlappingAMRWrap.h"
#include "vtkAlgorithmOutputWrap.h"
#include "vtkRendererWrap.h"
#include "vtkVolumeWrap.h"
#include "vtkWindowWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::Function> VtkAMRVolumeMapperWrap::constructor;

VtkAMRVolumeMapperWrap::VtkAMRVolumeMapperWrap()
{ }

VtkAMRVolumeMapperWrap::VtkAMRVolumeMapperWrap(vtkSmartPointer<vtkAMRVolumeMapper> _native)
{ native = _native; }

VtkAMRVolumeMapperWrap::~VtkAMRVolumeMapperWrap()
{ }

void VtkAMRVolumeMapperWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::HandleScope scope;

	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	tpl->SetClassName(Nan::New("VtkAMRVolumeMapperWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	VtkObjectBaseWrap::InitTpl(tpl);
	VtkObjectWrap::InitTpl(tpl);
	VtkAlgorithmWrap::InitTpl(tpl);
	VtkAbstractMapperWrap::InitTpl(tpl);
	VtkAbstractMapper3DWrap::InitTpl(tpl);
	VtkAbstractVolumeMapperWrap::InitTpl(tpl);
	VtkVolumeMapperWrap::InitTpl(tpl);
	InitTpl(tpl);

	constructor.Reset( tpl->GetFunction() );

	exports->Set(Nan::New("vtkAMRVolumeMapper").ToLocalChecked(),tpl->GetFunction());
	exports->Set(Nan::New("AMRVolumeMapper").ToLocalChecked(),tpl->GetFunction());
}

void VtkAMRVolumeMapperWrap::InitTpl(v8::Local<v8::FunctionTemplate> tpl)
{
	Nan::SetPrototypeMethod(tpl, "GetArrayAccessMode", GetArrayAccessMode);
	Nan::SetPrototypeMethod(tpl, "getArrayAccessMode", GetArrayAccessMode);

	Nan::SetPrototypeMethod(tpl, "GetArrayId", GetArrayId);
	Nan::SetPrototypeMethod(tpl, "getArrayId", GetArrayId);

	Nan::SetPrototypeMethod(tpl, "GetArrayName", GetArrayName);
	Nan::SetPrototypeMethod(tpl, "getArrayName", GetArrayName);

	Nan::SetPrototypeMethod(tpl, "GetBlendMode", GetBlendMode);
	Nan::SetPrototypeMethod(tpl, "getBlendMode", GetBlendMode);

	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "GetCropping", GetCropping);
	Nan::SetPrototypeMethod(tpl, "getCropping", GetCropping);

	Nan::SetPrototypeMethod(tpl, "GetCroppingRegionFlags", GetCroppingRegionFlags);
	Nan::SetPrototypeMethod(tpl, "getCroppingRegionFlags", GetCroppingRegionFlags);

	Nan::SetPrototypeMethod(tpl, "GetInteractiveUpdateRate", GetInteractiveUpdateRate);
	Nan::SetPrototypeMethod(tpl, "getInteractiveUpdateRate", GetInteractiveUpdateRate);

	Nan::SetPrototypeMethod(tpl, "GetInterpolationMode", GetInterpolationMode);
	Nan::SetPrototypeMethod(tpl, "getInterpolationMode", GetInterpolationMode);

	Nan::SetPrototypeMethod(tpl, "GetRequestedRenderMode", GetRequestedRenderMode);
	Nan::SetPrototypeMethod(tpl, "getRequestedRenderMode", GetRequestedRenderMode);

	Nan::SetPrototypeMethod(tpl, "GetRequestedResamplingMode", GetRequestedResamplingMode);
	Nan::SetPrototypeMethod(tpl, "getRequestedResamplingMode", GetRequestedResamplingMode);

	Nan::SetPrototypeMethod(tpl, "GetResamplerUpdateTolerance", GetResamplerUpdateTolerance);
	Nan::SetPrototypeMethod(tpl, "getResamplerUpdateTolerance", GetResamplerUpdateTolerance);

	Nan::SetPrototypeMethod(tpl, "GetScalarModeAsString", GetScalarModeAsString);
	Nan::SetPrototypeMethod(tpl, "getScalarModeAsString", GetScalarModeAsString);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "ReleaseGraphicsResources", ReleaseGraphicsResources);
	Nan::SetPrototypeMethod(tpl, "releaseGraphicsResources", ReleaseGraphicsResources);

	Nan::SetPrototypeMethod(tpl, "Render", Render);
	Nan::SetPrototypeMethod(tpl, "render", Render);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SelectScalarArray", SelectScalarArray);
	Nan::SetPrototypeMethod(tpl, "selectScalarArray", SelectScalarArray);

	Nan::SetPrototypeMethod(tpl, "SetBlendMode", SetBlendMode);
	Nan::SetPrototypeMethod(tpl, "setBlendMode", SetBlendMode);

	Nan::SetPrototypeMethod(tpl, "SetCropping", SetCropping);
	Nan::SetPrototypeMethod(tpl, "setCropping", SetCropping);

	Nan::SetPrototypeMethod(tpl, "SetCroppingRegionFlags", SetCroppingRegionFlags);
	Nan::SetPrototypeMethod(tpl, "setCroppingRegionFlags", SetCroppingRegionFlags);

	Nan::SetPrototypeMethod(tpl, "SetCroppingRegionPlanes", SetCroppingRegionPlanes);
	Nan::SetPrototypeMethod(tpl, "setCroppingRegionPlanes", SetCroppingRegionPlanes);

	Nan::SetPrototypeMethod(tpl, "SetInputConnection", SetInputConnection);
	Nan::SetPrototypeMethod(tpl, "setInputConnection", SetInputConnection);

	Nan::SetPrototypeMethod(tpl, "SetInputData", SetInputData);
	Nan::SetPrototypeMethod(tpl, "setInputData", SetInputData);

	Nan::SetPrototypeMethod(tpl, "SetInteractiveUpdateRate", SetInteractiveUpdateRate);
	Nan::SetPrototypeMethod(tpl, "setInteractiveUpdateRate", SetInteractiveUpdateRate);

	Nan::SetPrototypeMethod(tpl, "SetInterpolationMode", SetInterpolationMode);
	Nan::SetPrototypeMethod(tpl, "setInterpolationMode", SetInterpolationMode);

	Nan::SetPrototypeMethod(tpl, "SetInterpolationModeToCubic", SetInterpolationModeToCubic);
	Nan::SetPrototypeMethod(tpl, "setInterpolationModeToCubic", SetInterpolationModeToCubic);

	Nan::SetPrototypeMethod(tpl, "SetInterpolationModeToLinear", SetInterpolationModeToLinear);
	Nan::SetPrototypeMethod(tpl, "setInterpolationModeToLinear", SetInterpolationModeToLinear);

	Nan::SetPrototypeMethod(tpl, "SetInterpolationModeToNearestNeighbor", SetInterpolationModeToNearestNeighbor);
	Nan::SetPrototypeMethod(tpl, "setInterpolationModeToNearestNeighbor", SetInterpolationModeToNearestNeighbor);

	Nan::SetPrototypeMethod(tpl, "SetNumberOfSamples", SetNumberOfSamples);
	Nan::SetPrototypeMethod(tpl, "setNumberOfSamples", SetNumberOfSamples);

	Nan::SetPrototypeMethod(tpl, "SetRequestedRenderMode", SetRequestedRenderMode);
	Nan::SetPrototypeMethod(tpl, "setRequestedRenderMode", SetRequestedRenderMode);

	Nan::SetPrototypeMethod(tpl, "SetRequestedRenderModeToDefault", SetRequestedRenderModeToDefault);
	Nan::SetPrototypeMethod(tpl, "setRequestedRenderModeToDefault", SetRequestedRenderModeToDefault);

	Nan::SetPrototypeMethod(tpl, "SetRequestedRenderModeToGPU", SetRequestedRenderModeToGPU);
	Nan::SetPrototypeMethod(tpl, "setRequestedRenderModeToGPU", SetRequestedRenderModeToGPU);

	Nan::SetPrototypeMethod(tpl, "SetRequestedRenderModeToRayCast", SetRequestedRenderModeToRayCast);
	Nan::SetPrototypeMethod(tpl, "setRequestedRenderModeToRayCast", SetRequestedRenderModeToRayCast);

	Nan::SetPrototypeMethod(tpl, "SetRequestedRenderModeToRayCastAndTexture", SetRequestedRenderModeToRayCastAndTexture);
	Nan::SetPrototypeMethod(tpl, "setRequestedRenderModeToRayCastAndTexture", SetRequestedRenderModeToRayCastAndTexture);

	Nan::SetPrototypeMethod(tpl, "SetRequestedRenderModeToTexture", SetRequestedRenderModeToTexture);
	Nan::SetPrototypeMethod(tpl, "setRequestedRenderModeToTexture", SetRequestedRenderModeToTexture);

	Nan::SetPrototypeMethod(tpl, "SetRequestedResamplingMode", SetRequestedResamplingMode);
	Nan::SetPrototypeMethod(tpl, "setRequestedResamplingMode", SetRequestedResamplingMode);

	Nan::SetPrototypeMethod(tpl, "SetResamplerUpdateTolerance", SetResamplerUpdateTolerance);
	Nan::SetPrototypeMethod(tpl, "setResamplerUpdateTolerance", SetResamplerUpdateTolerance);

	Nan::SetPrototypeMethod(tpl, "SetScalarMode", SetScalarMode);
	Nan::SetPrototypeMethod(tpl, "setScalarMode", SetScalarMode);

	Nan::SetPrototypeMethod(tpl, "UpdateResampler", UpdateResampler);
	Nan::SetPrototypeMethod(tpl, "updateResampler", UpdateResampler);

	Nan::SetPrototypeMethod(tpl, "UpdateResamplerFrustrumMethod", UpdateResamplerFrustrumMethod);
	Nan::SetPrototypeMethod(tpl, "updateResamplerFrustrumMethod", UpdateResamplerFrustrumMethod);

}

void VtkAMRVolumeMapperWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkAMRVolumeMapper> native = vtkSmartPointer<vtkAMRVolumeMapper>::New();
		VtkAMRVolumeMapperWrap* obj = new VtkAMRVolumeMapperWrap(native);		obj->Wrap(info.This());
	}
	else
	{
		Nan::Utf8String s(info[0]);
		if(info[0]->ToObject() != vtkNodeJsNoWrap )
			Nan::ThrowError("Parameter Error");
	}

	info.GetReturnValue().Set(info.This());
}

void VtkAMRVolumeMapperWrap::GetArrayAccessMode(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAMRVolumeMapperWrap *wrapper = ObjectWrap::Unwrap<VtkAMRVolumeMapperWrap>(info.Holder());
	vtkAMRVolumeMapper *native = (vtkAMRVolumeMapper *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetArrayAccessMode();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkAMRVolumeMapperWrap::GetArrayId(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAMRVolumeMapperWrap *wrapper = ObjectWrap::Unwrap<VtkAMRVolumeMapperWrap>(info.Holder());
	vtkAMRVolumeMapper *native = (vtkAMRVolumeMapper *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetArrayId();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkAMRVolumeMapperWrap::GetArrayName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAMRVolumeMapperWrap *wrapper = ObjectWrap::Unwrap<VtkAMRVolumeMapperWrap>(info.Holder());
	vtkAMRVolumeMapper *native = (vtkAMRVolumeMapper *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetArrayName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkAMRVolumeMapperWrap::GetBlendMode(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAMRVolumeMapperWrap *wrapper = ObjectWrap::Unwrap<VtkAMRVolumeMapperWrap>(info.Holder());
	vtkAMRVolumeMapper *native = (vtkAMRVolumeMapper *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetBlendMode();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkAMRVolumeMapperWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAMRVolumeMapperWrap *wrapper = ObjectWrap::Unwrap<VtkAMRVolumeMapperWrap>(info.Holder());
	vtkAMRVolumeMapper *native = (vtkAMRVolumeMapper *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkAMRVolumeMapperWrap::GetCropping(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAMRVolumeMapperWrap *wrapper = ObjectWrap::Unwrap<VtkAMRVolumeMapperWrap>(info.Holder());
	vtkAMRVolumeMapper *native = (vtkAMRVolumeMapper *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetCropping();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkAMRVolumeMapperWrap::GetCroppingRegionFlags(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAMRVolumeMapperWrap *wrapper = ObjectWrap::Unwrap<VtkAMRVolumeMapperWrap>(info.Holder());
	vtkAMRVolumeMapper *native = (vtkAMRVolumeMapper *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetCroppingRegionFlags();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkAMRVolumeMapperWrap::GetInteractiveUpdateRate(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAMRVolumeMapperWrap *wrapper = ObjectWrap::Unwrap<VtkAMRVolumeMapperWrap>(info.Holder());
	vtkAMRVolumeMapper *native = (vtkAMRVolumeMapper *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetInteractiveUpdateRate();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkAMRVolumeMapperWrap::GetInterpolationMode(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAMRVolumeMapperWrap *wrapper = ObjectWrap::Unwrap<VtkAMRVolumeMapperWrap>(info.Holder());
	vtkAMRVolumeMapper *native = (vtkAMRVolumeMapper *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetInterpolationMode();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkAMRVolumeMapperWrap::GetRequestedRenderMode(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAMRVolumeMapperWrap *wrapper = ObjectWrap::Unwrap<VtkAMRVolumeMapperWrap>(info.Holder());
	vtkAMRVolumeMapper *native = (vtkAMRVolumeMapper *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetRequestedRenderMode();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkAMRVolumeMapperWrap::GetRequestedResamplingMode(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAMRVolumeMapperWrap *wrapper = ObjectWrap::Unwrap<VtkAMRVolumeMapperWrap>(info.Holder());
	vtkAMRVolumeMapper *native = (vtkAMRVolumeMapper *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetRequestedResamplingMode();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkAMRVolumeMapperWrap::GetResamplerUpdateTolerance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAMRVolumeMapperWrap *wrapper = ObjectWrap::Unwrap<VtkAMRVolumeMapperWrap>(info.Holder());
	vtkAMRVolumeMapper *native = (vtkAMRVolumeMapper *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetResamplerUpdateTolerance();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkAMRVolumeMapperWrap::GetScalarModeAsString(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAMRVolumeMapperWrap *wrapper = ObjectWrap::Unwrap<VtkAMRVolumeMapperWrap>(info.Holder());
	vtkAMRVolumeMapper *native = (vtkAMRVolumeMapper *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetScalarModeAsString();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkAMRVolumeMapperWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAMRVolumeMapperWrap *wrapper = ObjectWrap::Unwrap<VtkAMRVolumeMapperWrap>(info.Holder());
	vtkAMRVolumeMapper *native = (vtkAMRVolumeMapper *)wrapper->native.GetPointer();
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

void VtkAMRVolumeMapperWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAMRVolumeMapperWrap *wrapper = ObjectWrap::Unwrap<VtkAMRVolumeMapperWrap>(info.Holder());
	vtkAMRVolumeMapper *native = (vtkAMRVolumeMapper *)wrapper->native.GetPointer();
	vtkAMRVolumeMapper * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::Function>(VtkAMRVolumeMapperWrap::constructor);
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkAMRVolumeMapperWrap *w = new VtkAMRVolumeMapperWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkAMRVolumeMapperWrap::ReleaseGraphicsResources(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAMRVolumeMapperWrap *wrapper = ObjectWrap::Unwrap<VtkAMRVolumeMapperWrap>(info.Holder());
	vtkAMRVolumeMapper *native = (vtkAMRVolumeMapper *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject())
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

void VtkAMRVolumeMapperWrap::Render(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAMRVolumeMapperWrap *wrapper = ObjectWrap::Unwrap<VtkAMRVolumeMapperWrap>(info.Holder());
	vtkAMRVolumeMapper *native = (vtkAMRVolumeMapper *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject())
	{
		VtkRendererWrap *a0 = ObjectWrap::Unwrap<VtkRendererWrap>(info[0]->ToObject());
		if(info.Length() > 1 && info[1]->IsObject())
		{
			VtkVolumeWrap *a1 = ObjectWrap::Unwrap<VtkVolumeWrap>(info[1]->ToObject());
			if(info.Length() != 2)
			{
				Nan::ThrowError("Too many parameters.");
				return;
			}
			native->Render(
				(vtkRenderer *) a0->native.GetPointer(),
				(vtkVolume *) a1->native.GetPointer()
			);
			return;
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkAMRVolumeMapperWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAMRVolumeMapperWrap *wrapper = ObjectWrap::Unwrap<VtkAMRVolumeMapperWrap>(info.Holder());
	vtkAMRVolumeMapper *native = (vtkAMRVolumeMapper *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject())
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkAMRVolumeMapper * r;
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
			Nan::New<v8::Function>(VtkAMRVolumeMapperWrap::constructor);
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkAMRVolumeMapperWrap *w = new VtkAMRVolumeMapperWrap();
		w->native.TakeReference(r);
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkAMRVolumeMapperWrap::SelectScalarArray(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAMRVolumeMapperWrap *wrapper = ObjectWrap::Unwrap<VtkAMRVolumeMapperWrap>(info.Holder());
	vtkAMRVolumeMapper *native = (vtkAMRVolumeMapper *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		Nan::Utf8String a0(info[0]);
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SelectScalarArray(
			*a0
		);
		return;
	}
	else if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SelectScalarArray(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkAMRVolumeMapperWrap::SetBlendMode(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAMRVolumeMapperWrap *wrapper = ObjectWrap::Unwrap<VtkAMRVolumeMapperWrap>(info.Holder());
	vtkAMRVolumeMapper *native = (vtkAMRVolumeMapper *)wrapper->native.GetPointer();
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

void VtkAMRVolumeMapperWrap::SetCropping(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAMRVolumeMapperWrap *wrapper = ObjectWrap::Unwrap<VtkAMRVolumeMapperWrap>(info.Holder());
	vtkAMRVolumeMapper *native = (vtkAMRVolumeMapper *)wrapper->native.GetPointer();
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

void VtkAMRVolumeMapperWrap::SetCroppingRegionFlags(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAMRVolumeMapperWrap *wrapper = ObjectWrap::Unwrap<VtkAMRVolumeMapperWrap>(info.Holder());
	vtkAMRVolumeMapper *native = (vtkAMRVolumeMapper *)wrapper->native.GetPointer();
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

void VtkAMRVolumeMapperWrap::SetCroppingRegionPlanes(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAMRVolumeMapperWrap *wrapper = ObjectWrap::Unwrap<VtkAMRVolumeMapperWrap>(info.Holder());
	vtkAMRVolumeMapper *native = (vtkAMRVolumeMapper *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsNumber())
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

void VtkAMRVolumeMapperWrap::SetInputConnection(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAMRVolumeMapperWrap *wrapper = ObjectWrap::Unwrap<VtkAMRVolumeMapperWrap>(info.Holder());
	vtkAMRVolumeMapper *native = (vtkAMRVolumeMapper *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject())
	{
		VtkAlgorithmOutputWrap *a0 = ObjectWrap::Unwrap<VtkAlgorithmOutputWrap>(info[0]->ToObject());
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetInputConnection(
			(vtkAlgorithmOutput *) a0->native.GetPointer()
		);
		return;
	}
	else if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() > 1 && info[1]->IsObject())
		{
			VtkAlgorithmOutputWrap *a1 = ObjectWrap::Unwrap<VtkAlgorithmOutputWrap>(info[1]->ToObject());
			if(info.Length() != 2)
			{
				Nan::ThrowError("Too many parameters.");
				return;
			}
			native->SetInputConnection(
				info[0]->Int32Value(),
				(vtkAlgorithmOutput *) a1->native.GetPointer()
			);
			return;
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkAMRVolumeMapperWrap::SetInputData(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAMRVolumeMapperWrap *wrapper = ObjectWrap::Unwrap<VtkAMRVolumeMapperWrap>(info.Holder());
	vtkAMRVolumeMapper *native = (vtkAMRVolumeMapper *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject())
	{
		VtkOverlappingAMRWrap *a0 = ObjectWrap::Unwrap<VtkOverlappingAMRWrap>(info[0]->ToObject());
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetInputData(
			(vtkOverlappingAMR *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkAMRVolumeMapperWrap::SetInteractiveUpdateRate(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAMRVolumeMapperWrap *wrapper = ObjectWrap::Unwrap<VtkAMRVolumeMapperWrap>(info.Holder());
	vtkAMRVolumeMapper *native = (vtkAMRVolumeMapper *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsNumber())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetInteractiveUpdateRate(
			info[0]->NumberValue()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkAMRVolumeMapperWrap::SetInterpolationMode(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAMRVolumeMapperWrap *wrapper = ObjectWrap::Unwrap<VtkAMRVolumeMapperWrap>(info.Holder());
	vtkAMRVolumeMapper *native = (vtkAMRVolumeMapper *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetInterpolationMode(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkAMRVolumeMapperWrap::SetInterpolationModeToCubic(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAMRVolumeMapperWrap *wrapper = ObjectWrap::Unwrap<VtkAMRVolumeMapperWrap>(info.Holder());
	vtkAMRVolumeMapper *native = (vtkAMRVolumeMapper *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->SetInterpolationModeToCubic();
}

void VtkAMRVolumeMapperWrap::SetInterpolationModeToLinear(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAMRVolumeMapperWrap *wrapper = ObjectWrap::Unwrap<VtkAMRVolumeMapperWrap>(info.Holder());
	vtkAMRVolumeMapper *native = (vtkAMRVolumeMapper *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->SetInterpolationModeToLinear();
}

void VtkAMRVolumeMapperWrap::SetInterpolationModeToNearestNeighbor(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAMRVolumeMapperWrap *wrapper = ObjectWrap::Unwrap<VtkAMRVolumeMapperWrap>(info.Holder());
	vtkAMRVolumeMapper *native = (vtkAMRVolumeMapper *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->SetInterpolationModeToNearestNeighbor();
}

void VtkAMRVolumeMapperWrap::SetNumberOfSamples(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAMRVolumeMapperWrap *wrapper = ObjectWrap::Unwrap<VtkAMRVolumeMapperWrap>(info.Holder());
	vtkAMRVolumeMapper *native = (vtkAMRVolumeMapper *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() > 1 && info[1]->IsInt32())
		{
			if(info.Length() > 2 && info[2]->IsInt32())
			{
				if(info.Length() != 3)
				{
					Nan::ThrowError("Too many parameters.");
					return;
				}
				native->SetNumberOfSamples(
					info[0]->Int32Value(),
					info[1]->Int32Value(),
					info[2]->Int32Value()
				);
				return;
			}
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkAMRVolumeMapperWrap::SetRequestedRenderMode(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAMRVolumeMapperWrap *wrapper = ObjectWrap::Unwrap<VtkAMRVolumeMapperWrap>(info.Holder());
	vtkAMRVolumeMapper *native = (vtkAMRVolumeMapper *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetRequestedRenderMode(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkAMRVolumeMapperWrap::SetRequestedRenderModeToDefault(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAMRVolumeMapperWrap *wrapper = ObjectWrap::Unwrap<VtkAMRVolumeMapperWrap>(info.Holder());
	vtkAMRVolumeMapper *native = (vtkAMRVolumeMapper *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->SetRequestedRenderModeToDefault();
}

void VtkAMRVolumeMapperWrap::SetRequestedRenderModeToGPU(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAMRVolumeMapperWrap *wrapper = ObjectWrap::Unwrap<VtkAMRVolumeMapperWrap>(info.Holder());
	vtkAMRVolumeMapper *native = (vtkAMRVolumeMapper *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->SetRequestedRenderModeToGPU();
}

void VtkAMRVolumeMapperWrap::SetRequestedRenderModeToRayCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAMRVolumeMapperWrap *wrapper = ObjectWrap::Unwrap<VtkAMRVolumeMapperWrap>(info.Holder());
	vtkAMRVolumeMapper *native = (vtkAMRVolumeMapper *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->SetRequestedRenderModeToRayCast();
}

void VtkAMRVolumeMapperWrap::SetRequestedRenderModeToRayCastAndTexture(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAMRVolumeMapperWrap *wrapper = ObjectWrap::Unwrap<VtkAMRVolumeMapperWrap>(info.Holder());
	vtkAMRVolumeMapper *native = (vtkAMRVolumeMapper *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->SetRequestedRenderModeToRayCastAndTexture();
}

void VtkAMRVolumeMapperWrap::SetRequestedRenderModeToTexture(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAMRVolumeMapperWrap *wrapper = ObjectWrap::Unwrap<VtkAMRVolumeMapperWrap>(info.Holder());
	vtkAMRVolumeMapper *native = (vtkAMRVolumeMapper *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->SetRequestedRenderModeToTexture();
}

void VtkAMRVolumeMapperWrap::SetRequestedResamplingMode(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAMRVolumeMapperWrap *wrapper = ObjectWrap::Unwrap<VtkAMRVolumeMapperWrap>(info.Holder());
	vtkAMRVolumeMapper *native = (vtkAMRVolumeMapper *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetRequestedResamplingMode(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkAMRVolumeMapperWrap::SetResamplerUpdateTolerance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAMRVolumeMapperWrap *wrapper = ObjectWrap::Unwrap<VtkAMRVolumeMapperWrap>(info.Holder());
	vtkAMRVolumeMapper *native = (vtkAMRVolumeMapper *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsNumber())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetResamplerUpdateTolerance(
			info[0]->NumberValue()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkAMRVolumeMapperWrap::SetScalarMode(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAMRVolumeMapperWrap *wrapper = ObjectWrap::Unwrap<VtkAMRVolumeMapperWrap>(info.Holder());
	vtkAMRVolumeMapper *native = (vtkAMRVolumeMapper *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetScalarMode(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkAMRVolumeMapperWrap::UpdateResampler(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAMRVolumeMapperWrap *wrapper = ObjectWrap::Unwrap<VtkAMRVolumeMapperWrap>(info.Holder());
	vtkAMRVolumeMapper *native = (vtkAMRVolumeMapper *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject())
	{
		VtkRendererWrap *a0 = ObjectWrap::Unwrap<VtkRendererWrap>(info[0]->ToObject());
		if(info.Length() > 1 && info[1]->IsObject())
		{
			VtkOverlappingAMRWrap *a1 = ObjectWrap::Unwrap<VtkOverlappingAMRWrap>(info[1]->ToObject());
			if(info.Length() != 2)
			{
				Nan::ThrowError("Too many parameters.");
				return;
			}
			native->UpdateResampler(
				(vtkRenderer *) a0->native.GetPointer(),
				(vtkOverlappingAMR *) a1->native.GetPointer()
			);
			return;
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkAMRVolumeMapperWrap::UpdateResamplerFrustrumMethod(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAMRVolumeMapperWrap *wrapper = ObjectWrap::Unwrap<VtkAMRVolumeMapperWrap>(info.Holder());
	vtkAMRVolumeMapper *native = (vtkAMRVolumeMapper *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject())
	{
		VtkRendererWrap *a0 = ObjectWrap::Unwrap<VtkRendererWrap>(info[0]->ToObject());
		if(info.Length() > 1 && info[1]->IsObject())
		{
			VtkOverlappingAMRWrap *a1 = ObjectWrap::Unwrap<VtkOverlappingAMRWrap>(info[1]->ToObject());
			if(info.Length() != 2)
			{
				Nan::ThrowError("Too many parameters.");
				return;
			}
			native->UpdateResamplerFrustrumMethod(
				(vtkRenderer *) a0->native.GetPointer(),
				(vtkOverlappingAMR *) a1->native.GetPointer()
			);
			return;
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

