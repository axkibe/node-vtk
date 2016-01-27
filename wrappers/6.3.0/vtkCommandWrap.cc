/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkObjectBaseWrap.h"
#include "vtkCommandWrap.h"
#include "vtkObjectWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkCommandWrap::ptpl;

VtkCommandWrap::VtkCommandWrap()
{ }

VtkCommandWrap::VtkCommandWrap(vtkSmartPointer<vtkCommand> _native)
{ native = _native; }

VtkCommandWrap::~VtkCommandWrap()
{ }

void VtkCommandWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkCommand").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("Command").ToLocalChecked(), ConstructorGetter);
}

void VtkCommandWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkCommandWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkObjectBaseWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkObjectBaseWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkCommandWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "AbortFlagOff", AbortFlagOff);
	Nan::SetPrototypeMethod(tpl, "abortFlagOff", AbortFlagOff);

	Nan::SetPrototypeMethod(tpl, "AbortFlagOn", AbortFlagOn);
	Nan::SetPrototypeMethod(tpl, "abortFlagOn", AbortFlagOn);

	Nan::SetPrototypeMethod(tpl, "GetAbortFlag", GetAbortFlag);
	Nan::SetPrototypeMethod(tpl, "getAbortFlag", GetAbortFlag);

	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "GetPassiveObserver", GetPassiveObserver);
	Nan::SetPrototypeMethod(tpl, "getPassiveObserver", GetPassiveObserver);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "PassiveObserverOff", PassiveObserverOff);
	Nan::SetPrototypeMethod(tpl, "passiveObserverOff", PassiveObserverOff);

	Nan::SetPrototypeMethod(tpl, "PassiveObserverOn", PassiveObserverOn);
	Nan::SetPrototypeMethod(tpl, "passiveObserverOn", PassiveObserverOn);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetAbortFlag", SetAbortFlag);
	Nan::SetPrototypeMethod(tpl, "setAbortFlag", SetAbortFlag);

	Nan::SetPrototypeMethod(tpl, "SetPassiveObserver", SetPassiveObserver);
	Nan::SetPrototypeMethod(tpl, "setPassiveObserver", SetPassiveObserver);

	ptpl.Reset( tpl );
}

void VtkCommandWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
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

void VtkCommandWrap::AbortFlagOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCommandWrap *wrapper = ObjectWrap::Unwrap<VtkCommandWrap>(info.Holder());
	vtkCommand *native = (vtkCommand *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->AbortFlagOff();
}

void VtkCommandWrap::AbortFlagOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCommandWrap *wrapper = ObjectWrap::Unwrap<VtkCommandWrap>(info.Holder());
	vtkCommand *native = (vtkCommand *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->AbortFlagOn();
}

void VtkCommandWrap::GetAbortFlag(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCommandWrap *wrapper = ObjectWrap::Unwrap<VtkCommandWrap>(info.Holder());
	vtkCommand *native = (vtkCommand *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetAbortFlag();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkCommandWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCommandWrap *wrapper = ObjectWrap::Unwrap<VtkCommandWrap>(info.Holder());
	vtkCommand *native = (vtkCommand *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkCommandWrap::GetPassiveObserver(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCommandWrap *wrapper = ObjectWrap::Unwrap<VtkCommandWrap>(info.Holder());
	vtkCommand *native = (vtkCommand *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetPassiveObserver();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkCommandWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCommandWrap *wrapper = ObjectWrap::Unwrap<VtkCommandWrap>(info.Holder());
	vtkCommand *native = (vtkCommand *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsString())
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

void VtkCommandWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCommandWrap *wrapper = ObjectWrap::Unwrap<VtkCommandWrap>(info.Holder());
	vtkCommand *native = (vtkCommand *)wrapper->native.GetPointer();
	vtkCommand * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
		VtkCommandWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkCommandWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkCommandWrap *w = new VtkCommandWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkCommandWrap::PassiveObserverOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCommandWrap *wrapper = ObjectWrap::Unwrap<VtkCommandWrap>(info.Holder());
	vtkCommand *native = (vtkCommand *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->PassiveObserverOff();
}

void VtkCommandWrap::PassiveObserverOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCommandWrap *wrapper = ObjectWrap::Unwrap<VtkCommandWrap>(info.Holder());
	vtkCommand *native = (vtkCommand *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->PassiveObserverOn();
}

void VtkCommandWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCommandWrap *wrapper = ObjectWrap::Unwrap<VtkCommandWrap>(info.Holder());
	vtkCommand *native = (vtkCommand *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkCommand * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObject *) a0->native.GetPointer()
		);
			VtkCommandWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkCommandWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkCommandWrap *w = new VtkCommandWrap();
		w->native.TakeReference(r);
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkCommandWrap::SetAbortFlag(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCommandWrap *wrapper = ObjectWrap::Unwrap<VtkCommandWrap>(info.Holder());
	vtkCommand *native = (vtkCommand *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetAbortFlag(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkCommandWrap::SetPassiveObserver(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCommandWrap *wrapper = ObjectWrap::Unwrap<VtkCommandWrap>(info.Holder());
	vtkCommand *native = (vtkCommand *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetPassiveObserver(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}
