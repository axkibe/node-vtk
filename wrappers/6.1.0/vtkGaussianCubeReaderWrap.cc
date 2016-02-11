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
Nan::Persistent<v8::FunctionTemplate> VtkGaussianCubeReaderWrap::ptpl;

VtkGaussianCubeReaderWrap::VtkGaussianCubeReaderWrap()
{ }

VtkGaussianCubeReaderWrap::VtkGaussianCubeReaderWrap(vtkSmartPointer<vtkGaussianCubeReader> _native)
{ native = _native; }

VtkGaussianCubeReaderWrap::~VtkGaussianCubeReaderWrap()
{ }

void VtkGaussianCubeReaderWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkGaussianCubeReader").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("GaussianCubeReader").ToLocalChecked(), ConstructorGetter);
}

void VtkGaussianCubeReaderWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkGaussianCubeReaderWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkMoleculeReaderBaseWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkMoleculeReaderBaseWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkGaussianCubeReaderWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

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

	ptpl.Reset( tpl );
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
		VtkGaussianCubeReaderWrap* obj = new VtkGaussianCubeReaderWrap(native);
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
	VtkImageDataWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkImageDataWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkImageDataWrap *w = new VtkImageDataWrap();
	w->native = r;
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
	VtkTransformWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkTransformWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkTransformWrap *w = new VtkTransformWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkGaussianCubeReaderWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGaussianCubeReaderWrap *wrapper = ObjectWrap::Unwrap<VtkGaussianCubeReaderWrap>(info.Holder());
	vtkGaussianCubeReader *native = (vtkGaussianCubeReader *)wrapper->native.GetPointer();
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
	VtkGaussianCubeReaderWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkGaussianCubeReaderWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkGaussianCubeReaderWrap *w = new VtkGaussianCubeReaderWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkGaussianCubeReaderWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGaussianCubeReaderWrap *wrapper = ObjectWrap::Unwrap<VtkGaussianCubeReaderWrap>(info.Holder());
	vtkGaussianCubeReader *native = (vtkGaussianCubeReader *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectWrap::ptpl))->HasInstance(info[0]))
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
		VtkGaussianCubeReaderWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkGaussianCubeReaderWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkGaussianCubeReaderWrap *w = new VtkGaussianCubeReaderWrap();
		w->native = r;
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
	if(info.Length() > 0 && info[0]->IsString())
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

