/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>

#include "vtkActor2DWrap.h"
#include "vtkBarChartActorWrap.h"
#include "vtkObjectBaseWrap.h"
#include "vtkDataObjectWrap.h"
#include "vtkTextPropertyWrap.h"
#include "vtkLegendBoxActorWrap.h"
#include "vtkViewportWrap.h"
#include "vtkWindowWrap.h"
#include "../../plus/plus.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkBarChartActorWrap::ptpl;

VtkBarChartActorWrap::VtkBarChartActorWrap()
{ }

VtkBarChartActorWrap::VtkBarChartActorWrap(vtkSmartPointer<vtkBarChartActor> _native)
{ native = _native; }

VtkBarChartActorWrap::~VtkBarChartActorWrap()
{ }

void VtkBarChartActorWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkBarChartActor").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("BarChartActor").ToLocalChecked(), ConstructorGetter);
}

void VtkBarChartActorWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkBarChartActorWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkActor2DWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkActor2DWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkBarChartActorWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "GetBarLabel", GetBarLabel);
	Nan::SetPrototypeMethod(tpl, "getBarLabel", GetBarLabel);

	Nan::SetPrototypeMethod(tpl, "GetInput", GetInput);
	Nan::SetPrototypeMethod(tpl, "getInput", GetInput);

	Nan::SetPrototypeMethod(tpl, "GetLabelTextProperty", GetLabelTextProperty);
	Nan::SetPrototypeMethod(tpl, "getLabelTextProperty", GetLabelTextProperty);

	Nan::SetPrototypeMethod(tpl, "GetLabelVisibility", GetLabelVisibility);
	Nan::SetPrototypeMethod(tpl, "getLabelVisibility", GetLabelVisibility);

	Nan::SetPrototypeMethod(tpl, "GetLegendActor", GetLegendActor);
	Nan::SetPrototypeMethod(tpl, "getLegendActor", GetLegendActor);

	Nan::SetPrototypeMethod(tpl, "GetLegendVisibility", GetLegendVisibility);
	Nan::SetPrototypeMethod(tpl, "getLegendVisibility", GetLegendVisibility);

	Nan::SetPrototypeMethod(tpl, "GetTitle", GetTitle);
	Nan::SetPrototypeMethod(tpl, "getTitle", GetTitle);

	Nan::SetPrototypeMethod(tpl, "GetTitleTextProperty", GetTitleTextProperty);
	Nan::SetPrototypeMethod(tpl, "getTitleTextProperty", GetTitleTextProperty);

	Nan::SetPrototypeMethod(tpl, "GetTitleVisibility", GetTitleVisibility);
	Nan::SetPrototypeMethod(tpl, "getTitleVisibility", GetTitleVisibility);

	Nan::SetPrototypeMethod(tpl, "GetYTitle", GetYTitle);
	Nan::SetPrototypeMethod(tpl, "getYTitle", GetYTitle);

	Nan::SetPrototypeMethod(tpl, "HasTranslucentPolygonalGeometry", HasTranslucentPolygonalGeometry);
	Nan::SetPrototypeMethod(tpl, "hasTranslucentPolygonalGeometry", HasTranslucentPolygonalGeometry);

	Nan::SetPrototypeMethod(tpl, "LabelVisibilityOff", LabelVisibilityOff);
	Nan::SetPrototypeMethod(tpl, "labelVisibilityOff", LabelVisibilityOff);

	Nan::SetPrototypeMethod(tpl, "LabelVisibilityOn", LabelVisibilityOn);
	Nan::SetPrototypeMethod(tpl, "labelVisibilityOn", LabelVisibilityOn);

	Nan::SetPrototypeMethod(tpl, "LegendVisibilityOff", LegendVisibilityOff);
	Nan::SetPrototypeMethod(tpl, "legendVisibilityOff", LegendVisibilityOff);

	Nan::SetPrototypeMethod(tpl, "LegendVisibilityOn", LegendVisibilityOn);
	Nan::SetPrototypeMethod(tpl, "legendVisibilityOn", LegendVisibilityOn);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "ReleaseGraphicsResources", ReleaseGraphicsResources);
	Nan::SetPrototypeMethod(tpl, "releaseGraphicsResources", ReleaseGraphicsResources);

	Nan::SetPrototypeMethod(tpl, "RenderOpaqueGeometry", RenderOpaqueGeometry);
	Nan::SetPrototypeMethod(tpl, "renderOpaqueGeometry", RenderOpaqueGeometry);

	Nan::SetPrototypeMethod(tpl, "RenderOverlay", RenderOverlay);
	Nan::SetPrototypeMethod(tpl, "renderOverlay", RenderOverlay);

	Nan::SetPrototypeMethod(tpl, "RenderTranslucentPolygonalGeometry", RenderTranslucentPolygonalGeometry);
	Nan::SetPrototypeMethod(tpl, "renderTranslucentPolygonalGeometry", RenderTranslucentPolygonalGeometry);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetBarColor", SetBarColor);
	Nan::SetPrototypeMethod(tpl, "setBarColor", SetBarColor);

	Nan::SetPrototypeMethod(tpl, "SetBarLabel", SetBarLabel);
	Nan::SetPrototypeMethod(tpl, "setBarLabel", SetBarLabel);

	Nan::SetPrototypeMethod(tpl, "SetInput", SetInput);
	Nan::SetPrototypeMethod(tpl, "setInput", SetInput);

	Nan::SetPrototypeMethod(tpl, "SetLabelTextProperty", SetLabelTextProperty);
	Nan::SetPrototypeMethod(tpl, "setLabelTextProperty", SetLabelTextProperty);

	Nan::SetPrototypeMethod(tpl, "SetLabelVisibility", SetLabelVisibility);
	Nan::SetPrototypeMethod(tpl, "setLabelVisibility", SetLabelVisibility);

	Nan::SetPrototypeMethod(tpl, "SetLegendVisibility", SetLegendVisibility);
	Nan::SetPrototypeMethod(tpl, "setLegendVisibility", SetLegendVisibility);

	Nan::SetPrototypeMethod(tpl, "SetTitle", SetTitle);
	Nan::SetPrototypeMethod(tpl, "setTitle", SetTitle);

	Nan::SetPrototypeMethod(tpl, "SetTitleTextProperty", SetTitleTextProperty);
	Nan::SetPrototypeMethod(tpl, "setTitleTextProperty", SetTitleTextProperty);

	Nan::SetPrototypeMethod(tpl, "SetTitleVisibility", SetTitleVisibility);
	Nan::SetPrototypeMethod(tpl, "setTitleVisibility", SetTitleVisibility);

	Nan::SetPrototypeMethod(tpl, "SetYTitle", SetYTitle);
	Nan::SetPrototypeMethod(tpl, "setYTitle", SetYTitle);

	Nan::SetPrototypeMethod(tpl, "TitleVisibilityOff", TitleVisibilityOff);
	Nan::SetPrototypeMethod(tpl, "titleVisibilityOff", TitleVisibilityOff);

	Nan::SetPrototypeMethod(tpl, "TitleVisibilityOn", TitleVisibilityOn);
	Nan::SetPrototypeMethod(tpl, "titleVisibilityOn", TitleVisibilityOn);

#ifdef VTK_NODE_PLUS_VTKBARCHARTACTORWRAP_INITPTPL
	VTK_NODE_PLUS_VTKBARCHARTACTORWRAP_INITPTPL
#endif
	ptpl.Reset( tpl );
}

void VtkBarChartActorWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkBarChartActor> native = vtkSmartPointer<vtkBarChartActor>::New();
		VtkBarChartActorWrap* obj = new VtkBarChartActorWrap(native);
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

void VtkBarChartActorWrap::GetBarLabel(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkBarChartActorWrap *wrapper = ObjectWrap::Unwrap<VtkBarChartActorWrap>(info.Holder());
	vtkBarChartActor *native = (vtkBarChartActor *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		char const * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->GetBarLabel(
			info[0]->Int32Value()
		);
		info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkBarChartActorWrap::GetInput(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkBarChartActorWrap *wrapper = ObjectWrap::Unwrap<VtkBarChartActorWrap>(info.Holder());
	vtkBarChartActor *native = (vtkBarChartActor *)wrapper->native.GetPointer();
	vtkDataObject * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetInput();
	VtkDataObjectWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkDataObjectWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkDataObjectWrap *w = new VtkDataObjectWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkBarChartActorWrap::GetLabelTextProperty(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkBarChartActorWrap *wrapper = ObjectWrap::Unwrap<VtkBarChartActorWrap>(info.Holder());
	vtkBarChartActor *native = (vtkBarChartActor *)wrapper->native.GetPointer();
	vtkTextProperty * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetLabelTextProperty();
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

void VtkBarChartActorWrap::GetLabelVisibility(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkBarChartActorWrap *wrapper = ObjectWrap::Unwrap<VtkBarChartActorWrap>(info.Holder());
	vtkBarChartActor *native = (vtkBarChartActor *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetLabelVisibility();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkBarChartActorWrap::GetLegendActor(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkBarChartActorWrap *wrapper = ObjectWrap::Unwrap<VtkBarChartActorWrap>(info.Holder());
	vtkBarChartActor *native = (vtkBarChartActor *)wrapper->native.GetPointer();
	vtkLegendBoxActor * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetLegendActor();
	VtkLegendBoxActorWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkLegendBoxActorWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkLegendBoxActorWrap *w = new VtkLegendBoxActorWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkBarChartActorWrap::GetLegendVisibility(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkBarChartActorWrap *wrapper = ObjectWrap::Unwrap<VtkBarChartActorWrap>(info.Holder());
	vtkBarChartActor *native = (vtkBarChartActor *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetLegendVisibility();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkBarChartActorWrap::GetTitle(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkBarChartActorWrap *wrapper = ObjectWrap::Unwrap<VtkBarChartActorWrap>(info.Holder());
	vtkBarChartActor *native = (vtkBarChartActor *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetTitle();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkBarChartActorWrap::GetTitleTextProperty(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkBarChartActorWrap *wrapper = ObjectWrap::Unwrap<VtkBarChartActorWrap>(info.Holder());
	vtkBarChartActor *native = (vtkBarChartActor *)wrapper->native.GetPointer();
	vtkTextProperty * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetTitleTextProperty();
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

void VtkBarChartActorWrap::GetTitleVisibility(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkBarChartActorWrap *wrapper = ObjectWrap::Unwrap<VtkBarChartActorWrap>(info.Holder());
	vtkBarChartActor *native = (vtkBarChartActor *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetTitleVisibility();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkBarChartActorWrap::GetYTitle(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkBarChartActorWrap *wrapper = ObjectWrap::Unwrap<VtkBarChartActorWrap>(info.Holder());
	vtkBarChartActor *native = (vtkBarChartActor *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetYTitle();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkBarChartActorWrap::HasTranslucentPolygonalGeometry(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkBarChartActorWrap *wrapper = ObjectWrap::Unwrap<VtkBarChartActorWrap>(info.Holder());
	vtkBarChartActor *native = (vtkBarChartActor *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->HasTranslucentPolygonalGeometry();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkBarChartActorWrap::LabelVisibilityOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkBarChartActorWrap *wrapper = ObjectWrap::Unwrap<VtkBarChartActorWrap>(info.Holder());
	vtkBarChartActor *native = (vtkBarChartActor *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->LabelVisibilityOff();
}

void VtkBarChartActorWrap::LabelVisibilityOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkBarChartActorWrap *wrapper = ObjectWrap::Unwrap<VtkBarChartActorWrap>(info.Holder());
	vtkBarChartActor *native = (vtkBarChartActor *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->LabelVisibilityOn();
}

void VtkBarChartActorWrap::LegendVisibilityOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkBarChartActorWrap *wrapper = ObjectWrap::Unwrap<VtkBarChartActorWrap>(info.Holder());
	vtkBarChartActor *native = (vtkBarChartActor *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->LegendVisibilityOff();
}

void VtkBarChartActorWrap::LegendVisibilityOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkBarChartActorWrap *wrapper = ObjectWrap::Unwrap<VtkBarChartActorWrap>(info.Holder());
	vtkBarChartActor *native = (vtkBarChartActor *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->LegendVisibilityOn();
}

void VtkBarChartActorWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkBarChartActorWrap *wrapper = ObjectWrap::Unwrap<VtkBarChartActorWrap>(info.Holder());
	vtkBarChartActor *native = (vtkBarChartActor *)wrapper->native.GetPointer();
	vtkBarChartActor * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
	VtkBarChartActorWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkBarChartActorWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkBarChartActorWrap *w = new VtkBarChartActorWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkBarChartActorWrap::ReleaseGraphicsResources(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkBarChartActorWrap *wrapper = ObjectWrap::Unwrap<VtkBarChartActorWrap>(info.Holder());
	vtkBarChartActor *native = (vtkBarChartActor *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkWindowWrap::ptpl))->HasInstance(info[0]))
	{
		VtkWindowWrap *a0 = ObjectWrap::Unwrap<VtkWindowWrap>(info[0]->ToObject());
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->ReleaseGraphicsResources(
			(vtkWindow *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkBarChartActorWrap::RenderOpaqueGeometry(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkBarChartActorWrap *wrapper = ObjectWrap::Unwrap<VtkBarChartActorWrap>(info.Holder());
	vtkBarChartActor *native = (vtkBarChartActor *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkViewportWrap::ptpl))->HasInstance(info[0]))
	{
		VtkViewportWrap *a0 = ObjectWrap::Unwrap<VtkViewportWrap>(info[0]->ToObject());
		int r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->RenderOpaqueGeometry(
			(vtkViewport *) a0->native.GetPointer()
		);
		info.GetReturnValue().Set(Nan::New(r));
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkBarChartActorWrap::RenderOverlay(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkBarChartActorWrap *wrapper = ObjectWrap::Unwrap<VtkBarChartActorWrap>(info.Holder());
	vtkBarChartActor *native = (vtkBarChartActor *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkViewportWrap::ptpl))->HasInstance(info[0]))
	{
		VtkViewportWrap *a0 = ObjectWrap::Unwrap<VtkViewportWrap>(info[0]->ToObject());
		int r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->RenderOverlay(
			(vtkViewport *) a0->native.GetPointer()
		);
		info.GetReturnValue().Set(Nan::New(r));
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkBarChartActorWrap::RenderTranslucentPolygonalGeometry(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkBarChartActorWrap *wrapper = ObjectWrap::Unwrap<VtkBarChartActorWrap>(info.Holder());
	vtkBarChartActor *native = (vtkBarChartActor *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkViewportWrap::ptpl))->HasInstance(info[0]))
	{
		VtkViewportWrap *a0 = ObjectWrap::Unwrap<VtkViewportWrap>(info[0]->ToObject());
		int r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->RenderTranslucentPolygonalGeometry(
			(vtkViewport *) a0->native.GetPointer()
		);
		info.GetReturnValue().Set(Nan::New(r));
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkBarChartActorWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkBarChartActorWrap *wrapper = ObjectWrap::Unwrap<VtkBarChartActorWrap>(info.Holder());
	vtkBarChartActor *native = (vtkBarChartActor *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectBaseWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectBaseWrap *a0 = ObjectWrap::Unwrap<VtkObjectBaseWrap>(info[0]->ToObject());
		vtkBarChartActor * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObjectBase *) a0->native.GetPointer()
		);
		VtkBarChartActorWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkBarChartActorWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkBarChartActorWrap *w = new VtkBarChartActorWrap();
		w->native = r;
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkBarChartActorWrap::SetBarColor(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkBarChartActorWrap *wrapper = ObjectWrap::Unwrap<VtkBarChartActorWrap>(info.Holder());
	vtkBarChartActor *native = (vtkBarChartActor *)wrapper->native.GetPointer();
	size_t i;
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() > 1 && info[1]->IsFloat64Array())
		{
			v8::Local<v8::Float64Array>a1(v8::Local<v8::Float64Array>::Cast(info[1]->ToObject()));
			if( a1->Length() < 3 )
			{
				Nan::ThrowError("Array too short.");
				return;
			}

						if(info.Length() != 2)
			{
				Nan::ThrowError("Too many parameters.");
				return;
			}
			native->SetBarColor(
				info[0]->Int32Value(),
				(double *)(a1->Buffer()->GetContents().Data())
			);
			return;
		}
		else if(info.Length() > 1 && info[1]->IsArray())
		{
			v8::Local<v8::Array>a1(v8::Local<v8::Array>::Cast(info[1]->ToObject()));
			double b1[3];
			if( a1->Length() < 3 )
			{
				Nan::ThrowError("Array too short.");
				return;
			}

			for( i = 0; i < 3; i++ )
			{
				if( !a1->Get(i)->IsNumber() )
				{
					Nan::ThrowError("Array contents invalid.");
					return;
				}
				b1[i] = a1->Get(i)->NumberValue();
			}
						if(info.Length() != 2)
			{
				Nan::ThrowError("Too many parameters.");
				return;
			}
			native->SetBarColor(
				info[0]->Int32Value(),
				b1
			);
			return;
		}
		else if(info.Length() > 1 && info[1]->IsNumber())
		{
			if(info.Length() > 2 && info[2]->IsNumber())
			{
				if(info.Length() > 3 && info[3]->IsNumber())
				{
										if(info.Length() != 4)
					{
						Nan::ThrowError("Too many parameters.");
						return;
					}
					native->SetBarColor(
						info[0]->Int32Value(),
						info[1]->NumberValue(),
						info[2]->NumberValue(),
						info[3]->NumberValue()
					);
					return;
				}
			}
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkBarChartActorWrap::SetBarLabel(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkBarChartActorWrap *wrapper = ObjectWrap::Unwrap<VtkBarChartActorWrap>(info.Holder());
	vtkBarChartActor *native = (vtkBarChartActor *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() > 1 && info[1]->IsString())
		{
			Nan::Utf8String a1(info[1]);
						if(info.Length() != 2)
			{
				Nan::ThrowError("Too many parameters.");
				return;
			}
			native->SetBarLabel(
				info[0]->Int32Value(),
				*a1
			);
			return;
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkBarChartActorWrap::SetInput(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkBarChartActorWrap *wrapper = ObjectWrap::Unwrap<VtkBarChartActorWrap>(info.Holder());
	vtkBarChartActor *native = (vtkBarChartActor *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkDataObjectWrap::ptpl))->HasInstance(info[0]))
	{
		VtkDataObjectWrap *a0 = ObjectWrap::Unwrap<VtkDataObjectWrap>(info[0]->ToObject());
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetInput(
			(vtkDataObject *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkBarChartActorWrap::SetLabelTextProperty(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkBarChartActorWrap *wrapper = ObjectWrap::Unwrap<VtkBarChartActorWrap>(info.Holder());
	vtkBarChartActor *native = (vtkBarChartActor *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkTextPropertyWrap::ptpl))->HasInstance(info[0]))
	{
		VtkTextPropertyWrap *a0 = ObjectWrap::Unwrap<VtkTextPropertyWrap>(info[0]->ToObject());
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetLabelTextProperty(
			(vtkTextProperty *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkBarChartActorWrap::SetLabelVisibility(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkBarChartActorWrap *wrapper = ObjectWrap::Unwrap<VtkBarChartActorWrap>(info.Holder());
	vtkBarChartActor *native = (vtkBarChartActor *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetLabelVisibility(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkBarChartActorWrap::SetLegendVisibility(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkBarChartActorWrap *wrapper = ObjectWrap::Unwrap<VtkBarChartActorWrap>(info.Holder());
	vtkBarChartActor *native = (vtkBarChartActor *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetLegendVisibility(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkBarChartActorWrap::SetTitle(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkBarChartActorWrap *wrapper = ObjectWrap::Unwrap<VtkBarChartActorWrap>(info.Holder());
	vtkBarChartActor *native = (vtkBarChartActor *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsString())
	{
		Nan::Utf8String a0(info[0]);
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetTitle(
			*a0
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkBarChartActorWrap::SetTitleTextProperty(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkBarChartActorWrap *wrapper = ObjectWrap::Unwrap<VtkBarChartActorWrap>(info.Holder());
	vtkBarChartActor *native = (vtkBarChartActor *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkTextPropertyWrap::ptpl))->HasInstance(info[0]))
	{
		VtkTextPropertyWrap *a0 = ObjectWrap::Unwrap<VtkTextPropertyWrap>(info[0]->ToObject());
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetTitleTextProperty(
			(vtkTextProperty *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkBarChartActorWrap::SetTitleVisibility(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkBarChartActorWrap *wrapper = ObjectWrap::Unwrap<VtkBarChartActorWrap>(info.Holder());
	vtkBarChartActor *native = (vtkBarChartActor *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetTitleVisibility(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkBarChartActorWrap::SetYTitle(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkBarChartActorWrap *wrapper = ObjectWrap::Unwrap<VtkBarChartActorWrap>(info.Holder());
	vtkBarChartActor *native = (vtkBarChartActor *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsString())
	{
		Nan::Utf8String a0(info[0]);
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetYTitle(
			*a0
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkBarChartActorWrap::TitleVisibilityOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkBarChartActorWrap *wrapper = ObjectWrap::Unwrap<VtkBarChartActorWrap>(info.Holder());
	vtkBarChartActor *native = (vtkBarChartActor *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->TitleVisibilityOff();
}

void VtkBarChartActorWrap::TitleVisibilityOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkBarChartActorWrap *wrapper = ObjectWrap::Unwrap<VtkBarChartActorWrap>(info.Holder());
	vtkBarChartActor *native = (vtkBarChartActor *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->TitleVisibilityOn();
}

