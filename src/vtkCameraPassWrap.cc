/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkRenderPassWrap.h"
#include "vtkCameraPassWrap.h"
#include "vtkObjectWrap.h"
#include "vtkWindowWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::Function> VtkCameraPassWrap::constructor;

VtkCameraPassWrap::VtkCameraPassWrap()
{ }

VtkCameraPassWrap::VtkCameraPassWrap(vtkSmartPointer<vtkCameraPass> _native)
{ native = _native; }

VtkCameraPassWrap::~VtkCameraPassWrap()
{ }

void VtkCameraPassWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::HandleScope scope;

	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	tpl->SetClassName(Nan::New("VtkCameraPassWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	VtkObjectBaseWrap::InitTpl(tpl);
	VtkObjectWrap::InitTpl(tpl);
	VtkRenderPassWrap::InitTpl(tpl);
	InitTpl(tpl);

	constructor.Reset( tpl->GetFunction() );

	exports->Set(Nan::New("vtkCameraPass").ToLocalChecked(),tpl->GetFunction());
	exports->Set(Nan::New("CameraPass").ToLocalChecked(),tpl->GetFunction());
}

void VtkCameraPassWrap::InitTpl(v8::Local<v8::FunctionTemplate> tpl)
{
	Nan::SetPrototypeMethod(tpl, "GetAspectRatioOverride", GetAspectRatioOverride);
	Nan::SetPrototypeMethod(tpl, "getAspectRatioOverride", GetAspectRatioOverride);

	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "GetDelegatePass", GetDelegatePass);
	Nan::SetPrototypeMethod(tpl, "getDelegatePass", GetDelegatePass);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "ReleaseGraphicsResources", ReleaseGraphicsResources);
	Nan::SetPrototypeMethod(tpl, "releaseGraphicsResources", ReleaseGraphicsResources);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetAspectRatioOverride", SetAspectRatioOverride);
	Nan::SetPrototypeMethod(tpl, "setAspectRatioOverride", SetAspectRatioOverride);

	Nan::SetPrototypeMethod(tpl, "SetDelegatePass", SetDelegatePass);
	Nan::SetPrototypeMethod(tpl, "setDelegatePass", SetDelegatePass);

}

void VtkCameraPassWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkCameraPass> native = vtkSmartPointer<vtkCameraPass>::New();
		VtkCameraPassWrap* obj = new VtkCameraPassWrap(native);		obj->Wrap(info.This());
	}
	else
	{
		Nan::Utf8String s(info[0]);
		if(info[0]->ToObject() != vtkNodeJsNoWrap )
			Nan::ThrowError("Parameter Error");
	}

	info.GetReturnValue().Set(info.This());
}

void VtkCameraPassWrap::GetAspectRatioOverride(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCameraPassWrap *wrapper = ObjectWrap::Unwrap<VtkCameraPassWrap>(info.Holder());
	vtkCameraPass *native = (vtkCameraPass *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetAspectRatioOverride();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkCameraPassWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCameraPassWrap *wrapper = ObjectWrap::Unwrap<VtkCameraPassWrap>(info.Holder());
	vtkCameraPass *native = (vtkCameraPass *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkCameraPassWrap::GetDelegatePass(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCameraPassWrap *wrapper = ObjectWrap::Unwrap<VtkCameraPassWrap>(info.Holder());
	vtkCameraPass *native = (vtkCameraPass *)wrapper->native.GetPointer();
	vtkRenderPass * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetDelegatePass();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::Function>(VtkRenderPassWrap::constructor);
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkRenderPassWrap *w = new VtkRenderPassWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkCameraPassWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCameraPassWrap *wrapper = ObjectWrap::Unwrap<VtkCameraPassWrap>(info.Holder());
	vtkCameraPass *native = (vtkCameraPass *)wrapper->native.GetPointer();
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

void VtkCameraPassWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCameraPassWrap *wrapper = ObjectWrap::Unwrap<VtkCameraPassWrap>(info.Holder());
	vtkCameraPass *native = (vtkCameraPass *)wrapper->native.GetPointer();
	vtkCameraPass * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::Function>(VtkCameraPassWrap::constructor);
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkCameraPassWrap *w = new VtkCameraPassWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkCameraPassWrap::ReleaseGraphicsResources(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCameraPassWrap *wrapper = ObjectWrap::Unwrap<VtkCameraPassWrap>(info.Holder());
	vtkCameraPass *native = (vtkCameraPass *)wrapper->native.GetPointer();
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

void VtkCameraPassWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCameraPassWrap *wrapper = ObjectWrap::Unwrap<VtkCameraPassWrap>(info.Holder());
	vtkCameraPass *native = (vtkCameraPass *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject())
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkCameraPass * r;
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
			Nan::New<v8::Function>(VtkCameraPassWrap::constructor);
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkCameraPassWrap *w = new VtkCameraPassWrap();
		w->native.TakeReference(r);
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkCameraPassWrap::SetAspectRatioOverride(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCameraPassWrap *wrapper = ObjectWrap::Unwrap<VtkCameraPassWrap>(info.Holder());
	vtkCameraPass *native = (vtkCameraPass *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsNumber())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetAspectRatioOverride(
			info[0]->NumberValue()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkCameraPassWrap::SetDelegatePass(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCameraPassWrap *wrapper = ObjectWrap::Unwrap<VtkCameraPassWrap>(info.Holder());
	vtkCameraPass *native = (vtkCameraPass *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject())
	{
		VtkRenderPassWrap *a0 = ObjectWrap::Unwrap<VtkRenderPassWrap>(info[0]->ToObject());
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetDelegatePass(
			(vtkRenderPass *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

