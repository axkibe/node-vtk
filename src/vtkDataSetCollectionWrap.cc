/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkCollectionWrap.h"
#include "vtkDataSetCollectionWrap.h"
#include "vtkObjectWrap.h"
#include "vtkDataSetWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkDataSetCollectionWrap::ptpl;

VtkDataSetCollectionWrap::VtkDataSetCollectionWrap()
{ }

VtkDataSetCollectionWrap::VtkDataSetCollectionWrap(vtkSmartPointer<vtkDataSetCollection> _native)
{ native = _native; }

VtkDataSetCollectionWrap::~VtkDataSetCollectionWrap()
{ }

void VtkDataSetCollectionWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkDataSetCollection").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("DataSetCollection").ToLocalChecked(), ConstructorGetter);
}

void VtkDataSetCollectionWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkDataSetCollectionWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkCollectionWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkCollectionWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkDataSetCollectionWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "AddItem", AddItem);
	Nan::SetPrototypeMethod(tpl, "addItem", AddItem);

	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "GetDataSet", GetDataSet);
	Nan::SetPrototypeMethod(tpl, "getDataSet", GetDataSet);

	Nan::SetPrototypeMethod(tpl, "GetItem", GetItem);
	Nan::SetPrototypeMethod(tpl, "getItem", GetItem);

	Nan::SetPrototypeMethod(tpl, "GetNextDataSet", GetNextDataSet);
	Nan::SetPrototypeMethod(tpl, "getNextDataSet", GetNextDataSet);

	Nan::SetPrototypeMethod(tpl, "GetNextItem", GetNextItem);
	Nan::SetPrototypeMethod(tpl, "getNextItem", GetNextItem);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	ptpl.Reset( tpl );
}

void VtkDataSetCollectionWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkDataSetCollection> native = vtkSmartPointer<vtkDataSetCollection>::New();
		VtkDataSetCollectionWrap* obj = new VtkDataSetCollectionWrap(native);		obj->Wrap(info.This());
	}
	else
	{
		Nan::Utf8String s(info[0]);
		if(info[0]->ToObject() != vtkNodeJsNoWrap )
			Nan::ThrowError("Parameter Error");
	}

	info.GetReturnValue().Set(info.This());
}

void VtkDataSetCollectionWrap::AddItem(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDataSetCollectionWrap *wrapper = ObjectWrap::Unwrap<VtkDataSetCollectionWrap>(info.Holder());
	vtkDataSetCollection *native = (vtkDataSetCollection *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkDataSetWrap::ptpl))->HasInstance(info[0]))
	{
		VtkDataSetWrap *a0 = ObjectWrap::Unwrap<VtkDataSetWrap>(info[0]->ToObject());
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->AddItem(
			(vtkDataSet *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkDataSetCollectionWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDataSetCollectionWrap *wrapper = ObjectWrap::Unwrap<VtkDataSetCollectionWrap>(info.Holder());
	vtkDataSetCollection *native = (vtkDataSetCollection *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkDataSetCollectionWrap::GetDataSet(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDataSetCollectionWrap *wrapper = ObjectWrap::Unwrap<VtkDataSetCollectionWrap>(info.Holder());
	vtkDataSetCollection *native = (vtkDataSetCollection *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		vtkDataSet * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->GetDataSet(
			info[0]->Int32Value()
		);
			VtkDataSetWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkDataSetWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkDataSetWrap *w = new VtkDataSetWrap();
		w->native.TakeReference(r);
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkDataSetCollectionWrap::GetItem(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDataSetCollectionWrap *wrapper = ObjectWrap::Unwrap<VtkDataSetCollectionWrap>(info.Holder());
	vtkDataSetCollection *native = (vtkDataSetCollection *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		vtkDataSet * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->GetItem(
			info[0]->Int32Value()
		);
			VtkDataSetWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkDataSetWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkDataSetWrap *w = new VtkDataSetWrap();
		w->native.TakeReference(r);
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkDataSetCollectionWrap::GetNextDataSet(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDataSetCollectionWrap *wrapper = ObjectWrap::Unwrap<VtkDataSetCollectionWrap>(info.Holder());
	vtkDataSetCollection *native = (vtkDataSetCollection *)wrapper->native.GetPointer();
	vtkDataSet * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetNextDataSet();
		VtkDataSetWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkDataSetWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkDataSetWrap *w = new VtkDataSetWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkDataSetCollectionWrap::GetNextItem(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDataSetCollectionWrap *wrapper = ObjectWrap::Unwrap<VtkDataSetCollectionWrap>(info.Holder());
	vtkDataSetCollection *native = (vtkDataSetCollection *)wrapper->native.GetPointer();
	vtkDataSet * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetNextItem();
		VtkDataSetWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkDataSetWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkDataSetWrap *w = new VtkDataSetWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkDataSetCollectionWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDataSetCollectionWrap *wrapper = ObjectWrap::Unwrap<VtkDataSetCollectionWrap>(info.Holder());
	vtkDataSetCollection *native = (vtkDataSetCollection *)wrapper->native.GetPointer();
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

void VtkDataSetCollectionWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDataSetCollectionWrap *wrapper = ObjectWrap::Unwrap<VtkDataSetCollectionWrap>(info.Holder());
	vtkDataSetCollection *native = (vtkDataSetCollection *)wrapper->native.GetPointer();
	vtkDataSetCollection * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
		VtkDataSetCollectionWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkDataSetCollectionWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkDataSetCollectionWrap *w = new VtkDataSetCollectionWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkDataSetCollectionWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDataSetCollectionWrap *wrapper = ObjectWrap::Unwrap<VtkDataSetCollectionWrap>(info.Holder());
	vtkDataSetCollection *native = (vtkDataSetCollection *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkDataSetCollection * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObject *) a0->native.GetPointer()
		);
			VtkDataSetCollectionWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkDataSetCollectionWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkDataSetCollectionWrap *w = new VtkDataSetCollectionWrap();
		w->native.TakeReference(r);
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

