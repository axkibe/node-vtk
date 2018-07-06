/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>

#include "vtkObjectWrap.h"
#include "vtkFXAAOptionsWrap.h"
#include "vtkObjectBaseWrap.h"
#include "../../plus/plus.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkFXAAOptionsWrap::ptpl;

VtkFXAAOptionsWrap::VtkFXAAOptionsWrap()
{ }

VtkFXAAOptionsWrap::VtkFXAAOptionsWrap(vtkSmartPointer<vtkFXAAOptions> _native)
{ native = _native; }

VtkFXAAOptionsWrap::~VtkFXAAOptionsWrap()
{ }

void VtkFXAAOptionsWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkFXAAOptions").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("FXAAOptions").ToLocalChecked(), ConstructorGetter);
}

void VtkFXAAOptionsWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkFXAAOptionsWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkObjectWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkObjectWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkFXAAOptionsWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "GetEndpointSearchIterations", GetEndpointSearchIterations);
	Nan::SetPrototypeMethod(tpl, "getEndpointSearchIterations", GetEndpointSearchIterations);

	Nan::SetPrototypeMethod(tpl, "GetEndpointSearchIterationsMaxValue", GetEndpointSearchIterationsMaxValue);
	Nan::SetPrototypeMethod(tpl, "getEndpointSearchIterationsMaxValue", GetEndpointSearchIterationsMaxValue);

	Nan::SetPrototypeMethod(tpl, "GetEndpointSearchIterationsMinValue", GetEndpointSearchIterationsMinValue);
	Nan::SetPrototypeMethod(tpl, "getEndpointSearchIterationsMinValue", GetEndpointSearchIterationsMinValue);

	Nan::SetPrototypeMethod(tpl, "GetHardContrastThreshold", GetHardContrastThreshold);
	Nan::SetPrototypeMethod(tpl, "getHardContrastThreshold", GetHardContrastThreshold);

	Nan::SetPrototypeMethod(tpl, "GetHardContrastThresholdMaxValue", GetHardContrastThresholdMaxValue);
	Nan::SetPrototypeMethod(tpl, "getHardContrastThresholdMaxValue", GetHardContrastThresholdMaxValue);

	Nan::SetPrototypeMethod(tpl, "GetHardContrastThresholdMinValue", GetHardContrastThresholdMinValue);
	Nan::SetPrototypeMethod(tpl, "getHardContrastThresholdMinValue", GetHardContrastThresholdMinValue);

	Nan::SetPrototypeMethod(tpl, "GetRelativeContrastThreshold", GetRelativeContrastThreshold);
	Nan::SetPrototypeMethod(tpl, "getRelativeContrastThreshold", GetRelativeContrastThreshold);

	Nan::SetPrototypeMethod(tpl, "GetRelativeContrastThresholdMaxValue", GetRelativeContrastThresholdMaxValue);
	Nan::SetPrototypeMethod(tpl, "getRelativeContrastThresholdMaxValue", GetRelativeContrastThresholdMaxValue);

	Nan::SetPrototypeMethod(tpl, "GetRelativeContrastThresholdMinValue", GetRelativeContrastThresholdMinValue);
	Nan::SetPrototypeMethod(tpl, "getRelativeContrastThresholdMinValue", GetRelativeContrastThresholdMinValue);

	Nan::SetPrototypeMethod(tpl, "GetSubpixelBlendLimit", GetSubpixelBlendLimit);
	Nan::SetPrototypeMethod(tpl, "getSubpixelBlendLimit", GetSubpixelBlendLimit);

	Nan::SetPrototypeMethod(tpl, "GetSubpixelBlendLimitMaxValue", GetSubpixelBlendLimitMaxValue);
	Nan::SetPrototypeMethod(tpl, "getSubpixelBlendLimitMaxValue", GetSubpixelBlendLimitMaxValue);

	Nan::SetPrototypeMethod(tpl, "GetSubpixelBlendLimitMinValue", GetSubpixelBlendLimitMinValue);
	Nan::SetPrototypeMethod(tpl, "getSubpixelBlendLimitMinValue", GetSubpixelBlendLimitMinValue);

	Nan::SetPrototypeMethod(tpl, "GetSubpixelContrastThreshold", GetSubpixelContrastThreshold);
	Nan::SetPrototypeMethod(tpl, "getSubpixelContrastThreshold", GetSubpixelContrastThreshold);

	Nan::SetPrototypeMethod(tpl, "GetSubpixelContrastThresholdMaxValue", GetSubpixelContrastThresholdMaxValue);
	Nan::SetPrototypeMethod(tpl, "getSubpixelContrastThresholdMaxValue", GetSubpixelContrastThresholdMaxValue);

	Nan::SetPrototypeMethod(tpl, "GetSubpixelContrastThresholdMinValue", GetSubpixelContrastThresholdMinValue);
	Nan::SetPrototypeMethod(tpl, "getSubpixelContrastThresholdMinValue", GetSubpixelContrastThresholdMinValue);

	Nan::SetPrototypeMethod(tpl, "GetUseHighQualityEndpoints", GetUseHighQualityEndpoints);
	Nan::SetPrototypeMethod(tpl, "getUseHighQualityEndpoints", GetUseHighQualityEndpoints);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetEndpointSearchIterations", SetEndpointSearchIterations);
	Nan::SetPrototypeMethod(tpl, "setEndpointSearchIterations", SetEndpointSearchIterations);

	Nan::SetPrototypeMethod(tpl, "SetHardContrastThreshold", SetHardContrastThreshold);
	Nan::SetPrototypeMethod(tpl, "setHardContrastThreshold", SetHardContrastThreshold);

	Nan::SetPrototypeMethod(tpl, "SetRelativeContrastThreshold", SetRelativeContrastThreshold);
	Nan::SetPrototypeMethod(tpl, "setRelativeContrastThreshold", SetRelativeContrastThreshold);

	Nan::SetPrototypeMethod(tpl, "SetSubpixelBlendLimit", SetSubpixelBlendLimit);
	Nan::SetPrototypeMethod(tpl, "setSubpixelBlendLimit", SetSubpixelBlendLimit);

	Nan::SetPrototypeMethod(tpl, "SetSubpixelContrastThreshold", SetSubpixelContrastThreshold);
	Nan::SetPrototypeMethod(tpl, "setSubpixelContrastThreshold", SetSubpixelContrastThreshold);

	Nan::SetPrototypeMethod(tpl, "SetUseHighQualityEndpoints", SetUseHighQualityEndpoints);
	Nan::SetPrototypeMethod(tpl, "setUseHighQualityEndpoints", SetUseHighQualityEndpoints);

	Nan::SetPrototypeMethod(tpl, "UseHighQualityEndpointsOff", UseHighQualityEndpointsOff);
	Nan::SetPrototypeMethod(tpl, "useHighQualityEndpointsOff", UseHighQualityEndpointsOff);

	Nan::SetPrototypeMethod(tpl, "UseHighQualityEndpointsOn", UseHighQualityEndpointsOn);
	Nan::SetPrototypeMethod(tpl, "useHighQualityEndpointsOn", UseHighQualityEndpointsOn);

#ifdef VTK_NODE_PLUS_VTKFXAAOPTIONSWRAP_INITPTPL
	VTK_NODE_PLUS_VTKFXAAOPTIONSWRAP_INITPTPL
#endif
	ptpl.Reset( tpl );
}

void VtkFXAAOptionsWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkFXAAOptions> native = vtkSmartPointer<vtkFXAAOptions>::New();
		VtkFXAAOptionsWrap* obj = new VtkFXAAOptionsWrap(native);
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

void VtkFXAAOptionsWrap::GetEndpointSearchIterations(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkFXAAOptionsWrap *wrapper = ObjectWrap::Unwrap<VtkFXAAOptionsWrap>(info.Holder());
	vtkFXAAOptions *native = (vtkFXAAOptions *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetEndpointSearchIterations();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkFXAAOptionsWrap::GetEndpointSearchIterationsMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkFXAAOptionsWrap *wrapper = ObjectWrap::Unwrap<VtkFXAAOptionsWrap>(info.Holder());
	vtkFXAAOptions *native = (vtkFXAAOptions *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetEndpointSearchIterationsMaxValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkFXAAOptionsWrap::GetEndpointSearchIterationsMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkFXAAOptionsWrap *wrapper = ObjectWrap::Unwrap<VtkFXAAOptionsWrap>(info.Holder());
	vtkFXAAOptions *native = (vtkFXAAOptions *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetEndpointSearchIterationsMinValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkFXAAOptionsWrap::GetHardContrastThreshold(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkFXAAOptionsWrap *wrapper = ObjectWrap::Unwrap<VtkFXAAOptionsWrap>(info.Holder());
	vtkFXAAOptions *native = (vtkFXAAOptions *)wrapper->native.GetPointer();
	float r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetHardContrastThreshold();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkFXAAOptionsWrap::GetHardContrastThresholdMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkFXAAOptionsWrap *wrapper = ObjectWrap::Unwrap<VtkFXAAOptionsWrap>(info.Holder());
	vtkFXAAOptions *native = (vtkFXAAOptions *)wrapper->native.GetPointer();
	float r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetHardContrastThresholdMaxValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkFXAAOptionsWrap::GetHardContrastThresholdMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkFXAAOptionsWrap *wrapper = ObjectWrap::Unwrap<VtkFXAAOptionsWrap>(info.Holder());
	vtkFXAAOptions *native = (vtkFXAAOptions *)wrapper->native.GetPointer();
	float r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetHardContrastThresholdMinValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkFXAAOptionsWrap::GetRelativeContrastThreshold(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkFXAAOptionsWrap *wrapper = ObjectWrap::Unwrap<VtkFXAAOptionsWrap>(info.Holder());
	vtkFXAAOptions *native = (vtkFXAAOptions *)wrapper->native.GetPointer();
	float r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetRelativeContrastThreshold();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkFXAAOptionsWrap::GetRelativeContrastThresholdMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkFXAAOptionsWrap *wrapper = ObjectWrap::Unwrap<VtkFXAAOptionsWrap>(info.Holder());
	vtkFXAAOptions *native = (vtkFXAAOptions *)wrapper->native.GetPointer();
	float r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetRelativeContrastThresholdMaxValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkFXAAOptionsWrap::GetRelativeContrastThresholdMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkFXAAOptionsWrap *wrapper = ObjectWrap::Unwrap<VtkFXAAOptionsWrap>(info.Holder());
	vtkFXAAOptions *native = (vtkFXAAOptions *)wrapper->native.GetPointer();
	float r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetRelativeContrastThresholdMinValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkFXAAOptionsWrap::GetSubpixelBlendLimit(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkFXAAOptionsWrap *wrapper = ObjectWrap::Unwrap<VtkFXAAOptionsWrap>(info.Holder());
	vtkFXAAOptions *native = (vtkFXAAOptions *)wrapper->native.GetPointer();
	float r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetSubpixelBlendLimit();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkFXAAOptionsWrap::GetSubpixelBlendLimitMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkFXAAOptionsWrap *wrapper = ObjectWrap::Unwrap<VtkFXAAOptionsWrap>(info.Holder());
	vtkFXAAOptions *native = (vtkFXAAOptions *)wrapper->native.GetPointer();
	float r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetSubpixelBlendLimitMaxValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkFXAAOptionsWrap::GetSubpixelBlendLimitMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkFXAAOptionsWrap *wrapper = ObjectWrap::Unwrap<VtkFXAAOptionsWrap>(info.Holder());
	vtkFXAAOptions *native = (vtkFXAAOptions *)wrapper->native.GetPointer();
	float r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetSubpixelBlendLimitMinValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkFXAAOptionsWrap::GetSubpixelContrastThreshold(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkFXAAOptionsWrap *wrapper = ObjectWrap::Unwrap<VtkFXAAOptionsWrap>(info.Holder());
	vtkFXAAOptions *native = (vtkFXAAOptions *)wrapper->native.GetPointer();
	float r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetSubpixelContrastThreshold();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkFXAAOptionsWrap::GetSubpixelContrastThresholdMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkFXAAOptionsWrap *wrapper = ObjectWrap::Unwrap<VtkFXAAOptionsWrap>(info.Holder());
	vtkFXAAOptions *native = (vtkFXAAOptions *)wrapper->native.GetPointer();
	float r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetSubpixelContrastThresholdMaxValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkFXAAOptionsWrap::GetSubpixelContrastThresholdMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkFXAAOptionsWrap *wrapper = ObjectWrap::Unwrap<VtkFXAAOptionsWrap>(info.Holder());
	vtkFXAAOptions *native = (vtkFXAAOptions *)wrapper->native.GetPointer();
	float r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetSubpixelContrastThresholdMinValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkFXAAOptionsWrap::GetUseHighQualityEndpoints(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkFXAAOptionsWrap *wrapper = ObjectWrap::Unwrap<VtkFXAAOptionsWrap>(info.Holder());
	vtkFXAAOptions *native = (vtkFXAAOptions *)wrapper->native.GetPointer();
	bool r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetUseHighQualityEndpoints();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkFXAAOptionsWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkFXAAOptionsWrap *wrapper = ObjectWrap::Unwrap<VtkFXAAOptionsWrap>(info.Holder());
	vtkFXAAOptions *native = (vtkFXAAOptions *)wrapper->native.GetPointer();
	vtkFXAAOptions * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
	VtkFXAAOptionsWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkFXAAOptionsWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkFXAAOptionsWrap *w = new VtkFXAAOptionsWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkFXAAOptionsWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkFXAAOptionsWrap *wrapper = ObjectWrap::Unwrap<VtkFXAAOptionsWrap>(info.Holder());
	vtkFXAAOptions *native = (vtkFXAAOptions *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectBaseWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectBaseWrap *a0 = ObjectWrap::Unwrap<VtkObjectBaseWrap>(info[0]->ToObject());
		vtkFXAAOptions * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObjectBase *) a0->native.GetPointer()
		);
		VtkFXAAOptionsWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkFXAAOptionsWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkFXAAOptionsWrap *w = new VtkFXAAOptionsWrap();
		w->native = r;
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkFXAAOptionsWrap::SetEndpointSearchIterations(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkFXAAOptionsWrap *wrapper = ObjectWrap::Unwrap<VtkFXAAOptionsWrap>(info.Holder());
	vtkFXAAOptions *native = (vtkFXAAOptions *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetEndpointSearchIterations(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkFXAAOptionsWrap::SetHardContrastThreshold(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkFXAAOptionsWrap *wrapper = ObjectWrap::Unwrap<VtkFXAAOptionsWrap>(info.Holder());
	vtkFXAAOptions *native = (vtkFXAAOptions *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsNumber())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetHardContrastThreshold(
			info[0]->NumberValue()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkFXAAOptionsWrap::SetRelativeContrastThreshold(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkFXAAOptionsWrap *wrapper = ObjectWrap::Unwrap<VtkFXAAOptionsWrap>(info.Holder());
	vtkFXAAOptions *native = (vtkFXAAOptions *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsNumber())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetRelativeContrastThreshold(
			info[0]->NumberValue()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkFXAAOptionsWrap::SetSubpixelBlendLimit(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkFXAAOptionsWrap *wrapper = ObjectWrap::Unwrap<VtkFXAAOptionsWrap>(info.Holder());
	vtkFXAAOptions *native = (vtkFXAAOptions *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsNumber())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetSubpixelBlendLimit(
			info[0]->NumberValue()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkFXAAOptionsWrap::SetSubpixelContrastThreshold(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkFXAAOptionsWrap *wrapper = ObjectWrap::Unwrap<VtkFXAAOptionsWrap>(info.Holder());
	vtkFXAAOptions *native = (vtkFXAAOptions *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsNumber())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetSubpixelContrastThreshold(
			info[0]->NumberValue()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkFXAAOptionsWrap::SetUseHighQualityEndpoints(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkFXAAOptionsWrap *wrapper = ObjectWrap::Unwrap<VtkFXAAOptionsWrap>(info.Holder());
	vtkFXAAOptions *native = (vtkFXAAOptions *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsBoolean())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetUseHighQualityEndpoints(
			info[0]->BooleanValue()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkFXAAOptionsWrap::UseHighQualityEndpointsOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkFXAAOptionsWrap *wrapper = ObjectWrap::Unwrap<VtkFXAAOptionsWrap>(info.Holder());
	vtkFXAAOptions *native = (vtkFXAAOptions *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->UseHighQualityEndpointsOff();
}

void VtkFXAAOptionsWrap::UseHighQualityEndpointsOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkFXAAOptionsWrap *wrapper = ObjectWrap::Unwrap<VtkFXAAOptionsWrap>(info.Holder());
	vtkFXAAOptions *native = (vtkFXAAOptions *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->UseHighQualityEndpointsOn();
}

