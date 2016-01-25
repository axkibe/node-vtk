/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkMultiBlockDataSetAlgorithmWrap.h"
#include "vtkExtractArraysOverTimeWrap.h"
#include "vtkObjectWrap.h"
#include "vtkAlgorithmOutputWrap.h"
#include "vtkExtractSelectionWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::Function> VtkExtractArraysOverTimeWrap::constructor;

VtkExtractArraysOverTimeWrap::VtkExtractArraysOverTimeWrap()
{ }

VtkExtractArraysOverTimeWrap::VtkExtractArraysOverTimeWrap(vtkSmartPointer<vtkExtractArraysOverTime> _native)
{ native = _native; }

VtkExtractArraysOverTimeWrap::~VtkExtractArraysOverTimeWrap()
{ }

void VtkExtractArraysOverTimeWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::HandleScope scope;

	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	tpl->SetClassName(Nan::New("VtkExtractArraysOverTimeWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	VtkObjectBaseWrap::InitTpl(tpl);
	VtkObjectWrap::InitTpl(tpl);
	VtkAlgorithmWrap::InitTpl(tpl);
	VtkMultiBlockDataSetAlgorithmWrap::InitTpl(tpl);
	InitTpl(tpl);

	constructor.Reset( tpl->GetFunction() );

	exports->Set(Nan::New("vtkExtractArraysOverTime").ToLocalChecked(),tpl->GetFunction());
	exports->Set(Nan::New("ExtractArraysOverTime").ToLocalChecked(),tpl->GetFunction());
}

void VtkExtractArraysOverTimeWrap::InitTpl(v8::Local<v8::FunctionTemplate> tpl)
{
	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "GetNumberOfTimeSteps", GetNumberOfTimeSteps);
	Nan::SetPrototypeMethod(tpl, "getNumberOfTimeSteps", GetNumberOfTimeSteps);

	Nan::SetPrototypeMethod(tpl, "GetReportStatisticsOnly", GetReportStatisticsOnly);
	Nan::SetPrototypeMethod(tpl, "getReportStatisticsOnly", GetReportStatisticsOnly);

	Nan::SetPrototypeMethod(tpl, "GetSelectionExtractor", GetSelectionExtractor);
	Nan::SetPrototypeMethod(tpl, "getSelectionExtractor", GetSelectionExtractor);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "ReportStatisticsOnlyOff", ReportStatisticsOnlyOff);
	Nan::SetPrototypeMethod(tpl, "reportStatisticsOnlyOff", ReportStatisticsOnlyOff);

	Nan::SetPrototypeMethod(tpl, "ReportStatisticsOnlyOn", ReportStatisticsOnlyOn);
	Nan::SetPrototypeMethod(tpl, "reportStatisticsOnlyOn", ReportStatisticsOnlyOn);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetReportStatisticsOnly", SetReportStatisticsOnly);
	Nan::SetPrototypeMethod(tpl, "setReportStatisticsOnly", SetReportStatisticsOnly);

	Nan::SetPrototypeMethod(tpl, "SetSelectionConnection", SetSelectionConnection);
	Nan::SetPrototypeMethod(tpl, "setSelectionConnection", SetSelectionConnection);

	Nan::SetPrototypeMethod(tpl, "SetSelectionExtractor", SetSelectionExtractor);
	Nan::SetPrototypeMethod(tpl, "setSelectionExtractor", SetSelectionExtractor);

}

void VtkExtractArraysOverTimeWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkExtractArraysOverTime> native = vtkSmartPointer<vtkExtractArraysOverTime>::New();
		VtkExtractArraysOverTimeWrap* obj = new VtkExtractArraysOverTimeWrap(native);		obj->Wrap(info.This());
	}
	else
	{
		Nan::Utf8String s(info[0]);
		if(info[0]->ToObject() != vtkNodeJsNoWrap )
			Nan::ThrowError("Parameter Error");
	}

	info.GetReturnValue().Set(info.This());
}

void VtkExtractArraysOverTimeWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkExtractArraysOverTimeWrap *wrapper = ObjectWrap::Unwrap<VtkExtractArraysOverTimeWrap>(info.Holder());
	vtkExtractArraysOverTime *native = (vtkExtractArraysOverTime *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkExtractArraysOverTimeWrap::GetNumberOfTimeSteps(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkExtractArraysOverTimeWrap *wrapper = ObjectWrap::Unwrap<VtkExtractArraysOverTimeWrap>(info.Holder());
	vtkExtractArraysOverTime *native = (vtkExtractArraysOverTime *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetNumberOfTimeSteps();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkExtractArraysOverTimeWrap::GetReportStatisticsOnly(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkExtractArraysOverTimeWrap *wrapper = ObjectWrap::Unwrap<VtkExtractArraysOverTimeWrap>(info.Holder());
	vtkExtractArraysOverTime *native = (vtkExtractArraysOverTime *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetReportStatisticsOnly();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkExtractArraysOverTimeWrap::GetSelectionExtractor(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkExtractArraysOverTimeWrap *wrapper = ObjectWrap::Unwrap<VtkExtractArraysOverTimeWrap>(info.Holder());
	vtkExtractArraysOverTime *native = (vtkExtractArraysOverTime *)wrapper->native.GetPointer();
	vtkExtractSelection * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetSelectionExtractor();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::Function>(VtkExtractSelectionWrap::constructor);
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkExtractSelectionWrap *w = new VtkExtractSelectionWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkExtractArraysOverTimeWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkExtractArraysOverTimeWrap *wrapper = ObjectWrap::Unwrap<VtkExtractArraysOverTimeWrap>(info.Holder());
	vtkExtractArraysOverTime *native = (vtkExtractArraysOverTime *)wrapper->native.GetPointer();
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

void VtkExtractArraysOverTimeWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkExtractArraysOverTimeWrap *wrapper = ObjectWrap::Unwrap<VtkExtractArraysOverTimeWrap>(info.Holder());
	vtkExtractArraysOverTime *native = (vtkExtractArraysOverTime *)wrapper->native.GetPointer();
	vtkExtractArraysOverTime * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::Function>(VtkExtractArraysOverTimeWrap::constructor);
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkExtractArraysOverTimeWrap *w = new VtkExtractArraysOverTimeWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkExtractArraysOverTimeWrap::ReportStatisticsOnlyOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkExtractArraysOverTimeWrap *wrapper = ObjectWrap::Unwrap<VtkExtractArraysOverTimeWrap>(info.Holder());
	vtkExtractArraysOverTime *native = (vtkExtractArraysOverTime *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->ReportStatisticsOnlyOff();
}

void VtkExtractArraysOverTimeWrap::ReportStatisticsOnlyOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkExtractArraysOverTimeWrap *wrapper = ObjectWrap::Unwrap<VtkExtractArraysOverTimeWrap>(info.Holder());
	vtkExtractArraysOverTime *native = (vtkExtractArraysOverTime *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->ReportStatisticsOnlyOn();
}

void VtkExtractArraysOverTimeWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkExtractArraysOverTimeWrap *wrapper = ObjectWrap::Unwrap<VtkExtractArraysOverTimeWrap>(info.Holder());
	vtkExtractArraysOverTime *native = (vtkExtractArraysOverTime *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject())
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkExtractArraysOverTime * r;
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
			Nan::New<v8::Function>(VtkExtractArraysOverTimeWrap::constructor);
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkExtractArraysOverTimeWrap *w = new VtkExtractArraysOverTimeWrap();
		w->native.TakeReference(r);
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkExtractArraysOverTimeWrap::SetReportStatisticsOnly(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkExtractArraysOverTimeWrap *wrapper = ObjectWrap::Unwrap<VtkExtractArraysOverTimeWrap>(info.Holder());
	vtkExtractArraysOverTime *native = (vtkExtractArraysOverTime *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetReportStatisticsOnly(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkExtractArraysOverTimeWrap::SetSelectionConnection(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkExtractArraysOverTimeWrap *wrapper = ObjectWrap::Unwrap<VtkExtractArraysOverTimeWrap>(info.Holder());
	vtkExtractArraysOverTime *native = (vtkExtractArraysOverTime *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject())
	{
		VtkAlgorithmOutputWrap *a0 = ObjectWrap::Unwrap<VtkAlgorithmOutputWrap>(info[0]->ToObject());
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetSelectionConnection(
			(vtkAlgorithmOutput *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkExtractArraysOverTimeWrap::SetSelectionExtractor(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkExtractArraysOverTimeWrap *wrapper = ObjectWrap::Unwrap<VtkExtractArraysOverTimeWrap>(info.Holder());
	vtkExtractArraysOverTime *native = (vtkExtractArraysOverTime *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject())
	{
		VtkExtractSelectionWrap *a0 = ObjectWrap::Unwrap<VtkExtractSelectionWrap>(info[0]->ToObject());
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetSelectionExtractor(
			(vtkExtractSelection *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

