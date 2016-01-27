/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkStatisticsAlgorithmWrap.h"
#include "vtkHighestDensityRegionsStatisticsWrap.h"
#include "vtkObjectWrap.h"
#include "vtkDataObjectCollectionWrap.h"
#include "vtkMultiBlockDataSetWrap.h"
#include "vtkDataArrayWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkHighestDensityRegionsStatisticsWrap::ptpl;

VtkHighestDensityRegionsStatisticsWrap::VtkHighestDensityRegionsStatisticsWrap()
{ }

VtkHighestDensityRegionsStatisticsWrap::VtkHighestDensityRegionsStatisticsWrap(vtkSmartPointer<vtkHighestDensityRegionsStatistics> _native)
{ native = _native; }

VtkHighestDensityRegionsStatisticsWrap::~VtkHighestDensityRegionsStatisticsWrap()
{ }

void VtkHighestDensityRegionsStatisticsWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkHighestDensityRegionsStatistics").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("HighestDensityRegionsStatistics").ToLocalChecked(), ConstructorGetter);
}

void VtkHighestDensityRegionsStatisticsWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkHighestDensityRegionsStatisticsWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkStatisticsAlgorithmWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkStatisticsAlgorithmWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkHighestDensityRegionsStatisticsWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "Aggregate", Aggregate);
	Nan::SetPrototypeMethod(tpl, "aggregate", Aggregate);

	Nan::SetPrototypeMethod(tpl, "ComputeHDR", ComputeHDR);
	Nan::SetPrototypeMethod(tpl, "computeHDR", ComputeHDR);

	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetSigma", SetSigma);
	Nan::SetPrototypeMethod(tpl, "setSigma", SetSigma);

	ptpl.Reset( tpl );
}

void VtkHighestDensityRegionsStatisticsWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkHighestDensityRegionsStatistics> native = vtkSmartPointer<vtkHighestDensityRegionsStatistics>::New();
		VtkHighestDensityRegionsStatisticsWrap* obj = new VtkHighestDensityRegionsStatisticsWrap(native);		obj->Wrap(info.This());
	}
	else
	{
		Nan::Utf8String s(info[0]);
		if(info[0]->ToObject() != vtkNodeJsNoWrap )
			Nan::ThrowError("Parameter Error");
	}

	info.GetReturnValue().Set(info.This());
}

void VtkHighestDensityRegionsStatisticsWrap::Aggregate(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkHighestDensityRegionsStatisticsWrap *wrapper = ObjectWrap::Unwrap<VtkHighestDensityRegionsStatisticsWrap>(info.Holder());
	vtkHighestDensityRegionsStatistics *native = (vtkHighestDensityRegionsStatistics *)wrapper->native.GetPointer();
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

void VtkHighestDensityRegionsStatisticsWrap::ComputeHDR(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkHighestDensityRegionsStatisticsWrap *wrapper = ObjectWrap::Unwrap<VtkHighestDensityRegionsStatisticsWrap>(info.Holder());
	vtkHighestDensityRegionsStatistics *native = (vtkHighestDensityRegionsStatistics *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkDataArrayWrap::ptpl))->HasInstance(info[0]))
	{
		VtkDataArrayWrap *a0 = ObjectWrap::Unwrap<VtkDataArrayWrap>(info[0]->ToObject());
		if(info.Length() > 1 && info[1]->IsObject() && (Nan::New(VtkDataArrayWrap::ptpl))->HasInstance(info[1]))
		{
			VtkDataArrayWrap *a1 = ObjectWrap::Unwrap<VtkDataArrayWrap>(info[1]->ToObject());
			if(info.Length() > 2 && info[2]->IsObject() && (Nan::New(VtkDataArrayWrap::ptpl))->HasInstance(info[2]))
			{
				VtkDataArrayWrap *a2 = ObjectWrap::Unwrap<VtkDataArrayWrap>(info[2]->ToObject());
				double r;
				if(info.Length() != 3)
				{
					Nan::ThrowError("Too many parameters.");
					return;
				}
				r = native->ComputeHDR(
					(vtkDataArray *) a0->native.GetPointer(),
					(vtkDataArray *) a1->native.GetPointer(),
					(vtkDataArray *) a2->native.GetPointer()
				);
				info.GetReturnValue().Set(Nan::New(r));
				return;
			}
			double r;
			if(info.Length() != 2)
			{
				Nan::ThrowError("Too many parameters.");
				return;
			}
			r = native->ComputeHDR(
				(vtkDataArray *) a0->native.GetPointer(),
				(vtkDataArray *) a1->native.GetPointer()
			);
			info.GetReturnValue().Set(Nan::New(r));
			return;
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkHighestDensityRegionsStatisticsWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkHighestDensityRegionsStatisticsWrap *wrapper = ObjectWrap::Unwrap<VtkHighestDensityRegionsStatisticsWrap>(info.Holder());
	vtkHighestDensityRegionsStatistics *native = (vtkHighestDensityRegionsStatistics *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkHighestDensityRegionsStatisticsWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkHighestDensityRegionsStatisticsWrap *wrapper = ObjectWrap::Unwrap<VtkHighestDensityRegionsStatisticsWrap>(info.Holder());
	vtkHighestDensityRegionsStatistics *native = (vtkHighestDensityRegionsStatistics *)wrapper->native.GetPointer();
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

void VtkHighestDensityRegionsStatisticsWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkHighestDensityRegionsStatisticsWrap *wrapper = ObjectWrap::Unwrap<VtkHighestDensityRegionsStatisticsWrap>(info.Holder());
	vtkHighestDensityRegionsStatistics *native = (vtkHighestDensityRegionsStatistics *)wrapper->native.GetPointer();
	vtkHighestDensityRegionsStatistics * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
		VtkHighestDensityRegionsStatisticsWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkHighestDensityRegionsStatisticsWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkHighestDensityRegionsStatisticsWrap *w = new VtkHighestDensityRegionsStatisticsWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkHighestDensityRegionsStatisticsWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkHighestDensityRegionsStatisticsWrap *wrapper = ObjectWrap::Unwrap<VtkHighestDensityRegionsStatisticsWrap>(info.Holder());
	vtkHighestDensityRegionsStatistics *native = (vtkHighestDensityRegionsStatistics *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkHighestDensityRegionsStatistics * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObject *) a0->native.GetPointer()
		);
			VtkHighestDensityRegionsStatisticsWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkHighestDensityRegionsStatisticsWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkHighestDensityRegionsStatisticsWrap *w = new VtkHighestDensityRegionsStatisticsWrap();
		w->native.TakeReference(r);
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkHighestDensityRegionsStatisticsWrap::SetSigma(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkHighestDensityRegionsStatisticsWrap *wrapper = ObjectWrap::Unwrap<VtkHighestDensityRegionsStatisticsWrap>(info.Holder());
	vtkHighestDensityRegionsStatistics *native = (vtkHighestDensityRegionsStatistics *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsNumber())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetSigma(
			info[0]->NumberValue()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

