/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkGraphLayoutStrategyWrap.h"
#include "vtkRandomLayoutStrategyWrap.h"
#include "vtkObjectWrap.h"
#include "vtkGraphWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::Function> VtkRandomLayoutStrategyWrap::constructor;
Nan::Persistent<v8::FunctionTemplate> VtkRandomLayoutStrategyWrap::ptpl;

VtkRandomLayoutStrategyWrap::VtkRandomLayoutStrategyWrap()
{ }

VtkRandomLayoutStrategyWrap::VtkRandomLayoutStrategyWrap(vtkSmartPointer<vtkRandomLayoutStrategy> _native)
{ native = _native; }

VtkRandomLayoutStrategyWrap::~VtkRandomLayoutStrategyWrap()
{ }

void VtkRandomLayoutStrategyWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkRandomLayoutStrategy").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("RandomLayoutStrategy").ToLocalChecked(), ConstructorGetter);
}

void VtkRandomLayoutStrategyWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkRandomLayoutStrategyWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkGraphLayoutStrategyWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkGraphLayoutStrategyWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkRandomLayoutStrategyWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "AutomaticBoundsComputationOff", AutomaticBoundsComputationOff);
	Nan::SetPrototypeMethod(tpl, "automaticBoundsComputationOff", AutomaticBoundsComputationOff);

	Nan::SetPrototypeMethod(tpl, "AutomaticBoundsComputationOn", AutomaticBoundsComputationOn);
	Nan::SetPrototypeMethod(tpl, "automaticBoundsComputationOn", AutomaticBoundsComputationOn);

	Nan::SetPrototypeMethod(tpl, "GetAutomaticBoundsComputation", GetAutomaticBoundsComputation);
	Nan::SetPrototypeMethod(tpl, "getAutomaticBoundsComputation", GetAutomaticBoundsComputation);

	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "GetRandomSeed", GetRandomSeed);
	Nan::SetPrototypeMethod(tpl, "getRandomSeed", GetRandomSeed);

	Nan::SetPrototypeMethod(tpl, "GetRandomSeedMaxValue", GetRandomSeedMaxValue);
	Nan::SetPrototypeMethod(tpl, "getRandomSeedMaxValue", GetRandomSeedMaxValue);

	Nan::SetPrototypeMethod(tpl, "GetRandomSeedMinValue", GetRandomSeedMinValue);
	Nan::SetPrototypeMethod(tpl, "getRandomSeedMinValue", GetRandomSeedMinValue);

	Nan::SetPrototypeMethod(tpl, "GetThreeDimensionalLayout", GetThreeDimensionalLayout);
	Nan::SetPrototypeMethod(tpl, "getThreeDimensionalLayout", GetThreeDimensionalLayout);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "Layout", Layout);
	Nan::SetPrototypeMethod(tpl, "layout", Layout);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetAutomaticBoundsComputation", SetAutomaticBoundsComputation);
	Nan::SetPrototypeMethod(tpl, "setAutomaticBoundsComputation", SetAutomaticBoundsComputation);

	Nan::SetPrototypeMethod(tpl, "SetGraph", SetGraph);
	Nan::SetPrototypeMethod(tpl, "setGraph", SetGraph);

	Nan::SetPrototypeMethod(tpl, "SetGraphBounds", SetGraphBounds);
	Nan::SetPrototypeMethod(tpl, "setGraphBounds", SetGraphBounds);

	Nan::SetPrototypeMethod(tpl, "SetRandomSeed", SetRandomSeed);
	Nan::SetPrototypeMethod(tpl, "setRandomSeed", SetRandomSeed);

	Nan::SetPrototypeMethod(tpl, "SetThreeDimensionalLayout", SetThreeDimensionalLayout);
	Nan::SetPrototypeMethod(tpl, "setThreeDimensionalLayout", SetThreeDimensionalLayout);

	Nan::SetPrototypeMethod(tpl, "ThreeDimensionalLayoutOff", ThreeDimensionalLayoutOff);
	Nan::SetPrototypeMethod(tpl, "threeDimensionalLayoutOff", ThreeDimensionalLayoutOff);

	Nan::SetPrototypeMethod(tpl, "ThreeDimensionalLayoutOn", ThreeDimensionalLayoutOn);
	Nan::SetPrototypeMethod(tpl, "threeDimensionalLayoutOn", ThreeDimensionalLayoutOn);

	constructor.Reset( tpl->GetFunction() );
	ptpl.Reset( tpl );
}

void VtkRandomLayoutStrategyWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkRandomLayoutStrategy> native = vtkSmartPointer<vtkRandomLayoutStrategy>::New();
		VtkRandomLayoutStrategyWrap* obj = new VtkRandomLayoutStrategyWrap(native);		obj->Wrap(info.This());
	}
	else
	{
		Nan::Utf8String s(info[0]);
		if(info[0]->ToObject() != vtkNodeJsNoWrap )
			Nan::ThrowError("Parameter Error");
	}

	info.GetReturnValue().Set(info.This());
}

void VtkRandomLayoutStrategyWrap::AutomaticBoundsComputationOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkRandomLayoutStrategyWrap *wrapper = ObjectWrap::Unwrap<VtkRandomLayoutStrategyWrap>(info.Holder());
	vtkRandomLayoutStrategy *native = (vtkRandomLayoutStrategy *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->AutomaticBoundsComputationOff();
}

void VtkRandomLayoutStrategyWrap::AutomaticBoundsComputationOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkRandomLayoutStrategyWrap *wrapper = ObjectWrap::Unwrap<VtkRandomLayoutStrategyWrap>(info.Holder());
	vtkRandomLayoutStrategy *native = (vtkRandomLayoutStrategy *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->AutomaticBoundsComputationOn();
}

void VtkRandomLayoutStrategyWrap::GetAutomaticBoundsComputation(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkRandomLayoutStrategyWrap *wrapper = ObjectWrap::Unwrap<VtkRandomLayoutStrategyWrap>(info.Holder());
	vtkRandomLayoutStrategy *native = (vtkRandomLayoutStrategy *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetAutomaticBoundsComputation();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkRandomLayoutStrategyWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkRandomLayoutStrategyWrap *wrapper = ObjectWrap::Unwrap<VtkRandomLayoutStrategyWrap>(info.Holder());
	vtkRandomLayoutStrategy *native = (vtkRandomLayoutStrategy *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkRandomLayoutStrategyWrap::GetRandomSeed(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkRandomLayoutStrategyWrap *wrapper = ObjectWrap::Unwrap<VtkRandomLayoutStrategyWrap>(info.Holder());
	vtkRandomLayoutStrategy *native = (vtkRandomLayoutStrategy *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetRandomSeed();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkRandomLayoutStrategyWrap::GetRandomSeedMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkRandomLayoutStrategyWrap *wrapper = ObjectWrap::Unwrap<VtkRandomLayoutStrategyWrap>(info.Holder());
	vtkRandomLayoutStrategy *native = (vtkRandomLayoutStrategy *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetRandomSeedMaxValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkRandomLayoutStrategyWrap::GetRandomSeedMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkRandomLayoutStrategyWrap *wrapper = ObjectWrap::Unwrap<VtkRandomLayoutStrategyWrap>(info.Holder());
	vtkRandomLayoutStrategy *native = (vtkRandomLayoutStrategy *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetRandomSeedMinValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkRandomLayoutStrategyWrap::GetThreeDimensionalLayout(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkRandomLayoutStrategyWrap *wrapper = ObjectWrap::Unwrap<VtkRandomLayoutStrategyWrap>(info.Holder());
	vtkRandomLayoutStrategy *native = (vtkRandomLayoutStrategy *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetThreeDimensionalLayout();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkRandomLayoutStrategyWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkRandomLayoutStrategyWrap *wrapper = ObjectWrap::Unwrap<VtkRandomLayoutStrategyWrap>(info.Holder());
	vtkRandomLayoutStrategy *native = (vtkRandomLayoutStrategy *)wrapper->native.GetPointer();
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

void VtkRandomLayoutStrategyWrap::Layout(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkRandomLayoutStrategyWrap *wrapper = ObjectWrap::Unwrap<VtkRandomLayoutStrategyWrap>(info.Holder());
	vtkRandomLayoutStrategy *native = (vtkRandomLayoutStrategy *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->Layout();
}

void VtkRandomLayoutStrategyWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkRandomLayoutStrategyWrap *wrapper = ObjectWrap::Unwrap<VtkRandomLayoutStrategyWrap>(info.Holder());
	vtkRandomLayoutStrategy *native = (vtkRandomLayoutStrategy *)wrapper->native.GetPointer();
	vtkRandomLayoutStrategy * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
		VtkRandomLayoutStrategyWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::Function>(VtkRandomLayoutStrategyWrap::constructor);
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkRandomLayoutStrategyWrap *w = new VtkRandomLayoutStrategyWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkRandomLayoutStrategyWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkRandomLayoutStrategyWrap *wrapper = ObjectWrap::Unwrap<VtkRandomLayoutStrategyWrap>(info.Holder());
	vtkRandomLayoutStrategy *native = (vtkRandomLayoutStrategy *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkRandomLayoutStrategy * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObject *) a0->native.GetPointer()
		);
			VtkRandomLayoutStrategyWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::Function>(VtkRandomLayoutStrategyWrap::constructor);
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkRandomLayoutStrategyWrap *w = new VtkRandomLayoutStrategyWrap();
		w->native.TakeReference(r);
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkRandomLayoutStrategyWrap::SetAutomaticBoundsComputation(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkRandomLayoutStrategyWrap *wrapper = ObjectWrap::Unwrap<VtkRandomLayoutStrategyWrap>(info.Holder());
	vtkRandomLayoutStrategy *native = (vtkRandomLayoutStrategy *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetAutomaticBoundsComputation(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkRandomLayoutStrategyWrap::SetGraph(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkRandomLayoutStrategyWrap *wrapper = ObjectWrap::Unwrap<VtkRandomLayoutStrategyWrap>(info.Holder());
	vtkRandomLayoutStrategy *native = (vtkRandomLayoutStrategy *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkGraphWrap::ptpl))->HasInstance(info[0]))
	{
		VtkGraphWrap *a0 = ObjectWrap::Unwrap<VtkGraphWrap>(info[0]->ToObject());
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetGraph(
			(vtkGraph *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkRandomLayoutStrategyWrap::SetGraphBounds(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkRandomLayoutStrategyWrap *wrapper = ObjectWrap::Unwrap<VtkRandomLayoutStrategyWrap>(info.Holder());
	vtkRandomLayoutStrategy *native = (vtkRandomLayoutStrategy *)wrapper->native.GetPointer();
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
							native->SetGraphBounds(
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

void VtkRandomLayoutStrategyWrap::SetRandomSeed(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkRandomLayoutStrategyWrap *wrapper = ObjectWrap::Unwrap<VtkRandomLayoutStrategyWrap>(info.Holder());
	vtkRandomLayoutStrategy *native = (vtkRandomLayoutStrategy *)wrapper->native.GetPointer();
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

void VtkRandomLayoutStrategyWrap::SetThreeDimensionalLayout(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkRandomLayoutStrategyWrap *wrapper = ObjectWrap::Unwrap<VtkRandomLayoutStrategyWrap>(info.Holder());
	vtkRandomLayoutStrategy *native = (vtkRandomLayoutStrategy *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetThreeDimensionalLayout(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkRandomLayoutStrategyWrap::ThreeDimensionalLayoutOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkRandomLayoutStrategyWrap *wrapper = ObjectWrap::Unwrap<VtkRandomLayoutStrategyWrap>(info.Holder());
	vtkRandomLayoutStrategy *native = (vtkRandomLayoutStrategy *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->ThreeDimensionalLayoutOff();
}

void VtkRandomLayoutStrategyWrap::ThreeDimensionalLayoutOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkRandomLayoutStrategyWrap *wrapper = ObjectWrap::Unwrap<VtkRandomLayoutStrategyWrap>(info.Holder());
	vtkRandomLayoutStrategy *native = (vtkRandomLayoutStrategy *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->ThreeDimensionalLayoutOn();
}

