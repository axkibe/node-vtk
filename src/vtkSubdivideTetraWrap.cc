/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkUnstructuredGridAlgorithmWrap.h"
#include "vtkSubdivideTetraWrap.h"
#include "vtkObjectWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::Function> VtkSubdivideTetraWrap::constructor;
Nan::Persistent<v8::FunctionTemplate> VtkSubdivideTetraWrap::ptpl;

VtkSubdivideTetraWrap::VtkSubdivideTetraWrap()
{ }

VtkSubdivideTetraWrap::VtkSubdivideTetraWrap(vtkSmartPointer<vtkSubdivideTetra> _native)
{ native = _native; }

VtkSubdivideTetraWrap::~VtkSubdivideTetraWrap()
{ }

void VtkSubdivideTetraWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkSubdivideTetra").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("SubdivideTetra").ToLocalChecked(), ConstructorGetter);
}

void VtkSubdivideTetraWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkSubdivideTetraWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkUnstructuredGridAlgorithmWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkUnstructuredGridAlgorithmWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkSubdivideTetraWrap").ToLocalChecked());
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

void VtkSubdivideTetraWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkSubdivideTetra> native = vtkSmartPointer<vtkSubdivideTetra>::New();
		VtkSubdivideTetraWrap* obj = new VtkSubdivideTetraWrap(native);		obj->Wrap(info.This());
	}
	else
	{
		Nan::Utf8String s(info[0]);
		if(info[0]->ToObject() != vtkNodeJsNoWrap )
			Nan::ThrowError("Parameter Error");
	}

	info.GetReturnValue().Set(info.This());
}

void VtkSubdivideTetraWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSubdivideTetraWrap *wrapper = ObjectWrap::Unwrap<VtkSubdivideTetraWrap>(info.Holder());
	vtkSubdivideTetra *native = (vtkSubdivideTetra *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkSubdivideTetraWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSubdivideTetraWrap *wrapper = ObjectWrap::Unwrap<VtkSubdivideTetraWrap>(info.Holder());
	vtkSubdivideTetra *native = (vtkSubdivideTetra *)wrapper->native.GetPointer();
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

void VtkSubdivideTetraWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSubdivideTetraWrap *wrapper = ObjectWrap::Unwrap<VtkSubdivideTetraWrap>(info.Holder());
	vtkSubdivideTetra *native = (vtkSubdivideTetra *)wrapper->native.GetPointer();
	vtkSubdivideTetra * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
		VtkSubdivideTetraWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::Function>(VtkSubdivideTetraWrap::constructor);
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkSubdivideTetraWrap *w = new VtkSubdivideTetraWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkSubdivideTetraWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSubdivideTetraWrap *wrapper = ObjectWrap::Unwrap<VtkSubdivideTetraWrap>(info.Holder());
	vtkSubdivideTetra *native = (vtkSubdivideTetra *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkSubdivideTetra * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObject *) a0->native.GetPointer()
		);
			VtkSubdivideTetraWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::Function>(VtkSubdivideTetraWrap::constructor);
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkSubdivideTetraWrap *w = new VtkSubdivideTetraWrap();
		w->native.TakeReference(r);
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

