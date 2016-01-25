/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkImageFourierFilterWrap.h"
#include "vtkImageRFFTWrap.h"
#include "vtkObjectWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::Function> VtkImageRFFTWrap::constructor;
Nan::Persistent<v8::FunctionTemplate> VtkImageRFFTWrap::ptpl;

VtkImageRFFTWrap::VtkImageRFFTWrap()
{ }

VtkImageRFFTWrap::VtkImageRFFTWrap(vtkSmartPointer<vtkImageRFFT> _native)
{ native = _native; }

VtkImageRFFTWrap::~VtkImageRFFTWrap()
{ }

void VtkImageRFFTWrap::Init(v8::Local<v8::Object> exports)
{
	if (!constructor.IsEmpty()) return;
	Nan::HandleScope scope;

	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkImageFourierFilterWrap::Init( exports );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkImageFourierFilterWrap::ptpl));

	tpl->SetClassName(Nan::New("VtkImageRFFTWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);
	InitTpl(tpl);

	constructor.Reset( tpl->GetFunction() );
	ptpl.Reset( tpl );

	exports->Set(Nan::New("vtkImageRFFT").ToLocalChecked(),tpl->GetFunction());
	exports->Set(Nan::New("ImageRFFT").ToLocalChecked(),tpl->GetFunction());
}

void VtkImageRFFTWrap::InitTpl(v8::Local<v8::FunctionTemplate> tpl)
{
	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

}

void VtkImageRFFTWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkImageRFFT> native = vtkSmartPointer<vtkImageRFFT>::New();
		VtkImageRFFTWrap* obj = new VtkImageRFFTWrap(native);		obj->Wrap(info.This());
	}
	else
	{
		Nan::Utf8String s(info[0]);
		if(info[0]->ToObject() != vtkNodeJsNoWrap )
			Nan::ThrowError("Parameter Error");
	}

	info.GetReturnValue().Set(info.This());
}

void VtkImageRFFTWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageRFFTWrap *wrapper = ObjectWrap::Unwrap<VtkImageRFFTWrap>(info.Holder());
	vtkImageRFFT *native = (vtkImageRFFT *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkImageRFFTWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageRFFTWrap *wrapper = ObjectWrap::Unwrap<VtkImageRFFTWrap>(info.Holder());
	vtkImageRFFT *native = (vtkImageRFFT *)wrapper->native.GetPointer();
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

void VtkImageRFFTWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageRFFTWrap *wrapper = ObjectWrap::Unwrap<VtkImageRFFTWrap>(info.Holder());
	vtkImageRFFT *native = (vtkImageRFFT *)wrapper->native.GetPointer();
	vtkImageRFFT * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::Function>(VtkImageRFFTWrap::constructor);
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkImageRFFTWrap *w = new VtkImageRFFTWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkImageRFFTWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageRFFTWrap *wrapper = ObjectWrap::Unwrap<VtkImageRFFTWrap>(info.Holder());
	vtkImageRFFT *native = (vtkImageRFFT *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject())
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkImageRFFT * r;
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
			Nan::New<v8::Function>(VtkImageRFFTWrap::constructor);
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkImageRFFTWrap *w = new VtkImageRFFTWrap();
		w->native.TakeReference(r);
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}
