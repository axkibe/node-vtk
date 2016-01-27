/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkObjectWrap.h"
#include "vtkCollectionIteratorWrap.h"
#include "vtkCollectionWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkCollectionIteratorWrap::ptpl;

VtkCollectionIteratorWrap::VtkCollectionIteratorWrap()
{ }

VtkCollectionIteratorWrap::VtkCollectionIteratorWrap(vtkSmartPointer<vtkCollectionIterator> _native)
{ native = _native; }

VtkCollectionIteratorWrap::~VtkCollectionIteratorWrap()
{ }

void VtkCollectionIteratorWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkCollectionIterator").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("CollectionIterator").ToLocalChecked(), ConstructorGetter);
}

void VtkCollectionIteratorWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkCollectionIteratorWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkObjectWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkObjectWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkCollectionIteratorWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "GetCollection", GetCollection);
	Nan::SetPrototypeMethod(tpl, "getCollection", GetCollection);

	Nan::SetPrototypeMethod(tpl, "GetCurrentObject", GetCurrentObject);
	Nan::SetPrototypeMethod(tpl, "getCurrentObject", GetCurrentObject);

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

	Nan::SetPrototypeMethod(tpl, "SetCollection", SetCollection);
	Nan::SetPrototypeMethod(tpl, "setCollection", SetCollection);

	ptpl.Reset( tpl );
}

void VtkCollectionIteratorWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkCollectionIterator> native = vtkSmartPointer<vtkCollectionIterator>::New();
		VtkCollectionIteratorWrap* obj = new VtkCollectionIteratorWrap(native);		obj->Wrap(info.This());
	}
	else
	{
		if(info[0]->ToObject() != vtkNodeJsNoWrap )
			Nan::ThrowError("Parameter Error");
	}

	info.GetReturnValue().Set(info.This());
}

void VtkCollectionIteratorWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCollectionIteratorWrap *wrapper = ObjectWrap::Unwrap<VtkCollectionIteratorWrap>(info.Holder());
	vtkCollectionIterator *native = (vtkCollectionIterator *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkCollectionIteratorWrap::GetCollection(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCollectionIteratorWrap *wrapper = ObjectWrap::Unwrap<VtkCollectionIteratorWrap>(info.Holder());
	vtkCollectionIterator *native = (vtkCollectionIterator *)wrapper->native.GetPointer();
	vtkCollection * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetCollection();
		VtkCollectionWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkCollectionWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkCollectionWrap *w = new VtkCollectionWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkCollectionIteratorWrap::GetCurrentObject(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCollectionIteratorWrap *wrapper = ObjectWrap::Unwrap<VtkCollectionIteratorWrap>(info.Holder());
	vtkCollectionIterator *native = (vtkCollectionIterator *)wrapper->native.GetPointer();
	vtkObject * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetCurrentObject();
		VtkObjectWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkObjectWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkObjectWrap *w = new VtkObjectWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkCollectionIteratorWrap::GoToFirstItem(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCollectionIteratorWrap *wrapper = ObjectWrap::Unwrap<VtkCollectionIteratorWrap>(info.Holder());
	vtkCollectionIterator *native = (vtkCollectionIterator *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->GoToFirstItem();
}

void VtkCollectionIteratorWrap::GoToNextItem(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCollectionIteratorWrap *wrapper = ObjectWrap::Unwrap<VtkCollectionIteratorWrap>(info.Holder());
	vtkCollectionIterator *native = (vtkCollectionIterator *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->GoToNextItem();
}

void VtkCollectionIteratorWrap::InitTraversal(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCollectionIteratorWrap *wrapper = ObjectWrap::Unwrap<VtkCollectionIteratorWrap>(info.Holder());
	vtkCollectionIterator *native = (vtkCollectionIterator *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->InitTraversal();
}

void VtkCollectionIteratorWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCollectionIteratorWrap *wrapper = ObjectWrap::Unwrap<VtkCollectionIteratorWrap>(info.Holder());
	vtkCollectionIterator *native = (vtkCollectionIterator *)wrapper->native.GetPointer();
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

void VtkCollectionIteratorWrap::IsDoneWithTraversal(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCollectionIteratorWrap *wrapper = ObjectWrap::Unwrap<VtkCollectionIteratorWrap>(info.Holder());
	vtkCollectionIterator *native = (vtkCollectionIterator *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->IsDoneWithTraversal();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkCollectionIteratorWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCollectionIteratorWrap *wrapper = ObjectWrap::Unwrap<VtkCollectionIteratorWrap>(info.Holder());
	vtkCollectionIterator *native = (vtkCollectionIterator *)wrapper->native.GetPointer();
	vtkCollectionIterator * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
		VtkCollectionIteratorWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkCollectionIteratorWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkCollectionIteratorWrap *w = new VtkCollectionIteratorWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkCollectionIteratorWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCollectionIteratorWrap *wrapper = ObjectWrap::Unwrap<VtkCollectionIteratorWrap>(info.Holder());
	vtkCollectionIterator *native = (vtkCollectionIterator *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkCollectionIterator * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObject *) a0->native.GetPointer()
		);
			VtkCollectionIteratorWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkCollectionIteratorWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkCollectionIteratorWrap *w = new VtkCollectionIteratorWrap();
		w->native = r;
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkCollectionIteratorWrap::SetCollection(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCollectionIteratorWrap *wrapper = ObjectWrap::Unwrap<VtkCollectionIteratorWrap>(info.Holder());
	vtkCollectionIterator *native = (vtkCollectionIterator *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkCollectionWrap::ptpl))->HasInstance(info[0]))
	{
		VtkCollectionWrap *a0 = ObjectWrap::Unwrap<VtkCollectionWrap>(info[0]->ToObject());
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetCollection(
			(vtkCollection *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

