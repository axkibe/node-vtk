/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkStreamerWrap.h"
#include "vtkStreamPointsWrap.h"
#include "vtkObjectWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::Function> VtkStreamPointsWrap::constructor;
Nan::Persistent<v8::FunctionTemplate> VtkStreamPointsWrap::ptpl;

VtkStreamPointsWrap::VtkStreamPointsWrap()
{ }

VtkStreamPointsWrap::VtkStreamPointsWrap(vtkSmartPointer<vtkStreamPoints> _native)
{ native = _native; }

VtkStreamPointsWrap::~VtkStreamPointsWrap()
{ }

void VtkStreamPointsWrap::Init(v8::Local<v8::Object> exports)
{
	if (!constructor.IsEmpty()) return;
	Nan::HandleScope scope;

	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkStreamerWrap::Init( exports );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkStreamerWrap::ptpl));

	tpl->SetClassName(Nan::New("VtkStreamPointsWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);
	InitTpl(tpl);

	constructor.Reset( tpl->GetFunction() );
	ptpl.Reset( tpl );

	exports->Set(Nan::New("vtkStreamPoints").ToLocalChecked(),tpl->GetFunction());
	exports->Set(Nan::New("StreamPoints").ToLocalChecked(),tpl->GetFunction());
}

void VtkStreamPointsWrap::InitTpl(v8::Local<v8::FunctionTemplate> tpl)
{
	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "GetTimeIncrement", GetTimeIncrement);
	Nan::SetPrototypeMethod(tpl, "getTimeIncrement", GetTimeIncrement);

	Nan::SetPrototypeMethod(tpl, "GetTimeIncrementMaxValue", GetTimeIncrementMaxValue);
	Nan::SetPrototypeMethod(tpl, "getTimeIncrementMaxValue", GetTimeIncrementMaxValue);

	Nan::SetPrototypeMethod(tpl, "GetTimeIncrementMinValue", GetTimeIncrementMinValue);
	Nan::SetPrototypeMethod(tpl, "getTimeIncrementMinValue", GetTimeIncrementMinValue);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetTimeIncrement", SetTimeIncrement);
	Nan::SetPrototypeMethod(tpl, "setTimeIncrement", SetTimeIncrement);

}

void VtkStreamPointsWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkStreamPoints> native = vtkSmartPointer<vtkStreamPoints>::New();
		VtkStreamPointsWrap* obj = new VtkStreamPointsWrap(native);		obj->Wrap(info.This());
	}
	else
	{
		Nan::Utf8String s(info[0]);
		if(info[0]->ToObject() != vtkNodeJsNoWrap )
			Nan::ThrowError("Parameter Error");
	}

	info.GetReturnValue().Set(info.This());
}

void VtkStreamPointsWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkStreamPointsWrap *wrapper = ObjectWrap::Unwrap<VtkStreamPointsWrap>(info.Holder());
	vtkStreamPoints *native = (vtkStreamPoints *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkStreamPointsWrap::GetTimeIncrement(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkStreamPointsWrap *wrapper = ObjectWrap::Unwrap<VtkStreamPointsWrap>(info.Holder());
	vtkStreamPoints *native = (vtkStreamPoints *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetTimeIncrement();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkStreamPointsWrap::GetTimeIncrementMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkStreamPointsWrap *wrapper = ObjectWrap::Unwrap<VtkStreamPointsWrap>(info.Holder());
	vtkStreamPoints *native = (vtkStreamPoints *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetTimeIncrementMaxValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkStreamPointsWrap::GetTimeIncrementMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkStreamPointsWrap *wrapper = ObjectWrap::Unwrap<VtkStreamPointsWrap>(info.Holder());
	vtkStreamPoints *native = (vtkStreamPoints *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetTimeIncrementMinValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkStreamPointsWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkStreamPointsWrap *wrapper = ObjectWrap::Unwrap<VtkStreamPointsWrap>(info.Holder());
	vtkStreamPoints *native = (vtkStreamPoints *)wrapper->native.GetPointer();
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

void VtkStreamPointsWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkStreamPointsWrap *wrapper = ObjectWrap::Unwrap<VtkStreamPointsWrap>(info.Holder());
	vtkStreamPoints *native = (vtkStreamPoints *)wrapper->native.GetPointer();
	vtkStreamPoints * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::Function>(VtkStreamPointsWrap::constructor);
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkStreamPointsWrap *w = new VtkStreamPointsWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkStreamPointsWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkStreamPointsWrap *wrapper = ObjectWrap::Unwrap<VtkStreamPointsWrap>(info.Holder());
	vtkStreamPoints *native = (vtkStreamPoints *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject())
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkStreamPoints * r;
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
			Nan::New<v8::Function>(VtkStreamPointsWrap::constructor);
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkStreamPointsWrap *w = new VtkStreamPointsWrap();
		w->native.TakeReference(r);
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkStreamPointsWrap::SetTimeIncrement(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkStreamPointsWrap *wrapper = ObjectWrap::Unwrap<VtkStreamPointsWrap>(info.Holder());
	vtkStreamPoints *native = (vtkStreamPoints *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsNumber())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetTimeIncrement(
			info[0]->NumberValue()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}
