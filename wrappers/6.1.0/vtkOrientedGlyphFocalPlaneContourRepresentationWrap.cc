/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkFocalPlaneContourRepresentationWrap.h"
#include "vtkOrientedGlyphFocalPlaneContourRepresentationWrap.h"
#include "vtkObjectWrap.h"
#include "vtkPolyDataWrap.h"
#include "vtkProperty2DWrap.h"
#include "vtkRendererWrap.h"
#include "vtkPropCollectionWrap.h"
#include "vtkWindowWrap.h"
#include "vtkViewportWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkOrientedGlyphFocalPlaneContourRepresentationWrap::ptpl;

VtkOrientedGlyphFocalPlaneContourRepresentationWrap::VtkOrientedGlyphFocalPlaneContourRepresentationWrap()
{ }

VtkOrientedGlyphFocalPlaneContourRepresentationWrap::VtkOrientedGlyphFocalPlaneContourRepresentationWrap(vtkSmartPointer<vtkOrientedGlyphFocalPlaneContourRepresentation> _native)
{ native = _native; }

VtkOrientedGlyphFocalPlaneContourRepresentationWrap::~VtkOrientedGlyphFocalPlaneContourRepresentationWrap()
{ }

void VtkOrientedGlyphFocalPlaneContourRepresentationWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkOrientedGlyphFocalPlaneContourRepresentation").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("OrientedGlyphFocalPlaneContourRepresentation").ToLocalChecked(), ConstructorGetter);
}

void VtkOrientedGlyphFocalPlaneContourRepresentationWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkOrientedGlyphFocalPlaneContourRepresentationWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkFocalPlaneContourRepresentationWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkFocalPlaneContourRepresentationWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkOrientedGlyphFocalPlaneContourRepresentationWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "BuildRepresentation", BuildRepresentation);
	Nan::SetPrototypeMethod(tpl, "buildRepresentation", BuildRepresentation);

	Nan::SetPrototypeMethod(tpl, "ComputeInteractionState", ComputeInteractionState);
	Nan::SetPrototypeMethod(tpl, "computeInteractionState", ComputeInteractionState);

	Nan::SetPrototypeMethod(tpl, "GetActiveCursorShape", GetActiveCursorShape);
	Nan::SetPrototypeMethod(tpl, "getActiveCursorShape", GetActiveCursorShape);

	Nan::SetPrototypeMethod(tpl, "GetActiveProperty", GetActiveProperty);
	Nan::SetPrototypeMethod(tpl, "getActiveProperty", GetActiveProperty);

	Nan::SetPrototypeMethod(tpl, "GetActors2D", GetActors2D);
	Nan::SetPrototypeMethod(tpl, "getActors2D", GetActors2D);

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

	Nan::SetPrototypeMethod(tpl, "SetCursorShape", SetCursorShape);
	Nan::SetPrototypeMethod(tpl, "setCursorShape", SetCursorShape);

	Nan::SetPrototypeMethod(tpl, "SetRenderer", SetRenderer);
	Nan::SetPrototypeMethod(tpl, "setRenderer", SetRenderer);

	ptpl.Reset( tpl );
}

void VtkOrientedGlyphFocalPlaneContourRepresentationWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkOrientedGlyphFocalPlaneContourRepresentation> native = vtkSmartPointer<vtkOrientedGlyphFocalPlaneContourRepresentation>::New();
		VtkOrientedGlyphFocalPlaneContourRepresentationWrap* obj = new VtkOrientedGlyphFocalPlaneContourRepresentationWrap(native);		obj->Wrap(info.This());
	}
	else
	{
		Nan::Utf8String s(info[0]);
		if(info[0]->ToObject() != vtkNodeJsNoWrap )
			Nan::ThrowError("Parameter Error");
	}

	info.GetReturnValue().Set(info.This());
}

void VtkOrientedGlyphFocalPlaneContourRepresentationWrap::BuildRepresentation(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkOrientedGlyphFocalPlaneContourRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkOrientedGlyphFocalPlaneContourRepresentationWrap>(info.Holder());
	vtkOrientedGlyphFocalPlaneContourRepresentation *native = (vtkOrientedGlyphFocalPlaneContourRepresentation *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->BuildRepresentation();
}

void VtkOrientedGlyphFocalPlaneContourRepresentationWrap::ComputeInteractionState(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkOrientedGlyphFocalPlaneContourRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkOrientedGlyphFocalPlaneContourRepresentationWrap>(info.Holder());
	vtkOrientedGlyphFocalPlaneContourRepresentation *native = (vtkOrientedGlyphFocalPlaneContourRepresentation *)wrapper->native.GetPointer();
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

void VtkOrientedGlyphFocalPlaneContourRepresentationWrap::GetActiveCursorShape(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkOrientedGlyphFocalPlaneContourRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkOrientedGlyphFocalPlaneContourRepresentationWrap>(info.Holder());
	vtkOrientedGlyphFocalPlaneContourRepresentation *native = (vtkOrientedGlyphFocalPlaneContourRepresentation *)wrapper->native.GetPointer();
	vtkPolyData * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetActiveCursorShape();
		VtkPolyDataWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkPolyDataWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkPolyDataWrap *w = new VtkPolyDataWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkOrientedGlyphFocalPlaneContourRepresentationWrap::GetActiveProperty(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkOrientedGlyphFocalPlaneContourRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkOrientedGlyphFocalPlaneContourRepresentationWrap>(info.Holder());
	vtkOrientedGlyphFocalPlaneContourRepresentation *native = (vtkOrientedGlyphFocalPlaneContourRepresentation *)wrapper->native.GetPointer();
	vtkProperty2D * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetActiveProperty();
		VtkProperty2DWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkProperty2DWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkProperty2DWrap *w = new VtkProperty2DWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkOrientedGlyphFocalPlaneContourRepresentationWrap::GetActors2D(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkOrientedGlyphFocalPlaneContourRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkOrientedGlyphFocalPlaneContourRepresentationWrap>(info.Holder());
	vtkOrientedGlyphFocalPlaneContourRepresentation *native = (vtkOrientedGlyphFocalPlaneContourRepresentation *)wrapper->native.GetPointer();
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

void VtkOrientedGlyphFocalPlaneContourRepresentationWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkOrientedGlyphFocalPlaneContourRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkOrientedGlyphFocalPlaneContourRepresentationWrap>(info.Holder());
	vtkOrientedGlyphFocalPlaneContourRepresentation *native = (vtkOrientedGlyphFocalPlaneContourRepresentation *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkOrientedGlyphFocalPlaneContourRepresentationWrap::GetContourRepresentationAsPolyData(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkOrientedGlyphFocalPlaneContourRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkOrientedGlyphFocalPlaneContourRepresentationWrap>(info.Holder());
	vtkOrientedGlyphFocalPlaneContourRepresentation *native = (vtkOrientedGlyphFocalPlaneContourRepresentation *)wrapper->native.GetPointer();
	vtkPolyData * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetContourRepresentationAsPolyData();
		VtkPolyDataWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkPolyDataWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkPolyDataWrap *w = new VtkPolyDataWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkOrientedGlyphFocalPlaneContourRepresentationWrap::GetCursorShape(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkOrientedGlyphFocalPlaneContourRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkOrientedGlyphFocalPlaneContourRepresentationWrap>(info.Holder());
	vtkOrientedGlyphFocalPlaneContourRepresentation *native = (vtkOrientedGlyphFocalPlaneContourRepresentation *)wrapper->native.GetPointer();
	vtkPolyData * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetCursorShape();
		VtkPolyDataWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkPolyDataWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkPolyDataWrap *w = new VtkPolyDataWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkOrientedGlyphFocalPlaneContourRepresentationWrap::GetLinesProperty(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkOrientedGlyphFocalPlaneContourRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkOrientedGlyphFocalPlaneContourRepresentationWrap>(info.Holder());
	vtkOrientedGlyphFocalPlaneContourRepresentation *native = (vtkOrientedGlyphFocalPlaneContourRepresentation *)wrapper->native.GetPointer();
	vtkProperty2D * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetLinesProperty();
		VtkProperty2DWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkProperty2DWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkProperty2DWrap *w = new VtkProperty2DWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkOrientedGlyphFocalPlaneContourRepresentationWrap::GetProperty(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkOrientedGlyphFocalPlaneContourRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkOrientedGlyphFocalPlaneContourRepresentationWrap>(info.Holder());
	vtkOrientedGlyphFocalPlaneContourRepresentation *native = (vtkOrientedGlyphFocalPlaneContourRepresentation *)wrapper->native.GetPointer();
	vtkProperty2D * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetProperty();
		VtkProperty2DWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkProperty2DWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkProperty2DWrap *w = new VtkProperty2DWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkOrientedGlyphFocalPlaneContourRepresentationWrap::HasTranslucentPolygonalGeometry(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkOrientedGlyphFocalPlaneContourRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkOrientedGlyphFocalPlaneContourRepresentationWrap>(info.Holder());
	vtkOrientedGlyphFocalPlaneContourRepresentation *native = (vtkOrientedGlyphFocalPlaneContourRepresentation *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->HasTranslucentPolygonalGeometry();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkOrientedGlyphFocalPlaneContourRepresentationWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkOrientedGlyphFocalPlaneContourRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkOrientedGlyphFocalPlaneContourRepresentationWrap>(info.Holder());
	vtkOrientedGlyphFocalPlaneContourRepresentation *native = (vtkOrientedGlyphFocalPlaneContourRepresentation *)wrapper->native.GetPointer();
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

void VtkOrientedGlyphFocalPlaneContourRepresentationWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkOrientedGlyphFocalPlaneContourRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkOrientedGlyphFocalPlaneContourRepresentationWrap>(info.Holder());
	vtkOrientedGlyphFocalPlaneContourRepresentation *native = (vtkOrientedGlyphFocalPlaneContourRepresentation *)wrapper->native.GetPointer();
	vtkOrientedGlyphFocalPlaneContourRepresentation * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
		VtkOrientedGlyphFocalPlaneContourRepresentationWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkOrientedGlyphFocalPlaneContourRepresentationWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkOrientedGlyphFocalPlaneContourRepresentationWrap *w = new VtkOrientedGlyphFocalPlaneContourRepresentationWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkOrientedGlyphFocalPlaneContourRepresentationWrap::ReleaseGraphicsResources(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkOrientedGlyphFocalPlaneContourRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkOrientedGlyphFocalPlaneContourRepresentationWrap>(info.Holder());
	vtkOrientedGlyphFocalPlaneContourRepresentation *native = (vtkOrientedGlyphFocalPlaneContourRepresentation *)wrapper->native.GetPointer();
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

void VtkOrientedGlyphFocalPlaneContourRepresentationWrap::RenderOpaqueGeometry(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkOrientedGlyphFocalPlaneContourRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkOrientedGlyphFocalPlaneContourRepresentationWrap>(info.Holder());
	vtkOrientedGlyphFocalPlaneContourRepresentation *native = (vtkOrientedGlyphFocalPlaneContourRepresentation *)wrapper->native.GetPointer();
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

void VtkOrientedGlyphFocalPlaneContourRepresentationWrap::RenderOverlay(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkOrientedGlyphFocalPlaneContourRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkOrientedGlyphFocalPlaneContourRepresentationWrap>(info.Holder());
	vtkOrientedGlyphFocalPlaneContourRepresentation *native = (vtkOrientedGlyphFocalPlaneContourRepresentation *)wrapper->native.GetPointer();
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

void VtkOrientedGlyphFocalPlaneContourRepresentationWrap::RenderTranslucentPolygonalGeometry(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkOrientedGlyphFocalPlaneContourRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkOrientedGlyphFocalPlaneContourRepresentationWrap>(info.Holder());
	vtkOrientedGlyphFocalPlaneContourRepresentation *native = (vtkOrientedGlyphFocalPlaneContourRepresentation *)wrapper->native.GetPointer();
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

void VtkOrientedGlyphFocalPlaneContourRepresentationWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkOrientedGlyphFocalPlaneContourRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkOrientedGlyphFocalPlaneContourRepresentationWrap>(info.Holder());
	vtkOrientedGlyphFocalPlaneContourRepresentation *native = (vtkOrientedGlyphFocalPlaneContourRepresentation *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkOrientedGlyphFocalPlaneContourRepresentation * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObject *) a0->native.GetPointer()
		);
			VtkOrientedGlyphFocalPlaneContourRepresentationWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkOrientedGlyphFocalPlaneContourRepresentationWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkOrientedGlyphFocalPlaneContourRepresentationWrap *w = new VtkOrientedGlyphFocalPlaneContourRepresentationWrap();
		w->native.TakeReference(r);
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkOrientedGlyphFocalPlaneContourRepresentationWrap::SetActiveCursorShape(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkOrientedGlyphFocalPlaneContourRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkOrientedGlyphFocalPlaneContourRepresentationWrap>(info.Holder());
	vtkOrientedGlyphFocalPlaneContourRepresentation *native = (vtkOrientedGlyphFocalPlaneContourRepresentation *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkPolyDataWrap::ptpl))->HasInstance(info[0]))
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

void VtkOrientedGlyphFocalPlaneContourRepresentationWrap::SetCursorShape(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkOrientedGlyphFocalPlaneContourRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkOrientedGlyphFocalPlaneContourRepresentationWrap>(info.Holder());
	vtkOrientedGlyphFocalPlaneContourRepresentation *native = (vtkOrientedGlyphFocalPlaneContourRepresentation *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkPolyDataWrap::ptpl))->HasInstance(info[0]))
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

void VtkOrientedGlyphFocalPlaneContourRepresentationWrap::SetRenderer(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkOrientedGlyphFocalPlaneContourRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkOrientedGlyphFocalPlaneContourRepresentationWrap>(info.Holder());
	vtkOrientedGlyphFocalPlaneContourRepresentation *native = (vtkOrientedGlyphFocalPlaneContourRepresentation *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkRendererWrap::ptpl))->HasInstance(info[0]))
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

