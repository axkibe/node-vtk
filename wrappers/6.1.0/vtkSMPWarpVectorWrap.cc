/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkWarpVectorWrap.h"
#include "vtkSMPWarpVectorWrap.h"
#include "vtkObjectWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkSMPWarpVectorWrap::ptpl;

VtkSMPWarpVectorWrap::VtkSMPWarpVectorWrap()
{ }

VtkSMPWarpVectorWrap::VtkSMPWarpVectorWrap(vtkSmartPointer<vtkSMPWarpVector> _native)
{ native = _native; }

VtkSMPWarpVectorWrap::~VtkSMPWarpVectorWrap()
{ }

void VtkSMPWarpVectorWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkSMPWarpVector").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("SMPWarpVector").ToLocalChecked(), ConstructorGetter);
}

void VtkSMPWarpVectorWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkSMPWarpVectorWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkWarpVectorWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkWarpVectorWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkSMPWarpVectorWrap").ToLocalChecked());
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

void VtkSMPWarpVectorWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkSMPWarpVector> native = vtkSmartPointer<vtkSMPWarpVector>::New();
		VtkSMPWarpVectorWrap* obj = new VtkSMPWarpVectorWrap(native);		obj->Wrap(info.This());
	}
	else
	{
		Nan::Utf8String s(info[0]);
		if(info[0]->ToObject() != vtkNodeJsNoWrap )
			Nan::ThrowError("Parameter Error");
	}

	info.GetReturnValue().Set(info.This());
}

void VtkSMPWarpVectorWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSMPWarpVectorWrap *wrapper = ObjectWrap::Unwrap<VtkSMPWarpVectorWrap>(info.Holder());
	vtkSMPWarpVector *native = (vtkSMPWarpVector *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkSMPWarpVectorWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSMPWarpVectorWrap *wrapper = ObjectWrap::Unwrap<VtkSMPWarpVectorWrap>(info.Holder());
	vtkSMPWarpVector *native = (vtkSMPWarpVector *)wrapper->native.GetPointer();
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

void VtkSMPWarpVectorWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSMPWarpVectorWrap *wrapper = ObjectWrap::Unwrap<VtkSMPWarpVectorWrap>(info.Holder());
	vtkSMPWarpVector *native = (vtkSMPWarpVector *)wrapper->native.GetPointer();
	vtkSMPWarpVector * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
		VtkSMPWarpVectorWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkSMPWarpVectorWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkSMPWarpVectorWrap *w = new VtkSMPWarpVectorWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkSMPWarpVectorWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSMPWarpVectorWrap *wrapper = ObjectWrap::Unwrap<VtkSMPWarpVectorWrap>(info.Holder());
	vtkSMPWarpVector *native = (vtkSMPWarpVector *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkSMPWarpVector * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObject *) a0->native.GetPointer()
		);
			VtkSMPWarpVectorWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkSMPWarpVectorWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkSMPWarpVectorWrap *w = new VtkSMPWarpVectorWrap();
		w->native.TakeReference(r);
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}
