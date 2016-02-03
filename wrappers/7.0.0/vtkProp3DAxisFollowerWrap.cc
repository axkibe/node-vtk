/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkProp3DFollowerWrap.h"
#include "vtkProp3DAxisFollowerWrap.h"
#include "vtkObjectWrap.h"
#include "vtkAxisActorWrap.h"
#include "vtkPropWrap.h"
#include "vtkViewportWrap.h"
#include "vtkCameraWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkProp3DAxisFollowerWrap::ptpl;

VtkProp3DAxisFollowerWrap::VtkProp3DAxisFollowerWrap()
{ }

VtkProp3DAxisFollowerWrap::VtkProp3DAxisFollowerWrap(vtkSmartPointer<vtkProp3DAxisFollower> _native)
{ native = _native; }

VtkProp3DAxisFollowerWrap::~VtkProp3DAxisFollowerWrap()
{ }

void VtkProp3DAxisFollowerWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkProp3DAxisFollower").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("Prop3DAxisFollower").ToLocalChecked(), ConstructorGetter);
}

void VtkProp3DAxisFollowerWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkProp3DAxisFollowerWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkProp3DFollowerWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkProp3DFollowerWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkProp3DAxisFollowerWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "AutoCenterOff", AutoCenterOff);
	Nan::SetPrototypeMethod(tpl, "autoCenterOff", AutoCenterOff);

	Nan::SetPrototypeMethod(tpl, "AutoCenterOn", AutoCenterOn);
	Nan::SetPrototypeMethod(tpl, "autoCenterOn", AutoCenterOn);

	Nan::SetPrototypeMethod(tpl, "AutoScale", AutoScale);
	Nan::SetPrototypeMethod(tpl, "autoScale", AutoScale);

	Nan::SetPrototypeMethod(tpl, "ComputeMatrix", ComputeMatrix);
	Nan::SetPrototypeMethod(tpl, "computeMatrix", ComputeMatrix);

	Nan::SetPrototypeMethod(tpl, "GetAutoCenter", GetAutoCenter);
	Nan::SetPrototypeMethod(tpl, "getAutoCenter", GetAutoCenter);

	Nan::SetPrototypeMethod(tpl, "GetAxis", GetAxis);
	Nan::SetPrototypeMethod(tpl, "getAxis", GetAxis);

	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "GetDistanceLODThreshold", GetDistanceLODThreshold);
	Nan::SetPrototypeMethod(tpl, "getDistanceLODThreshold", GetDistanceLODThreshold);

	Nan::SetPrototypeMethod(tpl, "GetDistanceLODThresholdMaxValue", GetDistanceLODThresholdMaxValue);
	Nan::SetPrototypeMethod(tpl, "getDistanceLODThresholdMaxValue", GetDistanceLODThresholdMaxValue);

	Nan::SetPrototypeMethod(tpl, "GetDistanceLODThresholdMinValue", GetDistanceLODThresholdMinValue);
	Nan::SetPrototypeMethod(tpl, "getDistanceLODThresholdMinValue", GetDistanceLODThresholdMinValue);

	Nan::SetPrototypeMethod(tpl, "GetEnableDistanceLOD", GetEnableDistanceLOD);
	Nan::SetPrototypeMethod(tpl, "getEnableDistanceLOD", GetEnableDistanceLOD);

	Nan::SetPrototypeMethod(tpl, "GetEnableViewAngleLOD", GetEnableViewAngleLOD);
	Nan::SetPrototypeMethod(tpl, "getEnableViewAngleLOD", GetEnableViewAngleLOD);

	Nan::SetPrototypeMethod(tpl, "GetScreenOffset", GetScreenOffset);
	Nan::SetPrototypeMethod(tpl, "getScreenOffset", GetScreenOffset);

	Nan::SetPrototypeMethod(tpl, "GetViewAngleLODThreshold", GetViewAngleLODThreshold);
	Nan::SetPrototypeMethod(tpl, "getViewAngleLODThreshold", GetViewAngleLODThreshold);

	Nan::SetPrototypeMethod(tpl, "GetViewAngleLODThresholdMaxValue", GetViewAngleLODThresholdMaxValue);
	Nan::SetPrototypeMethod(tpl, "getViewAngleLODThresholdMaxValue", GetViewAngleLODThresholdMaxValue);

	Nan::SetPrototypeMethod(tpl, "GetViewAngleLODThresholdMinValue", GetViewAngleLODThresholdMinValue);
	Nan::SetPrototypeMethod(tpl, "getViewAngleLODThresholdMinValue", GetViewAngleLODThresholdMinValue);

	Nan::SetPrototypeMethod(tpl, "GetViewport", GetViewport);
	Nan::SetPrototypeMethod(tpl, "getViewport", GetViewport);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "RenderOpaqueGeometry", RenderOpaqueGeometry);
	Nan::SetPrototypeMethod(tpl, "renderOpaqueGeometry", RenderOpaqueGeometry);

	Nan::SetPrototypeMethod(tpl, "RenderTranslucentPolygonalGeometry", RenderTranslucentPolygonalGeometry);
	Nan::SetPrototypeMethod(tpl, "renderTranslucentPolygonalGeometry", RenderTranslucentPolygonalGeometry);

	Nan::SetPrototypeMethod(tpl, "RenderVolumetricGeometry", RenderVolumetricGeometry);
	Nan::SetPrototypeMethod(tpl, "renderVolumetricGeometry", RenderVolumetricGeometry);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetAutoCenter", SetAutoCenter);
	Nan::SetPrototypeMethod(tpl, "setAutoCenter", SetAutoCenter);

	Nan::SetPrototypeMethod(tpl, "SetAxis", SetAxis);
	Nan::SetPrototypeMethod(tpl, "setAxis", SetAxis);

	Nan::SetPrototypeMethod(tpl, "SetDistanceLODThreshold", SetDistanceLODThreshold);
	Nan::SetPrototypeMethod(tpl, "setDistanceLODThreshold", SetDistanceLODThreshold);

	Nan::SetPrototypeMethod(tpl, "SetEnableDistanceLOD", SetEnableDistanceLOD);
	Nan::SetPrototypeMethod(tpl, "setEnableDistanceLOD", SetEnableDistanceLOD);

	Nan::SetPrototypeMethod(tpl, "SetEnableViewAngleLOD", SetEnableViewAngleLOD);
	Nan::SetPrototypeMethod(tpl, "setEnableViewAngleLOD", SetEnableViewAngleLOD);

	Nan::SetPrototypeMethod(tpl, "SetScreenOffset", SetScreenOffset);
	Nan::SetPrototypeMethod(tpl, "setScreenOffset", SetScreenOffset);

	Nan::SetPrototypeMethod(tpl, "SetViewAngleLODThreshold", SetViewAngleLODThreshold);
	Nan::SetPrototypeMethod(tpl, "setViewAngleLODThreshold", SetViewAngleLODThreshold);

	Nan::SetPrototypeMethod(tpl, "SetViewport", SetViewport);
	Nan::SetPrototypeMethod(tpl, "setViewport", SetViewport);

	Nan::SetPrototypeMethod(tpl, "ShallowCopy", ShallowCopy);
	Nan::SetPrototypeMethod(tpl, "shallowCopy", ShallowCopy);

	ptpl.Reset( tpl );
}

void VtkProp3DAxisFollowerWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkProp3DAxisFollower> native = vtkSmartPointer<vtkProp3DAxisFollower>::New();
		VtkProp3DAxisFollowerWrap* obj = new VtkProp3DAxisFollowerWrap(native);
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

void VtkProp3DAxisFollowerWrap::AutoCenterOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkProp3DAxisFollowerWrap *wrapper = ObjectWrap::Unwrap<VtkProp3DAxisFollowerWrap>(info.Holder());
	vtkProp3DAxisFollower *native = (vtkProp3DAxisFollower *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->AutoCenterOff();
}

void VtkProp3DAxisFollowerWrap::AutoCenterOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkProp3DAxisFollowerWrap *wrapper = ObjectWrap::Unwrap<VtkProp3DAxisFollowerWrap>(info.Holder());
	vtkProp3DAxisFollower *native = (vtkProp3DAxisFollower *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->AutoCenterOn();
}

void VtkProp3DAxisFollowerWrap::AutoScale(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkProp3DAxisFollowerWrap *wrapper = ObjectWrap::Unwrap<VtkProp3DAxisFollowerWrap>(info.Holder());
	vtkProp3DAxisFollower *native = (vtkProp3DAxisFollower *)wrapper->native.GetPointer();
	size_t i;
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkViewportWrap::ptpl))->HasInstance(info[0]))
	{
		VtkViewportWrap *a0 = ObjectWrap::Unwrap<VtkViewportWrap>(info[0]->ToObject());
		if(info.Length() > 1 && info[1]->IsObject() && (Nan::New(VtkCameraWrap::ptpl))->HasInstance(info[1]))
		{
			VtkCameraWrap *a1 = ObjectWrap::Unwrap<VtkCameraWrap>(info[1]->ToObject());
			if(info.Length() > 2 && info[2]->IsNumber())
			{
				if(info.Length() > 3 && info[3]->IsFloat64Array())
				{
					v8::Local<v8::Float64Array>a3(v8::Local<v8::Float64Array>::Cast(info[3]->ToObject()));
					if( a3->Length() < 3 )
					{
						Nan::ThrowError("Array too short.");
						return;
					}

					double r;
					if(info.Length() != 4)
					{
						Nan::ThrowError("Too many parameters.");
						return;
					}
					r = native->AutoScale(
						(vtkViewport *) a0->native.GetPointer(),
						(vtkCamera *) a1->native.GetPointer(),
						info[2]->NumberValue(),
						(double *)(a3->Buffer()->GetContents().Data())
					);
					info.GetReturnValue().Set(Nan::New(r));
					return;
				}
				else if(info.Length() > 3 && info[3]->IsArray())
				{
					v8::Local<v8::Array>a3(v8::Local<v8::Array>::Cast(info[3]->ToObject()));
					double b3[3];
					if( a3->Length() < 3 )
					{
						Nan::ThrowError("Array too short.");
						return;
					}

					for( i = 0; i < 3; i++ )
					{
						if( !a3->Get(i)->IsNumber() )
						{
							Nan::ThrowError("Array contents invalid.");
							return;
						}
						b3[i] = a3->Get(i)->NumberValue();
					}
					double r;
					if(info.Length() != 4)
					{
						Nan::ThrowError("Too many parameters.");
						return;
					}
					r = native->AutoScale(
						(vtkViewport *) a0->native.GetPointer(),
						(vtkCamera *) a1->native.GetPointer(),
						info[2]->NumberValue(),
						b3
					);
					info.GetReturnValue().Set(Nan::New(r));
					return;
				}
			}
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkProp3DAxisFollowerWrap::ComputeMatrix(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkProp3DAxisFollowerWrap *wrapper = ObjectWrap::Unwrap<VtkProp3DAxisFollowerWrap>(info.Holder());
	vtkProp3DAxisFollower *native = (vtkProp3DAxisFollower *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->ComputeMatrix();
}

void VtkProp3DAxisFollowerWrap::GetAutoCenter(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkProp3DAxisFollowerWrap *wrapper = ObjectWrap::Unwrap<VtkProp3DAxisFollowerWrap>(info.Holder());
	vtkProp3DAxisFollower *native = (vtkProp3DAxisFollower *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetAutoCenter();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkProp3DAxisFollowerWrap::GetAxis(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkProp3DAxisFollowerWrap *wrapper = ObjectWrap::Unwrap<VtkProp3DAxisFollowerWrap>(info.Holder());
	vtkProp3DAxisFollower *native = (vtkProp3DAxisFollower *)wrapper->native.GetPointer();
	vtkAxisActor * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetAxis();
		VtkAxisActorWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkAxisActorWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkAxisActorWrap *w = new VtkAxisActorWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkProp3DAxisFollowerWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkProp3DAxisFollowerWrap *wrapper = ObjectWrap::Unwrap<VtkProp3DAxisFollowerWrap>(info.Holder());
	vtkProp3DAxisFollower *native = (vtkProp3DAxisFollower *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkProp3DAxisFollowerWrap::GetDistanceLODThreshold(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkProp3DAxisFollowerWrap *wrapper = ObjectWrap::Unwrap<VtkProp3DAxisFollowerWrap>(info.Holder());
	vtkProp3DAxisFollower *native = (vtkProp3DAxisFollower *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetDistanceLODThreshold();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkProp3DAxisFollowerWrap::GetDistanceLODThresholdMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkProp3DAxisFollowerWrap *wrapper = ObjectWrap::Unwrap<VtkProp3DAxisFollowerWrap>(info.Holder());
	vtkProp3DAxisFollower *native = (vtkProp3DAxisFollower *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetDistanceLODThresholdMaxValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkProp3DAxisFollowerWrap::GetDistanceLODThresholdMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkProp3DAxisFollowerWrap *wrapper = ObjectWrap::Unwrap<VtkProp3DAxisFollowerWrap>(info.Holder());
	vtkProp3DAxisFollower *native = (vtkProp3DAxisFollower *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetDistanceLODThresholdMinValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkProp3DAxisFollowerWrap::GetEnableDistanceLOD(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkProp3DAxisFollowerWrap *wrapper = ObjectWrap::Unwrap<VtkProp3DAxisFollowerWrap>(info.Holder());
	vtkProp3DAxisFollower *native = (vtkProp3DAxisFollower *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetEnableDistanceLOD();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkProp3DAxisFollowerWrap::GetEnableViewAngleLOD(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkProp3DAxisFollowerWrap *wrapper = ObjectWrap::Unwrap<VtkProp3DAxisFollowerWrap>(info.Holder());
	vtkProp3DAxisFollower *native = (vtkProp3DAxisFollower *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetEnableViewAngleLOD();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkProp3DAxisFollowerWrap::GetScreenOffset(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkProp3DAxisFollowerWrap *wrapper = ObjectWrap::Unwrap<VtkProp3DAxisFollowerWrap>(info.Holder());
	vtkProp3DAxisFollower *native = (vtkProp3DAxisFollower *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetScreenOffset();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkProp3DAxisFollowerWrap::GetViewAngleLODThreshold(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkProp3DAxisFollowerWrap *wrapper = ObjectWrap::Unwrap<VtkProp3DAxisFollowerWrap>(info.Holder());
	vtkProp3DAxisFollower *native = (vtkProp3DAxisFollower *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetViewAngleLODThreshold();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkProp3DAxisFollowerWrap::GetViewAngleLODThresholdMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkProp3DAxisFollowerWrap *wrapper = ObjectWrap::Unwrap<VtkProp3DAxisFollowerWrap>(info.Holder());
	vtkProp3DAxisFollower *native = (vtkProp3DAxisFollower *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetViewAngleLODThresholdMaxValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkProp3DAxisFollowerWrap::GetViewAngleLODThresholdMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkProp3DAxisFollowerWrap *wrapper = ObjectWrap::Unwrap<VtkProp3DAxisFollowerWrap>(info.Holder());
	vtkProp3DAxisFollower *native = (vtkProp3DAxisFollower *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetViewAngleLODThresholdMinValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkProp3DAxisFollowerWrap::GetViewport(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkProp3DAxisFollowerWrap *wrapper = ObjectWrap::Unwrap<VtkProp3DAxisFollowerWrap>(info.Holder());
	vtkProp3DAxisFollower *native = (vtkProp3DAxisFollower *)wrapper->native.GetPointer();
	vtkViewport * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetViewport();
		VtkViewportWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkViewportWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkViewportWrap *w = new VtkViewportWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkProp3DAxisFollowerWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkProp3DAxisFollowerWrap *wrapper = ObjectWrap::Unwrap<VtkProp3DAxisFollowerWrap>(info.Holder());
	vtkProp3DAxisFollower *native = (vtkProp3DAxisFollower *)wrapper->native.GetPointer();
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

void VtkProp3DAxisFollowerWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkProp3DAxisFollowerWrap *wrapper = ObjectWrap::Unwrap<VtkProp3DAxisFollowerWrap>(info.Holder());
	vtkProp3DAxisFollower *native = (vtkProp3DAxisFollower *)wrapper->native.GetPointer();
	vtkProp3DAxisFollower * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
		VtkProp3DAxisFollowerWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkProp3DAxisFollowerWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkProp3DAxisFollowerWrap *w = new VtkProp3DAxisFollowerWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkProp3DAxisFollowerWrap::RenderOpaqueGeometry(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkProp3DAxisFollowerWrap *wrapper = ObjectWrap::Unwrap<VtkProp3DAxisFollowerWrap>(info.Holder());
	vtkProp3DAxisFollower *native = (vtkProp3DAxisFollower *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkViewportWrap::ptpl))->HasInstance(info[0]))
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

void VtkProp3DAxisFollowerWrap::RenderTranslucentPolygonalGeometry(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkProp3DAxisFollowerWrap *wrapper = ObjectWrap::Unwrap<VtkProp3DAxisFollowerWrap>(info.Holder());
	vtkProp3DAxisFollower *native = (vtkProp3DAxisFollower *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkViewportWrap::ptpl))->HasInstance(info[0]))
	{
		VtkViewportWrap *a0 = ObjectWrap::Unwrap<VtkViewportWrap>(info[0]->ToObject());
		int r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->RenderTranslucentPolygonalGeometry(
			(vtkViewport *) a0->native.GetPointer()
		);
		info.GetReturnValue().Set(Nan::New(r));
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkProp3DAxisFollowerWrap::RenderVolumetricGeometry(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkProp3DAxisFollowerWrap *wrapper = ObjectWrap::Unwrap<VtkProp3DAxisFollowerWrap>(info.Holder());
	vtkProp3DAxisFollower *native = (vtkProp3DAxisFollower *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkViewportWrap::ptpl))->HasInstance(info[0]))
	{
		VtkViewportWrap *a0 = ObjectWrap::Unwrap<VtkViewportWrap>(info[0]->ToObject());
		int r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->RenderVolumetricGeometry(
			(vtkViewport *) a0->native.GetPointer()
		);
		info.GetReturnValue().Set(Nan::New(r));
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkProp3DAxisFollowerWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkProp3DAxisFollowerWrap *wrapper = ObjectWrap::Unwrap<VtkProp3DAxisFollowerWrap>(info.Holder());
	vtkProp3DAxisFollower *native = (vtkProp3DAxisFollower *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkProp3DAxisFollower * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObject *) a0->native.GetPointer()
		);
			VtkProp3DAxisFollowerWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkProp3DAxisFollowerWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkProp3DAxisFollowerWrap *w = new VtkProp3DAxisFollowerWrap();
		w->native = r;
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkProp3DAxisFollowerWrap::SetAutoCenter(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkProp3DAxisFollowerWrap *wrapper = ObjectWrap::Unwrap<VtkProp3DAxisFollowerWrap>(info.Holder());
	vtkProp3DAxisFollower *native = (vtkProp3DAxisFollower *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetAutoCenter(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkProp3DAxisFollowerWrap::SetAxis(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkProp3DAxisFollowerWrap *wrapper = ObjectWrap::Unwrap<VtkProp3DAxisFollowerWrap>(info.Holder());
	vtkProp3DAxisFollower *native = (vtkProp3DAxisFollower *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkAxisActorWrap::ptpl))->HasInstance(info[0]))
	{
		VtkAxisActorWrap *a0 = ObjectWrap::Unwrap<VtkAxisActorWrap>(info[0]->ToObject());
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetAxis(
			(vtkAxisActor *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkProp3DAxisFollowerWrap::SetDistanceLODThreshold(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkProp3DAxisFollowerWrap *wrapper = ObjectWrap::Unwrap<VtkProp3DAxisFollowerWrap>(info.Holder());
	vtkProp3DAxisFollower *native = (vtkProp3DAxisFollower *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsNumber())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetDistanceLODThreshold(
			info[0]->NumberValue()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkProp3DAxisFollowerWrap::SetEnableDistanceLOD(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkProp3DAxisFollowerWrap *wrapper = ObjectWrap::Unwrap<VtkProp3DAxisFollowerWrap>(info.Holder());
	vtkProp3DAxisFollower *native = (vtkProp3DAxisFollower *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetEnableDistanceLOD(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkProp3DAxisFollowerWrap::SetEnableViewAngleLOD(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkProp3DAxisFollowerWrap *wrapper = ObjectWrap::Unwrap<VtkProp3DAxisFollowerWrap>(info.Holder());
	vtkProp3DAxisFollower *native = (vtkProp3DAxisFollower *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetEnableViewAngleLOD(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkProp3DAxisFollowerWrap::SetScreenOffset(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkProp3DAxisFollowerWrap *wrapper = ObjectWrap::Unwrap<VtkProp3DAxisFollowerWrap>(info.Holder());
	vtkProp3DAxisFollower *native = (vtkProp3DAxisFollower *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsNumber())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetScreenOffset(
			info[0]->NumberValue()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkProp3DAxisFollowerWrap::SetViewAngleLODThreshold(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkProp3DAxisFollowerWrap *wrapper = ObjectWrap::Unwrap<VtkProp3DAxisFollowerWrap>(info.Holder());
	vtkProp3DAxisFollower *native = (vtkProp3DAxisFollower *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsNumber())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetViewAngleLODThreshold(
			info[0]->NumberValue()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkProp3DAxisFollowerWrap::SetViewport(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkProp3DAxisFollowerWrap *wrapper = ObjectWrap::Unwrap<VtkProp3DAxisFollowerWrap>(info.Holder());
	vtkProp3DAxisFollower *native = (vtkProp3DAxisFollower *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkViewportWrap::ptpl))->HasInstance(info[0]))
	{
		VtkViewportWrap *a0 = ObjectWrap::Unwrap<VtkViewportWrap>(info[0]->ToObject());
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetViewport(
			(vtkViewport *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkProp3DAxisFollowerWrap::ShallowCopy(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkProp3DAxisFollowerWrap *wrapper = ObjectWrap::Unwrap<VtkProp3DAxisFollowerWrap>(info.Holder());
	vtkProp3DAxisFollower *native = (vtkProp3DAxisFollower *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkPropWrap::ptpl))->HasInstance(info[0]))
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
