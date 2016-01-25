/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkActorWrap.h"
#include "vtkQuadricLODActorWrap.h"
#include "vtkObjectWrap.h"
#include "vtkQuadricClusteringWrap.h"
#include "vtkCameraWrap.h"
#include "vtkRendererWrap.h"
#include "vtkMapperWrap.h"
#include "vtkViewportWrap.h"
#include "vtkWindowWrap.h"
#include "vtkPropWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::Function> VtkQuadricLODActorWrap::constructor;

VtkQuadricLODActorWrap::VtkQuadricLODActorWrap()
{ }

VtkQuadricLODActorWrap::VtkQuadricLODActorWrap(vtkSmartPointer<vtkQuadricLODActor> _native)
{ native = _native; }

VtkQuadricLODActorWrap::~VtkQuadricLODActorWrap()
{ }

void VtkQuadricLODActorWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::HandleScope scope;

	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	tpl->SetClassName(Nan::New("VtkQuadricLODActorWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	VtkObjectBaseWrap::InitTpl(tpl);
	VtkObjectWrap::InitTpl(tpl);
	VtkPropWrap::InitTpl(tpl);
	VtkProp3DWrap::InitTpl(tpl);
	VtkActorWrap::InitTpl(tpl);
	InitTpl(tpl);

	constructor.Reset( tpl->GetFunction() );

	exports->Set(Nan::New("vtkQuadricLODActor").ToLocalChecked(),tpl->GetFunction());
	exports->Set(Nan::New("QuadricLODActor").ToLocalChecked(),tpl->GetFunction());
}

void VtkQuadricLODActorWrap::InitTpl(v8::Local<v8::FunctionTemplate> tpl)
{
	Nan::SetPrototypeMethod(tpl, "DeferLODConstructionOff", DeferLODConstructionOff);
	Nan::SetPrototypeMethod(tpl, "deferLODConstructionOff", DeferLODConstructionOff);

	Nan::SetPrototypeMethod(tpl, "DeferLODConstructionOn", DeferLODConstructionOn);
	Nan::SetPrototypeMethod(tpl, "deferLODConstructionOn", DeferLODConstructionOn);

	Nan::SetPrototypeMethod(tpl, "GetCamera", GetCamera);
	Nan::SetPrototypeMethod(tpl, "getCamera", GetCamera);

	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "GetCollapseDimensionRatio", GetCollapseDimensionRatio);
	Nan::SetPrototypeMethod(tpl, "getCollapseDimensionRatio", GetCollapseDimensionRatio);

	Nan::SetPrototypeMethod(tpl, "GetCollapseDimensionRatioMaxValue", GetCollapseDimensionRatioMaxValue);
	Nan::SetPrototypeMethod(tpl, "getCollapseDimensionRatioMaxValue", GetCollapseDimensionRatioMaxValue);

	Nan::SetPrototypeMethod(tpl, "GetCollapseDimensionRatioMinValue", GetCollapseDimensionRatioMinValue);
	Nan::SetPrototypeMethod(tpl, "getCollapseDimensionRatioMinValue", GetCollapseDimensionRatioMinValue);

	Nan::SetPrototypeMethod(tpl, "GetDataConfiguration", GetDataConfiguration);
	Nan::SetPrototypeMethod(tpl, "getDataConfiguration", GetDataConfiguration);

	Nan::SetPrototypeMethod(tpl, "GetDataConfigurationMaxValue", GetDataConfigurationMaxValue);
	Nan::SetPrototypeMethod(tpl, "getDataConfigurationMaxValue", GetDataConfigurationMaxValue);

	Nan::SetPrototypeMethod(tpl, "GetDataConfigurationMinValue", GetDataConfigurationMinValue);
	Nan::SetPrototypeMethod(tpl, "getDataConfigurationMinValue", GetDataConfigurationMinValue);

	Nan::SetPrototypeMethod(tpl, "GetDeferLODConstruction", GetDeferLODConstruction);
	Nan::SetPrototypeMethod(tpl, "getDeferLODConstruction", GetDeferLODConstruction);

	Nan::SetPrototypeMethod(tpl, "GetLODFilter", GetLODFilter);
	Nan::SetPrototypeMethod(tpl, "getLODFilter", GetLODFilter);

	Nan::SetPrototypeMethod(tpl, "GetMaximumDisplayListSize", GetMaximumDisplayListSize);
	Nan::SetPrototypeMethod(tpl, "getMaximumDisplayListSize", GetMaximumDisplayListSize);

	Nan::SetPrototypeMethod(tpl, "GetMaximumDisplayListSizeMaxValue", GetMaximumDisplayListSizeMaxValue);
	Nan::SetPrototypeMethod(tpl, "getMaximumDisplayListSizeMaxValue", GetMaximumDisplayListSizeMaxValue);

	Nan::SetPrototypeMethod(tpl, "GetMaximumDisplayListSizeMinValue", GetMaximumDisplayListSizeMinValue);
	Nan::SetPrototypeMethod(tpl, "getMaximumDisplayListSizeMinValue", GetMaximumDisplayListSizeMinValue);

	Nan::SetPrototypeMethod(tpl, "GetPropType", GetPropType);
	Nan::SetPrototypeMethod(tpl, "getPropType", GetPropType);

	Nan::SetPrototypeMethod(tpl, "GetPropTypeMaxValue", GetPropTypeMaxValue);
	Nan::SetPrototypeMethod(tpl, "getPropTypeMaxValue", GetPropTypeMaxValue);

	Nan::SetPrototypeMethod(tpl, "GetPropTypeMinValue", GetPropTypeMinValue);
	Nan::SetPrototypeMethod(tpl, "getPropTypeMinValue", GetPropTypeMinValue);

	Nan::SetPrototypeMethod(tpl, "GetStatic", GetStatic);
	Nan::SetPrototypeMethod(tpl, "getStatic", GetStatic);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "ReleaseGraphicsResources", ReleaseGraphicsResources);
	Nan::SetPrototypeMethod(tpl, "releaseGraphicsResources", ReleaseGraphicsResources);

	Nan::SetPrototypeMethod(tpl, "Render", Render);
	Nan::SetPrototypeMethod(tpl, "render", Render);

	Nan::SetPrototypeMethod(tpl, "RenderOpaqueGeometry", RenderOpaqueGeometry);
	Nan::SetPrototypeMethod(tpl, "renderOpaqueGeometry", RenderOpaqueGeometry);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetCamera", SetCamera);
	Nan::SetPrototypeMethod(tpl, "setCamera", SetCamera);

	Nan::SetPrototypeMethod(tpl, "SetCollapseDimensionRatio", SetCollapseDimensionRatio);
	Nan::SetPrototypeMethod(tpl, "setCollapseDimensionRatio", SetCollapseDimensionRatio);

	Nan::SetPrototypeMethod(tpl, "SetDataConfiguration", SetDataConfiguration);
	Nan::SetPrototypeMethod(tpl, "setDataConfiguration", SetDataConfiguration);

	Nan::SetPrototypeMethod(tpl, "SetDataConfigurationToUnknown", SetDataConfigurationToUnknown);
	Nan::SetPrototypeMethod(tpl, "setDataConfigurationToUnknown", SetDataConfigurationToUnknown);

	Nan::SetPrototypeMethod(tpl, "SetDataConfigurationToXLine", SetDataConfigurationToXLine);
	Nan::SetPrototypeMethod(tpl, "setDataConfigurationToXLine", SetDataConfigurationToXLine);

	Nan::SetPrototypeMethod(tpl, "SetDataConfigurationToXYPlane", SetDataConfigurationToXYPlane);
	Nan::SetPrototypeMethod(tpl, "setDataConfigurationToXYPlane", SetDataConfigurationToXYPlane);

	Nan::SetPrototypeMethod(tpl, "SetDataConfigurationToXYZVolume", SetDataConfigurationToXYZVolume);
	Nan::SetPrototypeMethod(tpl, "setDataConfigurationToXYZVolume", SetDataConfigurationToXYZVolume);

	Nan::SetPrototypeMethod(tpl, "SetDataConfigurationToXZPlane", SetDataConfigurationToXZPlane);
	Nan::SetPrototypeMethod(tpl, "setDataConfigurationToXZPlane", SetDataConfigurationToXZPlane);

	Nan::SetPrototypeMethod(tpl, "SetDataConfigurationToYLine", SetDataConfigurationToYLine);
	Nan::SetPrototypeMethod(tpl, "setDataConfigurationToYLine", SetDataConfigurationToYLine);

	Nan::SetPrototypeMethod(tpl, "SetDataConfigurationToYZPlane", SetDataConfigurationToYZPlane);
	Nan::SetPrototypeMethod(tpl, "setDataConfigurationToYZPlane", SetDataConfigurationToYZPlane);

	Nan::SetPrototypeMethod(tpl, "SetDataConfigurationToZLine", SetDataConfigurationToZLine);
	Nan::SetPrototypeMethod(tpl, "setDataConfigurationToZLine", SetDataConfigurationToZLine);

	Nan::SetPrototypeMethod(tpl, "SetDeferLODConstruction", SetDeferLODConstruction);
	Nan::SetPrototypeMethod(tpl, "setDeferLODConstruction", SetDeferLODConstruction);

	Nan::SetPrototypeMethod(tpl, "SetLODFilter", SetLODFilter);
	Nan::SetPrototypeMethod(tpl, "setLODFilter", SetLODFilter);

	Nan::SetPrototypeMethod(tpl, "SetMaximumDisplayListSize", SetMaximumDisplayListSize);
	Nan::SetPrototypeMethod(tpl, "setMaximumDisplayListSize", SetMaximumDisplayListSize);

	Nan::SetPrototypeMethod(tpl, "SetPropType", SetPropType);
	Nan::SetPrototypeMethod(tpl, "setPropType", SetPropType);

	Nan::SetPrototypeMethod(tpl, "SetPropTypeToActor", SetPropTypeToActor);
	Nan::SetPrototypeMethod(tpl, "setPropTypeToActor", SetPropTypeToActor);

	Nan::SetPrototypeMethod(tpl, "SetPropTypeToFollower", SetPropTypeToFollower);
	Nan::SetPrototypeMethod(tpl, "setPropTypeToFollower", SetPropTypeToFollower);

	Nan::SetPrototypeMethod(tpl, "SetStatic", SetStatic);
	Nan::SetPrototypeMethod(tpl, "setStatic", SetStatic);

	Nan::SetPrototypeMethod(tpl, "ShallowCopy", ShallowCopy);
	Nan::SetPrototypeMethod(tpl, "shallowCopy", ShallowCopy);

	Nan::SetPrototypeMethod(tpl, "StaticOff", StaticOff);
	Nan::SetPrototypeMethod(tpl, "staticOff", StaticOff);

	Nan::SetPrototypeMethod(tpl, "StaticOn", StaticOn);
	Nan::SetPrototypeMethod(tpl, "staticOn", StaticOn);

}

void VtkQuadricLODActorWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkQuadricLODActor> native = vtkSmartPointer<vtkQuadricLODActor>::New();
		VtkQuadricLODActorWrap* obj = new VtkQuadricLODActorWrap(native);		obj->Wrap(info.This());
	}
	else
	{
		Nan::Utf8String s(info[0]);
		if(info[0]->ToObject() != vtkNodeJsNoWrap )
			Nan::ThrowError("Parameter Error");
	}

	info.GetReturnValue().Set(info.This());
}

void VtkQuadricLODActorWrap::DeferLODConstructionOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkQuadricLODActorWrap *wrapper = ObjectWrap::Unwrap<VtkQuadricLODActorWrap>(info.Holder());
	vtkQuadricLODActor *native = (vtkQuadricLODActor *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->DeferLODConstructionOff();
}

void VtkQuadricLODActorWrap::DeferLODConstructionOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkQuadricLODActorWrap *wrapper = ObjectWrap::Unwrap<VtkQuadricLODActorWrap>(info.Holder());
	vtkQuadricLODActor *native = (vtkQuadricLODActor *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->DeferLODConstructionOn();
}

void VtkQuadricLODActorWrap::GetCamera(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkQuadricLODActorWrap *wrapper = ObjectWrap::Unwrap<VtkQuadricLODActorWrap>(info.Holder());
	vtkQuadricLODActor *native = (vtkQuadricLODActor *)wrapper->native.GetPointer();
	vtkCamera * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetCamera();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::Function>(VtkCameraWrap::constructor);
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkCameraWrap *w = new VtkCameraWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkQuadricLODActorWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkQuadricLODActorWrap *wrapper = ObjectWrap::Unwrap<VtkQuadricLODActorWrap>(info.Holder());
	vtkQuadricLODActor *native = (vtkQuadricLODActor *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkQuadricLODActorWrap::GetCollapseDimensionRatio(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkQuadricLODActorWrap *wrapper = ObjectWrap::Unwrap<VtkQuadricLODActorWrap>(info.Holder());
	vtkQuadricLODActor *native = (vtkQuadricLODActor *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetCollapseDimensionRatio();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkQuadricLODActorWrap::GetCollapseDimensionRatioMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkQuadricLODActorWrap *wrapper = ObjectWrap::Unwrap<VtkQuadricLODActorWrap>(info.Holder());
	vtkQuadricLODActor *native = (vtkQuadricLODActor *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetCollapseDimensionRatioMaxValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkQuadricLODActorWrap::GetCollapseDimensionRatioMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkQuadricLODActorWrap *wrapper = ObjectWrap::Unwrap<VtkQuadricLODActorWrap>(info.Holder());
	vtkQuadricLODActor *native = (vtkQuadricLODActor *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetCollapseDimensionRatioMinValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkQuadricLODActorWrap::GetDataConfiguration(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkQuadricLODActorWrap *wrapper = ObjectWrap::Unwrap<VtkQuadricLODActorWrap>(info.Holder());
	vtkQuadricLODActor *native = (vtkQuadricLODActor *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetDataConfiguration();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkQuadricLODActorWrap::GetDataConfigurationMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkQuadricLODActorWrap *wrapper = ObjectWrap::Unwrap<VtkQuadricLODActorWrap>(info.Holder());
	vtkQuadricLODActor *native = (vtkQuadricLODActor *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetDataConfigurationMaxValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkQuadricLODActorWrap::GetDataConfigurationMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkQuadricLODActorWrap *wrapper = ObjectWrap::Unwrap<VtkQuadricLODActorWrap>(info.Holder());
	vtkQuadricLODActor *native = (vtkQuadricLODActor *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetDataConfigurationMinValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkQuadricLODActorWrap::GetDeferLODConstruction(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkQuadricLODActorWrap *wrapper = ObjectWrap::Unwrap<VtkQuadricLODActorWrap>(info.Holder());
	vtkQuadricLODActor *native = (vtkQuadricLODActor *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetDeferLODConstruction();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkQuadricLODActorWrap::GetLODFilter(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkQuadricLODActorWrap *wrapper = ObjectWrap::Unwrap<VtkQuadricLODActorWrap>(info.Holder());
	vtkQuadricLODActor *native = (vtkQuadricLODActor *)wrapper->native.GetPointer();
	vtkQuadricClustering * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetLODFilter();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::Function>(VtkQuadricClusteringWrap::constructor);
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkQuadricClusteringWrap *w = new VtkQuadricClusteringWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkQuadricLODActorWrap::GetMaximumDisplayListSize(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkQuadricLODActorWrap *wrapper = ObjectWrap::Unwrap<VtkQuadricLODActorWrap>(info.Holder());
	vtkQuadricLODActor *native = (vtkQuadricLODActor *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetMaximumDisplayListSize();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkQuadricLODActorWrap::GetMaximumDisplayListSizeMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkQuadricLODActorWrap *wrapper = ObjectWrap::Unwrap<VtkQuadricLODActorWrap>(info.Holder());
	vtkQuadricLODActor *native = (vtkQuadricLODActor *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetMaximumDisplayListSizeMaxValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkQuadricLODActorWrap::GetMaximumDisplayListSizeMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkQuadricLODActorWrap *wrapper = ObjectWrap::Unwrap<VtkQuadricLODActorWrap>(info.Holder());
	vtkQuadricLODActor *native = (vtkQuadricLODActor *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetMaximumDisplayListSizeMinValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkQuadricLODActorWrap::GetPropType(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkQuadricLODActorWrap *wrapper = ObjectWrap::Unwrap<VtkQuadricLODActorWrap>(info.Holder());
	vtkQuadricLODActor *native = (vtkQuadricLODActor *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetPropType();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkQuadricLODActorWrap::GetPropTypeMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkQuadricLODActorWrap *wrapper = ObjectWrap::Unwrap<VtkQuadricLODActorWrap>(info.Holder());
	vtkQuadricLODActor *native = (vtkQuadricLODActor *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetPropTypeMaxValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkQuadricLODActorWrap::GetPropTypeMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkQuadricLODActorWrap *wrapper = ObjectWrap::Unwrap<VtkQuadricLODActorWrap>(info.Holder());
	vtkQuadricLODActor *native = (vtkQuadricLODActor *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetPropTypeMinValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkQuadricLODActorWrap::GetStatic(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkQuadricLODActorWrap *wrapper = ObjectWrap::Unwrap<VtkQuadricLODActorWrap>(info.Holder());
	vtkQuadricLODActor *native = (vtkQuadricLODActor *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetStatic();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkQuadricLODActorWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkQuadricLODActorWrap *wrapper = ObjectWrap::Unwrap<VtkQuadricLODActorWrap>(info.Holder());
	vtkQuadricLODActor *native = (vtkQuadricLODActor *)wrapper->native.GetPointer();
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

void VtkQuadricLODActorWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkQuadricLODActorWrap *wrapper = ObjectWrap::Unwrap<VtkQuadricLODActorWrap>(info.Holder());
	vtkQuadricLODActor *native = (vtkQuadricLODActor *)wrapper->native.GetPointer();
	vtkQuadricLODActor * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::Function>(VtkQuadricLODActorWrap::constructor);
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkQuadricLODActorWrap *w = new VtkQuadricLODActorWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkQuadricLODActorWrap::ReleaseGraphicsResources(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkQuadricLODActorWrap *wrapper = ObjectWrap::Unwrap<VtkQuadricLODActorWrap>(info.Holder());
	vtkQuadricLODActor *native = (vtkQuadricLODActor *)wrapper->native.GetPointer();
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

void VtkQuadricLODActorWrap::Render(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkQuadricLODActorWrap *wrapper = ObjectWrap::Unwrap<VtkQuadricLODActorWrap>(info.Holder());
	vtkQuadricLODActor *native = (vtkQuadricLODActor *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject())
	{
		VtkRendererWrap *a0 = ObjectWrap::Unwrap<VtkRendererWrap>(info[0]->ToObject());
		if(info.Length() > 1 && info[1]->IsObject())
		{
			VtkMapperWrap *a1 = ObjectWrap::Unwrap<VtkMapperWrap>(info[1]->ToObject());
			if(info.Length() != 2)
			{
				Nan::ThrowError("Too many parameters.");
				return;
			}
			native->Render(
				(vtkRenderer *) a0->native.GetPointer(),
				(vtkMapper *) a1->native.GetPointer()
			);
			return;
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkQuadricLODActorWrap::RenderOpaqueGeometry(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkQuadricLODActorWrap *wrapper = ObjectWrap::Unwrap<VtkQuadricLODActorWrap>(info.Holder());
	vtkQuadricLODActor *native = (vtkQuadricLODActor *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject())
	{
		VtkViewportWrap *a0 = ObjectWrap::Unwrap<VtkViewportWrap>(info[0]->ToObject());
		int r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->RenderOpaqueGeometry(
			(vtkViewport *) a0->native.GetPointer()
		);
		info.GetReturnValue().Set(Nan::New(r));
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkQuadricLODActorWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkQuadricLODActorWrap *wrapper = ObjectWrap::Unwrap<VtkQuadricLODActorWrap>(info.Holder());
	vtkQuadricLODActor *native = (vtkQuadricLODActor *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject())
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkQuadricLODActor * r;
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
			Nan::New<v8::Function>(VtkQuadricLODActorWrap::constructor);
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkQuadricLODActorWrap *w = new VtkQuadricLODActorWrap();
		w->native.TakeReference(r);
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkQuadricLODActorWrap::SetCamera(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkQuadricLODActorWrap *wrapper = ObjectWrap::Unwrap<VtkQuadricLODActorWrap>(info.Holder());
	vtkQuadricLODActor *native = (vtkQuadricLODActor *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject())
	{
		VtkCameraWrap *a0 = ObjectWrap::Unwrap<VtkCameraWrap>(info[0]->ToObject());
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetCamera(
			(vtkCamera *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkQuadricLODActorWrap::SetCollapseDimensionRatio(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkQuadricLODActorWrap *wrapper = ObjectWrap::Unwrap<VtkQuadricLODActorWrap>(info.Holder());
	vtkQuadricLODActor *native = (vtkQuadricLODActor *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsNumber())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetCollapseDimensionRatio(
			info[0]->NumberValue()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkQuadricLODActorWrap::SetDataConfiguration(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkQuadricLODActorWrap *wrapper = ObjectWrap::Unwrap<VtkQuadricLODActorWrap>(info.Holder());
	vtkQuadricLODActor *native = (vtkQuadricLODActor *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetDataConfiguration(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkQuadricLODActorWrap::SetDataConfigurationToUnknown(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkQuadricLODActorWrap *wrapper = ObjectWrap::Unwrap<VtkQuadricLODActorWrap>(info.Holder());
	vtkQuadricLODActor *native = (vtkQuadricLODActor *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->SetDataConfigurationToUnknown();
}

void VtkQuadricLODActorWrap::SetDataConfigurationToXLine(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkQuadricLODActorWrap *wrapper = ObjectWrap::Unwrap<VtkQuadricLODActorWrap>(info.Holder());
	vtkQuadricLODActor *native = (vtkQuadricLODActor *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->SetDataConfigurationToXLine();
}

void VtkQuadricLODActorWrap::SetDataConfigurationToXYPlane(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkQuadricLODActorWrap *wrapper = ObjectWrap::Unwrap<VtkQuadricLODActorWrap>(info.Holder());
	vtkQuadricLODActor *native = (vtkQuadricLODActor *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->SetDataConfigurationToXYPlane();
}

void VtkQuadricLODActorWrap::SetDataConfigurationToXYZVolume(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkQuadricLODActorWrap *wrapper = ObjectWrap::Unwrap<VtkQuadricLODActorWrap>(info.Holder());
	vtkQuadricLODActor *native = (vtkQuadricLODActor *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->SetDataConfigurationToXYZVolume();
}

void VtkQuadricLODActorWrap::SetDataConfigurationToXZPlane(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkQuadricLODActorWrap *wrapper = ObjectWrap::Unwrap<VtkQuadricLODActorWrap>(info.Holder());
	vtkQuadricLODActor *native = (vtkQuadricLODActor *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->SetDataConfigurationToXZPlane();
}

void VtkQuadricLODActorWrap::SetDataConfigurationToYLine(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkQuadricLODActorWrap *wrapper = ObjectWrap::Unwrap<VtkQuadricLODActorWrap>(info.Holder());
	vtkQuadricLODActor *native = (vtkQuadricLODActor *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->SetDataConfigurationToYLine();
}

void VtkQuadricLODActorWrap::SetDataConfigurationToYZPlane(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkQuadricLODActorWrap *wrapper = ObjectWrap::Unwrap<VtkQuadricLODActorWrap>(info.Holder());
	vtkQuadricLODActor *native = (vtkQuadricLODActor *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->SetDataConfigurationToYZPlane();
}

void VtkQuadricLODActorWrap::SetDataConfigurationToZLine(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkQuadricLODActorWrap *wrapper = ObjectWrap::Unwrap<VtkQuadricLODActorWrap>(info.Holder());
	vtkQuadricLODActor *native = (vtkQuadricLODActor *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->SetDataConfigurationToZLine();
}

void VtkQuadricLODActorWrap::SetDeferLODConstruction(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkQuadricLODActorWrap *wrapper = ObjectWrap::Unwrap<VtkQuadricLODActorWrap>(info.Holder());
	vtkQuadricLODActor *native = (vtkQuadricLODActor *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetDeferLODConstruction(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkQuadricLODActorWrap::SetLODFilter(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkQuadricLODActorWrap *wrapper = ObjectWrap::Unwrap<VtkQuadricLODActorWrap>(info.Holder());
	vtkQuadricLODActor *native = (vtkQuadricLODActor *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject())
	{
		VtkQuadricClusteringWrap *a0 = ObjectWrap::Unwrap<VtkQuadricClusteringWrap>(info[0]->ToObject());
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetLODFilter(
			(vtkQuadricClustering *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkQuadricLODActorWrap::SetMaximumDisplayListSize(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkQuadricLODActorWrap *wrapper = ObjectWrap::Unwrap<VtkQuadricLODActorWrap>(info.Holder());
	vtkQuadricLODActor *native = (vtkQuadricLODActor *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetMaximumDisplayListSize(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkQuadricLODActorWrap::SetPropType(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkQuadricLODActorWrap *wrapper = ObjectWrap::Unwrap<VtkQuadricLODActorWrap>(info.Holder());
	vtkQuadricLODActor *native = (vtkQuadricLODActor *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetPropType(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkQuadricLODActorWrap::SetPropTypeToActor(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkQuadricLODActorWrap *wrapper = ObjectWrap::Unwrap<VtkQuadricLODActorWrap>(info.Holder());
	vtkQuadricLODActor *native = (vtkQuadricLODActor *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->SetPropTypeToActor();
}

void VtkQuadricLODActorWrap::SetPropTypeToFollower(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkQuadricLODActorWrap *wrapper = ObjectWrap::Unwrap<VtkQuadricLODActorWrap>(info.Holder());
	vtkQuadricLODActor *native = (vtkQuadricLODActor *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->SetPropTypeToFollower();
}

void VtkQuadricLODActorWrap::SetStatic(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkQuadricLODActorWrap *wrapper = ObjectWrap::Unwrap<VtkQuadricLODActorWrap>(info.Holder());
	vtkQuadricLODActor *native = (vtkQuadricLODActor *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetStatic(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkQuadricLODActorWrap::ShallowCopy(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkQuadricLODActorWrap *wrapper = ObjectWrap::Unwrap<VtkQuadricLODActorWrap>(info.Holder());
	vtkQuadricLODActor *native = (vtkQuadricLODActor *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject())
	{
		VtkPropWrap *a0 = ObjectWrap::Unwrap<VtkPropWrap>(info[0]->ToObject());
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->ShallowCopy(
			(vtkProp *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkQuadricLODActorWrap::StaticOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkQuadricLODActorWrap *wrapper = ObjectWrap::Unwrap<VtkQuadricLODActorWrap>(info.Holder());
	vtkQuadricLODActor *native = (vtkQuadricLODActor *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->StaticOff();
}

void VtkQuadricLODActorWrap::StaticOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkQuadricLODActorWrap *wrapper = ObjectWrap::Unwrap<VtkQuadricLODActorWrap>(info.Holder());
	vtkQuadricLODActor *native = (vtkQuadricLODActor *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->StaticOn();
}

