/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkImageDecomposeFilterWrap.h"
#include "vtkImageSeparableConvolutionWrap.h"
#include "vtkObjectWrap.h"
#include "vtkFloatArrayWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::Function> VtkImageSeparableConvolutionWrap::constructor;
Nan::Persistent<v8::FunctionTemplate> VtkImageSeparableConvolutionWrap::ptpl;

VtkImageSeparableConvolutionWrap::VtkImageSeparableConvolutionWrap()
{ }

VtkImageSeparableConvolutionWrap::VtkImageSeparableConvolutionWrap(vtkSmartPointer<vtkImageSeparableConvolution> _native)
{ native = _native; }

VtkImageSeparableConvolutionWrap::~VtkImageSeparableConvolutionWrap()
{ }

void VtkImageSeparableConvolutionWrap::Init(v8::Local<v8::Object> exports)
{
	if (!constructor.IsEmpty()) return;
	Nan::HandleScope scope;

	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkImageDecomposeFilterWrap::Init( exports );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkImageDecomposeFilterWrap::ptpl));

	tpl->SetClassName(Nan::New("VtkImageSeparableConvolutionWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);
	InitTpl(tpl);

	constructor.Reset( tpl->GetFunction() );
	ptpl.Reset( tpl );

	exports->Set(Nan::New("vtkImageSeparableConvolution").ToLocalChecked(),tpl->GetFunction());
	exports->Set(Nan::New("ImageSeparableConvolution").ToLocalChecked(),tpl->GetFunction());
}

void VtkImageSeparableConvolutionWrap::InitTpl(v8::Local<v8::FunctionTemplate> tpl)
{
	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "GetXKernel", GetXKernel);
	Nan::SetPrototypeMethod(tpl, "getXKernel", GetXKernel);

	Nan::SetPrototypeMethod(tpl, "GetYKernel", GetYKernel);
	Nan::SetPrototypeMethod(tpl, "getYKernel", GetYKernel);

	Nan::SetPrototypeMethod(tpl, "GetZKernel", GetZKernel);
	Nan::SetPrototypeMethod(tpl, "getZKernel", GetZKernel);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetXKernel", SetXKernel);
	Nan::SetPrototypeMethod(tpl, "setXKernel", SetXKernel);

	Nan::SetPrototypeMethod(tpl, "SetYKernel", SetYKernel);
	Nan::SetPrototypeMethod(tpl, "setYKernel", SetYKernel);

	Nan::SetPrototypeMethod(tpl, "SetZKernel", SetZKernel);
	Nan::SetPrototypeMethod(tpl, "setZKernel", SetZKernel);

}

void VtkImageSeparableConvolutionWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkImageSeparableConvolution> native = vtkSmartPointer<vtkImageSeparableConvolution>::New();
		VtkImageSeparableConvolutionWrap* obj = new VtkImageSeparableConvolutionWrap(native);		obj->Wrap(info.This());
	}
	else
	{
		Nan::Utf8String s(info[0]);
		if(info[0]->ToObject() != vtkNodeJsNoWrap )
			Nan::ThrowError("Parameter Error");
	}

	info.GetReturnValue().Set(info.This());
}

void VtkImageSeparableConvolutionWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageSeparableConvolutionWrap *wrapper = ObjectWrap::Unwrap<VtkImageSeparableConvolutionWrap>(info.Holder());
	vtkImageSeparableConvolution *native = (vtkImageSeparableConvolution *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkImageSeparableConvolutionWrap::GetXKernel(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageSeparableConvolutionWrap *wrapper = ObjectWrap::Unwrap<VtkImageSeparableConvolutionWrap>(info.Holder());
	vtkImageSeparableConvolution *native = (vtkImageSeparableConvolution *)wrapper->native.GetPointer();
	vtkFloatArray * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetXKernel();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::Function>(VtkFloatArrayWrap::constructor);
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkFloatArrayWrap *w = new VtkFloatArrayWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkImageSeparableConvolutionWrap::GetYKernel(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageSeparableConvolutionWrap *wrapper = ObjectWrap::Unwrap<VtkImageSeparableConvolutionWrap>(info.Holder());
	vtkImageSeparableConvolution *native = (vtkImageSeparableConvolution *)wrapper->native.GetPointer();
	vtkFloatArray * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetYKernel();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::Function>(VtkFloatArrayWrap::constructor);
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkFloatArrayWrap *w = new VtkFloatArrayWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkImageSeparableConvolutionWrap::GetZKernel(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageSeparableConvolutionWrap *wrapper = ObjectWrap::Unwrap<VtkImageSeparableConvolutionWrap>(info.Holder());
	vtkImageSeparableConvolution *native = (vtkImageSeparableConvolution *)wrapper->native.GetPointer();
	vtkFloatArray * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetZKernel();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::Function>(VtkFloatArrayWrap::constructor);
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkFloatArrayWrap *w = new VtkFloatArrayWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkImageSeparableConvolutionWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageSeparableConvolutionWrap *wrapper = ObjectWrap::Unwrap<VtkImageSeparableConvolutionWrap>(info.Holder());
	vtkImageSeparableConvolution *native = (vtkImageSeparableConvolution *)wrapper->native.GetPointer();
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

void VtkImageSeparableConvolutionWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageSeparableConvolutionWrap *wrapper = ObjectWrap::Unwrap<VtkImageSeparableConvolutionWrap>(info.Holder());
	vtkImageSeparableConvolution *native = (vtkImageSeparableConvolution *)wrapper->native.GetPointer();
	vtkImageSeparableConvolution * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::Function>(VtkImageSeparableConvolutionWrap::constructor);
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkImageSeparableConvolutionWrap *w = new VtkImageSeparableConvolutionWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkImageSeparableConvolutionWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageSeparableConvolutionWrap *wrapper = ObjectWrap::Unwrap<VtkImageSeparableConvolutionWrap>(info.Holder());
	vtkImageSeparableConvolution *native = (vtkImageSeparableConvolution *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject())
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkImageSeparableConvolution * r;
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
			Nan::New<v8::Function>(VtkImageSeparableConvolutionWrap::constructor);
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkImageSeparableConvolutionWrap *w = new VtkImageSeparableConvolutionWrap();
		w->native.TakeReference(r);
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkImageSeparableConvolutionWrap::SetXKernel(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageSeparableConvolutionWrap *wrapper = ObjectWrap::Unwrap<VtkImageSeparableConvolutionWrap>(info.Holder());
	vtkImageSeparableConvolution *native = (vtkImageSeparableConvolution *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject())
	{
		VtkFloatArrayWrap *a0 = ObjectWrap::Unwrap<VtkFloatArrayWrap>(info[0]->ToObject());
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetXKernel(
			(vtkFloatArray *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkImageSeparableConvolutionWrap::SetYKernel(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageSeparableConvolutionWrap *wrapper = ObjectWrap::Unwrap<VtkImageSeparableConvolutionWrap>(info.Holder());
	vtkImageSeparableConvolution *native = (vtkImageSeparableConvolution *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject())
	{
		VtkFloatArrayWrap *a0 = ObjectWrap::Unwrap<VtkFloatArrayWrap>(info[0]->ToObject());
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetYKernel(
			(vtkFloatArray *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkImageSeparableConvolutionWrap::SetZKernel(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageSeparableConvolutionWrap *wrapper = ObjectWrap::Unwrap<VtkImageSeparableConvolutionWrap>(info.Holder());
	vtkImageSeparableConvolution *native = (vtkImageSeparableConvolution *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject())
	{
		VtkFloatArrayWrap *a0 = ObjectWrap::Unwrap<VtkFloatArrayWrap>(info[0]->ToObject());
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetZKernel(
			(vtkFloatArray *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}
