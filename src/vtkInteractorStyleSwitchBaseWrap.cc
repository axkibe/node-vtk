/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkInteractorStyleWrap.h"
#include "vtkInteractorStyleSwitchBaseWrap.h"
#include "vtkObjectWrap.h"
#include "vtkRenderWindowInteractorWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::Function> VtkInteractorStyleSwitchBaseWrap::constructor;
Nan::Persistent<v8::FunctionTemplate> VtkInteractorStyleSwitchBaseWrap::ptpl;

VtkInteractorStyleSwitchBaseWrap::VtkInteractorStyleSwitchBaseWrap()
{ }

VtkInteractorStyleSwitchBaseWrap::VtkInteractorStyleSwitchBaseWrap(vtkSmartPointer<vtkInteractorStyleSwitchBase> _native)
{ native = _native; }

VtkInteractorStyleSwitchBaseWrap::~VtkInteractorStyleSwitchBaseWrap()
{ }

void VtkInteractorStyleSwitchBaseWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkInteractorStyleSwitchBase").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("InteractorStyleSwitchBase").ToLocalChecked(), ConstructorGetter);
}

void VtkInteractorStyleSwitchBaseWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkInteractorStyleSwitchBaseWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkInteractorStyleWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkInteractorStyleWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkInteractorStyleSwitchBaseWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "GetInteractor", GetInteractor);
	Nan::SetPrototypeMethod(tpl, "getInteractor", GetInteractor);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	constructor.Reset( tpl->GetFunction() );
	ptpl.Reset( tpl );
}

void VtkInteractorStyleSwitchBaseWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkInteractorStyleSwitchBase> native = vtkSmartPointer<vtkInteractorStyleSwitchBase>::New();
		VtkInteractorStyleSwitchBaseWrap* obj = new VtkInteractorStyleSwitchBaseWrap(native);		obj->Wrap(info.This());
	}
	else
	{
		Nan::Utf8String s(info[0]);
		if(info[0]->ToObject() != vtkNodeJsNoWrap )
			Nan::ThrowError("Parameter Error");
	}

	info.GetReturnValue().Set(info.This());
}

void VtkInteractorStyleSwitchBaseWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkInteractorStyleSwitchBaseWrap *wrapper = ObjectWrap::Unwrap<VtkInteractorStyleSwitchBaseWrap>(info.Holder());
	vtkInteractorStyleSwitchBase *native = (vtkInteractorStyleSwitchBase *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkInteractorStyleSwitchBaseWrap::GetInteractor(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkInteractorStyleSwitchBaseWrap *wrapper = ObjectWrap::Unwrap<VtkInteractorStyleSwitchBaseWrap>(info.Holder());
	vtkInteractorStyleSwitchBase *native = (vtkInteractorStyleSwitchBase *)wrapper->native.GetPointer();
	vtkRenderWindowInteractor * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetInteractor();
		VtkRenderWindowInteractorWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::Function>(VtkRenderWindowInteractorWrap::constructor);
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkRenderWindowInteractorWrap *w = new VtkRenderWindowInteractorWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkInteractorStyleSwitchBaseWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkInteractorStyleSwitchBaseWrap *wrapper = ObjectWrap::Unwrap<VtkInteractorStyleSwitchBaseWrap>(info.Holder());
	vtkInteractorStyleSwitchBase *native = (vtkInteractorStyleSwitchBase *)wrapper->native.GetPointer();
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

void VtkInteractorStyleSwitchBaseWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkInteractorStyleSwitchBaseWrap *wrapper = ObjectWrap::Unwrap<VtkInteractorStyleSwitchBaseWrap>(info.Holder());
	vtkInteractorStyleSwitchBase *native = (vtkInteractorStyleSwitchBase *)wrapper->native.GetPointer();
	vtkInteractorStyleSwitchBase * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
		VtkInteractorStyleSwitchBaseWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::Function>(VtkInteractorStyleSwitchBaseWrap::constructor);
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkInteractorStyleSwitchBaseWrap *w = new VtkInteractorStyleSwitchBaseWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkInteractorStyleSwitchBaseWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkInteractorStyleSwitchBaseWrap *wrapper = ObjectWrap::Unwrap<VtkInteractorStyleSwitchBaseWrap>(info.Holder());
	vtkInteractorStyleSwitchBase *native = (vtkInteractorStyleSwitchBase *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkInteractorStyleSwitchBase * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObject *) a0->native.GetPointer()
		);
			VtkInteractorStyleSwitchBaseWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::Function>(VtkInteractorStyleSwitchBaseWrap::constructor);
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkInteractorStyleSwitchBaseWrap *w = new VtkInteractorStyleSwitchBaseWrap();
		w->native.TakeReference(r);
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

