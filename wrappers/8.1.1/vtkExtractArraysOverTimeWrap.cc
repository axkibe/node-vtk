/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>

#include "vtkMultiBlockDataSetAlgorithmWrap.h"
#include "vtkExtractArraysOverTimeWrap.h"
#include "vtkObjectBaseWrap.h"
#include "vtkAlgorithmOutputWrap.h"
#include "vtkExtractSelectionWrap.h"
#include "../../plus/plus.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkExtractArraysOverTimeWrap::ptpl;

VtkExtractArraysOverTimeWrap::VtkExtractArraysOverTimeWrap()
{ }

VtkExtractArraysOverTimeWrap::VtkExtractArraysOverTimeWrap(vtkSmartPointer<vtkExtractArraysOverTime> _native)
{ native = _native; }

VtkExtractArraysOverTimeWrap::~VtkExtractArraysOverTimeWrap()
{ }

void VtkExtractArraysOverTimeWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkExtractArraysOverTime").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("ExtractArraysOverTime").ToLocalChecked(), ConstructorGetter);
}

void VtkExtractArraysOverTimeWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkExtractArraysOverTimeWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkMultiBlockDataSetAlgorithmWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkMultiBlockDataSetAlgorithmWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkExtractArraysOverTimeWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "GetNumberOfTimeSteps", GetNumberOfTimeSteps);
	Nan::SetPrototypeMethod(tpl, "getNumberOfTimeSteps", GetNumberOfTimeSteps);

	Nan::SetPrototypeMethod(tpl, "GetReportStatisticsOnly", GetReportStatisticsOnly);
	Nan::SetPrototypeMethod(tpl, "getReportStatisticsOnly", GetReportStatisticsOnly);

	Nan::SetPrototypeMethod(tpl, "GetSelectionExtractor", GetSelectionExtractor);
	Nan::SetPrototypeMethod(tpl, "getSelectionExtractor", GetSelectionExtractor);

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

#ifdef VTK_NODE_PLUS_VTKEXTRACTARRAYSOVERTIMEWRAP_INITPTPL
	VTK_NODE_PLUS_VTKEXTRACTARRAYSOVERTIMEWRAP_INITPTPL
#endif
	ptpl.Reset( tpl );
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
		VtkExtractArraysOverTimeWrap* obj = new VtkExtractArraysOverTimeWrap(native);
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
	VtkExtractSelectionWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkExtractSelectionWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkExtractSelectionWrap *w = new VtkExtractSelectionWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
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
	VtkExtractArraysOverTimeWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkExtractArraysOverTimeWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkExtractArraysOverTimeWrap *w = new VtkExtractArraysOverTimeWrap();
	w->native = r;
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
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectBaseWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectBaseWrap *a0 = ObjectWrap::Unwrap<VtkObjectBaseWrap>(info[0]->ToObject());
		vtkExtractArraysOverTime * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObjectBase *) a0->native.GetPointer()
		);
		VtkExtractArraysOverTimeWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkExtractArraysOverTimeWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkExtractArraysOverTimeWrap *w = new VtkExtractArraysOverTimeWrap();
		w->native = r;
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
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkAlgorithmOutputWrap::ptpl))->HasInstance(info[0]))
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
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkExtractSelectionWrap::ptpl))->HasInstance(info[0]))
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

