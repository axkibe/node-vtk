/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkContextItemWrap.h"
#include "vtkChartLegendWrap.h"
#include "vtkObjectWrap.h"
#include "vtkChartWrap.h"
#include "vtkContext2DWrap.h"
#include "vtkPenWrap.h"
#include "vtkBrushWrap.h"
#include "vtkTextPropertyWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkChartLegendWrap::ptpl;

VtkChartLegendWrap::VtkChartLegendWrap()
{ }

VtkChartLegendWrap::VtkChartLegendWrap(vtkSmartPointer<vtkChartLegend> _native)
{ native = _native; }

VtkChartLegendWrap::~VtkChartLegendWrap()
{ }

void VtkChartLegendWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkChartLegend").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("ChartLegend").ToLocalChecked(), ConstructorGetter);
}

void VtkChartLegendWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkChartLegendWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkContextItemWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkContextItemWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkChartLegendWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "CacheBoundsOff", CacheBoundsOff);
	Nan::SetPrototypeMethod(tpl, "cacheBoundsOff", CacheBoundsOff);

	Nan::SetPrototypeMethod(tpl, "CacheBoundsOn", CacheBoundsOn);
	Nan::SetPrototypeMethod(tpl, "cacheBoundsOn", CacheBoundsOn);

	Nan::SetPrototypeMethod(tpl, "GetBrush", GetBrush);
	Nan::SetPrototypeMethod(tpl, "getBrush", GetBrush);

	Nan::SetPrototypeMethod(tpl, "GetCacheBounds", GetCacheBounds);
	Nan::SetPrototypeMethod(tpl, "getCacheBounds", GetCacheBounds);

	Nan::SetPrototypeMethod(tpl, "GetChart", GetChart);
	Nan::SetPrototypeMethod(tpl, "getChart", GetChart);

	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "GetDragEnabled", GetDragEnabled);
	Nan::SetPrototypeMethod(tpl, "getDragEnabled", GetDragEnabled);

	Nan::SetPrototypeMethod(tpl, "GetHorizontalAlignment", GetHorizontalAlignment);
	Nan::SetPrototypeMethod(tpl, "getHorizontalAlignment", GetHorizontalAlignment);

	Nan::SetPrototypeMethod(tpl, "GetInline", GetInline);
	Nan::SetPrototypeMethod(tpl, "getInline", GetInline);

	Nan::SetPrototypeMethod(tpl, "GetLabelProperties", GetLabelProperties);
	Nan::SetPrototypeMethod(tpl, "getLabelProperties", GetLabelProperties);

	Nan::SetPrototypeMethod(tpl, "GetLabelSize", GetLabelSize);
	Nan::SetPrototypeMethod(tpl, "getLabelSize", GetLabelSize);

	Nan::SetPrototypeMethod(tpl, "GetPadding", GetPadding);
	Nan::SetPrototypeMethod(tpl, "getPadding", GetPadding);

	Nan::SetPrototypeMethod(tpl, "GetPen", GetPen);
	Nan::SetPrototypeMethod(tpl, "getPen", GetPen);

	Nan::SetPrototypeMethod(tpl, "GetSymbolWidth", GetSymbolWidth);
	Nan::SetPrototypeMethod(tpl, "getSymbolWidth", GetSymbolWidth);

	Nan::SetPrototypeMethod(tpl, "GetVerticalAlignment", GetVerticalAlignment);
	Nan::SetPrototypeMethod(tpl, "getVerticalAlignment", GetVerticalAlignment);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "Paint", Paint);
	Nan::SetPrototypeMethod(tpl, "paint", Paint);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetCacheBounds", SetCacheBounds);
	Nan::SetPrototypeMethod(tpl, "setCacheBounds", SetCacheBounds);

	Nan::SetPrototypeMethod(tpl, "SetChart", SetChart);
	Nan::SetPrototypeMethod(tpl, "setChart", SetChart);

	Nan::SetPrototypeMethod(tpl, "SetDragEnabled", SetDragEnabled);
	Nan::SetPrototypeMethod(tpl, "setDragEnabled", SetDragEnabled);

	Nan::SetPrototypeMethod(tpl, "SetHorizontalAlignment", SetHorizontalAlignment);
	Nan::SetPrototypeMethod(tpl, "setHorizontalAlignment", SetHorizontalAlignment);

	Nan::SetPrototypeMethod(tpl, "SetInline", SetInline);
	Nan::SetPrototypeMethod(tpl, "setInline", SetInline);

	Nan::SetPrototypeMethod(tpl, "SetLabelSize", SetLabelSize);
	Nan::SetPrototypeMethod(tpl, "setLabelSize", SetLabelSize);

	Nan::SetPrototypeMethod(tpl, "SetPadding", SetPadding);
	Nan::SetPrototypeMethod(tpl, "setPadding", SetPadding);

	Nan::SetPrototypeMethod(tpl, "SetSymbolWidth", SetSymbolWidth);
	Nan::SetPrototypeMethod(tpl, "setSymbolWidth", SetSymbolWidth);

	Nan::SetPrototypeMethod(tpl, "SetVerticalAlignment", SetVerticalAlignment);
	Nan::SetPrototypeMethod(tpl, "setVerticalAlignment", SetVerticalAlignment);

	Nan::SetPrototypeMethod(tpl, "Update", Update);
	Nan::SetPrototypeMethod(tpl, "update", Update);

	ptpl.Reset( tpl );
}

void VtkChartLegendWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkChartLegend> native = vtkSmartPointer<vtkChartLegend>::New();
		VtkChartLegendWrap* obj = new VtkChartLegendWrap(native);
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

void VtkChartLegendWrap::CacheBoundsOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkChartLegendWrap *wrapper = ObjectWrap::Unwrap<VtkChartLegendWrap>(info.Holder());
	vtkChartLegend *native = (vtkChartLegend *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->CacheBoundsOff();
}

void VtkChartLegendWrap::CacheBoundsOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkChartLegendWrap *wrapper = ObjectWrap::Unwrap<VtkChartLegendWrap>(info.Holder());
	vtkChartLegend *native = (vtkChartLegend *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->CacheBoundsOn();
}

void VtkChartLegendWrap::GetBrush(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkChartLegendWrap *wrapper = ObjectWrap::Unwrap<VtkChartLegendWrap>(info.Holder());
	vtkChartLegend *native = (vtkChartLegend *)wrapper->native.GetPointer();
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

void VtkChartLegendWrap::GetCacheBounds(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkChartLegendWrap *wrapper = ObjectWrap::Unwrap<VtkChartLegendWrap>(info.Holder());
	vtkChartLegend *native = (vtkChartLegend *)wrapper->native.GetPointer();
	bool r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetCacheBounds();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkChartLegendWrap::GetChart(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkChartLegendWrap *wrapper = ObjectWrap::Unwrap<VtkChartLegendWrap>(info.Holder());
	vtkChartLegend *native = (vtkChartLegend *)wrapper->native.GetPointer();
	vtkChart * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetChart();
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

void VtkChartLegendWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkChartLegendWrap *wrapper = ObjectWrap::Unwrap<VtkChartLegendWrap>(info.Holder());
	vtkChartLegend *native = (vtkChartLegend *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkChartLegendWrap::GetDragEnabled(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkChartLegendWrap *wrapper = ObjectWrap::Unwrap<VtkChartLegendWrap>(info.Holder());
	vtkChartLegend *native = (vtkChartLegend *)wrapper->native.GetPointer();
	bool r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetDragEnabled();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkChartLegendWrap::GetHorizontalAlignment(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkChartLegendWrap *wrapper = ObjectWrap::Unwrap<VtkChartLegendWrap>(info.Holder());
	vtkChartLegend *native = (vtkChartLegend *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetHorizontalAlignment();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkChartLegendWrap::GetInline(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkChartLegendWrap *wrapper = ObjectWrap::Unwrap<VtkChartLegendWrap>(info.Holder());
	vtkChartLegend *native = (vtkChartLegend *)wrapper->native.GetPointer();
	bool r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetInline();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkChartLegendWrap::GetLabelProperties(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkChartLegendWrap *wrapper = ObjectWrap::Unwrap<VtkChartLegendWrap>(info.Holder());
	vtkChartLegend *native = (vtkChartLegend *)wrapper->native.GetPointer();
	vtkTextProperty * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetLabelProperties();
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

void VtkChartLegendWrap::GetLabelSize(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkChartLegendWrap *wrapper = ObjectWrap::Unwrap<VtkChartLegendWrap>(info.Holder());
	vtkChartLegend *native = (vtkChartLegend *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetLabelSize();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkChartLegendWrap::GetPadding(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkChartLegendWrap *wrapper = ObjectWrap::Unwrap<VtkChartLegendWrap>(info.Holder());
	vtkChartLegend *native = (vtkChartLegend *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetPadding();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkChartLegendWrap::GetPen(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkChartLegendWrap *wrapper = ObjectWrap::Unwrap<VtkChartLegendWrap>(info.Holder());
	vtkChartLegend *native = (vtkChartLegend *)wrapper->native.GetPointer();
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

void VtkChartLegendWrap::GetSymbolWidth(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkChartLegendWrap *wrapper = ObjectWrap::Unwrap<VtkChartLegendWrap>(info.Holder());
	vtkChartLegend *native = (vtkChartLegend *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetSymbolWidth();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkChartLegendWrap::GetVerticalAlignment(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkChartLegendWrap *wrapper = ObjectWrap::Unwrap<VtkChartLegendWrap>(info.Holder());
	vtkChartLegend *native = (vtkChartLegend *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetVerticalAlignment();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkChartLegendWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkChartLegendWrap *wrapper = ObjectWrap::Unwrap<VtkChartLegendWrap>(info.Holder());
	vtkChartLegend *native = (vtkChartLegend *)wrapper->native.GetPointer();
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

void VtkChartLegendWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkChartLegendWrap *wrapper = ObjectWrap::Unwrap<VtkChartLegendWrap>(info.Holder());
	vtkChartLegend *native = (vtkChartLegend *)wrapper->native.GetPointer();
	vtkChartLegend * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
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

void VtkChartLegendWrap::Paint(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkChartLegendWrap *wrapper = ObjectWrap::Unwrap<VtkChartLegendWrap>(info.Holder());
	vtkChartLegend *native = (vtkChartLegend *)wrapper->native.GetPointer();
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

void VtkChartLegendWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkChartLegendWrap *wrapper = ObjectWrap::Unwrap<VtkChartLegendWrap>(info.Holder());
	vtkChartLegend *native = (vtkChartLegend *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkChartLegend * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObject *) a0->native.GetPointer()
		);
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
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkChartLegendWrap::SetCacheBounds(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkChartLegendWrap *wrapper = ObjectWrap::Unwrap<VtkChartLegendWrap>(info.Holder());
	vtkChartLegend *native = (vtkChartLegend *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsBoolean())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetCacheBounds(
			info[0]->BooleanValue()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkChartLegendWrap::SetChart(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkChartLegendWrap *wrapper = ObjectWrap::Unwrap<VtkChartLegendWrap>(info.Holder());
	vtkChartLegend *native = (vtkChartLegend *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkChartWrap::ptpl))->HasInstance(info[0]))
	{
		VtkChartWrap *a0 = ObjectWrap::Unwrap<VtkChartWrap>(info[0]->ToObject());
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetChart(
			(vtkChart *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkChartLegendWrap::SetDragEnabled(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkChartLegendWrap *wrapper = ObjectWrap::Unwrap<VtkChartLegendWrap>(info.Holder());
	vtkChartLegend *native = (vtkChartLegend *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsBoolean())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetDragEnabled(
			info[0]->BooleanValue()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkChartLegendWrap::SetHorizontalAlignment(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkChartLegendWrap *wrapper = ObjectWrap::Unwrap<VtkChartLegendWrap>(info.Holder());
	vtkChartLegend *native = (vtkChartLegend *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetHorizontalAlignment(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkChartLegendWrap::SetInline(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkChartLegendWrap *wrapper = ObjectWrap::Unwrap<VtkChartLegendWrap>(info.Holder());
	vtkChartLegend *native = (vtkChartLegend *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsBoolean())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetInline(
			info[0]->BooleanValue()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkChartLegendWrap::SetLabelSize(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkChartLegendWrap *wrapper = ObjectWrap::Unwrap<VtkChartLegendWrap>(info.Holder());
	vtkChartLegend *native = (vtkChartLegend *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetLabelSize(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkChartLegendWrap::SetPadding(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkChartLegendWrap *wrapper = ObjectWrap::Unwrap<VtkChartLegendWrap>(info.Holder());
	vtkChartLegend *native = (vtkChartLegend *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetPadding(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkChartLegendWrap::SetSymbolWidth(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkChartLegendWrap *wrapper = ObjectWrap::Unwrap<VtkChartLegendWrap>(info.Holder());
	vtkChartLegend *native = (vtkChartLegend *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetSymbolWidth(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkChartLegendWrap::SetVerticalAlignment(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkChartLegendWrap *wrapper = ObjectWrap::Unwrap<VtkChartLegendWrap>(info.Holder());
	vtkChartLegend *native = (vtkChartLegend *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetVerticalAlignment(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkChartLegendWrap::Update(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkChartLegendWrap *wrapper = ObjectWrap::Unwrap<VtkChartLegendWrap>(info.Holder());
	vtkChartLegend *native = (vtkChartLegend *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->Update();
}

