/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkStatisticsAlgorithmWrap.h"
#include "vtkAutoCorrelativeStatisticsWrap.h"
#include "vtkObjectWrap.h"
#include "vtkDataObjectCollectionWrap.h"
#include "vtkMultiBlockDataSetWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::Function> VtkAutoCorrelativeStatisticsWrap::constructor;
Nan::Persistent<v8::FunctionTemplate> VtkAutoCorrelativeStatisticsWrap::ptpl;

VtkAutoCorrelativeStatisticsWrap::VtkAutoCorrelativeStatisticsWrap()
{ }

VtkAutoCorrelativeStatisticsWrap::VtkAutoCorrelativeStatisticsWrap(vtkSmartPointer<vtkAutoCorrelativeStatistics> _native)
{ native = _native; }

VtkAutoCorrelativeStatisticsWrap::~VtkAutoCorrelativeStatisticsWrap()
{ }

void VtkAutoCorrelativeStatisticsWrap::Init(v8::Local<v8::Object> exports)
{
	if (!constructor.IsEmpty()) return;
	Nan::HandleScope scope;

	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkStatisticsAlgorithmWrap::Init( exports );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkStatisticsAlgorithmWrap::ptpl));

	tpl->SetClassName(Nan::New("VtkAutoCorrelativeStatisticsWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);
	InitTpl(tpl);

	constructor.Reset( tpl->GetFunction() );
	ptpl.Reset( tpl );

	exports->Set(Nan::New("vtkAutoCorrelativeStatistics").ToLocalChecked(),tpl->GetFunction());
	exports->Set(Nan::New("AutoCorrelativeStatistics").ToLocalChecked(),tpl->GetFunction());
}

void VtkAutoCorrelativeStatisticsWrap::InitTpl(v8::Local<v8::FunctionTemplate> tpl)
{
	Nan::SetPrototypeMethod(tpl, "Aggregate", Aggregate);
	Nan::SetPrototypeMethod(tpl, "aggregate", Aggregate);

	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

}

void VtkAutoCorrelativeStatisticsWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkAutoCorrelativeStatistics> native = vtkSmartPointer<vtkAutoCorrelativeStatistics>::New();
		VtkAutoCorrelativeStatisticsWrap* obj = new VtkAutoCorrelativeStatisticsWrap(native);		obj->Wrap(info.This());
	}
	else
	{
		Nan::Utf8String s(info[0]);
		if(info[0]->ToObject() != vtkNodeJsNoWrap )
			Nan::ThrowError("Parameter Error");
	}

	info.GetReturnValue().Set(info.This());
}

void VtkAutoCorrelativeStatisticsWrap::Aggregate(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAutoCorrelativeStatisticsWrap *wrapper = ObjectWrap::Unwrap<VtkAutoCorrelativeStatisticsWrap>(info.Holder());
	vtkAutoCorrelativeStatistics *native = (vtkAutoCorrelativeStatistics *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject())
	{
		VtkDataObjectCollectionWrap *a0 = ObjectWrap::Unwrap<VtkDataObjectCollectionWrap>(info[0]->ToObject());
		if(info.Length() > 1 && info[1]->IsObject())
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

void VtkAutoCorrelativeStatisticsWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAutoCorrelativeStatisticsWrap *wrapper = ObjectWrap::Unwrap<VtkAutoCorrelativeStatisticsWrap>(info.Holder());
	vtkAutoCorrelativeStatistics *native = (vtkAutoCorrelativeStatistics *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkAutoCorrelativeStatisticsWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAutoCorrelativeStatisticsWrap *wrapper = ObjectWrap::Unwrap<VtkAutoCorrelativeStatisticsWrap>(info.Holder());
	vtkAutoCorrelativeStatistics *native = (vtkAutoCorrelativeStatistics *)wrapper->native.GetPointer();
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

void VtkAutoCorrelativeStatisticsWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAutoCorrelativeStatisticsWrap *wrapper = ObjectWrap::Unwrap<VtkAutoCorrelativeStatisticsWrap>(info.Holder());
	vtkAutoCorrelativeStatistics *native = (vtkAutoCorrelativeStatistics *)wrapper->native.GetPointer();
	vtkAutoCorrelativeStatistics * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::Function>(VtkAutoCorrelativeStatisticsWrap::constructor);
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkAutoCorrelativeStatisticsWrap *w = new VtkAutoCorrelativeStatisticsWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkAutoCorrelativeStatisticsWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAutoCorrelativeStatisticsWrap *wrapper = ObjectWrap::Unwrap<VtkAutoCorrelativeStatisticsWrap>(info.Holder());
	vtkAutoCorrelativeStatistics *native = (vtkAutoCorrelativeStatistics *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject())
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkAutoCorrelativeStatistics * r;
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
			Nan::New<v8::Function>(VtkAutoCorrelativeStatisticsWrap::constructor);
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkAutoCorrelativeStatisticsWrap *w = new VtkAutoCorrelativeStatisticsWrap();
		w->native.TakeReference(r);
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

