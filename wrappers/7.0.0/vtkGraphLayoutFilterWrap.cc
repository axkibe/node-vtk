/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>

#include "vtkPolyDataAlgorithmWrap.h"
#include "vtkGraphLayoutFilterWrap.h"
#include "vtkObjectWrap.h"
#include "../../plus/plus.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkGraphLayoutFilterWrap::ptpl;

VtkGraphLayoutFilterWrap::VtkGraphLayoutFilterWrap()
{ }

VtkGraphLayoutFilterWrap::VtkGraphLayoutFilterWrap(vtkSmartPointer<vtkGraphLayoutFilter> _native)
{ native = _native; }

VtkGraphLayoutFilterWrap::~VtkGraphLayoutFilterWrap()
{ }

void VtkGraphLayoutFilterWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkGraphLayoutFilter").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("GraphLayoutFilter").ToLocalChecked(), ConstructorGetter);
}

void VtkGraphLayoutFilterWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkGraphLayoutFilterWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkPolyDataAlgorithmWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkPolyDataAlgorithmWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkGraphLayoutFilterWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "AutomaticBoundsComputationOff", AutomaticBoundsComputationOff);
	Nan::SetPrototypeMethod(tpl, "automaticBoundsComputationOff", AutomaticBoundsComputationOff);

	Nan::SetPrototypeMethod(tpl, "AutomaticBoundsComputationOn", AutomaticBoundsComputationOn);
	Nan::SetPrototypeMethod(tpl, "automaticBoundsComputationOn", AutomaticBoundsComputationOn);

	Nan::SetPrototypeMethod(tpl, "GetAutomaticBoundsComputation", GetAutomaticBoundsComputation);
	Nan::SetPrototypeMethod(tpl, "getAutomaticBoundsComputation", GetAutomaticBoundsComputation);

	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "GetCoolDownRate", GetCoolDownRate);
	Nan::SetPrototypeMethod(tpl, "getCoolDownRate", GetCoolDownRate);

	Nan::SetPrototypeMethod(tpl, "GetCoolDownRateMaxValue", GetCoolDownRateMaxValue);
	Nan::SetPrototypeMethod(tpl, "getCoolDownRateMaxValue", GetCoolDownRateMaxValue);

	Nan::SetPrototypeMethod(tpl, "GetCoolDownRateMinValue", GetCoolDownRateMinValue);
	Nan::SetPrototypeMethod(tpl, "getCoolDownRateMinValue", GetCoolDownRateMinValue);

	Nan::SetPrototypeMethod(tpl, "GetGraphBounds", GetGraphBounds);
	Nan::SetPrototypeMethod(tpl, "getGraphBounds", GetGraphBounds);

	Nan::SetPrototypeMethod(tpl, "GetMaxNumberOfIterations", GetMaxNumberOfIterations);
	Nan::SetPrototypeMethod(tpl, "getMaxNumberOfIterations", GetMaxNumberOfIterations);

	Nan::SetPrototypeMethod(tpl, "GetMaxNumberOfIterationsMaxValue", GetMaxNumberOfIterationsMaxValue);
	Nan::SetPrototypeMethod(tpl, "getMaxNumberOfIterationsMaxValue", GetMaxNumberOfIterationsMaxValue);

	Nan::SetPrototypeMethod(tpl, "GetMaxNumberOfIterationsMinValue", GetMaxNumberOfIterationsMinValue);
	Nan::SetPrototypeMethod(tpl, "getMaxNumberOfIterationsMinValue", GetMaxNumberOfIterationsMinValue);

	Nan::SetPrototypeMethod(tpl, "GetThreeDimensionalLayout", GetThreeDimensionalLayout);
	Nan::SetPrototypeMethod(tpl, "getThreeDimensionalLayout", GetThreeDimensionalLayout);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetAutomaticBoundsComputation", SetAutomaticBoundsComputation);
	Nan::SetPrototypeMethod(tpl, "setAutomaticBoundsComputation", SetAutomaticBoundsComputation);

	Nan::SetPrototypeMethod(tpl, "SetCoolDownRate", SetCoolDownRate);
	Nan::SetPrototypeMethod(tpl, "setCoolDownRate", SetCoolDownRate);

	Nan::SetPrototypeMethod(tpl, "SetGraphBounds", SetGraphBounds);
	Nan::SetPrototypeMethod(tpl, "setGraphBounds", SetGraphBounds);

	Nan::SetPrototypeMethod(tpl, "SetMaxNumberOfIterations", SetMaxNumberOfIterations);
	Nan::SetPrototypeMethod(tpl, "setMaxNumberOfIterations", SetMaxNumberOfIterations);

	Nan::SetPrototypeMethod(tpl, "SetThreeDimensionalLayout", SetThreeDimensionalLayout);
	Nan::SetPrototypeMethod(tpl, "setThreeDimensionalLayout", SetThreeDimensionalLayout);

	Nan::SetPrototypeMethod(tpl, "ThreeDimensionalLayoutOff", ThreeDimensionalLayoutOff);
	Nan::SetPrototypeMethod(tpl, "threeDimensionalLayoutOff", ThreeDimensionalLayoutOff);

	Nan::SetPrototypeMethod(tpl, "ThreeDimensionalLayoutOn", ThreeDimensionalLayoutOn);
	Nan::SetPrototypeMethod(tpl, "threeDimensionalLayoutOn", ThreeDimensionalLayoutOn);

#ifdef VTK_NODE_PLUS_VTKGRAPHLAYOUTFILTERWRAP_INITPTPL
	VTK_NODE_PLUS_VTKGRAPHLAYOUTFILTERWRAP_INITPTPL
#endif
	ptpl.Reset( tpl );
}

void VtkGraphLayoutFilterWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkGraphLayoutFilter> native = vtkSmartPointer<vtkGraphLayoutFilter>::New();
		VtkGraphLayoutFilterWrap* obj = new VtkGraphLayoutFilterWrap(native);
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

void VtkGraphLayoutFilterWrap::AutomaticBoundsComputationOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGraphLayoutFilterWrap *wrapper = ObjectWrap::Unwrap<VtkGraphLayoutFilterWrap>(info.Holder());
	vtkGraphLayoutFilter *native = (vtkGraphLayoutFilter *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->AutomaticBoundsComputationOff();
}

void VtkGraphLayoutFilterWrap::AutomaticBoundsComputationOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGraphLayoutFilterWrap *wrapper = ObjectWrap::Unwrap<VtkGraphLayoutFilterWrap>(info.Holder());
	vtkGraphLayoutFilter *native = (vtkGraphLayoutFilter *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->AutomaticBoundsComputationOn();
}

void VtkGraphLayoutFilterWrap::GetAutomaticBoundsComputation(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGraphLayoutFilterWrap *wrapper = ObjectWrap::Unwrap<VtkGraphLayoutFilterWrap>(info.Holder());
	vtkGraphLayoutFilter *native = (vtkGraphLayoutFilter *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetAutomaticBoundsComputation();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkGraphLayoutFilterWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGraphLayoutFilterWrap *wrapper = ObjectWrap::Unwrap<VtkGraphLayoutFilterWrap>(info.Holder());
	vtkGraphLayoutFilter *native = (vtkGraphLayoutFilter *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkGraphLayoutFilterWrap::GetCoolDownRate(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGraphLayoutFilterWrap *wrapper = ObjectWrap::Unwrap<VtkGraphLayoutFilterWrap>(info.Holder());
	vtkGraphLayoutFilter *native = (vtkGraphLayoutFilter *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetCoolDownRate();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkGraphLayoutFilterWrap::GetCoolDownRateMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGraphLayoutFilterWrap *wrapper = ObjectWrap::Unwrap<VtkGraphLayoutFilterWrap>(info.Holder());
	vtkGraphLayoutFilter *native = (vtkGraphLayoutFilter *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetCoolDownRateMaxValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkGraphLayoutFilterWrap::GetCoolDownRateMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGraphLayoutFilterWrap *wrapper = ObjectWrap::Unwrap<VtkGraphLayoutFilterWrap>(info.Holder());
	vtkGraphLayoutFilter *native = (vtkGraphLayoutFilter *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetCoolDownRateMinValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkGraphLayoutFilterWrap::GetGraphBounds(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGraphLayoutFilterWrap *wrapper = ObjectWrap::Unwrap<VtkGraphLayoutFilterWrap>(info.Holder());
	vtkGraphLayoutFilter *native = (vtkGraphLayoutFilter *)wrapper->native.GetPointer();
	double const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetGraphBounds();
	Local<v8::ArrayBuffer> ab = v8::ArrayBuffer::New(v8::Isolate::GetCurrent(), 6 * sizeof(double));
	Local<v8::Float64Array> at = v8::Float64Array::New(ab, 0, 6);
	memcpy(ab->GetContents().Data(), r, 6 * sizeof(double));
	info.GetReturnValue().Set(at);
}

void VtkGraphLayoutFilterWrap::GetMaxNumberOfIterations(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGraphLayoutFilterWrap *wrapper = ObjectWrap::Unwrap<VtkGraphLayoutFilterWrap>(info.Holder());
	vtkGraphLayoutFilter *native = (vtkGraphLayoutFilter *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetMaxNumberOfIterations();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkGraphLayoutFilterWrap::GetMaxNumberOfIterationsMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGraphLayoutFilterWrap *wrapper = ObjectWrap::Unwrap<VtkGraphLayoutFilterWrap>(info.Holder());
	vtkGraphLayoutFilter *native = (vtkGraphLayoutFilter *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetMaxNumberOfIterationsMaxValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkGraphLayoutFilterWrap::GetMaxNumberOfIterationsMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGraphLayoutFilterWrap *wrapper = ObjectWrap::Unwrap<VtkGraphLayoutFilterWrap>(info.Holder());
	vtkGraphLayoutFilter *native = (vtkGraphLayoutFilter *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetMaxNumberOfIterationsMinValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkGraphLayoutFilterWrap::GetThreeDimensionalLayout(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGraphLayoutFilterWrap *wrapper = ObjectWrap::Unwrap<VtkGraphLayoutFilterWrap>(info.Holder());
	vtkGraphLayoutFilter *native = (vtkGraphLayoutFilter *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetThreeDimensionalLayout();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkGraphLayoutFilterWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGraphLayoutFilterWrap *wrapper = ObjectWrap::Unwrap<VtkGraphLayoutFilterWrap>(info.Holder());
	vtkGraphLayoutFilter *native = (vtkGraphLayoutFilter *)wrapper->native.GetPointer();
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

void VtkGraphLayoutFilterWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGraphLayoutFilterWrap *wrapper = ObjectWrap::Unwrap<VtkGraphLayoutFilterWrap>(info.Holder());
	vtkGraphLayoutFilter *native = (vtkGraphLayoutFilter *)wrapper->native.GetPointer();
	vtkGraphLayoutFilter * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
	VtkGraphLayoutFilterWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkGraphLayoutFilterWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkGraphLayoutFilterWrap *w = new VtkGraphLayoutFilterWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkGraphLayoutFilterWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGraphLayoutFilterWrap *wrapper = ObjectWrap::Unwrap<VtkGraphLayoutFilterWrap>(info.Holder());
	vtkGraphLayoutFilter *native = (vtkGraphLayoutFilter *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkGraphLayoutFilter * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObject *) a0->native.GetPointer()
		);
		VtkGraphLayoutFilterWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkGraphLayoutFilterWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkGraphLayoutFilterWrap *w = new VtkGraphLayoutFilterWrap();
		w->native = r;
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkGraphLayoutFilterWrap::SetAutomaticBoundsComputation(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGraphLayoutFilterWrap *wrapper = ObjectWrap::Unwrap<VtkGraphLayoutFilterWrap>(info.Holder());
	vtkGraphLayoutFilter *native = (vtkGraphLayoutFilter *)wrapper->native.GetPointer();
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

void VtkGraphLayoutFilterWrap::SetCoolDownRate(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGraphLayoutFilterWrap *wrapper = ObjectWrap::Unwrap<VtkGraphLayoutFilterWrap>(info.Holder());
	vtkGraphLayoutFilter *native = (vtkGraphLayoutFilter *)wrapper->native.GetPointer();
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

void VtkGraphLayoutFilterWrap::SetGraphBounds(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGraphLayoutFilterWrap *wrapper = ObjectWrap::Unwrap<VtkGraphLayoutFilterWrap>(info.Holder());
	vtkGraphLayoutFilter *native = (vtkGraphLayoutFilter *)wrapper->native.GetPointer();
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
		native->SetGraphBounds(
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
		native->SetGraphBounds(
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

void VtkGraphLayoutFilterWrap::SetMaxNumberOfIterations(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGraphLayoutFilterWrap *wrapper = ObjectWrap::Unwrap<VtkGraphLayoutFilterWrap>(info.Holder());
	vtkGraphLayoutFilter *native = (vtkGraphLayoutFilter *)wrapper->native.GetPointer();
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

void VtkGraphLayoutFilterWrap::SetThreeDimensionalLayout(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGraphLayoutFilterWrap *wrapper = ObjectWrap::Unwrap<VtkGraphLayoutFilterWrap>(info.Holder());
	vtkGraphLayoutFilter *native = (vtkGraphLayoutFilter *)wrapper->native.GetPointer();
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

void VtkGraphLayoutFilterWrap::ThreeDimensionalLayoutOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGraphLayoutFilterWrap *wrapper = ObjectWrap::Unwrap<VtkGraphLayoutFilterWrap>(info.Holder());
	vtkGraphLayoutFilter *native = (vtkGraphLayoutFilter *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->ThreeDimensionalLayoutOff();
}

void VtkGraphLayoutFilterWrap::ThreeDimensionalLayoutOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGraphLayoutFilterWrap *wrapper = ObjectWrap::Unwrap<VtkGraphLayoutFilterWrap>(info.Holder());
	vtkGraphLayoutFilter *native = (vtkGraphLayoutFilter *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->ThreeDimensionalLayoutOn();
}

