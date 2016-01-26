/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkCellIteratorWrap.h"
#include "vtkUnstructuredGridCellIteratorWrap.h"
#include "vtkObjectWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::Function> VtkUnstructuredGridCellIteratorWrap::constructor;
Nan::Persistent<v8::FunctionTemplate> VtkUnstructuredGridCellIteratorWrap::ptpl;

VtkUnstructuredGridCellIteratorWrap::VtkUnstructuredGridCellIteratorWrap()
{ }

VtkUnstructuredGridCellIteratorWrap::VtkUnstructuredGridCellIteratorWrap(vtkSmartPointer<vtkUnstructuredGridCellIterator> _native)
{ native = _native; }

VtkUnstructuredGridCellIteratorWrap::~VtkUnstructuredGridCellIteratorWrap()
{ }

void VtkUnstructuredGridCellIteratorWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkUnstructuredGridCellIterator").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("UnstructuredGridCellIterator").ToLocalChecked(), ConstructorGetter);
}

void VtkUnstructuredGridCellIteratorWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkUnstructuredGridCellIteratorWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkCellIteratorWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkCellIteratorWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkUnstructuredGridCellIteratorWrap").ToLocalChecked());
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

void VtkUnstructuredGridCellIteratorWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkUnstructuredGridCellIterator> native = vtkSmartPointer<vtkUnstructuredGridCellIterator>::New();
		VtkUnstructuredGridCellIteratorWrap* obj = new VtkUnstructuredGridCellIteratorWrap(native);		obj->Wrap(info.This());
	}
	else
	{
		Nan::Utf8String s(info[0]);
		if(info[0]->ToObject() != vtkNodeJsNoWrap )
			Nan::ThrowError("Parameter Error");
	}

	info.GetReturnValue().Set(info.This());
}

void VtkUnstructuredGridCellIteratorWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkUnstructuredGridCellIteratorWrap *wrapper = ObjectWrap::Unwrap<VtkUnstructuredGridCellIteratorWrap>(info.Holder());
	vtkUnstructuredGridCellIterator *native = (vtkUnstructuredGridCellIterator *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkUnstructuredGridCellIteratorWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkUnstructuredGridCellIteratorWrap *wrapper = ObjectWrap::Unwrap<VtkUnstructuredGridCellIteratorWrap>(info.Holder());
	vtkUnstructuredGridCellIterator *native = (vtkUnstructuredGridCellIterator *)wrapper->native.GetPointer();
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

void VtkUnstructuredGridCellIteratorWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkUnstructuredGridCellIteratorWrap *wrapper = ObjectWrap::Unwrap<VtkUnstructuredGridCellIteratorWrap>(info.Holder());
	vtkUnstructuredGridCellIterator *native = (vtkUnstructuredGridCellIterator *)wrapper->native.GetPointer();
	vtkUnstructuredGridCellIterator * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
		VtkUnstructuredGridCellIteratorWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::Function>(VtkUnstructuredGridCellIteratorWrap::constructor);
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkUnstructuredGridCellIteratorWrap *w = new VtkUnstructuredGridCellIteratorWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkUnstructuredGridCellIteratorWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkUnstructuredGridCellIteratorWrap *wrapper = ObjectWrap::Unwrap<VtkUnstructuredGridCellIteratorWrap>(info.Holder());
	vtkUnstructuredGridCellIterator *native = (vtkUnstructuredGridCellIterator *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkUnstructuredGridCellIterator * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObject *) a0->native.GetPointer()
		);
			VtkUnstructuredGridCellIteratorWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::Function>(VtkUnstructuredGridCellIteratorWrap::constructor);
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkUnstructuredGridCellIteratorWrap *w = new VtkUnstructuredGridCellIteratorWrap();
		w->native.TakeReference(r);
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

