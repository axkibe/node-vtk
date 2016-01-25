/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkPassInputTypeAlgorithmWrap.h"
#include "vtkTemporalStatisticsWrap.h"
#include "vtkObjectWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::Function> VtkTemporalStatisticsWrap::constructor;
Nan::Persistent<v8::FunctionTemplate> VtkTemporalStatisticsWrap::ptpl;

VtkTemporalStatisticsWrap::VtkTemporalStatisticsWrap()
{ }

VtkTemporalStatisticsWrap::VtkTemporalStatisticsWrap(vtkSmartPointer<vtkTemporalStatistics> _native)
{ native = _native; }

VtkTemporalStatisticsWrap::~VtkTemporalStatisticsWrap()
{ }

void VtkTemporalStatisticsWrap::Init(v8::Local<v8::Object> exports)
{
	if (!constructor.IsEmpty()) return;
	Nan::HandleScope scope;

	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkPassInputTypeAlgorithmWrap::Init( exports );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkPassInputTypeAlgorithmWrap::ptpl));

	tpl->SetClassName(Nan::New("VtkTemporalStatisticsWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);
	InitTpl(tpl);

	constructor.Reset( tpl->GetFunction() );
	ptpl.Reset( tpl );

	exports->Set(Nan::New("vtkTemporalStatistics").ToLocalChecked(),tpl->GetFunction());
	exports->Set(Nan::New("TemporalStatistics").ToLocalChecked(),tpl->GetFunction());
}

void VtkTemporalStatisticsWrap::InitTpl(v8::Local<v8::FunctionTemplate> tpl)
{
	Nan::SetPrototypeMethod(tpl, "ComputeAverageOff", ComputeAverageOff);
	Nan::SetPrototypeMethod(tpl, "computeAverageOff", ComputeAverageOff);

	Nan::SetPrototypeMethod(tpl, "ComputeAverageOn", ComputeAverageOn);
	Nan::SetPrototypeMethod(tpl, "computeAverageOn", ComputeAverageOn);

	Nan::SetPrototypeMethod(tpl, "ComputeMaximumOff", ComputeMaximumOff);
	Nan::SetPrototypeMethod(tpl, "computeMaximumOff", ComputeMaximumOff);

	Nan::SetPrototypeMethod(tpl, "ComputeMaximumOn", ComputeMaximumOn);
	Nan::SetPrototypeMethod(tpl, "computeMaximumOn", ComputeMaximumOn);

	Nan::SetPrototypeMethod(tpl, "ComputeMinimumOff", ComputeMinimumOff);
	Nan::SetPrototypeMethod(tpl, "computeMinimumOff", ComputeMinimumOff);

	Nan::SetPrototypeMethod(tpl, "ComputeMinimumOn", ComputeMinimumOn);
	Nan::SetPrototypeMethod(tpl, "computeMinimumOn", ComputeMinimumOn);

	Nan::SetPrototypeMethod(tpl, "ComputeStandardDeviationOff", ComputeStandardDeviationOff);
	Nan::SetPrototypeMethod(tpl, "computeStandardDeviationOff", ComputeStandardDeviationOff);

	Nan::SetPrototypeMethod(tpl, "ComputeStandardDeviationOn", ComputeStandardDeviationOn);
	Nan::SetPrototypeMethod(tpl, "computeStandardDeviationOn", ComputeStandardDeviationOn);

	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "GetComputeAverage", GetComputeAverage);
	Nan::SetPrototypeMethod(tpl, "getComputeAverage", GetComputeAverage);

	Nan::SetPrototypeMethod(tpl, "GetComputeMaximum", GetComputeMaximum);
	Nan::SetPrototypeMethod(tpl, "getComputeMaximum", GetComputeMaximum);

	Nan::SetPrototypeMethod(tpl, "GetComputeMinimum", GetComputeMinimum);
	Nan::SetPrototypeMethod(tpl, "getComputeMinimum", GetComputeMinimum);

	Nan::SetPrototypeMethod(tpl, "GetComputeStandardDeviation", GetComputeStandardDeviation);
	Nan::SetPrototypeMethod(tpl, "getComputeStandardDeviation", GetComputeStandardDeviation);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetComputeAverage", SetComputeAverage);
	Nan::SetPrototypeMethod(tpl, "setComputeAverage", SetComputeAverage);

	Nan::SetPrototypeMethod(tpl, "SetComputeMaximum", SetComputeMaximum);
	Nan::SetPrototypeMethod(tpl, "setComputeMaximum", SetComputeMaximum);

	Nan::SetPrototypeMethod(tpl, "SetComputeMinimum", SetComputeMinimum);
	Nan::SetPrototypeMethod(tpl, "setComputeMinimum", SetComputeMinimum);

	Nan::SetPrototypeMethod(tpl, "SetComputeStandardDeviation", SetComputeStandardDeviation);
	Nan::SetPrototypeMethod(tpl, "setComputeStandardDeviation", SetComputeStandardDeviation);

}

void VtkTemporalStatisticsWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkTemporalStatistics> native = vtkSmartPointer<vtkTemporalStatistics>::New();
		VtkTemporalStatisticsWrap* obj = new VtkTemporalStatisticsWrap(native);		obj->Wrap(info.This());
	}
	else
	{
		Nan::Utf8String s(info[0]);
		if(info[0]->ToObject() != vtkNodeJsNoWrap )
			Nan::ThrowError("Parameter Error");
	}

	info.GetReturnValue().Set(info.This());
}

void VtkTemporalStatisticsWrap::ComputeAverageOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTemporalStatisticsWrap *wrapper = ObjectWrap::Unwrap<VtkTemporalStatisticsWrap>(info.Holder());
	vtkTemporalStatistics *native = (vtkTemporalStatistics *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->ComputeAverageOff();
}

void VtkTemporalStatisticsWrap::ComputeAverageOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTemporalStatisticsWrap *wrapper = ObjectWrap::Unwrap<VtkTemporalStatisticsWrap>(info.Holder());
	vtkTemporalStatistics *native = (vtkTemporalStatistics *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->ComputeAverageOn();
}

void VtkTemporalStatisticsWrap::ComputeMaximumOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTemporalStatisticsWrap *wrapper = ObjectWrap::Unwrap<VtkTemporalStatisticsWrap>(info.Holder());
	vtkTemporalStatistics *native = (vtkTemporalStatistics *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->ComputeMaximumOff();
}

void VtkTemporalStatisticsWrap::ComputeMaximumOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTemporalStatisticsWrap *wrapper = ObjectWrap::Unwrap<VtkTemporalStatisticsWrap>(info.Holder());
	vtkTemporalStatistics *native = (vtkTemporalStatistics *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->ComputeMaximumOn();
}

void VtkTemporalStatisticsWrap::ComputeMinimumOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTemporalStatisticsWrap *wrapper = ObjectWrap::Unwrap<VtkTemporalStatisticsWrap>(info.Holder());
	vtkTemporalStatistics *native = (vtkTemporalStatistics *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->ComputeMinimumOff();
}

void VtkTemporalStatisticsWrap::ComputeMinimumOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTemporalStatisticsWrap *wrapper = ObjectWrap::Unwrap<VtkTemporalStatisticsWrap>(info.Holder());
	vtkTemporalStatistics *native = (vtkTemporalStatistics *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->ComputeMinimumOn();
}

void VtkTemporalStatisticsWrap::ComputeStandardDeviationOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTemporalStatisticsWrap *wrapper = ObjectWrap::Unwrap<VtkTemporalStatisticsWrap>(info.Holder());
	vtkTemporalStatistics *native = (vtkTemporalStatistics *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->ComputeStandardDeviationOff();
}

void VtkTemporalStatisticsWrap::ComputeStandardDeviationOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTemporalStatisticsWrap *wrapper = ObjectWrap::Unwrap<VtkTemporalStatisticsWrap>(info.Holder());
	vtkTemporalStatistics *native = (vtkTemporalStatistics *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->ComputeStandardDeviationOn();
}

void VtkTemporalStatisticsWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTemporalStatisticsWrap *wrapper = ObjectWrap::Unwrap<VtkTemporalStatisticsWrap>(info.Holder());
	vtkTemporalStatistics *native = (vtkTemporalStatistics *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkTemporalStatisticsWrap::GetComputeAverage(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTemporalStatisticsWrap *wrapper = ObjectWrap::Unwrap<VtkTemporalStatisticsWrap>(info.Holder());
	vtkTemporalStatistics *native = (vtkTemporalStatistics *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetComputeAverage();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkTemporalStatisticsWrap::GetComputeMaximum(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTemporalStatisticsWrap *wrapper = ObjectWrap::Unwrap<VtkTemporalStatisticsWrap>(info.Holder());
	vtkTemporalStatistics *native = (vtkTemporalStatistics *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetComputeMaximum();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkTemporalStatisticsWrap::GetComputeMinimum(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTemporalStatisticsWrap *wrapper = ObjectWrap::Unwrap<VtkTemporalStatisticsWrap>(info.Holder());
	vtkTemporalStatistics *native = (vtkTemporalStatistics *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetComputeMinimum();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkTemporalStatisticsWrap::GetComputeStandardDeviation(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTemporalStatisticsWrap *wrapper = ObjectWrap::Unwrap<VtkTemporalStatisticsWrap>(info.Holder());
	vtkTemporalStatistics *native = (vtkTemporalStatistics *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetComputeStandardDeviation();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkTemporalStatisticsWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTemporalStatisticsWrap *wrapper = ObjectWrap::Unwrap<VtkTemporalStatisticsWrap>(info.Holder());
	vtkTemporalStatistics *native = (vtkTemporalStatistics *)wrapper->native.GetPointer();
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

void VtkTemporalStatisticsWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTemporalStatisticsWrap *wrapper = ObjectWrap::Unwrap<VtkTemporalStatisticsWrap>(info.Holder());
	vtkTemporalStatistics *native = (vtkTemporalStatistics *)wrapper->native.GetPointer();
	vtkTemporalStatistics * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::Function>(VtkTemporalStatisticsWrap::constructor);
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkTemporalStatisticsWrap *w = new VtkTemporalStatisticsWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkTemporalStatisticsWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTemporalStatisticsWrap *wrapper = ObjectWrap::Unwrap<VtkTemporalStatisticsWrap>(info.Holder());
	vtkTemporalStatistics *native = (vtkTemporalStatistics *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject())
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkTemporalStatistics * r;
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
			Nan::New<v8::Function>(VtkTemporalStatisticsWrap::constructor);
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkTemporalStatisticsWrap *w = new VtkTemporalStatisticsWrap();
		w->native.TakeReference(r);
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkTemporalStatisticsWrap::SetComputeAverage(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTemporalStatisticsWrap *wrapper = ObjectWrap::Unwrap<VtkTemporalStatisticsWrap>(info.Holder());
	vtkTemporalStatistics *native = (vtkTemporalStatistics *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetComputeAverage(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkTemporalStatisticsWrap::SetComputeMaximum(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTemporalStatisticsWrap *wrapper = ObjectWrap::Unwrap<VtkTemporalStatisticsWrap>(info.Holder());
	vtkTemporalStatistics *native = (vtkTemporalStatistics *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetComputeMaximum(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkTemporalStatisticsWrap::SetComputeMinimum(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTemporalStatisticsWrap *wrapper = ObjectWrap::Unwrap<VtkTemporalStatisticsWrap>(info.Holder());
	vtkTemporalStatistics *native = (vtkTemporalStatistics *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetComputeMinimum(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkTemporalStatisticsWrap::SetComputeStandardDeviation(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTemporalStatisticsWrap *wrapper = ObjectWrap::Unwrap<VtkTemporalStatisticsWrap>(info.Holder());
	vtkTemporalStatistics *native = (vtkTemporalStatistics *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetComputeStandardDeviation(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

