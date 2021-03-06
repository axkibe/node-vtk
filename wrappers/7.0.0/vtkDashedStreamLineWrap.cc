/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>

#include "vtkStreamLineWrap.h"
#include "vtkDashedStreamLineWrap.h"
#include "vtkObjectWrap.h"
#include "../../plus/plus.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkDashedStreamLineWrap::ptpl;

VtkDashedStreamLineWrap::VtkDashedStreamLineWrap()
{ }

VtkDashedStreamLineWrap::VtkDashedStreamLineWrap(vtkSmartPointer<vtkDashedStreamLine> _native)
{ native = _native; }

VtkDashedStreamLineWrap::~VtkDashedStreamLineWrap()
{ }

void VtkDashedStreamLineWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkDashedStreamLine").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("DashedStreamLine").ToLocalChecked(), ConstructorGetter);
}

void VtkDashedStreamLineWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkDashedStreamLineWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkStreamLineWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkStreamLineWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkDashedStreamLineWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

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

#ifdef VTK_NODE_PLUS_VTKDASHEDSTREAMLINEWRAP_INITPTPL
	VTK_NODE_PLUS_VTKDASHEDSTREAMLINEWRAP_INITPTPL
#endif
	ptpl.Reset( tpl );
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
		VtkDashedStreamLineWrap* obj = new VtkDashedStreamLineWrap(native);
		obj->Wrap(info.This());
	}
	else
	{
		if(info[0]->ToObject() != vtkNodeJsNoWrap )
		{
			Nan::ThrowError("Parameter Error");
			return;
		}
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
	VtkDashedStreamLineWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkDashedStreamLineWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkDashedStreamLineWrap *w = new VtkDashedStreamLineWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkDashedStreamLineWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDashedStreamLineWrap *wrapper = ObjectWrap::Unwrap<VtkDashedStreamLineWrap>(info.Holder());
	vtkDashedStreamLine *native = (vtkDashedStreamLine *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectWrap::ptpl))->HasInstance(info[0]))
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
		VtkDashedStreamLineWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkDashedStreamLineWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkDashedStreamLineWrap *w = new VtkDashedStreamLineWrap();
		w->native = r;
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

