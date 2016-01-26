/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkThreadedImageAlgorithmWrap.h"
#include "vtkImageWeightedSumWrap.h"
#include "vtkObjectWrap.h"
#include "vtkDoubleArrayWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkImageWeightedSumWrap::ptpl;

VtkImageWeightedSumWrap::VtkImageWeightedSumWrap()
{ }

VtkImageWeightedSumWrap::VtkImageWeightedSumWrap(vtkSmartPointer<vtkImageWeightedSum> _native)
{ native = _native; }

VtkImageWeightedSumWrap::~VtkImageWeightedSumWrap()
{ }

void VtkImageWeightedSumWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkImageWeightedSum").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("ImageWeightedSum").ToLocalChecked(), ConstructorGetter);
}

void VtkImageWeightedSumWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkImageWeightedSumWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkThreadedImageAlgorithmWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkThreadedImageAlgorithmWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkImageWeightedSumWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "CalculateTotalWeight", CalculateTotalWeight);
	Nan::SetPrototypeMethod(tpl, "calculateTotalWeight", CalculateTotalWeight);

	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "GetNormalizeByWeight", GetNormalizeByWeight);
	Nan::SetPrototypeMethod(tpl, "getNormalizeByWeight", GetNormalizeByWeight);

	Nan::SetPrototypeMethod(tpl, "GetNormalizeByWeightMaxValue", GetNormalizeByWeightMaxValue);
	Nan::SetPrototypeMethod(tpl, "getNormalizeByWeightMaxValue", GetNormalizeByWeightMaxValue);

	Nan::SetPrototypeMethod(tpl, "GetNormalizeByWeightMinValue", GetNormalizeByWeightMinValue);
	Nan::SetPrototypeMethod(tpl, "getNormalizeByWeightMinValue", GetNormalizeByWeightMinValue);

	Nan::SetPrototypeMethod(tpl, "GetWeights", GetWeights);
	Nan::SetPrototypeMethod(tpl, "getWeights", GetWeights);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "NormalizeByWeightOff", NormalizeByWeightOff);
	Nan::SetPrototypeMethod(tpl, "normalizeByWeightOff", NormalizeByWeightOff);

	Nan::SetPrototypeMethod(tpl, "NormalizeByWeightOn", NormalizeByWeightOn);
	Nan::SetPrototypeMethod(tpl, "normalizeByWeightOn", NormalizeByWeightOn);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetNormalizeByWeight", SetNormalizeByWeight);
	Nan::SetPrototypeMethod(tpl, "setNormalizeByWeight", SetNormalizeByWeight);

	Nan::SetPrototypeMethod(tpl, "SetWeights", SetWeights);
	Nan::SetPrototypeMethod(tpl, "setWeights", SetWeights);

	ptpl.Reset( tpl );
}

void VtkImageWeightedSumWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkImageWeightedSum> native = vtkSmartPointer<vtkImageWeightedSum>::New();
		VtkImageWeightedSumWrap* obj = new VtkImageWeightedSumWrap(native);		obj->Wrap(info.This());
	}
	else
	{
		Nan::Utf8String s(info[0]);
		if(info[0]->ToObject() != vtkNodeJsNoWrap )
			Nan::ThrowError("Parameter Error");
	}

	info.GetReturnValue().Set(info.This());
}

void VtkImageWeightedSumWrap::CalculateTotalWeight(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageWeightedSumWrap *wrapper = ObjectWrap::Unwrap<VtkImageWeightedSumWrap>(info.Holder());
	vtkImageWeightedSum *native = (vtkImageWeightedSum *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->CalculateTotalWeight();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkImageWeightedSumWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageWeightedSumWrap *wrapper = ObjectWrap::Unwrap<VtkImageWeightedSumWrap>(info.Holder());
	vtkImageWeightedSum *native = (vtkImageWeightedSum *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkImageWeightedSumWrap::GetNormalizeByWeight(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageWeightedSumWrap *wrapper = ObjectWrap::Unwrap<VtkImageWeightedSumWrap>(info.Holder());
	vtkImageWeightedSum *native = (vtkImageWeightedSum *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetNormalizeByWeight();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkImageWeightedSumWrap::GetNormalizeByWeightMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageWeightedSumWrap *wrapper = ObjectWrap::Unwrap<VtkImageWeightedSumWrap>(info.Holder());
	vtkImageWeightedSum *native = (vtkImageWeightedSum *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetNormalizeByWeightMaxValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkImageWeightedSumWrap::GetNormalizeByWeightMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageWeightedSumWrap *wrapper = ObjectWrap::Unwrap<VtkImageWeightedSumWrap>(info.Holder());
	vtkImageWeightedSum *native = (vtkImageWeightedSum *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetNormalizeByWeightMinValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkImageWeightedSumWrap::GetWeights(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageWeightedSumWrap *wrapper = ObjectWrap::Unwrap<VtkImageWeightedSumWrap>(info.Holder());
	vtkImageWeightedSum *native = (vtkImageWeightedSum *)wrapper->native.GetPointer();
	vtkDoubleArray * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetWeights();
		VtkDoubleArrayWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkDoubleArrayWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkDoubleArrayWrap *w = new VtkDoubleArrayWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkImageWeightedSumWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageWeightedSumWrap *wrapper = ObjectWrap::Unwrap<VtkImageWeightedSumWrap>(info.Holder());
	vtkImageWeightedSum *native = (vtkImageWeightedSum *)wrapper->native.GetPointer();
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

void VtkImageWeightedSumWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageWeightedSumWrap *wrapper = ObjectWrap::Unwrap<VtkImageWeightedSumWrap>(info.Holder());
	vtkImageWeightedSum *native = (vtkImageWeightedSum *)wrapper->native.GetPointer();
	vtkImageWeightedSum * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
		VtkImageWeightedSumWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkImageWeightedSumWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkImageWeightedSumWrap *w = new VtkImageWeightedSumWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkImageWeightedSumWrap::NormalizeByWeightOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageWeightedSumWrap *wrapper = ObjectWrap::Unwrap<VtkImageWeightedSumWrap>(info.Holder());
	vtkImageWeightedSum *native = (vtkImageWeightedSum *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->NormalizeByWeightOff();
}

void VtkImageWeightedSumWrap::NormalizeByWeightOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageWeightedSumWrap *wrapper = ObjectWrap::Unwrap<VtkImageWeightedSumWrap>(info.Holder());
	vtkImageWeightedSum *native = (vtkImageWeightedSum *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->NormalizeByWeightOn();
}

void VtkImageWeightedSumWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageWeightedSumWrap *wrapper = ObjectWrap::Unwrap<VtkImageWeightedSumWrap>(info.Holder());
	vtkImageWeightedSum *native = (vtkImageWeightedSum *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkImageWeightedSum * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObject *) a0->native.GetPointer()
		);
			VtkImageWeightedSumWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkImageWeightedSumWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkImageWeightedSumWrap *w = new VtkImageWeightedSumWrap();
		w->native.TakeReference(r);
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkImageWeightedSumWrap::SetNormalizeByWeight(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageWeightedSumWrap *wrapper = ObjectWrap::Unwrap<VtkImageWeightedSumWrap>(info.Holder());
	vtkImageWeightedSum *native = (vtkImageWeightedSum *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetNormalizeByWeight(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkImageWeightedSumWrap::SetWeights(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageWeightedSumWrap *wrapper = ObjectWrap::Unwrap<VtkImageWeightedSumWrap>(info.Holder());
	vtkImageWeightedSum *native = (vtkImageWeightedSum *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkDoubleArrayWrap::ptpl))->HasInstance(info[0]))
	{
		VtkDoubleArrayWrap *a0 = ObjectWrap::Unwrap<VtkDoubleArrayWrap>(info[0]->ToObject());
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetWeights(
			(vtkDoubleArray *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

