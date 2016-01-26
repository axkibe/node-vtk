/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkGraphLayoutStrategyWrap.h"
#include "vtkConstrained2DLayoutStrategyWrap.h"
#include "vtkObjectWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::Function> VtkConstrained2DLayoutStrategyWrap::constructor;
Nan::Persistent<v8::FunctionTemplate> VtkConstrained2DLayoutStrategyWrap::ptpl;

VtkConstrained2DLayoutStrategyWrap::VtkConstrained2DLayoutStrategyWrap()
{ }

VtkConstrained2DLayoutStrategyWrap::VtkConstrained2DLayoutStrategyWrap(vtkSmartPointer<vtkConstrained2DLayoutStrategy> _native)
{ native = _native; }

VtkConstrained2DLayoutStrategyWrap::~VtkConstrained2DLayoutStrategyWrap()
{ }

void VtkConstrained2DLayoutStrategyWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkConstrained2DLayoutStrategy").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("Constrained2DLayoutStrategy").ToLocalChecked(), ConstructorGetter);
}

void VtkConstrained2DLayoutStrategyWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkConstrained2DLayoutStrategyWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkGraphLayoutStrategyWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkGraphLayoutStrategyWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkConstrained2DLayoutStrategyWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "GetCoolDownRate", GetCoolDownRate);
	Nan::SetPrototypeMethod(tpl, "getCoolDownRate", GetCoolDownRate);

	Nan::SetPrototypeMethod(tpl, "GetCoolDownRateMaxValue", GetCoolDownRateMaxValue);
	Nan::SetPrototypeMethod(tpl, "getCoolDownRateMaxValue", GetCoolDownRateMaxValue);

	Nan::SetPrototypeMethod(tpl, "GetCoolDownRateMinValue", GetCoolDownRateMinValue);
	Nan::SetPrototypeMethod(tpl, "getCoolDownRateMinValue", GetCoolDownRateMinValue);

	Nan::SetPrototypeMethod(tpl, "GetInputArrayName", GetInputArrayName);
	Nan::SetPrototypeMethod(tpl, "getInputArrayName", GetInputArrayName);

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

	Nan::SetPrototypeMethod(tpl, "Initialize", Initialize);
	Nan::SetPrototypeMethod(tpl, "initialize", Initialize);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "IsLayoutComplete", IsLayoutComplete);
	Nan::SetPrototypeMethod(tpl, "isLayoutComplete", IsLayoutComplete);

	Nan::SetPrototypeMethod(tpl, "Layout", Layout);
	Nan::SetPrototypeMethod(tpl, "layout", Layout);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetCoolDownRate", SetCoolDownRate);
	Nan::SetPrototypeMethod(tpl, "setCoolDownRate", SetCoolDownRate);

	Nan::SetPrototypeMethod(tpl, "SetInputArrayName", SetInputArrayName);
	Nan::SetPrototypeMethod(tpl, "setInputArrayName", SetInputArrayName);

	Nan::SetPrototypeMethod(tpl, "SetIterationsPerLayout", SetIterationsPerLayout);
	Nan::SetPrototypeMethod(tpl, "setIterationsPerLayout", SetIterationsPerLayout);

	Nan::SetPrototypeMethod(tpl, "SetMaxNumberOfIterations", SetMaxNumberOfIterations);
	Nan::SetPrototypeMethod(tpl, "setMaxNumberOfIterations", SetMaxNumberOfIterations);

	Nan::SetPrototypeMethod(tpl, "SetRandomSeed", SetRandomSeed);
	Nan::SetPrototypeMethod(tpl, "setRandomSeed", SetRandomSeed);

	constructor.Reset( tpl->GetFunction() );
	ptpl.Reset( tpl );
}

void VtkConstrained2DLayoutStrategyWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkConstrained2DLayoutStrategy> native = vtkSmartPointer<vtkConstrained2DLayoutStrategy>::New();
		VtkConstrained2DLayoutStrategyWrap* obj = new VtkConstrained2DLayoutStrategyWrap(native);		obj->Wrap(info.This());
	}
	else
	{
		Nan::Utf8String s(info[0]);
		if(info[0]->ToObject() != vtkNodeJsNoWrap )
			Nan::ThrowError("Parameter Error");
	}

	info.GetReturnValue().Set(info.This());
}

void VtkConstrained2DLayoutStrategyWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkConstrained2DLayoutStrategyWrap *wrapper = ObjectWrap::Unwrap<VtkConstrained2DLayoutStrategyWrap>(info.Holder());
	vtkConstrained2DLayoutStrategy *native = (vtkConstrained2DLayoutStrategy *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkConstrained2DLayoutStrategyWrap::GetCoolDownRate(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkConstrained2DLayoutStrategyWrap *wrapper = ObjectWrap::Unwrap<VtkConstrained2DLayoutStrategyWrap>(info.Holder());
	vtkConstrained2DLayoutStrategy *native = (vtkConstrained2DLayoutStrategy *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetCoolDownRate();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkConstrained2DLayoutStrategyWrap::GetCoolDownRateMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkConstrained2DLayoutStrategyWrap *wrapper = ObjectWrap::Unwrap<VtkConstrained2DLayoutStrategyWrap>(info.Holder());
	vtkConstrained2DLayoutStrategy *native = (vtkConstrained2DLayoutStrategy *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetCoolDownRateMaxValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkConstrained2DLayoutStrategyWrap::GetCoolDownRateMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkConstrained2DLayoutStrategyWrap *wrapper = ObjectWrap::Unwrap<VtkConstrained2DLayoutStrategyWrap>(info.Holder());
	vtkConstrained2DLayoutStrategy *native = (vtkConstrained2DLayoutStrategy *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetCoolDownRateMinValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkConstrained2DLayoutStrategyWrap::GetInputArrayName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkConstrained2DLayoutStrategyWrap *wrapper = ObjectWrap::Unwrap<VtkConstrained2DLayoutStrategyWrap>(info.Holder());
	vtkConstrained2DLayoutStrategy *native = (vtkConstrained2DLayoutStrategy *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetInputArrayName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkConstrained2DLayoutStrategyWrap::GetIterationsPerLayout(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkConstrained2DLayoutStrategyWrap *wrapper = ObjectWrap::Unwrap<VtkConstrained2DLayoutStrategyWrap>(info.Holder());
	vtkConstrained2DLayoutStrategy *native = (vtkConstrained2DLayoutStrategy *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetIterationsPerLayout();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkConstrained2DLayoutStrategyWrap::GetIterationsPerLayoutMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkConstrained2DLayoutStrategyWrap *wrapper = ObjectWrap::Unwrap<VtkConstrained2DLayoutStrategyWrap>(info.Holder());
	vtkConstrained2DLayoutStrategy *native = (vtkConstrained2DLayoutStrategy *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetIterationsPerLayoutMaxValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkConstrained2DLayoutStrategyWrap::GetIterationsPerLayoutMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkConstrained2DLayoutStrategyWrap *wrapper = ObjectWrap::Unwrap<VtkConstrained2DLayoutStrategyWrap>(info.Holder());
	vtkConstrained2DLayoutStrategy *native = (vtkConstrained2DLayoutStrategy *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetIterationsPerLayoutMinValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkConstrained2DLayoutStrategyWrap::GetMaxNumberOfIterations(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkConstrained2DLayoutStrategyWrap *wrapper = ObjectWrap::Unwrap<VtkConstrained2DLayoutStrategyWrap>(info.Holder());
	vtkConstrained2DLayoutStrategy *native = (vtkConstrained2DLayoutStrategy *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetMaxNumberOfIterations();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkConstrained2DLayoutStrategyWrap::GetMaxNumberOfIterationsMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkConstrained2DLayoutStrategyWrap *wrapper = ObjectWrap::Unwrap<VtkConstrained2DLayoutStrategyWrap>(info.Holder());
	vtkConstrained2DLayoutStrategy *native = (vtkConstrained2DLayoutStrategy *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetMaxNumberOfIterationsMaxValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkConstrained2DLayoutStrategyWrap::GetMaxNumberOfIterationsMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkConstrained2DLayoutStrategyWrap *wrapper = ObjectWrap::Unwrap<VtkConstrained2DLayoutStrategyWrap>(info.Holder());
	vtkConstrained2DLayoutStrategy *native = (vtkConstrained2DLayoutStrategy *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetMaxNumberOfIterationsMinValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkConstrained2DLayoutStrategyWrap::GetRandomSeed(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkConstrained2DLayoutStrategyWrap *wrapper = ObjectWrap::Unwrap<VtkConstrained2DLayoutStrategyWrap>(info.Holder());
	vtkConstrained2DLayoutStrategy *native = (vtkConstrained2DLayoutStrategy *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetRandomSeed();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkConstrained2DLayoutStrategyWrap::GetRandomSeedMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkConstrained2DLayoutStrategyWrap *wrapper = ObjectWrap::Unwrap<VtkConstrained2DLayoutStrategyWrap>(info.Holder());
	vtkConstrained2DLayoutStrategy *native = (vtkConstrained2DLayoutStrategy *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetRandomSeedMaxValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkConstrained2DLayoutStrategyWrap::GetRandomSeedMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkConstrained2DLayoutStrategyWrap *wrapper = ObjectWrap::Unwrap<VtkConstrained2DLayoutStrategyWrap>(info.Holder());
	vtkConstrained2DLayoutStrategy *native = (vtkConstrained2DLayoutStrategy *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetRandomSeedMinValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkConstrained2DLayoutStrategyWrap::Initialize(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkConstrained2DLayoutStrategyWrap *wrapper = ObjectWrap::Unwrap<VtkConstrained2DLayoutStrategyWrap>(info.Holder());
	vtkConstrained2DLayoutStrategy *native = (vtkConstrained2DLayoutStrategy *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->Initialize();
}

void VtkConstrained2DLayoutStrategyWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkConstrained2DLayoutStrategyWrap *wrapper = ObjectWrap::Unwrap<VtkConstrained2DLayoutStrategyWrap>(info.Holder());
	vtkConstrained2DLayoutStrategy *native = (vtkConstrained2DLayoutStrategy *)wrapper->native.GetPointer();
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

void VtkConstrained2DLayoutStrategyWrap::IsLayoutComplete(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkConstrained2DLayoutStrategyWrap *wrapper = ObjectWrap::Unwrap<VtkConstrained2DLayoutStrategyWrap>(info.Holder());
	vtkConstrained2DLayoutStrategy *native = (vtkConstrained2DLayoutStrategy *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->IsLayoutComplete();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkConstrained2DLayoutStrategyWrap::Layout(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkConstrained2DLayoutStrategyWrap *wrapper = ObjectWrap::Unwrap<VtkConstrained2DLayoutStrategyWrap>(info.Holder());
	vtkConstrained2DLayoutStrategy *native = (vtkConstrained2DLayoutStrategy *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->Layout();
}

void VtkConstrained2DLayoutStrategyWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkConstrained2DLayoutStrategyWrap *wrapper = ObjectWrap::Unwrap<VtkConstrained2DLayoutStrategyWrap>(info.Holder());
	vtkConstrained2DLayoutStrategy *native = (vtkConstrained2DLayoutStrategy *)wrapper->native.GetPointer();
	vtkConstrained2DLayoutStrategy * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
		VtkConstrained2DLayoutStrategyWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::Function>(VtkConstrained2DLayoutStrategyWrap::constructor);
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkConstrained2DLayoutStrategyWrap *w = new VtkConstrained2DLayoutStrategyWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkConstrained2DLayoutStrategyWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkConstrained2DLayoutStrategyWrap *wrapper = ObjectWrap::Unwrap<VtkConstrained2DLayoutStrategyWrap>(info.Holder());
	vtkConstrained2DLayoutStrategy *native = (vtkConstrained2DLayoutStrategy *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkConstrained2DLayoutStrategy * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObject *) a0->native.GetPointer()
		);
			VtkConstrained2DLayoutStrategyWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::Function>(VtkConstrained2DLayoutStrategyWrap::constructor);
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkConstrained2DLayoutStrategyWrap *w = new VtkConstrained2DLayoutStrategyWrap();
		w->native.TakeReference(r);
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkConstrained2DLayoutStrategyWrap::SetCoolDownRate(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkConstrained2DLayoutStrategyWrap *wrapper = ObjectWrap::Unwrap<VtkConstrained2DLayoutStrategyWrap>(info.Holder());
	vtkConstrained2DLayoutStrategy *native = (vtkConstrained2DLayoutStrategy *)wrapper->native.GetPointer();
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

void VtkConstrained2DLayoutStrategyWrap::SetInputArrayName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkConstrained2DLayoutStrategyWrap *wrapper = ObjectWrap::Unwrap<VtkConstrained2DLayoutStrategyWrap>(info.Holder());
	vtkConstrained2DLayoutStrategy *native = (vtkConstrained2DLayoutStrategy *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		Nan::Utf8String a0(info[0]);
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetInputArrayName(
			*a0
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkConstrained2DLayoutStrategyWrap::SetIterationsPerLayout(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkConstrained2DLayoutStrategyWrap *wrapper = ObjectWrap::Unwrap<VtkConstrained2DLayoutStrategyWrap>(info.Holder());
	vtkConstrained2DLayoutStrategy *native = (vtkConstrained2DLayoutStrategy *)wrapper->native.GetPointer();
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

void VtkConstrained2DLayoutStrategyWrap::SetMaxNumberOfIterations(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkConstrained2DLayoutStrategyWrap *wrapper = ObjectWrap::Unwrap<VtkConstrained2DLayoutStrategyWrap>(info.Holder());
	vtkConstrained2DLayoutStrategy *native = (vtkConstrained2DLayoutStrategy *)wrapper->native.GetPointer();
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

void VtkConstrained2DLayoutStrategyWrap::SetRandomSeed(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkConstrained2DLayoutStrategyWrap *wrapper = ObjectWrap::Unwrap<VtkConstrained2DLayoutStrategyWrap>(info.Holder());
	vtkConstrained2DLayoutStrategy *native = (vtkConstrained2DLayoutStrategy *)wrapper->native.GetPointer();
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

