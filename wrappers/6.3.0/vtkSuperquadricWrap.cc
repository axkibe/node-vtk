/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkImplicitFunctionWrap.h"
#include "vtkSuperquadricWrap.h"
#include "vtkObjectWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkSuperquadricWrap::ptpl;

VtkSuperquadricWrap::VtkSuperquadricWrap()
{ }

VtkSuperquadricWrap::VtkSuperquadricWrap(vtkSmartPointer<vtkSuperquadric> _native)
{ native = _native; }

VtkSuperquadricWrap::~VtkSuperquadricWrap()
{ }

void VtkSuperquadricWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkSuperquadric").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("Superquadric").ToLocalChecked(), ConstructorGetter);
}

void VtkSuperquadricWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkSuperquadricWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkImplicitFunctionWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkImplicitFunctionWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkSuperquadricWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "EvaluateFunction", EvaluateFunction);
	Nan::SetPrototypeMethod(tpl, "evaluateFunction", EvaluateFunction);

	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "GetPhiRoundness", GetPhiRoundness);
	Nan::SetPrototypeMethod(tpl, "getPhiRoundness", GetPhiRoundness);

	Nan::SetPrototypeMethod(tpl, "GetSize", GetSize);
	Nan::SetPrototypeMethod(tpl, "getSize", GetSize);

	Nan::SetPrototypeMethod(tpl, "GetThetaRoundness", GetThetaRoundness);
	Nan::SetPrototypeMethod(tpl, "getThetaRoundness", GetThetaRoundness);

	Nan::SetPrototypeMethod(tpl, "GetThickness", GetThickness);
	Nan::SetPrototypeMethod(tpl, "getThickness", GetThickness);

	Nan::SetPrototypeMethod(tpl, "GetThicknessMaxValue", GetThicknessMaxValue);
	Nan::SetPrototypeMethod(tpl, "getThicknessMaxValue", GetThicknessMaxValue);

	Nan::SetPrototypeMethod(tpl, "GetThicknessMinValue", GetThicknessMinValue);
	Nan::SetPrototypeMethod(tpl, "getThicknessMinValue", GetThicknessMinValue);

	Nan::SetPrototypeMethod(tpl, "GetToroidal", GetToroidal);
	Nan::SetPrototypeMethod(tpl, "getToroidal", GetToroidal);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetCenter", SetCenter);
	Nan::SetPrototypeMethod(tpl, "setCenter", SetCenter);

	Nan::SetPrototypeMethod(tpl, "SetPhiRoundness", SetPhiRoundness);
	Nan::SetPrototypeMethod(tpl, "setPhiRoundness", SetPhiRoundness);

	Nan::SetPrototypeMethod(tpl, "SetScale", SetScale);
	Nan::SetPrototypeMethod(tpl, "setScale", SetScale);

	Nan::SetPrototypeMethod(tpl, "SetSize", SetSize);
	Nan::SetPrototypeMethod(tpl, "setSize", SetSize);

	Nan::SetPrototypeMethod(tpl, "SetThetaRoundness", SetThetaRoundness);
	Nan::SetPrototypeMethod(tpl, "setThetaRoundness", SetThetaRoundness);

	Nan::SetPrototypeMethod(tpl, "SetThickness", SetThickness);
	Nan::SetPrototypeMethod(tpl, "setThickness", SetThickness);

	Nan::SetPrototypeMethod(tpl, "SetToroidal", SetToroidal);
	Nan::SetPrototypeMethod(tpl, "setToroidal", SetToroidal);

	Nan::SetPrototypeMethod(tpl, "ToroidalOff", ToroidalOff);
	Nan::SetPrototypeMethod(tpl, "toroidalOff", ToroidalOff);

	Nan::SetPrototypeMethod(tpl, "ToroidalOn", ToroidalOn);
	Nan::SetPrototypeMethod(tpl, "toroidalOn", ToroidalOn);

	ptpl.Reset( tpl );
}

void VtkSuperquadricWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkSuperquadric> native = vtkSmartPointer<vtkSuperquadric>::New();
		VtkSuperquadricWrap* obj = new VtkSuperquadricWrap(native);		obj->Wrap(info.This());
	}
	else
	{
		Nan::Utf8String s(info[0]);
		if(info[0]->ToObject() != vtkNodeJsNoWrap )
			Nan::ThrowError("Parameter Error");
	}

	info.GetReturnValue().Set(info.This());
}

void VtkSuperquadricWrap::EvaluateFunction(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSuperquadricWrap *wrapper = ObjectWrap::Unwrap<VtkSuperquadricWrap>(info.Holder());
	vtkSuperquadric *native = (vtkSuperquadric *)wrapper->native.GetPointer();
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

void VtkSuperquadricWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSuperquadricWrap *wrapper = ObjectWrap::Unwrap<VtkSuperquadricWrap>(info.Holder());
	vtkSuperquadric *native = (vtkSuperquadric *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkSuperquadricWrap::GetPhiRoundness(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSuperquadricWrap *wrapper = ObjectWrap::Unwrap<VtkSuperquadricWrap>(info.Holder());
	vtkSuperquadric *native = (vtkSuperquadric *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetPhiRoundness();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkSuperquadricWrap::GetSize(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSuperquadricWrap *wrapper = ObjectWrap::Unwrap<VtkSuperquadricWrap>(info.Holder());
	vtkSuperquadric *native = (vtkSuperquadric *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetSize();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkSuperquadricWrap::GetThetaRoundness(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSuperquadricWrap *wrapper = ObjectWrap::Unwrap<VtkSuperquadricWrap>(info.Holder());
	vtkSuperquadric *native = (vtkSuperquadric *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetThetaRoundness();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkSuperquadricWrap::GetThickness(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSuperquadricWrap *wrapper = ObjectWrap::Unwrap<VtkSuperquadricWrap>(info.Holder());
	vtkSuperquadric *native = (vtkSuperquadric *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetThickness();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkSuperquadricWrap::GetThicknessMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSuperquadricWrap *wrapper = ObjectWrap::Unwrap<VtkSuperquadricWrap>(info.Holder());
	vtkSuperquadric *native = (vtkSuperquadric *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetThicknessMaxValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkSuperquadricWrap::GetThicknessMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSuperquadricWrap *wrapper = ObjectWrap::Unwrap<VtkSuperquadricWrap>(info.Holder());
	vtkSuperquadric *native = (vtkSuperquadric *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetThicknessMinValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkSuperquadricWrap::GetToroidal(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSuperquadricWrap *wrapper = ObjectWrap::Unwrap<VtkSuperquadricWrap>(info.Holder());
	vtkSuperquadric *native = (vtkSuperquadric *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetToroidal();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkSuperquadricWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSuperquadricWrap *wrapper = ObjectWrap::Unwrap<VtkSuperquadricWrap>(info.Holder());
	vtkSuperquadric *native = (vtkSuperquadric *)wrapper->native.GetPointer();
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

void VtkSuperquadricWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSuperquadricWrap *wrapper = ObjectWrap::Unwrap<VtkSuperquadricWrap>(info.Holder());
	vtkSuperquadric *native = (vtkSuperquadric *)wrapper->native.GetPointer();
	vtkSuperquadric * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
		VtkSuperquadricWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkSuperquadricWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkSuperquadricWrap *w = new VtkSuperquadricWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkSuperquadricWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSuperquadricWrap *wrapper = ObjectWrap::Unwrap<VtkSuperquadricWrap>(info.Holder());
	vtkSuperquadric *native = (vtkSuperquadric *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkSuperquadric * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObject *) a0->native.GetPointer()
		);
			VtkSuperquadricWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkSuperquadricWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkSuperquadricWrap *w = new VtkSuperquadricWrap();
		w->native.TakeReference(r);
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkSuperquadricWrap::SetCenter(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSuperquadricWrap *wrapper = ObjectWrap::Unwrap<VtkSuperquadricWrap>(info.Holder());
	vtkSuperquadric *native = (vtkSuperquadric *)wrapper->native.GetPointer();
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

void VtkSuperquadricWrap::SetPhiRoundness(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSuperquadricWrap *wrapper = ObjectWrap::Unwrap<VtkSuperquadricWrap>(info.Holder());
	vtkSuperquadric *native = (vtkSuperquadric *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsNumber())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetPhiRoundness(
			info[0]->NumberValue()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkSuperquadricWrap::SetScale(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSuperquadricWrap *wrapper = ObjectWrap::Unwrap<VtkSuperquadricWrap>(info.Holder());
	vtkSuperquadric *native = (vtkSuperquadric *)wrapper->native.GetPointer();
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
				native->SetScale(
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

void VtkSuperquadricWrap::SetSize(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSuperquadricWrap *wrapper = ObjectWrap::Unwrap<VtkSuperquadricWrap>(info.Holder());
	vtkSuperquadric *native = (vtkSuperquadric *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsNumber())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetSize(
			info[0]->NumberValue()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkSuperquadricWrap::SetThetaRoundness(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSuperquadricWrap *wrapper = ObjectWrap::Unwrap<VtkSuperquadricWrap>(info.Holder());
	vtkSuperquadric *native = (vtkSuperquadric *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsNumber())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetThetaRoundness(
			info[0]->NumberValue()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkSuperquadricWrap::SetThickness(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSuperquadricWrap *wrapper = ObjectWrap::Unwrap<VtkSuperquadricWrap>(info.Holder());
	vtkSuperquadric *native = (vtkSuperquadric *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsNumber())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetThickness(
			info[0]->NumberValue()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkSuperquadricWrap::SetToroidal(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSuperquadricWrap *wrapper = ObjectWrap::Unwrap<VtkSuperquadricWrap>(info.Holder());
	vtkSuperquadric *native = (vtkSuperquadric *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetToroidal(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkSuperquadricWrap::ToroidalOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSuperquadricWrap *wrapper = ObjectWrap::Unwrap<VtkSuperquadricWrap>(info.Holder());
	vtkSuperquadric *native = (vtkSuperquadric *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->ToroidalOff();
}

void VtkSuperquadricWrap::ToroidalOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSuperquadricWrap *wrapper = ObjectWrap::Unwrap<VtkSuperquadricWrap>(info.Holder());
	vtkSuperquadric *native = (vtkSuperquadric *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->ToroidalOn();
}

