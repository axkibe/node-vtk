/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>

#include "vtkContextItemWrap.h"
#include "vtkChartWrap.h"
#include "vtkObjectWrap.h"
#include "vtkPlotWrap.h"
#include "vtkAxisWrap.h"
#include "vtkAnnotationLinkWrap.h"
#include "vtkChartLegendWrap.h"
#include "vtkTextPropertyWrap.h"
#include "vtkBrushWrap.h"
#include "../../plus/plus.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkChartWrap::ptpl;

VtkChartWrap::VtkChartWrap()
{ }

VtkChartWrap::VtkChartWrap(vtkSmartPointer<vtkChart> _native)
{ native = _native; }

VtkChartWrap::~VtkChartWrap()
{ }

void VtkChartWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkChart").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("Chart").ToLocalChecked(), ConstructorGetter);
}

void VtkChartWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkChartWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkContextItemWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkContextItemWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkChartWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "AddPlot", AddPlot);
	Nan::SetPrototypeMethod(tpl, "addPlot", AddPlot);

	Nan::SetPrototypeMethod(tpl, "ClearPlots", ClearPlots);
	Nan::SetPrototypeMethod(tpl, "clearPlots", ClearPlots);

	Nan::SetPrototypeMethod(tpl, "GetActionToButton", GetActionToButton);
	Nan::SetPrototypeMethod(tpl, "getActionToButton", GetActionToButton);

	Nan::SetPrototypeMethod(tpl, "GetAnnotationLink", GetAnnotationLink);
	Nan::SetPrototypeMethod(tpl, "getAnnotationLink", GetAnnotationLink);

	Nan::SetPrototypeMethod(tpl, "GetAutoSize", GetAutoSize);
	Nan::SetPrototypeMethod(tpl, "getAutoSize", GetAutoSize);

	Nan::SetPrototypeMethod(tpl, "GetAxis", GetAxis);
	Nan::SetPrototypeMethod(tpl, "getAxis", GetAxis);

	Nan::SetPrototypeMethod(tpl, "GetBackgroundBrush", GetBackgroundBrush);
	Nan::SetPrototypeMethod(tpl, "getBackgroundBrush", GetBackgroundBrush);

	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "GetClickActionToButton", GetClickActionToButton);
	Nan::SetPrototypeMethod(tpl, "getClickActionToButton", GetClickActionToButton);

	Nan::SetPrototypeMethod(tpl, "GetGeometry", GetGeometry);
	Nan::SetPrototypeMethod(tpl, "getGeometry", GetGeometry);

	Nan::SetPrototypeMethod(tpl, "GetLayoutStrategy", GetLayoutStrategy);
	Nan::SetPrototypeMethod(tpl, "getLayoutStrategy", GetLayoutStrategy);

	Nan::SetPrototypeMethod(tpl, "GetLegend", GetLegend);
	Nan::SetPrototypeMethod(tpl, "getLegend", GetLegend);

	Nan::SetPrototypeMethod(tpl, "GetPoint1", GetPoint1);
	Nan::SetPrototypeMethod(tpl, "getPoint1", GetPoint1);

	Nan::SetPrototypeMethod(tpl, "GetPoint2", GetPoint2);
	Nan::SetPrototypeMethod(tpl, "getPoint2", GetPoint2);

	Nan::SetPrototypeMethod(tpl, "GetRenderEmpty", GetRenderEmpty);
	Nan::SetPrototypeMethod(tpl, "getRenderEmpty", GetRenderEmpty);

	Nan::SetPrototypeMethod(tpl, "GetSelectionMethod", GetSelectionMethod);
	Nan::SetPrototypeMethod(tpl, "getSelectionMethod", GetSelectionMethod);

	Nan::SetPrototypeMethod(tpl, "GetSelectionMode", GetSelectionMode);
	Nan::SetPrototypeMethod(tpl, "getSelectionMode", GetSelectionMode);

	Nan::SetPrototypeMethod(tpl, "GetShowLegend", GetShowLegend);
	Nan::SetPrototypeMethod(tpl, "getShowLegend", GetShowLegend);

	Nan::SetPrototypeMethod(tpl, "GetTitleProperties", GetTitleProperties);
	Nan::SetPrototypeMethod(tpl, "getTitleProperties", GetTitleProperties);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "RecalculateBounds", RecalculateBounds);
	Nan::SetPrototypeMethod(tpl, "recalculateBounds", RecalculateBounds);

	Nan::SetPrototypeMethod(tpl, "RemovePlotInstance", RemovePlotInstance);
	Nan::SetPrototypeMethod(tpl, "removePlotInstance", RemovePlotInstance);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetActionToButton", SetActionToButton);
	Nan::SetPrototypeMethod(tpl, "setActionToButton", SetActionToButton);

	Nan::SetPrototypeMethod(tpl, "SetAnnotationLink", SetAnnotationLink);
	Nan::SetPrototypeMethod(tpl, "setAnnotationLink", SetAnnotationLink);

	Nan::SetPrototypeMethod(tpl, "SetAutoSize", SetAutoSize);
	Nan::SetPrototypeMethod(tpl, "setAutoSize", SetAutoSize);

	Nan::SetPrototypeMethod(tpl, "SetBackgroundBrush", SetBackgroundBrush);
	Nan::SetPrototypeMethod(tpl, "setBackgroundBrush", SetBackgroundBrush);

	Nan::SetPrototypeMethod(tpl, "SetBorders", SetBorders);
	Nan::SetPrototypeMethod(tpl, "setBorders", SetBorders);

	Nan::SetPrototypeMethod(tpl, "SetBottomBorder", SetBottomBorder);
	Nan::SetPrototypeMethod(tpl, "setBottomBorder", SetBottomBorder);

	Nan::SetPrototypeMethod(tpl, "SetClickActionToButton", SetClickActionToButton);
	Nan::SetPrototypeMethod(tpl, "setClickActionToButton", SetClickActionToButton);

	Nan::SetPrototypeMethod(tpl, "SetGeometry", SetGeometry);
	Nan::SetPrototypeMethod(tpl, "setGeometry", SetGeometry);

	Nan::SetPrototypeMethod(tpl, "SetLayoutStrategy", SetLayoutStrategy);
	Nan::SetPrototypeMethod(tpl, "setLayoutStrategy", SetLayoutStrategy);

	Nan::SetPrototypeMethod(tpl, "SetLeftBorder", SetLeftBorder);
	Nan::SetPrototypeMethod(tpl, "setLeftBorder", SetLeftBorder);

	Nan::SetPrototypeMethod(tpl, "SetPoint1", SetPoint1);
	Nan::SetPrototypeMethod(tpl, "setPoint1", SetPoint1);

	Nan::SetPrototypeMethod(tpl, "SetPoint2", SetPoint2);
	Nan::SetPrototypeMethod(tpl, "setPoint2", SetPoint2);

	Nan::SetPrototypeMethod(tpl, "SetRenderEmpty", SetRenderEmpty);
	Nan::SetPrototypeMethod(tpl, "setRenderEmpty", SetRenderEmpty);

	Nan::SetPrototypeMethod(tpl, "SetRightBorder", SetRightBorder);
	Nan::SetPrototypeMethod(tpl, "setRightBorder", SetRightBorder);

	Nan::SetPrototypeMethod(tpl, "SetSelectionMethod", SetSelectionMethod);
	Nan::SetPrototypeMethod(tpl, "setSelectionMethod", SetSelectionMethod);

	Nan::SetPrototypeMethod(tpl, "SetSelectionMode", SetSelectionMode);
	Nan::SetPrototypeMethod(tpl, "setSelectionMode", SetSelectionMode);

	Nan::SetPrototypeMethod(tpl, "SetShowLegend", SetShowLegend);
	Nan::SetPrototypeMethod(tpl, "setShowLegend", SetShowLegend);

	Nan::SetPrototypeMethod(tpl, "SetTopBorder", SetTopBorder);
	Nan::SetPrototypeMethod(tpl, "setTopBorder", SetTopBorder);

#ifdef VTK_NODE_PLUS_VTKCHARTWRAP_INITPTPL
	VTK_NODE_PLUS_VTKCHARTWRAP_INITPTPL
#endif
	ptpl.Reset( tpl );
}

void VtkChartWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
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

void VtkChartWrap::AddPlot(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkChartWrap *wrapper = ObjectWrap::Unwrap<VtkChartWrap>(info.Holder());
	vtkChart *native = (vtkChart *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		vtkPlot * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->AddPlot(
			info[0]->Int32Value()
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

void VtkChartWrap::ClearPlots(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkChartWrap *wrapper = ObjectWrap::Unwrap<VtkChartWrap>(info.Holder());
	vtkChart *native = (vtkChart *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->ClearPlots();
}

void VtkChartWrap::GetActionToButton(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkChartWrap *wrapper = ObjectWrap::Unwrap<VtkChartWrap>(info.Holder());
	vtkChart *native = (vtkChart *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		int r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->GetActionToButton(
			info[0]->Int32Value()
		);
		info.GetReturnValue().Set(Nan::New(r));
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkChartWrap::GetAnnotationLink(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkChartWrap *wrapper = ObjectWrap::Unwrap<VtkChartWrap>(info.Holder());
	vtkChart *native = (vtkChart *)wrapper->native.GetPointer();
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
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkChartWrap::GetAutoSize(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkChartWrap *wrapper = ObjectWrap::Unwrap<VtkChartWrap>(info.Holder());
	vtkChart *native = (vtkChart *)wrapper->native.GetPointer();
	bool r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetAutoSize();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkChartWrap::GetAxis(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkChartWrap *wrapper = ObjectWrap::Unwrap<VtkChartWrap>(info.Holder());
	vtkChart *native = (vtkChart *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		vtkAxis * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->GetAxis(
			info[0]->Int32Value()
		);
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
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkChartWrap::GetBackgroundBrush(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkChartWrap *wrapper = ObjectWrap::Unwrap<VtkChartWrap>(info.Holder());
	vtkChart *native = (vtkChart *)wrapper->native.GetPointer();
	vtkBrush * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetBackgroundBrush();
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

void VtkChartWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkChartWrap *wrapper = ObjectWrap::Unwrap<VtkChartWrap>(info.Holder());
	vtkChart *native = (vtkChart *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkChartWrap::GetClickActionToButton(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkChartWrap *wrapper = ObjectWrap::Unwrap<VtkChartWrap>(info.Holder());
	vtkChart *native = (vtkChart *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		int r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->GetClickActionToButton(
			info[0]->Int32Value()
		);
		info.GetReturnValue().Set(Nan::New(r));
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkChartWrap::GetGeometry(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkChartWrap *wrapper = ObjectWrap::Unwrap<VtkChartWrap>(info.Holder());
	vtkChart *native = (vtkChart *)wrapper->native.GetPointer();
	int const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetGeometry();
	Local<v8::ArrayBuffer> ab = v8::ArrayBuffer::New(v8::Isolate::GetCurrent(), 2 * sizeof(int));
	Local<v8::Int32Array> at = v8::Int32Array::New(ab, 0, 2);
	memcpy(ab->GetContents().Data(), r, 2 * sizeof(int));
	info.GetReturnValue().Set(at);
}

void VtkChartWrap::GetLayoutStrategy(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkChartWrap *wrapper = ObjectWrap::Unwrap<VtkChartWrap>(info.Holder());
	vtkChart *native = (vtkChart *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetLayoutStrategy();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkChartWrap::GetLegend(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkChartWrap *wrapper = ObjectWrap::Unwrap<VtkChartWrap>(info.Holder());
	vtkChart *native = (vtkChart *)wrapper->native.GetPointer();
	vtkChartLegend * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetLegend();
	VtkChartLegendWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkChartLegendWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkChartLegendWrap *w = new VtkChartLegendWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkChartWrap::GetPoint1(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkChartWrap *wrapper = ObjectWrap::Unwrap<VtkChartWrap>(info.Holder());
	vtkChart *native = (vtkChart *)wrapper->native.GetPointer();
	int const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetPoint1();
	Local<v8::ArrayBuffer> ab = v8::ArrayBuffer::New(v8::Isolate::GetCurrent(), 2 * sizeof(int));
	Local<v8::Int32Array> at = v8::Int32Array::New(ab, 0, 2);
	memcpy(ab->GetContents().Data(), r, 2 * sizeof(int));
	info.GetReturnValue().Set(at);
}

void VtkChartWrap::GetPoint2(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkChartWrap *wrapper = ObjectWrap::Unwrap<VtkChartWrap>(info.Holder());
	vtkChart *native = (vtkChart *)wrapper->native.GetPointer();
	int const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetPoint2();
	Local<v8::ArrayBuffer> ab = v8::ArrayBuffer::New(v8::Isolate::GetCurrent(), 2 * sizeof(int));
	Local<v8::Int32Array> at = v8::Int32Array::New(ab, 0, 2);
	memcpy(ab->GetContents().Data(), r, 2 * sizeof(int));
	info.GetReturnValue().Set(at);
}

void VtkChartWrap::GetRenderEmpty(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkChartWrap *wrapper = ObjectWrap::Unwrap<VtkChartWrap>(info.Holder());
	vtkChart *native = (vtkChart *)wrapper->native.GetPointer();
	bool r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetRenderEmpty();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkChartWrap::GetSelectionMethod(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkChartWrap *wrapper = ObjectWrap::Unwrap<VtkChartWrap>(info.Holder());
	vtkChart *native = (vtkChart *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetSelectionMethod();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkChartWrap::GetSelectionMode(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkChartWrap *wrapper = ObjectWrap::Unwrap<VtkChartWrap>(info.Holder());
	vtkChart *native = (vtkChart *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetSelectionMode();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkChartWrap::GetShowLegend(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkChartWrap *wrapper = ObjectWrap::Unwrap<VtkChartWrap>(info.Holder());
	vtkChart *native = (vtkChart *)wrapper->native.GetPointer();
	bool r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetShowLegend();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkChartWrap::GetTitleProperties(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkChartWrap *wrapper = ObjectWrap::Unwrap<VtkChartWrap>(info.Holder());
	vtkChart *native = (vtkChart *)wrapper->native.GetPointer();
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
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkChartWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkChartWrap *wrapper = ObjectWrap::Unwrap<VtkChartWrap>(info.Holder());
	vtkChart *native = (vtkChart *)wrapper->native.GetPointer();
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

void VtkChartWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkChartWrap *wrapper = ObjectWrap::Unwrap<VtkChartWrap>(info.Holder());
	vtkChart *native = (vtkChart *)wrapper->native.GetPointer();
	vtkChart * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
	VtkChartWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkChartWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkChartWrap *w = new VtkChartWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkChartWrap::RecalculateBounds(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkChartWrap *wrapper = ObjectWrap::Unwrap<VtkChartWrap>(info.Holder());
	vtkChart *native = (vtkChart *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->RecalculateBounds();
}

void VtkChartWrap::RemovePlotInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkChartWrap *wrapper = ObjectWrap::Unwrap<VtkChartWrap>(info.Holder());
	vtkChart *native = (vtkChart *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkPlotWrap::ptpl))->HasInstance(info[0]))
	{
		VtkPlotWrap *a0 = ObjectWrap::Unwrap<VtkPlotWrap>(info[0]->ToObject());
		bool r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->RemovePlotInstance(
			(vtkPlot *) a0->native.GetPointer()
		);
		info.GetReturnValue().Set(Nan::New(r));
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkChartWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkChartWrap *wrapper = ObjectWrap::Unwrap<VtkChartWrap>(info.Holder());
	vtkChart *native = (vtkChart *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkChart * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObject *) a0->native.GetPointer()
		);
		VtkChartWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkChartWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkChartWrap *w = new VtkChartWrap();
		w->native = r;
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkChartWrap::SetActionToButton(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkChartWrap *wrapper = ObjectWrap::Unwrap<VtkChartWrap>(info.Holder());
	vtkChart *native = (vtkChart *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() > 1 && info[1]->IsInt32())
		{
						if(info.Length() != 2)
			{
				Nan::ThrowError("Too many parameters.");
				return;
			}
			native->SetActionToButton(
				info[0]->Int32Value(),
				info[1]->Int32Value()
			);
			return;
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkChartWrap::SetAnnotationLink(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkChartWrap *wrapper = ObjectWrap::Unwrap<VtkChartWrap>(info.Holder());
	vtkChart *native = (vtkChart *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkAnnotationLinkWrap::ptpl))->HasInstance(info[0]))
	{
		VtkAnnotationLinkWrap *a0 = ObjectWrap::Unwrap<VtkAnnotationLinkWrap>(info[0]->ToObject());
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetAnnotationLink(
			(vtkAnnotationLink *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkChartWrap::SetAutoSize(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkChartWrap *wrapper = ObjectWrap::Unwrap<VtkChartWrap>(info.Holder());
	vtkChart *native = (vtkChart *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsBoolean())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetAutoSize(
			info[0]->BooleanValue()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkChartWrap::SetBackgroundBrush(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkChartWrap *wrapper = ObjectWrap::Unwrap<VtkChartWrap>(info.Holder());
	vtkChart *native = (vtkChart *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkBrushWrap::ptpl))->HasInstance(info[0]))
	{
		VtkBrushWrap *a0 = ObjectWrap::Unwrap<VtkBrushWrap>(info[0]->ToObject());
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetBackgroundBrush(
			(vtkBrush *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkChartWrap::SetBorders(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkChartWrap *wrapper = ObjectWrap::Unwrap<VtkChartWrap>(info.Holder());
	vtkChart *native = (vtkChart *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() > 1 && info[1]->IsInt32())
		{
			if(info.Length() > 2 && info[2]->IsInt32())
			{
				if(info.Length() > 3 && info[3]->IsInt32())
				{
										if(info.Length() != 4)
					{
						Nan::ThrowError("Too many parameters.");
						return;
					}
					native->SetBorders(
						info[0]->Int32Value(),
						info[1]->Int32Value(),
						info[2]->Int32Value(),
						info[3]->Int32Value()
					);
					return;
				}
			}
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkChartWrap::SetBottomBorder(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkChartWrap *wrapper = ObjectWrap::Unwrap<VtkChartWrap>(info.Holder());
	vtkChart *native = (vtkChart *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetBottomBorder(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkChartWrap::SetClickActionToButton(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkChartWrap *wrapper = ObjectWrap::Unwrap<VtkChartWrap>(info.Holder());
	vtkChart *native = (vtkChart *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() > 1 && info[1]->IsInt32())
		{
						if(info.Length() != 2)
			{
				Nan::ThrowError("Too many parameters.");
				return;
			}
			native->SetClickActionToButton(
				info[0]->Int32Value(),
				info[1]->Int32Value()
			);
			return;
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkChartWrap::SetGeometry(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkChartWrap *wrapper = ObjectWrap::Unwrap<VtkChartWrap>(info.Holder());
	vtkChart *native = (vtkChart *)wrapper->native.GetPointer();
	size_t i;
	if(info.Length() > 0 && info[0]->IsInt32Array())
	{
		v8::Local<v8::Int32Array>a0(v8::Local<v8::Int32Array>::Cast(info[0]->ToObject()));
		if( a0->Length() < 2 )
		{
			Nan::ThrowError("Array too short.");
			return;
		}

				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetGeometry(
			(int *)(a0->Buffer()->GetContents().Data())
		);
		return;
	}
	else if(info.Length() > 0 && info[0]->IsArray())
	{
		v8::Local<v8::Array>a0(v8::Local<v8::Array>::Cast(info[0]->ToObject()));
		int b0[2];
		if( a0->Length() < 2 )
		{
			Nan::ThrowError("Array too short.");
			return;
		}

		for( i = 0; i < 2; i++ )
		{
			if( !a0->Get(i)->IsInt32() )
			{
				Nan::ThrowError("Array contents invalid.");
				return;
			}
			b0[i] = a0->Get(i)->Int32Value();
		}
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetGeometry(
			b0
		);
		return;
	}
	else if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() > 1 && info[1]->IsInt32())
		{
						if(info.Length() != 2)
			{
				Nan::ThrowError("Too many parameters.");
				return;
			}
			native->SetGeometry(
				info[0]->Int32Value(),
				info[1]->Int32Value()
			);
			return;
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkChartWrap::SetLayoutStrategy(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkChartWrap *wrapper = ObjectWrap::Unwrap<VtkChartWrap>(info.Holder());
	vtkChart *native = (vtkChart *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetLayoutStrategy(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkChartWrap::SetLeftBorder(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkChartWrap *wrapper = ObjectWrap::Unwrap<VtkChartWrap>(info.Holder());
	vtkChart *native = (vtkChart *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetLeftBorder(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkChartWrap::SetPoint1(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkChartWrap *wrapper = ObjectWrap::Unwrap<VtkChartWrap>(info.Holder());
	vtkChart *native = (vtkChart *)wrapper->native.GetPointer();
	size_t i;
	if(info.Length() > 0 && info[0]->IsInt32Array())
	{
		v8::Local<v8::Int32Array>a0(v8::Local<v8::Int32Array>::Cast(info[0]->ToObject()));
		if( a0->Length() < 2 )
		{
			Nan::ThrowError("Array too short.");
			return;
		}

				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetPoint1(
			(int *)(a0->Buffer()->GetContents().Data())
		);
		return;
	}
	else if(info.Length() > 0 && info[0]->IsArray())
	{
		v8::Local<v8::Array>a0(v8::Local<v8::Array>::Cast(info[0]->ToObject()));
		int b0[2];
		if( a0->Length() < 2 )
		{
			Nan::ThrowError("Array too short.");
			return;
		}

		for( i = 0; i < 2; i++ )
		{
			if( !a0->Get(i)->IsInt32() )
			{
				Nan::ThrowError("Array contents invalid.");
				return;
			}
			b0[i] = a0->Get(i)->Int32Value();
		}
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetPoint1(
			b0
		);
		return;
	}
	else if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() > 1 && info[1]->IsInt32())
		{
						if(info.Length() != 2)
			{
				Nan::ThrowError("Too many parameters.");
				return;
			}
			native->SetPoint1(
				info[0]->Int32Value(),
				info[1]->Int32Value()
			);
			return;
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkChartWrap::SetPoint2(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkChartWrap *wrapper = ObjectWrap::Unwrap<VtkChartWrap>(info.Holder());
	vtkChart *native = (vtkChart *)wrapper->native.GetPointer();
	size_t i;
	if(info.Length() > 0 && info[0]->IsInt32Array())
	{
		v8::Local<v8::Int32Array>a0(v8::Local<v8::Int32Array>::Cast(info[0]->ToObject()));
		if( a0->Length() < 2 )
		{
			Nan::ThrowError("Array too short.");
			return;
		}

				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetPoint2(
			(int *)(a0->Buffer()->GetContents().Data())
		);
		return;
	}
	else if(info.Length() > 0 && info[0]->IsArray())
	{
		v8::Local<v8::Array>a0(v8::Local<v8::Array>::Cast(info[0]->ToObject()));
		int b0[2];
		if( a0->Length() < 2 )
		{
			Nan::ThrowError("Array too short.");
			return;
		}

		for( i = 0; i < 2; i++ )
		{
			if( !a0->Get(i)->IsInt32() )
			{
				Nan::ThrowError("Array contents invalid.");
				return;
			}
			b0[i] = a0->Get(i)->Int32Value();
		}
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetPoint2(
			b0
		);
		return;
	}
	else if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() > 1 && info[1]->IsInt32())
		{
						if(info.Length() != 2)
			{
				Nan::ThrowError("Too many parameters.");
				return;
			}
			native->SetPoint2(
				info[0]->Int32Value(),
				info[1]->Int32Value()
			);
			return;
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkChartWrap::SetRenderEmpty(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkChartWrap *wrapper = ObjectWrap::Unwrap<VtkChartWrap>(info.Holder());
	vtkChart *native = (vtkChart *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsBoolean())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetRenderEmpty(
			info[0]->BooleanValue()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkChartWrap::SetRightBorder(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkChartWrap *wrapper = ObjectWrap::Unwrap<VtkChartWrap>(info.Holder());
	vtkChart *native = (vtkChart *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetRightBorder(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkChartWrap::SetSelectionMethod(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkChartWrap *wrapper = ObjectWrap::Unwrap<VtkChartWrap>(info.Holder());
	vtkChart *native = (vtkChart *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetSelectionMethod(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkChartWrap::SetSelectionMode(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkChartWrap *wrapper = ObjectWrap::Unwrap<VtkChartWrap>(info.Holder());
	vtkChart *native = (vtkChart *)wrapper->native.GetPointer();
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

void VtkChartWrap::SetShowLegend(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkChartWrap *wrapper = ObjectWrap::Unwrap<VtkChartWrap>(info.Holder());
	vtkChart *native = (vtkChart *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsBoolean())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetShowLegend(
			info[0]->BooleanValue()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkChartWrap::SetTopBorder(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkChartWrap *wrapper = ObjectWrap::Unwrap<VtkChartWrap>(info.Holder());
	vtkChart *native = (vtkChart *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetTopBorder(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

