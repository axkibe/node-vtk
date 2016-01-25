/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkLookupTableWrap.h"
#include "vtkLookupTableWithEnablingWrap.h"
#include "vtkObjectWrap.h"
#include "vtkDataArrayWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::Function> VtkLookupTableWithEnablingWrap::constructor;
Nan::Persistent<v8::FunctionTemplate> VtkLookupTableWithEnablingWrap::ptpl;

VtkLookupTableWithEnablingWrap::VtkLookupTableWithEnablingWrap()
{ }

VtkLookupTableWithEnablingWrap::VtkLookupTableWithEnablingWrap(vtkSmartPointer<vtkLookupTableWithEnabling> _native)
{ native = _native; }

VtkLookupTableWithEnablingWrap::~VtkLookupTableWithEnablingWrap()
{ }

void VtkLookupTableWithEnablingWrap::Init(v8::Local<v8::Object> exports)
{
	if (!constructor.IsEmpty()) return;
	Nan::HandleScope scope;

	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkLookupTableWrap::Init( exports );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkLookupTableWrap::ptpl));

	tpl->SetClassName(Nan::New("VtkLookupTableWithEnablingWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);
	InitTpl(tpl);

	constructor.Reset( tpl->GetFunction() );
	ptpl.Reset( tpl );

	exports->Set(Nan::New("vtkLookupTableWithEnabling").ToLocalChecked(),tpl->GetFunction());
	exports->Set(Nan::New("LookupTableWithEnabling").ToLocalChecked(),tpl->GetFunction());
}

void VtkLookupTableWithEnablingWrap::InitTpl(v8::Local<v8::FunctionTemplate> tpl)
{
	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "GetEnabledArray", GetEnabledArray);
	Nan::SetPrototypeMethod(tpl, "getEnabledArray", GetEnabledArray);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetEnabledArray", SetEnabledArray);
	Nan::SetPrototypeMethod(tpl, "setEnabledArray", SetEnabledArray);

}

void VtkLookupTableWithEnablingWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkLookupTableWithEnabling> native = vtkSmartPointer<vtkLookupTableWithEnabling>::New();
		VtkLookupTableWithEnablingWrap* obj = new VtkLookupTableWithEnablingWrap(native);		obj->Wrap(info.This());
	}
	else
	{
		Nan::Utf8String s(info[0]);
		if(info[0]->ToObject() != vtkNodeJsNoWrap )
			Nan::ThrowError("Parameter Error");
	}

	info.GetReturnValue().Set(info.This());
}

void VtkLookupTableWithEnablingWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkLookupTableWithEnablingWrap *wrapper = ObjectWrap::Unwrap<VtkLookupTableWithEnablingWrap>(info.Holder());
	vtkLookupTableWithEnabling *native = (vtkLookupTableWithEnabling *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkLookupTableWithEnablingWrap::GetEnabledArray(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkLookupTableWithEnablingWrap *wrapper = ObjectWrap::Unwrap<VtkLookupTableWithEnablingWrap>(info.Holder());
	vtkLookupTableWithEnabling *native = (vtkLookupTableWithEnabling *)wrapper->native.GetPointer();
	vtkDataArray * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetEnabledArray();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::Function>(VtkDataArrayWrap::constructor);
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkDataArrayWrap *w = new VtkDataArrayWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkLookupTableWithEnablingWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkLookupTableWithEnablingWrap *wrapper = ObjectWrap::Unwrap<VtkLookupTableWithEnablingWrap>(info.Holder());
	vtkLookupTableWithEnabling *native = (vtkLookupTableWithEnabling *)wrapper->native.GetPointer();
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

void VtkLookupTableWithEnablingWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkLookupTableWithEnablingWrap *wrapper = ObjectWrap::Unwrap<VtkLookupTableWithEnablingWrap>(info.Holder());
	vtkLookupTableWithEnabling *native = (vtkLookupTableWithEnabling *)wrapper->native.GetPointer();
	vtkLookupTableWithEnabling * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::Function>(VtkLookupTableWithEnablingWrap::constructor);
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkLookupTableWithEnablingWrap *w = new VtkLookupTableWithEnablingWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkLookupTableWithEnablingWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkLookupTableWithEnablingWrap *wrapper = ObjectWrap::Unwrap<VtkLookupTableWithEnablingWrap>(info.Holder());
	vtkLookupTableWithEnabling *native = (vtkLookupTableWithEnabling *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject())
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkLookupTableWithEnabling * r;
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
			Nan::New<v8::Function>(VtkLookupTableWithEnablingWrap::constructor);
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkLookupTableWithEnablingWrap *w = new VtkLookupTableWithEnablingWrap();
		w->native.TakeReference(r);
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkLookupTableWithEnablingWrap::SetEnabledArray(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkLookupTableWithEnablingWrap *wrapper = ObjectWrap::Unwrap<VtkLookupTableWithEnablingWrap>(info.Holder());
	vtkLookupTableWithEnabling *native = (vtkLookupTableWithEnabling *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject())
	{
		VtkDataArrayWrap *a0 = ObjectWrap::Unwrap<VtkDataArrayWrap>(info[0]->ToObject());
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetEnabledArray(
			(vtkDataArray *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

