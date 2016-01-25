/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkImageDecomposeFilterWrap.h"
#include "vtkImageCityBlockDistanceWrap.h"
#include "vtkObjectWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::Function> VtkImageCityBlockDistanceWrap::constructor;
Nan::Persistent<v8::FunctionTemplate> VtkImageCityBlockDistanceWrap::ptpl;

VtkImageCityBlockDistanceWrap::VtkImageCityBlockDistanceWrap()
{ }

VtkImageCityBlockDistanceWrap::VtkImageCityBlockDistanceWrap(vtkSmartPointer<vtkImageCityBlockDistance> _native)
{ native = _native; }

VtkImageCityBlockDistanceWrap::~VtkImageCityBlockDistanceWrap()
{ }

void VtkImageCityBlockDistanceWrap::Init(v8::Local<v8::Object> exports)
{
	if (!constructor.IsEmpty()) return;
	Nan::HandleScope scope;

	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkImageDecomposeFilterWrap::Init( exports );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkImageDecomposeFilterWrap::ptpl));

	tpl->SetClassName(Nan::New("VtkImageCityBlockDistanceWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);
	InitTpl(tpl);

	constructor.Reset( tpl->GetFunction() );
	ptpl.Reset( tpl );

	exports->Set(Nan::New("vtkImageCityBlockDistance").ToLocalChecked(),tpl->GetFunction());
	exports->Set(Nan::New("ImageCityBlockDistance").ToLocalChecked(),tpl->GetFunction());
}

void VtkImageCityBlockDistanceWrap::InitTpl(v8::Local<v8::FunctionTemplate> tpl)
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

void VtkImageCityBlockDistanceWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkImageCityBlockDistance> native = vtkSmartPointer<vtkImageCityBlockDistance>::New();
		VtkImageCityBlockDistanceWrap* obj = new VtkImageCityBlockDistanceWrap(native);		obj->Wrap(info.This());
	}
	else
	{
		Nan::Utf8String s(info[0]);
		if(info[0]->ToObject() != vtkNodeJsNoWrap )
			Nan::ThrowError("Parameter Error");
	}

	info.GetReturnValue().Set(info.This());
}

void VtkImageCityBlockDistanceWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageCityBlockDistanceWrap *wrapper = ObjectWrap::Unwrap<VtkImageCityBlockDistanceWrap>(info.Holder());
	vtkImageCityBlockDistance *native = (vtkImageCityBlockDistance *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkImageCityBlockDistanceWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageCityBlockDistanceWrap *wrapper = ObjectWrap::Unwrap<VtkImageCityBlockDistanceWrap>(info.Holder());
	vtkImageCityBlockDistance *native = (vtkImageCityBlockDistance *)wrapper->native.GetPointer();
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

void VtkImageCityBlockDistanceWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageCityBlockDistanceWrap *wrapper = ObjectWrap::Unwrap<VtkImageCityBlockDistanceWrap>(info.Holder());
	vtkImageCityBlockDistance *native = (vtkImageCityBlockDistance *)wrapper->native.GetPointer();
	vtkImageCityBlockDistance * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::Function>(VtkImageCityBlockDistanceWrap::constructor);
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkImageCityBlockDistanceWrap *w = new VtkImageCityBlockDistanceWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkImageCityBlockDistanceWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageCityBlockDistanceWrap *wrapper = ObjectWrap::Unwrap<VtkImageCityBlockDistanceWrap>(info.Holder());
	vtkImageCityBlockDistance *native = (vtkImageCityBlockDistance *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject())
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkImageCityBlockDistance * r;
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
			Nan::New<v8::Function>(VtkImageCityBlockDistanceWrap::constructor);
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkImageCityBlockDistanceWrap *w = new VtkImageCityBlockDistanceWrap();
		w->native.TakeReference(r);
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

