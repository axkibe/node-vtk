/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkGaussianRandomSequenceWrap.h"
#include "vtkBoxMuellerRandomSequenceWrap.h"
#include "vtkObjectWrap.h"
#include "vtkRandomSequenceWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::Function> VtkBoxMuellerRandomSequenceWrap::constructor;
Nan::Persistent<v8::FunctionTemplate> VtkBoxMuellerRandomSequenceWrap::ptpl;

VtkBoxMuellerRandomSequenceWrap::VtkBoxMuellerRandomSequenceWrap()
{ }

VtkBoxMuellerRandomSequenceWrap::VtkBoxMuellerRandomSequenceWrap(vtkSmartPointer<vtkBoxMuellerRandomSequence> _native)
{ native = _native; }

VtkBoxMuellerRandomSequenceWrap::~VtkBoxMuellerRandomSequenceWrap()
{ }

void VtkBoxMuellerRandomSequenceWrap::Init(v8::Local<v8::Object> exports)
{
	if (!constructor.IsEmpty()) return;
	Nan::HandleScope scope;

	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkGaussianRandomSequenceWrap::Init( exports );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkGaussianRandomSequenceWrap::ptpl));

	tpl->SetClassName(Nan::New("VtkBoxMuellerRandomSequenceWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);
	InitTpl(tpl);

	constructor.Reset( tpl->GetFunction() );
	ptpl.Reset( tpl );

	exports->Set(Nan::New("vtkBoxMuellerRandomSequence").ToLocalChecked(),tpl->GetFunction());
	exports->Set(Nan::New("BoxMuellerRandomSequence").ToLocalChecked(),tpl->GetFunction());
}

void VtkBoxMuellerRandomSequenceWrap::InitTpl(v8::Local<v8::FunctionTemplate> tpl)
{
	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "GetUniformSequence", GetUniformSequence);
	Nan::SetPrototypeMethod(tpl, "getUniformSequence", GetUniformSequence);

	Nan::SetPrototypeMethod(tpl, "GetValue", GetValue);
	Nan::SetPrototypeMethod(tpl, "getValue", GetValue);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "Next", Next);
	Nan::SetPrototypeMethod(tpl, "next", Next);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetUniformSequence", SetUniformSequence);
	Nan::SetPrototypeMethod(tpl, "setUniformSequence", SetUniformSequence);

}

void VtkBoxMuellerRandomSequenceWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkBoxMuellerRandomSequence> native = vtkSmartPointer<vtkBoxMuellerRandomSequence>::New();
		VtkBoxMuellerRandomSequenceWrap* obj = new VtkBoxMuellerRandomSequenceWrap(native);		obj->Wrap(info.This());
	}
	else
	{
		Nan::Utf8String s(info[0]);
		if(info[0]->ToObject() != vtkNodeJsNoWrap )
			Nan::ThrowError("Parameter Error");
	}

	info.GetReturnValue().Set(info.This());
}

void VtkBoxMuellerRandomSequenceWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkBoxMuellerRandomSequenceWrap *wrapper = ObjectWrap::Unwrap<VtkBoxMuellerRandomSequenceWrap>(info.Holder());
	vtkBoxMuellerRandomSequence *native = (vtkBoxMuellerRandomSequence *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkBoxMuellerRandomSequenceWrap::GetUniformSequence(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkBoxMuellerRandomSequenceWrap *wrapper = ObjectWrap::Unwrap<VtkBoxMuellerRandomSequenceWrap>(info.Holder());
	vtkBoxMuellerRandomSequence *native = (vtkBoxMuellerRandomSequence *)wrapper->native.GetPointer();
	vtkRandomSequence * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetUniformSequence();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::Function>(VtkRandomSequenceWrap::constructor);
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkRandomSequenceWrap *w = new VtkRandomSequenceWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkBoxMuellerRandomSequenceWrap::GetValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkBoxMuellerRandomSequenceWrap *wrapper = ObjectWrap::Unwrap<VtkBoxMuellerRandomSequenceWrap>(info.Holder());
	vtkBoxMuellerRandomSequence *native = (vtkBoxMuellerRandomSequence *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkBoxMuellerRandomSequenceWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkBoxMuellerRandomSequenceWrap *wrapper = ObjectWrap::Unwrap<VtkBoxMuellerRandomSequenceWrap>(info.Holder());
	vtkBoxMuellerRandomSequence *native = (vtkBoxMuellerRandomSequence *)wrapper->native.GetPointer();
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

void VtkBoxMuellerRandomSequenceWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkBoxMuellerRandomSequenceWrap *wrapper = ObjectWrap::Unwrap<VtkBoxMuellerRandomSequenceWrap>(info.Holder());
	vtkBoxMuellerRandomSequence *native = (vtkBoxMuellerRandomSequence *)wrapper->native.GetPointer();
	vtkBoxMuellerRandomSequence * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::Function>(VtkBoxMuellerRandomSequenceWrap::constructor);
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkBoxMuellerRandomSequenceWrap *w = new VtkBoxMuellerRandomSequenceWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkBoxMuellerRandomSequenceWrap::Next(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkBoxMuellerRandomSequenceWrap *wrapper = ObjectWrap::Unwrap<VtkBoxMuellerRandomSequenceWrap>(info.Holder());
	vtkBoxMuellerRandomSequence *native = (vtkBoxMuellerRandomSequence *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->Next();
}

void VtkBoxMuellerRandomSequenceWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkBoxMuellerRandomSequenceWrap *wrapper = ObjectWrap::Unwrap<VtkBoxMuellerRandomSequenceWrap>(info.Holder());
	vtkBoxMuellerRandomSequence *native = (vtkBoxMuellerRandomSequence *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject())
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkBoxMuellerRandomSequence * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObject *) a0->native.GetPointer()
		);
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::Function>(VtkBoxMuellerRandomSequenceWrap::constructor);
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkBoxMuellerRandomSequenceWrap *w = new VtkBoxMuellerRandomSequenceWrap();
		w->native.TakeReference(r);
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkBoxMuellerRandomSequenceWrap::SetUniformSequence(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkBoxMuellerRandomSequenceWrap *wrapper = ObjectWrap::Unwrap<VtkBoxMuellerRandomSequenceWrap>(info.Holder());
	vtkBoxMuellerRandomSequence *native = (vtkBoxMuellerRandomSequence *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject())
	{
		VtkRandomSequenceWrap *a0 = ObjectWrap::Unwrap<VtkRandomSequenceWrap>(info[0]->ToObject());
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetUniformSequence(
			(vtkRandomSequence *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

