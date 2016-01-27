/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkDataWriterWrap.h"
#include "vtkGenericDataObjectWriterWrap.h"
#include "vtkObjectWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkGenericDataObjectWriterWrap::ptpl;

VtkGenericDataObjectWriterWrap::VtkGenericDataObjectWriterWrap()
{ }

VtkGenericDataObjectWriterWrap::VtkGenericDataObjectWriterWrap(vtkSmartPointer<vtkGenericDataObjectWriter> _native)
{ native = _native; }

VtkGenericDataObjectWriterWrap::~VtkGenericDataObjectWriterWrap()
{ }

void VtkGenericDataObjectWriterWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkGenericDataObjectWriter").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("GenericDataObjectWriter").ToLocalChecked(), ConstructorGetter);
}

void VtkGenericDataObjectWriterWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkGenericDataObjectWriterWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkDataWriterWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkDataWriterWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkGenericDataObjectWriterWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	ptpl.Reset( tpl );
}

void VtkGenericDataObjectWriterWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkGenericDataObjectWriter> native = vtkSmartPointer<vtkGenericDataObjectWriter>::New();
		VtkGenericDataObjectWriterWrap* obj = new VtkGenericDataObjectWriterWrap(native);		obj->Wrap(info.This());
	}
	else
	{
		Nan::Utf8String s(info[0]);
		if(info[0]->ToObject() != vtkNodeJsNoWrap )
			Nan::ThrowError("Parameter Error");
	}

	info.GetReturnValue().Set(info.This());
}

void VtkGenericDataObjectWriterWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGenericDataObjectWriterWrap *wrapper = ObjectWrap::Unwrap<VtkGenericDataObjectWriterWrap>(info.Holder());
	vtkGenericDataObjectWriter *native = (vtkGenericDataObjectWriter *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkGenericDataObjectWriterWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGenericDataObjectWriterWrap *wrapper = ObjectWrap::Unwrap<VtkGenericDataObjectWriterWrap>(info.Holder());
	vtkGenericDataObjectWriter *native = (vtkGenericDataObjectWriter *)wrapper->native.GetPointer();
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

void VtkGenericDataObjectWriterWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGenericDataObjectWriterWrap *wrapper = ObjectWrap::Unwrap<VtkGenericDataObjectWriterWrap>(info.Holder());
	vtkGenericDataObjectWriter *native = (vtkGenericDataObjectWriter *)wrapper->native.GetPointer();
	vtkGenericDataObjectWriter * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
		VtkGenericDataObjectWriterWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkGenericDataObjectWriterWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkGenericDataObjectWriterWrap *w = new VtkGenericDataObjectWriterWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkGenericDataObjectWriterWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGenericDataObjectWriterWrap *wrapper = ObjectWrap::Unwrap<VtkGenericDataObjectWriterWrap>(info.Holder());
	vtkGenericDataObjectWriter *native = (vtkGenericDataObjectWriter *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkGenericDataObjectWriter * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObject *) a0->native.GetPointer()
		);
			VtkGenericDataObjectWriterWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkGenericDataObjectWriterWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkGenericDataObjectWriterWrap *w = new VtkGenericDataObjectWriterWrap();
		w->native.TakeReference(r);
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

