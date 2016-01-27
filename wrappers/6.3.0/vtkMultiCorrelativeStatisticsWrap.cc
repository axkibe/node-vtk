/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkStatisticsAlgorithmWrap.h"
#include "vtkMultiCorrelativeStatisticsWrap.h"
#include "vtkObjectWrap.h"
#include "vtkDataObjectCollectionWrap.h"
#include "vtkMultiBlockDataSetWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkMultiCorrelativeStatisticsWrap::ptpl;

VtkMultiCorrelativeStatisticsWrap::VtkMultiCorrelativeStatisticsWrap()
{ }

VtkMultiCorrelativeStatisticsWrap::VtkMultiCorrelativeStatisticsWrap(vtkSmartPointer<vtkMultiCorrelativeStatistics> _native)
{ native = _native; }

VtkMultiCorrelativeStatisticsWrap::~VtkMultiCorrelativeStatisticsWrap()
{ }

void VtkMultiCorrelativeStatisticsWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkMultiCorrelativeStatistics").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("MultiCorrelativeStatistics").ToLocalChecked(), ConstructorGetter);
}

void VtkMultiCorrelativeStatisticsWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkMultiCorrelativeStatisticsWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkStatisticsAlgorithmWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkStatisticsAlgorithmWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkMultiCorrelativeStatisticsWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "Aggregate", Aggregate);
	Nan::SetPrototypeMethod(tpl, "aggregate", Aggregate);

	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "MedianAbsoluteDeviationOff", MedianAbsoluteDeviationOff);
	Nan::SetPrototypeMethod(tpl, "medianAbsoluteDeviationOff", MedianAbsoluteDeviationOff);

	Nan::SetPrototypeMethod(tpl, "MedianAbsoluteDeviationOn", MedianAbsoluteDeviationOn);
	Nan::SetPrototypeMethod(tpl, "medianAbsoluteDeviationOn", MedianAbsoluteDeviationOn);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	ptpl.Reset( tpl );
}

void VtkMultiCorrelativeStatisticsWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkMultiCorrelativeStatistics> native = vtkSmartPointer<vtkMultiCorrelativeStatistics>::New();
		VtkMultiCorrelativeStatisticsWrap* obj = new VtkMultiCorrelativeStatisticsWrap(native);		obj->Wrap(info.This());
	}
	else
	{
		Nan::Utf8String s(info[0]);
		if(info[0]->ToObject() != vtkNodeJsNoWrap )
			Nan::ThrowError("Parameter Error");
	}

	info.GetReturnValue().Set(info.This());
}

void VtkMultiCorrelativeStatisticsWrap::Aggregate(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkMultiCorrelativeStatisticsWrap *wrapper = ObjectWrap::Unwrap<VtkMultiCorrelativeStatisticsWrap>(info.Holder());
	vtkMultiCorrelativeStatistics *native = (vtkMultiCorrelativeStatistics *)wrapper->native.GetPointer();
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

void VtkMultiCorrelativeStatisticsWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkMultiCorrelativeStatisticsWrap *wrapper = ObjectWrap::Unwrap<VtkMultiCorrelativeStatisticsWrap>(info.Holder());
	vtkMultiCorrelativeStatistics *native = (vtkMultiCorrelativeStatistics *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkMultiCorrelativeStatisticsWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkMultiCorrelativeStatisticsWrap *wrapper = ObjectWrap::Unwrap<VtkMultiCorrelativeStatisticsWrap>(info.Holder());
	vtkMultiCorrelativeStatistics *native = (vtkMultiCorrelativeStatistics *)wrapper->native.GetPointer();
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

void VtkMultiCorrelativeStatisticsWrap::MedianAbsoluteDeviationOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkMultiCorrelativeStatisticsWrap *wrapper = ObjectWrap::Unwrap<VtkMultiCorrelativeStatisticsWrap>(info.Holder());
	vtkMultiCorrelativeStatistics *native = (vtkMultiCorrelativeStatistics *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->MedianAbsoluteDeviationOff();
}

void VtkMultiCorrelativeStatisticsWrap::MedianAbsoluteDeviationOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkMultiCorrelativeStatisticsWrap *wrapper = ObjectWrap::Unwrap<VtkMultiCorrelativeStatisticsWrap>(info.Holder());
	vtkMultiCorrelativeStatistics *native = (vtkMultiCorrelativeStatistics *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->MedianAbsoluteDeviationOn();
}

void VtkMultiCorrelativeStatisticsWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkMultiCorrelativeStatisticsWrap *wrapper = ObjectWrap::Unwrap<VtkMultiCorrelativeStatisticsWrap>(info.Holder());
	vtkMultiCorrelativeStatistics *native = (vtkMultiCorrelativeStatistics *)wrapper->native.GetPointer();
	vtkMultiCorrelativeStatistics * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
		VtkMultiCorrelativeStatisticsWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkMultiCorrelativeStatisticsWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkMultiCorrelativeStatisticsWrap *w = new VtkMultiCorrelativeStatisticsWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkMultiCorrelativeStatisticsWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkMultiCorrelativeStatisticsWrap *wrapper = ObjectWrap::Unwrap<VtkMultiCorrelativeStatisticsWrap>(info.Holder());
	vtkMultiCorrelativeStatistics *native = (vtkMultiCorrelativeStatistics *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkMultiCorrelativeStatistics * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObject *) a0->native.GetPointer()
		);
			VtkMultiCorrelativeStatisticsWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkMultiCorrelativeStatisticsWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkMultiCorrelativeStatisticsWrap *w = new VtkMultiCorrelativeStatisticsWrap();
		w->native.TakeReference(r);
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

