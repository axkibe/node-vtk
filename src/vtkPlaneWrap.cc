/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkImplicitFunctionWrap.h"
#include "vtkPlaneWrap.h"
#include "vtkObjectWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::Function> VtkPlaneWrap::constructor;
Nan::Persistent<v8::FunctionTemplate> VtkPlaneWrap::ptpl;

VtkPlaneWrap::VtkPlaneWrap()
{ }

VtkPlaneWrap::VtkPlaneWrap(vtkSmartPointer<vtkPlane> _native)
{ native = _native; }

VtkPlaneWrap::~VtkPlaneWrap()
{ }

void VtkPlaneWrap::Init(v8::Local<v8::Object> exports)
{
	if (!constructor.IsEmpty()) return;
	Nan::HandleScope scope;

	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkImplicitFunctionWrap::Init( exports );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkImplicitFunctionWrap::ptpl));

	tpl->SetClassName(Nan::New("VtkPlaneWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);
	InitTpl(tpl);

	constructor.Reset( tpl->GetFunction() );
	ptpl.Reset( tpl );

	exports->Set(Nan::New("vtkPlane").ToLocalChecked(),tpl->GetFunction());
	exports->Set(Nan::New("Plane").ToLocalChecked(),tpl->GetFunction());
}

void VtkPlaneWrap::InitTpl(v8::Local<v8::FunctionTemplate> tpl)
{
	Nan::SetPrototypeMethod(tpl, "EvaluateFunction", EvaluateFunction);
	Nan::SetPrototypeMethod(tpl, "evaluateFunction", EvaluateFunction);

	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "Push", Push);
	Nan::SetPrototypeMethod(tpl, "push", Push);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetNormal", SetNormal);
	Nan::SetPrototypeMethod(tpl, "setNormal", SetNormal);

	Nan::SetPrototypeMethod(tpl, "SetOrigin", SetOrigin);
	Nan::SetPrototypeMethod(tpl, "setOrigin", SetOrigin);

}

void VtkPlaneWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkPlane> native = vtkSmartPointer<vtkPlane>::New();
		VtkPlaneWrap* obj = new VtkPlaneWrap(native);		obj->Wrap(info.This());
	}
	else
	{
		Nan::Utf8String s(info[0]);
		if(info[0]->ToObject() != vtkNodeJsNoWrap )
			Nan::ThrowError("Parameter Error");
	}

	info.GetReturnValue().Set(info.This());
}

void VtkPlaneWrap::EvaluateFunction(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPlaneWrap *wrapper = ObjectWrap::Unwrap<VtkPlaneWrap>(info.Holder());
	vtkPlane *native = (vtkPlane *)wrapper->native.GetPointer();
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

void VtkPlaneWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPlaneWrap *wrapper = ObjectWrap::Unwrap<VtkPlaneWrap>(info.Holder());
	vtkPlane *native = (vtkPlane *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkPlaneWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPlaneWrap *wrapper = ObjectWrap::Unwrap<VtkPlaneWrap>(info.Holder());
	vtkPlane *native = (vtkPlane *)wrapper->native.GetPointer();
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

void VtkPlaneWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPlaneWrap *wrapper = ObjectWrap::Unwrap<VtkPlaneWrap>(info.Holder());
	vtkPlane *native = (vtkPlane *)wrapper->native.GetPointer();
	vtkPlane * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::Function>(VtkPlaneWrap::constructor);
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkPlaneWrap *w = new VtkPlaneWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkPlaneWrap::Push(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPlaneWrap *wrapper = ObjectWrap::Unwrap<VtkPlaneWrap>(info.Holder());
	vtkPlane *native = (vtkPlane *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsNumber())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->Push(
			info[0]->NumberValue()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkPlaneWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPlaneWrap *wrapper = ObjectWrap::Unwrap<VtkPlaneWrap>(info.Holder());
	vtkPlane *native = (vtkPlane *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject())
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkPlane * r;
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
			Nan::New<v8::Function>(VtkPlaneWrap::constructor);
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkPlaneWrap *w = new VtkPlaneWrap();
		w->native.TakeReference(r);
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkPlaneWrap::SetNormal(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPlaneWrap *wrapper = ObjectWrap::Unwrap<VtkPlaneWrap>(info.Holder());
	vtkPlane *native = (vtkPlane *)wrapper->native.GetPointer();
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
				native->SetNormal(
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

void VtkPlaneWrap::SetOrigin(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPlaneWrap *wrapper = ObjectWrap::Unwrap<VtkPlaneWrap>(info.Holder());
	vtkPlane *native = (vtkPlane *)wrapper->native.GetPointer();
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
				native->SetOrigin(
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

