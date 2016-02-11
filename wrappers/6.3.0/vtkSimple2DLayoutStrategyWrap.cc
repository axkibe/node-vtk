/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkGraphLayoutStrategyWrap.h"
#include "vtkSimple2DLayoutStrategyWrap.h"
#include "vtkObjectWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkSimple2DLayoutStrategyWrap::ptpl;

VtkSimple2DLayoutStrategyWrap::VtkSimple2DLayoutStrategyWrap()
{ }

VtkSimple2DLayoutStrategyWrap::VtkSimple2DLayoutStrategyWrap(vtkSmartPointer<vtkSimple2DLayoutStrategy> _native)
{ native = _native; }

VtkSimple2DLayoutStrategyWrap::~VtkSimple2DLayoutStrategyWrap()
{ }

void VtkSimple2DLayoutStrategyWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkSimple2DLayoutStrategy").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("Simple2DLayoutStrategy").ToLocalChecked(), ConstructorGetter);
}

void VtkSimple2DLayoutStrategyWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkSimple2DLayoutStrategyWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkGraphLayoutStrategyWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkGraphLayoutStrategyWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkSimple2DLayoutStrategyWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "GetCoolDownRate", GetCoolDownRate);
	Nan::SetPrototypeMethod(tpl, "getCoolDownRate", GetCoolDownRate);

	Nan::SetPrototypeMethod(tpl, "GetCoolDownRateMaxValue", GetCoolDownRateMaxValue);
	Nan::SetPrototypeMethod(tpl, "getCoolDownRateMaxValue", GetCoolDownRateMaxValue);

	Nan::SetPrototypeMethod(tpl, "GetCoolDownRateMinValue", GetCoolDownRateMinValue);
	Nan::SetPrototypeMethod(tpl, "getCoolDownRateMinValue", GetCoolDownRateMinValue);

	Nan::SetPrototypeMethod(tpl, "GetIterationsPerLayout", GetIterationsPerLayout);
	Nan::SetPrototypeMethod(tpl, "getIterationsPerLayout", GetIterationsPerLayout);

	Nan::SetPrototypeMethod(tpl, "GetIterationsPerLayoutMaxValue", GetIterationsPerLayoutMaxValue);
	Nan::SetPrototypeMethod(tpl, "getIterationsPerLayoutMaxValue", GetIterationsPerLayoutMaxValue);

	Nan::SetPrototypeMethod(tpl, "GetIterationsPerLayoutMinValue", GetIterationsPerLayoutMinValue);
	Nan::SetPrototypeMethod(tpl, "getIterationsPerLayoutMinValue", GetIterationsPerLayoutMinValue);

	Nan::SetPrototypeMethod(tpl, "GetJitter", GetJitter);
	Nan::SetPrototypeMethod(tpl, "getJitter", GetJitter);

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

	Nan::SetPrototypeMethod(tpl, "SetIterationsPerLayout", SetIterationsPerLayout);
	Nan::SetPrototypeMethod(tpl, "setIterationsPerLayout", SetIterationsPerLayout);

	Nan::SetPrototypeMethod(tpl, "SetJitter", SetJitter);
	Nan::SetPrototypeMethod(tpl, "setJitter", SetJitter);

	Nan::SetPrototypeMethod(tpl, "SetMaxNumberOfIterations", SetMaxNumberOfIterations);
	Nan::SetPrototypeMethod(tpl, "setMaxNumberOfIterations", SetMaxNumberOfIterations);

	Nan::SetPrototypeMethod(tpl, "SetRandomSeed", SetRandomSeed);
	Nan::SetPrototypeMethod(tpl, "setRandomSeed", SetRandomSeed);

	ptpl.Reset( tpl );
}

void VtkSimple2DLayoutStrategyWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkSimple2DLayoutStrategy> native = vtkSmartPointer<vtkSimple2DLayoutStrategy>::New();
		VtkSimple2DLayoutStrategyWrap* obj = new VtkSimple2DLayoutStrategyWrap(native);
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

void VtkSimple2DLayoutStrategyWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSimple2DLayoutStrategyWrap *wrapper = ObjectWrap::Unwrap<VtkSimple2DLayoutStrategyWrap>(info.Holder());
	vtkSimple2DLayoutStrategy *native = (vtkSimple2DLayoutStrategy *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkSimple2DLayoutStrategyWrap::GetCoolDownRate(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSimple2DLayoutStrategyWrap *wrapper = ObjectWrap::Unwrap<VtkSimple2DLayoutStrategyWrap>(info.Holder());
	vtkSimple2DLayoutStrategy *native = (vtkSimple2DLayoutStrategy *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetCoolDownRate();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkSimple2DLayoutStrategyWrap::GetCoolDownRateMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSimple2DLayoutStrategyWrap *wrapper = ObjectWrap::Unwrap<VtkSimple2DLayoutStrategyWrap>(info.Holder());
	vtkSimple2DLayoutStrategy *native = (vtkSimple2DLayoutStrategy *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetCoolDownRateMaxValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkSimple2DLayoutStrategyWrap::GetCoolDownRateMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSimple2DLayoutStrategyWrap *wrapper = ObjectWrap::Unwrap<VtkSimple2DLayoutStrategyWrap>(info.Holder());
	vtkSimple2DLayoutStrategy *native = (vtkSimple2DLayoutStrategy *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetCoolDownRateMinValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkSimple2DLayoutStrategyWrap::GetIterationsPerLayout(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSimple2DLayoutStrategyWrap *wrapper = ObjectWrap::Unwrap<VtkSimple2DLayoutStrategyWrap>(info.Holder());
	vtkSimple2DLayoutStrategy *native = (vtkSimple2DLayoutStrategy *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetIterationsPerLayout();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkSimple2DLayoutStrategyWrap::GetIterationsPerLayoutMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSimple2DLayoutStrategyWrap *wrapper = ObjectWrap::Unwrap<VtkSimple2DLayoutStrategyWrap>(info.Holder());
	vtkSimple2DLayoutStrategy *native = (vtkSimple2DLayoutStrategy *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetIterationsPerLayoutMaxValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkSimple2DLayoutStrategyWrap::GetIterationsPerLayoutMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSimple2DLayoutStrategyWrap *wrapper = ObjectWrap::Unwrap<VtkSimple2DLayoutStrategyWrap>(info.Holder());
	vtkSimple2DLayoutStrategy *native = (vtkSimple2DLayoutStrategy *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetIterationsPerLayoutMinValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkSimple2DLayoutStrategyWrap::GetJitter(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSimple2DLayoutStrategyWrap *wrapper = ObjectWrap::Unwrap<VtkSimple2DLayoutStrategyWrap>(info.Holder());
	vtkSimple2DLayoutStrategy *native = (vtkSimple2DLayoutStrategy *)wrapper->native.GetPointer();
	bool r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetJitter();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkSimple2DLayoutStrategyWrap::GetMaxNumberOfIterations(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSimple2DLayoutStrategyWrap *wrapper = ObjectWrap::Unwrap<VtkSimple2DLayoutStrategyWrap>(info.Holder());
	vtkSimple2DLayoutStrategy *native = (vtkSimple2DLayoutStrategy *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetMaxNumberOfIterations();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkSimple2DLayoutStrategyWrap::GetMaxNumberOfIterationsMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSimple2DLayoutStrategyWrap *wrapper = ObjectWrap::Unwrap<VtkSimple2DLayoutStrategyWrap>(info.Holder());
	vtkSimple2DLayoutStrategy *native = (vtkSimple2DLayoutStrategy *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetMaxNumberOfIterationsMaxValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkSimple2DLayoutStrategyWrap::GetMaxNumberOfIterationsMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSimple2DLayoutStrategyWrap *wrapper = ObjectWrap::Unwrap<VtkSimple2DLayoutStrategyWrap>(info.Holder());
	vtkSimple2DLayoutStrategy *native = (vtkSimple2DLayoutStrategy *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetMaxNumberOfIterationsMinValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkSimple2DLayoutStrategyWrap::GetRandomSeed(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSimple2DLayoutStrategyWrap *wrapper = ObjectWrap::Unwrap<VtkSimple2DLayoutStrategyWrap>(info.Holder());
	vtkSimple2DLayoutStrategy *native = (vtkSimple2DLayoutStrategy *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetRandomSeed();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkSimple2DLayoutStrategyWrap::GetRandomSeedMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSimple2DLayoutStrategyWrap *wrapper = ObjectWrap::Unwrap<VtkSimple2DLayoutStrategyWrap>(info.Holder());
	vtkSimple2DLayoutStrategy *native = (vtkSimple2DLayoutStrategy *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetRandomSeedMaxValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkSimple2DLayoutStrategyWrap::GetRandomSeedMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSimple2DLayoutStrategyWrap *wrapper = ObjectWrap::Unwrap<VtkSimple2DLayoutStrategyWrap>(info.Holder());
	vtkSimple2DLayoutStrategy *native = (vtkSimple2DLayoutStrategy *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetRandomSeedMinValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkSimple2DLayoutStrategyWrap::Initialize(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSimple2DLayoutStrategyWrap *wrapper = ObjectWrap::Unwrap<VtkSimple2DLayoutStrategyWrap>(info.Holder());
	vtkSimple2DLayoutStrategy *native = (vtkSimple2DLayoutStrategy *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->Initialize();
}

void VtkSimple2DLayoutStrategyWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSimple2DLayoutStrategyWrap *wrapper = ObjectWrap::Unwrap<VtkSimple2DLayoutStrategyWrap>(info.Holder());
	vtkSimple2DLayoutStrategy *native = (vtkSimple2DLayoutStrategy *)wrapper->native.GetPointer();
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

void VtkSimple2DLayoutStrategyWrap::IsLayoutComplete(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSimple2DLayoutStrategyWrap *wrapper = ObjectWrap::Unwrap<VtkSimple2DLayoutStrategyWrap>(info.Holder());
	vtkSimple2DLayoutStrategy *native = (vtkSimple2DLayoutStrategy *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->IsLayoutComplete();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkSimple2DLayoutStrategyWrap::Layout(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSimple2DLayoutStrategyWrap *wrapper = ObjectWrap::Unwrap<VtkSimple2DLayoutStrategyWrap>(info.Holder());
	vtkSimple2DLayoutStrategy *native = (vtkSimple2DLayoutStrategy *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->Layout();
}

void VtkSimple2DLayoutStrategyWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSimple2DLayoutStrategyWrap *wrapper = ObjectWrap::Unwrap<VtkSimple2DLayoutStrategyWrap>(info.Holder());
	vtkSimple2DLayoutStrategy *native = (vtkSimple2DLayoutStrategy *)wrapper->native.GetPointer();
	vtkSimple2DLayoutStrategy * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
	VtkSimple2DLayoutStrategyWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkSimple2DLayoutStrategyWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkSimple2DLayoutStrategyWrap *w = new VtkSimple2DLayoutStrategyWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkSimple2DLayoutStrategyWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSimple2DLayoutStrategyWrap *wrapper = ObjectWrap::Unwrap<VtkSimple2DLayoutStrategyWrap>(info.Holder());
	vtkSimple2DLayoutStrategy *native = (vtkSimple2DLayoutStrategy *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkSimple2DLayoutStrategy * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObject *) a0->native.GetPointer()
		);
		VtkSimple2DLayoutStrategyWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkSimple2DLayoutStrategyWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkSimple2DLayoutStrategyWrap *w = new VtkSimple2DLayoutStrategyWrap();
		w->native = r;
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkSimple2DLayoutStrategyWrap::SetCoolDownRate(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSimple2DLayoutStrategyWrap *wrapper = ObjectWrap::Unwrap<VtkSimple2DLayoutStrategyWrap>(info.Holder());
	vtkSimple2DLayoutStrategy *native = (vtkSimple2DLayoutStrategy *)wrapper->native.GetPointer();
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

void VtkSimple2DLayoutStrategyWrap::SetIterationsPerLayout(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSimple2DLayoutStrategyWrap *wrapper = ObjectWrap::Unwrap<VtkSimple2DLayoutStrategyWrap>(info.Holder());
	vtkSimple2DLayoutStrategy *native = (vtkSimple2DLayoutStrategy *)wrapper->native.GetPointer();
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

void VtkSimple2DLayoutStrategyWrap::SetJitter(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSimple2DLayoutStrategyWrap *wrapper = ObjectWrap::Unwrap<VtkSimple2DLayoutStrategyWrap>(info.Holder());
	vtkSimple2DLayoutStrategy *native = (vtkSimple2DLayoutStrategy *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsBoolean())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetJitter(
			info[0]->BooleanValue()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkSimple2DLayoutStrategyWrap::SetMaxNumberOfIterations(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSimple2DLayoutStrategyWrap *wrapper = ObjectWrap::Unwrap<VtkSimple2DLayoutStrategyWrap>(info.Holder());
	vtkSimple2DLayoutStrategy *native = (vtkSimple2DLayoutStrategy *)wrapper->native.GetPointer();
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

void VtkSimple2DLayoutStrategyWrap::SetRandomSeed(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSimple2DLayoutStrategyWrap *wrapper = ObjectWrap::Unwrap<VtkSimple2DLayoutStrategyWrap>(info.Holder());
	vtkSimple2DLayoutStrategy *native = (vtkSimple2DLayoutStrategy *)wrapper->native.GetPointer();
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

