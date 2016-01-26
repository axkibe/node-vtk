/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkObjectWrap.h"
#include "vtkConditionVariableWrap.h"
#include "vtkMutexLockWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::Function> VtkConditionVariableWrap::constructor;
Nan::Persistent<v8::FunctionTemplate> VtkConditionVariableWrap::ptpl;

VtkConditionVariableWrap::VtkConditionVariableWrap()
{ }

VtkConditionVariableWrap::VtkConditionVariableWrap(vtkSmartPointer<vtkConditionVariable> _native)
{ native = _native; }

VtkConditionVariableWrap::~VtkConditionVariableWrap()
{ }

void VtkConditionVariableWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkConditionVariable").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("ConditionVariable").ToLocalChecked(), ConstructorGetter);
}

void VtkConditionVariableWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkConditionVariableWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkObjectWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkObjectWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkConditionVariableWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "Broadcast", Broadcast);
	Nan::SetPrototypeMethod(tpl, "broadcast", Broadcast);

	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "Signal", Signal);
	Nan::SetPrototypeMethod(tpl, "signal", Signal);

	Nan::SetPrototypeMethod(tpl, "Wait", Wait);
	Nan::SetPrototypeMethod(tpl, "wait", Wait);

	constructor.Reset( tpl->GetFunction() );
	ptpl.Reset( tpl );
}

void VtkConditionVariableWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkConditionVariable> native = vtkSmartPointer<vtkConditionVariable>::New();
		VtkConditionVariableWrap* obj = new VtkConditionVariableWrap(native);		obj->Wrap(info.This());
	}
	else
	{
		Nan::Utf8String s(info[0]);
		if(info[0]->ToObject() != vtkNodeJsNoWrap )
			Nan::ThrowError("Parameter Error");
	}

	info.GetReturnValue().Set(info.This());
}

void VtkConditionVariableWrap::Broadcast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkConditionVariableWrap *wrapper = ObjectWrap::Unwrap<VtkConditionVariableWrap>(info.Holder());
	vtkConditionVariable *native = (vtkConditionVariable *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->Broadcast();
}

void VtkConditionVariableWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkConditionVariableWrap *wrapper = ObjectWrap::Unwrap<VtkConditionVariableWrap>(info.Holder());
	vtkConditionVariable *native = (vtkConditionVariable *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkConditionVariableWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkConditionVariableWrap *wrapper = ObjectWrap::Unwrap<VtkConditionVariableWrap>(info.Holder());
	vtkConditionVariable *native = (vtkConditionVariable *)wrapper->native.GetPointer();
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

void VtkConditionVariableWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkConditionVariableWrap *wrapper = ObjectWrap::Unwrap<VtkConditionVariableWrap>(info.Holder());
	vtkConditionVariable *native = (vtkConditionVariable *)wrapper->native.GetPointer();
	vtkConditionVariable * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
		VtkConditionVariableWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::Function>(VtkConditionVariableWrap::constructor);
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkConditionVariableWrap *w = new VtkConditionVariableWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkConditionVariableWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkConditionVariableWrap *wrapper = ObjectWrap::Unwrap<VtkConditionVariableWrap>(info.Holder());
	vtkConditionVariable *native = (vtkConditionVariable *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkConditionVariable * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObject *) a0->native.GetPointer()
		);
			VtkConditionVariableWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::Function>(VtkConditionVariableWrap::constructor);
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkConditionVariableWrap *w = new VtkConditionVariableWrap();
		w->native.TakeReference(r);
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkConditionVariableWrap::Signal(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkConditionVariableWrap *wrapper = ObjectWrap::Unwrap<VtkConditionVariableWrap>(info.Holder());
	vtkConditionVariable *native = (vtkConditionVariable *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->Signal();
}

void VtkConditionVariableWrap::Wait(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkConditionVariableWrap *wrapper = ObjectWrap::Unwrap<VtkConditionVariableWrap>(info.Holder());
	vtkConditionVariable *native = (vtkConditionVariable *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkMutexLockWrap::ptpl))->HasInstance(info[0]))
	{
		VtkMutexLockWrap *a0 = ObjectWrap::Unwrap<VtkMutexLockWrap>(info[0]->ToObject());
		int r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->Wait(
			(vtkMutexLock *) a0->native.GetPointer()
		);
		info.GetReturnValue().Set(Nan::New(r));
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

