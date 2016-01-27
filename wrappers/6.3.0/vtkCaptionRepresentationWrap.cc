/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkBorderRepresentationWrap.h"
#include "vtkCaptionRepresentationWrap.h"
#include "vtkObjectWrap.h"
#include "vtkCaptionActor2DWrap.h"
#include "vtkPointHandleRepresentation3DWrap.h"
#include "vtkPropCollectionWrap.h"
#include "vtkWindowWrap.h"
#include "vtkViewportWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkCaptionRepresentationWrap::ptpl;

VtkCaptionRepresentationWrap::VtkCaptionRepresentationWrap()
{ }

VtkCaptionRepresentationWrap::VtkCaptionRepresentationWrap(vtkSmartPointer<vtkCaptionRepresentation> _native)
{ native = _native; }

VtkCaptionRepresentationWrap::~VtkCaptionRepresentationWrap()
{ }

void VtkCaptionRepresentationWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkCaptionRepresentation").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("CaptionRepresentation").ToLocalChecked(), ConstructorGetter);
}

void VtkCaptionRepresentationWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkCaptionRepresentationWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkBorderRepresentationWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkBorderRepresentationWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkCaptionRepresentationWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "BuildRepresentation", BuildRepresentation);
	Nan::SetPrototypeMethod(tpl, "buildRepresentation", BuildRepresentation);

	Nan::SetPrototypeMethod(tpl, "GetActors2D", GetActors2D);
	Nan::SetPrototypeMethod(tpl, "getActors2D", GetActors2D);

	Nan::SetPrototypeMethod(tpl, "GetAnchorRepresentation", GetAnchorRepresentation);
	Nan::SetPrototypeMethod(tpl, "getAnchorRepresentation", GetAnchorRepresentation);

	Nan::SetPrototypeMethod(tpl, "GetCaptionActor2D", GetCaptionActor2D);
	Nan::SetPrototypeMethod(tpl, "getCaptionActor2D", GetCaptionActor2D);

	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "GetFontFactor", GetFontFactor);
	Nan::SetPrototypeMethod(tpl, "getFontFactor", GetFontFactor);

	Nan::SetPrototypeMethod(tpl, "GetFontFactorMaxValue", GetFontFactorMaxValue);
	Nan::SetPrototypeMethod(tpl, "getFontFactorMaxValue", GetFontFactorMaxValue);

	Nan::SetPrototypeMethod(tpl, "GetFontFactorMinValue", GetFontFactorMinValue);
	Nan::SetPrototypeMethod(tpl, "getFontFactorMinValue", GetFontFactorMinValue);

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

	Nan::SetPrototypeMethod(tpl, "SetAnchorRepresentation", SetAnchorRepresentation);
	Nan::SetPrototypeMethod(tpl, "setAnchorRepresentation", SetAnchorRepresentation);

	Nan::SetPrototypeMethod(tpl, "SetCaptionActor2D", SetCaptionActor2D);
	Nan::SetPrototypeMethod(tpl, "setCaptionActor2D", SetCaptionActor2D);

	Nan::SetPrototypeMethod(tpl, "SetFontFactor", SetFontFactor);
	Nan::SetPrototypeMethod(tpl, "setFontFactor", SetFontFactor);

	ptpl.Reset( tpl );
}

void VtkCaptionRepresentationWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkCaptionRepresentation> native = vtkSmartPointer<vtkCaptionRepresentation>::New();
		VtkCaptionRepresentationWrap* obj = new VtkCaptionRepresentationWrap(native);		obj->Wrap(info.This());
	}
	else
	{
		Nan::Utf8String s(info[0]);
		if(info[0]->ToObject() != vtkNodeJsNoWrap )
			Nan::ThrowError("Parameter Error");
	}

	info.GetReturnValue().Set(info.This());
}

void VtkCaptionRepresentationWrap::BuildRepresentation(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCaptionRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkCaptionRepresentationWrap>(info.Holder());
	vtkCaptionRepresentation *native = (vtkCaptionRepresentation *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->BuildRepresentation();
}

void VtkCaptionRepresentationWrap::GetActors2D(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCaptionRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkCaptionRepresentationWrap>(info.Holder());
	vtkCaptionRepresentation *native = (vtkCaptionRepresentation *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkPropCollectionWrap::ptpl))->HasInstance(info[0]))
	{
		VtkPropCollectionWrap *a0 = ObjectWrap::Unwrap<VtkPropCollectionWrap>(info[0]->ToObject());
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->GetActors2D(
			(vtkPropCollection *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkCaptionRepresentationWrap::GetAnchorRepresentation(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCaptionRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkCaptionRepresentationWrap>(info.Holder());
	vtkCaptionRepresentation *native = (vtkCaptionRepresentation *)wrapper->native.GetPointer();
	vtkPointHandleRepresentation3D * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetAnchorRepresentation();
		VtkPointHandleRepresentation3DWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkPointHandleRepresentation3DWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkPointHandleRepresentation3DWrap *w = new VtkPointHandleRepresentation3DWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkCaptionRepresentationWrap::GetCaptionActor2D(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCaptionRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkCaptionRepresentationWrap>(info.Holder());
	vtkCaptionRepresentation *native = (vtkCaptionRepresentation *)wrapper->native.GetPointer();
	vtkCaptionActor2D * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetCaptionActor2D();
		VtkCaptionActor2DWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkCaptionActor2DWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkCaptionActor2DWrap *w = new VtkCaptionActor2DWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkCaptionRepresentationWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCaptionRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkCaptionRepresentationWrap>(info.Holder());
	vtkCaptionRepresentation *native = (vtkCaptionRepresentation *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkCaptionRepresentationWrap::GetFontFactor(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCaptionRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkCaptionRepresentationWrap>(info.Holder());
	vtkCaptionRepresentation *native = (vtkCaptionRepresentation *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetFontFactor();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkCaptionRepresentationWrap::GetFontFactorMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCaptionRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkCaptionRepresentationWrap>(info.Holder());
	vtkCaptionRepresentation *native = (vtkCaptionRepresentation *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetFontFactorMaxValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkCaptionRepresentationWrap::GetFontFactorMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCaptionRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkCaptionRepresentationWrap>(info.Holder());
	vtkCaptionRepresentation *native = (vtkCaptionRepresentation *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetFontFactorMinValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkCaptionRepresentationWrap::HasTranslucentPolygonalGeometry(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCaptionRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkCaptionRepresentationWrap>(info.Holder());
	vtkCaptionRepresentation *native = (vtkCaptionRepresentation *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->HasTranslucentPolygonalGeometry();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkCaptionRepresentationWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCaptionRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkCaptionRepresentationWrap>(info.Holder());
	vtkCaptionRepresentation *native = (vtkCaptionRepresentation *)wrapper->native.GetPointer();
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

void VtkCaptionRepresentationWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCaptionRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkCaptionRepresentationWrap>(info.Holder());
	vtkCaptionRepresentation *native = (vtkCaptionRepresentation *)wrapper->native.GetPointer();
	vtkCaptionRepresentation * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
		VtkCaptionRepresentationWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkCaptionRepresentationWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkCaptionRepresentationWrap *w = new VtkCaptionRepresentationWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkCaptionRepresentationWrap::ReleaseGraphicsResources(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCaptionRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkCaptionRepresentationWrap>(info.Holder());
	vtkCaptionRepresentation *native = (vtkCaptionRepresentation *)wrapper->native.GetPointer();
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

void VtkCaptionRepresentationWrap::RenderOpaqueGeometry(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCaptionRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkCaptionRepresentationWrap>(info.Holder());
	vtkCaptionRepresentation *native = (vtkCaptionRepresentation *)wrapper->native.GetPointer();
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

void VtkCaptionRepresentationWrap::RenderOverlay(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCaptionRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkCaptionRepresentationWrap>(info.Holder());
	vtkCaptionRepresentation *native = (vtkCaptionRepresentation *)wrapper->native.GetPointer();
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

void VtkCaptionRepresentationWrap::RenderTranslucentPolygonalGeometry(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCaptionRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkCaptionRepresentationWrap>(info.Holder());
	vtkCaptionRepresentation *native = (vtkCaptionRepresentation *)wrapper->native.GetPointer();
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

void VtkCaptionRepresentationWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCaptionRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkCaptionRepresentationWrap>(info.Holder());
	vtkCaptionRepresentation *native = (vtkCaptionRepresentation *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkCaptionRepresentation * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObject *) a0->native.GetPointer()
		);
			VtkCaptionRepresentationWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkCaptionRepresentationWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkCaptionRepresentationWrap *w = new VtkCaptionRepresentationWrap();
		w->native.TakeReference(r);
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkCaptionRepresentationWrap::SetAnchorRepresentation(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCaptionRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkCaptionRepresentationWrap>(info.Holder());
	vtkCaptionRepresentation *native = (vtkCaptionRepresentation *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkPointHandleRepresentation3DWrap::ptpl))->HasInstance(info[0]))
	{
		VtkPointHandleRepresentation3DWrap *a0 = ObjectWrap::Unwrap<VtkPointHandleRepresentation3DWrap>(info[0]->ToObject());
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetAnchorRepresentation(
			(vtkPointHandleRepresentation3D *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkCaptionRepresentationWrap::SetCaptionActor2D(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCaptionRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkCaptionRepresentationWrap>(info.Holder());
	vtkCaptionRepresentation *native = (vtkCaptionRepresentation *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkCaptionActor2DWrap::ptpl))->HasInstance(info[0]))
	{
		VtkCaptionActor2DWrap *a0 = ObjectWrap::Unwrap<VtkCaptionActor2DWrap>(info[0]->ToObject());
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetCaptionActor2D(
			(vtkCaptionActor2D *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkCaptionRepresentationWrap::SetFontFactor(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCaptionRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkCaptionRepresentationWrap>(info.Holder());
	vtkCaptionRepresentation *native = (vtkCaptionRepresentation *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsNumber())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetFontFactor(
			info[0]->NumberValue()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

