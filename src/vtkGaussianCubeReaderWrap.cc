/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkMoleculeReaderBaseWrap.h"
#include "vtkGaussianCubeReaderWrap.h"
#include "vtkObjectWrap.h"
#include "vtkTransformWrap.h"
#include "vtkImageDataWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::Function> VtkGaussianCubeReaderWrap::constructor;

VtkGaussianCubeReaderWrap::VtkGaussianCubeReaderWrap()
{ }

VtkGaussianCubeReaderWrap::VtkGaussianCubeReaderWrap(vtkSmartPointer<vtkGaussianCubeReader> _native)
{ native = _native; }

VtkGaussianCubeReaderWrap::~VtkGaussianCubeReaderWrap()
{ }

void VtkGaussianCubeReaderWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::HandleScope scope;

	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	tpl->SetClassName(Nan::New("VtkGaussianCubeReaderWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	VtkObjectBaseWrap::InitTpl(tpl);
	VtkObjectWrap::InitTpl(tpl);
	VtkAlgorithmWrap::InitTpl(tpl);
	VtkPolyDataAlgorithmWrap::InitTpl(tpl);
	VtkMoleculeReaderBaseWrap::InitTpl(tpl);
	InitTpl(tpl);

	constructor.Reset( tpl->GetFunction() );

	exports->Set(Nan::New("vtkGaussianCubeReader").ToLocalChecked(),tpl->GetFunction());
	exports->Set(Nan::New("GaussianCubeReader").ToLocalChecked(),tpl->GetFunction());
}

void VtkGaussianCubeReaderWrap::InitTpl(v8::Local<v8::FunctionTemplate> tpl)
{
	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "GetFileName", GetFileName);
	Nan::SetPrototypeMethod(tpl, "getFileName", GetFileName);

	Nan::SetPrototypeMethod(tpl, "GetGridOutput", GetGridOutput);
	Nan::SetPrototypeMethod(tpl, "getGridOutput", GetGridOutput);

	Nan::SetPrototypeMethod(tpl, "GetTransform", GetTransform);
	Nan::SetPrototypeMethod(tpl, "getTransform", GetTransform);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetFileName", SetFileName);
	Nan::SetPrototypeMethod(tpl, "setFileName", SetFileName);

}

void VtkGaussianCubeReaderWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkGaussianCubeReader> native = vtkSmartPointer<vtkGaussianCubeReader>::New();
		VtkGaussianCubeReaderWrap* obj = new VtkGaussianCubeReaderWrap(native);		obj->Wrap(info.This());
	}
	else
	{
		Nan::Utf8String s(info[0]);
		if(info[0]->ToObject() != vtkNodeJsNoWrap )
			Nan::ThrowError("Parameter Error");
	}

	info.GetReturnValue().Set(info.This());
}

void VtkGaussianCubeReaderWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGaussianCubeReaderWrap *wrapper = ObjectWrap::Unwrap<VtkGaussianCubeReaderWrap>(info.Holder());
	vtkGaussianCubeReader *native = (vtkGaussianCubeReader *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkGaussianCubeReaderWrap::GetFileName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGaussianCubeReaderWrap *wrapper = ObjectWrap::Unwrap<VtkGaussianCubeReaderWrap>(info.Holder());
	vtkGaussianCubeReader *native = (vtkGaussianCubeReader *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetFileName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkGaussianCubeReaderWrap::GetGridOutput(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGaussianCubeReaderWrap *wrapper = ObjectWrap::Unwrap<VtkGaussianCubeReaderWrap>(info.Holder());
	vtkGaussianCubeReader *native = (vtkGaussianCubeReader *)wrapper->native.GetPointer();
	vtkImageData * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetGridOutput();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::Function>(VtkImageDataWrap::constructor);
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkImageDataWrap *w = new VtkImageDataWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkGaussianCubeReaderWrap::GetTransform(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGaussianCubeReaderWrap *wrapper = ObjectWrap::Unwrap<VtkGaussianCubeReaderWrap>(info.Holder());
	vtkGaussianCubeReader *native = (vtkGaussianCubeReader *)wrapper->native.GetPointer();
	vtkTransform * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetTransform();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::Function>(VtkTransformWrap::constructor);
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkTransformWrap *w = new VtkTransformWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkGaussianCubeReaderWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGaussianCubeReaderWrap *wrapper = ObjectWrap::Unwrap<VtkGaussianCubeReaderWrap>(info.Holder());
	vtkGaussianCubeReader *native = (vtkGaussianCubeReader *)wrapper->native.GetPointer();
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

void VtkGaussianCubeReaderWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGaussianCubeReaderWrap *wrapper = ObjectWrap::Unwrap<VtkGaussianCubeReaderWrap>(info.Holder());
	vtkGaussianCubeReader *native = (vtkGaussianCubeReader *)wrapper->native.GetPointer();
	vtkGaussianCubeReader * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::Function>(VtkGaussianCubeReaderWrap::constructor);
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkGaussianCubeReaderWrap *w = new VtkGaussianCubeReaderWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkGaussianCubeReaderWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGaussianCubeReaderWrap *wrapper = ObjectWrap::Unwrap<VtkGaussianCubeReaderWrap>(info.Holder());
	vtkGaussianCubeReader *native = (vtkGaussianCubeReader *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject())
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkGaussianCubeReader * r;
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
			Nan::New<v8::Function>(VtkGaussianCubeReaderWrap::constructor);
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkGaussianCubeReaderWrap *w = new VtkGaussianCubeReaderWrap();
		w->native.TakeReference(r);
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkGaussianCubeReaderWrap::SetFileName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGaussianCubeReaderWrap *wrapper = ObjectWrap::Unwrap<VtkGaussianCubeReaderWrap>(info.Holder());
	vtkGaussianCubeReader *native = (vtkGaussianCubeReader *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		Nan::Utf8String a0(info[0]);
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetFileName(
			*a0
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

