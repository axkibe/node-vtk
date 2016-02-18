/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>

#include "vtkObjectWrap.h"
#include "vtkSocketWrap.h"
#include "../../plus/plus.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkSocketWrap::ptpl;

VtkSocketWrap::VtkSocketWrap()
{ }

VtkSocketWrap::VtkSocketWrap(vtkSmartPointer<vtkSocket> _native)
{ native = _native; }

VtkSocketWrap::~VtkSocketWrap()
{ }

void VtkSocketWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkSocket").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("Socket").ToLocalChecked(), ConstructorGetter);
}

void VtkSocketWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkSocketWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkObjectWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkObjectWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkSocketWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "CloseSocket", CloseSocket);
	Nan::SetPrototypeMethod(tpl, "closeSocket", CloseSocket);

	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "GetConnected", GetConnected);
	Nan::SetPrototypeMethod(tpl, "getConnected", GetConnected);

	Nan::SetPrototypeMethod(tpl, "GetSocketDescriptor", GetSocketDescriptor);
	Nan::SetPrototypeMethod(tpl, "getSocketDescriptor", GetSocketDescriptor);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

#ifdef VTK_NODE_PLUS_VTKSOCKETWRAP_INITPTPL
	VTK_NODE_PLUS_VTKSOCKETWRAP_INITPTPL
#endif
	ptpl.Reset( tpl );
}

void VtkSocketWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
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
		if(info[0]->ToObject() != vtkNodeJsNoWrap )
		{
			Nan::ThrowError("Parameter Error");
			return;
		}
	}

	info.GetReturnValue().Set(info.This());
}

void VtkSocketWrap::CloseSocket(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSocketWrap *wrapper = ObjectWrap::Unwrap<VtkSocketWrap>(info.Holder());
	vtkSocket *native = (vtkSocket *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->CloseSocket();
}

void VtkSocketWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSocketWrap *wrapper = ObjectWrap::Unwrap<VtkSocketWrap>(info.Holder());
	vtkSocket *native = (vtkSocket *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkSocketWrap::GetConnected(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSocketWrap *wrapper = ObjectWrap::Unwrap<VtkSocketWrap>(info.Holder());
	vtkSocket *native = (vtkSocket *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetConnected();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkSocketWrap::GetSocketDescriptor(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSocketWrap *wrapper = ObjectWrap::Unwrap<VtkSocketWrap>(info.Holder());
	vtkSocket *native = (vtkSocket *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetSocketDescriptor();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkSocketWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSocketWrap *wrapper = ObjectWrap::Unwrap<VtkSocketWrap>(info.Holder());
	vtkSocket *native = (vtkSocket *)wrapper->native.GetPointer();
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

void VtkSocketWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSocketWrap *wrapper = ObjectWrap::Unwrap<VtkSocketWrap>(info.Holder());
	vtkSocket *native = (vtkSocket *)wrapper->native.GetPointer();
	vtkSocket * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
	VtkSocketWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkSocketWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkSocketWrap *w = new VtkSocketWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkSocketWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSocketWrap *wrapper = ObjectWrap::Unwrap<VtkSocketWrap>(info.Holder());
	vtkSocket *native = (vtkSocket *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkSocket * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObject *) a0->native.GetPointer()
		);
		VtkSocketWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkSocketWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkSocketWrap *w = new VtkSocketWrap();
		w->native = r;
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

