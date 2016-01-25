/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkContourRepresentationWrap.h"
#include "vtkOrientedGlyphContourRepresentationWrap.h"
#include "vtkObjectWrap.h"
#include "vtkPolyDataWrap.h"
#include "vtkPropertyWrap.h"
#include "vtkRendererWrap.h"
#include "vtkPropCollectionWrap.h"
#include "vtkWindowWrap.h"
#include "vtkViewportWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::Function> VtkOrientedGlyphContourRepresentationWrap::constructor;
Nan::Persistent<v8::FunctionTemplate> VtkOrientedGlyphContourRepresentationWrap::ptpl;

VtkOrientedGlyphContourRepresentationWrap::VtkOrientedGlyphContourRepresentationWrap()
{ }

VtkOrientedGlyphContourRepresentationWrap::VtkOrientedGlyphContourRepresentationWrap(vtkSmartPointer<vtkOrientedGlyphContourRepresentation> _native)
{ native = _native; }

VtkOrientedGlyphContourRepresentationWrap::~VtkOrientedGlyphContourRepresentationWrap()
{ }

void VtkOrientedGlyphContourRepresentationWrap::Init(v8::Local<v8::Object> exports)
{
	if (!constructor.IsEmpty()) return;
	Nan::HandleScope scope;

	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkContourRepresentationWrap::Init( exports );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkContourRepresentationWrap::ptpl));

	tpl->SetClassName(Nan::New("VtkOrientedGlyphContourRepresentationWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);
	InitTpl(tpl);

	constructor.Reset( tpl->GetFunction() );
	ptpl.Reset( tpl );

	exports->Set(Nan::New("vtkOrientedGlyphContourRepresentation").ToLocalChecked(),tpl->GetFunction());
	exports->Set(Nan::New("OrientedGlyphContourRepresentation").ToLocalChecked(),tpl->GetFunction());
}

void VtkOrientedGlyphContourRepresentationWrap::InitTpl(v8::Local<v8::FunctionTemplate> tpl)
{
	Nan::SetPrototypeMethod(tpl, "AlwaysOnTopOff", AlwaysOnTopOff);
	Nan::SetPrototypeMethod(tpl, "alwaysOnTopOff", AlwaysOnTopOff);

	Nan::SetPrototypeMethod(tpl, "AlwaysOnTopOn", AlwaysOnTopOn);
	Nan::SetPrototypeMethod(tpl, "alwaysOnTopOn", AlwaysOnTopOn);

	Nan::SetPrototypeMethod(tpl, "BuildRepresentation", BuildRepresentation);
	Nan::SetPrototypeMethod(tpl, "buildRepresentation", BuildRepresentation);

	Nan::SetPrototypeMethod(tpl, "ComputeInteractionState", ComputeInteractionState);
	Nan::SetPrototypeMethod(tpl, "computeInteractionState", ComputeInteractionState);

	Nan::SetPrototypeMethod(tpl, "GetActiveCursorShape", GetActiveCursorShape);
	Nan::SetPrototypeMethod(tpl, "getActiveCursorShape", GetActiveCursorShape);

	Nan::SetPrototypeMethod(tpl, "GetActiveProperty", GetActiveProperty);
	Nan::SetPrototypeMethod(tpl, "getActiveProperty", GetActiveProperty);

	Nan::SetPrototypeMethod(tpl, "GetActors", GetActors);
	Nan::SetPrototypeMethod(tpl, "getActors", GetActors);

	Nan::SetPrototypeMethod(tpl, "GetAlwaysOnTop", GetAlwaysOnTop);
	Nan::SetPrototypeMethod(tpl, "getAlwaysOnTop", GetAlwaysOnTop);

	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "GetContourRepresentationAsPolyData", GetContourRepresentationAsPolyData);
	Nan::SetPrototypeMethod(tpl, "getContourRepresentationAsPolyData", GetContourRepresentationAsPolyData);

	Nan::SetPrototypeMethod(tpl, "GetCursorShape", GetCursorShape);
	Nan::SetPrototypeMethod(tpl, "getCursorShape", GetCursorShape);

	Nan::SetPrototypeMethod(tpl, "GetLinesProperty", GetLinesProperty);
	Nan::SetPrototypeMethod(tpl, "getLinesProperty", GetLinesProperty);

	Nan::SetPrototypeMethod(tpl, "GetProperty", GetProperty);
	Nan::SetPrototypeMethod(tpl, "getProperty", GetProperty);

	Nan::SetPrototypeMethod(tpl, "HasTranslucentPolygonalGeometry", HasTranslucentPolygonalGeometry);
	Nan::SetPrototypeMethod(tpl, "hasTranslucentPolygonalGeometry", HasTranslucentPolygonalGeometry);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

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

	Nan::SetPrototypeMethod(tpl, "SetActiveCursorShape", SetActiveCursorShape);
	Nan::SetPrototypeMethod(tpl, "setActiveCursorShape", SetActiveCursorShape);

	Nan::SetPrototypeMethod(tpl, "SetAlwaysOnTop", SetAlwaysOnTop);
	Nan::SetPrototypeMethod(tpl, "setAlwaysOnTop", SetAlwaysOnTop);

	Nan::SetPrototypeMethod(tpl, "SetCursorShape", SetCursorShape);
	Nan::SetPrototypeMethod(tpl, "setCursorShape", SetCursorShape);

	Nan::SetPrototypeMethod(tpl, "SetLineColor", SetLineColor);
	Nan::SetPrototypeMethod(tpl, "setLineColor", SetLineColor);

	Nan::SetPrototypeMethod(tpl, "SetRenderer", SetRenderer);
	Nan::SetPrototypeMethod(tpl, "setRenderer", SetRenderer);

	Nan::SetPrototypeMethod(tpl, "SetShowSelectedNodes", SetShowSelectedNodes);
	Nan::SetPrototypeMethod(tpl, "setShowSelectedNodes", SetShowSelectedNodes);

}

void VtkOrientedGlyphContourRepresentationWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkOrientedGlyphContourRepresentation> native = vtkSmartPointer<vtkOrientedGlyphContourRepresentation>::New();
		VtkOrientedGlyphContourRepresentationWrap* obj = new VtkOrientedGlyphContourRepresentationWrap(native);		obj->Wrap(info.This());
	}
	else
	{
		Nan::Utf8String s(info[0]);
		if(info[0]->ToObject() != vtkNodeJsNoWrap )
			Nan::ThrowError("Parameter Error");
	}

	info.GetReturnValue().Set(info.This());
}

void VtkOrientedGlyphContourRepresentationWrap::AlwaysOnTopOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkOrientedGlyphContourRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkOrientedGlyphContourRepresentationWrap>(info.Holder());
	vtkOrientedGlyphContourRepresentation *native = (vtkOrientedGlyphContourRepresentation *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->AlwaysOnTopOff();
}

void VtkOrientedGlyphContourRepresentationWrap::AlwaysOnTopOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkOrientedGlyphContourRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkOrientedGlyphContourRepresentationWrap>(info.Holder());
	vtkOrientedGlyphContourRepresentation *native = (vtkOrientedGlyphContourRepresentation *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->AlwaysOnTopOn();
}

void VtkOrientedGlyphContourRepresentationWrap::BuildRepresentation(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkOrientedGlyphContourRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkOrientedGlyphContourRepresentationWrap>(info.Holder());
	vtkOrientedGlyphContourRepresentation *native = (vtkOrientedGlyphContourRepresentation *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->BuildRepresentation();
}

void VtkOrientedGlyphContourRepresentationWrap::ComputeInteractionState(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkOrientedGlyphContourRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkOrientedGlyphContourRepresentationWrap>(info.Holder());
	vtkOrientedGlyphContourRepresentation *native = (vtkOrientedGlyphContourRepresentation *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() > 1 && info[1]->IsInt32())
		{
			if(info.Length() > 2 && info[2]->IsInt32())
			{
				int r;
				if(info.Length() != 3)
				{
					Nan::ThrowError("Too many parameters.");
					return;
				}
				r = native->ComputeInteractionState(
					info[0]->Int32Value(),
					info[1]->Int32Value(),
					info[2]->Int32Value()
				);
				info.GetReturnValue().Set(Nan::New(r));
				return;
			}
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkOrientedGlyphContourRepresentationWrap::GetActiveCursorShape(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkOrientedGlyphContourRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkOrientedGlyphContourRepresentationWrap>(info.Holder());
	vtkOrientedGlyphContourRepresentation *native = (vtkOrientedGlyphContourRepresentation *)wrapper->native.GetPointer();
	vtkPolyData * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetActiveCursorShape();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::Function>(VtkPolyDataWrap::constructor);
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkPolyDataWrap *w = new VtkPolyDataWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkOrientedGlyphContourRepresentationWrap::GetActiveProperty(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkOrientedGlyphContourRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkOrientedGlyphContourRepresentationWrap>(info.Holder());
	vtkOrientedGlyphContourRepresentation *native = (vtkOrientedGlyphContourRepresentation *)wrapper->native.GetPointer();
	vtkProperty * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetActiveProperty();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::Function>(VtkPropertyWrap::constructor);
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkPropertyWrap *w = new VtkPropertyWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkOrientedGlyphContourRepresentationWrap::GetActors(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkOrientedGlyphContourRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkOrientedGlyphContourRepresentationWrap>(info.Holder());
	vtkOrientedGlyphContourRepresentation *native = (vtkOrientedGlyphContourRepresentation *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject())
	{
		VtkPropCollectionWrap *a0 = ObjectWrap::Unwrap<VtkPropCollectionWrap>(info[0]->ToObject());
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->GetActors(
			(vtkPropCollection *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkOrientedGlyphContourRepresentationWrap::GetAlwaysOnTop(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkOrientedGlyphContourRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkOrientedGlyphContourRepresentationWrap>(info.Holder());
	vtkOrientedGlyphContourRepresentation *native = (vtkOrientedGlyphContourRepresentation *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetAlwaysOnTop();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkOrientedGlyphContourRepresentationWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkOrientedGlyphContourRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkOrientedGlyphContourRepresentationWrap>(info.Holder());
	vtkOrientedGlyphContourRepresentation *native = (vtkOrientedGlyphContourRepresentation *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkOrientedGlyphContourRepresentationWrap::GetContourRepresentationAsPolyData(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkOrientedGlyphContourRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkOrientedGlyphContourRepresentationWrap>(info.Holder());
	vtkOrientedGlyphContourRepresentation *native = (vtkOrientedGlyphContourRepresentation *)wrapper->native.GetPointer();
	vtkPolyData * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetContourRepresentationAsPolyData();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::Function>(VtkPolyDataWrap::constructor);
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkPolyDataWrap *w = new VtkPolyDataWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkOrientedGlyphContourRepresentationWrap::GetCursorShape(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkOrientedGlyphContourRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkOrientedGlyphContourRepresentationWrap>(info.Holder());
	vtkOrientedGlyphContourRepresentation *native = (vtkOrientedGlyphContourRepresentation *)wrapper->native.GetPointer();
	vtkPolyData * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetCursorShape();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::Function>(VtkPolyDataWrap::constructor);
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkPolyDataWrap *w = new VtkPolyDataWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkOrientedGlyphContourRepresentationWrap::GetLinesProperty(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkOrientedGlyphContourRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkOrientedGlyphContourRepresentationWrap>(info.Holder());
	vtkOrientedGlyphContourRepresentation *native = (vtkOrientedGlyphContourRepresentation *)wrapper->native.GetPointer();
	vtkProperty * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetLinesProperty();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::Function>(VtkPropertyWrap::constructor);
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkPropertyWrap *w = new VtkPropertyWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkOrientedGlyphContourRepresentationWrap::GetProperty(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkOrientedGlyphContourRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkOrientedGlyphContourRepresentationWrap>(info.Holder());
	vtkOrientedGlyphContourRepresentation *native = (vtkOrientedGlyphContourRepresentation *)wrapper->native.GetPointer();
	vtkProperty * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetProperty();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::Function>(VtkPropertyWrap::constructor);
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkPropertyWrap *w = new VtkPropertyWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkOrientedGlyphContourRepresentationWrap::HasTranslucentPolygonalGeometry(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkOrientedGlyphContourRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkOrientedGlyphContourRepresentationWrap>(info.Holder());
	vtkOrientedGlyphContourRepresentation *native = (vtkOrientedGlyphContourRepresentation *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->HasTranslucentPolygonalGeometry();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkOrientedGlyphContourRepresentationWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkOrientedGlyphContourRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkOrientedGlyphContourRepresentationWrap>(info.Holder());
	vtkOrientedGlyphContourRepresentation *native = (vtkOrientedGlyphContourRepresentation *)wrapper->native.GetPointer();
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

void VtkOrientedGlyphContourRepresentationWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkOrientedGlyphContourRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkOrientedGlyphContourRepresentationWrap>(info.Holder());
	vtkOrientedGlyphContourRepresentation *native = (vtkOrientedGlyphContourRepresentation *)wrapper->native.GetPointer();
	vtkOrientedGlyphContourRepresentation * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::Function>(VtkOrientedGlyphContourRepresentationWrap::constructor);
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkOrientedGlyphContourRepresentationWrap *w = new VtkOrientedGlyphContourRepresentationWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkOrientedGlyphContourRepresentationWrap::ReleaseGraphicsResources(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkOrientedGlyphContourRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkOrientedGlyphContourRepresentationWrap>(info.Holder());
	vtkOrientedGlyphContourRepresentation *native = (vtkOrientedGlyphContourRepresentation *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject())
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

void VtkOrientedGlyphContourRepresentationWrap::RenderOpaqueGeometry(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkOrientedGlyphContourRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkOrientedGlyphContourRepresentationWrap>(info.Holder());
	vtkOrientedGlyphContourRepresentation *native = (vtkOrientedGlyphContourRepresentation *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject())
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

void VtkOrientedGlyphContourRepresentationWrap::RenderOverlay(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkOrientedGlyphContourRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkOrientedGlyphContourRepresentationWrap>(info.Holder());
	vtkOrientedGlyphContourRepresentation *native = (vtkOrientedGlyphContourRepresentation *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject())
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

void VtkOrientedGlyphContourRepresentationWrap::RenderTranslucentPolygonalGeometry(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkOrientedGlyphContourRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkOrientedGlyphContourRepresentationWrap>(info.Holder());
	vtkOrientedGlyphContourRepresentation *native = (vtkOrientedGlyphContourRepresentation *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject())
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

void VtkOrientedGlyphContourRepresentationWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkOrientedGlyphContourRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkOrientedGlyphContourRepresentationWrap>(info.Holder());
	vtkOrientedGlyphContourRepresentation *native = (vtkOrientedGlyphContourRepresentation *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject())
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkOrientedGlyphContourRepresentation * r;
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
			Nan::New<v8::Function>(VtkOrientedGlyphContourRepresentationWrap::constructor);
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkOrientedGlyphContourRepresentationWrap *w = new VtkOrientedGlyphContourRepresentationWrap();
		w->native.TakeReference(r);
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkOrientedGlyphContourRepresentationWrap::SetActiveCursorShape(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkOrientedGlyphContourRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkOrientedGlyphContourRepresentationWrap>(info.Holder());
	vtkOrientedGlyphContourRepresentation *native = (vtkOrientedGlyphContourRepresentation *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject())
	{
		VtkPolyDataWrap *a0 = ObjectWrap::Unwrap<VtkPolyDataWrap>(info[0]->ToObject());
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetActiveCursorShape(
			(vtkPolyData *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkOrientedGlyphContourRepresentationWrap::SetAlwaysOnTop(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkOrientedGlyphContourRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkOrientedGlyphContourRepresentationWrap>(info.Holder());
	vtkOrientedGlyphContourRepresentation *native = (vtkOrientedGlyphContourRepresentation *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetAlwaysOnTop(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkOrientedGlyphContourRepresentationWrap::SetCursorShape(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkOrientedGlyphContourRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkOrientedGlyphContourRepresentationWrap>(info.Holder());
	vtkOrientedGlyphContourRepresentation *native = (vtkOrientedGlyphContourRepresentation *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject())
	{
		VtkPolyDataWrap *a0 = ObjectWrap::Unwrap<VtkPolyDataWrap>(info[0]->ToObject());
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetCursorShape(
			(vtkPolyData *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkOrientedGlyphContourRepresentationWrap::SetLineColor(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkOrientedGlyphContourRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkOrientedGlyphContourRepresentationWrap>(info.Holder());
	vtkOrientedGlyphContourRepresentation *native = (vtkOrientedGlyphContourRepresentation *)wrapper->native.GetPointer();
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
				native->SetLineColor(
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

void VtkOrientedGlyphContourRepresentationWrap::SetRenderer(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkOrientedGlyphContourRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkOrientedGlyphContourRepresentationWrap>(info.Holder());
	vtkOrientedGlyphContourRepresentation *native = (vtkOrientedGlyphContourRepresentation *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject())
	{
		VtkRendererWrap *a0 = ObjectWrap::Unwrap<VtkRendererWrap>(info[0]->ToObject());
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetRenderer(
			(vtkRenderer *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkOrientedGlyphContourRepresentationWrap::SetShowSelectedNodes(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkOrientedGlyphContourRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkOrientedGlyphContourRepresentationWrap>(info.Holder());
	vtkOrientedGlyphContourRepresentation *native = (vtkOrientedGlyphContourRepresentation *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetShowSelectedNodes(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

