/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkObjectWrap.h"
#include "vtkPeriodicTableWrap.h"
#include "vtkLookupTableWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::Function> VtkPeriodicTableWrap::constructor;
Nan::Persistent<v8::FunctionTemplate> VtkPeriodicTableWrap::ptpl;

VtkPeriodicTableWrap::VtkPeriodicTableWrap()
{ }

VtkPeriodicTableWrap::VtkPeriodicTableWrap(vtkSmartPointer<vtkPeriodicTable> _native)
{ native = _native; }

VtkPeriodicTableWrap::~VtkPeriodicTableWrap()
{ }

void VtkPeriodicTableWrap::Init(v8::Local<v8::Object> exports)
{
	if (!constructor.IsEmpty()) return;
	Nan::HandleScope scope;

	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkObjectWrap::Init( exports );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkObjectWrap::ptpl));

	tpl->SetClassName(Nan::New("VtkPeriodicTableWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);
	InitTpl(tpl);

	constructor.Reset( tpl->GetFunction() );
	ptpl.Reset( tpl );

	exports->Set(Nan::New("vtkPeriodicTable").ToLocalChecked(),tpl->GetFunction());
	exports->Set(Nan::New("PeriodicTable").ToLocalChecked(),tpl->GetFunction());
}

void VtkPeriodicTableWrap::InitTpl(v8::Local<v8::FunctionTemplate> tpl)
{
	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "GetDefaultLUT", GetDefaultLUT);
	Nan::SetPrototypeMethod(tpl, "getDefaultLUT", GetDefaultLUT);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

}

void VtkPeriodicTableWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkPeriodicTable> native = vtkSmartPointer<vtkPeriodicTable>::New();
		VtkPeriodicTableWrap* obj = new VtkPeriodicTableWrap(native);		obj->Wrap(info.This());
	}
	else
	{
		Nan::Utf8String s(info[0]);
		if(info[0]->ToObject() != vtkNodeJsNoWrap )
			Nan::ThrowError("Parameter Error");
	}

	info.GetReturnValue().Set(info.This());
}

void VtkPeriodicTableWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPeriodicTableWrap *wrapper = ObjectWrap::Unwrap<VtkPeriodicTableWrap>(info.Holder());
	vtkPeriodicTable *native = (vtkPeriodicTable *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkPeriodicTableWrap::GetDefaultLUT(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPeriodicTableWrap *wrapper = ObjectWrap::Unwrap<VtkPeriodicTableWrap>(info.Holder());
	vtkPeriodicTable *native = (vtkPeriodicTable *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject())
	{
		VtkLookupTableWrap *a0 = ObjectWrap::Unwrap<VtkLookupTableWrap>(info[0]->ToObject());
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->GetDefaultLUT(
			(vtkLookupTable *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkPeriodicTableWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPeriodicTableWrap *wrapper = ObjectWrap::Unwrap<VtkPeriodicTableWrap>(info.Holder());
	vtkPeriodicTable *native = (vtkPeriodicTable *)wrapper->native.GetPointer();
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

void VtkPeriodicTableWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPeriodicTableWrap *wrapper = ObjectWrap::Unwrap<VtkPeriodicTableWrap>(info.Holder());
	vtkPeriodicTable *native = (vtkPeriodicTable *)wrapper->native.GetPointer();
	vtkPeriodicTable * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::Function>(VtkPeriodicTableWrap::constructor);
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkPeriodicTableWrap *w = new VtkPeriodicTableWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkPeriodicTableWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPeriodicTableWrap *wrapper = ObjectWrap::Unwrap<VtkPeriodicTableWrap>(info.Holder());
	vtkPeriodicTable *native = (vtkPeriodicTable *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject())
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkPeriodicTable * r;
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
			Nan::New<v8::Function>(VtkPeriodicTableWrap::constructor);
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkPeriodicTableWrap *w = new VtkPeriodicTableWrap();
		w->native.TakeReference(r);
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}
