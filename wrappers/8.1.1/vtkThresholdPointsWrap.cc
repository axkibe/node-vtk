/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>

#include "vtkPolyDataAlgorithmWrap.h"
#include "vtkThresholdPointsWrap.h"
#include "vtkObjectBaseWrap.h"
#include "../../plus/plus.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkThresholdPointsWrap::ptpl;

VtkThresholdPointsWrap::VtkThresholdPointsWrap()
{ }

VtkThresholdPointsWrap::VtkThresholdPointsWrap(vtkSmartPointer<vtkThresholdPoints> _native)
{ native = _native; }

VtkThresholdPointsWrap::~VtkThresholdPointsWrap()
{ }

void VtkThresholdPointsWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkThresholdPoints").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("ThresholdPoints").ToLocalChecked(), ConstructorGetter);
}

void VtkThresholdPointsWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkThresholdPointsWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkPolyDataAlgorithmWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkPolyDataAlgorithmWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkThresholdPointsWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "GetLowerThreshold", GetLowerThreshold);
	Nan::SetPrototypeMethod(tpl, "getLowerThreshold", GetLowerThreshold);

	Nan::SetPrototypeMethod(tpl, "GetOutputPointsPrecision", GetOutputPointsPrecision);
	Nan::SetPrototypeMethod(tpl, "getOutputPointsPrecision", GetOutputPointsPrecision);

	Nan::SetPrototypeMethod(tpl, "GetUpperThreshold", GetUpperThreshold);
	Nan::SetPrototypeMethod(tpl, "getUpperThreshold", GetUpperThreshold);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetLowerThreshold", SetLowerThreshold);
	Nan::SetPrototypeMethod(tpl, "setLowerThreshold", SetLowerThreshold);

	Nan::SetPrototypeMethod(tpl, "SetOutputPointsPrecision", SetOutputPointsPrecision);
	Nan::SetPrototypeMethod(tpl, "setOutputPointsPrecision", SetOutputPointsPrecision);

	Nan::SetPrototypeMethod(tpl, "SetUpperThreshold", SetUpperThreshold);
	Nan::SetPrototypeMethod(tpl, "setUpperThreshold", SetUpperThreshold);

	Nan::SetPrototypeMethod(tpl, "ThresholdBetween", ThresholdBetween);
	Nan::SetPrototypeMethod(tpl, "thresholdBetween", ThresholdBetween);

	Nan::SetPrototypeMethod(tpl, "ThresholdByLower", ThresholdByLower);
	Nan::SetPrototypeMethod(tpl, "thresholdByLower", ThresholdByLower);

	Nan::SetPrototypeMethod(tpl, "ThresholdByUpper", ThresholdByUpper);
	Nan::SetPrototypeMethod(tpl, "thresholdByUpper", ThresholdByUpper);

#ifdef VTK_NODE_PLUS_VTKTHRESHOLDPOINTSWRAP_INITPTPL
	VTK_NODE_PLUS_VTKTHRESHOLDPOINTSWRAP_INITPTPL
#endif
	ptpl.Reset( tpl );
}

void VtkThresholdPointsWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkThresholdPoints> native = vtkSmartPointer<vtkThresholdPoints>::New();
		VtkThresholdPointsWrap* obj = new VtkThresholdPointsWrap(native);
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

void VtkThresholdPointsWrap::GetLowerThreshold(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkThresholdPointsWrap *wrapper = ObjectWrap::Unwrap<VtkThresholdPointsWrap>(info.Holder());
	vtkThresholdPoints *native = (vtkThresholdPoints *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetLowerThreshold();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkThresholdPointsWrap::GetOutputPointsPrecision(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkThresholdPointsWrap *wrapper = ObjectWrap::Unwrap<VtkThresholdPointsWrap>(info.Holder());
	vtkThresholdPoints *native = (vtkThresholdPoints *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetOutputPointsPrecision();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkThresholdPointsWrap::GetUpperThreshold(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkThresholdPointsWrap *wrapper = ObjectWrap::Unwrap<VtkThresholdPointsWrap>(info.Holder());
	vtkThresholdPoints *native = (vtkThresholdPoints *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetUpperThreshold();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkThresholdPointsWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkThresholdPointsWrap *wrapper = ObjectWrap::Unwrap<VtkThresholdPointsWrap>(info.Holder());
	vtkThresholdPoints *native = (vtkThresholdPoints *)wrapper->native.GetPointer();
	vtkThresholdPoints * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
	VtkThresholdPointsWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkThresholdPointsWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkThresholdPointsWrap *w = new VtkThresholdPointsWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkThresholdPointsWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkThresholdPointsWrap *wrapper = ObjectWrap::Unwrap<VtkThresholdPointsWrap>(info.Holder());
	vtkThresholdPoints *native = (vtkThresholdPoints *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectBaseWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectBaseWrap *a0 = ObjectWrap::Unwrap<VtkObjectBaseWrap>(info[0]->ToObject());
		vtkThresholdPoints * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObjectBase *) a0->native.GetPointer()
		);
		VtkThresholdPointsWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkThresholdPointsWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkThresholdPointsWrap *w = new VtkThresholdPointsWrap();
		w->native = r;
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkThresholdPointsWrap::SetLowerThreshold(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkThresholdPointsWrap *wrapper = ObjectWrap::Unwrap<VtkThresholdPointsWrap>(info.Holder());
	vtkThresholdPoints *native = (vtkThresholdPoints *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsNumber())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetLowerThreshold(
			info[0]->NumberValue()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkThresholdPointsWrap::SetOutputPointsPrecision(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkThresholdPointsWrap *wrapper = ObjectWrap::Unwrap<VtkThresholdPointsWrap>(info.Holder());
	vtkThresholdPoints *native = (vtkThresholdPoints *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetOutputPointsPrecision(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkThresholdPointsWrap::SetUpperThreshold(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkThresholdPointsWrap *wrapper = ObjectWrap::Unwrap<VtkThresholdPointsWrap>(info.Holder());
	vtkThresholdPoints *native = (vtkThresholdPoints *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsNumber())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetUpperThreshold(
			info[0]->NumberValue()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkThresholdPointsWrap::ThresholdBetween(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkThresholdPointsWrap *wrapper = ObjectWrap::Unwrap<VtkThresholdPointsWrap>(info.Holder());
	vtkThresholdPoints *native = (vtkThresholdPoints *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsNumber())
	{
		if(info.Length() > 1 && info[1]->IsNumber())
		{
						if(info.Length() != 2)
			{
				Nan::ThrowError("Too many parameters.");
				return;
			}
			native->ThresholdBetween(
				info[0]->NumberValue(),
				info[1]->NumberValue()
			);
			return;
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkThresholdPointsWrap::ThresholdByLower(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkThresholdPointsWrap *wrapper = ObjectWrap::Unwrap<VtkThresholdPointsWrap>(info.Holder());
	vtkThresholdPoints *native = (vtkThresholdPoints *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsNumber())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->ThresholdByLower(
			info[0]->NumberValue()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkThresholdPointsWrap::ThresholdByUpper(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkThresholdPointsWrap *wrapper = ObjectWrap::Unwrap<VtkThresholdPointsWrap>(info.Holder());
	vtkThresholdPoints *native = (vtkThresholdPoints *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsNumber())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->ThresholdByUpper(
			info[0]->NumberValue()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

