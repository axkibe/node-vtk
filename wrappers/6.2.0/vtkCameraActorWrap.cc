/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkProp3DWrap.h"
#include "vtkCameraActorWrap.h"
#include "vtkObjectWrap.h"
#include "vtkCameraWrap.h"
#include "vtkViewportWrap.h"
#include "vtkWindowWrap.h"
#include "vtkPropertyWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkCameraActorWrap::ptpl;

VtkCameraActorWrap::VtkCameraActorWrap()
{ }

VtkCameraActorWrap::VtkCameraActorWrap(vtkSmartPointer<vtkCameraActor> _native)
{ native = _native; }

VtkCameraActorWrap::~VtkCameraActorWrap()
{ }

void VtkCameraActorWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkCameraActor").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("CameraActor").ToLocalChecked(), ConstructorGetter);
}

void VtkCameraActorWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkCameraActorWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkProp3DWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkProp3DWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkCameraActorWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "GetCamera", GetCamera);
	Nan::SetPrototypeMethod(tpl, "getCamera", GetCamera);

	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "GetProperty", GetProperty);
	Nan::SetPrototypeMethod(tpl, "getProperty", GetProperty);

	Nan::SetPrototypeMethod(tpl, "GetWidthByHeightRatio", GetWidthByHeightRatio);
	Nan::SetPrototypeMethod(tpl, "getWidthByHeightRatio", GetWidthByHeightRatio);

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

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetCamera", SetCamera);
	Nan::SetPrototypeMethod(tpl, "setCamera", SetCamera);

	Nan::SetPrototypeMethod(tpl, "SetProperty", SetProperty);
	Nan::SetPrototypeMethod(tpl, "setProperty", SetProperty);

	Nan::SetPrototypeMethod(tpl, "SetWidthByHeightRatio", SetWidthByHeightRatio);
	Nan::SetPrototypeMethod(tpl, "setWidthByHeightRatio", SetWidthByHeightRatio);

	ptpl.Reset( tpl );
}

void VtkCameraActorWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkCameraActor> native = vtkSmartPointer<vtkCameraActor>::New();
		VtkCameraActorWrap* obj = new VtkCameraActorWrap(native);		obj->Wrap(info.This());
	}
	else
	{
		if(info[0]->ToObject() != vtkNodeJsNoWrap )
			Nan::ThrowError("Parameter Error");
	}

	info.GetReturnValue().Set(info.This());
}

void VtkCameraActorWrap::GetCamera(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCameraActorWrap *wrapper = ObjectWrap::Unwrap<VtkCameraActorWrap>(info.Holder());
	vtkCameraActor *native = (vtkCameraActor *)wrapper->native.GetPointer();
	vtkCamera * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetCamera();
		VtkCameraWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkCameraWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkCameraWrap *w = new VtkCameraWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkCameraActorWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCameraActorWrap *wrapper = ObjectWrap::Unwrap<VtkCameraActorWrap>(info.Holder());
	vtkCameraActor *native = (vtkCameraActor *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkCameraActorWrap::GetProperty(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCameraActorWrap *wrapper = ObjectWrap::Unwrap<VtkCameraActorWrap>(info.Holder());
	vtkCameraActor *native = (vtkCameraActor *)wrapper->native.GetPointer();
	vtkProperty * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetProperty();
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
}

void VtkCameraActorWrap::GetWidthByHeightRatio(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCameraActorWrap *wrapper = ObjectWrap::Unwrap<VtkCameraActorWrap>(info.Holder());
	vtkCameraActor *native = (vtkCameraActor *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetWidthByHeightRatio();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkCameraActorWrap::HasTranslucentPolygonalGeometry(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCameraActorWrap *wrapper = ObjectWrap::Unwrap<VtkCameraActorWrap>(info.Holder());
	vtkCameraActor *native = (vtkCameraActor *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->HasTranslucentPolygonalGeometry();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkCameraActorWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCameraActorWrap *wrapper = ObjectWrap::Unwrap<VtkCameraActorWrap>(info.Holder());
	vtkCameraActor *native = (vtkCameraActor *)wrapper->native.GetPointer();
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

void VtkCameraActorWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCameraActorWrap *wrapper = ObjectWrap::Unwrap<VtkCameraActorWrap>(info.Holder());
	vtkCameraActor *native = (vtkCameraActor *)wrapper->native.GetPointer();
	vtkCameraActor * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
		VtkCameraActorWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkCameraActorWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkCameraActorWrap *w = new VtkCameraActorWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkCameraActorWrap::ReleaseGraphicsResources(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCameraActorWrap *wrapper = ObjectWrap::Unwrap<VtkCameraActorWrap>(info.Holder());
	vtkCameraActor *native = (vtkCameraActor *)wrapper->native.GetPointer();
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

void VtkCameraActorWrap::RenderOpaqueGeometry(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCameraActorWrap *wrapper = ObjectWrap::Unwrap<VtkCameraActorWrap>(info.Holder());
	vtkCameraActor *native = (vtkCameraActor *)wrapper->native.GetPointer();
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

void VtkCameraActorWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCameraActorWrap *wrapper = ObjectWrap::Unwrap<VtkCameraActorWrap>(info.Holder());
	vtkCameraActor *native = (vtkCameraActor *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkCameraActor * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObject *) a0->native.GetPointer()
		);
			VtkCameraActorWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkCameraActorWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkCameraActorWrap *w = new VtkCameraActorWrap();
		w->native = r;
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkCameraActorWrap::SetCamera(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCameraActorWrap *wrapper = ObjectWrap::Unwrap<VtkCameraActorWrap>(info.Holder());
	vtkCameraActor *native = (vtkCameraActor *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkCameraWrap::ptpl))->HasInstance(info[0]))
	{
		VtkCameraWrap *a0 = ObjectWrap::Unwrap<VtkCameraWrap>(info[0]->ToObject());
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetCamera(
			(vtkCamera *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkCameraActorWrap::SetProperty(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCameraActorWrap *wrapper = ObjectWrap::Unwrap<VtkCameraActorWrap>(info.Holder());
	vtkCameraActor *native = (vtkCameraActor *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkPropertyWrap::ptpl))->HasInstance(info[0]))
	{
		VtkPropertyWrap *a0 = ObjectWrap::Unwrap<VtkPropertyWrap>(info[0]->ToObject());
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetProperty(
			(vtkProperty *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkCameraActorWrap::SetWidthByHeightRatio(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCameraActorWrap *wrapper = ObjectWrap::Unwrap<VtkCameraActorWrap>(info.Holder());
	vtkCameraActor *native = (vtkCameraActor *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsNumber())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetWidthByHeightRatio(
			info[0]->NumberValue()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}
