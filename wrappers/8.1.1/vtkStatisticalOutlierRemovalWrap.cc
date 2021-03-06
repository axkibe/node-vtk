/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>

#include "vtkPointCloudFilterWrap.h"
#include "vtkStatisticalOutlierRemovalWrap.h"
#include "vtkObjectBaseWrap.h"
#include "vtkAbstractPointLocatorWrap.h"
#include "../../plus/plus.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkStatisticalOutlierRemovalWrap::ptpl;

VtkStatisticalOutlierRemovalWrap::VtkStatisticalOutlierRemovalWrap()
{ }

VtkStatisticalOutlierRemovalWrap::VtkStatisticalOutlierRemovalWrap(vtkSmartPointer<vtkStatisticalOutlierRemoval> _native)
{ native = _native; }

VtkStatisticalOutlierRemovalWrap::~VtkStatisticalOutlierRemovalWrap()
{ }

void VtkStatisticalOutlierRemovalWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkStatisticalOutlierRemoval").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("StatisticalOutlierRemoval").ToLocalChecked(), ConstructorGetter);
}

void VtkStatisticalOutlierRemovalWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkStatisticalOutlierRemovalWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkPointCloudFilterWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkPointCloudFilterWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkStatisticalOutlierRemovalWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "GetComputedMean", GetComputedMean);
	Nan::SetPrototypeMethod(tpl, "getComputedMean", GetComputedMean);

	Nan::SetPrototypeMethod(tpl, "GetComputedMeanMaxValue", GetComputedMeanMaxValue);
	Nan::SetPrototypeMethod(tpl, "getComputedMeanMaxValue", GetComputedMeanMaxValue);

	Nan::SetPrototypeMethod(tpl, "GetComputedMeanMinValue", GetComputedMeanMinValue);
	Nan::SetPrototypeMethod(tpl, "getComputedMeanMinValue", GetComputedMeanMinValue);

	Nan::SetPrototypeMethod(tpl, "GetComputedStandardDeviation", GetComputedStandardDeviation);
	Nan::SetPrototypeMethod(tpl, "getComputedStandardDeviation", GetComputedStandardDeviation);

	Nan::SetPrototypeMethod(tpl, "GetComputedStandardDeviationMaxValue", GetComputedStandardDeviationMaxValue);
	Nan::SetPrototypeMethod(tpl, "getComputedStandardDeviationMaxValue", GetComputedStandardDeviationMaxValue);

	Nan::SetPrototypeMethod(tpl, "GetComputedStandardDeviationMinValue", GetComputedStandardDeviationMinValue);
	Nan::SetPrototypeMethod(tpl, "getComputedStandardDeviationMinValue", GetComputedStandardDeviationMinValue);

	Nan::SetPrototypeMethod(tpl, "GetLocator", GetLocator);
	Nan::SetPrototypeMethod(tpl, "getLocator", GetLocator);

	Nan::SetPrototypeMethod(tpl, "GetSampleSize", GetSampleSize);
	Nan::SetPrototypeMethod(tpl, "getSampleSize", GetSampleSize);

	Nan::SetPrototypeMethod(tpl, "GetSampleSizeMaxValue", GetSampleSizeMaxValue);
	Nan::SetPrototypeMethod(tpl, "getSampleSizeMaxValue", GetSampleSizeMaxValue);

	Nan::SetPrototypeMethod(tpl, "GetSampleSizeMinValue", GetSampleSizeMinValue);
	Nan::SetPrototypeMethod(tpl, "getSampleSizeMinValue", GetSampleSizeMinValue);

	Nan::SetPrototypeMethod(tpl, "GetStandardDeviationFactor", GetStandardDeviationFactor);
	Nan::SetPrototypeMethod(tpl, "getStandardDeviationFactor", GetStandardDeviationFactor);

	Nan::SetPrototypeMethod(tpl, "GetStandardDeviationFactorMaxValue", GetStandardDeviationFactorMaxValue);
	Nan::SetPrototypeMethod(tpl, "getStandardDeviationFactorMaxValue", GetStandardDeviationFactorMaxValue);

	Nan::SetPrototypeMethod(tpl, "GetStandardDeviationFactorMinValue", GetStandardDeviationFactorMinValue);
	Nan::SetPrototypeMethod(tpl, "getStandardDeviationFactorMinValue", GetStandardDeviationFactorMinValue);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetComputedMean", SetComputedMean);
	Nan::SetPrototypeMethod(tpl, "setComputedMean", SetComputedMean);

	Nan::SetPrototypeMethod(tpl, "SetComputedStandardDeviation", SetComputedStandardDeviation);
	Nan::SetPrototypeMethod(tpl, "setComputedStandardDeviation", SetComputedStandardDeviation);

	Nan::SetPrototypeMethod(tpl, "SetLocator", SetLocator);
	Nan::SetPrototypeMethod(tpl, "setLocator", SetLocator);

	Nan::SetPrototypeMethod(tpl, "SetSampleSize", SetSampleSize);
	Nan::SetPrototypeMethod(tpl, "setSampleSize", SetSampleSize);

	Nan::SetPrototypeMethod(tpl, "SetStandardDeviationFactor", SetStandardDeviationFactor);
	Nan::SetPrototypeMethod(tpl, "setStandardDeviationFactor", SetStandardDeviationFactor);

#ifdef VTK_NODE_PLUS_VTKSTATISTICALOUTLIERREMOVALWRAP_INITPTPL
	VTK_NODE_PLUS_VTKSTATISTICALOUTLIERREMOVALWRAP_INITPTPL
#endif
	ptpl.Reset( tpl );
}

void VtkStatisticalOutlierRemovalWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkStatisticalOutlierRemoval> native = vtkSmartPointer<vtkStatisticalOutlierRemoval>::New();
		VtkStatisticalOutlierRemovalWrap* obj = new VtkStatisticalOutlierRemovalWrap(native);
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

void VtkStatisticalOutlierRemovalWrap::GetComputedMean(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkStatisticalOutlierRemovalWrap *wrapper = ObjectWrap::Unwrap<VtkStatisticalOutlierRemovalWrap>(info.Holder());
	vtkStatisticalOutlierRemoval *native = (vtkStatisticalOutlierRemoval *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetComputedMean();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkStatisticalOutlierRemovalWrap::GetComputedMeanMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkStatisticalOutlierRemovalWrap *wrapper = ObjectWrap::Unwrap<VtkStatisticalOutlierRemovalWrap>(info.Holder());
	vtkStatisticalOutlierRemoval *native = (vtkStatisticalOutlierRemoval *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetComputedMeanMaxValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkStatisticalOutlierRemovalWrap::GetComputedMeanMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkStatisticalOutlierRemovalWrap *wrapper = ObjectWrap::Unwrap<VtkStatisticalOutlierRemovalWrap>(info.Holder());
	vtkStatisticalOutlierRemoval *native = (vtkStatisticalOutlierRemoval *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetComputedMeanMinValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkStatisticalOutlierRemovalWrap::GetComputedStandardDeviation(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkStatisticalOutlierRemovalWrap *wrapper = ObjectWrap::Unwrap<VtkStatisticalOutlierRemovalWrap>(info.Holder());
	vtkStatisticalOutlierRemoval *native = (vtkStatisticalOutlierRemoval *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetComputedStandardDeviation();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkStatisticalOutlierRemovalWrap::GetComputedStandardDeviationMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkStatisticalOutlierRemovalWrap *wrapper = ObjectWrap::Unwrap<VtkStatisticalOutlierRemovalWrap>(info.Holder());
	vtkStatisticalOutlierRemoval *native = (vtkStatisticalOutlierRemoval *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetComputedStandardDeviationMaxValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkStatisticalOutlierRemovalWrap::GetComputedStandardDeviationMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkStatisticalOutlierRemovalWrap *wrapper = ObjectWrap::Unwrap<VtkStatisticalOutlierRemovalWrap>(info.Holder());
	vtkStatisticalOutlierRemoval *native = (vtkStatisticalOutlierRemoval *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetComputedStandardDeviationMinValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkStatisticalOutlierRemovalWrap::GetLocator(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkStatisticalOutlierRemovalWrap *wrapper = ObjectWrap::Unwrap<VtkStatisticalOutlierRemovalWrap>(info.Holder());
	vtkStatisticalOutlierRemoval *native = (vtkStatisticalOutlierRemoval *)wrapper->native.GetPointer();
	vtkAbstractPointLocator * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetLocator();
	VtkAbstractPointLocatorWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkAbstractPointLocatorWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkAbstractPointLocatorWrap *w = new VtkAbstractPointLocatorWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkStatisticalOutlierRemovalWrap::GetSampleSize(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkStatisticalOutlierRemovalWrap *wrapper = ObjectWrap::Unwrap<VtkStatisticalOutlierRemovalWrap>(info.Holder());
	vtkStatisticalOutlierRemoval *native = (vtkStatisticalOutlierRemoval *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetSampleSize();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkStatisticalOutlierRemovalWrap::GetSampleSizeMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkStatisticalOutlierRemovalWrap *wrapper = ObjectWrap::Unwrap<VtkStatisticalOutlierRemovalWrap>(info.Holder());
	vtkStatisticalOutlierRemoval *native = (vtkStatisticalOutlierRemoval *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetSampleSizeMaxValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkStatisticalOutlierRemovalWrap::GetSampleSizeMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkStatisticalOutlierRemovalWrap *wrapper = ObjectWrap::Unwrap<VtkStatisticalOutlierRemovalWrap>(info.Holder());
	vtkStatisticalOutlierRemoval *native = (vtkStatisticalOutlierRemoval *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetSampleSizeMinValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkStatisticalOutlierRemovalWrap::GetStandardDeviationFactor(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkStatisticalOutlierRemovalWrap *wrapper = ObjectWrap::Unwrap<VtkStatisticalOutlierRemovalWrap>(info.Holder());
	vtkStatisticalOutlierRemoval *native = (vtkStatisticalOutlierRemoval *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetStandardDeviationFactor();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkStatisticalOutlierRemovalWrap::GetStandardDeviationFactorMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkStatisticalOutlierRemovalWrap *wrapper = ObjectWrap::Unwrap<VtkStatisticalOutlierRemovalWrap>(info.Holder());
	vtkStatisticalOutlierRemoval *native = (vtkStatisticalOutlierRemoval *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetStandardDeviationFactorMaxValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkStatisticalOutlierRemovalWrap::GetStandardDeviationFactorMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkStatisticalOutlierRemovalWrap *wrapper = ObjectWrap::Unwrap<VtkStatisticalOutlierRemovalWrap>(info.Holder());
	vtkStatisticalOutlierRemoval *native = (vtkStatisticalOutlierRemoval *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetStandardDeviationFactorMinValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkStatisticalOutlierRemovalWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkStatisticalOutlierRemovalWrap *wrapper = ObjectWrap::Unwrap<VtkStatisticalOutlierRemovalWrap>(info.Holder());
	vtkStatisticalOutlierRemoval *native = (vtkStatisticalOutlierRemoval *)wrapper->native.GetPointer();
	vtkStatisticalOutlierRemoval * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
	VtkStatisticalOutlierRemovalWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkStatisticalOutlierRemovalWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkStatisticalOutlierRemovalWrap *w = new VtkStatisticalOutlierRemovalWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkStatisticalOutlierRemovalWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkStatisticalOutlierRemovalWrap *wrapper = ObjectWrap::Unwrap<VtkStatisticalOutlierRemovalWrap>(info.Holder());
	vtkStatisticalOutlierRemoval *native = (vtkStatisticalOutlierRemoval *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectBaseWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectBaseWrap *a0 = ObjectWrap::Unwrap<VtkObjectBaseWrap>(info[0]->ToObject());
		vtkStatisticalOutlierRemoval * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObjectBase *) a0->native.GetPointer()
		);
		VtkStatisticalOutlierRemovalWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkStatisticalOutlierRemovalWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkStatisticalOutlierRemovalWrap *w = new VtkStatisticalOutlierRemovalWrap();
		w->native = r;
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkStatisticalOutlierRemovalWrap::SetComputedMean(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkStatisticalOutlierRemovalWrap *wrapper = ObjectWrap::Unwrap<VtkStatisticalOutlierRemovalWrap>(info.Holder());
	vtkStatisticalOutlierRemoval *native = (vtkStatisticalOutlierRemoval *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsNumber())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetComputedMean(
			info[0]->NumberValue()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkStatisticalOutlierRemovalWrap::SetComputedStandardDeviation(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkStatisticalOutlierRemovalWrap *wrapper = ObjectWrap::Unwrap<VtkStatisticalOutlierRemovalWrap>(info.Holder());
	vtkStatisticalOutlierRemoval *native = (vtkStatisticalOutlierRemoval *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsNumber())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetComputedStandardDeviation(
			info[0]->NumberValue()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkStatisticalOutlierRemovalWrap::SetLocator(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkStatisticalOutlierRemovalWrap *wrapper = ObjectWrap::Unwrap<VtkStatisticalOutlierRemovalWrap>(info.Holder());
	vtkStatisticalOutlierRemoval *native = (vtkStatisticalOutlierRemoval *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkAbstractPointLocatorWrap::ptpl))->HasInstance(info[0]))
	{
		VtkAbstractPointLocatorWrap *a0 = ObjectWrap::Unwrap<VtkAbstractPointLocatorWrap>(info[0]->ToObject());
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetLocator(
			(vtkAbstractPointLocator *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkStatisticalOutlierRemovalWrap::SetSampleSize(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkStatisticalOutlierRemovalWrap *wrapper = ObjectWrap::Unwrap<VtkStatisticalOutlierRemovalWrap>(info.Holder());
	vtkStatisticalOutlierRemoval *native = (vtkStatisticalOutlierRemoval *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetSampleSize(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkStatisticalOutlierRemovalWrap::SetStandardDeviationFactor(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkStatisticalOutlierRemovalWrap *wrapper = ObjectWrap::Unwrap<VtkStatisticalOutlierRemovalWrap>(info.Holder());
	vtkStatisticalOutlierRemoval *native = (vtkStatisticalOutlierRemoval *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsNumber())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetStandardDeviationFactor(
			info[0]->NumberValue()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

