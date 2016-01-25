/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkPolyDataAlgorithmWrap.h"
#include "vtkDecimatePolylineFilterWrap.h"
#include "vtkObjectWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::Function> VtkDecimatePolylineFilterWrap::constructor;
Nan::Persistent<v8::FunctionTemplate> VtkDecimatePolylineFilterWrap::ptpl;

VtkDecimatePolylineFilterWrap::VtkDecimatePolylineFilterWrap()
{ }

VtkDecimatePolylineFilterWrap::VtkDecimatePolylineFilterWrap(vtkSmartPointer<vtkDecimatePolylineFilter> _native)
{ native = _native; }

VtkDecimatePolylineFilterWrap::~VtkDecimatePolylineFilterWrap()
{ }

void VtkDecimatePolylineFilterWrap::Init(v8::Local<v8::Object> exports)
{
	if (!constructor.IsEmpty()) return;
	Nan::HandleScope scope;

	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkPolyDataAlgorithmWrap::Init( exports );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkPolyDataAlgorithmWrap::ptpl));

	tpl->SetClassName(Nan::New("VtkDecimatePolylineFilterWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);
	InitTpl(tpl);

	constructor.Reset( tpl->GetFunction() );
	ptpl.Reset( tpl );

	exports->Set(Nan::New("vtkDecimatePolylineFilter").ToLocalChecked(),tpl->GetFunction());
	exports->Set(Nan::New("DecimatePolylineFilter").ToLocalChecked(),tpl->GetFunction());
}

void VtkDecimatePolylineFilterWrap::InitTpl(v8::Local<v8::FunctionTemplate> tpl)
{
	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "GetOutputPointsPrecision", GetOutputPointsPrecision);
	Nan::SetPrototypeMethod(tpl, "getOutputPointsPrecision", GetOutputPointsPrecision);

	Nan::SetPrototypeMethod(tpl, "GetTargetReduction", GetTargetReduction);
	Nan::SetPrototypeMethod(tpl, "getTargetReduction", GetTargetReduction);

	Nan::SetPrototypeMethod(tpl, "GetTargetReductionMaxValue", GetTargetReductionMaxValue);
	Nan::SetPrototypeMethod(tpl, "getTargetReductionMaxValue", GetTargetReductionMaxValue);

	Nan::SetPrototypeMethod(tpl, "GetTargetReductionMinValue", GetTargetReductionMinValue);
	Nan::SetPrototypeMethod(tpl, "getTargetReductionMinValue", GetTargetReductionMinValue);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetOutputPointsPrecision", SetOutputPointsPrecision);
	Nan::SetPrototypeMethod(tpl, "setOutputPointsPrecision", SetOutputPointsPrecision);

	Nan::SetPrototypeMethod(tpl, "SetTargetReduction", SetTargetReduction);
	Nan::SetPrototypeMethod(tpl, "setTargetReduction", SetTargetReduction);

}

void VtkDecimatePolylineFilterWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkDecimatePolylineFilter> native = vtkSmartPointer<vtkDecimatePolylineFilter>::New();
		VtkDecimatePolylineFilterWrap* obj = new VtkDecimatePolylineFilterWrap(native);		obj->Wrap(info.This());
	}
	else
	{
		Nan::Utf8String s(info[0]);
		if(info[0]->ToObject() != vtkNodeJsNoWrap )
			Nan::ThrowError("Parameter Error");
	}

	info.GetReturnValue().Set(info.This());
}

void VtkDecimatePolylineFilterWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDecimatePolylineFilterWrap *wrapper = ObjectWrap::Unwrap<VtkDecimatePolylineFilterWrap>(info.Holder());
	vtkDecimatePolylineFilter *native = (vtkDecimatePolylineFilter *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkDecimatePolylineFilterWrap::GetOutputPointsPrecision(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDecimatePolylineFilterWrap *wrapper = ObjectWrap::Unwrap<VtkDecimatePolylineFilterWrap>(info.Holder());
	vtkDecimatePolylineFilter *native = (vtkDecimatePolylineFilter *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetOutputPointsPrecision();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkDecimatePolylineFilterWrap::GetTargetReduction(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDecimatePolylineFilterWrap *wrapper = ObjectWrap::Unwrap<VtkDecimatePolylineFilterWrap>(info.Holder());
	vtkDecimatePolylineFilter *native = (vtkDecimatePolylineFilter *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetTargetReduction();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkDecimatePolylineFilterWrap::GetTargetReductionMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDecimatePolylineFilterWrap *wrapper = ObjectWrap::Unwrap<VtkDecimatePolylineFilterWrap>(info.Holder());
	vtkDecimatePolylineFilter *native = (vtkDecimatePolylineFilter *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetTargetReductionMaxValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkDecimatePolylineFilterWrap::GetTargetReductionMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDecimatePolylineFilterWrap *wrapper = ObjectWrap::Unwrap<VtkDecimatePolylineFilterWrap>(info.Holder());
	vtkDecimatePolylineFilter *native = (vtkDecimatePolylineFilter *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetTargetReductionMinValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkDecimatePolylineFilterWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDecimatePolylineFilterWrap *wrapper = ObjectWrap::Unwrap<VtkDecimatePolylineFilterWrap>(info.Holder());
	vtkDecimatePolylineFilter *native = (vtkDecimatePolylineFilter *)wrapper->native.GetPointer();
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

void VtkDecimatePolylineFilterWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDecimatePolylineFilterWrap *wrapper = ObjectWrap::Unwrap<VtkDecimatePolylineFilterWrap>(info.Holder());
	vtkDecimatePolylineFilter *native = (vtkDecimatePolylineFilter *)wrapper->native.GetPointer();
	vtkDecimatePolylineFilter * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::Function>(VtkDecimatePolylineFilterWrap::constructor);
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkDecimatePolylineFilterWrap *w = new VtkDecimatePolylineFilterWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkDecimatePolylineFilterWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDecimatePolylineFilterWrap *wrapper = ObjectWrap::Unwrap<VtkDecimatePolylineFilterWrap>(info.Holder());
	vtkDecimatePolylineFilter *native = (vtkDecimatePolylineFilter *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject())
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkDecimatePolylineFilter * r;
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
			Nan::New<v8::Function>(VtkDecimatePolylineFilterWrap::constructor);
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkDecimatePolylineFilterWrap *w = new VtkDecimatePolylineFilterWrap();
		w->native.TakeReference(r);
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkDecimatePolylineFilterWrap::SetOutputPointsPrecision(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDecimatePolylineFilterWrap *wrapper = ObjectWrap::Unwrap<VtkDecimatePolylineFilterWrap>(info.Holder());
	vtkDecimatePolylineFilter *native = (vtkDecimatePolylineFilter *)wrapper->native.GetPointer();
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

void VtkDecimatePolylineFilterWrap::SetTargetReduction(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDecimatePolylineFilterWrap *wrapper = ObjectWrap::Unwrap<VtkDecimatePolylineFilterWrap>(info.Holder());
	vtkDecimatePolylineFilter *native = (vtkDecimatePolylineFilter *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsNumber())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetTargetReduction(
			info[0]->NumberValue()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

