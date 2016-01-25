/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkUnstructuredGridAlgorithmWrap.h"
#include "vtkProStarReaderWrap.h"
#include "vtkObjectWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::Function> VtkProStarReaderWrap::constructor;

VtkProStarReaderWrap::VtkProStarReaderWrap()
{ }

VtkProStarReaderWrap::VtkProStarReaderWrap(vtkSmartPointer<vtkProStarReader> _native)
{ native = _native; }

VtkProStarReaderWrap::~VtkProStarReaderWrap()
{ }

void VtkProStarReaderWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::HandleScope scope;

	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	tpl->SetClassName(Nan::New("VtkProStarReaderWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	VtkObjectBaseWrap::InitTpl(tpl);
	VtkObjectWrap::InitTpl(tpl);
	VtkAlgorithmWrap::InitTpl(tpl);
	VtkUnstructuredGridAlgorithmWrap::InitTpl(tpl);
	InitTpl(tpl);

	constructor.Reset( tpl->GetFunction() );

	exports->Set(Nan::New("vtkProStarReader").ToLocalChecked(),tpl->GetFunction());
	exports->Set(Nan::New("ProStarReader").ToLocalChecked(),tpl->GetFunction());
}

void VtkProStarReaderWrap::InitTpl(v8::Local<v8::FunctionTemplate> tpl)
{
	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "GetFileName", GetFileName);
	Nan::SetPrototypeMethod(tpl, "getFileName", GetFileName);

	Nan::SetPrototypeMethod(tpl, "GetScaleFactor", GetScaleFactor);
	Nan::SetPrototypeMethod(tpl, "getScaleFactor", GetScaleFactor);

	Nan::SetPrototypeMethod(tpl, "GetScaleFactorMaxValue", GetScaleFactorMaxValue);
	Nan::SetPrototypeMethod(tpl, "getScaleFactorMaxValue", GetScaleFactorMaxValue);

	Nan::SetPrototypeMethod(tpl, "GetScaleFactorMinValue", GetScaleFactorMinValue);
	Nan::SetPrototypeMethod(tpl, "getScaleFactorMinValue", GetScaleFactorMinValue);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetFileName", SetFileName);
	Nan::SetPrototypeMethod(tpl, "setFileName", SetFileName);

	Nan::SetPrototypeMethod(tpl, "SetScaleFactor", SetScaleFactor);
	Nan::SetPrototypeMethod(tpl, "setScaleFactor", SetScaleFactor);

}

void VtkProStarReaderWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkProStarReader> native = vtkSmartPointer<vtkProStarReader>::New();
		VtkProStarReaderWrap* obj = new VtkProStarReaderWrap(native);		obj->Wrap(info.This());
	}
	else
	{
		Nan::Utf8String s(info[0]);
		if(info[0]->ToObject() != vtkNodeJsNoWrap )
			Nan::ThrowError("Parameter Error");
	}

	info.GetReturnValue().Set(info.This());
}

void VtkProStarReaderWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkProStarReaderWrap *wrapper = ObjectWrap::Unwrap<VtkProStarReaderWrap>(info.Holder());
	vtkProStarReader *native = (vtkProStarReader *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkProStarReaderWrap::GetFileName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkProStarReaderWrap *wrapper = ObjectWrap::Unwrap<VtkProStarReaderWrap>(info.Holder());
	vtkProStarReader *native = (vtkProStarReader *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetFileName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkProStarReaderWrap::GetScaleFactor(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkProStarReaderWrap *wrapper = ObjectWrap::Unwrap<VtkProStarReaderWrap>(info.Holder());
	vtkProStarReader *native = (vtkProStarReader *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetScaleFactor();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkProStarReaderWrap::GetScaleFactorMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkProStarReaderWrap *wrapper = ObjectWrap::Unwrap<VtkProStarReaderWrap>(info.Holder());
	vtkProStarReader *native = (vtkProStarReader *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetScaleFactorMaxValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkProStarReaderWrap::GetScaleFactorMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkProStarReaderWrap *wrapper = ObjectWrap::Unwrap<VtkProStarReaderWrap>(info.Holder());
	vtkProStarReader *native = (vtkProStarReader *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetScaleFactorMinValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkProStarReaderWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkProStarReaderWrap *wrapper = ObjectWrap::Unwrap<VtkProStarReaderWrap>(info.Holder());
	vtkProStarReader *native = (vtkProStarReader *)wrapper->native.GetPointer();
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

void VtkProStarReaderWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkProStarReaderWrap *wrapper = ObjectWrap::Unwrap<VtkProStarReaderWrap>(info.Holder());
	vtkProStarReader *native = (vtkProStarReader *)wrapper->native.GetPointer();
	vtkProStarReader * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::Function>(VtkProStarReaderWrap::constructor);
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkProStarReaderWrap *w = new VtkProStarReaderWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkProStarReaderWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkProStarReaderWrap *wrapper = ObjectWrap::Unwrap<VtkProStarReaderWrap>(info.Holder());
	vtkProStarReader *native = (vtkProStarReader *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject())
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkProStarReader * r;
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
			Nan::New<v8::Function>(VtkProStarReaderWrap::constructor);
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkProStarReaderWrap *w = new VtkProStarReaderWrap();
		w->native.TakeReference(r);
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkProStarReaderWrap::SetFileName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkProStarReaderWrap *wrapper = ObjectWrap::Unwrap<VtkProStarReaderWrap>(info.Holder());
	vtkProStarReader *native = (vtkProStarReader *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		Nan::Utf8String a0(info[0]);
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetFileName(
			*a0
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkProStarReaderWrap::SetScaleFactor(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkProStarReaderWrap *wrapper = ObjectWrap::Unwrap<VtkProStarReaderWrap>(info.Holder());
	vtkProStarReader *native = (vtkProStarReader *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsNumber())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetScaleFactor(
			info[0]->NumberValue()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

