/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkInformationKeyWrap.h"
#include "vtkInformationVariantKeyWrap.h"
#include "vtkObjectWrap.h"
#include "vtkInformationWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkInformationVariantKeyWrap::ptpl;

VtkInformationVariantKeyWrap::VtkInformationVariantKeyWrap()
{ }

VtkInformationVariantKeyWrap::VtkInformationVariantKeyWrap(vtkSmartPointer<vtkInformationVariantKey> _native)
{ native = _native; }

VtkInformationVariantKeyWrap::~VtkInformationVariantKeyWrap()
{ }

void VtkInformationVariantKeyWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkInformationVariantKey").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("InformationVariantKey").ToLocalChecked(), ConstructorGetter);
}

void VtkInformationVariantKeyWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkInformationVariantKeyWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkInformationKeyWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkInformationKeyWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkInformationVariantKeyWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "ShallowCopy", ShallowCopy);
	Nan::SetPrototypeMethod(tpl, "shallowCopy", ShallowCopy);

	ptpl.Reset( tpl );
}

void VtkInformationVariantKeyWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		Nan::ThrowError("Cannot create instance of abstract class.");
		return;
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

void VtkInformationVariantKeyWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkInformationVariantKeyWrap *wrapper = ObjectWrap::Unwrap<VtkInformationVariantKeyWrap>(info.Holder());
	vtkInformationVariantKey *native = (vtkInformationVariantKey *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkInformationVariantKeyWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkInformationVariantKeyWrap *wrapper = ObjectWrap::Unwrap<VtkInformationVariantKeyWrap>(info.Holder());
	vtkInformationVariantKey *native = (vtkInformationVariantKey *)wrapper->native.GetPointer();
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

void VtkInformationVariantKeyWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkInformationVariantKeyWrap *wrapper = ObjectWrap::Unwrap<VtkInformationVariantKeyWrap>(info.Holder());
	vtkInformationVariantKey *native = (vtkInformationVariantKey *)wrapper->native.GetPointer();
	vtkInformationVariantKey * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
		VtkInformationVariantKeyWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkInformationVariantKeyWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkInformationVariantKeyWrap *w = new VtkInformationVariantKeyWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkInformationVariantKeyWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkInformationVariantKeyWrap *wrapper = ObjectWrap::Unwrap<VtkInformationVariantKeyWrap>(info.Holder());
	vtkInformationVariantKey *native = (vtkInformationVariantKey *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkInformationVariantKey * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObject *) a0->native.GetPointer()
		);
			VtkInformationVariantKeyWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkInformationVariantKeyWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkInformationVariantKeyWrap *w = new VtkInformationVariantKeyWrap();
		w->native = r;
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkInformationVariantKeyWrap::ShallowCopy(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkInformationVariantKeyWrap *wrapper = ObjectWrap::Unwrap<VtkInformationVariantKeyWrap>(info.Holder());
	vtkInformationVariantKey *native = (vtkInformationVariantKey *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkInformationWrap::ptpl))->HasInstance(info[0]))
	{
		VtkInformationWrap *a0 = ObjectWrap::Unwrap<VtkInformationWrap>(info[0]->ToObject());
		if(info.Length() > 1 && info[1]->IsObject() && (Nan::New(VtkInformationWrap::ptpl))->HasInstance(info[1]))
		{
			VtkInformationWrap *a1 = ObjectWrap::Unwrap<VtkInformationWrap>(info[1]->ToObject());
			if(info.Length() != 2)
			{
				Nan::ThrowError("Too many parameters.");
				return;
			}
			native->ShallowCopy(
				(vtkInformation *) a0->native.GetPointer(),
				(vtkInformation *) a1->native.GetPointer()
			);
			return;
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

