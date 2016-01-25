/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkPolyDataAlgorithmWrap.h"
#include "vtkOutlineCornerFilterWrap.h"
#include "vtkObjectWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::Function> VtkOutlineCornerFilterWrap::constructor;
Nan::Persistent<v8::FunctionTemplate> VtkOutlineCornerFilterWrap::ptpl;

VtkOutlineCornerFilterWrap::VtkOutlineCornerFilterWrap()
{ }

VtkOutlineCornerFilterWrap::VtkOutlineCornerFilterWrap(vtkSmartPointer<vtkOutlineCornerFilter> _native)
{ native = _native; }

VtkOutlineCornerFilterWrap::~VtkOutlineCornerFilterWrap()
{ }

void VtkOutlineCornerFilterWrap::Init(v8::Local<v8::Object> exports)
{
	if (!constructor.IsEmpty()) return;
	Nan::HandleScope scope;

	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkPolyDataAlgorithmWrap::Init( exports );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkPolyDataAlgorithmWrap::ptpl));

	tpl->SetClassName(Nan::New("VtkOutlineCornerFilterWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);
	InitTpl(tpl);

	constructor.Reset( tpl->GetFunction() );
	ptpl.Reset( tpl );

	exports->Set(Nan::New("vtkOutlineCornerFilter").ToLocalChecked(),tpl->GetFunction());
	exports->Set(Nan::New("OutlineCornerFilter").ToLocalChecked(),tpl->GetFunction());
}

void VtkOutlineCornerFilterWrap::InitTpl(v8::Local<v8::FunctionTemplate> tpl)
{
	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "GetCornerFactor", GetCornerFactor);
	Nan::SetPrototypeMethod(tpl, "getCornerFactor", GetCornerFactor);

	Nan::SetPrototypeMethod(tpl, "GetCornerFactorMaxValue", GetCornerFactorMaxValue);
	Nan::SetPrototypeMethod(tpl, "getCornerFactorMaxValue", GetCornerFactorMaxValue);

	Nan::SetPrototypeMethod(tpl, "GetCornerFactorMinValue", GetCornerFactorMinValue);
	Nan::SetPrototypeMethod(tpl, "getCornerFactorMinValue", GetCornerFactorMinValue);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetCornerFactor", SetCornerFactor);
	Nan::SetPrototypeMethod(tpl, "setCornerFactor", SetCornerFactor);

}

void VtkOutlineCornerFilterWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkOutlineCornerFilter> native = vtkSmartPointer<vtkOutlineCornerFilter>::New();
		VtkOutlineCornerFilterWrap* obj = new VtkOutlineCornerFilterWrap(native);		obj->Wrap(info.This());
	}
	else
	{
		Nan::Utf8String s(info[0]);
		if(info[0]->ToObject() != vtkNodeJsNoWrap )
			Nan::ThrowError("Parameter Error");
	}

	info.GetReturnValue().Set(info.This());
}

void VtkOutlineCornerFilterWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkOutlineCornerFilterWrap *wrapper = ObjectWrap::Unwrap<VtkOutlineCornerFilterWrap>(info.Holder());
	vtkOutlineCornerFilter *native = (vtkOutlineCornerFilter *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkOutlineCornerFilterWrap::GetCornerFactor(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkOutlineCornerFilterWrap *wrapper = ObjectWrap::Unwrap<VtkOutlineCornerFilterWrap>(info.Holder());
	vtkOutlineCornerFilter *native = (vtkOutlineCornerFilter *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetCornerFactor();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkOutlineCornerFilterWrap::GetCornerFactorMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkOutlineCornerFilterWrap *wrapper = ObjectWrap::Unwrap<VtkOutlineCornerFilterWrap>(info.Holder());
	vtkOutlineCornerFilter *native = (vtkOutlineCornerFilter *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetCornerFactorMaxValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkOutlineCornerFilterWrap::GetCornerFactorMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkOutlineCornerFilterWrap *wrapper = ObjectWrap::Unwrap<VtkOutlineCornerFilterWrap>(info.Holder());
	vtkOutlineCornerFilter *native = (vtkOutlineCornerFilter *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetCornerFactorMinValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkOutlineCornerFilterWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkOutlineCornerFilterWrap *wrapper = ObjectWrap::Unwrap<VtkOutlineCornerFilterWrap>(info.Holder());
	vtkOutlineCornerFilter *native = (vtkOutlineCornerFilter *)wrapper->native.GetPointer();
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

void VtkOutlineCornerFilterWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkOutlineCornerFilterWrap *wrapper = ObjectWrap::Unwrap<VtkOutlineCornerFilterWrap>(info.Holder());
	vtkOutlineCornerFilter *native = (vtkOutlineCornerFilter *)wrapper->native.GetPointer();
	vtkOutlineCornerFilter * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::Function>(VtkOutlineCornerFilterWrap::constructor);
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkOutlineCornerFilterWrap *w = new VtkOutlineCornerFilterWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkOutlineCornerFilterWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkOutlineCornerFilterWrap *wrapper = ObjectWrap::Unwrap<VtkOutlineCornerFilterWrap>(info.Holder());
	vtkOutlineCornerFilter *native = (vtkOutlineCornerFilter *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject())
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkOutlineCornerFilter * r;
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
			Nan::New<v8::Function>(VtkOutlineCornerFilterWrap::constructor);
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkOutlineCornerFilterWrap *w = new VtkOutlineCornerFilterWrap();
		w->native.TakeReference(r);
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkOutlineCornerFilterWrap::SetCornerFactor(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkOutlineCornerFilterWrap *wrapper = ObjectWrap::Unwrap<VtkOutlineCornerFilterWrap>(info.Holder());
	vtkOutlineCornerFilter *native = (vtkOutlineCornerFilter *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsNumber())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetCornerFactor(
			info[0]->NumberValue()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

