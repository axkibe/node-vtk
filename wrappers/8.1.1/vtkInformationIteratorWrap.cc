/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>

#include "vtkObjectWrap.h"
#include "vtkInformationIteratorWrap.h"
#include "vtkObjectBaseWrap.h"
#include "vtkInformationWrap.h"
#include "vtkInformationKeyWrap.h"
#include "../../plus/plus.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkInformationIteratorWrap::ptpl;

VtkInformationIteratorWrap::VtkInformationIteratorWrap()
{ }

VtkInformationIteratorWrap::VtkInformationIteratorWrap(vtkSmartPointer<vtkInformationIterator> _native)
{ native = _native; }

VtkInformationIteratorWrap::~VtkInformationIteratorWrap()
{ }

void VtkInformationIteratorWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkInformationIterator").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("InformationIterator").ToLocalChecked(), ConstructorGetter);
}

void VtkInformationIteratorWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkInformationIteratorWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkObjectWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkObjectWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkInformationIteratorWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

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

#ifdef VTK_NODE_PLUS_VTKINFORMATIONITERATORWRAP_INITPTPL
	VTK_NODE_PLUS_VTKINFORMATIONITERATORWRAP_INITPTPL
#endif
	ptpl.Reset( tpl );
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
		VtkInformationIteratorWrap* obj = new VtkInformationIteratorWrap(native);
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
	VtkInformationKeyWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkInformationKeyWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkInformationKeyWrap *w = new VtkInformationKeyWrap();
	w->native = r;
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
	VtkInformationWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkInformationWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkInformationWrap *w = new VtkInformationWrap();
	w->native = r;
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
	VtkInformationIteratorWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkInformationIteratorWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkInformationIteratorWrap *w = new VtkInformationIteratorWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkInformationIteratorWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkInformationIteratorWrap *wrapper = ObjectWrap::Unwrap<VtkInformationIteratorWrap>(info.Holder());
	vtkInformationIterator *native = (vtkInformationIterator *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectBaseWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectBaseWrap *a0 = ObjectWrap::Unwrap<VtkObjectBaseWrap>(info[0]->ToObject());
		vtkInformationIterator * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObjectBase *) a0->native.GetPointer()
		);
		VtkInformationIteratorWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkInformationIteratorWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkInformationIteratorWrap *w = new VtkInformationIteratorWrap();
		w->native = r;
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
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkInformationWrap::ptpl))->HasInstance(info[0]))
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
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkInformationWrap::ptpl))->HasInstance(info[0]))
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

