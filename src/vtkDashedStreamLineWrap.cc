/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkStreamLineWrap.h"
#include "vtkDashedStreamLineWrap.h"
#include "vtkObjectWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::Function> VtkDashedStreamLineWrap::constructor;
Nan::Persistent<v8::FunctionTemplate> VtkDashedStreamLineWrap::ptpl;

VtkDashedStreamLineWrap::VtkDashedStreamLineWrap()
{ }

VtkDashedStreamLineWrap::VtkDashedStreamLineWrap(vtkSmartPointer<vtkDashedStreamLine> _native)
{ native = _native; }

VtkDashedStreamLineWrap::~VtkDashedStreamLineWrap()
{ }

void VtkDashedStreamLineWrap::Init(v8::Local<v8::Object> exports)
{
	if (!constructor.IsEmpty()) return;
	Nan::HandleScope scope;

	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkStreamLineWrap::Init( exports );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkStreamLineWrap::ptpl));

	tpl->SetClassName(Nan::New("VtkDashedStreamLineWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);
	InitTpl(tpl);

	constructor.Reset( tpl->GetFunction() );
	ptpl.Reset( tpl );

	exports->Set(Nan::New("vtkDashedStreamLine").ToLocalChecked(),tpl->GetFunction());
	exports->Set(Nan::New("DashedStreamLine").ToLocalChecked(),tpl->GetFunction());
}

void VtkDashedStreamLineWrap::InitTpl(v8::Local<v8::FunctionTemplate> tpl)
{
	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "GetDashFactor", GetDashFactor);
	Nan::SetPrototypeMethod(tpl, "getDashFactor", GetDashFactor);

	Nan::SetPrototypeMethod(tpl, "GetDashFactorMaxValue", GetDashFactorMaxValue);
	Nan::SetPrototypeMethod(tpl, "getDashFactorMaxValue", GetDashFactorMaxValue);

	Nan::SetPrototypeMethod(tpl, "GetDashFactorMinValue", GetDashFactorMinValue);
	Nan::SetPrototypeMethod(tpl, "getDashFactorMinValue", GetDashFactorMinValue);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetDashFactor", SetDashFactor);
	Nan::SetPrototypeMethod(tpl, "setDashFactor", SetDashFactor);

}

void VtkDashedStreamLineWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkDashedStreamLine> native = vtkSmartPointer<vtkDashedStreamLine>::New();
		VtkDashedStreamLineWrap* obj = new VtkDashedStreamLineWrap(native);		obj->Wrap(info.This());
	}
	else
	{
		Nan::Utf8String s(info[0]);
		if(info[0]->ToObject() != vtkNodeJsNoWrap )
			Nan::ThrowError("Parameter Error");
	}

	info.GetReturnValue().Set(info.This());
}

void VtkDashedStreamLineWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDashedStreamLineWrap *wrapper = ObjectWrap::Unwrap<VtkDashedStreamLineWrap>(info.Holder());
	vtkDashedStreamLine *native = (vtkDashedStreamLine *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkDashedStreamLineWrap::GetDashFactor(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDashedStreamLineWrap *wrapper = ObjectWrap::Unwrap<VtkDashedStreamLineWrap>(info.Holder());
	vtkDashedStreamLine *native = (vtkDashedStreamLine *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetDashFactor();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkDashedStreamLineWrap::GetDashFactorMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDashedStreamLineWrap *wrapper = ObjectWrap::Unwrap<VtkDashedStreamLineWrap>(info.Holder());
	vtkDashedStreamLine *native = (vtkDashedStreamLine *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetDashFactorMaxValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkDashedStreamLineWrap::GetDashFactorMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDashedStreamLineWrap *wrapper = ObjectWrap::Unwrap<VtkDashedStreamLineWrap>(info.Holder());
	vtkDashedStreamLine *native = (vtkDashedStreamLine *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetDashFactorMinValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkDashedStreamLineWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDashedStreamLineWrap *wrapper = ObjectWrap::Unwrap<VtkDashedStreamLineWrap>(info.Holder());
	vtkDashedStreamLine *native = (vtkDashedStreamLine *)wrapper->native.GetPointer();
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

void VtkDashedStreamLineWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDashedStreamLineWrap *wrapper = ObjectWrap::Unwrap<VtkDashedStreamLineWrap>(info.Holder());
	vtkDashedStreamLine *native = (vtkDashedStreamLine *)wrapper->native.GetPointer();
	vtkDashedStreamLine * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::Function>(VtkDashedStreamLineWrap::constructor);
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkDashedStreamLineWrap *w = new VtkDashedStreamLineWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkDashedStreamLineWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDashedStreamLineWrap *wrapper = ObjectWrap::Unwrap<VtkDashedStreamLineWrap>(info.Holder());
	vtkDashedStreamLine *native = (vtkDashedStreamLine *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject())
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkDashedStreamLine * r;
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
			Nan::New<v8::Function>(VtkDashedStreamLineWrap::constructor);
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkDashedStreamLineWrap *w = new VtkDashedStreamLineWrap();
		w->native.TakeReference(r);
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkDashedStreamLineWrap::SetDashFactor(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDashedStreamLineWrap *wrapper = ObjectWrap::Unwrap<VtkDashedStreamLineWrap>(info.Holder());
	vtkDashedStreamLine *native = (vtkDashedStreamLine *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsNumber())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetDashFactor(
			info[0]->NumberValue()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

