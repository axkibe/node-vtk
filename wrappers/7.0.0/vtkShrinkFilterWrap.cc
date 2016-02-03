/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkUnstructuredGridAlgorithmWrap.h"
#include "vtkShrinkFilterWrap.h"
#include "vtkObjectWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkShrinkFilterWrap::ptpl;

VtkShrinkFilterWrap::VtkShrinkFilterWrap()
{ }

VtkShrinkFilterWrap::VtkShrinkFilterWrap(vtkSmartPointer<vtkShrinkFilter> _native)
{ native = _native; }

VtkShrinkFilterWrap::~VtkShrinkFilterWrap()
{ }

void VtkShrinkFilterWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkShrinkFilter").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("ShrinkFilter").ToLocalChecked(), ConstructorGetter);
}

void VtkShrinkFilterWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkShrinkFilterWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkUnstructuredGridAlgorithmWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkUnstructuredGridAlgorithmWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkShrinkFilterWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "GetShrinkFactor", GetShrinkFactor);
	Nan::SetPrototypeMethod(tpl, "getShrinkFactor", GetShrinkFactor);

	Nan::SetPrototypeMethod(tpl, "GetShrinkFactorMaxValue", GetShrinkFactorMaxValue);
	Nan::SetPrototypeMethod(tpl, "getShrinkFactorMaxValue", GetShrinkFactorMaxValue);

	Nan::SetPrototypeMethod(tpl, "GetShrinkFactorMinValue", GetShrinkFactorMinValue);
	Nan::SetPrototypeMethod(tpl, "getShrinkFactorMinValue", GetShrinkFactorMinValue);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetShrinkFactor", SetShrinkFactor);
	Nan::SetPrototypeMethod(tpl, "setShrinkFactor", SetShrinkFactor);

	ptpl.Reset( tpl );
}

void VtkShrinkFilterWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkShrinkFilter> native = vtkSmartPointer<vtkShrinkFilter>::New();
		VtkShrinkFilterWrap* obj = new VtkShrinkFilterWrap(native);
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

void VtkShrinkFilterWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkShrinkFilterWrap *wrapper = ObjectWrap::Unwrap<VtkShrinkFilterWrap>(info.Holder());
	vtkShrinkFilter *native = (vtkShrinkFilter *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkShrinkFilterWrap::GetShrinkFactor(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkShrinkFilterWrap *wrapper = ObjectWrap::Unwrap<VtkShrinkFilterWrap>(info.Holder());
	vtkShrinkFilter *native = (vtkShrinkFilter *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetShrinkFactor();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkShrinkFilterWrap::GetShrinkFactorMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkShrinkFilterWrap *wrapper = ObjectWrap::Unwrap<VtkShrinkFilterWrap>(info.Holder());
	vtkShrinkFilter *native = (vtkShrinkFilter *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetShrinkFactorMaxValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkShrinkFilterWrap::GetShrinkFactorMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkShrinkFilterWrap *wrapper = ObjectWrap::Unwrap<VtkShrinkFilterWrap>(info.Holder());
	vtkShrinkFilter *native = (vtkShrinkFilter *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetShrinkFactorMinValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkShrinkFilterWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkShrinkFilterWrap *wrapper = ObjectWrap::Unwrap<VtkShrinkFilterWrap>(info.Holder());
	vtkShrinkFilter *native = (vtkShrinkFilter *)wrapper->native.GetPointer();
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

void VtkShrinkFilterWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkShrinkFilterWrap *wrapper = ObjectWrap::Unwrap<VtkShrinkFilterWrap>(info.Holder());
	vtkShrinkFilter *native = (vtkShrinkFilter *)wrapper->native.GetPointer();
	vtkShrinkFilter * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
		VtkShrinkFilterWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkShrinkFilterWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkShrinkFilterWrap *w = new VtkShrinkFilterWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkShrinkFilterWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkShrinkFilterWrap *wrapper = ObjectWrap::Unwrap<VtkShrinkFilterWrap>(info.Holder());
	vtkShrinkFilter *native = (vtkShrinkFilter *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkShrinkFilter * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObject *) a0->native.GetPointer()
		);
			VtkShrinkFilterWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkShrinkFilterWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkShrinkFilterWrap *w = new VtkShrinkFilterWrap();
		w->native = r;
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkShrinkFilterWrap::SetShrinkFactor(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkShrinkFilterWrap *wrapper = ObjectWrap::Unwrap<VtkShrinkFilterWrap>(info.Holder());
	vtkShrinkFilter *native = (vtkShrinkFilter *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsNumber())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetShrinkFactor(
			info[0]->NumberValue()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}
