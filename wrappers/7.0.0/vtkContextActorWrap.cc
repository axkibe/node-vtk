/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>

#include "vtkPropWrap.h"
#include "vtkContextActorWrap.h"
#include "vtkObjectWrap.h"
#include "vtkViewportWrap.h"
#include "vtkContext2DWrap.h"
#include "vtkContextSceneWrap.h"
#include "vtkWindowWrap.h"
#include "../../plus/plus.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkContextActorWrap::ptpl;

VtkContextActorWrap::VtkContextActorWrap()
{ }

VtkContextActorWrap::VtkContextActorWrap(vtkSmartPointer<vtkContextActor> _native)
{ native = _native; }

VtkContextActorWrap::~VtkContextActorWrap()
{ }

void VtkContextActorWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkContextActor").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("ContextActor").ToLocalChecked(), ConstructorGetter);
}

void VtkContextActorWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkContextActorWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkPropWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkPropWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkContextActorWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "GetContext", GetContext);
	Nan::SetPrototypeMethod(tpl, "getContext", GetContext);

	Nan::SetPrototypeMethod(tpl, "GetScene", GetScene);
	Nan::SetPrototypeMethod(tpl, "getScene", GetScene);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "ReleaseGraphicsResources", ReleaseGraphicsResources);
	Nan::SetPrototypeMethod(tpl, "releaseGraphicsResources", ReleaseGraphicsResources);

	Nan::SetPrototypeMethod(tpl, "RenderOverlay", RenderOverlay);
	Nan::SetPrototypeMethod(tpl, "renderOverlay", RenderOverlay);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetScene", SetScene);
	Nan::SetPrototypeMethod(tpl, "setScene", SetScene);

#ifdef VTK_NODE_PLUS_VTKCONTEXTACTORWRAP_INITPTPL
	VTK_NODE_PLUS_VTKCONTEXTACTORWRAP_INITPTPL
#endif
	ptpl.Reset( tpl );
}

void VtkContextActorWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkContextActor> native = vtkSmartPointer<vtkContextActor>::New();
		VtkContextActorWrap* obj = new VtkContextActorWrap(native);
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

void VtkContextActorWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkContextActorWrap *wrapper = ObjectWrap::Unwrap<VtkContextActorWrap>(info.Holder());
	vtkContextActor *native = (vtkContextActor *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkContextActorWrap::GetContext(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkContextActorWrap *wrapper = ObjectWrap::Unwrap<VtkContextActorWrap>(info.Holder());
	vtkContextActor *native = (vtkContextActor *)wrapper->native.GetPointer();
	vtkContext2D * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetContext();
	VtkContext2DWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkContext2DWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkContext2DWrap *w = new VtkContext2DWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkContextActorWrap::GetScene(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkContextActorWrap *wrapper = ObjectWrap::Unwrap<VtkContextActorWrap>(info.Holder());
	vtkContextActor *native = (vtkContextActor *)wrapper->native.GetPointer();
	vtkContextScene * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetScene();
	VtkContextSceneWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkContextSceneWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkContextSceneWrap *w = new VtkContextSceneWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkContextActorWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkContextActorWrap *wrapper = ObjectWrap::Unwrap<VtkContextActorWrap>(info.Holder());
	vtkContextActor *native = (vtkContextActor *)wrapper->native.GetPointer();
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

void VtkContextActorWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkContextActorWrap *wrapper = ObjectWrap::Unwrap<VtkContextActorWrap>(info.Holder());
	vtkContextActor *native = (vtkContextActor *)wrapper->native.GetPointer();
	vtkContextActor * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
	VtkContextActorWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkContextActorWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkContextActorWrap *w = new VtkContextActorWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkContextActorWrap::ReleaseGraphicsResources(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkContextActorWrap *wrapper = ObjectWrap::Unwrap<VtkContextActorWrap>(info.Holder());
	vtkContextActor *native = (vtkContextActor *)wrapper->native.GetPointer();
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

void VtkContextActorWrap::RenderOverlay(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkContextActorWrap *wrapper = ObjectWrap::Unwrap<VtkContextActorWrap>(info.Holder());
	vtkContextActor *native = (vtkContextActor *)wrapper->native.GetPointer();
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

void VtkContextActorWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkContextActorWrap *wrapper = ObjectWrap::Unwrap<VtkContextActorWrap>(info.Holder());
	vtkContextActor *native = (vtkContextActor *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkContextActor * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObject *) a0->native.GetPointer()
		);
		VtkContextActorWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkContextActorWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkContextActorWrap *w = new VtkContextActorWrap();
		w->native = r;
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkContextActorWrap::SetScene(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkContextActorWrap *wrapper = ObjectWrap::Unwrap<VtkContextActorWrap>(info.Holder());
	vtkContextActor *native = (vtkContextActor *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkContextSceneWrap::ptpl))->HasInstance(info[0]))
	{
		VtkContextSceneWrap *a0 = ObjectWrap::Unwrap<VtkContextSceneWrap>(info[0]->ToObject());
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetScene(
			(vtkContextScene *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

