/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkThreadedImageAlgorithmWrap.h"
#include "vtkImageLogarithmicScaleWrap.h"
#include "vtkObjectWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::Function> VtkImageLogarithmicScaleWrap::constructor;
Nan::Persistent<v8::FunctionTemplate> VtkImageLogarithmicScaleWrap::ptpl;

VtkImageLogarithmicScaleWrap::VtkImageLogarithmicScaleWrap()
{ }

VtkImageLogarithmicScaleWrap::VtkImageLogarithmicScaleWrap(vtkSmartPointer<vtkImageLogarithmicScale> _native)
{ native = _native; }

VtkImageLogarithmicScaleWrap::~VtkImageLogarithmicScaleWrap()
{ }

void VtkImageLogarithmicScaleWrap::Init(v8::Local<v8::Object> exports)
{
	if (!constructor.IsEmpty()) return;
	Nan::HandleScope scope;

	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkThreadedImageAlgorithmWrap::Init( exports );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkThreadedImageAlgorithmWrap::ptpl));

	tpl->SetClassName(Nan::New("VtkImageLogarithmicScaleWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);
	InitTpl(tpl);

	constructor.Reset( tpl->GetFunction() );
	ptpl.Reset( tpl );

	exports->Set(Nan::New("vtkImageLogarithmicScale").ToLocalChecked(),tpl->GetFunction());
	exports->Set(Nan::New("ImageLogarithmicScale").ToLocalChecked(),tpl->GetFunction());
}

void VtkImageLogarithmicScaleWrap::InitTpl(v8::Local<v8::FunctionTemplate> tpl)
{
	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "GetConstant", GetConstant);
	Nan::SetPrototypeMethod(tpl, "getConstant", GetConstant);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetConstant", SetConstant);
	Nan::SetPrototypeMethod(tpl, "setConstant", SetConstant);

}

void VtkImageLogarithmicScaleWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkImageLogarithmicScale> native = vtkSmartPointer<vtkImageLogarithmicScale>::New();
		VtkImageLogarithmicScaleWrap* obj = new VtkImageLogarithmicScaleWrap(native);		obj->Wrap(info.This());
	}
	else
	{
		Nan::Utf8String s(info[0]);
		if(info[0]->ToObject() != vtkNodeJsNoWrap )
			Nan::ThrowError("Parameter Error");
	}

	info.GetReturnValue().Set(info.This());
}

void VtkImageLogarithmicScaleWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageLogarithmicScaleWrap *wrapper = ObjectWrap::Unwrap<VtkImageLogarithmicScaleWrap>(info.Holder());
	vtkImageLogarithmicScale *native = (vtkImageLogarithmicScale *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkImageLogarithmicScaleWrap::GetConstant(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageLogarithmicScaleWrap *wrapper = ObjectWrap::Unwrap<VtkImageLogarithmicScaleWrap>(info.Holder());
	vtkImageLogarithmicScale *native = (vtkImageLogarithmicScale *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetConstant();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkImageLogarithmicScaleWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageLogarithmicScaleWrap *wrapper = ObjectWrap::Unwrap<VtkImageLogarithmicScaleWrap>(info.Holder());
	vtkImageLogarithmicScale *native = (vtkImageLogarithmicScale *)wrapper->native.GetPointer();
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

void VtkImageLogarithmicScaleWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageLogarithmicScaleWrap *wrapper = ObjectWrap::Unwrap<VtkImageLogarithmicScaleWrap>(info.Holder());
	vtkImageLogarithmicScale *native = (vtkImageLogarithmicScale *)wrapper->native.GetPointer();
	vtkImageLogarithmicScale * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::Function>(VtkImageLogarithmicScaleWrap::constructor);
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkImageLogarithmicScaleWrap *w = new VtkImageLogarithmicScaleWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkImageLogarithmicScaleWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageLogarithmicScaleWrap *wrapper = ObjectWrap::Unwrap<VtkImageLogarithmicScaleWrap>(info.Holder());
	vtkImageLogarithmicScale *native = (vtkImageLogarithmicScale *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject())
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkImageLogarithmicScale * r;
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
			Nan::New<v8::Function>(VtkImageLogarithmicScaleWrap::constructor);
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkImageLogarithmicScaleWrap *w = new VtkImageLogarithmicScaleWrap();
		w->native.TakeReference(r);
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkImageLogarithmicScaleWrap::SetConstant(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageLogarithmicScaleWrap *wrapper = ObjectWrap::Unwrap<VtkImageLogarithmicScaleWrap>(info.Holder());
	vtkImageLogarithmicScale *native = (vtkImageLogarithmicScale *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsNumber())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetConstant(
			info[0]->NumberValue()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

