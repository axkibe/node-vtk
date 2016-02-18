/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>

#include "vtkChartWrap.h"
#include "vtkChartXYWrap.h"
#include "vtkObjectWrap.h"
#include "vtkContext2DWrap.h"
#include "vtkPlotWrap.h"
#include "vtkAxisWrap.h"
#include "vtkChartLegendWrap.h"
#include "vtkTooltipItemWrap.h"
#include "../../plus/plus.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkChartXYWrap::ptpl;

VtkChartXYWrap::VtkChartXYWrap()
{ }

VtkChartXYWrap::VtkChartXYWrap(vtkSmartPointer<vtkChartXY> _native)
{ native = _native; }

VtkChartXYWrap::~VtkChartXYWrap()
{ }

void VtkChartXYWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkChartXY").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("ChartXY").ToLocalChecked(), ConstructorGetter);
}

void VtkChartXYWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkChartXYWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkChartWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkChartWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkChartXYWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "AddPlot", AddPlot);
	Nan::SetPrototypeMethod(tpl, "addPlot", AddPlot);

	Nan::SetPrototypeMethod(tpl, "AutoAxesOff", AutoAxesOff);
	Nan::SetPrototypeMethod(tpl, "autoAxesOff", AutoAxesOff);

	Nan::SetPrototypeMethod(tpl, "AutoAxesOn", AutoAxesOn);
	Nan::SetPrototypeMethod(tpl, "autoAxesOn", AutoAxesOn);

	Nan::SetPrototypeMethod(tpl, "ClearPlots", ClearPlots);
	Nan::SetPrototypeMethod(tpl, "clearPlots", ClearPlots);

	Nan::SetPrototypeMethod(tpl, "DrawAxesAtOriginOff", DrawAxesAtOriginOff);
	Nan::SetPrototypeMethod(tpl, "drawAxesAtOriginOff", DrawAxesAtOriginOff);

	Nan::SetPrototypeMethod(tpl, "DrawAxesAtOriginOn", DrawAxesAtOriginOn);
	Nan::SetPrototypeMethod(tpl, "drawAxesAtOriginOn", DrawAxesAtOriginOn);

	Nan::SetPrototypeMethod(tpl, "ForceAxesToBoundsOff", ForceAxesToBoundsOff);
	Nan::SetPrototypeMethod(tpl, "forceAxesToBoundsOff", ForceAxesToBoundsOff);

	Nan::SetPrototypeMethod(tpl, "ForceAxesToBoundsOn", ForceAxesToBoundsOn);
	Nan::SetPrototypeMethod(tpl, "forceAxesToBoundsOn", ForceAxesToBoundsOn);

	Nan::SetPrototypeMethod(tpl, "GetAutoAxes", GetAutoAxes);
	Nan::SetPrototypeMethod(tpl, "getAutoAxes", GetAutoAxes);

	Nan::SetPrototypeMethod(tpl, "GetAxis", GetAxis);
	Nan::SetPrototypeMethod(tpl, "getAxis", GetAxis);

	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "GetDrawAxesAtOrigin", GetDrawAxesAtOrigin);
	Nan::SetPrototypeMethod(tpl, "getDrawAxesAtOrigin", GetDrawAxesAtOrigin);

	Nan::SetPrototypeMethod(tpl, "GetForceAxesToBounds", GetForceAxesToBounds);
	Nan::SetPrototypeMethod(tpl, "getForceAxesToBounds", GetForceAxesToBounds);

	Nan::SetPrototypeMethod(tpl, "GetHiddenAxisBorder", GetHiddenAxisBorder);
	Nan::SetPrototypeMethod(tpl, "getHiddenAxisBorder", GetHiddenAxisBorder);

	Nan::SetPrototypeMethod(tpl, "GetLegend", GetLegend);
	Nan::SetPrototypeMethod(tpl, "getLegend", GetLegend);

	Nan::SetPrototypeMethod(tpl, "GetPlotCorner", GetPlotCorner);
	Nan::SetPrototypeMethod(tpl, "getPlotCorner", GetPlotCorner);

	Nan::SetPrototypeMethod(tpl, "GetTooltip", GetTooltip);
	Nan::SetPrototypeMethod(tpl, "getTooltip", GetTooltip);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "Paint", Paint);
	Nan::SetPrototypeMethod(tpl, "paint", Paint);

	Nan::SetPrototypeMethod(tpl, "RecalculateBounds", RecalculateBounds);
	Nan::SetPrototypeMethod(tpl, "recalculateBounds", RecalculateBounds);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetAutoAxes", SetAutoAxes);
	Nan::SetPrototypeMethod(tpl, "setAutoAxes", SetAutoAxes);

	Nan::SetPrototypeMethod(tpl, "SetDrawAxesAtOrigin", SetDrawAxesAtOrigin);
	Nan::SetPrototypeMethod(tpl, "setDrawAxesAtOrigin", SetDrawAxesAtOrigin);

	Nan::SetPrototypeMethod(tpl, "SetForceAxesToBounds", SetForceAxesToBounds);
	Nan::SetPrototypeMethod(tpl, "setForceAxesToBounds", SetForceAxesToBounds);

	Nan::SetPrototypeMethod(tpl, "SetHiddenAxisBorder", SetHiddenAxisBorder);
	Nan::SetPrototypeMethod(tpl, "setHiddenAxisBorder", SetHiddenAxisBorder);

	Nan::SetPrototypeMethod(tpl, "SetPlotCorner", SetPlotCorner);
	Nan::SetPrototypeMethod(tpl, "setPlotCorner", SetPlotCorner);

	Nan::SetPrototypeMethod(tpl, "SetSelectionMethod", SetSelectionMethod);
	Nan::SetPrototypeMethod(tpl, "setSelectionMethod", SetSelectionMethod);

	Nan::SetPrototypeMethod(tpl, "SetShowLegend", SetShowLegend);
	Nan::SetPrototypeMethod(tpl, "setShowLegend", SetShowLegend);

	Nan::SetPrototypeMethod(tpl, "SetTooltip", SetTooltip);
	Nan::SetPrototypeMethod(tpl, "setTooltip", SetTooltip);

	Nan::SetPrototypeMethod(tpl, "Update", Update);
	Nan::SetPrototypeMethod(tpl, "update", Update);

#ifdef VTK_NODE_PLUS_VTKCHARTXYWRAP_INITPTPL
	VTK_NODE_PLUS_VTKCHARTXYWRAP_INITPTPL
#endif
	ptpl.Reset( tpl );
}

void VtkChartXYWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkChartXY> native = vtkSmartPointer<vtkChartXY>::New();
		VtkChartXYWrap* obj = new VtkChartXYWrap(native);
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

void VtkChartXYWrap::AddPlot(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkChartXYWrap *wrapper = ObjectWrap::Unwrap<VtkChartXYWrap>(info.Holder());
	vtkChartXY *native = (vtkChartXY *)wrapper->native.GetPointer();
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

void VtkChartXYWrap::AutoAxesOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkChartXYWrap *wrapper = ObjectWrap::Unwrap<VtkChartXYWrap>(info.Holder());
	vtkChartXY *native = (vtkChartXY *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->AutoAxesOff();
}

void VtkChartXYWrap::AutoAxesOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkChartXYWrap *wrapper = ObjectWrap::Unwrap<VtkChartXYWrap>(info.Holder());
	vtkChartXY *native = (vtkChartXY *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->AutoAxesOn();
}

void VtkChartXYWrap::ClearPlots(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkChartXYWrap *wrapper = ObjectWrap::Unwrap<VtkChartXYWrap>(info.Holder());
	vtkChartXY *native = (vtkChartXY *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->ClearPlots();
}

void VtkChartXYWrap::DrawAxesAtOriginOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkChartXYWrap *wrapper = ObjectWrap::Unwrap<VtkChartXYWrap>(info.Holder());
	vtkChartXY *native = (vtkChartXY *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->DrawAxesAtOriginOff();
}

void VtkChartXYWrap::DrawAxesAtOriginOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkChartXYWrap *wrapper = ObjectWrap::Unwrap<VtkChartXYWrap>(info.Holder());
	vtkChartXY *native = (vtkChartXY *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->DrawAxesAtOriginOn();
}

void VtkChartXYWrap::ForceAxesToBoundsOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkChartXYWrap *wrapper = ObjectWrap::Unwrap<VtkChartXYWrap>(info.Holder());
	vtkChartXY *native = (vtkChartXY *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->ForceAxesToBoundsOff();
}

void VtkChartXYWrap::ForceAxesToBoundsOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkChartXYWrap *wrapper = ObjectWrap::Unwrap<VtkChartXYWrap>(info.Holder());
	vtkChartXY *native = (vtkChartXY *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->ForceAxesToBoundsOn();
}

void VtkChartXYWrap::GetAutoAxes(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkChartXYWrap *wrapper = ObjectWrap::Unwrap<VtkChartXYWrap>(info.Holder());
	vtkChartXY *native = (vtkChartXY *)wrapper->native.GetPointer();
	bool r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetAutoAxes();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkChartXYWrap::GetAxis(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkChartXYWrap *wrapper = ObjectWrap::Unwrap<VtkChartXYWrap>(info.Holder());
	vtkChartXY *native = (vtkChartXY *)wrapper->native.GetPointer();
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

void VtkChartXYWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkChartXYWrap *wrapper = ObjectWrap::Unwrap<VtkChartXYWrap>(info.Holder());
	vtkChartXY *native = (vtkChartXY *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkChartXYWrap::GetDrawAxesAtOrigin(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkChartXYWrap *wrapper = ObjectWrap::Unwrap<VtkChartXYWrap>(info.Holder());
	vtkChartXY *native = (vtkChartXY *)wrapper->native.GetPointer();
	bool r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetDrawAxesAtOrigin();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkChartXYWrap::GetForceAxesToBounds(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkChartXYWrap *wrapper = ObjectWrap::Unwrap<VtkChartXYWrap>(info.Holder());
	vtkChartXY *native = (vtkChartXY *)wrapper->native.GetPointer();
	bool r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetForceAxesToBounds();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkChartXYWrap::GetHiddenAxisBorder(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkChartXYWrap *wrapper = ObjectWrap::Unwrap<VtkChartXYWrap>(info.Holder());
	vtkChartXY *native = (vtkChartXY *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetHiddenAxisBorder();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkChartXYWrap::GetLegend(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkChartXYWrap *wrapper = ObjectWrap::Unwrap<VtkChartXYWrap>(info.Holder());
	vtkChartXY *native = (vtkChartXY *)wrapper->native.GetPointer();
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

void VtkChartXYWrap::GetPlotCorner(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkChartXYWrap *wrapper = ObjectWrap::Unwrap<VtkChartXYWrap>(info.Holder());
	vtkChartXY *native = (vtkChartXY *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkPlotWrap::ptpl))->HasInstance(info[0]))
	{
		VtkPlotWrap *a0 = ObjectWrap::Unwrap<VtkPlotWrap>(info[0]->ToObject());
		int r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->GetPlotCorner(
			(vtkPlot *) a0->native.GetPointer()
		);
		info.GetReturnValue().Set(Nan::New(r));
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkChartXYWrap::GetTooltip(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkChartXYWrap *wrapper = ObjectWrap::Unwrap<VtkChartXYWrap>(info.Holder());
	vtkChartXY *native = (vtkChartXY *)wrapper->native.GetPointer();
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
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkChartXYWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkChartXYWrap *wrapper = ObjectWrap::Unwrap<VtkChartXYWrap>(info.Holder());
	vtkChartXY *native = (vtkChartXY *)wrapper->native.GetPointer();
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

void VtkChartXYWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkChartXYWrap *wrapper = ObjectWrap::Unwrap<VtkChartXYWrap>(info.Holder());
	vtkChartXY *native = (vtkChartXY *)wrapper->native.GetPointer();
	vtkChartXY * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
	VtkChartXYWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkChartXYWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkChartXYWrap *w = new VtkChartXYWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkChartXYWrap::Paint(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkChartXYWrap *wrapper = ObjectWrap::Unwrap<VtkChartXYWrap>(info.Holder());
	vtkChartXY *native = (vtkChartXY *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkContext2DWrap::ptpl))->HasInstance(info[0]))
	{
		VtkContext2DWrap *a0 = ObjectWrap::Unwrap<VtkContext2DWrap>(info[0]->ToObject());
		bool r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->Paint(
			(vtkContext2D *) a0->native.GetPointer()
		);
		info.GetReturnValue().Set(Nan::New(r));
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkChartXYWrap::RecalculateBounds(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkChartXYWrap *wrapper = ObjectWrap::Unwrap<VtkChartXYWrap>(info.Holder());
	vtkChartXY *native = (vtkChartXY *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->RecalculateBounds();
}

void VtkChartXYWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkChartXYWrap *wrapper = ObjectWrap::Unwrap<VtkChartXYWrap>(info.Holder());
	vtkChartXY *native = (vtkChartXY *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkChartXY * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObject *) a0->native.GetPointer()
		);
		VtkChartXYWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkChartXYWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkChartXYWrap *w = new VtkChartXYWrap();
		w->native = r;
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkChartXYWrap::SetAutoAxes(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkChartXYWrap *wrapper = ObjectWrap::Unwrap<VtkChartXYWrap>(info.Holder());
	vtkChartXY *native = (vtkChartXY *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsBoolean())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetAutoAxes(
			info[0]->BooleanValue()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkChartXYWrap::SetDrawAxesAtOrigin(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkChartXYWrap *wrapper = ObjectWrap::Unwrap<VtkChartXYWrap>(info.Holder());
	vtkChartXY *native = (vtkChartXY *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsBoolean())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetDrawAxesAtOrigin(
			info[0]->BooleanValue()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkChartXYWrap::SetForceAxesToBounds(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkChartXYWrap *wrapper = ObjectWrap::Unwrap<VtkChartXYWrap>(info.Holder());
	vtkChartXY *native = (vtkChartXY *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsBoolean())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetForceAxesToBounds(
			info[0]->BooleanValue()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkChartXYWrap::SetHiddenAxisBorder(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkChartXYWrap *wrapper = ObjectWrap::Unwrap<VtkChartXYWrap>(info.Holder());
	vtkChartXY *native = (vtkChartXY *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetHiddenAxisBorder(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkChartXYWrap::SetPlotCorner(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkChartXYWrap *wrapper = ObjectWrap::Unwrap<VtkChartXYWrap>(info.Holder());
	vtkChartXY *native = (vtkChartXY *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkPlotWrap::ptpl))->HasInstance(info[0]))
	{
		VtkPlotWrap *a0 = ObjectWrap::Unwrap<VtkPlotWrap>(info[0]->ToObject());
		if(info.Length() > 1 && info[1]->IsInt32())
		{
						if(info.Length() != 2)
			{
				Nan::ThrowError("Too many parameters.");
				return;
			}
			native->SetPlotCorner(
				(vtkPlot *) a0->native.GetPointer(),
				info[1]->Int32Value()
			);
			return;
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkChartXYWrap::SetSelectionMethod(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkChartXYWrap *wrapper = ObjectWrap::Unwrap<VtkChartXYWrap>(info.Holder());
	vtkChartXY *native = (vtkChartXY *)wrapper->native.GetPointer();
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

void VtkChartXYWrap::SetShowLegend(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkChartXYWrap *wrapper = ObjectWrap::Unwrap<VtkChartXYWrap>(info.Holder());
	vtkChartXY *native = (vtkChartXY *)wrapper->native.GetPointer();
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

void VtkChartXYWrap::SetTooltip(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkChartXYWrap *wrapper = ObjectWrap::Unwrap<VtkChartXYWrap>(info.Holder());
	vtkChartXY *native = (vtkChartXY *)wrapper->native.GetPointer();
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

void VtkChartXYWrap::Update(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkChartXYWrap *wrapper = ObjectWrap::Unwrap<VtkChartXYWrap>(info.Holder());
	vtkChartXY *native = (vtkChartXY *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->Update();
}

