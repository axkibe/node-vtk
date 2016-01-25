/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkPolyDataAlgorithmWrap.h"
#include "vtkThresholdPointsWrap.h"
#include "vtkObjectWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::Function> VtkThresholdPointsWrap::constructor;
Nan::Persistent<v8::FunctionTemplate> VtkThresholdPointsWrap::ptpl;

VtkThresholdPointsWrap::VtkThresholdPointsWrap()
{ }

VtkThresholdPointsWrap::VtkThresholdPointsWrap(vtkSmartPointer<vtkThresholdPoints> _native)
{ native = _native; }

VtkThresholdPointsWrap::~VtkThresholdPointsWrap()
{ }

void VtkThresholdPointsWrap::Init(v8::Local<v8::Object> exports)
{
	if (!constructor.IsEmpty()) return;
	Nan::HandleScope scope;

	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkPolyDataAlgorithmWrap::Init( exports );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkPolyDataAlgorithmWrap::ptpl));

	tpl->SetClassName(Nan::New("VtkThresholdPointsWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);
	InitTpl(tpl);

	constructor.Reset( tpl->GetFunction() );
	ptpl.Reset( tpl );

	exports->Set(Nan::New("vtkThresholdPoints").ToLocalChecked(),tpl->GetFunction());
	exports->Set(Nan::New("ThresholdPoints").ToLocalChecked(),tpl->GetFunction());
}

void VtkThresholdPointsWrap::InitTpl(v8::Local<v8::FunctionTemplate> tpl)
{
	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "GetLowerThreshold", GetLowerThreshold);
	Nan::SetPrototypeMethod(tpl, "getLowerThreshold", GetLowerThreshold);

	Nan::SetPrototypeMethod(tpl, "GetOutputPointsPrecision", GetOutputPointsPrecision);
	Nan::SetPrototypeMethod(tpl, "getOutputPointsPrecision", GetOutputPointsPrecision);

	Nan::SetPrototypeMethod(tpl, "GetUpperThreshold", GetUpperThreshold);
	Nan::SetPrototypeMethod(tpl, "getUpperThreshold", GetUpperThreshold);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

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
		VtkThresholdPointsWrap* obj = new VtkThresholdPointsWrap(native);		obj->Wrap(info.This());
	}
	else
	{
		Nan::Utf8String s(info[0]);
		if(info[0]->ToObject() != vtkNodeJsNoWrap )
			Nan::ThrowError("Parameter Error");
	}

	info.GetReturnValue().Set(info.This());
}

void VtkThresholdPointsWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkThresholdPointsWrap *wrapper = ObjectWrap::Unwrap<VtkThresholdPointsWrap>(info.Holder());
	vtkThresholdPoints *native = (vtkThresholdPoints *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
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

void VtkThresholdPointsWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkThresholdPointsWrap *wrapper = ObjectWrap::Unwrap<VtkThresholdPointsWrap>(info.Holder());
	vtkThresholdPoints *native = (vtkThresholdPoints *)wrapper->native.GetPointer();
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
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::Function>(VtkThresholdPointsWrap::constructor);
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkThresholdPointsWrap *w = new VtkThresholdPointsWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkThresholdPointsWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkThresholdPointsWrap *wrapper = ObjectWrap::Unwrap<VtkThresholdPointsWrap>(info.Holder());
	vtkThresholdPoints *native = (vtkThresholdPoints *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject())
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkThresholdPoints * r;
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
			Nan::New<v8::Function>(VtkThresholdPointsWrap::constructor);
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkThresholdPointsWrap *w = new VtkThresholdPointsWrap();
		w->native.TakeReference(r);
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

