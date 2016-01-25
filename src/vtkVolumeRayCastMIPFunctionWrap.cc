/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkVolumeRayCastFunctionWrap.h"
#include "vtkVolumeRayCastMIPFunctionWrap.h"
#include "vtkObjectWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::Function> VtkVolumeRayCastMIPFunctionWrap::constructor;

VtkVolumeRayCastMIPFunctionWrap::VtkVolumeRayCastMIPFunctionWrap()
{ }

VtkVolumeRayCastMIPFunctionWrap::VtkVolumeRayCastMIPFunctionWrap(vtkSmartPointer<vtkVolumeRayCastMIPFunction> _native)
{ native = _native; }

VtkVolumeRayCastMIPFunctionWrap::~VtkVolumeRayCastMIPFunctionWrap()
{ }

void VtkVolumeRayCastMIPFunctionWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::HandleScope scope;

	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	tpl->SetClassName(Nan::New("VtkVolumeRayCastMIPFunctionWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	VtkObjectBaseWrap::InitTpl(tpl);
	VtkObjectWrap::InitTpl(tpl);
	VtkVolumeRayCastFunctionWrap::InitTpl(tpl);
	InitTpl(tpl);

	constructor.Reset( tpl->GetFunction() );

	exports->Set(Nan::New("vtkVolumeRayCastMIPFunction").ToLocalChecked(),tpl->GetFunction());
	exports->Set(Nan::New("VolumeRayCastMIPFunction").ToLocalChecked(),tpl->GetFunction());
}

void VtkVolumeRayCastMIPFunctionWrap::InitTpl(v8::Local<v8::FunctionTemplate> tpl)
{
	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "GetMaximizeMethod", GetMaximizeMethod);
	Nan::SetPrototypeMethod(tpl, "getMaximizeMethod", GetMaximizeMethod);

	Nan::SetPrototypeMethod(tpl, "GetMaximizeMethodAsString", GetMaximizeMethodAsString);
	Nan::SetPrototypeMethod(tpl, "getMaximizeMethodAsString", GetMaximizeMethodAsString);

	Nan::SetPrototypeMethod(tpl, "GetMaximizeMethodMaxValue", GetMaximizeMethodMaxValue);
	Nan::SetPrototypeMethod(tpl, "getMaximizeMethodMaxValue", GetMaximizeMethodMaxValue);

	Nan::SetPrototypeMethod(tpl, "GetMaximizeMethodMinValue", GetMaximizeMethodMinValue);
	Nan::SetPrototypeMethod(tpl, "getMaximizeMethodMinValue", GetMaximizeMethodMinValue);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetMaximizeMethod", SetMaximizeMethod);
	Nan::SetPrototypeMethod(tpl, "setMaximizeMethod", SetMaximizeMethod);

	Nan::SetPrototypeMethod(tpl, "SetMaximizeMethodToOpacity", SetMaximizeMethodToOpacity);
	Nan::SetPrototypeMethod(tpl, "setMaximizeMethodToOpacity", SetMaximizeMethodToOpacity);

	Nan::SetPrototypeMethod(tpl, "SetMaximizeMethodToScalarValue", SetMaximizeMethodToScalarValue);
	Nan::SetPrototypeMethod(tpl, "setMaximizeMethodToScalarValue", SetMaximizeMethodToScalarValue);

}

void VtkVolumeRayCastMIPFunctionWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkVolumeRayCastMIPFunction> native = vtkSmartPointer<vtkVolumeRayCastMIPFunction>::New();
		VtkVolumeRayCastMIPFunctionWrap* obj = new VtkVolumeRayCastMIPFunctionWrap(native);		obj->Wrap(info.This());
	}
	else
	{
		Nan::Utf8String s(info[0]);
		if(info[0]->ToObject() != vtkNodeJsNoWrap )
			Nan::ThrowError("Parameter Error");
	}

	info.GetReturnValue().Set(info.This());
}

void VtkVolumeRayCastMIPFunctionWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkVolumeRayCastMIPFunctionWrap *wrapper = ObjectWrap::Unwrap<VtkVolumeRayCastMIPFunctionWrap>(info.Holder());
	vtkVolumeRayCastMIPFunction *native = (vtkVolumeRayCastMIPFunction *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkVolumeRayCastMIPFunctionWrap::GetMaximizeMethod(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkVolumeRayCastMIPFunctionWrap *wrapper = ObjectWrap::Unwrap<VtkVolumeRayCastMIPFunctionWrap>(info.Holder());
	vtkVolumeRayCastMIPFunction *native = (vtkVolumeRayCastMIPFunction *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetMaximizeMethod();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkVolumeRayCastMIPFunctionWrap::GetMaximizeMethodAsString(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkVolumeRayCastMIPFunctionWrap *wrapper = ObjectWrap::Unwrap<VtkVolumeRayCastMIPFunctionWrap>(info.Holder());
	vtkVolumeRayCastMIPFunction *native = (vtkVolumeRayCastMIPFunction *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetMaximizeMethodAsString();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkVolumeRayCastMIPFunctionWrap::GetMaximizeMethodMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkVolumeRayCastMIPFunctionWrap *wrapper = ObjectWrap::Unwrap<VtkVolumeRayCastMIPFunctionWrap>(info.Holder());
	vtkVolumeRayCastMIPFunction *native = (vtkVolumeRayCastMIPFunction *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetMaximizeMethodMaxValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkVolumeRayCastMIPFunctionWrap::GetMaximizeMethodMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkVolumeRayCastMIPFunctionWrap *wrapper = ObjectWrap::Unwrap<VtkVolumeRayCastMIPFunctionWrap>(info.Holder());
	vtkVolumeRayCastMIPFunction *native = (vtkVolumeRayCastMIPFunction *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetMaximizeMethodMinValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkVolumeRayCastMIPFunctionWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkVolumeRayCastMIPFunctionWrap *wrapper = ObjectWrap::Unwrap<VtkVolumeRayCastMIPFunctionWrap>(info.Holder());
	vtkVolumeRayCastMIPFunction *native = (vtkVolumeRayCastMIPFunction *)wrapper->native.GetPointer();
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

void VtkVolumeRayCastMIPFunctionWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkVolumeRayCastMIPFunctionWrap *wrapper = ObjectWrap::Unwrap<VtkVolumeRayCastMIPFunctionWrap>(info.Holder());
	vtkVolumeRayCastMIPFunction *native = (vtkVolumeRayCastMIPFunction *)wrapper->native.GetPointer();
	vtkVolumeRayCastMIPFunction * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::Function>(VtkVolumeRayCastMIPFunctionWrap::constructor);
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkVolumeRayCastMIPFunctionWrap *w = new VtkVolumeRayCastMIPFunctionWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkVolumeRayCastMIPFunctionWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkVolumeRayCastMIPFunctionWrap *wrapper = ObjectWrap::Unwrap<VtkVolumeRayCastMIPFunctionWrap>(info.Holder());
	vtkVolumeRayCastMIPFunction *native = (vtkVolumeRayCastMIPFunction *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject())
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkVolumeRayCastMIPFunction * r;
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
			Nan::New<v8::Function>(VtkVolumeRayCastMIPFunctionWrap::constructor);
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkVolumeRayCastMIPFunctionWrap *w = new VtkVolumeRayCastMIPFunctionWrap();
		w->native.TakeReference(r);
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkVolumeRayCastMIPFunctionWrap::SetMaximizeMethod(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkVolumeRayCastMIPFunctionWrap *wrapper = ObjectWrap::Unwrap<VtkVolumeRayCastMIPFunctionWrap>(info.Holder());
	vtkVolumeRayCastMIPFunction *native = (vtkVolumeRayCastMIPFunction *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetMaximizeMethod(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkVolumeRayCastMIPFunctionWrap::SetMaximizeMethodToOpacity(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkVolumeRayCastMIPFunctionWrap *wrapper = ObjectWrap::Unwrap<VtkVolumeRayCastMIPFunctionWrap>(info.Holder());
	vtkVolumeRayCastMIPFunction *native = (vtkVolumeRayCastMIPFunction *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->SetMaximizeMethodToOpacity();
}

void VtkVolumeRayCastMIPFunctionWrap::SetMaximizeMethodToScalarValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkVolumeRayCastMIPFunctionWrap *wrapper = ObjectWrap::Unwrap<VtkVolumeRayCastMIPFunctionWrap>(info.Holder());
	vtkVolumeRayCastMIPFunction *native = (vtkVolumeRayCastMIPFunction *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->SetMaximizeMethodToScalarValue();
}

