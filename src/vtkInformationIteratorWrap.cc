/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkObjectWrap.h"
#include "vtkInformationIteratorWrap.h"
#include "vtkInformationWrap.h"
#include "vtkInformationKeyWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::Function> VtkInformationIteratorWrap::constructor;

VtkInformationIteratorWrap::VtkInformationIteratorWrap()
{ }

VtkInformationIteratorWrap::VtkInformationIteratorWrap(vtkSmartPointer<vtkInformationIterator> _native)
{ native = _native; }

VtkInformationIteratorWrap::~VtkInformationIteratorWrap()
{ }

void VtkInformationIteratorWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::HandleScope scope;

	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	tpl->SetClassName(Nan::New("VtkInformationIteratorWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	VtkObjectBaseWrap::InitTpl(tpl);
	VtkObjectWrap::InitTpl(tpl);
	InitTpl(tpl);

	constructor.Reset( tpl->GetFunction() );

	exports->Set(Nan::New("vtkInformationIterator").ToLocalChecked(),tpl->GetFunction());
	exports->Set(Nan::New("InformationIterator").ToLocalChecked(),tpl->GetFunction());
}

void VtkInformationIteratorWrap::InitTpl(v8::Local<v8::FunctionTemplate> tpl)
{
	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "GetCurrentKey", GetCurrentKey);
	Nan::SetPrototypeMethod(tpl, "getCurrentKey", GetCurrentKey);

	Nan::SetPrototypeMethod(tpl, "GetInformation", GetInformation);
	Nan::SetPrototypeMethod(tpl, "getInformation", GetInformation);

	Nan::SetPrototypeMethod(tpl, "GoToFirstItem", GoToFirstItem);
	Nan::SetPrototypeMethod(tpl, "goToFirstItem", GoToFirstItem);

	Nan::SetPrototypeMethod(tpl, "GoToNextItem", GoToNextItem);
	Nan::SetPrototypeMethod(tpl, "goToNextItem", GoToNextItem);

	Nan::SetPrototypeMethod(tpl, "InitTraversal", InitTraversal);
	Nan::SetPrototypeMethod(tpl, "initTraversal", InitTraversal);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "IsDoneWithTraversal", IsDoneWithTraversal);
	Nan::SetPrototypeMethod(tpl, "isDoneWithTraversal", IsDoneWithTraversal);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetInformation", SetInformation);
	Nan::SetPrototypeMethod(tpl, "setInformation", SetInformation);

	Nan::SetPrototypeMethod(tpl, "SetInformationWeak", SetInformationWeak);
	Nan::SetPrototypeMethod(tpl, "setInformationWeak", SetInformationWeak);

}

void VtkInformationIteratorWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkInformationIterator> native = vtkSmartPointer<vtkInformationIterator>::New();
		VtkInformationIteratorWrap* obj = new VtkInformationIteratorWrap(native);		obj->Wrap(info.This());
	}
	else
	{
		Nan::Utf8String s(info[0]);
		if(info[0]->ToObject() != vtkNodeJsNoWrap )
			Nan::ThrowError("Parameter Error");
	}

	info.GetReturnValue().Set(info.This());
}

void VtkInformationIteratorWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkInformationIteratorWrap *wrapper = ObjectWrap::Unwrap<VtkInformationIteratorWrap>(info.Holder());
	vtkInformationIterator *native = (vtkInformationIterator *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkInformationIteratorWrap::GetCurrentKey(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkInformationIteratorWrap *wrapper = ObjectWrap::Unwrap<VtkInformationIteratorWrap>(info.Holder());
	vtkInformationIterator *native = (vtkInformationIterator *)wrapper->native.GetPointer();
	vtkInformationKey * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetCurrentKey();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::Function>(VtkInformationKeyWrap::constructor);
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkInformationKeyWrap *w = new VtkInformationKeyWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkInformationIteratorWrap::GetInformation(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkInformationIteratorWrap *wrapper = ObjectWrap::Unwrap<VtkInformationIteratorWrap>(info.Holder());
	vtkInformationIterator *native = (vtkInformationIterator *)wrapper->native.GetPointer();
	vtkInformation * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetInformation();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::Function>(VtkInformationWrap::constructor);
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkInformationWrap *w = new VtkInformationWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkInformationIteratorWrap::GoToFirstItem(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkInformationIteratorWrap *wrapper = ObjectWrap::Unwrap<VtkInformationIteratorWrap>(info.Holder());
	vtkInformationIterator *native = (vtkInformationIterator *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->GoToFirstItem();
}

void VtkInformationIteratorWrap::GoToNextItem(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkInformationIteratorWrap *wrapper = ObjectWrap::Unwrap<VtkInformationIteratorWrap>(info.Holder());
	vtkInformationIterator *native = (vtkInformationIterator *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->GoToNextItem();
}

void VtkInformationIteratorWrap::InitTraversal(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkInformationIteratorWrap *wrapper = ObjectWrap::Unwrap<VtkInformationIteratorWrap>(info.Holder());
	vtkInformationIterator *native = (vtkInformationIterator *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->InitTraversal();
}

void VtkInformationIteratorWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkInformationIteratorWrap *wrapper = ObjectWrap::Unwrap<VtkInformationIteratorWrap>(info.Holder());
	vtkInformationIterator *native = (vtkInformationIterator *)wrapper->native.GetPointer();
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

void VtkInformationIteratorWrap::IsDoneWithTraversal(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkInformationIteratorWrap *wrapper = ObjectWrap::Unwrap<VtkInformationIteratorWrap>(info.Holder());
	vtkInformationIterator *native = (vtkInformationIterator *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->IsDoneWithTraversal();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkInformationIteratorWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkInformationIteratorWrap *wrapper = ObjectWrap::Unwrap<VtkInformationIteratorWrap>(info.Holder());
	vtkInformationIterator *native = (vtkInformationIterator *)wrapper->native.GetPointer();
	vtkInformationIterator * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::Function>(VtkInformationIteratorWrap::constructor);
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkInformationIteratorWrap *w = new VtkInformationIteratorWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkInformationIteratorWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkInformationIteratorWrap *wrapper = ObjectWrap::Unwrap<VtkInformationIteratorWrap>(info.Holder());
	vtkInformationIterator *native = (vtkInformationIterator *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject())
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkInformationIterator * r;
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
			Nan::New<v8::Function>(VtkInformationIteratorWrap::constructor);
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkInformationIteratorWrap *w = new VtkInformationIteratorWrap();
		w->native.TakeReference(r);
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkInformationIteratorWrap::SetInformation(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkInformationIteratorWrap *wrapper = ObjectWrap::Unwrap<VtkInformationIteratorWrap>(info.Holder());
	vtkInformationIterator *native = (vtkInformationIterator *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject())
	{
		VtkInformationWrap *a0 = ObjectWrap::Unwrap<VtkInformationWrap>(info[0]->ToObject());
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetInformation(
			(vtkInformation *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkInformationIteratorWrap::SetInformationWeak(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkInformationIteratorWrap *wrapper = ObjectWrap::Unwrap<VtkInformationIteratorWrap>(info.Holder());
	vtkInformationIterator *native = (vtkInformationIterator *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject())
	{
		VtkInformationWrap *a0 = ObjectWrap::Unwrap<VtkInformationWrap>(info[0]->ToObject());
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetInformationWeak(
			(vtkInformation *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

