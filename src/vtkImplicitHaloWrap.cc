/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkImplicitFunctionWrap.h"
#include "vtkImplicitHaloWrap.h"
#include "vtkObjectWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::Function> VtkImplicitHaloWrap::constructor;
Nan::Persistent<v8::FunctionTemplate> VtkImplicitHaloWrap::ptpl;

VtkImplicitHaloWrap::VtkImplicitHaloWrap()
{ }

VtkImplicitHaloWrap::VtkImplicitHaloWrap(vtkSmartPointer<vtkImplicitHalo> _native)
{ native = _native; }

VtkImplicitHaloWrap::~VtkImplicitHaloWrap()
{ }

void VtkImplicitHaloWrap::Init(v8::Local<v8::Object> exports)
{
	if (!constructor.IsEmpty()) return;
	Nan::HandleScope scope;

	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkImplicitFunctionWrap::Init( exports );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkImplicitFunctionWrap::ptpl));

	tpl->SetClassName(Nan::New("VtkImplicitHaloWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);
	InitTpl(tpl);

	constructor.Reset( tpl->GetFunction() );
	ptpl.Reset( tpl );

	exports->Set(Nan::New("vtkImplicitHalo").ToLocalChecked(),tpl->GetFunction());
	exports->Set(Nan::New("ImplicitHalo").ToLocalChecked(),tpl->GetFunction());
}

void VtkImplicitHaloWrap::InitTpl(v8::Local<v8::FunctionTemplate> tpl)
{
	Nan::SetPrototypeMethod(tpl, "EvaluateFunction", EvaluateFunction);
	Nan::SetPrototypeMethod(tpl, "evaluateFunction", EvaluateFunction);

	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "GetFadeOut", GetFadeOut);
	Nan::SetPrototypeMethod(tpl, "getFadeOut", GetFadeOut);

	Nan::SetPrototypeMethod(tpl, "GetRadius", GetRadius);
	Nan::SetPrototypeMethod(tpl, "getRadius", GetRadius);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetCenter", SetCenter);
	Nan::SetPrototypeMethod(tpl, "setCenter", SetCenter);

	Nan::SetPrototypeMethod(tpl, "SetFadeOut", SetFadeOut);
	Nan::SetPrototypeMethod(tpl, "setFadeOut", SetFadeOut);

	Nan::SetPrototypeMethod(tpl, "SetRadius", SetRadius);
	Nan::SetPrototypeMethod(tpl, "setRadius", SetRadius);

}

void VtkImplicitHaloWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkImplicitHalo> native = vtkSmartPointer<vtkImplicitHalo>::New();
		VtkImplicitHaloWrap* obj = new VtkImplicitHaloWrap(native);		obj->Wrap(info.This());
	}
	else
	{
		Nan::Utf8String s(info[0]);
		if(info[0]->ToObject() != vtkNodeJsNoWrap )
			Nan::ThrowError("Parameter Error");
	}

	info.GetReturnValue().Set(info.This());
}

void VtkImplicitHaloWrap::EvaluateFunction(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImplicitHaloWrap *wrapper = ObjectWrap::Unwrap<VtkImplicitHaloWrap>(info.Holder());
	vtkImplicitHalo *native = (vtkImplicitHalo *)wrapper->native.GetPointer();
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

void VtkImplicitHaloWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImplicitHaloWrap *wrapper = ObjectWrap::Unwrap<VtkImplicitHaloWrap>(info.Holder());
	vtkImplicitHalo *native = (vtkImplicitHalo *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkImplicitHaloWrap::GetFadeOut(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImplicitHaloWrap *wrapper = ObjectWrap::Unwrap<VtkImplicitHaloWrap>(info.Holder());
	vtkImplicitHalo *native = (vtkImplicitHalo *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetFadeOut();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkImplicitHaloWrap::GetRadius(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImplicitHaloWrap *wrapper = ObjectWrap::Unwrap<VtkImplicitHaloWrap>(info.Holder());
	vtkImplicitHalo *native = (vtkImplicitHalo *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetRadius();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkImplicitHaloWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImplicitHaloWrap *wrapper = ObjectWrap::Unwrap<VtkImplicitHaloWrap>(info.Holder());
	vtkImplicitHalo *native = (vtkImplicitHalo *)wrapper->native.GetPointer();
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

void VtkImplicitHaloWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImplicitHaloWrap *wrapper = ObjectWrap::Unwrap<VtkImplicitHaloWrap>(info.Holder());
	vtkImplicitHalo *native = (vtkImplicitHalo *)wrapper->native.GetPointer();
	vtkImplicitHalo * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::Function>(VtkImplicitHaloWrap::constructor);
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkImplicitHaloWrap *w = new VtkImplicitHaloWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkImplicitHaloWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImplicitHaloWrap *wrapper = ObjectWrap::Unwrap<VtkImplicitHaloWrap>(info.Holder());
	vtkImplicitHalo *native = (vtkImplicitHalo *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject())
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkImplicitHalo * r;
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
			Nan::New<v8::Function>(VtkImplicitHaloWrap::constructor);
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkImplicitHaloWrap *w = new VtkImplicitHaloWrap();
		w->native.TakeReference(r);
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkImplicitHaloWrap::SetCenter(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImplicitHaloWrap *wrapper = ObjectWrap::Unwrap<VtkImplicitHaloWrap>(info.Holder());
	vtkImplicitHalo *native = (vtkImplicitHalo *)wrapper->native.GetPointer();
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
				native->SetCenter(
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

void VtkImplicitHaloWrap::SetFadeOut(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImplicitHaloWrap *wrapper = ObjectWrap::Unwrap<VtkImplicitHaloWrap>(info.Holder());
	vtkImplicitHalo *native = (vtkImplicitHalo *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsNumber())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetFadeOut(
			info[0]->NumberValue()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkImplicitHaloWrap::SetRadius(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImplicitHaloWrap *wrapper = ObjectWrap::Unwrap<VtkImplicitHaloWrap>(info.Holder());
	vtkImplicitHalo *native = (vtkImplicitHalo *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsNumber())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetRadius(
			info[0]->NumberValue()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

