/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>

#include "vtkContextItemWrap.h"
#include "vtkPlotWrap.h"
#include "vtkObjectBaseWrap.h"
#include "vtkPenWrap.h"
#include "vtkBrushWrap.h"
#include "vtkStringArrayWrap.h"
#include "vtkContextMapper2DWrap.h"
#include "vtkTableWrap.h"
#include "vtkIdTypeArrayWrap.h"
#include "vtkAxisWrap.h"
#include "../../plus/plus.h"

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

	Nan::SetPrototypeMethod(tpl, "GetBounds", GetBounds);
	Nan::SetPrototypeMethod(tpl, "getBounds", GetBounds);

	Nan::SetPrototypeMethod(tpl, "GetBrush", GetBrush);
	Nan::SetPrototypeMethod(tpl, "getBrush", GetBrush);

	Nan::SetPrototypeMethod(tpl, "GetColor", GetColor);
	Nan::SetPrototypeMethod(tpl, "getColor", GetColor);

	Nan::SetPrototypeMethod(tpl, "GetData", GetData);
	Nan::SetPrototypeMethod(tpl, "getData", GetData);

	Nan::SetPrototypeMethod(tpl, "GetIndexedLabels", GetIndexedLabels);
	Nan::SetPrototypeMethod(tpl, "getIndexedLabels", GetIndexedLabels);

	Nan::SetPrototypeMethod(tpl, "GetInput", GetInput);
	Nan::SetPrototypeMethod(tpl, "getInput", GetInput);

	Nan::SetPrototypeMethod(tpl, "GetLabels", GetLabels);
	Nan::SetPrototypeMethod(tpl, "getLabels", GetLabels);

	Nan::SetPrototypeMethod(tpl, "GetLegendVisibility", GetLegendVisibility);
	Nan::SetPrototypeMethod(tpl, "getLegendVisibility", GetLegendVisibility);

	Nan::SetPrototypeMethod(tpl, "GetNumberOfLabels", GetNumberOfLabels);
	Nan::SetPrototypeMethod(tpl, "getNumberOfLabels", GetNumberOfLabels);

	Nan::SetPrototypeMethod(tpl, "GetPen", GetPen);
	Nan::SetPrototypeMethod(tpl, "getPen", GetPen);

	Nan::SetPrototypeMethod(tpl, "GetSelectable", GetSelectable);
	Nan::SetPrototypeMethod(tpl, "getSelectable", GetSelectable);

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

	Nan::SetPrototypeMethod(tpl, "GetUnscaledInputBounds", GetUnscaledInputBounds);
	Nan::SetPrototypeMethod(tpl, "getUnscaledInputBounds", GetUnscaledInputBounds);

	Nan::SetPrototypeMethod(tpl, "GetUseIndexForXSeries", GetUseIndexForXSeries);
	Nan::SetPrototypeMethod(tpl, "getUseIndexForXSeries", GetUseIndexForXSeries);

	Nan::SetPrototypeMethod(tpl, "GetWidth", GetWidth);
	Nan::SetPrototypeMethod(tpl, "getWidth", GetWidth);

	Nan::SetPrototypeMethod(tpl, "GetXAxis", GetXAxis);
	Nan::SetPrototypeMethod(tpl, "getXAxis", GetXAxis);

	Nan::SetPrototypeMethod(tpl, "GetYAxis", GetYAxis);
	Nan::SetPrototypeMethod(tpl, "getYAxis", GetYAxis);

	Nan::SetPrototypeMethod(tpl, "LegendVisibilityOff", LegendVisibilityOff);
	Nan::SetPrototypeMethod(tpl, "legendVisibilityOff", LegendVisibilityOff);

	Nan::SetPrototypeMethod(tpl, "LegendVisibilityOn", LegendVisibilityOn);
	Nan::SetPrototypeMethod(tpl, "legendVisibilityOn", LegendVisibilityOn);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SelectableOff", SelectableOff);
	Nan::SetPrototypeMethod(tpl, "selectableOff", SelectableOff);

	Nan::SetPrototypeMethod(tpl, "SelectableOn", SelectableOn);
	Nan::SetPrototypeMethod(tpl, "selectableOn", SelectableOn);

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

	Nan::SetPrototypeMethod(tpl, "SetLegendVisibility", SetLegendVisibility);
	Nan::SetPrototypeMethod(tpl, "setLegendVisibility", SetLegendVisibility);

	Nan::SetPrototypeMethod(tpl, "SetPen", SetPen);
	Nan::SetPrototypeMethod(tpl, "setPen", SetPen);

	Nan::SetPrototypeMethod(tpl, "SetSelectable", SetSelectable);
	Nan::SetPrototypeMethod(tpl, "setSelectable", SetSelectable);

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

	Nan::SetPrototypeMethod(tpl, "SetWidth", SetWidth);
	Nan::SetPrototypeMethod(tpl, "setWidth", SetWidth);

	Nan::SetPrototypeMethod(tpl, "SetXAxis", SetXAxis);
	Nan::SetPrototypeMethod(tpl, "setXAxis", SetXAxis);

	Nan::SetPrototypeMethod(tpl, "SetYAxis", SetYAxis);
	Nan::SetPrototypeMethod(tpl, "setYAxis", SetYAxis);

	Nan::SetPrototypeMethod(tpl, "UpdateCache", UpdateCache);
	Nan::SetPrototypeMethod(tpl, "updateCache", UpdateCache);

#ifdef VTK_NODE_PLUS_VTKPLOTWRAP_INITPTPL
	VTK_NODE_PLUS_VTKPLOTWRAP_INITPTPL
#endif
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

void VtkPlotWrap::GetBounds(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPlotWrap *wrapper = ObjectWrap::Unwrap<VtkPlotWrap>(info.Holder());
	vtkPlot *native = (vtkPlot *)wrapper->native.GetPointer();
	size_t i;
	if(info.Length() > 0 && info[0]->IsFloat64Array())
	{
		v8::Local<v8::Float64Array>a0(v8::Local<v8::Float64Array>::Cast(info[0]->ToObject()));
		if( a0->Length() < 4 )
		{
			Nan::ThrowError("Array too short.");
			return;
		}

				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->GetBounds(
			(double *)(a0->Buffer()->GetContents().Data())
		);
		return;
	}
	else if(info.Length() > 0 && info[0]->IsArray())
	{
		v8::Local<v8::Array>a0(v8::Local<v8::Array>::Cast(info[0]->ToObject()));
		double b0[4];
		if( a0->Length() < 4 )
		{
			Nan::ThrowError("Array too short.");
			return;
		}

		for( i = 0; i < 4; i++ )
		{
			if( !a0->Get(i)->IsNumber() )
			{
				Nan::ThrowError("Array contents invalid.");
				return;
			}
			b0[i] = a0->Get(i)->NumberValue();
		}
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->GetBounds(
			b0
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
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

void VtkPlotWrap::GetColor(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPlotWrap *wrapper = ObjectWrap::Unwrap<VtkPlotWrap>(info.Holder());
	vtkPlot *native = (vtkPlot *)wrapper->native.GetPointer();
	size_t i;
	if(info.Length() > 0 && info[0]->IsUint8Array())
	{
		v8::Local<v8::Uint8Array>a0(v8::Local<v8::Uint8Array>::Cast(info[0]->ToObject()));
		if( a0->Length() < 3 )
		{
			Nan::ThrowError("Array too short.");
			return;
		}

				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->GetColor(
			(unsigned char *)(a0->Buffer()->GetContents().Data())
		);
		return;
	}
	else if(info.Length() > 0 && info[0]->IsArray())
	{
		v8::Local<v8::Array>a0(v8::Local<v8::Array>::Cast(info[0]->ToObject()));
		unsigned char b0[3];
		if( a0->Length() < 3 )
		{
			Nan::ThrowError("Array too short.");
			return;
		}

		for( i = 0; i < 3; i++ )
		{
			if( !a0->Get(i)->IsUint32() )
			{
				Nan::ThrowError("Array contents invalid.");
				return;
			}
			b0[i] = a0->Get(i)->Uint32Value();
		}
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->GetColor(
			b0
		);
		return;
	}
	else if(info.Length() > 0 && info[0]->IsFloat64Array())
	{
		v8::Local<v8::Float64Array>a0(v8::Local<v8::Float64Array>::Cast(info[0]->ToObject()));
		if( a0->Length() < 3 )
		{
			Nan::ThrowError("Array too short.");
			return;
		}

				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->GetColor(
			(double *)(a0->Buffer()->GetContents().Data())
		);
		return;
	}
	else if(info.Length() > 0 && info[0]->IsArray())
	{
		v8::Local<v8::Array>a0(v8::Local<v8::Array>::Cast(info[0]->ToObject()));
		double b0[3];
		if( a0->Length() < 3 )
		{
			Nan::ThrowError("Array too short.");
			return;
		}

		for( i = 0; i < 3; i++ )
		{
			if( !a0->Get(i)->IsNumber() )
			{
				Nan::ThrowError("Array contents invalid.");
				return;
			}
			b0[i] = a0->Get(i)->NumberValue();
		}
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->GetColor(
			b0
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
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

void VtkPlotWrap::GetLegendVisibility(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPlotWrap *wrapper = ObjectWrap::Unwrap<VtkPlotWrap>(info.Holder());
	vtkPlot *native = (vtkPlot *)wrapper->native.GetPointer();
	bool r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetLegendVisibility();
	info.GetReturnValue().Set(Nan::New(r));
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

void VtkPlotWrap::GetSelectable(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPlotWrap *wrapper = ObjectWrap::Unwrap<VtkPlotWrap>(info.Holder());
	vtkPlot *native = (vtkPlot *)wrapper->native.GetPointer();
	bool r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetSelectable();
	info.GetReturnValue().Set(Nan::New(r));
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

void VtkPlotWrap::GetUnscaledInputBounds(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPlotWrap *wrapper = ObjectWrap::Unwrap<VtkPlotWrap>(info.Holder());
	vtkPlot *native = (vtkPlot *)wrapper->native.GetPointer();
	size_t i;
	if(info.Length() > 0 && info[0]->IsFloat64Array())
	{
		v8::Local<v8::Float64Array>a0(v8::Local<v8::Float64Array>::Cast(info[0]->ToObject()));
		if( a0->Length() < 4 )
		{
			Nan::ThrowError("Array too short.");
			return;
		}

				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->GetUnscaledInputBounds(
			(double *)(a0->Buffer()->GetContents().Data())
		);
		return;
	}
	else if(info.Length() > 0 && info[0]->IsArray())
	{
		v8::Local<v8::Array>a0(v8::Local<v8::Array>::Cast(info[0]->ToObject()));
		double b0[4];
		if( a0->Length() < 4 )
		{
			Nan::ThrowError("Array too short.");
			return;
		}

		for( i = 0; i < 4; i++ )
		{
			if( !a0->Get(i)->IsNumber() )
			{
				Nan::ThrowError("Array contents invalid.");
				return;
			}
			b0[i] = a0->Get(i)->NumberValue();
		}
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->GetUnscaledInputBounds(
			b0
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
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

void VtkPlotWrap::GetWidth(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPlotWrap *wrapper = ObjectWrap::Unwrap<VtkPlotWrap>(info.Holder());
	vtkPlot *native = (vtkPlot *)wrapper->native.GetPointer();
	float r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetWidth();
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

void VtkPlotWrap::LegendVisibilityOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPlotWrap *wrapper = ObjectWrap::Unwrap<VtkPlotWrap>(info.Holder());
	vtkPlot *native = (vtkPlot *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->LegendVisibilityOff();
}

void VtkPlotWrap::LegendVisibilityOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPlotWrap *wrapper = ObjectWrap::Unwrap<VtkPlotWrap>(info.Holder());
	vtkPlot *native = (vtkPlot *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->LegendVisibilityOn();
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
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectBaseWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectBaseWrap *a0 = ObjectWrap::Unwrap<VtkObjectBaseWrap>(info[0]->ToObject());
		vtkPlot * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObjectBase *) a0->native.GetPointer()
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

void VtkPlotWrap::SelectableOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPlotWrap *wrapper = ObjectWrap::Unwrap<VtkPlotWrap>(info.Holder());
	vtkPlot *native = (vtkPlot *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->SelectableOff();
}

void VtkPlotWrap::SelectableOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPlotWrap *wrapper = ObjectWrap::Unwrap<VtkPlotWrap>(info.Holder());
	vtkPlot *native = (vtkPlot *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->SelectableOn();
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
	if(info.Length() > 0 && info[0]->IsUint32())
	{
		if(info.Length() > 1 && info[1]->IsUint32())
		{
			if(info.Length() > 2 && info[2]->IsUint32())
			{
				if(info.Length() > 3 && info[3]->IsUint32())
				{
										if(info.Length() != 4)
					{
						Nan::ThrowError("Too many parameters.");
						return;
					}
					native->SetColor(
						info[0]->Uint32Value(),
						info[1]->Uint32Value(),
						info[2]->Uint32Value(),
						info[3]->Uint32Value()
					);
					return;
				}
			}
		}
	}
	else if(info.Length() > 0 && info[0]->IsNumber())
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

void VtkPlotWrap::SetLegendVisibility(const Nan::FunctionCallbackInfo<v8::Value>& info)
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
		native->SetLegendVisibility(
			info[0]->BooleanValue()
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

void VtkPlotWrap::SetSelectable(const Nan::FunctionCallbackInfo<v8::Value>& info)
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
		native->SetSelectable(
			info[0]->BooleanValue()
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

void VtkPlotWrap::SetWidth(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPlotWrap *wrapper = ObjectWrap::Unwrap<VtkPlotWrap>(info.Holder());
	vtkPlot *native = (vtkPlot *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsNumber())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetWidth(
			info[0]->NumberValue()
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

void VtkPlotWrap::UpdateCache(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPlotWrap *wrapper = ObjectWrap::Unwrap<VtkPlotWrap>(info.Holder());
	vtkPlot *native = (vtkPlot *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->UpdateCache();
}

