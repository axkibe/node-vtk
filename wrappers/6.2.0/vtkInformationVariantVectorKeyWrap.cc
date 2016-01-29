/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkInformationKeyWrap.h"
#include "vtkInformationVariantVectorKeyWrap.h"
#include "vtkObjectWrap.h"
#include "vtkInformationWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkInformationVariantVectorKeyWrap::ptpl;

VtkInformationVariantVectorKeyWrap::VtkInformationVariantVectorKeyWrap()
{ }

VtkInformationVariantVectorKeyWrap::VtkInformationVariantVectorKeyWrap(vtkSmartPointer<vtkInformationVariantVectorKey> _native)
{ native = _native; }

VtkInformationVariantVectorKeyWrap::~VtkInformationVariantVectorKeyWrap()
{ }

void VtkInformationVariantVectorKeyWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkInformationVariantVectorKey").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("InformationVariantVectorKey").ToLocalChecked(), ConstructorGetter);
}

void VtkInformationVariantVectorKeyWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkInformationVariantVectorKeyWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkInformationKeyWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkInformationKeyWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkInformationVariantVectorKeyWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "Length", Length);
	Nan::SetPrototypeMethod(tpl, "length", Length);

	Nan::SetPrototypeMethod(tpl, "MakeKey", MakeKey);
	Nan::SetPrototypeMethod(tpl, "makeKey", MakeKey);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "ShallowCopy", ShallowCopy);
	Nan::SetPrototypeMethod(tpl, "shallowCopy", ShallowCopy);

	ptpl.Reset( tpl );
}

void VtkInformationVariantVectorKeyWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
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

void VtkInformationVariantVectorKeyWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkInformationVariantVectorKeyWrap *wrapper = ObjectWrap::Unwrap<VtkInformationVariantVectorKeyWrap>(info.Holder());
	vtkInformationVariantVectorKey *native = (vtkInformationVariantVectorKey *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkInformationVariantVectorKeyWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkInformationVariantVectorKeyWrap *wrapper = ObjectWrap::Unwrap<VtkInformationVariantVectorKeyWrap>(info.Holder());
	vtkInformationVariantVectorKey *native = (vtkInformationVariantVectorKey *)wrapper->native.GetPointer();
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

void VtkInformationVariantVectorKeyWrap::Length(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkInformationVariantVectorKeyWrap *wrapper = ObjectWrap::Unwrap<VtkInformationVariantVectorKeyWrap>(info.Holder());
	vtkInformationVariantVectorKey *native = (vtkInformationVariantVectorKey *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkInformationWrap::ptpl))->HasInstance(info[0]))
	{
		VtkInformationWrap *a0 = ObjectWrap::Unwrap<VtkInformationWrap>(info[0]->ToObject());
		int r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->Length(
			(vtkInformation *) a0->native.GetPointer()
		);
		info.GetReturnValue().Set(Nan::New(r));
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkInformationVariantVectorKeyWrap::MakeKey(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkInformationVariantVectorKeyWrap *wrapper = ObjectWrap::Unwrap<VtkInformationVariantVectorKeyWrap>(info.Holder());
	vtkInformationVariantVectorKey *native = (vtkInformationVariantVectorKey *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsString())
	{
		Nan::Utf8String a0(info[0]);
		if(info.Length() > 1 && info[1]->IsString())
		{
			Nan::Utf8String a1(info[1]);
			if(info.Length() > 2 && info[2]->IsInt32())
			{
				vtkInformationVariantVectorKey * r;
				if(info.Length() != 3)
				{
					Nan::ThrowError("Too many parameters.");
					return;
				}
				r = native->MakeKey(
					*a0,
					*a1,
					info[2]->Int32Value()
				);
					VtkInformationVariantVectorKeyWrap::InitPtpl();
				v8::Local<v8::Value> argv[1] =
					{ Nan::New(vtkNodeJsNoWrap) };
				v8::Local<v8::Function> cons =
					Nan::New<v8::FunctionTemplate>(VtkInformationVariantVectorKeyWrap::ptpl)->GetFunction();
				v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
				VtkInformationVariantVectorKeyWrap *w = new VtkInformationVariantVectorKeyWrap();
				w->native = r;
				w->Wrap(wo);
				info.GetReturnValue().Set(wo);
				return;
			}
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkInformationVariantVectorKeyWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkInformationVariantVectorKeyWrap *wrapper = ObjectWrap::Unwrap<VtkInformationVariantVectorKeyWrap>(info.Holder());
	vtkInformationVariantVectorKey *native = (vtkInformationVariantVectorKey *)wrapper->native.GetPointer();
	vtkInformationVariantVectorKey * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
		VtkInformationVariantVectorKeyWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkInformationVariantVectorKeyWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkInformationVariantVectorKeyWrap *w = new VtkInformationVariantVectorKeyWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkInformationVariantVectorKeyWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkInformationVariantVectorKeyWrap *wrapper = ObjectWrap::Unwrap<VtkInformationVariantVectorKeyWrap>(info.Holder());
	vtkInformationVariantVectorKey *native = (vtkInformationVariantVectorKey *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkInformationVariantVectorKey * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObject *) a0->native.GetPointer()
		);
			VtkInformationVariantVectorKeyWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkInformationVariantVectorKeyWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkInformationVariantVectorKeyWrap *w = new VtkInformationVariantVectorKeyWrap();
		w->native = r;
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkInformationVariantVectorKeyWrap::ShallowCopy(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkInformationVariantVectorKeyWrap *wrapper = ObjectWrap::Unwrap<VtkInformationVariantVectorKeyWrap>(info.Holder());
	vtkInformationVariantVectorKey *native = (vtkInformationVariantVectorKey *)wrapper->native.GetPointer();
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

