/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>

#include "vtkDepthPeelingPassWrap.h"
#include "vtkDualDepthPeelingPassWrap.h"
#include "vtkObjectBaseWrap.h"
#include "vtkWindowWrap.h"
#include "vtkRenderPassWrap.h"
#include "../../plus/plus.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkDualDepthPeelingPassWrap::ptpl;

VtkDualDepthPeelingPassWrap::VtkDualDepthPeelingPassWrap()
{ }

VtkDualDepthPeelingPassWrap::VtkDualDepthPeelingPassWrap(vtkSmartPointer<vtkDualDepthPeelingPass> _native)
{ native = _native; }

VtkDualDepthPeelingPassWrap::~VtkDualDepthPeelingPassWrap()
{ }

void VtkDualDepthPeelingPassWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkDualDepthPeelingPass").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("DualDepthPeelingPass").ToLocalChecked(), ConstructorGetter);
}

void VtkDualDepthPeelingPassWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkDualDepthPeelingPassWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkDepthPeelingPassWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkDepthPeelingPassWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkDualDepthPeelingPassWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "GetVolumetricPass", GetVolumetricPass);
	Nan::SetPrototypeMethod(tpl, "getVolumetricPass", GetVolumetricPass);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "ReleaseGraphicsResources", ReleaseGraphicsResources);
	Nan::SetPrototypeMethod(tpl, "releaseGraphicsResources", ReleaseGraphicsResources);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetVolumetricPass", SetVolumetricPass);
	Nan::SetPrototypeMethod(tpl, "setVolumetricPass", SetVolumetricPass);

#ifdef VTK_NODE_PLUS_VTKDUALDEPTHPEELINGPASSWRAP_INITPTPL
	VTK_NODE_PLUS_VTKDUALDEPTHPEELINGPASSWRAP_INITPTPL
#endif
	ptpl.Reset( tpl );
}

void VtkDualDepthPeelingPassWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkDualDepthPeelingPass> native = vtkSmartPointer<vtkDualDepthPeelingPass>::New();
		VtkDualDepthPeelingPassWrap* obj = new VtkDualDepthPeelingPassWrap(native);
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

void VtkDualDepthPeelingPassWrap::GetVolumetricPass(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDualDepthPeelingPassWrap *wrapper = ObjectWrap::Unwrap<VtkDualDepthPeelingPassWrap>(info.Holder());
	vtkDualDepthPeelingPass *native = (vtkDualDepthPeelingPass *)wrapper->native.GetPointer();
	vtkRenderPass * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetVolumetricPass();
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

void VtkDualDepthPeelingPassWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDualDepthPeelingPassWrap *wrapper = ObjectWrap::Unwrap<VtkDualDepthPeelingPassWrap>(info.Holder());
	vtkDualDepthPeelingPass *native = (vtkDualDepthPeelingPass *)wrapper->native.GetPointer();
	vtkDualDepthPeelingPass * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
	VtkDualDepthPeelingPassWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkDualDepthPeelingPassWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkDualDepthPeelingPassWrap *w = new VtkDualDepthPeelingPassWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkDualDepthPeelingPassWrap::ReleaseGraphicsResources(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDualDepthPeelingPassWrap *wrapper = ObjectWrap::Unwrap<VtkDualDepthPeelingPassWrap>(info.Holder());
	vtkDualDepthPeelingPass *native = (vtkDualDepthPeelingPass *)wrapper->native.GetPointer();
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

void VtkDualDepthPeelingPassWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDualDepthPeelingPassWrap *wrapper = ObjectWrap::Unwrap<VtkDualDepthPeelingPassWrap>(info.Holder());
	vtkDualDepthPeelingPass *native = (vtkDualDepthPeelingPass *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectBaseWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectBaseWrap *a0 = ObjectWrap::Unwrap<VtkObjectBaseWrap>(info[0]->ToObject());
		vtkDualDepthPeelingPass * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObjectBase *) a0->native.GetPointer()
		);
		VtkDualDepthPeelingPassWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkDualDepthPeelingPassWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkDualDepthPeelingPassWrap *w = new VtkDualDepthPeelingPassWrap();
		w->native = r;
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkDualDepthPeelingPassWrap::SetVolumetricPass(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDualDepthPeelingPassWrap *wrapper = ObjectWrap::Unwrap<VtkDualDepthPeelingPassWrap>(info.Holder());
	vtkDualDepthPeelingPass *native = (vtkDualDepthPeelingPass *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkRenderPassWrap::ptpl))->HasInstance(info[0]))
	{
		VtkRenderPassWrap *a0 = ObjectWrap::Unwrap<VtkRenderPassWrap>(info[0]->ToObject());
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetVolumetricPass(
			(vtkRenderPass *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

