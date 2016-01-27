/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkFollowerWrap.h"
#include "vtkAxisFollowerWrap.h"
#include "vtkObjectWrap.h"
#include "vtkAxisActorWrap.h"
#include "vtkViewportWrap.h"
#include "vtkRendererWrap.h"
#include "vtkPropWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkAxisFollowerWrap::ptpl;

VtkAxisFollowerWrap::VtkAxisFollowerWrap()
{ }

VtkAxisFollowerWrap::VtkAxisFollowerWrap(vtkSmartPointer<vtkAxisFollower> _native)
{ native = _native; }

VtkAxisFollowerWrap::~VtkAxisFollowerWrap()
{ }

void VtkAxisFollowerWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkAxisFollower").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("AxisFollower").ToLocalChecked(), ConstructorGetter);
}

void VtkAxisFollowerWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkAxisFollowerWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkFollowerWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkFollowerWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkAxisFollowerWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "AutoCenterOff", AutoCenterOff);
	Nan::SetPrototypeMethod(tpl, "autoCenterOff", AutoCenterOff);

	Nan::SetPrototypeMethod(tpl, "AutoCenterOn", AutoCenterOn);
	Nan::SetPrototypeMethod(tpl, "autoCenterOn", AutoCenterOn);

	Nan::SetPrototypeMethod(tpl, "ComputeTransformMatrix", ComputeTransformMatrix);
	Nan::SetPrototypeMethod(tpl, "computeTransformMatrix", ComputeTransformMatrix);

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

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "Render", Render);
	Nan::SetPrototypeMethod(tpl, "render", Render);

	Nan::SetPrototypeMethod(tpl, "RenderOpaqueGeometry", RenderOpaqueGeometry);
	Nan::SetPrototypeMethod(tpl, "renderOpaqueGeometry", RenderOpaqueGeometry);

	Nan::SetPrototypeMethod(tpl, "RenderTranslucentPolygonalGeometry", RenderTranslucentPolygonalGeometry);
	Nan::SetPrototypeMethod(tpl, "renderTranslucentPolygonalGeometry", RenderTranslucentPolygonalGeometry);

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

	Nan::SetPrototypeMethod(tpl, "ShallowCopy", ShallowCopy);
	Nan::SetPrototypeMethod(tpl, "shallowCopy", ShallowCopy);

	ptpl.Reset( tpl );
}

void VtkAxisFollowerWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkAxisFollower> native = vtkSmartPointer<vtkAxisFollower>::New();
		VtkAxisFollowerWrap* obj = new VtkAxisFollowerWrap(native);		obj->Wrap(info.This());
	}
	else
	{
		Nan::Utf8String s(info[0]);
		if(info[0]->ToObject() != vtkNodeJsNoWrap )
			Nan::ThrowError("Parameter Error");
	}

	info.GetReturnValue().Set(info.This());
}

void VtkAxisFollowerWrap::AutoCenterOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAxisFollowerWrap *wrapper = ObjectWrap::Unwrap<VtkAxisFollowerWrap>(info.Holder());
	vtkAxisFollower *native = (vtkAxisFollower *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->AutoCenterOff();
}

void VtkAxisFollowerWrap::AutoCenterOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAxisFollowerWrap *wrapper = ObjectWrap::Unwrap<VtkAxisFollowerWrap>(info.Holder());
	vtkAxisFollower *native = (vtkAxisFollower *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->AutoCenterOn();
}

void VtkAxisFollowerWrap::ComputeTransformMatrix(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAxisFollowerWrap *wrapper = ObjectWrap::Unwrap<VtkAxisFollowerWrap>(info.Holder());
	vtkAxisFollower *native = (vtkAxisFollower *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkRendererWrap::ptpl))->HasInstance(info[0]))
	{
		VtkRendererWrap *a0 = ObjectWrap::Unwrap<VtkRendererWrap>(info[0]->ToObject());
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->ComputeTransformMatrix(
			(vtkRenderer *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkAxisFollowerWrap::GetAutoCenter(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAxisFollowerWrap *wrapper = ObjectWrap::Unwrap<VtkAxisFollowerWrap>(info.Holder());
	vtkAxisFollower *native = (vtkAxisFollower *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetAutoCenter();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkAxisFollowerWrap::GetAxis(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAxisFollowerWrap *wrapper = ObjectWrap::Unwrap<VtkAxisFollowerWrap>(info.Holder());
	vtkAxisFollower *native = (vtkAxisFollower *)wrapper->native.GetPointer();
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
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkAxisFollowerWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAxisFollowerWrap *wrapper = ObjectWrap::Unwrap<VtkAxisFollowerWrap>(info.Holder());
	vtkAxisFollower *native = (vtkAxisFollower *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkAxisFollowerWrap::GetDistanceLODThreshold(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAxisFollowerWrap *wrapper = ObjectWrap::Unwrap<VtkAxisFollowerWrap>(info.Holder());
	vtkAxisFollower *native = (vtkAxisFollower *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetDistanceLODThreshold();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkAxisFollowerWrap::GetDistanceLODThresholdMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAxisFollowerWrap *wrapper = ObjectWrap::Unwrap<VtkAxisFollowerWrap>(info.Holder());
	vtkAxisFollower *native = (vtkAxisFollower *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetDistanceLODThresholdMaxValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkAxisFollowerWrap::GetDistanceLODThresholdMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAxisFollowerWrap *wrapper = ObjectWrap::Unwrap<VtkAxisFollowerWrap>(info.Holder());
	vtkAxisFollower *native = (vtkAxisFollower *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetDistanceLODThresholdMinValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkAxisFollowerWrap::GetEnableDistanceLOD(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAxisFollowerWrap *wrapper = ObjectWrap::Unwrap<VtkAxisFollowerWrap>(info.Holder());
	vtkAxisFollower *native = (vtkAxisFollower *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetEnableDistanceLOD();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkAxisFollowerWrap::GetEnableViewAngleLOD(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAxisFollowerWrap *wrapper = ObjectWrap::Unwrap<VtkAxisFollowerWrap>(info.Holder());
	vtkAxisFollower *native = (vtkAxisFollower *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetEnableViewAngleLOD();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkAxisFollowerWrap::GetScreenOffset(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAxisFollowerWrap *wrapper = ObjectWrap::Unwrap<VtkAxisFollowerWrap>(info.Holder());
	vtkAxisFollower *native = (vtkAxisFollower *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetScreenOffset();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkAxisFollowerWrap::GetViewAngleLODThreshold(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAxisFollowerWrap *wrapper = ObjectWrap::Unwrap<VtkAxisFollowerWrap>(info.Holder());
	vtkAxisFollower *native = (vtkAxisFollower *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetViewAngleLODThreshold();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkAxisFollowerWrap::GetViewAngleLODThresholdMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAxisFollowerWrap *wrapper = ObjectWrap::Unwrap<VtkAxisFollowerWrap>(info.Holder());
	vtkAxisFollower *native = (vtkAxisFollower *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetViewAngleLODThresholdMaxValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkAxisFollowerWrap::GetViewAngleLODThresholdMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAxisFollowerWrap *wrapper = ObjectWrap::Unwrap<VtkAxisFollowerWrap>(info.Holder());
	vtkAxisFollower *native = (vtkAxisFollower *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetViewAngleLODThresholdMinValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkAxisFollowerWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAxisFollowerWrap *wrapper = ObjectWrap::Unwrap<VtkAxisFollowerWrap>(info.Holder());
	vtkAxisFollower *native = (vtkAxisFollower *)wrapper->native.GetPointer();
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

void VtkAxisFollowerWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAxisFollowerWrap *wrapper = ObjectWrap::Unwrap<VtkAxisFollowerWrap>(info.Holder());
	vtkAxisFollower *native = (vtkAxisFollower *)wrapper->native.GetPointer();
	vtkAxisFollower * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
		VtkAxisFollowerWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkAxisFollowerWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkAxisFollowerWrap *w = new VtkAxisFollowerWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkAxisFollowerWrap::Render(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAxisFollowerWrap *wrapper = ObjectWrap::Unwrap<VtkAxisFollowerWrap>(info.Holder());
	vtkAxisFollower *native = (vtkAxisFollower *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkRendererWrap::ptpl))->HasInstance(info[0]))
	{
		VtkRendererWrap *a0 = ObjectWrap::Unwrap<VtkRendererWrap>(info[0]->ToObject());
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->Render(
			(vtkRenderer *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkAxisFollowerWrap::RenderOpaqueGeometry(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAxisFollowerWrap *wrapper = ObjectWrap::Unwrap<VtkAxisFollowerWrap>(info.Holder());
	vtkAxisFollower *native = (vtkAxisFollower *)wrapper->native.GetPointer();
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

void VtkAxisFollowerWrap::RenderTranslucentPolygonalGeometry(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAxisFollowerWrap *wrapper = ObjectWrap::Unwrap<VtkAxisFollowerWrap>(info.Holder());
	vtkAxisFollower *native = (vtkAxisFollower *)wrapper->native.GetPointer();
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

void VtkAxisFollowerWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAxisFollowerWrap *wrapper = ObjectWrap::Unwrap<VtkAxisFollowerWrap>(info.Holder());
	vtkAxisFollower *native = (vtkAxisFollower *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkAxisFollower * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObject *) a0->native.GetPointer()
		);
			VtkAxisFollowerWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkAxisFollowerWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkAxisFollowerWrap *w = new VtkAxisFollowerWrap();
		w->native.TakeReference(r);
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkAxisFollowerWrap::SetAutoCenter(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAxisFollowerWrap *wrapper = ObjectWrap::Unwrap<VtkAxisFollowerWrap>(info.Holder());
	vtkAxisFollower *native = (vtkAxisFollower *)wrapper->native.GetPointer();
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

void VtkAxisFollowerWrap::SetAxis(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAxisFollowerWrap *wrapper = ObjectWrap::Unwrap<VtkAxisFollowerWrap>(info.Holder());
	vtkAxisFollower *native = (vtkAxisFollower *)wrapper->native.GetPointer();
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

void VtkAxisFollowerWrap::SetDistanceLODThreshold(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAxisFollowerWrap *wrapper = ObjectWrap::Unwrap<VtkAxisFollowerWrap>(info.Holder());
	vtkAxisFollower *native = (vtkAxisFollower *)wrapper->native.GetPointer();
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

void VtkAxisFollowerWrap::SetEnableDistanceLOD(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAxisFollowerWrap *wrapper = ObjectWrap::Unwrap<VtkAxisFollowerWrap>(info.Holder());
	vtkAxisFollower *native = (vtkAxisFollower *)wrapper->native.GetPointer();
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

void VtkAxisFollowerWrap::SetEnableViewAngleLOD(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAxisFollowerWrap *wrapper = ObjectWrap::Unwrap<VtkAxisFollowerWrap>(info.Holder());
	vtkAxisFollower *native = (vtkAxisFollower *)wrapper->native.GetPointer();
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

void VtkAxisFollowerWrap::SetScreenOffset(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAxisFollowerWrap *wrapper = ObjectWrap::Unwrap<VtkAxisFollowerWrap>(info.Holder());
	vtkAxisFollower *native = (vtkAxisFollower *)wrapper->native.GetPointer();
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

void VtkAxisFollowerWrap::SetViewAngleLODThreshold(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAxisFollowerWrap *wrapper = ObjectWrap::Unwrap<VtkAxisFollowerWrap>(info.Holder());
	vtkAxisFollower *native = (vtkAxisFollower *)wrapper->native.GetPointer();
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

void VtkAxisFollowerWrap::ShallowCopy(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAxisFollowerWrap *wrapper = ObjectWrap::Unwrap<VtkAxisFollowerWrap>(info.Holder());
	vtkAxisFollower *native = (vtkAxisFollower *)wrapper->native.GetPointer();
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
