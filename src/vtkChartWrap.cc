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

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::Function> VtkChartWrap::constructor;
Nan::Persistent<v8::FunctionTemplate> VtkChartWrap::ptpl;

VtkChartWrap::VtkChartWrap()
{ }

VtkChartWrap::VtkChartWrap(vtkSmartPointer<vtkChart> _native)
{ native = _native; }

VtkChartWrap::~VtkChartWrap()
{ }

void VtkChartWrap::Init(v8::Local<v8::Object> exports)
{
	if (!constructor.IsEmpty()) return;
	Nan::HandleScope scope;

	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkContextItemWrap::Init( exports );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkContextItemWrap::ptpl));

	tpl->SetClassName(Nan::New("VtkChartWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);
	InitTpl(tpl);

	constructor.Reset( tpl->GetFunction() );
	ptpl.Reset( tpl );

	exports->Set(Nan::New("vtkChart").ToLocalChecked(),tpl->GetFunction());
	exports->Set(Nan::New("Chart").ToLocalChecked(),tpl->GetFunction());
}

void VtkChartWrap::InitTpl(v8::Local<v8::FunctionTemplate> tpl)
{
	Nan::SetPrototypeMethod(tpl, "AddPlot", AddPlot);
	Nan::SetPrototypeMethod(tpl, "addPlot", AddPlot);

	Nan::SetPrototypeMethod(tpl, "ClearPlots", ClearPlots);
	Nan::SetPrototypeMethod(tpl, "clearPlots", ClearPlots);

	Nan::SetPrototypeMethod(tpl, "GetActionToButton", GetActionToButton);
	Nan::SetPrototypeMethod(tpl, "getActionToButton", GetActionToButton);

	Nan::SetPrototypeMethod(tpl, "GetAnnotationLink", GetAnnotationLink);
	Nan::SetPrototypeMethod(tpl, "getAnnotationLink", GetAnnotationLink);

	Nan::SetPrototypeMethod(tpl, "GetAxis", GetAxis);
	Nan::SetPrototypeMethod(tpl, "getAxis", GetAxis);

	Nan::SetPrototypeMethod(tpl, "GetBackgroundBrush", GetBackgroundBrush);
	Nan::SetPrototypeMethod(tpl, "getBackgroundBrush", GetBackgroundBrush);

	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "GetClickActionToButton", GetClickActionToButton);
	Nan::SetPrototypeMethod(tpl, "getClickActionToButton", GetClickActionToButton);

	Nan::SetPrototypeMethod(tpl, "GetLayoutStrategy", GetLayoutStrategy);
	Nan::SetPrototypeMethod(tpl, "getLayoutStrategy", GetLayoutStrategy);

	Nan::SetPrototypeMethod(tpl, "GetLegend", GetLegend);
	Nan::SetPrototypeMethod(tpl, "getLegend", GetLegend);

	Nan::SetPrototypeMethod(tpl, "GetSelectionMethod", GetSelectionMethod);
	Nan::SetPrototypeMethod(tpl, "getSelectionMethod", GetSelectionMethod);

	Nan::SetPrototypeMethod(tpl, "GetSelectionMode", GetSelectionMode);
	Nan::SetPrototypeMethod(tpl, "getSelectionMode", GetSelectionMode);

	Nan::SetPrototypeMethod(tpl, "GetTitleProperties", GetTitleProperties);
	Nan::SetPrototypeMethod(tpl, "getTitleProperties", GetTitleProperties);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "RecalculateBounds", RecalculateBounds);
	Nan::SetPrototypeMethod(tpl, "recalculateBounds", RecalculateBounds);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetActionToButton", SetActionToButton);
	Nan::SetPrototypeMethod(tpl, "setActionToButton", SetActionToButton);

	Nan::SetPrototypeMethod(tpl, "SetAnnotationLink", SetAnnotationLink);
	Nan::SetPrototypeMethod(tpl, "setAnnotationLink", SetAnnotationLink);

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

	Nan::SetPrototypeMethod(tpl, "SetRightBorder", SetRightBorder);
	Nan::SetPrototypeMethod(tpl, "setRightBorder", SetRightBorder);

	Nan::SetPrototypeMethod(tpl, "SetSelectionMethod", SetSelectionMethod);
	Nan::SetPrototypeMethod(tpl, "setSelectionMethod", SetSelectionMethod);

	Nan::SetPrototypeMethod(tpl, "SetSelectionMode", SetSelectionMode);
	Nan::SetPrototypeMethod(tpl, "setSelectionMode", SetSelectionMode);

	Nan::SetPrototypeMethod(tpl, "SetTopBorder", SetTopBorder);
	Nan::SetPrototypeMethod(tpl, "setTopBorder", SetTopBorder);

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
		Nan::Utf8String s(info[0]);
		if(info[0]->ToObject() != vtkNodeJsNoWrap )
			Nan::ThrowError("Parameter Error");
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
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::Function>(VtkPlotWrap::constructor);
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkPlotWrap *w = new VtkPlotWrap();
		w->native.TakeReference(r);
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
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::Function>(VtkAnnotationLinkWrap::constructor);
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkAnnotationLinkWrap *w = new VtkAnnotationLinkWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
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
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::Function>(VtkAxisWrap::constructor);
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkAxisWrap *w = new VtkAxisWrap();
		w->native.TakeReference(r);
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
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::Function>(VtkBrushWrap::constructor);
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkBrushWrap *w = new VtkBrushWrap();
	w->native.TakeReference(r);
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
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::Function>(VtkChartLegendWrap::constructor);
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkChartLegendWrap *w = new VtkChartLegendWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
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
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::Function>(VtkTextPropertyWrap::constructor);
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkTextPropertyWrap *w = new VtkTextPropertyWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkChartWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkChartWrap *wrapper = ObjectWrap::Unwrap<VtkChartWrap>(info.Holder());
	vtkChart *native = (vtkChart *)wrapper->native.GetPointer();
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
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::Function>(VtkChartWrap::constructor);
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkChartWrap *w = new VtkChartWrap();
	w->native.TakeReference(r);
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

void VtkChartWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkChartWrap *wrapper = ObjectWrap::Unwrap<VtkChartWrap>(info.Holder());
	vtkChart *native = (vtkChart *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject())
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
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::Function>(VtkChartWrap::constructor);
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkChartWrap *w = new VtkChartWrap();
		w->native.TakeReference(r);
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
	if(info.Length() > 0 && info[0]->IsObject())
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

void VtkChartWrap::SetBackgroundBrush(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkChartWrap *wrapper = ObjectWrap::Unwrap<VtkChartWrap>(info.Holder());
	vtkChart *native = (vtkChart *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject())
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
	if(info.Length() > 0 && info[0]->IsInt32())
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
	if(info.Length() > 0 && info[0]->IsInt32())
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
	if(info.Length() > 0 && info[0]->IsInt32())
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
