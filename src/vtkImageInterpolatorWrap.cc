/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkAbstractImageInterpolatorWrap.h"
#include "vtkImageInterpolatorWrap.h"
#include "vtkObjectWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::Function> VtkImageInterpolatorWrap::constructor;

VtkImageInterpolatorWrap::VtkImageInterpolatorWrap()
{ }

VtkImageInterpolatorWrap::VtkImageInterpolatorWrap(vtkSmartPointer<vtkImageInterpolator> _native)
{ native = _native; }

VtkImageInterpolatorWrap::~VtkImageInterpolatorWrap()
{ }

void VtkImageInterpolatorWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::HandleScope scope;

	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	tpl->SetClassName(Nan::New("VtkImageInterpolatorWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	VtkObjectBaseWrap::InitTpl(tpl);
	VtkObjectWrap::InitTpl(tpl);
	VtkAbstractImageInterpolatorWrap::InitTpl(tpl);
	InitTpl(tpl);

	constructor.Reset( tpl->GetFunction() );

	exports->Set(Nan::New("vtkImageInterpolator").ToLocalChecked(),tpl->GetFunction());
	exports->Set(Nan::New("ImageInterpolator").ToLocalChecked(),tpl->GetFunction());
}

void VtkImageInterpolatorWrap::InitTpl(v8::Local<v8::FunctionTemplate> tpl)
{
	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "GetInterpolationMode", GetInterpolationMode);
	Nan::SetPrototypeMethod(tpl, "getInterpolationMode", GetInterpolationMode);

	Nan::SetPrototypeMethod(tpl, "GetInterpolationModeAsString", GetInterpolationModeAsString);
	Nan::SetPrototypeMethod(tpl, "getInterpolationModeAsString", GetInterpolationModeAsString);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetInterpolationMode", SetInterpolationMode);
	Nan::SetPrototypeMethod(tpl, "setInterpolationMode", SetInterpolationMode);

	Nan::SetPrototypeMethod(tpl, "SetInterpolationModeToCubic", SetInterpolationModeToCubic);
	Nan::SetPrototypeMethod(tpl, "setInterpolationModeToCubic", SetInterpolationModeToCubic);

	Nan::SetPrototypeMethod(tpl, "SetInterpolationModeToLinear", SetInterpolationModeToLinear);
	Nan::SetPrototypeMethod(tpl, "setInterpolationModeToLinear", SetInterpolationModeToLinear);

	Nan::SetPrototypeMethod(tpl, "SetInterpolationModeToNearest", SetInterpolationModeToNearest);
	Nan::SetPrototypeMethod(tpl, "setInterpolationModeToNearest", SetInterpolationModeToNearest);

}

void VtkImageInterpolatorWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkImageInterpolator> native = vtkSmartPointer<vtkImageInterpolator>::New();
		VtkImageInterpolatorWrap* obj = new VtkImageInterpolatorWrap(native);		obj->Wrap(info.This());
	}
	else
	{
		Nan::Utf8String s(info[0]);
		if(info[0]->ToObject() != vtkNodeJsNoWrap )
			Nan::ThrowError("Parameter Error");
	}

	info.GetReturnValue().Set(info.This());
}

void VtkImageInterpolatorWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageInterpolatorWrap *wrapper = ObjectWrap::Unwrap<VtkImageInterpolatorWrap>(info.Holder());
	vtkImageInterpolator *native = (vtkImageInterpolator *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkImageInterpolatorWrap::GetInterpolationMode(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageInterpolatorWrap *wrapper = ObjectWrap::Unwrap<VtkImageInterpolatorWrap>(info.Holder());
	vtkImageInterpolator *native = (vtkImageInterpolator *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetInterpolationMode();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkImageInterpolatorWrap::GetInterpolationModeAsString(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageInterpolatorWrap *wrapper = ObjectWrap::Unwrap<VtkImageInterpolatorWrap>(info.Holder());
	vtkImageInterpolator *native = (vtkImageInterpolator *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetInterpolationModeAsString();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkImageInterpolatorWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageInterpolatorWrap *wrapper = ObjectWrap::Unwrap<VtkImageInterpolatorWrap>(info.Holder());
	vtkImageInterpolator *native = (vtkImageInterpolator *)wrapper->native.GetPointer();
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

void VtkImageInterpolatorWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageInterpolatorWrap *wrapper = ObjectWrap::Unwrap<VtkImageInterpolatorWrap>(info.Holder());
	vtkImageInterpolator *native = (vtkImageInterpolator *)wrapper->native.GetPointer();
	vtkImageInterpolator * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::Function>(VtkImageInterpolatorWrap::constructor);
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkImageInterpolatorWrap *w = new VtkImageInterpolatorWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkImageInterpolatorWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageInterpolatorWrap *wrapper = ObjectWrap::Unwrap<VtkImageInterpolatorWrap>(info.Holder());
	vtkImageInterpolator *native = (vtkImageInterpolator *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject())
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkImageInterpolator * r;
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
			Nan::New<v8::Function>(VtkImageInterpolatorWrap::constructor);
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkImageInterpolatorWrap *w = new VtkImageInterpolatorWrap();
		w->native.TakeReference(r);
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkImageInterpolatorWrap::SetInterpolationMode(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageInterpolatorWrap *wrapper = ObjectWrap::Unwrap<VtkImageInterpolatorWrap>(info.Holder());
	vtkImageInterpolator *native = (vtkImageInterpolator *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetInterpolationMode(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkImageInterpolatorWrap::SetInterpolationModeToCubic(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageInterpolatorWrap *wrapper = ObjectWrap::Unwrap<VtkImageInterpolatorWrap>(info.Holder());
	vtkImageInterpolator *native = (vtkImageInterpolator *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->SetInterpolationModeToCubic();
}

void VtkImageInterpolatorWrap::SetInterpolationModeToLinear(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageInterpolatorWrap *wrapper = ObjectWrap::Unwrap<VtkImageInterpolatorWrap>(info.Holder());
	vtkImageInterpolator *native = (vtkImageInterpolator *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->SetInterpolationModeToLinear();
}

void VtkImageInterpolatorWrap::SetInterpolationModeToNearest(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageInterpolatorWrap *wrapper = ObjectWrap::Unwrap<VtkImageInterpolatorWrap>(info.Holder());
	vtkImageInterpolator *native = (vtkImageInterpolator *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->SetInterpolationModeToNearest();
}

