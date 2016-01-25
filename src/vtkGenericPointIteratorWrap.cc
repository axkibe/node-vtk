/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkObjectWrap.h"
#include "vtkGenericPointIteratorWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::Function> VtkGenericPointIteratorWrap::constructor;
Nan::Persistent<v8::FunctionTemplate> VtkGenericPointIteratorWrap::ptpl;

VtkGenericPointIteratorWrap::VtkGenericPointIteratorWrap()
{ }

VtkGenericPointIteratorWrap::VtkGenericPointIteratorWrap(vtkSmartPointer<vtkGenericPointIterator> _native)
{ native = _native; }

VtkGenericPointIteratorWrap::~VtkGenericPointIteratorWrap()
{ }

void VtkGenericPointIteratorWrap::Init(v8::Local<v8::Object> exports)
{
	if (!constructor.IsEmpty()) return;
	Nan::HandleScope scope;

	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkObjectWrap::Init( exports );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkObjectWrap::ptpl));

	tpl->SetClassName(Nan::New("VtkGenericPointIteratorWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);
	InitTpl(tpl);

	constructor.Reset( tpl->GetFunction() );
	ptpl.Reset( tpl );

	exports->Set(Nan::New("vtkGenericPointIterator").ToLocalChecked(),tpl->GetFunction());
	exports->Set(Nan::New("GenericPointIterator").ToLocalChecked(),tpl->GetFunction());
}

void VtkGenericPointIteratorWrap::InitTpl(v8::Local<v8::FunctionTemplate> tpl)
{
	Nan::SetPrototypeMethod(tpl, "Begin", Begin);
	Nan::SetPrototypeMethod(tpl, "begin", Begin);

	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "IsAtEnd", IsAtEnd);
	Nan::SetPrototypeMethod(tpl, "isAtEnd", IsAtEnd);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "Next", Next);
	Nan::SetPrototypeMethod(tpl, "next", Next);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

}

void VtkGenericPointIteratorWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
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

void VtkGenericPointIteratorWrap::Begin(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGenericPointIteratorWrap *wrapper = ObjectWrap::Unwrap<VtkGenericPointIteratorWrap>(info.Holder());
	vtkGenericPointIterator *native = (vtkGenericPointIterator *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->Begin();
}

void VtkGenericPointIteratorWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGenericPointIteratorWrap *wrapper = ObjectWrap::Unwrap<VtkGenericPointIteratorWrap>(info.Holder());
	vtkGenericPointIterator *native = (vtkGenericPointIterator *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkGenericPointIteratorWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGenericPointIteratorWrap *wrapper = ObjectWrap::Unwrap<VtkGenericPointIteratorWrap>(info.Holder());
	vtkGenericPointIterator *native = (vtkGenericPointIterator *)wrapper->native.GetPointer();
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

void VtkGenericPointIteratorWrap::IsAtEnd(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGenericPointIteratorWrap *wrapper = ObjectWrap::Unwrap<VtkGenericPointIteratorWrap>(info.Holder());
	vtkGenericPointIterator *native = (vtkGenericPointIterator *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->IsAtEnd();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkGenericPointIteratorWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGenericPointIteratorWrap *wrapper = ObjectWrap::Unwrap<VtkGenericPointIteratorWrap>(info.Holder());
	vtkGenericPointIterator *native = (vtkGenericPointIterator *)wrapper->native.GetPointer();
	vtkGenericPointIterator * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::Function>(VtkGenericPointIteratorWrap::constructor);
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkGenericPointIteratorWrap *w = new VtkGenericPointIteratorWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkGenericPointIteratorWrap::Next(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGenericPointIteratorWrap *wrapper = ObjectWrap::Unwrap<VtkGenericPointIteratorWrap>(info.Holder());
	vtkGenericPointIterator *native = (vtkGenericPointIterator *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->Next();
}

void VtkGenericPointIteratorWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGenericPointIteratorWrap *wrapper = ObjectWrap::Unwrap<VtkGenericPointIteratorWrap>(info.Holder());
	vtkGenericPointIterator *native = (vtkGenericPointIterator *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject())
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkGenericPointIterator * r;
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
			Nan::New<v8::Function>(VtkGenericPointIteratorWrap::constructor);
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkGenericPointIteratorWrap *w = new VtkGenericPointIteratorWrap();
		w->native.TakeReference(r);
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}
