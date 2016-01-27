/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkObjectWrap.h"
#include "vtkTextCodecFactoryWrap.h"
#include "vtkTextCodecWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkTextCodecFactoryWrap::ptpl;

VtkTextCodecFactoryWrap::VtkTextCodecFactoryWrap()
{ }

VtkTextCodecFactoryWrap::VtkTextCodecFactoryWrap(vtkSmartPointer<vtkTextCodecFactory> _native)
{ native = _native; }

VtkTextCodecFactoryWrap::~VtkTextCodecFactoryWrap()
{ }

void VtkTextCodecFactoryWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkTextCodecFactory").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("TextCodecFactory").ToLocalChecked(), ConstructorGetter);
}

void VtkTextCodecFactoryWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkTextCodecFactoryWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkObjectWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkObjectWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkTextCodecFactoryWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "CodecForName", CodecForName);
	Nan::SetPrototypeMethod(tpl, "codecForName", CodecForName);

	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "Initialize", Initialize);
	Nan::SetPrototypeMethod(tpl, "initialize", Initialize);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "UnRegisterAllCreateCallbacks", UnRegisterAllCreateCallbacks);
	Nan::SetPrototypeMethod(tpl, "unRegisterAllCreateCallbacks", UnRegisterAllCreateCallbacks);

	ptpl.Reset( tpl );
}

void VtkTextCodecFactoryWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkTextCodecFactory> native = vtkSmartPointer<vtkTextCodecFactory>::New();
		VtkTextCodecFactoryWrap* obj = new VtkTextCodecFactoryWrap(native);		obj->Wrap(info.This());
	}
	else
	{
		Nan::Utf8String s(info[0]);
		if(info[0]->ToObject() != vtkNodeJsNoWrap )
			Nan::ThrowError("Parameter Error");
	}

	info.GetReturnValue().Set(info.This());
}

void VtkTextCodecFactoryWrap::CodecForName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTextCodecFactoryWrap *wrapper = ObjectWrap::Unwrap<VtkTextCodecFactoryWrap>(info.Holder());
	vtkTextCodecFactory *native = (vtkTextCodecFactory *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsString())
	{
		Nan::Utf8String a0(info[0]);
		vtkTextCodec * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->CodecForName(
			*a0
		);
			VtkTextCodecWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkTextCodecWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkTextCodecWrap *w = new VtkTextCodecWrap();
		w->native.TakeReference(r);
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkTextCodecFactoryWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTextCodecFactoryWrap *wrapper = ObjectWrap::Unwrap<VtkTextCodecFactoryWrap>(info.Holder());
	vtkTextCodecFactory *native = (vtkTextCodecFactory *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkTextCodecFactoryWrap::Initialize(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTextCodecFactoryWrap *wrapper = ObjectWrap::Unwrap<VtkTextCodecFactoryWrap>(info.Holder());
	vtkTextCodecFactory *native = (vtkTextCodecFactory *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->Initialize();
}

void VtkTextCodecFactoryWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTextCodecFactoryWrap *wrapper = ObjectWrap::Unwrap<VtkTextCodecFactoryWrap>(info.Holder());
	vtkTextCodecFactory *native = (vtkTextCodecFactory *)wrapper->native.GetPointer();
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

void VtkTextCodecFactoryWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTextCodecFactoryWrap *wrapper = ObjectWrap::Unwrap<VtkTextCodecFactoryWrap>(info.Holder());
	vtkTextCodecFactory *native = (vtkTextCodecFactory *)wrapper->native.GetPointer();
	vtkTextCodecFactory * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
		VtkTextCodecFactoryWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkTextCodecFactoryWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkTextCodecFactoryWrap *w = new VtkTextCodecFactoryWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkTextCodecFactoryWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTextCodecFactoryWrap *wrapper = ObjectWrap::Unwrap<VtkTextCodecFactoryWrap>(info.Holder());
	vtkTextCodecFactory *native = (vtkTextCodecFactory *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkTextCodecFactory * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObject *) a0->native.GetPointer()
		);
			VtkTextCodecFactoryWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkTextCodecFactoryWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkTextCodecFactoryWrap *w = new VtkTextCodecFactoryWrap();
		w->native.TakeReference(r);
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkTextCodecFactoryWrap::UnRegisterAllCreateCallbacks(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTextCodecFactoryWrap *wrapper = ObjectWrap::Unwrap<VtkTextCodecFactoryWrap>(info.Holder());
	vtkTextCodecFactory *native = (vtkTextCodecFactory *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->UnRegisterAllCreateCallbacks();
}

