/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkAbstractContextBufferIdWrap.h"
#include "vtkContextBufferIdWrap.h"
#include "vtkObjectWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkContextBufferIdWrap::ptpl;

VtkContextBufferIdWrap::VtkContextBufferIdWrap()
{ }

VtkContextBufferIdWrap::VtkContextBufferIdWrap(vtkSmartPointer<vtkContextBufferId> _native)
{ native = _native; }

VtkContextBufferIdWrap::~VtkContextBufferIdWrap()
{ }

void VtkContextBufferIdWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkContextBufferId").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("ContextBufferId").ToLocalChecked(), ConstructorGetter);
}

void VtkContextBufferIdWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkContextBufferIdWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkAbstractContextBufferIdWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkAbstractContextBufferIdWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkContextBufferIdWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "Allocate", Allocate);
	Nan::SetPrototypeMethod(tpl, "allocate", Allocate);

	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetValues", SetValues);
	Nan::SetPrototypeMethod(tpl, "setValues", SetValues);

	ptpl.Reset( tpl );
}

void VtkContextBufferIdWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkContextBufferId> native = vtkSmartPointer<vtkContextBufferId>::New();
		VtkContextBufferIdWrap* obj = new VtkContextBufferIdWrap(native);		obj->Wrap(info.This());
	}
	else
	{
		Nan::Utf8String s(info[0]);
		if(info[0]->ToObject() != vtkNodeJsNoWrap )
			Nan::ThrowError("Parameter Error");
	}

	info.GetReturnValue().Set(info.This());
}

void VtkContextBufferIdWrap::Allocate(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkContextBufferIdWrap *wrapper = ObjectWrap::Unwrap<VtkContextBufferIdWrap>(info.Holder());
	vtkContextBufferId *native = (vtkContextBufferId *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->Allocate();
}

void VtkContextBufferIdWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkContextBufferIdWrap *wrapper = ObjectWrap::Unwrap<VtkContextBufferIdWrap>(info.Holder());
	vtkContextBufferId *native = (vtkContextBufferId *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkContextBufferIdWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkContextBufferIdWrap *wrapper = ObjectWrap::Unwrap<VtkContextBufferIdWrap>(info.Holder());
	vtkContextBufferId *native = (vtkContextBufferId *)wrapper->native.GetPointer();
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

void VtkContextBufferIdWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkContextBufferIdWrap *wrapper = ObjectWrap::Unwrap<VtkContextBufferIdWrap>(info.Holder());
	vtkContextBufferId *native = (vtkContextBufferId *)wrapper->native.GetPointer();
	vtkContextBufferId * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
		VtkContextBufferIdWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkContextBufferIdWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkContextBufferIdWrap *w = new VtkContextBufferIdWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkContextBufferIdWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkContextBufferIdWrap *wrapper = ObjectWrap::Unwrap<VtkContextBufferIdWrap>(info.Holder());
	vtkContextBufferId *native = (vtkContextBufferId *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkContextBufferId * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObject *) a0->native.GetPointer()
		);
			VtkContextBufferIdWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkContextBufferIdWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkContextBufferIdWrap *w = new VtkContextBufferIdWrap();
		w->native.TakeReference(r);
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkContextBufferIdWrap::SetValues(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkContextBufferIdWrap *wrapper = ObjectWrap::Unwrap<VtkContextBufferIdWrap>(info.Holder());
	vtkContextBufferId *native = (vtkContextBufferId *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() > 1 && info[1]->IsInt32())
		{
			if(info.Length() != 2)
			{
				Nan::ThrowError("Too many parameters.");
				return;
			}
			native->SetValues(
				info[0]->Int32Value(),
				info[1]->Int32Value()
			);
			return;
		}
	}
	Nan::ThrowError("Parameter mismatch");
}
