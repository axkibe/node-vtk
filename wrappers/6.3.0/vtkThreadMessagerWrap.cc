/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkObjectWrap.h"
#include "vtkThreadMessagerWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkThreadMessagerWrap::ptpl;

VtkThreadMessagerWrap::VtkThreadMessagerWrap()
{ }

VtkThreadMessagerWrap::VtkThreadMessagerWrap(vtkSmartPointer<vtkThreadMessager> _native)
{ native = _native; }

VtkThreadMessagerWrap::~VtkThreadMessagerWrap()
{ }

void VtkThreadMessagerWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkThreadMessager").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("ThreadMessager").ToLocalChecked(), ConstructorGetter);
}

void VtkThreadMessagerWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkThreadMessagerWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkObjectWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkObjectWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkThreadMessagerWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "DisableWaitForReceiver", DisableWaitForReceiver);
	Nan::SetPrototypeMethod(tpl, "disableWaitForReceiver", DisableWaitForReceiver);

	Nan::SetPrototypeMethod(tpl, "EnableWaitForReceiver", EnableWaitForReceiver);
	Nan::SetPrototypeMethod(tpl, "enableWaitForReceiver", EnableWaitForReceiver);

	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SendWakeMessage", SendWakeMessage);
	Nan::SetPrototypeMethod(tpl, "sendWakeMessage", SendWakeMessage);

	Nan::SetPrototypeMethod(tpl, "WaitForMessage", WaitForMessage);
	Nan::SetPrototypeMethod(tpl, "waitForMessage", WaitForMessage);

	Nan::SetPrototypeMethod(tpl, "WaitForReceiver", WaitForReceiver);
	Nan::SetPrototypeMethod(tpl, "waitForReceiver", WaitForReceiver);

	ptpl.Reset( tpl );
}

void VtkThreadMessagerWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkThreadMessager> native = vtkSmartPointer<vtkThreadMessager>::New();
		VtkThreadMessagerWrap* obj = new VtkThreadMessagerWrap(native);		obj->Wrap(info.This());
	}
	else
	{
		Nan::Utf8String s(info[0]);
		if(info[0]->ToObject() != vtkNodeJsNoWrap )
			Nan::ThrowError("Parameter Error");
	}

	info.GetReturnValue().Set(info.This());
}

void VtkThreadMessagerWrap::DisableWaitForReceiver(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkThreadMessagerWrap *wrapper = ObjectWrap::Unwrap<VtkThreadMessagerWrap>(info.Holder());
	vtkThreadMessager *native = (vtkThreadMessager *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->DisableWaitForReceiver();
}

void VtkThreadMessagerWrap::EnableWaitForReceiver(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkThreadMessagerWrap *wrapper = ObjectWrap::Unwrap<VtkThreadMessagerWrap>(info.Holder());
	vtkThreadMessager *native = (vtkThreadMessager *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->EnableWaitForReceiver();
}

void VtkThreadMessagerWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkThreadMessagerWrap *wrapper = ObjectWrap::Unwrap<VtkThreadMessagerWrap>(info.Holder());
	vtkThreadMessager *native = (vtkThreadMessager *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkThreadMessagerWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkThreadMessagerWrap *wrapper = ObjectWrap::Unwrap<VtkThreadMessagerWrap>(info.Holder());
	vtkThreadMessager *native = (vtkThreadMessager *)wrapper->native.GetPointer();
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

void VtkThreadMessagerWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkThreadMessagerWrap *wrapper = ObjectWrap::Unwrap<VtkThreadMessagerWrap>(info.Holder());
	vtkThreadMessager *native = (vtkThreadMessager *)wrapper->native.GetPointer();
	vtkThreadMessager * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
		VtkThreadMessagerWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkThreadMessagerWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkThreadMessagerWrap *w = new VtkThreadMessagerWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkThreadMessagerWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkThreadMessagerWrap *wrapper = ObjectWrap::Unwrap<VtkThreadMessagerWrap>(info.Holder());
	vtkThreadMessager *native = (vtkThreadMessager *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkThreadMessager * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObject *) a0->native.GetPointer()
		);
			VtkThreadMessagerWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkThreadMessagerWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkThreadMessagerWrap *w = new VtkThreadMessagerWrap();
		w->native.TakeReference(r);
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkThreadMessagerWrap::SendWakeMessage(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkThreadMessagerWrap *wrapper = ObjectWrap::Unwrap<VtkThreadMessagerWrap>(info.Holder());
	vtkThreadMessager *native = (vtkThreadMessager *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->SendWakeMessage();
}

void VtkThreadMessagerWrap::WaitForMessage(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkThreadMessagerWrap *wrapper = ObjectWrap::Unwrap<VtkThreadMessagerWrap>(info.Holder());
	vtkThreadMessager *native = (vtkThreadMessager *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->WaitForMessage();
}

void VtkThreadMessagerWrap::WaitForReceiver(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkThreadMessagerWrap *wrapper = ObjectWrap::Unwrap<VtkThreadMessagerWrap>(info.Holder());
	vtkThreadMessager *native = (vtkThreadMessager *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->WaitForReceiver();
}
