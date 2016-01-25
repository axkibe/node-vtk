/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkThreadedImageAlgorithmWrap.h"
#include "vtkImageHSIToRGBWrap.h"
#include "vtkObjectWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::Function> VtkImageHSIToRGBWrap::constructor;

VtkImageHSIToRGBWrap::VtkImageHSIToRGBWrap()
{ }

VtkImageHSIToRGBWrap::VtkImageHSIToRGBWrap(vtkSmartPointer<vtkImageHSIToRGB> _native)
{ native = _native; }

VtkImageHSIToRGBWrap::~VtkImageHSIToRGBWrap()
{ }

void VtkImageHSIToRGBWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::HandleScope scope;

	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	tpl->SetClassName(Nan::New("VtkImageHSIToRGBWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	VtkObjectBaseWrap::InitTpl(tpl);
	VtkObjectWrap::InitTpl(tpl);
	VtkAlgorithmWrap::InitTpl(tpl);
	VtkImageAlgorithmWrap::InitTpl(tpl);
	VtkThreadedImageAlgorithmWrap::InitTpl(tpl);
	InitTpl(tpl);

	constructor.Reset( tpl->GetFunction() );

	exports->Set(Nan::New("vtkImageHSIToRGB").ToLocalChecked(),tpl->GetFunction());
	exports->Set(Nan::New("ImageHSIToRGB").ToLocalChecked(),tpl->GetFunction());
}

void VtkImageHSIToRGBWrap::InitTpl(v8::Local<v8::FunctionTemplate> tpl)
{
	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "GetMaximum", GetMaximum);
	Nan::SetPrototypeMethod(tpl, "getMaximum", GetMaximum);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetMaximum", SetMaximum);
	Nan::SetPrototypeMethod(tpl, "setMaximum", SetMaximum);

}

void VtkImageHSIToRGBWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkImageHSIToRGB> native = vtkSmartPointer<vtkImageHSIToRGB>::New();
		VtkImageHSIToRGBWrap* obj = new VtkImageHSIToRGBWrap(native);		obj->Wrap(info.This());
	}
	else
	{
		Nan::Utf8String s(info[0]);
		if(info[0]->ToObject() != vtkNodeJsNoWrap )
			Nan::ThrowError("Parameter Error");
	}

	info.GetReturnValue().Set(info.This());
}

void VtkImageHSIToRGBWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageHSIToRGBWrap *wrapper = ObjectWrap::Unwrap<VtkImageHSIToRGBWrap>(info.Holder());
	vtkImageHSIToRGB *native = (vtkImageHSIToRGB *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkImageHSIToRGBWrap::GetMaximum(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageHSIToRGBWrap *wrapper = ObjectWrap::Unwrap<VtkImageHSIToRGBWrap>(info.Holder());
	vtkImageHSIToRGB *native = (vtkImageHSIToRGB *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetMaximum();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkImageHSIToRGBWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageHSIToRGBWrap *wrapper = ObjectWrap::Unwrap<VtkImageHSIToRGBWrap>(info.Holder());
	vtkImageHSIToRGB *native = (vtkImageHSIToRGB *)wrapper->native.GetPointer();
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

void VtkImageHSIToRGBWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageHSIToRGBWrap *wrapper = ObjectWrap::Unwrap<VtkImageHSIToRGBWrap>(info.Holder());
	vtkImageHSIToRGB *native = (vtkImageHSIToRGB *)wrapper->native.GetPointer();
	vtkImageHSIToRGB * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::Function>(VtkImageHSIToRGBWrap::constructor);
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkImageHSIToRGBWrap *w = new VtkImageHSIToRGBWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkImageHSIToRGBWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageHSIToRGBWrap *wrapper = ObjectWrap::Unwrap<VtkImageHSIToRGBWrap>(info.Holder());
	vtkImageHSIToRGB *native = (vtkImageHSIToRGB *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject())
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkImageHSIToRGB * r;
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
			Nan::New<v8::Function>(VtkImageHSIToRGBWrap::constructor);
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkImageHSIToRGBWrap *w = new VtkImageHSIToRGBWrap();
		w->native.TakeReference(r);
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkImageHSIToRGBWrap::SetMaximum(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageHSIToRGBWrap *wrapper = ObjectWrap::Unwrap<VtkImageHSIToRGBWrap>(info.Holder());
	vtkImageHSIToRGB *native = (vtkImageHSIToRGB *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsNumber())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetMaximum(
			info[0]->NumberValue()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

