/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkStatisticsAlgorithmWrap.h"
#include "vtkDescriptiveStatisticsWrap.h"
#include "vtkObjectWrap.h"
#include "vtkDataObjectCollectionWrap.h"
#include "vtkMultiBlockDataSetWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkDescriptiveStatisticsWrap::ptpl;

VtkDescriptiveStatisticsWrap::VtkDescriptiveStatisticsWrap()
{ }

VtkDescriptiveStatisticsWrap::VtkDescriptiveStatisticsWrap(vtkSmartPointer<vtkDescriptiveStatistics> _native)
{ native = _native; }

VtkDescriptiveStatisticsWrap::~VtkDescriptiveStatisticsWrap()
{ }

void VtkDescriptiveStatisticsWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkDescriptiveStatistics").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("DescriptiveStatistics").ToLocalChecked(), ConstructorGetter);
}

void VtkDescriptiveStatisticsWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkDescriptiveStatisticsWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkStatisticsAlgorithmWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkStatisticsAlgorithmWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkDescriptiveStatisticsWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "Aggregate", Aggregate);
	Nan::SetPrototypeMethod(tpl, "aggregate", Aggregate);

	Nan::SetPrototypeMethod(tpl, "G1SkewnessOff", G1SkewnessOff);
	Nan::SetPrototypeMethod(tpl, "g1SkewnessOff", G1SkewnessOff);

	Nan::SetPrototypeMethod(tpl, "G1SkewnessOn", G1SkewnessOn);
	Nan::SetPrototypeMethod(tpl, "g1SkewnessOn", G1SkewnessOn);

	Nan::SetPrototypeMethod(tpl, "G2KurtosisOff", G2KurtosisOff);
	Nan::SetPrototypeMethod(tpl, "g2KurtosisOff", G2KurtosisOff);

	Nan::SetPrototypeMethod(tpl, "G2KurtosisOn", G2KurtosisOn);
	Nan::SetPrototypeMethod(tpl, "g2KurtosisOn", G2KurtosisOn);

	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "GetG1Skewness", GetG1Skewness);
	Nan::SetPrototypeMethod(tpl, "getG1Skewness", GetG1Skewness);

	Nan::SetPrototypeMethod(tpl, "GetG2Kurtosis", GetG2Kurtosis);
	Nan::SetPrototypeMethod(tpl, "getG2Kurtosis", GetG2Kurtosis);

	Nan::SetPrototypeMethod(tpl, "GetSignedDeviations", GetSignedDeviations);
	Nan::SetPrototypeMethod(tpl, "getSignedDeviations", GetSignedDeviations);

	Nan::SetPrototypeMethod(tpl, "GetUnbiasedVariance", GetUnbiasedVariance);
	Nan::SetPrototypeMethod(tpl, "getUnbiasedVariance", GetUnbiasedVariance);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetG1Skewness", SetG1Skewness);
	Nan::SetPrototypeMethod(tpl, "setG1Skewness", SetG1Skewness);

	Nan::SetPrototypeMethod(tpl, "SetG2Kurtosis", SetG2Kurtosis);
	Nan::SetPrototypeMethod(tpl, "setG2Kurtosis", SetG2Kurtosis);

	Nan::SetPrototypeMethod(tpl, "SetSignedDeviations", SetSignedDeviations);
	Nan::SetPrototypeMethod(tpl, "setSignedDeviations", SetSignedDeviations);

	Nan::SetPrototypeMethod(tpl, "SetUnbiasedVariance", SetUnbiasedVariance);
	Nan::SetPrototypeMethod(tpl, "setUnbiasedVariance", SetUnbiasedVariance);

	Nan::SetPrototypeMethod(tpl, "SignedDeviationsOff", SignedDeviationsOff);
	Nan::SetPrototypeMethod(tpl, "signedDeviationsOff", SignedDeviationsOff);

	Nan::SetPrototypeMethod(tpl, "SignedDeviationsOn", SignedDeviationsOn);
	Nan::SetPrototypeMethod(tpl, "signedDeviationsOn", SignedDeviationsOn);

	Nan::SetPrototypeMethod(tpl, "UnbiasedVarianceOff", UnbiasedVarianceOff);
	Nan::SetPrototypeMethod(tpl, "unbiasedVarianceOff", UnbiasedVarianceOff);

	Nan::SetPrototypeMethod(tpl, "UnbiasedVarianceOn", UnbiasedVarianceOn);
	Nan::SetPrototypeMethod(tpl, "unbiasedVarianceOn", UnbiasedVarianceOn);

	ptpl.Reset( tpl );
}

void VtkDescriptiveStatisticsWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkDescriptiveStatistics> native = vtkSmartPointer<vtkDescriptiveStatistics>::New();
		VtkDescriptiveStatisticsWrap* obj = new VtkDescriptiveStatisticsWrap(native);		obj->Wrap(info.This());
	}
	else
	{
		if(info[0]->ToObject() != vtkNodeJsNoWrap )
			Nan::ThrowError("Parameter Error");
	}

	info.GetReturnValue().Set(info.This());
}

void VtkDescriptiveStatisticsWrap::Aggregate(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDescriptiveStatisticsWrap *wrapper = ObjectWrap::Unwrap<VtkDescriptiveStatisticsWrap>(info.Holder());
	vtkDescriptiveStatistics *native = (vtkDescriptiveStatistics *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkDataObjectCollectionWrap::ptpl))->HasInstance(info[0]))
	{
		VtkDataObjectCollectionWrap *a0 = ObjectWrap::Unwrap<VtkDataObjectCollectionWrap>(info[0]->ToObject());
		if(info.Length() > 1 && info[1]->IsObject() && (Nan::New(VtkMultiBlockDataSetWrap::ptpl))->HasInstance(info[1]))
		{
			VtkMultiBlockDataSetWrap *a1 = ObjectWrap::Unwrap<VtkMultiBlockDataSetWrap>(info[1]->ToObject());
			if(info.Length() != 2)
			{
				Nan::ThrowError("Too many parameters.");
				return;
			}
			native->Aggregate(
				(vtkDataObjectCollection *) a0->native.GetPointer(),
				(vtkMultiBlockDataSet *) a1->native.GetPointer()
			);
			return;
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkDescriptiveStatisticsWrap::G1SkewnessOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDescriptiveStatisticsWrap *wrapper = ObjectWrap::Unwrap<VtkDescriptiveStatisticsWrap>(info.Holder());
	vtkDescriptiveStatistics *native = (vtkDescriptiveStatistics *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->G1SkewnessOff();
}

void VtkDescriptiveStatisticsWrap::G1SkewnessOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDescriptiveStatisticsWrap *wrapper = ObjectWrap::Unwrap<VtkDescriptiveStatisticsWrap>(info.Holder());
	vtkDescriptiveStatistics *native = (vtkDescriptiveStatistics *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->G1SkewnessOn();
}

void VtkDescriptiveStatisticsWrap::G2KurtosisOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDescriptiveStatisticsWrap *wrapper = ObjectWrap::Unwrap<VtkDescriptiveStatisticsWrap>(info.Holder());
	vtkDescriptiveStatistics *native = (vtkDescriptiveStatistics *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->G2KurtosisOff();
}

void VtkDescriptiveStatisticsWrap::G2KurtosisOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDescriptiveStatisticsWrap *wrapper = ObjectWrap::Unwrap<VtkDescriptiveStatisticsWrap>(info.Holder());
	vtkDescriptiveStatistics *native = (vtkDescriptiveStatistics *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->G2KurtosisOn();
}

void VtkDescriptiveStatisticsWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDescriptiveStatisticsWrap *wrapper = ObjectWrap::Unwrap<VtkDescriptiveStatisticsWrap>(info.Holder());
	vtkDescriptiveStatistics *native = (vtkDescriptiveStatistics *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkDescriptiveStatisticsWrap::GetG1Skewness(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDescriptiveStatisticsWrap *wrapper = ObjectWrap::Unwrap<VtkDescriptiveStatisticsWrap>(info.Holder());
	vtkDescriptiveStatistics *native = (vtkDescriptiveStatistics *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetG1Skewness();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkDescriptiveStatisticsWrap::GetG2Kurtosis(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDescriptiveStatisticsWrap *wrapper = ObjectWrap::Unwrap<VtkDescriptiveStatisticsWrap>(info.Holder());
	vtkDescriptiveStatistics *native = (vtkDescriptiveStatistics *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetG2Kurtosis();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkDescriptiveStatisticsWrap::GetSignedDeviations(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDescriptiveStatisticsWrap *wrapper = ObjectWrap::Unwrap<VtkDescriptiveStatisticsWrap>(info.Holder());
	vtkDescriptiveStatistics *native = (vtkDescriptiveStatistics *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetSignedDeviations();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkDescriptiveStatisticsWrap::GetUnbiasedVariance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDescriptiveStatisticsWrap *wrapper = ObjectWrap::Unwrap<VtkDescriptiveStatisticsWrap>(info.Holder());
	vtkDescriptiveStatistics *native = (vtkDescriptiveStatistics *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetUnbiasedVariance();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkDescriptiveStatisticsWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDescriptiveStatisticsWrap *wrapper = ObjectWrap::Unwrap<VtkDescriptiveStatisticsWrap>(info.Holder());
	vtkDescriptiveStatistics *native = (vtkDescriptiveStatistics *)wrapper->native.GetPointer();
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

void VtkDescriptiveStatisticsWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDescriptiveStatisticsWrap *wrapper = ObjectWrap::Unwrap<VtkDescriptiveStatisticsWrap>(info.Holder());
	vtkDescriptiveStatistics *native = (vtkDescriptiveStatistics *)wrapper->native.GetPointer();
	vtkDescriptiveStatistics * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
		VtkDescriptiveStatisticsWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkDescriptiveStatisticsWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkDescriptiveStatisticsWrap *w = new VtkDescriptiveStatisticsWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkDescriptiveStatisticsWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDescriptiveStatisticsWrap *wrapper = ObjectWrap::Unwrap<VtkDescriptiveStatisticsWrap>(info.Holder());
	vtkDescriptiveStatistics *native = (vtkDescriptiveStatistics *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkDescriptiveStatistics * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObject *) a0->native.GetPointer()
		);
			VtkDescriptiveStatisticsWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkDescriptiveStatisticsWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkDescriptiveStatisticsWrap *w = new VtkDescriptiveStatisticsWrap();
		w->native = r;
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkDescriptiveStatisticsWrap::SetG1Skewness(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDescriptiveStatisticsWrap *wrapper = ObjectWrap::Unwrap<VtkDescriptiveStatisticsWrap>(info.Holder());
	vtkDescriptiveStatistics *native = (vtkDescriptiveStatistics *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetG1Skewness(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkDescriptiveStatisticsWrap::SetG2Kurtosis(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDescriptiveStatisticsWrap *wrapper = ObjectWrap::Unwrap<VtkDescriptiveStatisticsWrap>(info.Holder());
	vtkDescriptiveStatistics *native = (vtkDescriptiveStatistics *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetG2Kurtosis(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkDescriptiveStatisticsWrap::SetSignedDeviations(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDescriptiveStatisticsWrap *wrapper = ObjectWrap::Unwrap<VtkDescriptiveStatisticsWrap>(info.Holder());
	vtkDescriptiveStatistics *native = (vtkDescriptiveStatistics *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetSignedDeviations(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkDescriptiveStatisticsWrap::SetUnbiasedVariance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDescriptiveStatisticsWrap *wrapper = ObjectWrap::Unwrap<VtkDescriptiveStatisticsWrap>(info.Holder());
	vtkDescriptiveStatistics *native = (vtkDescriptiveStatistics *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetUnbiasedVariance(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkDescriptiveStatisticsWrap::SignedDeviationsOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDescriptiveStatisticsWrap *wrapper = ObjectWrap::Unwrap<VtkDescriptiveStatisticsWrap>(info.Holder());
	vtkDescriptiveStatistics *native = (vtkDescriptiveStatistics *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->SignedDeviationsOff();
}

void VtkDescriptiveStatisticsWrap::SignedDeviationsOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDescriptiveStatisticsWrap *wrapper = ObjectWrap::Unwrap<VtkDescriptiveStatisticsWrap>(info.Holder());
	vtkDescriptiveStatistics *native = (vtkDescriptiveStatistics *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->SignedDeviationsOn();
}

void VtkDescriptiveStatisticsWrap::UnbiasedVarianceOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDescriptiveStatisticsWrap *wrapper = ObjectWrap::Unwrap<VtkDescriptiveStatisticsWrap>(info.Holder());
	vtkDescriptiveStatistics *native = (vtkDescriptiveStatistics *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->UnbiasedVarianceOff();
}

void VtkDescriptiveStatisticsWrap::UnbiasedVarianceOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDescriptiveStatisticsWrap *wrapper = ObjectWrap::Unwrap<VtkDescriptiveStatisticsWrap>(info.Holder());
	vtkDescriptiveStatistics *native = (vtkDescriptiveStatistics *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->UnbiasedVarianceOn();
}
