/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkRenderPassWrap.h"
#include "vtkShadowMapBakerPassWrap.h"
#include "vtkObjectWrap.h"
#include "vtkInformationIntegerKeyWrap.h"
#include "vtkWindowWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkShadowMapBakerPassWrap::ptpl;

VtkShadowMapBakerPassWrap::VtkShadowMapBakerPassWrap()
{ }

VtkShadowMapBakerPassWrap::VtkShadowMapBakerPassWrap(vtkSmartPointer<vtkShadowMapBakerPass> _native)
{ native = _native; }

VtkShadowMapBakerPassWrap::~VtkShadowMapBakerPassWrap()
{ }

void VtkShadowMapBakerPassWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkShadowMapBakerPass").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("ShadowMapBakerPass").ToLocalChecked(), ConstructorGetter);
}

void VtkShadowMapBakerPassWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkShadowMapBakerPassWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkRenderPassWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkRenderPassWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkShadowMapBakerPassWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "GetCompositeZPass", GetCompositeZPass);
	Nan::SetPrototypeMethod(tpl, "getCompositeZPass", GetCompositeZPass);

	Nan::SetPrototypeMethod(tpl, "GetOpaquePass", GetOpaquePass);
	Nan::SetPrototypeMethod(tpl, "getOpaquePass", GetOpaquePass);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "OCCLUDER", OCCLUDER);

	Nan::SetPrototypeMethod(tpl, "RECEIVER", RECEIVER);

	Nan::SetPrototypeMethod(tpl, "ReleaseGraphicsResources", ReleaseGraphicsResources);
	Nan::SetPrototypeMethod(tpl, "releaseGraphicsResources", ReleaseGraphicsResources);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetCompositeZPass", SetCompositeZPass);
	Nan::SetPrototypeMethod(tpl, "setCompositeZPass", SetCompositeZPass);

	Nan::SetPrototypeMethod(tpl, "SetOpaquePass", SetOpaquePass);
	Nan::SetPrototypeMethod(tpl, "setOpaquePass", SetOpaquePass);

	Nan::SetPrototypeMethod(tpl, "SetUpToDate", SetUpToDate);
	Nan::SetPrototypeMethod(tpl, "setUpToDate", SetUpToDate);

	ptpl.Reset( tpl );
}

void VtkShadowMapBakerPassWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkShadowMapBakerPass> native = vtkSmartPointer<vtkShadowMapBakerPass>::New();
		VtkShadowMapBakerPassWrap* obj = new VtkShadowMapBakerPassWrap(native);		obj->Wrap(info.This());
	}
	else
	{
		if(info[0]->ToObject() != vtkNodeJsNoWrap )
			Nan::ThrowError("Parameter Error");
	}

	info.GetReturnValue().Set(info.This());
}

void VtkShadowMapBakerPassWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkShadowMapBakerPassWrap *wrapper = ObjectWrap::Unwrap<VtkShadowMapBakerPassWrap>(info.Holder());
	vtkShadowMapBakerPass *native = (vtkShadowMapBakerPass *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkShadowMapBakerPassWrap::GetCompositeZPass(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkShadowMapBakerPassWrap *wrapper = ObjectWrap::Unwrap<VtkShadowMapBakerPassWrap>(info.Holder());
	vtkShadowMapBakerPass *native = (vtkShadowMapBakerPass *)wrapper->native.GetPointer();
	vtkRenderPass * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetCompositeZPass();
		VtkRenderPassWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkRenderPassWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkRenderPassWrap *w = new VtkRenderPassWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkShadowMapBakerPassWrap::GetOpaquePass(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkShadowMapBakerPassWrap *wrapper = ObjectWrap::Unwrap<VtkShadowMapBakerPassWrap>(info.Holder());
	vtkShadowMapBakerPass *native = (vtkShadowMapBakerPass *)wrapper->native.GetPointer();
	vtkRenderPass * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetOpaquePass();
		VtkRenderPassWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkRenderPassWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkRenderPassWrap *w = new VtkRenderPassWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkShadowMapBakerPassWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkShadowMapBakerPassWrap *wrapper = ObjectWrap::Unwrap<VtkShadowMapBakerPassWrap>(info.Holder());
	vtkShadowMapBakerPass *native = (vtkShadowMapBakerPass *)wrapper->native.GetPointer();
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

void VtkShadowMapBakerPassWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkShadowMapBakerPassWrap *wrapper = ObjectWrap::Unwrap<VtkShadowMapBakerPassWrap>(info.Holder());
	vtkShadowMapBakerPass *native = (vtkShadowMapBakerPass *)wrapper->native.GetPointer();
	vtkShadowMapBakerPass * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
		VtkShadowMapBakerPassWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkShadowMapBakerPassWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkShadowMapBakerPassWrap *w = new VtkShadowMapBakerPassWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkShadowMapBakerPassWrap::OCCLUDER(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkShadowMapBakerPassWrap *wrapper = ObjectWrap::Unwrap<VtkShadowMapBakerPassWrap>(info.Holder());
	vtkShadowMapBakerPass *native = (vtkShadowMapBakerPass *)wrapper->native.GetPointer();
	vtkInformationIntegerKey * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->OCCLUDER();
		VtkInformationIntegerKeyWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkInformationIntegerKeyWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkInformationIntegerKeyWrap *w = new VtkInformationIntegerKeyWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkShadowMapBakerPassWrap::RECEIVER(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkShadowMapBakerPassWrap *wrapper = ObjectWrap::Unwrap<VtkShadowMapBakerPassWrap>(info.Holder());
	vtkShadowMapBakerPass *native = (vtkShadowMapBakerPass *)wrapper->native.GetPointer();
	vtkInformationIntegerKey * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->RECEIVER();
		VtkInformationIntegerKeyWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkInformationIntegerKeyWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkInformationIntegerKeyWrap *w = new VtkInformationIntegerKeyWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkShadowMapBakerPassWrap::ReleaseGraphicsResources(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkShadowMapBakerPassWrap *wrapper = ObjectWrap::Unwrap<VtkShadowMapBakerPassWrap>(info.Holder());
	vtkShadowMapBakerPass *native = (vtkShadowMapBakerPass *)wrapper->native.GetPointer();
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

void VtkShadowMapBakerPassWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkShadowMapBakerPassWrap *wrapper = ObjectWrap::Unwrap<VtkShadowMapBakerPassWrap>(info.Holder());
	vtkShadowMapBakerPass *native = (vtkShadowMapBakerPass *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkShadowMapBakerPass * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObject *) a0->native.GetPointer()
		);
			VtkShadowMapBakerPassWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkShadowMapBakerPassWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkShadowMapBakerPassWrap *w = new VtkShadowMapBakerPassWrap();
		w->native = r;
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkShadowMapBakerPassWrap::SetCompositeZPass(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkShadowMapBakerPassWrap *wrapper = ObjectWrap::Unwrap<VtkShadowMapBakerPassWrap>(info.Holder());
	vtkShadowMapBakerPass *native = (vtkShadowMapBakerPass *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkRenderPassWrap::ptpl))->HasInstance(info[0]))
	{
		VtkRenderPassWrap *a0 = ObjectWrap::Unwrap<VtkRenderPassWrap>(info[0]->ToObject());
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetCompositeZPass(
			(vtkRenderPass *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkShadowMapBakerPassWrap::SetOpaquePass(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkShadowMapBakerPassWrap *wrapper = ObjectWrap::Unwrap<VtkShadowMapBakerPassWrap>(info.Holder());
	vtkShadowMapBakerPass *native = (vtkShadowMapBakerPass *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkRenderPassWrap::ptpl))->HasInstance(info[0]))
	{
		VtkRenderPassWrap *a0 = ObjectWrap::Unwrap<VtkRenderPassWrap>(info[0]->ToObject());
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetOpaquePass(
			(vtkRenderPass *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkShadowMapBakerPassWrap::SetUpToDate(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkShadowMapBakerPassWrap *wrapper = ObjectWrap::Unwrap<VtkShadowMapBakerPassWrap>(info.Holder());
	vtkShadowMapBakerPass *native = (vtkShadowMapBakerPass *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->SetUpToDate();
}

