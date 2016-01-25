/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkPointLocatorWrap.h"
#include "vtkNonMergingPointLocatorWrap.h"
#include "vtkObjectWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::Function> VtkNonMergingPointLocatorWrap::constructor;
Nan::Persistent<v8::FunctionTemplate> VtkNonMergingPointLocatorWrap::ptpl;

VtkNonMergingPointLocatorWrap::VtkNonMergingPointLocatorWrap()
{ }

VtkNonMergingPointLocatorWrap::VtkNonMergingPointLocatorWrap(vtkSmartPointer<vtkNonMergingPointLocator> _native)
{ native = _native; }

VtkNonMergingPointLocatorWrap::~VtkNonMergingPointLocatorWrap()
{ }

void VtkNonMergingPointLocatorWrap::Init(v8::Local<v8::Object> exports)
{
	if (!constructor.IsEmpty()) return;
	Nan::HandleScope scope;

	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkPointLocatorWrap::Init( exports );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkPointLocatorWrap::ptpl));

	tpl->SetClassName(Nan::New("VtkNonMergingPointLocatorWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);
	InitTpl(tpl);

	constructor.Reset( tpl->GetFunction() );
	ptpl.Reset( tpl );

	exports->Set(Nan::New("vtkNonMergingPointLocator").ToLocalChecked(),tpl->GetFunction());
	exports->Set(Nan::New("NonMergingPointLocator").ToLocalChecked(),tpl->GetFunction());
}

void VtkNonMergingPointLocatorWrap::InitTpl(v8::Local<v8::FunctionTemplate> tpl)
{
	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

}

void VtkNonMergingPointLocatorWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkNonMergingPointLocator> native = vtkSmartPointer<vtkNonMergingPointLocator>::New();
		VtkNonMergingPointLocatorWrap* obj = new VtkNonMergingPointLocatorWrap(native);		obj->Wrap(info.This());
	}
	else
	{
		Nan::Utf8String s(info[0]);
		if(info[0]->ToObject() != vtkNodeJsNoWrap )
			Nan::ThrowError("Parameter Error");
	}

	info.GetReturnValue().Set(info.This());
}

void VtkNonMergingPointLocatorWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkNonMergingPointLocatorWrap *wrapper = ObjectWrap::Unwrap<VtkNonMergingPointLocatorWrap>(info.Holder());
	vtkNonMergingPointLocator *native = (vtkNonMergingPointLocator *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkNonMergingPointLocatorWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkNonMergingPointLocatorWrap *wrapper = ObjectWrap::Unwrap<VtkNonMergingPointLocatorWrap>(info.Holder());
	vtkNonMergingPointLocator *native = (vtkNonMergingPointLocator *)wrapper->native.GetPointer();
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

void VtkNonMergingPointLocatorWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkNonMergingPointLocatorWrap *wrapper = ObjectWrap::Unwrap<VtkNonMergingPointLocatorWrap>(info.Holder());
	vtkNonMergingPointLocator *native = (vtkNonMergingPointLocator *)wrapper->native.GetPointer();
	vtkNonMergingPointLocator * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::Function>(VtkNonMergingPointLocatorWrap::constructor);
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkNonMergingPointLocatorWrap *w = new VtkNonMergingPointLocatorWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkNonMergingPointLocatorWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkNonMergingPointLocatorWrap *wrapper = ObjectWrap::Unwrap<VtkNonMergingPointLocatorWrap>(info.Holder());
	vtkNonMergingPointLocator *native = (vtkNonMergingPointLocator *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject())
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkNonMergingPointLocator * r;
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
			Nan::New<v8::Function>(VtkNonMergingPointLocatorWrap::constructor);
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkNonMergingPointLocatorWrap *w = new VtkNonMergingPointLocatorWrap();
		w->native.TakeReference(r);
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

