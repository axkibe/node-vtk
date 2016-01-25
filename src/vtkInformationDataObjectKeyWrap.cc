/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkInformationKeyWrap.h"
#include "vtkInformationDataObjectKeyWrap.h"
#include "vtkObjectWrap.h"
#include "vtkInformationWrap.h"
#include "vtkDataObjectWrap.h"
#include "vtkGarbageCollectorWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::Function> VtkInformationDataObjectKeyWrap::constructor;

VtkInformationDataObjectKeyWrap::VtkInformationDataObjectKeyWrap()
{ }

VtkInformationDataObjectKeyWrap::VtkInformationDataObjectKeyWrap(vtkSmartPointer<vtkInformationDataObjectKey> _native)
{ native = _native; }

VtkInformationDataObjectKeyWrap::~VtkInformationDataObjectKeyWrap()
{ }

void VtkInformationDataObjectKeyWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::HandleScope scope;

	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	tpl->SetClassName(Nan::New("VtkInformationDataObjectKeyWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	VtkObjectBaseWrap::InitTpl(tpl);
	VtkInformationKeyWrap::InitTpl(tpl);
	InitTpl(tpl);

	constructor.Reset( tpl->GetFunction() );

	exports->Set(Nan::New("vtkInformationDataObjectKey").ToLocalChecked(),tpl->GetFunction());
	exports->Set(Nan::New("InformationDataObjectKey").ToLocalChecked(),tpl->GetFunction());
}

void VtkInformationDataObjectKeyWrap::InitTpl(v8::Local<v8::FunctionTemplate> tpl)
{
	Nan::SetPrototypeMethod(tpl, "Get", Get);
	Nan::SetPrototypeMethod(tpl, "get", Get);

	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "Report", Report);
	Nan::SetPrototypeMethod(tpl, "report", Report);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "Set", Set);
	Nan::SetPrototypeMethod(tpl, "set", Set);

	Nan::SetPrototypeMethod(tpl, "ShallowCopy", ShallowCopy);
	Nan::SetPrototypeMethod(tpl, "shallowCopy", ShallowCopy);

}

void VtkInformationDataObjectKeyWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
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

void VtkInformationDataObjectKeyWrap::Get(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkInformationDataObjectKeyWrap *wrapper = ObjectWrap::Unwrap<VtkInformationDataObjectKeyWrap>(info.Holder());
	vtkInformationDataObjectKey *native = (vtkInformationDataObjectKey *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject())
	{
		VtkInformationWrap *a0 = ObjectWrap::Unwrap<VtkInformationWrap>(info[0]->ToObject());
		vtkDataObject * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->Get(
			(vtkInformation *) a0->native.GetPointer()
		);
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::Function>(VtkDataObjectWrap::constructor);
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkDataObjectWrap *w = new VtkDataObjectWrap();
		w->native.TakeReference(r);
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkInformationDataObjectKeyWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkInformationDataObjectKeyWrap *wrapper = ObjectWrap::Unwrap<VtkInformationDataObjectKeyWrap>(info.Holder());
	vtkInformationDataObjectKey *native = (vtkInformationDataObjectKey *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkInformationDataObjectKeyWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkInformationDataObjectKeyWrap *wrapper = ObjectWrap::Unwrap<VtkInformationDataObjectKeyWrap>(info.Holder());
	vtkInformationDataObjectKey *native = (vtkInformationDataObjectKey *)wrapper->native.GetPointer();
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

void VtkInformationDataObjectKeyWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkInformationDataObjectKeyWrap *wrapper = ObjectWrap::Unwrap<VtkInformationDataObjectKeyWrap>(info.Holder());
	vtkInformationDataObjectKey *native = (vtkInformationDataObjectKey *)wrapper->native.GetPointer();
	vtkInformationDataObjectKey * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::Function>(VtkInformationDataObjectKeyWrap::constructor);
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkInformationDataObjectKeyWrap *w = new VtkInformationDataObjectKeyWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkInformationDataObjectKeyWrap::Report(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkInformationDataObjectKeyWrap *wrapper = ObjectWrap::Unwrap<VtkInformationDataObjectKeyWrap>(info.Holder());
	vtkInformationDataObjectKey *native = (vtkInformationDataObjectKey *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject())
	{
		VtkInformationWrap *a0 = ObjectWrap::Unwrap<VtkInformationWrap>(info[0]->ToObject());
		if(info.Length() > 1 && info[1]->IsObject())
		{
			VtkGarbageCollectorWrap *a1 = ObjectWrap::Unwrap<VtkGarbageCollectorWrap>(info[1]->ToObject());
			if(info.Length() != 2)
			{
				Nan::ThrowError("Too many parameters.");
				return;
			}
			native->Report(
				(vtkInformation *) a0->native.GetPointer(),
				(vtkGarbageCollector *) a1->native.GetPointer()
			);
			return;
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkInformationDataObjectKeyWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkInformationDataObjectKeyWrap *wrapper = ObjectWrap::Unwrap<VtkInformationDataObjectKeyWrap>(info.Holder());
	vtkInformationDataObjectKey *native = (vtkInformationDataObjectKey *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject())
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkInformationDataObjectKey * r;
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
			Nan::New<v8::Function>(VtkInformationDataObjectKeyWrap::constructor);
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkInformationDataObjectKeyWrap *w = new VtkInformationDataObjectKeyWrap();
		w->native.TakeReference(r);
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkInformationDataObjectKeyWrap::Set(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkInformationDataObjectKeyWrap *wrapper = ObjectWrap::Unwrap<VtkInformationDataObjectKeyWrap>(info.Holder());
	vtkInformationDataObjectKey *native = (vtkInformationDataObjectKey *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject())
	{
		VtkInformationWrap *a0 = ObjectWrap::Unwrap<VtkInformationWrap>(info[0]->ToObject());
		if(info.Length() > 1 && info[1]->IsObject())
		{
			VtkDataObjectWrap *a1 = ObjectWrap::Unwrap<VtkDataObjectWrap>(info[1]->ToObject());
			if(info.Length() != 2)
			{
				Nan::ThrowError("Too many parameters.");
				return;
			}
			native->Set(
				(vtkInformation *) a0->native.GetPointer(),
				(vtkDataObject *) a1->native.GetPointer()
			);
			return;
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkInformationDataObjectKeyWrap::ShallowCopy(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkInformationDataObjectKeyWrap *wrapper = ObjectWrap::Unwrap<VtkInformationDataObjectKeyWrap>(info.Holder());
	vtkInformationDataObjectKey *native = (vtkInformationDataObjectKey *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject())
	{
		VtkInformationWrap *a0 = ObjectWrap::Unwrap<VtkInformationWrap>(info[0]->ToObject());
		if(info.Length() > 1 && info[1]->IsObject())
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

