/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkContextItemWrap.h"
#include "vtkPlotWrap.h"
#include "vtkObjectWrap.h"
#include "vtkPenWrap.h"
#include "vtkBrushWrap.h"
#include "vtkStringArrayWrap.h"
#include "vtkContextMapper2DWrap.h"
#include "vtkTableWrap.h"
#include "vtkIdTypeArrayWrap.h"
#include "vtkAxisWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkPlotWrap::ptpl;

VtkPlotWrap::VtkPlotWrap()
{ }

VtkPlotWrap::VtkPlotWrap(vtkSmartPointer<vtkPlot> _native)
{ native = _native; }

VtkPlotWrap::~VtkPlotWrap()
{ }

void VtkPlotWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkPlot").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("Plot").ToLocalChecked(), ConstructorGetter);
}

void VtkPlotWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkPlotWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkContextItemWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkContextItemWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkPlotWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "GetBrush", GetBrush);
	Nan::SetPrototypeMethod(tpl, "getBrush", GetBrush);

	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "GetData", GetData);
	Nan::SetPrototypeMethod(tpl, "getData", GetData);

	Nan::SetPrototypeMethod(tpl, "GetIndexedLabels", GetIndexedLabels);
	Nan::SetPrototypeMethod(tpl, "getIndexedLabels", GetIndexedLabels);

	Nan::SetPrototypeMethod(tpl, "GetInput", GetInput);
	Nan::SetPrototypeMethod(tpl, "getInput", GetInput);

	Nan::SetPrototypeMethod(tpl, "GetLabels", GetLabels);
	Nan::SetPrototypeMethod(tpl, "getLabels", GetLabels);

	Nan::SetPrototypeMethod(tpl, "GetNumberOfLabels", GetNumberOfLabels);
	Nan::SetPrototypeMethod(tpl, "getNumberOfLabels", GetNumberOfLabels);

	Nan::SetPrototypeMethod(tpl, "GetPen", GetPen);
	Nan::SetPrototypeMethod(tpl, "getPen", GetPen);

	Nan::SetPrototypeMethod(tpl, "GetSelection", GetSelection);
	Nan::SetPrototypeMethod(tpl, "getSelection", GetSelection);

	Nan::SetPrototypeMethod(tpl, "GetSelectionBrush", GetSelectionBrush);
	Nan::SetPrototypeMethod(tpl, "getSelectionBrush", GetSelectionBrush);

	Nan::SetPrototypeMethod(tpl, "GetSelectionPen", GetSelectionPen);
	Nan::SetPrototypeMethod(tpl, "getSelectionPen", GetSelectionPen);

	Nan::SetPrototypeMethod(tpl, "GetTooltipNotation", GetTooltipNotation);
	Nan::SetPrototypeMethod(tpl, "getTooltipNotation", GetTooltipNotation);

	Nan::SetPrototypeMethod(tpl, "GetTooltipPrecision", GetTooltipPrecision);
	Nan::SetPrototypeMethod(tpl, "getTooltipPrecision", GetTooltipPrecision);

	Nan::SetPrototypeMethod(tpl, "GetUseIndexForXSeries", GetUseIndexForXSeries);
	Nan::SetPrototypeMethod(tpl, "getUseIndexForXSeries", GetUseIndexForXSeries);

	Nan::SetPrototypeMethod(tpl, "GetXAxis", GetXAxis);
	Nan::SetPrototypeMethod(tpl, "getXAxis", GetXAxis);

	Nan::SetPrototypeMethod(tpl, "GetYAxis", GetYAxis);
	Nan::SetPrototypeMethod(tpl, "getYAxis", GetYAxis);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetBrush", SetBrush);
	Nan::SetPrototypeMethod(tpl, "setBrush", SetBrush);

	Nan::SetPrototypeMethod(tpl, "SetColor", SetColor);
	Nan::SetPrototypeMethod(tpl, "setColor", SetColor);

	Nan::SetPrototypeMethod(tpl, "SetIndexedLabels", SetIndexedLabels);
	Nan::SetPrototypeMethod(tpl, "setIndexedLabels", SetIndexedLabels);

	Nan::SetPrototypeMethod(tpl, "SetInputData", SetInputData);
	Nan::SetPrototypeMethod(tpl, "setInputData", SetInputData);

	Nan::SetPrototypeMethod(tpl, "SetLabels", SetLabels);
	Nan::SetPrototypeMethod(tpl, "setLabels", SetLabels);

	Nan::SetPrototypeMethod(tpl, "SetPen", SetPen);
	Nan::SetPrototypeMethod(tpl, "setPen", SetPen);

	Nan::SetPrototypeMethod(tpl, "SetSelection", SetSelection);
	Nan::SetPrototypeMethod(tpl, "setSelection", SetSelection);

	Nan::SetPrototypeMethod(tpl, "SetSelectionBrush", SetSelectionBrush);
	Nan::SetPrototypeMethod(tpl, "setSelectionBrush", SetSelectionBrush);

	Nan::SetPrototypeMethod(tpl, "SetSelectionPen", SetSelectionPen);
	Nan::SetPrototypeMethod(tpl, "setSelectionPen", SetSelectionPen);

	Nan::SetPrototypeMethod(tpl, "SetTooltipNotation", SetTooltipNotation);
	Nan::SetPrototypeMethod(tpl, "setTooltipNotation", SetTooltipNotation);

	Nan::SetPrototypeMethod(tpl, "SetTooltipPrecision", SetTooltipPrecision);
	Nan::SetPrototypeMethod(tpl, "setTooltipPrecision", SetTooltipPrecision);

	Nan::SetPrototypeMethod(tpl, "SetUseIndexForXSeries", SetUseIndexForXSeries);
	Nan::SetPrototypeMethod(tpl, "setUseIndexForXSeries", SetUseIndexForXSeries);

	Nan::SetPrototypeMethod(tpl, "SetXAxis", SetXAxis);
	Nan::SetPrototypeMethod(tpl, "setXAxis", SetXAxis);

	Nan::SetPrototypeMethod(tpl, "SetYAxis", SetYAxis);
	Nan::SetPrototypeMethod(tpl, "setYAxis", SetYAxis);

	ptpl.Reset( tpl );
}

void VtkPlotWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		Nan::ThrowError("Cannot create instance of abstract class.");
		return;
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

void VtkPlotWrap::GetBrush(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPlotWrap *wrapper = ObjectWrap::Unwrap<VtkPlotWrap>(info.Holder());
	vtkPlot *native = (vtkPlot *)wrapper->native.GetPointer();
	vtkBrush * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetBrush();
		VtkBrushWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkBrushWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkBrushWrap *w = new VtkBrushWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkPlotWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPlotWrap *wrapper = ObjectWrap::Unwrap<VtkPlotWrap>(info.Holder());
	vtkPlot *native = (vtkPlot *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkPlotWrap::GetData(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPlotWrap *wrapper = ObjectWrap::Unwrap<VtkPlotWrap>(info.Holder());
	vtkPlot *native = (vtkPlot *)wrapper->native.GetPointer();
	vtkContextMapper2D * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetData();
		VtkContextMapper2DWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkContextMapper2DWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkContextMapper2DWrap *w = new VtkContextMapper2DWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkPlotWrap::GetIndexedLabels(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPlotWrap *wrapper = ObjectWrap::Unwrap<VtkPlotWrap>(info.Holder());
	vtkPlot *native = (vtkPlot *)wrapper->native.GetPointer();
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
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkPlotWrap::GetInput(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPlotWrap *wrapper = ObjectWrap::Unwrap<VtkPlotWrap>(info.Holder());
	vtkPlot *native = (vtkPlot *)wrapper->native.GetPointer();
	vtkTable * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetInput();
		VtkTableWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkTableWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkTableWrap *w = new VtkTableWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkPlotWrap::GetLabels(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPlotWrap *wrapper = ObjectWrap::Unwrap<VtkPlotWrap>(info.Holder());
	vtkPlot *native = (vtkPlot *)wrapper->native.GetPointer();
	vtkStringArray * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetLabels();
		VtkStringArrayWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkStringArrayWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkStringArrayWrap *w = new VtkStringArrayWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkPlotWrap::GetNumberOfLabels(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPlotWrap *wrapper = ObjectWrap::Unwrap<VtkPlotWrap>(info.Holder());
	vtkPlot *native = (vtkPlot *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetNumberOfLabels();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkPlotWrap::GetPen(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPlotWrap *wrapper = ObjectWrap::Unwrap<VtkPlotWrap>(info.Holder());
	vtkPlot *native = (vtkPlot *)wrapper->native.GetPointer();
	vtkPen * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetPen();
		VtkPenWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkPenWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkPenWrap *w = new VtkPenWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkPlotWrap::GetSelection(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPlotWrap *wrapper = ObjectWrap::Unwrap<VtkPlotWrap>(info.Holder());
	vtkPlot *native = (vtkPlot *)wrapper->native.GetPointer();
	vtkIdTypeArray * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetSelection();
		VtkIdTypeArrayWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkIdTypeArrayWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkIdTypeArrayWrap *w = new VtkIdTypeArrayWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkPlotWrap::GetSelectionBrush(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPlotWrap *wrapper = ObjectWrap::Unwrap<VtkPlotWrap>(info.Holder());
	vtkPlot *native = (vtkPlot *)wrapper->native.GetPointer();
	vtkBrush * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetSelectionBrush();
		VtkBrushWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkBrushWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkBrushWrap *w = new VtkBrushWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkPlotWrap::GetSelectionPen(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPlotWrap *wrapper = ObjectWrap::Unwrap<VtkPlotWrap>(info.Holder());
	vtkPlot *native = (vtkPlot *)wrapper->native.GetPointer();
	vtkPen * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetSelectionPen();
		VtkPenWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkPenWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkPenWrap *w = new VtkPenWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkPlotWrap::GetTooltipNotation(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPlotWrap *wrapper = ObjectWrap::Unwrap<VtkPlotWrap>(info.Holder());
	vtkPlot *native = (vtkPlot *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetTooltipNotation();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkPlotWrap::GetTooltipPrecision(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPlotWrap *wrapper = ObjectWrap::Unwrap<VtkPlotWrap>(info.Holder());
	vtkPlot *native = (vtkPlot *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetTooltipPrecision();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkPlotWrap::GetUseIndexForXSeries(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPlotWrap *wrapper = ObjectWrap::Unwrap<VtkPlotWrap>(info.Holder());
	vtkPlot *native = (vtkPlot *)wrapper->native.GetPointer();
	bool r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetUseIndexForXSeries();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkPlotWrap::GetXAxis(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPlotWrap *wrapper = ObjectWrap::Unwrap<VtkPlotWrap>(info.Holder());
	vtkPlot *native = (vtkPlot *)wrapper->native.GetPointer();
	vtkAxis * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetXAxis();
		VtkAxisWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkAxisWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkAxisWrap *w = new VtkAxisWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkPlotWrap::GetYAxis(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPlotWrap *wrapper = ObjectWrap::Unwrap<VtkPlotWrap>(info.Holder());
	vtkPlot *native = (vtkPlot *)wrapper->native.GetPointer();
	vtkAxis * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetYAxis();
		VtkAxisWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkAxisWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkAxisWrap *w = new VtkAxisWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkPlotWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPlotWrap *wrapper = ObjectWrap::Unwrap<VtkPlotWrap>(info.Holder());
	vtkPlot *native = (vtkPlot *)wrapper->native.GetPointer();
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

void VtkPlotWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPlotWrap *wrapper = ObjectWrap::Unwrap<VtkPlotWrap>(info.Holder());
	vtkPlot *native = (vtkPlot *)wrapper->native.GetPointer();
	vtkPlot * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
		VtkPlotWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkPlotWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkPlotWrap *w = new VtkPlotWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkPlotWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPlotWrap *wrapper = ObjectWrap::Unwrap<VtkPlotWrap>(info.Holder());
	vtkPlot *native = (vtkPlot *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkPlot * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObject *) a0->native.GetPointer()
		);
			VtkPlotWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkPlotWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkPlotWrap *w = new VtkPlotWrap();
		w->native = r;
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkPlotWrap::SetBrush(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPlotWrap *wrapper = ObjectWrap::Unwrap<VtkPlotWrap>(info.Holder());
	vtkPlot *native = (vtkPlot *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkBrushWrap::ptpl))->HasInstance(info[0]))
	{
		VtkBrushWrap *a0 = ObjectWrap::Unwrap<VtkBrushWrap>(info[0]->ToObject());
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetBrush(
			(vtkBrush *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkPlotWrap::SetColor(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPlotWrap *wrapper = ObjectWrap::Unwrap<VtkPlotWrap>(info.Holder());
	vtkPlot *native = (vtkPlot *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsNumber())
	{
		if(info.Length() > 1 && info[1]->IsNumber())
		{
			if(info.Length() > 2 && info[2]->IsNumber())
			{
				if(info.Length() != 3)
				{
					Nan::ThrowError("Too many parameters.");
					return;
				}
				native->SetColor(
					info[0]->NumberValue(),
					info[1]->NumberValue(),
					info[2]->NumberValue()
				);
				return;
			}
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkPlotWrap::SetIndexedLabels(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPlotWrap *wrapper = ObjectWrap::Unwrap<VtkPlotWrap>(info.Holder());
	vtkPlot *native = (vtkPlot *)wrapper->native.GetPointer();
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

void VtkPlotWrap::SetInputData(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPlotWrap *wrapper = ObjectWrap::Unwrap<VtkPlotWrap>(info.Holder());
	vtkPlot *native = (vtkPlot *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkTableWrap::ptpl))->HasInstance(info[0]))
	{
		VtkTableWrap *a0 = ObjectWrap::Unwrap<VtkTableWrap>(info[0]->ToObject());
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetInputData(
			(vtkTable *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkPlotWrap::SetLabels(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPlotWrap *wrapper = ObjectWrap::Unwrap<VtkPlotWrap>(info.Holder());
	vtkPlot *native = (vtkPlot *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkStringArrayWrap::ptpl))->HasInstance(info[0]))
	{
		VtkStringArrayWrap *a0 = ObjectWrap::Unwrap<VtkStringArrayWrap>(info[0]->ToObject());
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetLabels(
			(vtkStringArray *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkPlotWrap::SetPen(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPlotWrap *wrapper = ObjectWrap::Unwrap<VtkPlotWrap>(info.Holder());
	vtkPlot *native = (vtkPlot *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkPenWrap::ptpl))->HasInstance(info[0]))
	{
		VtkPenWrap *a0 = ObjectWrap::Unwrap<VtkPenWrap>(info[0]->ToObject());
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetPen(
			(vtkPen *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkPlotWrap::SetSelection(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPlotWrap *wrapper = ObjectWrap::Unwrap<VtkPlotWrap>(info.Holder());
	vtkPlot *native = (vtkPlot *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkIdTypeArrayWrap::ptpl))->HasInstance(info[0]))
	{
		VtkIdTypeArrayWrap *a0 = ObjectWrap::Unwrap<VtkIdTypeArrayWrap>(info[0]->ToObject());
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetSelection(
			(vtkIdTypeArray *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkPlotWrap::SetSelectionBrush(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPlotWrap *wrapper = ObjectWrap::Unwrap<VtkPlotWrap>(info.Holder());
	vtkPlot *native = (vtkPlot *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkBrushWrap::ptpl))->HasInstance(info[0]))
	{
		VtkBrushWrap *a0 = ObjectWrap::Unwrap<VtkBrushWrap>(info[0]->ToObject());
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetSelectionBrush(
			(vtkBrush *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkPlotWrap::SetSelectionPen(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPlotWrap *wrapper = ObjectWrap::Unwrap<VtkPlotWrap>(info.Holder());
	vtkPlot *native = (vtkPlot *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkPenWrap::ptpl))->HasInstance(info[0]))
	{
		VtkPenWrap *a0 = ObjectWrap::Unwrap<VtkPenWrap>(info[0]->ToObject());
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetSelectionPen(
			(vtkPen *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkPlotWrap::SetTooltipNotation(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPlotWrap *wrapper = ObjectWrap::Unwrap<VtkPlotWrap>(info.Holder());
	vtkPlot *native = (vtkPlot *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetTooltipNotation(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkPlotWrap::SetTooltipPrecision(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPlotWrap *wrapper = ObjectWrap::Unwrap<VtkPlotWrap>(info.Holder());
	vtkPlot *native = (vtkPlot *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetTooltipPrecision(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkPlotWrap::SetUseIndexForXSeries(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPlotWrap *wrapper = ObjectWrap::Unwrap<VtkPlotWrap>(info.Holder());
	vtkPlot *native = (vtkPlot *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsBoolean())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetUseIndexForXSeries(
			info[0]->BooleanValue()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkPlotWrap::SetXAxis(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPlotWrap *wrapper = ObjectWrap::Unwrap<VtkPlotWrap>(info.Holder());
	vtkPlot *native = (vtkPlot *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkAxisWrap::ptpl))->HasInstance(info[0]))
	{
		VtkAxisWrap *a0 = ObjectWrap::Unwrap<VtkAxisWrap>(info[0]->ToObject());
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetXAxis(
			(vtkAxis *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkPlotWrap::SetYAxis(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPlotWrap *wrapper = ObjectWrap::Unwrap<VtkPlotWrap>(info.Holder());
	vtkPlot *native = (vtkPlot *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkAxisWrap::ptpl))->HasInstance(info[0]))
	{
		VtkAxisWrap *a0 = ObjectWrap::Unwrap<VtkAxisWrap>(info[0]->ToObject());
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetYAxis(
			(vtkAxis *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

