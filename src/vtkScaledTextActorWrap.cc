/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkTextActorWrap.h"
#include "vtkScaledTextActorWrap.h"
#include "vtkObjectWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::Function> VtkScaledTextActorWrap::constructor;
Nan::Persistent<v8::FunctionTemplate> VtkScaledTextActorWrap::ptpl;

VtkScaledTextActorWrap::VtkScaledTextActorWrap()
{ }

VtkScaledTextActorWrap::VtkScaledTextActorWrap(vtkSmartPointer<vtkScaledTextActor> _native)
{ native = _native; }

VtkScaledTextActorWrap::~VtkScaledTextActorWrap()
{ }

void VtkScaledTextActorWrap::Init(v8::Local<v8::Object> exports)
{
	if (!constructor.IsEmpty()) return;
	Nan::HandleScope scope;

	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkTextActorWrap::Init( exports );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkTextActorWrap::ptpl));

	tpl->SetClassName(Nan::New("VtkScaledTextActorWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);
	InitTpl(tpl);

	constructor.Reset( tpl->GetFunction() );
	ptpl.Reset( tpl );

	exports->Set(Nan::New("vtkScaledTextActor").ToLocalChecked(),tpl->GetFunction());
	exports->Set(Nan::New("ScaledTextActor").ToLocalChecked(),tpl->GetFunction());
}

void VtkScaledTextActorWrap::InitTpl(v8::Local<v8::FunctionTemplate> tpl)
{
	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

}

void VtkScaledTextActorWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkScaledTextActor> native = vtkSmartPointer<vtkScaledTextActor>::New();
		VtkScaledTextActorWrap* obj = new VtkScaledTextActorWrap(native);		obj->Wrap(info.This());
	}
	else
	{
		Nan::Utf8String s(info[0]);
		if(info[0]->ToObject() != vtkNodeJsNoWrap )
			Nan::ThrowError("Parameter Error");
	}

	info.GetReturnValue().Set(info.This());
}

void VtkScaledTextActorWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkScaledTextActorWrap *wrapper = ObjectWrap::Unwrap<VtkScaledTextActorWrap>(info.Holder());
	vtkScaledTextActor *native = (vtkScaledTextActor *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkScaledTextActorWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkScaledTextActorWrap *wrapper = ObjectWrap::Unwrap<VtkScaledTextActorWrap>(info.Holder());
	vtkScaledTextActor *native = (vtkScaledTextActor *)wrapper->native.GetPointer();
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

void VtkScaledTextActorWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkScaledTextActorWrap *wrapper = ObjectWrap::Unwrap<VtkScaledTextActorWrap>(info.Holder());
	vtkScaledTextActor *native = (vtkScaledTextActor *)wrapper->native.GetPointer();
	vtkScaledTextActor * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::Function>(VtkScaledTextActorWrap::constructor);
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkScaledTextActorWrap *w = new VtkScaledTextActorWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkScaledTextActorWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkScaledTextActorWrap *wrapper = ObjectWrap::Unwrap<VtkScaledTextActorWrap>(info.Holder());
	vtkScaledTextActor *native = (vtkScaledTextActor *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject())
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkScaledTextActor * r;
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
			Nan::New<v8::Function>(VtkScaledTextActorWrap::constructor);
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkScaledTextActorWrap *w = new VtkScaledTextActorWrap();
		w->native.TakeReference(r);
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

