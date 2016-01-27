/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkImplicitFunctionWrap.h"
#include "vtkPerlinNoiseWrap.h"
#include "vtkObjectWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkPerlinNoiseWrap::ptpl;

VtkPerlinNoiseWrap::VtkPerlinNoiseWrap()
{ }

VtkPerlinNoiseWrap::VtkPerlinNoiseWrap(vtkSmartPointer<vtkPerlinNoise> _native)
{ native = _native; }

VtkPerlinNoiseWrap::~VtkPerlinNoiseWrap()
{ }

void VtkPerlinNoiseWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkPerlinNoise").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("PerlinNoise").ToLocalChecked(), ConstructorGetter);
}

void VtkPerlinNoiseWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkPerlinNoiseWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkImplicitFunctionWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkImplicitFunctionWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkPerlinNoiseWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "EvaluateFunction", EvaluateFunction);
	Nan::SetPrototypeMethod(tpl, "evaluateFunction", EvaluateFunction);

	Nan::SetPrototypeMethod(tpl, "GetAmplitude", GetAmplitude);
	Nan::SetPrototypeMethod(tpl, "getAmplitude", GetAmplitude);

	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetAmplitude", SetAmplitude);
	Nan::SetPrototypeMethod(tpl, "setAmplitude", SetAmplitude);

	Nan::SetPrototypeMethod(tpl, "SetFrequency", SetFrequency);
	Nan::SetPrototypeMethod(tpl, "setFrequency", SetFrequency);

	Nan::SetPrototypeMethod(tpl, "SetPhase", SetPhase);
	Nan::SetPrototypeMethod(tpl, "setPhase", SetPhase);

	ptpl.Reset( tpl );
}

void VtkPerlinNoiseWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkPerlinNoise> native = vtkSmartPointer<vtkPerlinNoise>::New();
		VtkPerlinNoiseWrap* obj = new VtkPerlinNoiseWrap(native);		obj->Wrap(info.This());
	}
	else
	{
		if(info[0]->ToObject() != vtkNodeJsNoWrap )
			Nan::ThrowError("Parameter Error");
	}

	info.GetReturnValue().Set(info.This());
}

void VtkPerlinNoiseWrap::EvaluateFunction(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPerlinNoiseWrap *wrapper = ObjectWrap::Unwrap<VtkPerlinNoiseWrap>(info.Holder());
	vtkPerlinNoise *native = (vtkPerlinNoise *)wrapper->native.GetPointer();
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

void VtkPerlinNoiseWrap::GetAmplitude(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPerlinNoiseWrap *wrapper = ObjectWrap::Unwrap<VtkPerlinNoiseWrap>(info.Holder());
	vtkPerlinNoise *native = (vtkPerlinNoise *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetAmplitude();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkPerlinNoiseWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPerlinNoiseWrap *wrapper = ObjectWrap::Unwrap<VtkPerlinNoiseWrap>(info.Holder());
	vtkPerlinNoise *native = (vtkPerlinNoise *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkPerlinNoiseWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPerlinNoiseWrap *wrapper = ObjectWrap::Unwrap<VtkPerlinNoiseWrap>(info.Holder());
	vtkPerlinNoise *native = (vtkPerlinNoise *)wrapper->native.GetPointer();
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

void VtkPerlinNoiseWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPerlinNoiseWrap *wrapper = ObjectWrap::Unwrap<VtkPerlinNoiseWrap>(info.Holder());
	vtkPerlinNoise *native = (vtkPerlinNoise *)wrapper->native.GetPointer();
	vtkPerlinNoise * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
		VtkPerlinNoiseWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkPerlinNoiseWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkPerlinNoiseWrap *w = new VtkPerlinNoiseWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkPerlinNoiseWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPerlinNoiseWrap *wrapper = ObjectWrap::Unwrap<VtkPerlinNoiseWrap>(info.Holder());
	vtkPerlinNoise *native = (vtkPerlinNoise *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkPerlinNoise * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObject *) a0->native.GetPointer()
		);
			VtkPerlinNoiseWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkPerlinNoiseWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkPerlinNoiseWrap *w = new VtkPerlinNoiseWrap();
		w->native = r;
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkPerlinNoiseWrap::SetAmplitude(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPerlinNoiseWrap *wrapper = ObjectWrap::Unwrap<VtkPerlinNoiseWrap>(info.Holder());
	vtkPerlinNoise *native = (vtkPerlinNoise *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsNumber())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetAmplitude(
			info[0]->NumberValue()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkPerlinNoiseWrap::SetFrequency(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPerlinNoiseWrap *wrapper = ObjectWrap::Unwrap<VtkPerlinNoiseWrap>(info.Holder());
	vtkPerlinNoise *native = (vtkPerlinNoise *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsNumber())
	{
		if(info.Length() > 1 && info[1]->IsNumber())
		{
			if(info.Length() > 2 && info[2]->IsNumber())
			{
				if(info.Length() != 3)
				{
					Nan::ThrowError("Too many parameters.");
					return;
				}
				native->SetFrequency(
					info[0]->NumberValue(),
					info[1]->NumberValue(),
					info[2]->NumberValue()
				);
				return;
			}
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkPerlinNoiseWrap::SetPhase(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPerlinNoiseWrap *wrapper = ObjectWrap::Unwrap<VtkPerlinNoiseWrap>(info.Holder());
	vtkPerlinNoise *native = (vtkPerlinNoise *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsNumber())
	{
		if(info.Length() > 1 && info[1]->IsNumber())
		{
			if(info.Length() > 2 && info[2]->IsNumber())
			{
				if(info.Length() != 3)
				{
					Nan::ThrowError("Too many parameters.");
					return;
				}
				native->SetPhase(
					info[0]->NumberValue(),
					info[1]->NumberValue(),
					info[2]->NumberValue()
				);
				return;
			}
		}
	}
	Nan::ThrowError("Parameter mismatch");
}
