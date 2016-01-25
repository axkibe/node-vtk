/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkUndirectedGraphAlgorithmWrap.h"
#include "vtkTulipReaderWrap.h"
#include "vtkObjectWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::Function> VtkTulipReaderWrap::constructor;
Nan::Persistent<v8::FunctionTemplate> VtkTulipReaderWrap::ptpl;

VtkTulipReaderWrap::VtkTulipReaderWrap()
{ }

VtkTulipReaderWrap::VtkTulipReaderWrap(vtkSmartPointer<vtkTulipReader> _native)
{ native = _native; }

VtkTulipReaderWrap::~VtkTulipReaderWrap()
{ }

void VtkTulipReaderWrap::Init(v8::Local<v8::Object> exports)
{
	if (!constructor.IsEmpty()) return;
	Nan::HandleScope scope;

	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkUndirectedGraphAlgorithmWrap::Init( exports );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkUndirectedGraphAlgorithmWrap::ptpl));

	tpl->SetClassName(Nan::New("VtkTulipReaderWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);
	InitTpl(tpl);

	constructor.Reset( tpl->GetFunction() );
	ptpl.Reset( tpl );

	exports->Set(Nan::New("vtkTulipReader").ToLocalChecked(),tpl->GetFunction());
	exports->Set(Nan::New("TulipReader").ToLocalChecked(),tpl->GetFunction());
}

void VtkTulipReaderWrap::InitTpl(v8::Local<v8::FunctionTemplate> tpl)
{
	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "GetFileName", GetFileName);
	Nan::SetPrototypeMethod(tpl, "getFileName", GetFileName);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetFileName", SetFileName);
	Nan::SetPrototypeMethod(tpl, "setFileName", SetFileName);

}

void VtkTulipReaderWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkTulipReader> native = vtkSmartPointer<vtkTulipReader>::New();
		VtkTulipReaderWrap* obj = new VtkTulipReaderWrap(native);		obj->Wrap(info.This());
	}
	else
	{
		Nan::Utf8String s(info[0]);
		if(info[0]->ToObject() != vtkNodeJsNoWrap )
			Nan::ThrowError("Parameter Error");
	}

	info.GetReturnValue().Set(info.This());
}

void VtkTulipReaderWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTulipReaderWrap *wrapper = ObjectWrap::Unwrap<VtkTulipReaderWrap>(info.Holder());
	vtkTulipReader *native = (vtkTulipReader *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkTulipReaderWrap::GetFileName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTulipReaderWrap *wrapper = ObjectWrap::Unwrap<VtkTulipReaderWrap>(info.Holder());
	vtkTulipReader *native = (vtkTulipReader *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetFileName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkTulipReaderWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTulipReaderWrap *wrapper = ObjectWrap::Unwrap<VtkTulipReaderWrap>(info.Holder());
	vtkTulipReader *native = (vtkTulipReader *)wrapper->native.GetPointer();
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

void VtkTulipReaderWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTulipReaderWrap *wrapper = ObjectWrap::Unwrap<VtkTulipReaderWrap>(info.Holder());
	vtkTulipReader *native = (vtkTulipReader *)wrapper->native.GetPointer();
	vtkTulipReader * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::Function>(VtkTulipReaderWrap::constructor);
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkTulipReaderWrap *w = new VtkTulipReaderWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkTulipReaderWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTulipReaderWrap *wrapper = ObjectWrap::Unwrap<VtkTulipReaderWrap>(info.Holder());
	vtkTulipReader *native = (vtkTulipReader *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject())
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkTulipReader * r;
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
			Nan::New<v8::Function>(VtkTulipReaderWrap::constructor);
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkTulipReaderWrap *w = new VtkTulipReaderWrap();
		w->native.TakeReference(r);
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkTulipReaderWrap::SetFileName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTulipReaderWrap *wrapper = ObjectWrap::Unwrap<VtkTulipReaderWrap>(info.Holder());
	vtkTulipReader *native = (vtkTulipReader *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		Nan::Utf8String a0(info[0]);
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetFileName(
			*a0
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

