/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>

#include "vtkImageProcessingPassWrap.h"
#include "vtkGaussianBlurPassWrap.h"
#include "vtkObjectWrap.h"
#include "vtkWindowWrap.h"
#include "../../plus/plus.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkGaussianBlurPassWrap::ptpl;

VtkGaussianBlurPassWrap::VtkGaussianBlurPassWrap()
{ }

VtkGaussianBlurPassWrap::VtkGaussianBlurPassWrap(vtkSmartPointer<vtkGaussianBlurPass> _native)
{ native = _native; }

VtkGaussianBlurPassWrap::~VtkGaussianBlurPassWrap()
{ }

void VtkGaussianBlurPassWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkGaussianBlurPass").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("GaussianBlurPass").ToLocalChecked(), ConstructorGetter);
}

void VtkGaussianBlurPassWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkGaussianBlurPassWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkImageProcessingPassWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkImageProcessingPassWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkGaussianBlurPassWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "ReleaseGraphicsResources", ReleaseGraphicsResources);
	Nan::SetPrototypeMethod(tpl, "releaseGraphicsResources", ReleaseGraphicsResources);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

#ifdef VTK_NODE_PLUS_VTKGAUSSIANBLURPASSWRAP_INITPTPL
	VTK_NODE_PLUS_VTKGAUSSIANBLURPASSWRAP_INITPTPL
#endif
	ptpl.Reset( tpl );
}

void VtkGaussianBlurPassWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkGaussianBlurPass> native = vtkSmartPointer<vtkGaussianBlurPass>::New();
		VtkGaussianBlurPassWrap* obj = new VtkGaussianBlurPassWrap(native);
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

void VtkGaussianBlurPassWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGaussianBlurPassWrap *wrapper = ObjectWrap::Unwrap<VtkGaussianBlurPassWrap>(info.Holder());
	vtkGaussianBlurPass *native = (vtkGaussianBlurPass *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkGaussianBlurPassWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGaussianBlurPassWrap *wrapper = ObjectWrap::Unwrap<VtkGaussianBlurPassWrap>(info.Holder());
	vtkGaussianBlurPass *native = (vtkGaussianBlurPass *)wrapper->native.GetPointer();
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

void VtkGaussianBlurPassWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGaussianBlurPassWrap *wrapper = ObjectWrap::Unwrap<VtkGaussianBlurPassWrap>(info.Holder());
	vtkGaussianBlurPass *native = (vtkGaussianBlurPass *)wrapper->native.GetPointer();
	vtkGaussianBlurPass * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
	VtkGaussianBlurPassWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkGaussianBlurPassWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkGaussianBlurPassWrap *w = new VtkGaussianBlurPassWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkGaussianBlurPassWrap::ReleaseGraphicsResources(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGaussianBlurPassWrap *wrapper = ObjectWrap::Unwrap<VtkGaussianBlurPassWrap>(info.Holder());
	vtkGaussianBlurPass *native = (vtkGaussianBlurPass *)wrapper->native.GetPointer();
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

void VtkGaussianBlurPassWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGaussianBlurPassWrap *wrapper = ObjectWrap::Unwrap<VtkGaussianBlurPassWrap>(info.Holder());
	vtkGaussianBlurPass *native = (vtkGaussianBlurPass *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkGaussianBlurPass * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObject *) a0->native.GetPointer()
		);
		VtkGaussianBlurPassWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkGaussianBlurPassWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkGaussianBlurPassWrap *w = new VtkGaussianBlurPassWrap();
		w->native = r;
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

