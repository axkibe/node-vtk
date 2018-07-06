/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>

#include "vtkObjectWrap.h"
#include "vtkMutexLockWrap.h"
#include "vtkObjectBaseWrap.h"
#include "../../plus/plus.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkMutexLockWrap::ptpl;

VtkMutexLockWrap::VtkMutexLockWrap()
{ }

VtkMutexLockWrap::VtkMutexLockWrap(vtkSmartPointer<vtkMutexLock> _native)
{ native = _native; }

VtkMutexLockWrap::~VtkMutexLockWrap()
{ }

void VtkMutexLockWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkMutexLock").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("MutexLock").ToLocalChecked(), ConstructorGetter);
}

void VtkMutexLockWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkMutexLockWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkObjectWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkObjectWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkMutexLockWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "Lock", Lock);
	Nan::SetPrototypeMethod(tpl, "lock", Lock);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "Unlock", Unlock);
	Nan::SetPrototypeMethod(tpl, "unlock", Unlock);

#ifdef VTK_NODE_PLUS_VTKMUTEXLOCKWRAP_INITPTPL
	VTK_NODE_PLUS_VTKMUTEXLOCKWRAP_INITPTPL
#endif
	ptpl.Reset( tpl );
}

void VtkMutexLockWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkMutexLock> native = vtkSmartPointer<vtkMutexLock>::New();
		VtkMutexLockWrap* obj = new VtkMutexLockWrap(native);
		obj->Wrap(info.This());
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

void VtkMutexLockWrap::Lock(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkMutexLockWrap *wrapper = ObjectWrap::Unwrap<VtkMutexLockWrap>(info.Holder());
	vtkMutexLock *native = (vtkMutexLock *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->Lock();
}

void VtkMutexLockWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkMutexLockWrap *wrapper = ObjectWrap::Unwrap<VtkMutexLockWrap>(info.Holder());
	vtkMutexLock *native = (vtkMutexLock *)wrapper->native.GetPointer();
	vtkMutexLock * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
	VtkMutexLockWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkMutexLockWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkMutexLockWrap *w = new VtkMutexLockWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkMutexLockWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkMutexLockWrap *wrapper = ObjectWrap::Unwrap<VtkMutexLockWrap>(info.Holder());
	vtkMutexLock *native = (vtkMutexLock *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectBaseWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectBaseWrap *a0 = ObjectWrap::Unwrap<VtkObjectBaseWrap>(info[0]->ToObject());
		vtkMutexLock * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObjectBase *) a0->native.GetPointer()
		);
		VtkMutexLockWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkMutexLockWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkMutexLockWrap *w = new VtkMutexLockWrap();
		w->native = r;
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkMutexLockWrap::Unlock(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkMutexLockWrap *wrapper = ObjectWrap::Unwrap<VtkMutexLockWrap>(info.Holder());
	vtkMutexLock *native = (vtkMutexLock *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->Unlock();
}

