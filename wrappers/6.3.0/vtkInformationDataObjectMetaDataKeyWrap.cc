/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkInformationDataObjectKeyWrap.h"
#include "vtkInformationDataObjectMetaDataKeyWrap.h"
#include "vtkObjectWrap.h"
#include "vtkInformationWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkInformationDataObjectMetaDataKeyWrap::ptpl;

VtkInformationDataObjectMetaDataKeyWrap::VtkInformationDataObjectMetaDataKeyWrap()
{ }

VtkInformationDataObjectMetaDataKeyWrap::VtkInformationDataObjectMetaDataKeyWrap(vtkSmartPointer<vtkInformationDataObjectMetaDataKey> _native)
{ native = _native; }

VtkInformationDataObjectMetaDataKeyWrap::~VtkInformationDataObjectMetaDataKeyWrap()
{ }

void VtkInformationDataObjectMetaDataKeyWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkInformationDataObjectMetaDataKey").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("InformationDataObjectMetaDataKey").ToLocalChecked(), ConstructorGetter);
}

void VtkInformationDataObjectMetaDataKeyWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkInformationDataObjectMetaDataKeyWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkInformationDataObjectKeyWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkInformationDataObjectKeyWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkInformationDataObjectMetaDataKeyWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "CopyDefaultInformation", CopyDefaultInformation);
	Nan::SetPrototypeMethod(tpl, "copyDefaultInformation", CopyDefaultInformation);

	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "MakeKey", MakeKey);
	Nan::SetPrototypeMethod(tpl, "makeKey", MakeKey);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	ptpl.Reset( tpl );
}

void VtkInformationDataObjectMetaDataKeyWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
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
		Nan::Utf8String s(info[0]);
		if(info[0]->ToObject() != vtkNodeJsNoWrap )
			Nan::ThrowError("Parameter Error");
	}

	info.GetReturnValue().Set(info.This());
}

void VtkInformationDataObjectMetaDataKeyWrap::CopyDefaultInformation(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkInformationDataObjectMetaDataKeyWrap *wrapper = ObjectWrap::Unwrap<VtkInformationDataObjectMetaDataKeyWrap>(info.Holder());
	vtkInformationDataObjectMetaDataKey *native = (vtkInformationDataObjectMetaDataKey *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkInformationWrap::ptpl))->HasInstance(info[0]))
	{
		VtkInformationWrap *a0 = ObjectWrap::Unwrap<VtkInformationWrap>(info[0]->ToObject());
		if(info.Length() > 1 && info[1]->IsObject() && (Nan::New(VtkInformationWrap::ptpl))->HasInstance(info[1]))
		{
			VtkInformationWrap *a1 = ObjectWrap::Unwrap<VtkInformationWrap>(info[1]->ToObject());
			if(info.Length() > 2 && info[2]->IsObject() && (Nan::New(VtkInformationWrap::ptpl))->HasInstance(info[2]))
			{
				VtkInformationWrap *a2 = ObjectWrap::Unwrap<VtkInformationWrap>(info[2]->ToObject());
				if(info.Length() != 3)
				{
					Nan::ThrowError("Too many parameters.");
					return;
				}
				native->CopyDefaultInformation(
					(vtkInformation *) a0->native.GetPointer(),
					(vtkInformation *) a1->native.GetPointer(),
					(vtkInformation *) a2->native.GetPointer()
				);
				return;
			}
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkInformationDataObjectMetaDataKeyWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkInformationDataObjectMetaDataKeyWrap *wrapper = ObjectWrap::Unwrap<VtkInformationDataObjectMetaDataKeyWrap>(info.Holder());
	vtkInformationDataObjectMetaDataKey *native = (vtkInformationDataObjectMetaDataKey *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkInformationDataObjectMetaDataKeyWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkInformationDataObjectMetaDataKeyWrap *wrapper = ObjectWrap::Unwrap<VtkInformationDataObjectMetaDataKeyWrap>(info.Holder());
	vtkInformationDataObjectMetaDataKey *native = (vtkInformationDataObjectMetaDataKey *)wrapper->native.GetPointer();
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

void VtkInformationDataObjectMetaDataKeyWrap::MakeKey(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkInformationDataObjectMetaDataKeyWrap *wrapper = ObjectWrap::Unwrap<VtkInformationDataObjectMetaDataKeyWrap>(info.Holder());
	vtkInformationDataObjectMetaDataKey *native = (vtkInformationDataObjectMetaDataKey *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsString())
	{
		Nan::Utf8String a0(info[0]);
		if(info.Length() > 1 && info[1]->IsString())
		{
			Nan::Utf8String a1(info[1]);
			vtkInformationDataObjectMetaDataKey * r;
			if(info.Length() != 2)
			{
				Nan::ThrowError("Too many parameters.");
				return;
			}
			r = native->MakeKey(
				*a0,
				*a1
			);
				VtkInformationDataObjectMetaDataKeyWrap::InitPtpl();
			v8::Local<v8::Value> argv[1] =
				{ Nan::New(vtkNodeJsNoWrap) };
			v8::Local<v8::Function> cons =
				Nan::New<v8::FunctionTemplate>(VtkInformationDataObjectMetaDataKeyWrap::ptpl)->GetFunction();
			v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
			VtkInformationDataObjectMetaDataKeyWrap *w = new VtkInformationDataObjectMetaDataKeyWrap();
			w->native.TakeReference(r);
			w->Wrap(wo);
			info.GetReturnValue().Set(wo);
			return;
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkInformationDataObjectMetaDataKeyWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkInformationDataObjectMetaDataKeyWrap *wrapper = ObjectWrap::Unwrap<VtkInformationDataObjectMetaDataKeyWrap>(info.Holder());
	vtkInformationDataObjectMetaDataKey *native = (vtkInformationDataObjectMetaDataKey *)wrapper->native.GetPointer();
	vtkInformationDataObjectMetaDataKey * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
		VtkInformationDataObjectMetaDataKeyWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkInformationDataObjectMetaDataKeyWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkInformationDataObjectMetaDataKeyWrap *w = new VtkInformationDataObjectMetaDataKeyWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkInformationDataObjectMetaDataKeyWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkInformationDataObjectMetaDataKeyWrap *wrapper = ObjectWrap::Unwrap<VtkInformationDataObjectMetaDataKeyWrap>(info.Holder());
	vtkInformationDataObjectMetaDataKey *native = (vtkInformationDataObjectMetaDataKey *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkInformationDataObjectMetaDataKey * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObject *) a0->native.GetPointer()
		);
			VtkInformationDataObjectMetaDataKeyWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkInformationDataObjectMetaDataKeyWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkInformationDataObjectMetaDataKeyWrap *w = new VtkInformationDataObjectMetaDataKeyWrap();
		w->native.TakeReference(r);
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

