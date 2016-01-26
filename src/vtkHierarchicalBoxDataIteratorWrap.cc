/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkUniformGridAMRDataIteratorWrap.h"
#include "vtkHierarchicalBoxDataIteratorWrap.h"
#include "vtkObjectWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::Function> VtkHierarchicalBoxDataIteratorWrap::constructor;
Nan::Persistent<v8::FunctionTemplate> VtkHierarchicalBoxDataIteratorWrap::ptpl;

VtkHierarchicalBoxDataIteratorWrap::VtkHierarchicalBoxDataIteratorWrap()
{ }

VtkHierarchicalBoxDataIteratorWrap::VtkHierarchicalBoxDataIteratorWrap(vtkSmartPointer<vtkHierarchicalBoxDataIterator> _native)
{ native = _native; }

VtkHierarchicalBoxDataIteratorWrap::~VtkHierarchicalBoxDataIteratorWrap()
{ }

void VtkHierarchicalBoxDataIteratorWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkHierarchicalBoxDataIterator").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("HierarchicalBoxDataIterator").ToLocalChecked(), ConstructorGetter);
}

void VtkHierarchicalBoxDataIteratorWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkHierarchicalBoxDataIteratorWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkUniformGridAMRDataIteratorWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkUniformGridAMRDataIteratorWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkHierarchicalBoxDataIteratorWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	constructor.Reset( tpl->GetFunction() );
	ptpl.Reset( tpl );
}

void VtkHierarchicalBoxDataIteratorWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkHierarchicalBoxDataIterator> native = vtkSmartPointer<vtkHierarchicalBoxDataIterator>::New();
		VtkHierarchicalBoxDataIteratorWrap* obj = new VtkHierarchicalBoxDataIteratorWrap(native);		obj->Wrap(info.This());
	}
	else
	{
		Nan::Utf8String s(info[0]);
		if(info[0]->ToObject() != vtkNodeJsNoWrap )
			Nan::ThrowError("Parameter Error");
	}

	info.GetReturnValue().Set(info.This());
}

void VtkHierarchicalBoxDataIteratorWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkHierarchicalBoxDataIteratorWrap *wrapper = ObjectWrap::Unwrap<VtkHierarchicalBoxDataIteratorWrap>(info.Holder());
	vtkHierarchicalBoxDataIterator *native = (vtkHierarchicalBoxDataIterator *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkHierarchicalBoxDataIteratorWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkHierarchicalBoxDataIteratorWrap *wrapper = ObjectWrap::Unwrap<VtkHierarchicalBoxDataIteratorWrap>(info.Holder());
	vtkHierarchicalBoxDataIterator *native = (vtkHierarchicalBoxDataIterator *)wrapper->native.GetPointer();
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

void VtkHierarchicalBoxDataIteratorWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkHierarchicalBoxDataIteratorWrap *wrapper = ObjectWrap::Unwrap<VtkHierarchicalBoxDataIteratorWrap>(info.Holder());
	vtkHierarchicalBoxDataIterator *native = (vtkHierarchicalBoxDataIterator *)wrapper->native.GetPointer();
	vtkHierarchicalBoxDataIterator * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
		VtkHierarchicalBoxDataIteratorWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::Function>(VtkHierarchicalBoxDataIteratorWrap::constructor);
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkHierarchicalBoxDataIteratorWrap *w = new VtkHierarchicalBoxDataIteratorWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkHierarchicalBoxDataIteratorWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkHierarchicalBoxDataIteratorWrap *wrapper = ObjectWrap::Unwrap<VtkHierarchicalBoxDataIteratorWrap>(info.Holder());
	vtkHierarchicalBoxDataIterator *native = (vtkHierarchicalBoxDataIterator *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkHierarchicalBoxDataIterator * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObject *) a0->native.GetPointer()
		);
			VtkHierarchicalBoxDataIteratorWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::Function>(VtkHierarchicalBoxDataIteratorWrap::constructor);
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkHierarchicalBoxDataIteratorWrap *w = new VtkHierarchicalBoxDataIteratorWrap();
		w->native.TakeReference(r);
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

