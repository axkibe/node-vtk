/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkProbeFilterWrap.h"
#include "vtkCompositeDataProbeFilterWrap.h"
#include "vtkObjectWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkCompositeDataProbeFilterWrap::ptpl;

VtkCompositeDataProbeFilterWrap::VtkCompositeDataProbeFilterWrap()
{ }

VtkCompositeDataProbeFilterWrap::VtkCompositeDataProbeFilterWrap(vtkSmartPointer<vtkCompositeDataProbeFilter> _native)
{ native = _native; }

VtkCompositeDataProbeFilterWrap::~VtkCompositeDataProbeFilterWrap()
{ }

void VtkCompositeDataProbeFilterWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkCompositeDataProbeFilter").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("CompositeDataProbeFilter").ToLocalChecked(), ConstructorGetter);
}

void VtkCompositeDataProbeFilterWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkCompositeDataProbeFilterWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkProbeFilterWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkProbeFilterWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkCompositeDataProbeFilterWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "PassPartialArraysOff", PassPartialArraysOff);
	Nan::SetPrototypeMethod(tpl, "passPartialArraysOff", PassPartialArraysOff);

	Nan::SetPrototypeMethod(tpl, "PassPartialArraysOn", PassPartialArraysOn);
	Nan::SetPrototypeMethod(tpl, "passPartialArraysOn", PassPartialArraysOn);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	ptpl.Reset( tpl );
}

void VtkCompositeDataProbeFilterWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkCompositeDataProbeFilter> native = vtkSmartPointer<vtkCompositeDataProbeFilter>::New();
		VtkCompositeDataProbeFilterWrap* obj = new VtkCompositeDataProbeFilterWrap(native);		obj->Wrap(info.This());
	}
	else
	{
		Nan::Utf8String s(info[0]);
		if(info[0]->ToObject() != vtkNodeJsNoWrap )
			Nan::ThrowError("Parameter Error");
	}

	info.GetReturnValue().Set(info.This());
}

void VtkCompositeDataProbeFilterWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCompositeDataProbeFilterWrap *wrapper = ObjectWrap::Unwrap<VtkCompositeDataProbeFilterWrap>(info.Holder());
	vtkCompositeDataProbeFilter *native = (vtkCompositeDataProbeFilter *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkCompositeDataProbeFilterWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCompositeDataProbeFilterWrap *wrapper = ObjectWrap::Unwrap<VtkCompositeDataProbeFilterWrap>(info.Holder());
	vtkCompositeDataProbeFilter *native = (vtkCompositeDataProbeFilter *)wrapper->native.GetPointer();
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

void VtkCompositeDataProbeFilterWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCompositeDataProbeFilterWrap *wrapper = ObjectWrap::Unwrap<VtkCompositeDataProbeFilterWrap>(info.Holder());
	vtkCompositeDataProbeFilter *native = (vtkCompositeDataProbeFilter *)wrapper->native.GetPointer();
	vtkCompositeDataProbeFilter * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
		VtkCompositeDataProbeFilterWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkCompositeDataProbeFilterWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkCompositeDataProbeFilterWrap *w = new VtkCompositeDataProbeFilterWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkCompositeDataProbeFilterWrap::PassPartialArraysOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCompositeDataProbeFilterWrap *wrapper = ObjectWrap::Unwrap<VtkCompositeDataProbeFilterWrap>(info.Holder());
	vtkCompositeDataProbeFilter *native = (vtkCompositeDataProbeFilter *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->PassPartialArraysOff();
}

void VtkCompositeDataProbeFilterWrap::PassPartialArraysOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCompositeDataProbeFilterWrap *wrapper = ObjectWrap::Unwrap<VtkCompositeDataProbeFilterWrap>(info.Holder());
	vtkCompositeDataProbeFilter *native = (vtkCompositeDataProbeFilter *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->PassPartialArraysOn();
}

void VtkCompositeDataProbeFilterWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCompositeDataProbeFilterWrap *wrapper = ObjectWrap::Unwrap<VtkCompositeDataProbeFilterWrap>(info.Holder());
	vtkCompositeDataProbeFilter *native = (vtkCompositeDataProbeFilter *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkCompositeDataProbeFilter * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObject *) a0->native.GetPointer()
		);
			VtkCompositeDataProbeFilterWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkCompositeDataProbeFilterWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkCompositeDataProbeFilterWrap *w = new VtkCompositeDataProbeFilterWrap();
		w->native.TakeReference(r);
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

