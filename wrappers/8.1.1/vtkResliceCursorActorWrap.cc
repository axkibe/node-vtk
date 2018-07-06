/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>

#include "vtkProp3DWrap.h"
#include "vtkResliceCursorActorWrap.h"
#include "vtkObjectBaseWrap.h"
#include "vtkResliceCursorPolyDataAlgorithmWrap.h"
#include "vtkViewportWrap.h"
#include "vtkWindowWrap.h"
#include "vtkPropertyWrap.h"
#include "vtkActorWrap.h"
#include "vtkMatrix4x4Wrap.h"
#include "../../plus/plus.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkResliceCursorActorWrap::ptpl;

VtkResliceCursorActorWrap::VtkResliceCursorActorWrap()
{ }

VtkResliceCursorActorWrap::VtkResliceCursorActorWrap(vtkSmartPointer<vtkResliceCursorActor> _native)
{ native = _native; }

VtkResliceCursorActorWrap::~VtkResliceCursorActorWrap()
{ }

void VtkResliceCursorActorWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkResliceCursorActor").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("ResliceCursorActor").ToLocalChecked(), ConstructorGetter);
}

void VtkResliceCursorActorWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkResliceCursorActorWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkProp3DWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkProp3DWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkResliceCursorActorWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "GetCenterlineActor", GetCenterlineActor);
	Nan::SetPrototypeMethod(tpl, "getCenterlineActor", GetCenterlineActor);

	Nan::SetPrototypeMethod(tpl, "GetCenterlineProperty", GetCenterlineProperty);
	Nan::SetPrototypeMethod(tpl, "getCenterlineProperty", GetCenterlineProperty);

	Nan::SetPrototypeMethod(tpl, "GetCursorAlgorithm", GetCursorAlgorithm);
	Nan::SetPrototypeMethod(tpl, "getCursorAlgorithm", GetCursorAlgorithm);

	Nan::SetPrototypeMethod(tpl, "GetThickSlabProperty", GetThickSlabProperty);
	Nan::SetPrototypeMethod(tpl, "getThickSlabProperty", GetThickSlabProperty);

	Nan::SetPrototypeMethod(tpl, "HasTranslucentPolygonalGeometry", HasTranslucentPolygonalGeometry);
	Nan::SetPrototypeMethod(tpl, "hasTranslucentPolygonalGeometry", HasTranslucentPolygonalGeometry);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "ReleaseGraphicsResources", ReleaseGraphicsResources);
	Nan::SetPrototypeMethod(tpl, "releaseGraphicsResources", ReleaseGraphicsResources);

	Nan::SetPrototypeMethod(tpl, "RenderOpaqueGeometry", RenderOpaqueGeometry);
	Nan::SetPrototypeMethod(tpl, "renderOpaqueGeometry", RenderOpaqueGeometry);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetUserMatrix", SetUserMatrix);
	Nan::SetPrototypeMethod(tpl, "setUserMatrix", SetUserMatrix);

#ifdef VTK_NODE_PLUS_VTKRESLICECURSORACTORWRAP_INITPTPL
	VTK_NODE_PLUS_VTKRESLICECURSORACTORWRAP_INITPTPL
#endif
	ptpl.Reset( tpl );
}

void VtkResliceCursorActorWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkResliceCursorActor> native = vtkSmartPointer<vtkResliceCursorActor>::New();
		VtkResliceCursorActorWrap* obj = new VtkResliceCursorActorWrap(native);
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

void VtkResliceCursorActorWrap::GetCenterlineActor(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkResliceCursorActorWrap *wrapper = ObjectWrap::Unwrap<VtkResliceCursorActorWrap>(info.Holder());
	vtkResliceCursorActor *native = (vtkResliceCursorActor *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		vtkActor * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->GetCenterlineActor(
			info[0]->Int32Value()
		);
		VtkActorWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkActorWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkActorWrap *w = new VtkActorWrap();
		w->native = r;
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkResliceCursorActorWrap::GetCenterlineProperty(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkResliceCursorActorWrap *wrapper = ObjectWrap::Unwrap<VtkResliceCursorActorWrap>(info.Holder());
	vtkResliceCursorActor *native = (vtkResliceCursorActor *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		vtkProperty * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->GetCenterlineProperty(
			info[0]->Int32Value()
		);
		VtkPropertyWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkPropertyWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkPropertyWrap *w = new VtkPropertyWrap();
		w->native = r;
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkResliceCursorActorWrap::GetCursorAlgorithm(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkResliceCursorActorWrap *wrapper = ObjectWrap::Unwrap<VtkResliceCursorActorWrap>(info.Holder());
	vtkResliceCursorActor *native = (vtkResliceCursorActor *)wrapper->native.GetPointer();
	vtkResliceCursorPolyDataAlgorithm * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetCursorAlgorithm();
	VtkResliceCursorPolyDataAlgorithmWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkResliceCursorPolyDataAlgorithmWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkResliceCursorPolyDataAlgorithmWrap *w = new VtkResliceCursorPolyDataAlgorithmWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkResliceCursorActorWrap::GetThickSlabProperty(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkResliceCursorActorWrap *wrapper = ObjectWrap::Unwrap<VtkResliceCursorActorWrap>(info.Holder());
	vtkResliceCursorActor *native = (vtkResliceCursorActor *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		vtkProperty * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->GetThickSlabProperty(
			info[0]->Int32Value()
		);
		VtkPropertyWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkPropertyWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkPropertyWrap *w = new VtkPropertyWrap();
		w->native = r;
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkResliceCursorActorWrap::HasTranslucentPolygonalGeometry(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkResliceCursorActorWrap *wrapper = ObjectWrap::Unwrap<VtkResliceCursorActorWrap>(info.Holder());
	vtkResliceCursorActor *native = (vtkResliceCursorActor *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->HasTranslucentPolygonalGeometry();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkResliceCursorActorWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkResliceCursorActorWrap *wrapper = ObjectWrap::Unwrap<VtkResliceCursorActorWrap>(info.Holder());
	vtkResliceCursorActor *native = (vtkResliceCursorActor *)wrapper->native.GetPointer();
	vtkResliceCursorActor * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
	VtkResliceCursorActorWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkResliceCursorActorWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkResliceCursorActorWrap *w = new VtkResliceCursorActorWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkResliceCursorActorWrap::ReleaseGraphicsResources(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkResliceCursorActorWrap *wrapper = ObjectWrap::Unwrap<VtkResliceCursorActorWrap>(info.Holder());
	vtkResliceCursorActor *native = (vtkResliceCursorActor *)wrapper->native.GetPointer();
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

void VtkResliceCursorActorWrap::RenderOpaqueGeometry(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkResliceCursorActorWrap *wrapper = ObjectWrap::Unwrap<VtkResliceCursorActorWrap>(info.Holder());
	vtkResliceCursorActor *native = (vtkResliceCursorActor *)wrapper->native.GetPointer();
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

void VtkResliceCursorActorWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkResliceCursorActorWrap *wrapper = ObjectWrap::Unwrap<VtkResliceCursorActorWrap>(info.Holder());
	vtkResliceCursorActor *native = (vtkResliceCursorActor *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectBaseWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectBaseWrap *a0 = ObjectWrap::Unwrap<VtkObjectBaseWrap>(info[0]->ToObject());
		vtkResliceCursorActor * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObjectBase *) a0->native.GetPointer()
		);
		VtkResliceCursorActorWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkResliceCursorActorWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkResliceCursorActorWrap *w = new VtkResliceCursorActorWrap();
		w->native = r;
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkResliceCursorActorWrap::SetUserMatrix(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkResliceCursorActorWrap *wrapper = ObjectWrap::Unwrap<VtkResliceCursorActorWrap>(info.Holder());
	vtkResliceCursorActor *native = (vtkResliceCursorActor *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkMatrix4x4Wrap::ptpl))->HasInstance(info[0]))
	{
		VtkMatrix4x4Wrap *a0 = ObjectWrap::Unwrap<VtkMatrix4x4Wrap>(info[0]->ToObject());
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetUserMatrix(
			(vtkMatrix4x4 *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

