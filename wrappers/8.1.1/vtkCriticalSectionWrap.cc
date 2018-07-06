/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>

#include "vtkObjectWrap.h"
#include "vtkCriticalSectionWrap.h"
#include "vtkObjectBaseWrap.h"
#include "../../plus/plus.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkCriticalSectionWrap::ptpl;

VtkCriticalSectionWrap::VtkCriticalSectionWrap()
{ }

VtkCriticalSectionWrap::VtkCriticalSectionWrap(vtkSmartPointer<vtkCriticalSection> _native)
{ native = _native; }

VtkCriticalSectionWrap::~VtkCriticalSectionWrap()
{ }

void VtkCriticalSectionWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkCriticalSection").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("CriticalSection").ToLocalChecked(), ConstructorGetter);
}

void VtkCriticalSectionWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkCriticalSectionWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkObjectWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkObjectWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkCriticalSectionWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "Lock", Lock);
	Nan::SetPrototypeMethod(tpl, "lock", Lock);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "Unlock", Unlock);
	Nan::SetPrototypeMethod(tpl, "unlock", Unlock);

#ifdef VTK_NODE_PLUS_VTKCRITICALSECTIONWRAP_INITPTPL
	VTK_NODE_PLUS_VTKCRITICALSECTIONWRAP_INITPTPL
#endif
	ptpl.Reset( tpl );
}

void VtkCriticalSectionWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkCriticalSection> native = vtkSmartPointer<vtkCriticalSection>::New();
		VtkCriticalSectionWrap* obj = new VtkCriticalSectionWrap(native);
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

void VtkCriticalSectionWrap::Lock(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCriticalSectionWrap *wrapper = ObjectWrap::Unwrap<VtkCriticalSectionWrap>(info.Holder());
	vtkCriticalSection *native = (vtkCriticalSection *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->Lock();
}

void VtkCriticalSectionWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCriticalSectionWrap *wrapper = ObjectWrap::Unwrap<VtkCriticalSectionWrap>(info.Holder());
	vtkCriticalSection *native = (vtkCriticalSection *)wrapper->native.GetPointer();
	vtkCriticalSection * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
	VtkCriticalSectionWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkCriticalSectionWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkCriticalSectionWrap *w = new VtkCriticalSectionWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkCriticalSectionWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCriticalSectionWrap *wrapper = ObjectWrap::Unwrap<VtkCriticalSectionWrap>(info.Holder());
	vtkCriticalSection *native = (vtkCriticalSection *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectBaseWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectBaseWrap *a0 = ObjectWrap::Unwrap<VtkObjectBaseWrap>(info[0]->ToObject());
		vtkCriticalSection * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObjectBase *) a0->native.GetPointer()
		);
		VtkCriticalSectionWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkCriticalSectionWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkCriticalSectionWrap *w = new VtkCriticalSectionWrap();
		w->native = r;
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkCriticalSectionWrap::Unlock(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCriticalSectionWrap *wrapper = ObjectWrap::Unwrap<VtkCriticalSectionWrap>(info.Holder());
	vtkCriticalSection *native = (vtkCriticalSection *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->Unlock();
}

