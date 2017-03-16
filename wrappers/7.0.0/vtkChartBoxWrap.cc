/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>

#include "vtkChartWrap.h"
#include "vtkChartBoxWrap.h"
#include "vtkObjectWrap.h"
#include "vtkContext2DWrap.h"
#include "vtkStringArrayWrap.h"
#include "vtkAxisWrap.h"
#include "vtkPlotBoxWrap.h"
#include "vtkTooltipItemWrap.h"
#include "../../plus/plus.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkChartBoxWrap::ptpl;

VtkChartBoxWrap::VtkChartBoxWrap()
{ }

VtkChartBoxWrap::VtkChartBoxWrap(vtkSmartPointer<vtkChartBox> _native)
{ native = _native; }

VtkChartBoxWrap::~VtkChartBoxWrap()
{ }

void VtkChartBoxWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkChartBox").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("ChartBox").ToLocalChecked(), ConstructorGetter);
}

void VtkChartBoxWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkChartBoxWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkChartWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkChartWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkChartBoxWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "GetSelectedColumn", GetSelectedColumn);
	Nan::SetPrototypeMethod(tpl, "getSelectedColumn", GetSelectedColumn);

	Nan::SetPrototypeMethod(tpl, "GetTooltip", GetTooltip);
	Nan::SetPrototypeMethod(tpl, "getTooltip", GetTooltip);

	Nan::SetPrototypeMethod(tpl, "GetVisibleColumns", GetVisibleColumns);
	Nan::SetPrototypeMethod(tpl, "getVisibleColumns", GetVisibleColumns);

	Nan::SetPrototypeMethod(tpl, "GetXPosition", GetXPosition);
	Nan::SetPrototypeMethod(tpl, "getXPosition", GetXPosition);

	Nan::SetPrototypeMethod(tpl, "GetYAxis", GetYAxis);
	Nan::SetPrototypeMethod(tpl, "getYAxis", GetYAxis);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "Paint", Paint);
	Nan::SetPrototypeMethod(tpl, "paint", Paint);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetColumnVisibilityAll", SetColumnVisibilityAll);
	Nan::SetPrototypeMethod(tpl, "setColumnVisibilityAll", SetColumnVisibilityAll);

	Nan::SetPrototypeMethod(tpl, "SetPlot", SetPlot);
	Nan::SetPrototypeMethod(tpl, "setPlot", SetPlot);

	Nan::SetPrototypeMethod(tpl, "SetSelectedColumn", SetSelectedColumn);
	Nan::SetPrototypeMethod(tpl, "setSelectedColumn", SetSelectedColumn);

	Nan::SetPrototypeMethod(tpl, "SetTooltip", SetTooltip);
	Nan::SetPrototypeMethod(tpl, "setTooltip", SetTooltip);

	Nan::SetPrototypeMethod(tpl, "Update", Update);
	Nan::SetPrototypeMethod(tpl, "update", Update);

#ifdef VTK_NODE_PLUS_VTKCHARTBOXWRAP_INITPTPL
	VTK_NODE_PLUS_VTKCHARTBOXWRAP_INITPTPL
#endif
	ptpl.Reset( tpl );
}

void VtkChartBoxWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkChartBox> native = vtkSmartPointer<vtkChartBox>::New();
		VtkChartBoxWrap* obj = new VtkChartBoxWrap(native);
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

void VtkChartBoxWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkChartBoxWrap *wrapper = ObjectWrap::Unwrap<VtkChartBoxWrap>(info.Holder());
	vtkChartBox *native = (vtkChartBox *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkChartBoxWrap::GetSelectedColumn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkChartBoxWrap *wrapper = ObjectWrap::Unwrap<VtkChartBoxWrap>(info.Holder());
	vtkChartBox *native = (vtkChartBox *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetSelectedColumn();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkChartBoxWrap::GetTooltip(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkChartBoxWrap *wrapper = ObjectWrap::Unwrap<VtkChartBoxWrap>(info.Holder());
	vtkChartBox *native = (vtkChartBox *)wrapper->native.GetPointer();
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

void VtkChartBoxWrap::GetVisibleColumns(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkChartBoxWrap *wrapper = ObjectWrap::Unwrap<VtkChartBoxWrap>(info.Holder());
	vtkChartBox *native = (vtkChartBox *)wrapper->native.GetPointer();
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
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkChartBoxWrap::GetXPosition(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkChartBoxWrap *wrapper = ObjectWrap::Unwrap<VtkChartBoxWrap>(info.Holder());
	vtkChartBox *native = (vtkChartBox *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		float r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->GetXPosition(
			info[0]->Int32Value()
		);
		info.GetReturnValue().Set(Nan::New(r));
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkChartBoxWrap::GetYAxis(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkChartBoxWrap *wrapper = ObjectWrap::Unwrap<VtkChartBoxWrap>(info.Holder());
	vtkChartBox *native = (vtkChartBox *)wrapper->native.GetPointer();
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

void VtkChartBoxWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkChartBoxWrap *wrapper = ObjectWrap::Unwrap<VtkChartBoxWrap>(info.Holder());
	vtkChartBox *native = (vtkChartBox *)wrapper->native.GetPointer();
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

void VtkChartBoxWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkChartBoxWrap *wrapper = ObjectWrap::Unwrap<VtkChartBoxWrap>(info.Holder());
	vtkChartBox *native = (vtkChartBox *)wrapper->native.GetPointer();
	vtkChartBox * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
	VtkChartBoxWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkChartBoxWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkChartBoxWrap *w = new VtkChartBoxWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkChartBoxWrap::Paint(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkChartBoxWrap *wrapper = ObjectWrap::Unwrap<VtkChartBoxWrap>(info.Holder());
	vtkChartBox *native = (vtkChartBox *)wrapper->native.GetPointer();
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

void VtkChartBoxWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkChartBoxWrap *wrapper = ObjectWrap::Unwrap<VtkChartBoxWrap>(info.Holder());
	vtkChartBox *native = (vtkChartBox *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkChartBox * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObject *) a0->native.GetPointer()
		);
		VtkChartBoxWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkChartBoxWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkChartBoxWrap *w = new VtkChartBoxWrap();
		w->native = r;
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkChartBoxWrap::SetColumnVisibilityAll(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkChartBoxWrap *wrapper = ObjectWrap::Unwrap<VtkChartBoxWrap>(info.Holder());
	vtkChartBox *native = (vtkChartBox *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsBoolean())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetColumnVisibilityAll(
			info[0]->BooleanValue()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkChartBoxWrap::SetPlot(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkChartBoxWrap *wrapper = ObjectWrap::Unwrap<VtkChartBoxWrap>(info.Holder());
	vtkChartBox *native = (vtkChartBox *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkPlotBoxWrap::ptpl))->HasInstance(info[0]))
	{
		VtkPlotBoxWrap *a0 = ObjectWrap::Unwrap<VtkPlotBoxWrap>(info[0]->ToObject());
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetPlot(
			(vtkPlotBox *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkChartBoxWrap::SetSelectedColumn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkChartBoxWrap *wrapper = ObjectWrap::Unwrap<VtkChartBoxWrap>(info.Holder());
	vtkChartBox *native = (vtkChartBox *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetSelectedColumn(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkChartBoxWrap::SetTooltip(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkChartBoxWrap *wrapper = ObjectWrap::Unwrap<VtkChartBoxWrap>(info.Holder());
	vtkChartBox *native = (vtkChartBox *)wrapper->native.GetPointer();
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

void VtkChartBoxWrap::Update(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkChartBoxWrap *wrapper = ObjectWrap::Unwrap<VtkChartBoxWrap>(info.Holder());
	vtkChartBox *native = (vtkChartBox *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->Update();
}

