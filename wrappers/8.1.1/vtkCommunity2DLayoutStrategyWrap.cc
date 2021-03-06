/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>

#include "vtkGraphLayoutStrategyWrap.h"
#include "vtkCommunity2DLayoutStrategyWrap.h"
#include "vtkObjectBaseWrap.h"
#include "../../plus/plus.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkCommunity2DLayoutStrategyWrap::ptpl;

VtkCommunity2DLayoutStrategyWrap::VtkCommunity2DLayoutStrategyWrap()
{ }

VtkCommunity2DLayoutStrategyWrap::VtkCommunity2DLayoutStrategyWrap(vtkSmartPointer<vtkCommunity2DLayoutStrategy> _native)
{ native = _native; }

VtkCommunity2DLayoutStrategyWrap::~VtkCommunity2DLayoutStrategyWrap()
{ }

void VtkCommunity2DLayoutStrategyWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkCommunity2DLayoutStrategy").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("Community2DLayoutStrategy").ToLocalChecked(), ConstructorGetter);
}

void VtkCommunity2DLayoutStrategyWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkCommunity2DLayoutStrategyWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkGraphLayoutStrategyWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkGraphLayoutStrategyWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkCommunity2DLayoutStrategyWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "GetCommunityArrayName", GetCommunityArrayName);
	Nan::SetPrototypeMethod(tpl, "getCommunityArrayName", GetCommunityArrayName);

	Nan::SetPrototypeMethod(tpl, "GetCommunityStrength", GetCommunityStrength);
	Nan::SetPrototypeMethod(tpl, "getCommunityStrength", GetCommunityStrength);

	Nan::SetPrototypeMethod(tpl, "GetCommunityStrengthMaxValue", GetCommunityStrengthMaxValue);
	Nan::SetPrototypeMethod(tpl, "getCommunityStrengthMaxValue", GetCommunityStrengthMaxValue);

	Nan::SetPrototypeMethod(tpl, "GetCommunityStrengthMinValue", GetCommunityStrengthMinValue);
	Nan::SetPrototypeMethod(tpl, "getCommunityStrengthMinValue", GetCommunityStrengthMinValue);

	Nan::SetPrototypeMethod(tpl, "GetCoolDownRate", GetCoolDownRate);
	Nan::SetPrototypeMethod(tpl, "getCoolDownRate", GetCoolDownRate);

	Nan::SetPrototypeMethod(tpl, "GetCoolDownRateMaxValue", GetCoolDownRateMaxValue);
	Nan::SetPrototypeMethod(tpl, "getCoolDownRateMaxValue", GetCoolDownRateMaxValue);

	Nan::SetPrototypeMethod(tpl, "GetCoolDownRateMinValue", GetCoolDownRateMinValue);
	Nan::SetPrototypeMethod(tpl, "getCoolDownRateMinValue", GetCoolDownRateMinValue);

	Nan::SetPrototypeMethod(tpl, "GetInitialTemperature", GetInitialTemperature);
	Nan::SetPrototypeMethod(tpl, "getInitialTemperature", GetInitialTemperature);

	Nan::SetPrototypeMethod(tpl, "GetInitialTemperatureMaxValue", GetInitialTemperatureMaxValue);
	Nan::SetPrototypeMethod(tpl, "getInitialTemperatureMaxValue", GetInitialTemperatureMaxValue);

	Nan::SetPrototypeMethod(tpl, "GetInitialTemperatureMinValue", GetInitialTemperatureMinValue);
	Nan::SetPrototypeMethod(tpl, "getInitialTemperatureMinValue", GetInitialTemperatureMinValue);

	Nan::SetPrototypeMethod(tpl, "GetIterationsPerLayout", GetIterationsPerLayout);
	Nan::SetPrototypeMethod(tpl, "getIterationsPerLayout", GetIterationsPerLayout);

	Nan::SetPrototypeMethod(tpl, "GetIterationsPerLayoutMaxValue", GetIterationsPerLayoutMaxValue);
	Nan::SetPrototypeMethod(tpl, "getIterationsPerLayoutMaxValue", GetIterationsPerLayoutMaxValue);

	Nan::SetPrototypeMethod(tpl, "GetIterationsPerLayoutMinValue", GetIterationsPerLayoutMinValue);
	Nan::SetPrototypeMethod(tpl, "getIterationsPerLayoutMinValue", GetIterationsPerLayoutMinValue);

	Nan::SetPrototypeMethod(tpl, "GetMaxNumberOfIterations", GetMaxNumberOfIterations);
	Nan::SetPrototypeMethod(tpl, "getMaxNumberOfIterations", GetMaxNumberOfIterations);

	Nan::SetPrototypeMethod(tpl, "GetMaxNumberOfIterationsMaxValue", GetMaxNumberOfIterationsMaxValue);
	Nan::SetPrototypeMethod(tpl, "getMaxNumberOfIterationsMaxValue", GetMaxNumberOfIterationsMaxValue);

	Nan::SetPrototypeMethod(tpl, "GetMaxNumberOfIterationsMinValue", GetMaxNumberOfIterationsMinValue);
	Nan::SetPrototypeMethod(tpl, "getMaxNumberOfIterationsMinValue", GetMaxNumberOfIterationsMinValue);

	Nan::SetPrototypeMethod(tpl, "GetRandomSeed", GetRandomSeed);
	Nan::SetPrototypeMethod(tpl, "getRandomSeed", GetRandomSeed);

	Nan::SetPrototypeMethod(tpl, "GetRandomSeedMaxValue", GetRandomSeedMaxValue);
	Nan::SetPrototypeMethod(tpl, "getRandomSeedMaxValue", GetRandomSeedMaxValue);

	Nan::SetPrototypeMethod(tpl, "GetRandomSeedMinValue", GetRandomSeedMinValue);
	Nan::SetPrototypeMethod(tpl, "getRandomSeedMinValue", GetRandomSeedMinValue);

	Nan::SetPrototypeMethod(tpl, "GetRestDistance", GetRestDistance);
	Nan::SetPrototypeMethod(tpl, "getRestDistance", GetRestDistance);

	Nan::SetPrototypeMethod(tpl, "Initialize", Initialize);
	Nan::SetPrototypeMethod(tpl, "initialize", Initialize);

	Nan::SetPrototypeMethod(tpl, "IsLayoutComplete", IsLayoutComplete);
	Nan::SetPrototypeMethod(tpl, "isLayoutComplete", IsLayoutComplete);

	Nan::SetPrototypeMethod(tpl, "Layout", Layout);
	Nan::SetPrototypeMethod(tpl, "layout", Layout);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetCommunityArrayName", SetCommunityArrayName);
	Nan::SetPrototypeMethod(tpl, "setCommunityArrayName", SetCommunityArrayName);

	Nan::SetPrototypeMethod(tpl, "SetCommunityStrength", SetCommunityStrength);
	Nan::SetPrototypeMethod(tpl, "setCommunityStrength", SetCommunityStrength);

	Nan::SetPrototypeMethod(tpl, "SetCoolDownRate", SetCoolDownRate);
	Nan::SetPrototypeMethod(tpl, "setCoolDownRate", SetCoolDownRate);

	Nan::SetPrototypeMethod(tpl, "SetInitialTemperature", SetInitialTemperature);
	Nan::SetPrototypeMethod(tpl, "setInitialTemperature", SetInitialTemperature);

	Nan::SetPrototypeMethod(tpl, "SetIterationsPerLayout", SetIterationsPerLayout);
	Nan::SetPrototypeMethod(tpl, "setIterationsPerLayout", SetIterationsPerLayout);

	Nan::SetPrototypeMethod(tpl, "SetMaxNumberOfIterations", SetMaxNumberOfIterations);
	Nan::SetPrototypeMethod(tpl, "setMaxNumberOfIterations", SetMaxNumberOfIterations);

	Nan::SetPrototypeMethod(tpl, "SetRandomSeed", SetRandomSeed);
	Nan::SetPrototypeMethod(tpl, "setRandomSeed", SetRandomSeed);

	Nan::SetPrototypeMethod(tpl, "SetRestDistance", SetRestDistance);
	Nan::SetPrototypeMethod(tpl, "setRestDistance", SetRestDistance);

#ifdef VTK_NODE_PLUS_VTKCOMMUNITY2DLAYOUTSTRATEGYWRAP_INITPTPL
	VTK_NODE_PLUS_VTKCOMMUNITY2DLAYOUTSTRATEGYWRAP_INITPTPL
#endif
	ptpl.Reset( tpl );
}

void VtkCommunity2DLayoutStrategyWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkCommunity2DLayoutStrategy> native = vtkSmartPointer<vtkCommunity2DLayoutStrategy>::New();
		VtkCommunity2DLayoutStrategyWrap* obj = new VtkCommunity2DLayoutStrategyWrap(native);
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

void VtkCommunity2DLayoutStrategyWrap::GetCommunityArrayName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCommunity2DLayoutStrategyWrap *wrapper = ObjectWrap::Unwrap<VtkCommunity2DLayoutStrategyWrap>(info.Holder());
	vtkCommunity2DLayoutStrategy *native = (vtkCommunity2DLayoutStrategy *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetCommunityArrayName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkCommunity2DLayoutStrategyWrap::GetCommunityStrength(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCommunity2DLayoutStrategyWrap *wrapper = ObjectWrap::Unwrap<VtkCommunity2DLayoutStrategyWrap>(info.Holder());
	vtkCommunity2DLayoutStrategy *native = (vtkCommunity2DLayoutStrategy *)wrapper->native.GetPointer();
	float r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetCommunityStrength();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkCommunity2DLayoutStrategyWrap::GetCommunityStrengthMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCommunity2DLayoutStrategyWrap *wrapper = ObjectWrap::Unwrap<VtkCommunity2DLayoutStrategyWrap>(info.Holder());
	vtkCommunity2DLayoutStrategy *native = (vtkCommunity2DLayoutStrategy *)wrapper->native.GetPointer();
	float r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetCommunityStrengthMaxValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkCommunity2DLayoutStrategyWrap::GetCommunityStrengthMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCommunity2DLayoutStrategyWrap *wrapper = ObjectWrap::Unwrap<VtkCommunity2DLayoutStrategyWrap>(info.Holder());
	vtkCommunity2DLayoutStrategy *native = (vtkCommunity2DLayoutStrategy *)wrapper->native.GetPointer();
	float r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetCommunityStrengthMinValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkCommunity2DLayoutStrategyWrap::GetCoolDownRate(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCommunity2DLayoutStrategyWrap *wrapper = ObjectWrap::Unwrap<VtkCommunity2DLayoutStrategyWrap>(info.Holder());
	vtkCommunity2DLayoutStrategy *native = (vtkCommunity2DLayoutStrategy *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetCoolDownRate();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkCommunity2DLayoutStrategyWrap::GetCoolDownRateMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCommunity2DLayoutStrategyWrap *wrapper = ObjectWrap::Unwrap<VtkCommunity2DLayoutStrategyWrap>(info.Holder());
	vtkCommunity2DLayoutStrategy *native = (vtkCommunity2DLayoutStrategy *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetCoolDownRateMaxValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkCommunity2DLayoutStrategyWrap::GetCoolDownRateMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCommunity2DLayoutStrategyWrap *wrapper = ObjectWrap::Unwrap<VtkCommunity2DLayoutStrategyWrap>(info.Holder());
	vtkCommunity2DLayoutStrategy *native = (vtkCommunity2DLayoutStrategy *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetCoolDownRateMinValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkCommunity2DLayoutStrategyWrap::GetInitialTemperature(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCommunity2DLayoutStrategyWrap *wrapper = ObjectWrap::Unwrap<VtkCommunity2DLayoutStrategyWrap>(info.Holder());
	vtkCommunity2DLayoutStrategy *native = (vtkCommunity2DLayoutStrategy *)wrapper->native.GetPointer();
	float r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetInitialTemperature();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkCommunity2DLayoutStrategyWrap::GetInitialTemperatureMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCommunity2DLayoutStrategyWrap *wrapper = ObjectWrap::Unwrap<VtkCommunity2DLayoutStrategyWrap>(info.Holder());
	vtkCommunity2DLayoutStrategy *native = (vtkCommunity2DLayoutStrategy *)wrapper->native.GetPointer();
	float r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetInitialTemperatureMaxValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkCommunity2DLayoutStrategyWrap::GetInitialTemperatureMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCommunity2DLayoutStrategyWrap *wrapper = ObjectWrap::Unwrap<VtkCommunity2DLayoutStrategyWrap>(info.Holder());
	vtkCommunity2DLayoutStrategy *native = (vtkCommunity2DLayoutStrategy *)wrapper->native.GetPointer();
	float r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetInitialTemperatureMinValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkCommunity2DLayoutStrategyWrap::GetIterationsPerLayout(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCommunity2DLayoutStrategyWrap *wrapper = ObjectWrap::Unwrap<VtkCommunity2DLayoutStrategyWrap>(info.Holder());
	vtkCommunity2DLayoutStrategy *native = (vtkCommunity2DLayoutStrategy *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetIterationsPerLayout();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkCommunity2DLayoutStrategyWrap::GetIterationsPerLayoutMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCommunity2DLayoutStrategyWrap *wrapper = ObjectWrap::Unwrap<VtkCommunity2DLayoutStrategyWrap>(info.Holder());
	vtkCommunity2DLayoutStrategy *native = (vtkCommunity2DLayoutStrategy *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetIterationsPerLayoutMaxValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkCommunity2DLayoutStrategyWrap::GetIterationsPerLayoutMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCommunity2DLayoutStrategyWrap *wrapper = ObjectWrap::Unwrap<VtkCommunity2DLayoutStrategyWrap>(info.Holder());
	vtkCommunity2DLayoutStrategy *native = (vtkCommunity2DLayoutStrategy *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetIterationsPerLayoutMinValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkCommunity2DLayoutStrategyWrap::GetMaxNumberOfIterations(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCommunity2DLayoutStrategyWrap *wrapper = ObjectWrap::Unwrap<VtkCommunity2DLayoutStrategyWrap>(info.Holder());
	vtkCommunity2DLayoutStrategy *native = (vtkCommunity2DLayoutStrategy *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetMaxNumberOfIterations();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkCommunity2DLayoutStrategyWrap::GetMaxNumberOfIterationsMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCommunity2DLayoutStrategyWrap *wrapper = ObjectWrap::Unwrap<VtkCommunity2DLayoutStrategyWrap>(info.Holder());
	vtkCommunity2DLayoutStrategy *native = (vtkCommunity2DLayoutStrategy *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetMaxNumberOfIterationsMaxValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkCommunity2DLayoutStrategyWrap::GetMaxNumberOfIterationsMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCommunity2DLayoutStrategyWrap *wrapper = ObjectWrap::Unwrap<VtkCommunity2DLayoutStrategyWrap>(info.Holder());
	vtkCommunity2DLayoutStrategy *native = (vtkCommunity2DLayoutStrategy *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetMaxNumberOfIterationsMinValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkCommunity2DLayoutStrategyWrap::GetRandomSeed(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCommunity2DLayoutStrategyWrap *wrapper = ObjectWrap::Unwrap<VtkCommunity2DLayoutStrategyWrap>(info.Holder());
	vtkCommunity2DLayoutStrategy *native = (vtkCommunity2DLayoutStrategy *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetRandomSeed();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkCommunity2DLayoutStrategyWrap::GetRandomSeedMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCommunity2DLayoutStrategyWrap *wrapper = ObjectWrap::Unwrap<VtkCommunity2DLayoutStrategyWrap>(info.Holder());
	vtkCommunity2DLayoutStrategy *native = (vtkCommunity2DLayoutStrategy *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetRandomSeedMaxValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkCommunity2DLayoutStrategyWrap::GetRandomSeedMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCommunity2DLayoutStrategyWrap *wrapper = ObjectWrap::Unwrap<VtkCommunity2DLayoutStrategyWrap>(info.Holder());
	vtkCommunity2DLayoutStrategy *native = (vtkCommunity2DLayoutStrategy *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetRandomSeedMinValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkCommunity2DLayoutStrategyWrap::GetRestDistance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCommunity2DLayoutStrategyWrap *wrapper = ObjectWrap::Unwrap<VtkCommunity2DLayoutStrategyWrap>(info.Holder());
	vtkCommunity2DLayoutStrategy *native = (vtkCommunity2DLayoutStrategy *)wrapper->native.GetPointer();
	float r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetRestDistance();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkCommunity2DLayoutStrategyWrap::Initialize(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCommunity2DLayoutStrategyWrap *wrapper = ObjectWrap::Unwrap<VtkCommunity2DLayoutStrategyWrap>(info.Holder());
	vtkCommunity2DLayoutStrategy *native = (vtkCommunity2DLayoutStrategy *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->Initialize();
}

void VtkCommunity2DLayoutStrategyWrap::IsLayoutComplete(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCommunity2DLayoutStrategyWrap *wrapper = ObjectWrap::Unwrap<VtkCommunity2DLayoutStrategyWrap>(info.Holder());
	vtkCommunity2DLayoutStrategy *native = (vtkCommunity2DLayoutStrategy *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->IsLayoutComplete();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkCommunity2DLayoutStrategyWrap::Layout(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCommunity2DLayoutStrategyWrap *wrapper = ObjectWrap::Unwrap<VtkCommunity2DLayoutStrategyWrap>(info.Holder());
	vtkCommunity2DLayoutStrategy *native = (vtkCommunity2DLayoutStrategy *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->Layout();
}

void VtkCommunity2DLayoutStrategyWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCommunity2DLayoutStrategyWrap *wrapper = ObjectWrap::Unwrap<VtkCommunity2DLayoutStrategyWrap>(info.Holder());
	vtkCommunity2DLayoutStrategy *native = (vtkCommunity2DLayoutStrategy *)wrapper->native.GetPointer();
	vtkCommunity2DLayoutStrategy * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
	VtkCommunity2DLayoutStrategyWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkCommunity2DLayoutStrategyWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkCommunity2DLayoutStrategyWrap *w = new VtkCommunity2DLayoutStrategyWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkCommunity2DLayoutStrategyWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCommunity2DLayoutStrategyWrap *wrapper = ObjectWrap::Unwrap<VtkCommunity2DLayoutStrategyWrap>(info.Holder());
	vtkCommunity2DLayoutStrategy *native = (vtkCommunity2DLayoutStrategy *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectBaseWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectBaseWrap *a0 = ObjectWrap::Unwrap<VtkObjectBaseWrap>(info[0]->ToObject());
		vtkCommunity2DLayoutStrategy * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObjectBase *) a0->native.GetPointer()
		);
		VtkCommunity2DLayoutStrategyWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkCommunity2DLayoutStrategyWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkCommunity2DLayoutStrategyWrap *w = new VtkCommunity2DLayoutStrategyWrap();
		w->native = r;
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkCommunity2DLayoutStrategyWrap::SetCommunityArrayName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCommunity2DLayoutStrategyWrap *wrapper = ObjectWrap::Unwrap<VtkCommunity2DLayoutStrategyWrap>(info.Holder());
	vtkCommunity2DLayoutStrategy *native = (vtkCommunity2DLayoutStrategy *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsString())
	{
		Nan::Utf8String a0(info[0]);
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetCommunityArrayName(
			*a0
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkCommunity2DLayoutStrategyWrap::SetCommunityStrength(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCommunity2DLayoutStrategyWrap *wrapper = ObjectWrap::Unwrap<VtkCommunity2DLayoutStrategyWrap>(info.Holder());
	vtkCommunity2DLayoutStrategy *native = (vtkCommunity2DLayoutStrategy *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsNumber())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetCommunityStrength(
			info[0]->NumberValue()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkCommunity2DLayoutStrategyWrap::SetCoolDownRate(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCommunity2DLayoutStrategyWrap *wrapper = ObjectWrap::Unwrap<VtkCommunity2DLayoutStrategyWrap>(info.Holder());
	vtkCommunity2DLayoutStrategy *native = (vtkCommunity2DLayoutStrategy *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsNumber())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetCoolDownRate(
			info[0]->NumberValue()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkCommunity2DLayoutStrategyWrap::SetInitialTemperature(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCommunity2DLayoutStrategyWrap *wrapper = ObjectWrap::Unwrap<VtkCommunity2DLayoutStrategyWrap>(info.Holder());
	vtkCommunity2DLayoutStrategy *native = (vtkCommunity2DLayoutStrategy *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsNumber())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetInitialTemperature(
			info[0]->NumberValue()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkCommunity2DLayoutStrategyWrap::SetIterationsPerLayout(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCommunity2DLayoutStrategyWrap *wrapper = ObjectWrap::Unwrap<VtkCommunity2DLayoutStrategyWrap>(info.Holder());
	vtkCommunity2DLayoutStrategy *native = (vtkCommunity2DLayoutStrategy *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetIterationsPerLayout(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkCommunity2DLayoutStrategyWrap::SetMaxNumberOfIterations(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCommunity2DLayoutStrategyWrap *wrapper = ObjectWrap::Unwrap<VtkCommunity2DLayoutStrategyWrap>(info.Holder());
	vtkCommunity2DLayoutStrategy *native = (vtkCommunity2DLayoutStrategy *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetMaxNumberOfIterations(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkCommunity2DLayoutStrategyWrap::SetRandomSeed(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCommunity2DLayoutStrategyWrap *wrapper = ObjectWrap::Unwrap<VtkCommunity2DLayoutStrategyWrap>(info.Holder());
	vtkCommunity2DLayoutStrategy *native = (vtkCommunity2DLayoutStrategy *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetRandomSeed(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkCommunity2DLayoutStrategyWrap::SetRestDistance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCommunity2DLayoutStrategyWrap *wrapper = ObjectWrap::Unwrap<VtkCommunity2DLayoutStrategyWrap>(info.Holder());
	vtkCommunity2DLayoutStrategy *native = (vtkCommunity2DLayoutStrategy *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsNumber())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetRestDistance(
			info[0]->NumberValue()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

