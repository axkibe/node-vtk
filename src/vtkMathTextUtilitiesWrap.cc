/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkObjectWrap.h"
#include "vtkMathTextUtilitiesWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::Function> VtkMathTextUtilitiesWrap::constructor;

VtkMathTextUtilitiesWrap::VtkMathTextUtilitiesWrap()
{ }

VtkMathTextUtilitiesWrap::VtkMathTextUtilitiesWrap(vtkSmartPointer<vtkMathTextUtilities> _native)
{ native = _native; }

VtkMathTextUtilitiesWrap::~VtkMathTextUtilitiesWrap()
{ }

void VtkMathTextUtilitiesWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::HandleScope scope;

	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	tpl->SetClassName(Nan::New("VtkMathTextUtilitiesWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	VtkObjectBaseWrap::InitTpl(tpl);
	VtkObjectWrap::InitTpl(tpl);
	InitTpl(tpl);

	constructor.Reset( tpl->GetFunction() );

	exports->Set(Nan::New("vtkMathTextUtilities").ToLocalChecked(),tpl->GetFunction());
	exports->Set(Nan::New("MathTextUtilities").ToLocalChecked(),tpl->GetFunction());
}

void VtkMathTextUtilitiesWrap::InitTpl(v8::Local<v8::FunctionTemplate> tpl)
{
	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "GetInstance", GetInstance);
	Nan::SetPrototypeMethod(tpl, "getInstance", GetInstance);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetInstance", SetInstance);
	Nan::SetPrototypeMethod(tpl, "setInstance", SetInstance);

}

void VtkMathTextUtilitiesWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkMathTextUtilities> native = vtkSmartPointer<vtkMathTextUtilities>::New();
		VtkMathTextUtilitiesWrap* obj = new VtkMathTextUtilitiesWrap(native);		obj->Wrap(info.This());
	}
	else
	{
		Nan::Utf8String s(info[0]);
		if(info[0]->ToObject() != vtkNodeJsNoWrap )
			Nan::ThrowError("Parameter Error");
	}

	info.GetReturnValue().Set(info.This());
}

void VtkMathTextUtilitiesWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkMathTextUtilitiesWrap *wrapper = ObjectWrap::Unwrap<VtkMathTextUtilitiesWrap>(info.Holder());
	vtkMathTextUtilities *native = (vtkMathTextUtilities *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkMathTextUtilitiesWrap::GetInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkMathTextUtilitiesWrap *wrapper = ObjectWrap::Unwrap<VtkMathTextUtilitiesWrap>(info.Holder());
	vtkMathTextUtilities *native = (vtkMathTextUtilities *)wrapper->native.GetPointer();
	vtkMathTextUtilities * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetInstance();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::Function>(VtkMathTextUtilitiesWrap::constructor);
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkMathTextUtilitiesWrap *w = new VtkMathTextUtilitiesWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkMathTextUtilitiesWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkMathTextUtilitiesWrap *wrapper = ObjectWrap::Unwrap<VtkMathTextUtilitiesWrap>(info.Holder());
	vtkMathTextUtilities *native = (vtkMathTextUtilities *)wrapper->native.GetPointer();
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

void VtkMathTextUtilitiesWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkMathTextUtilitiesWrap *wrapper = ObjectWrap::Unwrap<VtkMathTextUtilitiesWrap>(info.Holder());
	vtkMathTextUtilities *native = (vtkMathTextUtilities *)wrapper->native.GetPointer();
	vtkMathTextUtilities * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::Function>(VtkMathTextUtilitiesWrap::constructor);
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkMathTextUtilitiesWrap *w = new VtkMathTextUtilitiesWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkMathTextUtilitiesWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkMathTextUtilitiesWrap *wrapper = ObjectWrap::Unwrap<VtkMathTextUtilitiesWrap>(info.Holder());
	vtkMathTextUtilities *native = (vtkMathTextUtilities *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject())
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkMathTextUtilities * r;
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
			Nan::New<v8::Function>(VtkMathTextUtilitiesWrap::constructor);
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkMathTextUtilitiesWrap *w = new VtkMathTextUtilitiesWrap();
		w->native.TakeReference(r);
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkMathTextUtilitiesWrap::SetInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkMathTextUtilitiesWrap *wrapper = ObjectWrap::Unwrap<VtkMathTextUtilitiesWrap>(info.Holder());
	vtkMathTextUtilities *native = (vtkMathTextUtilities *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject())
	{
		VtkMathTextUtilitiesWrap *a0 = ObjectWrap::Unwrap<VtkMathTextUtilitiesWrap>(info[0]->ToObject());
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetInstance(
			(vtkMathTextUtilities *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

