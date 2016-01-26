/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkChartMatrixWrap.h"
#include "vtkScatterPlotMatrixWrap.h"
#include "vtkObjectWrap.h"
#include "vtkAnnotationLinkWrap.h"
#include "vtkTableWrap.h"
#include "vtkStringArrayWrap.h"
#include "vtkTextPropertyWrap.h"
#include "vtkTooltipItemWrap.h"
#include "vtkChartWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkScatterPlotMatrixWrap::ptpl;

VtkScatterPlotMatrixWrap::VtkScatterPlotMatrixWrap()
{ }

VtkScatterPlotMatrixWrap::VtkScatterPlotMatrixWrap(vtkSmartPointer<vtkScatterPlotMatrix> _native)
{ native = _native; }

VtkScatterPlotMatrixWrap::~VtkScatterPlotMatrixWrap()
{ }

void VtkScatterPlotMatrixWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkScatterPlotMatrix").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("ScatterPlotMatrix").ToLocalChecked(), ConstructorGetter);
}

void VtkScatterPlotMatrixWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkScatterPlotMatrixWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkChartMatrixWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkChartMatrixWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkScatterPlotMatrixWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "AdvanceAnimation", AdvanceAnimation);
	Nan::SetPrototypeMethod(tpl, "advanceAnimation", AdvanceAnimation);

	Nan::SetPrototypeMethod(tpl, "ClearAnimationPath", ClearAnimationPath);
	Nan::SetPrototypeMethod(tpl, "clearAnimationPath", ClearAnimationPath);

	Nan::SetPrototypeMethod(tpl, "GetActiveAnnotationLink", GetActiveAnnotationLink);
	Nan::SetPrototypeMethod(tpl, "getActiveAnnotationLink", GetActiveAnnotationLink);

	Nan::SetPrototypeMethod(tpl, "GetAnnotationLink", GetAnnotationLink);
	Nan::SetPrototypeMethod(tpl, "getAnnotationLink", GetAnnotationLink);

	Nan::SetPrototypeMethod(tpl, "GetAxisLabelNotation", GetAxisLabelNotation);
	Nan::SetPrototypeMethod(tpl, "getAxisLabelNotation", GetAxisLabelNotation);

	Nan::SetPrototypeMethod(tpl, "GetAxisLabelPrecision", GetAxisLabelPrecision);
	Nan::SetPrototypeMethod(tpl, "getAxisLabelPrecision", GetAxisLabelPrecision);

	Nan::SetPrototypeMethod(tpl, "GetAxisLabelProperties", GetAxisLabelProperties);
	Nan::SetPrototypeMethod(tpl, "getAxisLabelProperties", GetAxisLabelProperties);

	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "GetIndexedLabels", GetIndexedLabels);
	Nan::SetPrototypeMethod(tpl, "getIndexedLabels", GetIndexedLabels);

	Nan::SetPrototypeMethod(tpl, "GetMainChart", GetMainChart);
	Nan::SetPrototypeMethod(tpl, "getMainChart", GetMainChart);

	Nan::SetPrototypeMethod(tpl, "GetNumberOfBins", GetNumberOfBins);
	Nan::SetPrototypeMethod(tpl, "getNumberOfBins", GetNumberOfBins);

	Nan::SetPrototypeMethod(tpl, "GetNumberOfFrames", GetNumberOfFrames);
	Nan::SetPrototypeMethod(tpl, "getNumberOfFrames", GetNumberOfFrames);

	Nan::SetPrototypeMethod(tpl, "GetPlotType", GetPlotType);
	Nan::SetPrototypeMethod(tpl, "getPlotType", GetPlotType);

	Nan::SetPrototypeMethod(tpl, "GetSelectionMode", GetSelectionMode);
	Nan::SetPrototypeMethod(tpl, "getSelectionMode", GetSelectionMode);

	Nan::SetPrototypeMethod(tpl, "GetTitleProperties", GetTitleProperties);
	Nan::SetPrototypeMethod(tpl, "getTitleProperties", GetTitleProperties);

	Nan::SetPrototypeMethod(tpl, "GetTooltip", GetTooltip);
	Nan::SetPrototypeMethod(tpl, "getTooltip", GetTooltip);

	Nan::SetPrototypeMethod(tpl, "GetTooltipNotation", GetTooltipNotation);
	Nan::SetPrototypeMethod(tpl, "getTooltipNotation", GetTooltipNotation);

	Nan::SetPrototypeMethod(tpl, "GetTooltipPrecision", GetTooltipPrecision);
	Nan::SetPrototypeMethod(tpl, "getTooltipPrecision", GetTooltipPrecision);

	Nan::SetPrototypeMethod(tpl, "GetVisibleColumns", GetVisibleColumns);
	Nan::SetPrototypeMethod(tpl, "getVisibleColumns", GetVisibleColumns);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetAxisLabelNotation", SetAxisLabelNotation);
	Nan::SetPrototypeMethod(tpl, "setAxisLabelNotation", SetAxisLabelNotation);

	Nan::SetPrototypeMethod(tpl, "SetAxisLabelPrecision", SetAxisLabelPrecision);
	Nan::SetPrototypeMethod(tpl, "setAxisLabelPrecision", SetAxisLabelPrecision);

	Nan::SetPrototypeMethod(tpl, "SetAxisLabelProperties", SetAxisLabelProperties);
	Nan::SetPrototypeMethod(tpl, "setAxisLabelProperties", SetAxisLabelProperties);

	Nan::SetPrototypeMethod(tpl, "SetIndexedLabels", SetIndexedLabels);
	Nan::SetPrototypeMethod(tpl, "setIndexedLabels", SetIndexedLabels);

	Nan::SetPrototypeMethod(tpl, "SetInput", SetInput);
	Nan::SetPrototypeMethod(tpl, "setInput", SetInput);

	Nan::SetPrototypeMethod(tpl, "SetNumberOfBins", SetNumberOfBins);
	Nan::SetPrototypeMethod(tpl, "setNumberOfBins", SetNumberOfBins);

	Nan::SetPrototypeMethod(tpl, "SetNumberOfFrames", SetNumberOfFrames);
	Nan::SetPrototypeMethod(tpl, "setNumberOfFrames", SetNumberOfFrames);

	Nan::SetPrototypeMethod(tpl, "SetPlotMarkerStyle", SetPlotMarkerStyle);
	Nan::SetPrototypeMethod(tpl, "setPlotMarkerStyle", SetPlotMarkerStyle);

	Nan::SetPrototypeMethod(tpl, "SetSelectionMode", SetSelectionMode);
	Nan::SetPrototypeMethod(tpl, "setSelectionMode", SetSelectionMode);

	Nan::SetPrototypeMethod(tpl, "SetTitleProperties", SetTitleProperties);
	Nan::SetPrototypeMethod(tpl, "setTitleProperties", SetTitleProperties);

	Nan::SetPrototypeMethod(tpl, "SetTooltip", SetTooltip);
	Nan::SetPrototypeMethod(tpl, "setTooltip", SetTooltip);

	Nan::SetPrototypeMethod(tpl, "SetTooltipNotation", SetTooltipNotation);
	Nan::SetPrototypeMethod(tpl, "setTooltipNotation", SetTooltipNotation);

	Nan::SetPrototypeMethod(tpl, "SetTooltipPrecision", SetTooltipPrecision);
	Nan::SetPrototypeMethod(tpl, "setTooltipPrecision", SetTooltipPrecision);

	Nan::SetPrototypeMethod(tpl, "SetVisibleColumns", SetVisibleColumns);
	Nan::SetPrototypeMethod(tpl, "setVisibleColumns", SetVisibleColumns);

	Nan::SetPrototypeMethod(tpl, "Update", Update);
	Nan::SetPrototypeMethod(tpl, "update", Update);

	Nan::SetPrototypeMethod(tpl, "UpdateChartSettings", UpdateChartSettings);
	Nan::SetPrototypeMethod(tpl, "updateChartSettings", UpdateChartSettings);

	Nan::SetPrototypeMethod(tpl, "UpdateSettings", UpdateSettings);
	Nan::SetPrototypeMethod(tpl, "updateSettings", UpdateSettings);

	ptpl.Reset( tpl );
}

void VtkScatterPlotMatrixWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkScatterPlotMatrix> native = vtkSmartPointer<vtkScatterPlotMatrix>::New();
		VtkScatterPlotMatrixWrap* obj = new VtkScatterPlotMatrixWrap(native);		obj->Wrap(info.This());
	}
	else
	{
		Nan::Utf8String s(info[0]);
		if(info[0]->ToObject() != vtkNodeJsNoWrap )
			Nan::ThrowError("Parameter Error");
	}

	info.GetReturnValue().Set(info.This());
}

void VtkScatterPlotMatrixWrap::AdvanceAnimation(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkScatterPlotMatrixWrap *wrapper = ObjectWrap::Unwrap<VtkScatterPlotMatrixWrap>(info.Holder());
	vtkScatterPlotMatrix *native = (vtkScatterPlotMatrix *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->AdvanceAnimation();
}

void VtkScatterPlotMatrixWrap::ClearAnimationPath(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkScatterPlotMatrixWrap *wrapper = ObjectWrap::Unwrap<VtkScatterPlotMatrixWrap>(info.Holder());
	vtkScatterPlotMatrix *native = (vtkScatterPlotMatrix *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->ClearAnimationPath();
}

void VtkScatterPlotMatrixWrap::GetActiveAnnotationLink(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkScatterPlotMatrixWrap *wrapper = ObjectWrap::Unwrap<VtkScatterPlotMatrixWrap>(info.Holder());
	vtkScatterPlotMatrix *native = (vtkScatterPlotMatrix *)wrapper->native.GetPointer();
	vtkAnnotationLink * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetActiveAnnotationLink();
		VtkAnnotationLinkWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkAnnotationLinkWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkAnnotationLinkWrap *w = new VtkAnnotationLinkWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkScatterPlotMatrixWrap::GetAnnotationLink(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkScatterPlotMatrixWrap *wrapper = ObjectWrap::Unwrap<VtkScatterPlotMatrixWrap>(info.Holder());
	vtkScatterPlotMatrix *native = (vtkScatterPlotMatrix *)wrapper->native.GetPointer();
	vtkAnnotationLink * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetAnnotationLink();
		VtkAnnotationLinkWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkAnnotationLinkWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkAnnotationLinkWrap *w = new VtkAnnotationLinkWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkScatterPlotMatrixWrap::GetAxisLabelNotation(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkScatterPlotMatrixWrap *wrapper = ObjectWrap::Unwrap<VtkScatterPlotMatrixWrap>(info.Holder());
	vtkScatterPlotMatrix *native = (vtkScatterPlotMatrix *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		int r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->GetAxisLabelNotation(
			info[0]->Int32Value()
		);
		info.GetReturnValue().Set(Nan::New(r));
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkScatterPlotMatrixWrap::GetAxisLabelPrecision(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkScatterPlotMatrixWrap *wrapper = ObjectWrap::Unwrap<VtkScatterPlotMatrixWrap>(info.Holder());
	vtkScatterPlotMatrix *native = (vtkScatterPlotMatrix *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		int r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->GetAxisLabelPrecision(
			info[0]->Int32Value()
		);
		info.GetReturnValue().Set(Nan::New(r));
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkScatterPlotMatrixWrap::GetAxisLabelProperties(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkScatterPlotMatrixWrap *wrapper = ObjectWrap::Unwrap<VtkScatterPlotMatrixWrap>(info.Holder());
	vtkScatterPlotMatrix *native = (vtkScatterPlotMatrix *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		vtkTextProperty * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->GetAxisLabelProperties(
			info[0]->Int32Value()
		);
			VtkTextPropertyWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkTextPropertyWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkTextPropertyWrap *w = new VtkTextPropertyWrap();
		w->native.TakeReference(r);
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkScatterPlotMatrixWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkScatterPlotMatrixWrap *wrapper = ObjectWrap::Unwrap<VtkScatterPlotMatrixWrap>(info.Holder());
	vtkScatterPlotMatrix *native = (vtkScatterPlotMatrix *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkScatterPlotMatrixWrap::GetIndexedLabels(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkScatterPlotMatrixWrap *wrapper = ObjectWrap::Unwrap<VtkScatterPlotMatrixWrap>(info.Holder());
	vtkScatterPlotMatrix *native = (vtkScatterPlotMatrix *)wrapper->native.GetPointer();
	vtkStringArray * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetIndexedLabels();
		VtkStringArrayWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkStringArrayWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkStringArrayWrap *w = new VtkStringArrayWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkScatterPlotMatrixWrap::GetMainChart(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkScatterPlotMatrixWrap *wrapper = ObjectWrap::Unwrap<VtkScatterPlotMatrixWrap>(info.Holder());
	vtkScatterPlotMatrix *native = (vtkScatterPlotMatrix *)wrapper->native.GetPointer();
	vtkChart * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetMainChart();
		VtkChartWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkChartWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkChartWrap *w = new VtkChartWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkScatterPlotMatrixWrap::GetNumberOfBins(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkScatterPlotMatrixWrap *wrapper = ObjectWrap::Unwrap<VtkScatterPlotMatrixWrap>(info.Holder());
	vtkScatterPlotMatrix *native = (vtkScatterPlotMatrix *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetNumberOfBins();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkScatterPlotMatrixWrap::GetNumberOfFrames(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkScatterPlotMatrixWrap *wrapper = ObjectWrap::Unwrap<VtkScatterPlotMatrixWrap>(info.Holder());
	vtkScatterPlotMatrix *native = (vtkScatterPlotMatrix *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetNumberOfFrames();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkScatterPlotMatrixWrap::GetPlotType(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkScatterPlotMatrixWrap *wrapper = ObjectWrap::Unwrap<VtkScatterPlotMatrixWrap>(info.Holder());
	vtkScatterPlotMatrix *native = (vtkScatterPlotMatrix *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() > 1 && info[1]->IsInt32())
		{
			int r;
			if(info.Length() != 2)
			{
				Nan::ThrowError("Too many parameters.");
				return;
			}
			r = native->GetPlotType(
				info[0]->Int32Value(),
				info[1]->Int32Value()
			);
			info.GetReturnValue().Set(Nan::New(r));
			return;
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkScatterPlotMatrixWrap::GetSelectionMode(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkScatterPlotMatrixWrap *wrapper = ObjectWrap::Unwrap<VtkScatterPlotMatrixWrap>(info.Holder());
	vtkScatterPlotMatrix *native = (vtkScatterPlotMatrix *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetSelectionMode();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkScatterPlotMatrixWrap::GetTitleProperties(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkScatterPlotMatrixWrap *wrapper = ObjectWrap::Unwrap<VtkScatterPlotMatrixWrap>(info.Holder());
	vtkScatterPlotMatrix *native = (vtkScatterPlotMatrix *)wrapper->native.GetPointer();
	vtkTextProperty * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetTitleProperties();
		VtkTextPropertyWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkTextPropertyWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkTextPropertyWrap *w = new VtkTextPropertyWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkScatterPlotMatrixWrap::GetTooltip(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkScatterPlotMatrixWrap *wrapper = ObjectWrap::Unwrap<VtkScatterPlotMatrixWrap>(info.Holder());
	vtkScatterPlotMatrix *native = (vtkScatterPlotMatrix *)wrapper->native.GetPointer();
	vtkTooltipItem * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetTooltip();
		VtkTooltipItemWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkTooltipItemWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkTooltipItemWrap *w = new VtkTooltipItemWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkScatterPlotMatrixWrap::GetTooltipNotation(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkScatterPlotMatrixWrap *wrapper = ObjectWrap::Unwrap<VtkScatterPlotMatrixWrap>(info.Holder());
	vtkScatterPlotMatrix *native = (vtkScatterPlotMatrix *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		int r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->GetTooltipNotation(
			info[0]->Int32Value()
		);
		info.GetReturnValue().Set(Nan::New(r));
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkScatterPlotMatrixWrap::GetTooltipPrecision(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkScatterPlotMatrixWrap *wrapper = ObjectWrap::Unwrap<VtkScatterPlotMatrixWrap>(info.Holder());
	vtkScatterPlotMatrix *native = (vtkScatterPlotMatrix *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		int r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->GetTooltipPrecision(
			info[0]->Int32Value()
		);
		info.GetReturnValue().Set(Nan::New(r));
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkScatterPlotMatrixWrap::GetVisibleColumns(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkScatterPlotMatrixWrap *wrapper = ObjectWrap::Unwrap<VtkScatterPlotMatrixWrap>(info.Holder());
	vtkScatterPlotMatrix *native = (vtkScatterPlotMatrix *)wrapper->native.GetPointer();
	vtkStringArray * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetVisibleColumns();
		VtkStringArrayWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkStringArrayWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkStringArrayWrap *w = new VtkStringArrayWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkScatterPlotMatrixWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkScatterPlotMatrixWrap *wrapper = ObjectWrap::Unwrap<VtkScatterPlotMatrixWrap>(info.Holder());
	vtkScatterPlotMatrix *native = (vtkScatterPlotMatrix *)wrapper->native.GetPointer();
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

void VtkScatterPlotMatrixWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkScatterPlotMatrixWrap *wrapper = ObjectWrap::Unwrap<VtkScatterPlotMatrixWrap>(info.Holder());
	vtkScatterPlotMatrix *native = (vtkScatterPlotMatrix *)wrapper->native.GetPointer();
	vtkScatterPlotMatrix * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
		VtkScatterPlotMatrixWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkScatterPlotMatrixWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkScatterPlotMatrixWrap *w = new VtkScatterPlotMatrixWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkScatterPlotMatrixWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkScatterPlotMatrixWrap *wrapper = ObjectWrap::Unwrap<VtkScatterPlotMatrixWrap>(info.Holder());
	vtkScatterPlotMatrix *native = (vtkScatterPlotMatrix *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkScatterPlotMatrix * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObject *) a0->native.GetPointer()
		);
			VtkScatterPlotMatrixWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkScatterPlotMatrixWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkScatterPlotMatrixWrap *w = new VtkScatterPlotMatrixWrap();
		w->native.TakeReference(r);
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkScatterPlotMatrixWrap::SetAxisLabelNotation(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkScatterPlotMatrixWrap *wrapper = ObjectWrap::Unwrap<VtkScatterPlotMatrixWrap>(info.Holder());
	vtkScatterPlotMatrix *native = (vtkScatterPlotMatrix *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() > 1 && info[1]->IsInt32())
		{
			if(info.Length() != 2)
			{
				Nan::ThrowError("Too many parameters.");
				return;
			}
			native->SetAxisLabelNotation(
				info[0]->Int32Value(),
				info[1]->Int32Value()
			);
			return;
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkScatterPlotMatrixWrap::SetAxisLabelPrecision(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkScatterPlotMatrixWrap *wrapper = ObjectWrap::Unwrap<VtkScatterPlotMatrixWrap>(info.Holder());
	vtkScatterPlotMatrix *native = (vtkScatterPlotMatrix *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() > 1 && info[1]->IsInt32())
		{
			if(info.Length() != 2)
			{
				Nan::ThrowError("Too many parameters.");
				return;
			}
			native->SetAxisLabelPrecision(
				info[0]->Int32Value(),
				info[1]->Int32Value()
			);
			return;
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkScatterPlotMatrixWrap::SetAxisLabelProperties(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkScatterPlotMatrixWrap *wrapper = ObjectWrap::Unwrap<VtkScatterPlotMatrixWrap>(info.Holder());
	vtkScatterPlotMatrix *native = (vtkScatterPlotMatrix *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() > 1 && info[1]->IsObject() && (Nan::New(VtkTextPropertyWrap::ptpl))->HasInstance(info[1]))
		{
			VtkTextPropertyWrap *a1 = ObjectWrap::Unwrap<VtkTextPropertyWrap>(info[1]->ToObject());
			if(info.Length() != 2)
			{
				Nan::ThrowError("Too many parameters.");
				return;
			}
			native->SetAxisLabelProperties(
				info[0]->Int32Value(),
				(vtkTextProperty *) a1->native.GetPointer()
			);
			return;
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkScatterPlotMatrixWrap::SetIndexedLabels(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkScatterPlotMatrixWrap *wrapper = ObjectWrap::Unwrap<VtkScatterPlotMatrixWrap>(info.Holder());
	vtkScatterPlotMatrix *native = (vtkScatterPlotMatrix *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkStringArrayWrap::ptpl))->HasInstance(info[0]))
	{
		VtkStringArrayWrap *a0 = ObjectWrap::Unwrap<VtkStringArrayWrap>(info[0]->ToObject());
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetIndexedLabels(
			(vtkStringArray *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkScatterPlotMatrixWrap::SetInput(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkScatterPlotMatrixWrap *wrapper = ObjectWrap::Unwrap<VtkScatterPlotMatrixWrap>(info.Holder());
	vtkScatterPlotMatrix *native = (vtkScatterPlotMatrix *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkTableWrap::ptpl))->HasInstance(info[0]))
	{
		VtkTableWrap *a0 = ObjectWrap::Unwrap<VtkTableWrap>(info[0]->ToObject());
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetInput(
			(vtkTable *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkScatterPlotMatrixWrap::SetNumberOfBins(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkScatterPlotMatrixWrap *wrapper = ObjectWrap::Unwrap<VtkScatterPlotMatrixWrap>(info.Holder());
	vtkScatterPlotMatrix *native = (vtkScatterPlotMatrix *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetNumberOfBins(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkScatterPlotMatrixWrap::SetNumberOfFrames(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkScatterPlotMatrixWrap *wrapper = ObjectWrap::Unwrap<VtkScatterPlotMatrixWrap>(info.Holder());
	vtkScatterPlotMatrix *native = (vtkScatterPlotMatrix *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetNumberOfFrames(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkScatterPlotMatrixWrap::SetPlotMarkerStyle(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkScatterPlotMatrixWrap *wrapper = ObjectWrap::Unwrap<VtkScatterPlotMatrixWrap>(info.Holder());
	vtkScatterPlotMatrix *native = (vtkScatterPlotMatrix *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() > 1 && info[1]->IsInt32())
		{
			if(info.Length() != 2)
			{
				Nan::ThrowError("Too many parameters.");
				return;
			}
			native->SetPlotMarkerStyle(
				info[0]->Int32Value(),
				info[1]->Int32Value()
			);
			return;
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkScatterPlotMatrixWrap::SetSelectionMode(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkScatterPlotMatrixWrap *wrapper = ObjectWrap::Unwrap<VtkScatterPlotMatrixWrap>(info.Holder());
	vtkScatterPlotMatrix *native = (vtkScatterPlotMatrix *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetSelectionMode(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkScatterPlotMatrixWrap::SetTitleProperties(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkScatterPlotMatrixWrap *wrapper = ObjectWrap::Unwrap<VtkScatterPlotMatrixWrap>(info.Holder());
	vtkScatterPlotMatrix *native = (vtkScatterPlotMatrix *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkTextPropertyWrap::ptpl))->HasInstance(info[0]))
	{
		VtkTextPropertyWrap *a0 = ObjectWrap::Unwrap<VtkTextPropertyWrap>(info[0]->ToObject());
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetTitleProperties(
			(vtkTextProperty *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkScatterPlotMatrixWrap::SetTooltip(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkScatterPlotMatrixWrap *wrapper = ObjectWrap::Unwrap<VtkScatterPlotMatrixWrap>(info.Holder());
	vtkScatterPlotMatrix *native = (vtkScatterPlotMatrix *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkTooltipItemWrap::ptpl))->HasInstance(info[0]))
	{
		VtkTooltipItemWrap *a0 = ObjectWrap::Unwrap<VtkTooltipItemWrap>(info[0]->ToObject());
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetTooltip(
			(vtkTooltipItem *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkScatterPlotMatrixWrap::SetTooltipNotation(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkScatterPlotMatrixWrap *wrapper = ObjectWrap::Unwrap<VtkScatterPlotMatrixWrap>(info.Holder());
	vtkScatterPlotMatrix *native = (vtkScatterPlotMatrix *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() > 1 && info[1]->IsInt32())
		{
			if(info.Length() != 2)
			{
				Nan::ThrowError("Too many parameters.");
				return;
			}
			native->SetTooltipNotation(
				info[0]->Int32Value(),
				info[1]->Int32Value()
			);
			return;
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkScatterPlotMatrixWrap::SetTooltipPrecision(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkScatterPlotMatrixWrap *wrapper = ObjectWrap::Unwrap<VtkScatterPlotMatrixWrap>(info.Holder());
	vtkScatterPlotMatrix *native = (vtkScatterPlotMatrix *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() > 1 && info[1]->IsInt32())
		{
			if(info.Length() != 2)
			{
				Nan::ThrowError("Too many parameters.");
				return;
			}
			native->SetTooltipPrecision(
				info[0]->Int32Value(),
				info[1]->Int32Value()
			);
			return;
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkScatterPlotMatrixWrap::SetVisibleColumns(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkScatterPlotMatrixWrap *wrapper = ObjectWrap::Unwrap<VtkScatterPlotMatrixWrap>(info.Holder());
	vtkScatterPlotMatrix *native = (vtkScatterPlotMatrix *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkStringArrayWrap::ptpl))->HasInstance(info[0]))
	{
		VtkStringArrayWrap *a0 = ObjectWrap::Unwrap<VtkStringArrayWrap>(info[0]->ToObject());
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetVisibleColumns(
			(vtkStringArray *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkScatterPlotMatrixWrap::Update(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkScatterPlotMatrixWrap *wrapper = ObjectWrap::Unwrap<VtkScatterPlotMatrixWrap>(info.Holder());
	vtkScatterPlotMatrix *native = (vtkScatterPlotMatrix *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->Update();
}

void VtkScatterPlotMatrixWrap::UpdateChartSettings(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkScatterPlotMatrixWrap *wrapper = ObjectWrap::Unwrap<VtkScatterPlotMatrixWrap>(info.Holder());
	vtkScatterPlotMatrix *native = (vtkScatterPlotMatrix *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->UpdateChartSettings(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkScatterPlotMatrixWrap::UpdateSettings(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkScatterPlotMatrixWrap *wrapper = ObjectWrap::Unwrap<VtkScatterPlotMatrixWrap>(info.Holder());
	vtkScatterPlotMatrix *native = (vtkScatterPlotMatrix *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->UpdateSettings();
}

