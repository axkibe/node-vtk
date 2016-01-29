/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkCollectionIteratorWrap.h"
#include "vtkDataArrayCollectionIteratorWrap.h"
#include "vtkObjectWrap.h"
#include "vtkCollectionWrap.h"
#include "vtkDataArrayCollectionWrap.h"
#include "vtkDataArrayWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkDataArrayCollectionIteratorWrap::ptpl;

VtkDataArrayCollectionIteratorWrap::VtkDataArrayCollectionIteratorWrap()
{ }

VtkDataArrayCollectionIteratorWrap::VtkDataArrayCollectionIteratorWrap(vtkSmartPointer<vtkDataArrayCollectionIterator> _native)
{ native = _native; }

VtkDataArrayCollectionIteratorWrap::~VtkDataArrayCollectionIteratorWrap()
{ }

void VtkDataArrayCollectionIteratorWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkDataArrayCollectionIterator").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("DataArrayCollectionIterator").ToLocalChecked(), ConstructorGetter);
}

void VtkDataArrayCollectionIteratorWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkDataArrayCollectionIteratorWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkCollectionIteratorWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkCollectionIteratorWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkDataArrayCollectionIteratorWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "GetDataArray", GetDataArray);
	Nan::SetPrototypeMethod(tpl, "getDataArray", GetDataArray);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetCollection", SetCollection);
	Nan::SetPrototypeMethod(tpl, "setCollection", SetCollection);

	ptpl.Reset( tpl );
}

void VtkDataArrayCollectionIteratorWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkDataArrayCollectionIterator> native = vtkSmartPointer<vtkDataArrayCollectionIterator>::New();
		VtkDataArrayCollectionIteratorWrap* obj = new VtkDataArrayCollectionIteratorWrap(native);
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

void VtkDataArrayCollectionIteratorWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDataArrayCollectionIteratorWrap *wrapper = ObjectWrap::Unwrap<VtkDataArrayCollectionIteratorWrap>(info.Holder());
	vtkDataArrayCollectionIterator *native = (vtkDataArrayCollectionIterator *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkDataArrayCollectionIteratorWrap::GetDataArray(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDataArrayCollectionIteratorWrap *wrapper = ObjectWrap::Unwrap<VtkDataArrayCollectionIteratorWrap>(info.Holder());
	vtkDataArrayCollectionIterator *native = (vtkDataArrayCollectionIterator *)wrapper->native.GetPointer();
	vtkDataArray * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetDataArray();
		VtkDataArrayWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkDataArrayWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkDataArrayWrap *w = new VtkDataArrayWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkDataArrayCollectionIteratorWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDataArrayCollectionIteratorWrap *wrapper = ObjectWrap::Unwrap<VtkDataArrayCollectionIteratorWrap>(info.Holder());
	vtkDataArrayCollectionIterator *native = (vtkDataArrayCollectionIterator *)wrapper->native.GetPointer();
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

void VtkDataArrayCollectionIteratorWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDataArrayCollectionIteratorWrap *wrapper = ObjectWrap::Unwrap<VtkDataArrayCollectionIteratorWrap>(info.Holder());
	vtkDataArrayCollectionIterator *native = (vtkDataArrayCollectionIterator *)wrapper->native.GetPointer();
	vtkDataArrayCollectionIterator * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
		VtkDataArrayCollectionIteratorWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkDataArrayCollectionIteratorWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkDataArrayCollectionIteratorWrap *w = new VtkDataArrayCollectionIteratorWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkDataArrayCollectionIteratorWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDataArrayCollectionIteratorWrap *wrapper = ObjectWrap::Unwrap<VtkDataArrayCollectionIteratorWrap>(info.Holder());
	vtkDataArrayCollectionIterator *native = (vtkDataArrayCollectionIterator *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkDataArrayCollectionIterator * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObject *) a0->native.GetPointer()
		);
			VtkDataArrayCollectionIteratorWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkDataArrayCollectionIteratorWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkDataArrayCollectionIteratorWrap *w = new VtkDataArrayCollectionIteratorWrap();
		w->native = r;
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkDataArrayCollectionIteratorWrap::SetCollection(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDataArrayCollectionIteratorWrap *wrapper = ObjectWrap::Unwrap<VtkDataArrayCollectionIteratorWrap>(info.Holder());
	vtkDataArrayCollectionIterator *native = (vtkDataArrayCollectionIterator *)wrapper->native.GetPointer();
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

