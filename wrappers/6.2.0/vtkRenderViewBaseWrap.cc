/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>

#include "vtkViewWrap.h"
#include "vtkRenderViewBaseWrap.h"
#include "vtkObjectWrap.h"
#include "vtkRendererWrap.h"
#include "vtkRenderWindowWrap.h"
#include "vtkRenderWindowInteractorWrap.h"
#include "../../plus/plus.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkRenderViewBaseWrap::ptpl;

VtkRenderViewBaseWrap::VtkRenderViewBaseWrap()
{ }

VtkRenderViewBaseWrap::VtkRenderViewBaseWrap(vtkSmartPointer<vtkRenderViewBase> _native)
{ native = _native; }

VtkRenderViewBaseWrap::~VtkRenderViewBaseWrap()
{ }

void VtkRenderViewBaseWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkRenderViewBase").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("RenderViewBase").ToLocalChecked(), ConstructorGetter);
}

void VtkRenderViewBaseWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkRenderViewBaseWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkViewWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkViewWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkRenderViewBaseWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "GetInteractor", GetInteractor);
	Nan::SetPrototypeMethod(tpl, "getInteractor", GetInteractor);

	Nan::SetPrototypeMethod(tpl, "GetRenderWindow", GetRenderWindow);
	Nan::SetPrototypeMethod(tpl, "getRenderWindow", GetRenderWindow);

	Nan::SetPrototypeMethod(tpl, "GetRenderer", GetRenderer);
	Nan::SetPrototypeMethod(tpl, "getRenderer", GetRenderer);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "Render", Render);
	Nan::SetPrototypeMethod(tpl, "render", Render);

	Nan::SetPrototypeMethod(tpl, "ResetCamera", ResetCamera);
	Nan::SetPrototypeMethod(tpl, "resetCamera", ResetCamera);

	Nan::SetPrototypeMethod(tpl, "ResetCameraClippingRange", ResetCameraClippingRange);
	Nan::SetPrototypeMethod(tpl, "resetCameraClippingRange", ResetCameraClippingRange);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetInteractor", SetInteractor);
	Nan::SetPrototypeMethod(tpl, "setInteractor", SetInteractor);

	Nan::SetPrototypeMethod(tpl, "SetRenderWindow", SetRenderWindow);
	Nan::SetPrototypeMethod(tpl, "setRenderWindow", SetRenderWindow);

	Nan::SetPrototypeMethod(tpl, "SetRenderer", SetRenderer);
	Nan::SetPrototypeMethod(tpl, "setRenderer", SetRenderer);

#ifdef VTK_NODE_PLUS_VTKRENDERVIEWBASEWRAP_INITPTPL
	VTK_NODE_PLUS_VTKRENDERVIEWBASEWRAP_INITPTPL
#endif
	ptpl.Reset( tpl );
}

void VtkRenderViewBaseWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkRenderViewBase> native = vtkSmartPointer<vtkRenderViewBase>::New();
		VtkRenderViewBaseWrap* obj = new VtkRenderViewBaseWrap(native);
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

void VtkRenderViewBaseWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkRenderViewBaseWrap *wrapper = ObjectWrap::Unwrap<VtkRenderViewBaseWrap>(info.Holder());
	vtkRenderViewBase *native = (vtkRenderViewBase *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkRenderViewBaseWrap::GetInteractor(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkRenderViewBaseWrap *wrapper = ObjectWrap::Unwrap<VtkRenderViewBaseWrap>(info.Holder());
	vtkRenderViewBase *native = (vtkRenderViewBase *)wrapper->native.GetPointer();
	vtkRenderWindowInteractor * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetInteractor();
	VtkRenderWindowInteractorWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkRenderWindowInteractorWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkRenderWindowInteractorWrap *w = new VtkRenderWindowInteractorWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkRenderViewBaseWrap::GetRenderWindow(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkRenderViewBaseWrap *wrapper = ObjectWrap::Unwrap<VtkRenderViewBaseWrap>(info.Holder());
	vtkRenderViewBase *native = (vtkRenderViewBase *)wrapper->native.GetPointer();
	vtkRenderWindow * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetRenderWindow();
	VtkRenderWindowWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkRenderWindowWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkRenderWindowWrap *w = new VtkRenderWindowWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkRenderViewBaseWrap::GetRenderer(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkRenderViewBaseWrap *wrapper = ObjectWrap::Unwrap<VtkRenderViewBaseWrap>(info.Holder());
	vtkRenderViewBase *native = (vtkRenderViewBase *)wrapper->native.GetPointer();
	vtkRenderer * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetRenderer();
	VtkRendererWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkRendererWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkRendererWrap *w = new VtkRendererWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkRenderViewBaseWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkRenderViewBaseWrap *wrapper = ObjectWrap::Unwrap<VtkRenderViewBaseWrap>(info.Holder());
	vtkRenderViewBase *native = (vtkRenderViewBase *)wrapper->native.GetPointer();
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

void VtkRenderViewBaseWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkRenderViewBaseWrap *wrapper = ObjectWrap::Unwrap<VtkRenderViewBaseWrap>(info.Holder());
	vtkRenderViewBase *native = (vtkRenderViewBase *)wrapper->native.GetPointer();
	vtkRenderViewBase * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
	VtkRenderViewBaseWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkRenderViewBaseWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkRenderViewBaseWrap *w = new VtkRenderViewBaseWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkRenderViewBaseWrap::Render(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkRenderViewBaseWrap *wrapper = ObjectWrap::Unwrap<VtkRenderViewBaseWrap>(info.Holder());
	vtkRenderViewBase *native = (vtkRenderViewBase *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->Render();
}

void VtkRenderViewBaseWrap::ResetCamera(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkRenderViewBaseWrap *wrapper = ObjectWrap::Unwrap<VtkRenderViewBaseWrap>(info.Holder());
	vtkRenderViewBase *native = (vtkRenderViewBase *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->ResetCamera();
}

void VtkRenderViewBaseWrap::ResetCameraClippingRange(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkRenderViewBaseWrap *wrapper = ObjectWrap::Unwrap<VtkRenderViewBaseWrap>(info.Holder());
	vtkRenderViewBase *native = (vtkRenderViewBase *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->ResetCameraClippingRange();
}

void VtkRenderViewBaseWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkRenderViewBaseWrap *wrapper = ObjectWrap::Unwrap<VtkRenderViewBaseWrap>(info.Holder());
	vtkRenderViewBase *native = (vtkRenderViewBase *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkRenderViewBase * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObject *) a0->native.GetPointer()
		);
		VtkRenderViewBaseWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkRenderViewBaseWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkRenderViewBaseWrap *w = new VtkRenderViewBaseWrap();
		w->native = r;
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkRenderViewBaseWrap::SetInteractor(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkRenderViewBaseWrap *wrapper = ObjectWrap::Unwrap<VtkRenderViewBaseWrap>(info.Holder());
	vtkRenderViewBase *native = (vtkRenderViewBase *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkRenderWindowInteractorWrap::ptpl))->HasInstance(info[0]))
	{
		VtkRenderWindowInteractorWrap *a0 = ObjectWrap::Unwrap<VtkRenderWindowInteractorWrap>(info[0]->ToObject());
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetInteractor(
			(vtkRenderWindowInteractor *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkRenderViewBaseWrap::SetRenderWindow(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkRenderViewBaseWrap *wrapper = ObjectWrap::Unwrap<VtkRenderViewBaseWrap>(info.Holder());
	vtkRenderViewBase *native = (vtkRenderViewBase *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkRenderWindowWrap::ptpl))->HasInstance(info[0]))
	{
		VtkRenderWindowWrap *a0 = ObjectWrap::Unwrap<VtkRenderWindowWrap>(info[0]->ToObject());
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetRenderWindow(
			(vtkRenderWindow *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkRenderViewBaseWrap::SetRenderer(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkRenderViewBaseWrap *wrapper = ObjectWrap::Unwrap<VtkRenderViewBaseWrap>(info.Holder());
	vtkRenderViewBase *native = (vtkRenderViewBase *)wrapper->native.GetPointer();
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

