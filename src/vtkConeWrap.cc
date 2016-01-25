/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkImplicitFunctionWrap.h"
#include "vtkConeWrap.h"
#include "vtkObjectWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::Function> VtkConeWrap::constructor;

VtkConeWrap::VtkConeWrap()
{ }

VtkConeWrap::VtkConeWrap(vtkSmartPointer<vtkCone> _native)
{ native = _native; }

VtkConeWrap::~VtkConeWrap()
{ }

void VtkConeWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::HandleScope scope;

	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	tpl->SetClassName(Nan::New("VtkConeWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	VtkObjectBaseWrap::InitTpl(tpl);
	VtkObjectWrap::InitTpl(tpl);
	VtkImplicitFunctionWrap::InitTpl(tpl);
	InitTpl(tpl);

	constructor.Reset( tpl->GetFunction() );

	exports->Set(Nan::New("vtkCone").ToLocalChecked(),tpl->GetFunction());
	exports->Set(Nan::New("Cone").ToLocalChecked(),tpl->GetFunction());
}

void VtkConeWrap::InitTpl(v8::Local<v8::FunctionTemplate> tpl)
{
	Nan::SetPrototypeMethod(tpl, "EvaluateFunction", EvaluateFunction);
	Nan::SetPrototypeMethod(tpl, "evaluateFunction", EvaluateFunction);

	Nan::SetPrototypeMethod(tpl, "GetAngle", GetAngle);
	Nan::SetPrototypeMethod(tpl, "getAngle", GetAngle);

	Nan::SetPrototypeMethod(tpl, "GetAngleMaxValue", GetAngleMaxValue);
	Nan::SetPrototypeMethod(tpl, "getAngleMaxValue", GetAngleMaxValue);

	Nan::SetPrototypeMethod(tpl, "GetAngleMinValue", GetAngleMinValue);
	Nan::SetPrototypeMethod(tpl, "getAngleMinValue", GetAngleMinValue);

	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetAngle", SetAngle);
	Nan::SetPrototypeMethod(tpl, "setAngle", SetAngle);

}

void VtkConeWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkCone> native = vtkSmartPointer<vtkCone>::New();
		VtkConeWrap* obj = new VtkConeWrap(native);		obj->Wrap(info.This());
	}
	else
	{
		Nan::Utf8String s(info[0]);
		if(info[0]->ToObject() != vtkNodeJsNoWrap )
			Nan::ThrowError("Parameter Error");
	}

	info.GetReturnValue().Set(info.This());
}

void VtkConeWrap::EvaluateFunction(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkConeWrap *wrapper = ObjectWrap::Unwrap<VtkConeWrap>(info.Holder());
	vtkCone *native = (vtkCone *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsNumber())
	{
		if(info.Length() > 1 && info[1]->IsNumber())
		{
			if(info.Length() > 2 && info[2]->IsNumber())
			{
				double r;
				if(info.Length() != 3)
				{
					Nan::ThrowError("Too many parameters.");
					return;
				}
				r = native->EvaluateFunction(
					info[0]->NumberValue(),
					info[1]->NumberValue(),
					info[2]->NumberValue()
				);
				info.GetReturnValue().Set(Nan::New(r));
				return;
			}
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkConeWrap::GetAngle(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkConeWrap *wrapper = ObjectWrap::Unwrap<VtkConeWrap>(info.Holder());
	vtkCone *native = (vtkCone *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetAngle();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkConeWrap::GetAngleMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkConeWrap *wrapper = ObjectWrap::Unwrap<VtkConeWrap>(info.Holder());
	vtkCone *native = (vtkCone *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetAngleMaxValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkConeWrap::GetAngleMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkConeWrap *wrapper = ObjectWrap::Unwrap<VtkConeWrap>(info.Holder());
	vtkCone *native = (vtkCone *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetAngleMinValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkConeWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkConeWrap *wrapper = ObjectWrap::Unwrap<VtkConeWrap>(info.Holder());
	vtkCone *native = (vtkCone *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkConeWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkConeWrap *wrapper = ObjectWrap::Unwrap<VtkConeWrap>(info.Holder());
	vtkCone *native = (vtkCone *)wrapper->native.GetPointer();
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

void VtkConeWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkConeWrap *wrapper = ObjectWrap::Unwrap<VtkConeWrap>(info.Holder());
	vtkCone *native = (vtkCone *)wrapper->native.GetPointer();
	vtkCone * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::Function>(VtkConeWrap::constructor);
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkConeWrap *w = new VtkConeWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkConeWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkConeWrap *wrapper = ObjectWrap::Unwrap<VtkConeWrap>(info.Holder());
	vtkCone *native = (vtkCone *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject())
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkCone * r;
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
			Nan::New<v8::Function>(VtkConeWrap::constructor);
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkConeWrap *w = new VtkConeWrap();
		w->native.TakeReference(r);
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkConeWrap::SetAngle(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkConeWrap *wrapper = ObjectWrap::Unwrap<VtkConeWrap>(info.Holder());
	vtkCone *native = (vtkCone *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsNumber())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetAngle(
			info[0]->NumberValue()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

