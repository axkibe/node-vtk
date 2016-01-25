/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkInformationKeyWrap.h"
#include "vtkInformationRequestKeyWrap.h"
#include "vtkObjectWrap.h"
#include "vtkInformationWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::Function> VtkInformationRequestKeyWrap::constructor;
Nan::Persistent<v8::FunctionTemplate> VtkInformationRequestKeyWrap::ptpl;

VtkInformationRequestKeyWrap::VtkInformationRequestKeyWrap()
{ }

VtkInformationRequestKeyWrap::VtkInformationRequestKeyWrap(vtkSmartPointer<vtkInformationRequestKey> _native)
{ native = _native; }

VtkInformationRequestKeyWrap::~VtkInformationRequestKeyWrap()
{ }

void VtkInformationRequestKeyWrap::Init(v8::Local<v8::Object> exports)
{
	if (!constructor.IsEmpty()) return;
	Nan::HandleScope scope;

	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkInformationKeyWrap::Init( exports );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkInformationKeyWrap::ptpl));

	tpl->SetClassName(Nan::New("VtkInformationRequestKeyWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);
	InitTpl(tpl);

	constructor.Reset( tpl->GetFunction() );
	ptpl.Reset( tpl );

	exports->Set(Nan::New("vtkInformationRequestKey").ToLocalChecked(),tpl->GetFunction());
	exports->Set(Nan::New("InformationRequestKey").ToLocalChecked(),tpl->GetFunction());
}

void VtkInformationRequestKeyWrap::InitTpl(v8::Local<v8::FunctionTemplate> tpl)
{
	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "Has", Has);
	Nan::SetPrototypeMethod(tpl, "has", Has);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "Remove", Remove);
	Nan::SetPrototypeMethod(tpl, "remove", Remove);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "Set", Set);
	Nan::SetPrototypeMethod(tpl, "set", Set);

	Nan::SetPrototypeMethod(tpl, "ShallowCopy", ShallowCopy);
	Nan::SetPrototypeMethod(tpl, "shallowCopy", ShallowCopy);

}

void VtkInformationRequestKeyWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
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

void VtkInformationRequestKeyWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkInformationRequestKeyWrap *wrapper = ObjectWrap::Unwrap<VtkInformationRequestKeyWrap>(info.Holder());
	vtkInformationRequestKey *native = (vtkInformationRequestKey *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkInformationRequestKeyWrap::Has(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkInformationRequestKeyWrap *wrapper = ObjectWrap::Unwrap<VtkInformationRequestKeyWrap>(info.Holder());
	vtkInformationRequestKey *native = (vtkInformationRequestKey *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject())
	{
		VtkInformationWrap *a0 = ObjectWrap::Unwrap<VtkInformationWrap>(info[0]->ToObject());
		int r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->Has(
			(vtkInformation *) a0->native.GetPointer()
		);
		info.GetReturnValue().Set(Nan::New(r));
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkInformationRequestKeyWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkInformationRequestKeyWrap *wrapper = ObjectWrap::Unwrap<VtkInformationRequestKeyWrap>(info.Holder());
	vtkInformationRequestKey *native = (vtkInformationRequestKey *)wrapper->native.GetPointer();
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

void VtkInformationRequestKeyWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkInformationRequestKeyWrap *wrapper = ObjectWrap::Unwrap<VtkInformationRequestKeyWrap>(info.Holder());
	vtkInformationRequestKey *native = (vtkInformationRequestKey *)wrapper->native.GetPointer();
	vtkInformationRequestKey * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::Function>(VtkInformationRequestKeyWrap::constructor);
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkInformationRequestKeyWrap *w = new VtkInformationRequestKeyWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkInformationRequestKeyWrap::Remove(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkInformationRequestKeyWrap *wrapper = ObjectWrap::Unwrap<VtkInformationRequestKeyWrap>(info.Holder());
	vtkInformationRequestKey *native = (vtkInformationRequestKey *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject())
	{
		VtkInformationWrap *a0 = ObjectWrap::Unwrap<VtkInformationWrap>(info[0]->ToObject());
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->Remove(
			(vtkInformation *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkInformationRequestKeyWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkInformationRequestKeyWrap *wrapper = ObjectWrap::Unwrap<VtkInformationRequestKeyWrap>(info.Holder());
	vtkInformationRequestKey *native = (vtkInformationRequestKey *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject())
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkInformationRequestKey * r;
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
			Nan::New<v8::Function>(VtkInformationRequestKeyWrap::constructor);
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkInformationRequestKeyWrap *w = new VtkInformationRequestKeyWrap();
		w->native.TakeReference(r);
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkInformationRequestKeyWrap::Set(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkInformationRequestKeyWrap *wrapper = ObjectWrap::Unwrap<VtkInformationRequestKeyWrap>(info.Holder());
	vtkInformationRequestKey *native = (vtkInformationRequestKey *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject())
	{
		VtkInformationWrap *a0 = ObjectWrap::Unwrap<VtkInformationWrap>(info[0]->ToObject());
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->Set(
			(vtkInformation *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkInformationRequestKeyWrap::ShallowCopy(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkInformationRequestKeyWrap *wrapper = ObjectWrap::Unwrap<VtkInformationRequestKeyWrap>(info.Holder());
	vtkInformationRequestKey *native = (vtkInformationRequestKey *)wrapper->native.GetPointer();
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
