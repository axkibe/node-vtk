/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkCollectionWrap.h"
#include "vtkMapperCollectionWrap.h"
#include "vtkObjectWrap.h"
#include "vtkMapperWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkMapperCollectionWrap::ptpl;

VtkMapperCollectionWrap::VtkMapperCollectionWrap()
{ }

VtkMapperCollectionWrap::VtkMapperCollectionWrap(vtkSmartPointer<vtkMapperCollection> _native)
{ native = _native; }

VtkMapperCollectionWrap::~VtkMapperCollectionWrap()
{ }

void VtkMapperCollectionWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkMapperCollection").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("MapperCollection").ToLocalChecked(), ConstructorGetter);
}

void VtkMapperCollectionWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkMapperCollectionWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkCollectionWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkCollectionWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkMapperCollectionWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "AddItem", AddItem);
	Nan::SetPrototypeMethod(tpl, "addItem", AddItem);

	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "GetLastItem", GetLastItem);
	Nan::SetPrototypeMethod(tpl, "getLastItem", GetLastItem);

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

void VtkMapperCollectionWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkMapperCollection> native = vtkSmartPointer<vtkMapperCollection>::New();
		VtkMapperCollectionWrap* obj = new VtkMapperCollectionWrap(native);		obj->Wrap(info.This());
	}
	else
	{
		if(info[0]->ToObject() != vtkNodeJsNoWrap )
			Nan::ThrowError("Parameter Error");
	}

	info.GetReturnValue().Set(info.This());
}

void VtkMapperCollectionWrap::AddItem(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkMapperCollectionWrap *wrapper = ObjectWrap::Unwrap<VtkMapperCollectionWrap>(info.Holder());
	vtkMapperCollection *native = (vtkMapperCollection *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkMapperWrap::ptpl))->HasInstance(info[0]))
	{
		VtkMapperWrap *a0 = ObjectWrap::Unwrap<VtkMapperWrap>(info[0]->ToObject());
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->AddItem(
			(vtkMapper *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkMapperCollectionWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkMapperCollectionWrap *wrapper = ObjectWrap::Unwrap<VtkMapperCollectionWrap>(info.Holder());
	vtkMapperCollection *native = (vtkMapperCollection *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkMapperCollectionWrap::GetLastItem(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkMapperCollectionWrap *wrapper = ObjectWrap::Unwrap<VtkMapperCollectionWrap>(info.Holder());
	vtkMapperCollection *native = (vtkMapperCollection *)wrapper->native.GetPointer();
	vtkMapper * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetLastItem();
		VtkMapperWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkMapperWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkMapperWrap *w = new VtkMapperWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkMapperCollectionWrap::GetNextItem(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkMapperCollectionWrap *wrapper = ObjectWrap::Unwrap<VtkMapperCollectionWrap>(info.Holder());
	vtkMapperCollection *native = (vtkMapperCollection *)wrapper->native.GetPointer();
	vtkMapper * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetNextItem();
		VtkMapperWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkMapperWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkMapperWrap *w = new VtkMapperWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkMapperCollectionWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkMapperCollectionWrap *wrapper = ObjectWrap::Unwrap<VtkMapperCollectionWrap>(info.Holder());
	vtkMapperCollection *native = (vtkMapperCollection *)wrapper->native.GetPointer();
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

void VtkMapperCollectionWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkMapperCollectionWrap *wrapper = ObjectWrap::Unwrap<VtkMapperCollectionWrap>(info.Holder());
	vtkMapperCollection *native = (vtkMapperCollection *)wrapper->native.GetPointer();
	vtkMapperCollection * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
		VtkMapperCollectionWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkMapperCollectionWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkMapperCollectionWrap *w = new VtkMapperCollectionWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkMapperCollectionWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkMapperCollectionWrap *wrapper = ObjectWrap::Unwrap<VtkMapperCollectionWrap>(info.Holder());
	vtkMapperCollection *native = (vtkMapperCollection *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkMapperCollection * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObject *) a0->native.GetPointer()
		);
			VtkMapperCollectionWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkMapperCollectionWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkMapperCollectionWrap *w = new VtkMapperCollectionWrap();
		w->native = r;
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

