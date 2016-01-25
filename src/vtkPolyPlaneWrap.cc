/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkImplicitFunctionWrap.h"
#include "vtkPolyPlaneWrap.h"
#include "vtkObjectWrap.h"
#include "vtkPolyLineWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::Function> VtkPolyPlaneWrap::constructor;
Nan::Persistent<v8::FunctionTemplate> VtkPolyPlaneWrap::ptpl;

VtkPolyPlaneWrap::VtkPolyPlaneWrap()
{ }

VtkPolyPlaneWrap::VtkPolyPlaneWrap(vtkSmartPointer<vtkPolyPlane> _native)
{ native = _native; }

VtkPolyPlaneWrap::~VtkPolyPlaneWrap()
{ }

void VtkPolyPlaneWrap::Init(v8::Local<v8::Object> exports)
{
	if (!constructor.IsEmpty()) return;
	Nan::HandleScope scope;

	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkImplicitFunctionWrap::Init( exports );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkImplicitFunctionWrap::ptpl));

	tpl->SetClassName(Nan::New("VtkPolyPlaneWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);
	InitTpl(tpl);

	constructor.Reset( tpl->GetFunction() );
	ptpl.Reset( tpl );

	exports->Set(Nan::New("vtkPolyPlane").ToLocalChecked(),tpl->GetFunction());
	exports->Set(Nan::New("PolyPlane").ToLocalChecked(),tpl->GetFunction());
}

void VtkPolyPlaneWrap::InitTpl(v8::Local<v8::FunctionTemplate> tpl)
{
	Nan::SetPrototypeMethod(tpl, "EvaluateFunction", EvaluateFunction);
	Nan::SetPrototypeMethod(tpl, "evaluateFunction", EvaluateFunction);

	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "GetPolyLine", GetPolyLine);
	Nan::SetPrototypeMethod(tpl, "getPolyLine", GetPolyLine);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetPolyLine", SetPolyLine);
	Nan::SetPrototypeMethod(tpl, "setPolyLine", SetPolyLine);

}

void VtkPolyPlaneWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkPolyPlane> native = vtkSmartPointer<vtkPolyPlane>::New();
		VtkPolyPlaneWrap* obj = new VtkPolyPlaneWrap(native);		obj->Wrap(info.This());
	}
	else
	{
		Nan::Utf8String s(info[0]);
		if(info[0]->ToObject() != vtkNodeJsNoWrap )
			Nan::ThrowError("Parameter Error");
	}

	info.GetReturnValue().Set(info.This());
}

void VtkPolyPlaneWrap::EvaluateFunction(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPolyPlaneWrap *wrapper = ObjectWrap::Unwrap<VtkPolyPlaneWrap>(info.Holder());
	vtkPolyPlane *native = (vtkPolyPlane *)wrapper->native.GetPointer();
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

void VtkPolyPlaneWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPolyPlaneWrap *wrapper = ObjectWrap::Unwrap<VtkPolyPlaneWrap>(info.Holder());
	vtkPolyPlane *native = (vtkPolyPlane *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkPolyPlaneWrap::GetPolyLine(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPolyPlaneWrap *wrapper = ObjectWrap::Unwrap<VtkPolyPlaneWrap>(info.Holder());
	vtkPolyPlane *native = (vtkPolyPlane *)wrapper->native.GetPointer();
	vtkPolyLine * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetPolyLine();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::Function>(VtkPolyLineWrap::constructor);
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkPolyLineWrap *w = new VtkPolyLineWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkPolyPlaneWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPolyPlaneWrap *wrapper = ObjectWrap::Unwrap<VtkPolyPlaneWrap>(info.Holder());
	vtkPolyPlane *native = (vtkPolyPlane *)wrapper->native.GetPointer();
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

void VtkPolyPlaneWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPolyPlaneWrap *wrapper = ObjectWrap::Unwrap<VtkPolyPlaneWrap>(info.Holder());
	vtkPolyPlane *native = (vtkPolyPlane *)wrapper->native.GetPointer();
	vtkPolyPlane * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::Function>(VtkPolyPlaneWrap::constructor);
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkPolyPlaneWrap *w = new VtkPolyPlaneWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkPolyPlaneWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPolyPlaneWrap *wrapper = ObjectWrap::Unwrap<VtkPolyPlaneWrap>(info.Holder());
	vtkPolyPlane *native = (vtkPolyPlane *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject())
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkPolyPlane * r;
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
			Nan::New<v8::Function>(VtkPolyPlaneWrap::constructor);
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkPolyPlaneWrap *w = new VtkPolyPlaneWrap();
		w->native.TakeReference(r);
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkPolyPlaneWrap::SetPolyLine(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPolyPlaneWrap *wrapper = ObjectWrap::Unwrap<VtkPolyPlaneWrap>(info.Holder());
	vtkPolyPlane *native = (vtkPolyPlane *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject())
	{
		VtkPolyLineWrap *a0 = ObjectWrap::Unwrap<VtkPolyLineWrap>(info[0]->ToObject());
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetPolyLine(
			(vtkPolyLine *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}
