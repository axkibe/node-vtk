/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkPolyDataAlgorithmWrap.h"
#include "vtkArcSourceWrap.h"
#include "vtkObjectWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkArcSourceWrap::ptpl;

VtkArcSourceWrap::VtkArcSourceWrap()
{ }

VtkArcSourceWrap::VtkArcSourceWrap(vtkSmartPointer<vtkArcSource> _native)
{ native = _native; }

VtkArcSourceWrap::~VtkArcSourceWrap()
{ }

void VtkArcSourceWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkArcSource").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("ArcSource").ToLocalChecked(), ConstructorGetter);
}

void VtkArcSourceWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkArcSourceWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkPolyDataAlgorithmWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkPolyDataAlgorithmWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkArcSourceWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "GetAngle", GetAngle);
	Nan::SetPrototypeMethod(tpl, "getAngle", GetAngle);

	Nan::SetPrototypeMethod(tpl, "GetAngleMaxValue", GetAngleMaxValue);
	Nan::SetPrototypeMethod(tpl, "getAngleMaxValue", GetAngleMaxValue);

	Nan::SetPrototypeMethod(tpl, "GetAngleMinValue", GetAngleMinValue);
	Nan::SetPrototypeMethod(tpl, "getAngleMinValue", GetAngleMinValue);

	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "GetNegative", GetNegative);
	Nan::SetPrototypeMethod(tpl, "getNegative", GetNegative);

	Nan::SetPrototypeMethod(tpl, "GetOutputPointsPrecision", GetOutputPointsPrecision);
	Nan::SetPrototypeMethod(tpl, "getOutputPointsPrecision", GetOutputPointsPrecision);

	Nan::SetPrototypeMethod(tpl, "GetResolution", GetResolution);
	Nan::SetPrototypeMethod(tpl, "getResolution", GetResolution);

	Nan::SetPrototypeMethod(tpl, "GetResolutionMaxValue", GetResolutionMaxValue);
	Nan::SetPrototypeMethod(tpl, "getResolutionMaxValue", GetResolutionMaxValue);

	Nan::SetPrototypeMethod(tpl, "GetResolutionMinValue", GetResolutionMinValue);
	Nan::SetPrototypeMethod(tpl, "getResolutionMinValue", GetResolutionMinValue);

	Nan::SetPrototypeMethod(tpl, "GetUseNormalAndAngle", GetUseNormalAndAngle);
	Nan::SetPrototypeMethod(tpl, "getUseNormalAndAngle", GetUseNormalAndAngle);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "NegativeOff", NegativeOff);
	Nan::SetPrototypeMethod(tpl, "negativeOff", NegativeOff);

	Nan::SetPrototypeMethod(tpl, "NegativeOn", NegativeOn);
	Nan::SetPrototypeMethod(tpl, "negativeOn", NegativeOn);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetAngle", SetAngle);
	Nan::SetPrototypeMethod(tpl, "setAngle", SetAngle);

	Nan::SetPrototypeMethod(tpl, "SetCenter", SetCenter);
	Nan::SetPrototypeMethod(tpl, "setCenter", SetCenter);

	Nan::SetPrototypeMethod(tpl, "SetNegative", SetNegative);
	Nan::SetPrototypeMethod(tpl, "setNegative", SetNegative);

	Nan::SetPrototypeMethod(tpl, "SetNormal", SetNormal);
	Nan::SetPrototypeMethod(tpl, "setNormal", SetNormal);

	Nan::SetPrototypeMethod(tpl, "SetOutputPointsPrecision", SetOutputPointsPrecision);
	Nan::SetPrototypeMethod(tpl, "setOutputPointsPrecision", SetOutputPointsPrecision);

	Nan::SetPrototypeMethod(tpl, "SetPoint1", SetPoint1);
	Nan::SetPrototypeMethod(tpl, "setPoint1", SetPoint1);

	Nan::SetPrototypeMethod(tpl, "SetPoint2", SetPoint2);
	Nan::SetPrototypeMethod(tpl, "setPoint2", SetPoint2);

	Nan::SetPrototypeMethod(tpl, "SetPolarVector", SetPolarVector);
	Nan::SetPrototypeMethod(tpl, "setPolarVector", SetPolarVector);

	Nan::SetPrototypeMethod(tpl, "SetResolution", SetResolution);
	Nan::SetPrototypeMethod(tpl, "setResolution", SetResolution);

	Nan::SetPrototypeMethod(tpl, "SetUseNormalAndAngle", SetUseNormalAndAngle);
	Nan::SetPrototypeMethod(tpl, "setUseNormalAndAngle", SetUseNormalAndAngle);

	Nan::SetPrototypeMethod(tpl, "UseNormalAndAngleOff", UseNormalAndAngleOff);
	Nan::SetPrototypeMethod(tpl, "useNormalAndAngleOff", UseNormalAndAngleOff);

	Nan::SetPrototypeMethod(tpl, "UseNormalAndAngleOn", UseNormalAndAngleOn);
	Nan::SetPrototypeMethod(tpl, "useNormalAndAngleOn", UseNormalAndAngleOn);

	ptpl.Reset( tpl );
}

void VtkArcSourceWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkArcSource> native = vtkSmartPointer<vtkArcSource>::New();
		VtkArcSourceWrap* obj = new VtkArcSourceWrap(native);
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

void VtkArcSourceWrap::GetAngle(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkArcSourceWrap *wrapper = ObjectWrap::Unwrap<VtkArcSourceWrap>(info.Holder());
	vtkArcSource *native = (vtkArcSource *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetAngle();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkArcSourceWrap::GetAngleMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkArcSourceWrap *wrapper = ObjectWrap::Unwrap<VtkArcSourceWrap>(info.Holder());
	vtkArcSource *native = (vtkArcSource *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetAngleMaxValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkArcSourceWrap::GetAngleMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkArcSourceWrap *wrapper = ObjectWrap::Unwrap<VtkArcSourceWrap>(info.Holder());
	vtkArcSource *native = (vtkArcSource *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetAngleMinValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkArcSourceWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkArcSourceWrap *wrapper = ObjectWrap::Unwrap<VtkArcSourceWrap>(info.Holder());
	vtkArcSource *native = (vtkArcSource *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkArcSourceWrap::GetNegative(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkArcSourceWrap *wrapper = ObjectWrap::Unwrap<VtkArcSourceWrap>(info.Holder());
	vtkArcSource *native = (vtkArcSource *)wrapper->native.GetPointer();
	bool r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetNegative();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkArcSourceWrap::GetOutputPointsPrecision(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkArcSourceWrap *wrapper = ObjectWrap::Unwrap<VtkArcSourceWrap>(info.Holder());
	vtkArcSource *native = (vtkArcSource *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetOutputPointsPrecision();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkArcSourceWrap::GetResolution(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkArcSourceWrap *wrapper = ObjectWrap::Unwrap<VtkArcSourceWrap>(info.Holder());
	vtkArcSource *native = (vtkArcSource *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetResolution();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkArcSourceWrap::GetResolutionMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkArcSourceWrap *wrapper = ObjectWrap::Unwrap<VtkArcSourceWrap>(info.Holder());
	vtkArcSource *native = (vtkArcSource *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetResolutionMaxValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkArcSourceWrap::GetResolutionMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkArcSourceWrap *wrapper = ObjectWrap::Unwrap<VtkArcSourceWrap>(info.Holder());
	vtkArcSource *native = (vtkArcSource *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetResolutionMinValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkArcSourceWrap::GetUseNormalAndAngle(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkArcSourceWrap *wrapper = ObjectWrap::Unwrap<VtkArcSourceWrap>(info.Holder());
	vtkArcSource *native = (vtkArcSource *)wrapper->native.GetPointer();
	bool r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetUseNormalAndAngle();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkArcSourceWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkArcSourceWrap *wrapper = ObjectWrap::Unwrap<VtkArcSourceWrap>(info.Holder());
	vtkArcSource *native = (vtkArcSource *)wrapper->native.GetPointer();
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

void VtkArcSourceWrap::NegativeOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkArcSourceWrap *wrapper = ObjectWrap::Unwrap<VtkArcSourceWrap>(info.Holder());
	vtkArcSource *native = (vtkArcSource *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->NegativeOff();
}

void VtkArcSourceWrap::NegativeOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkArcSourceWrap *wrapper = ObjectWrap::Unwrap<VtkArcSourceWrap>(info.Holder());
	vtkArcSource *native = (vtkArcSource *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->NegativeOn();
}

void VtkArcSourceWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkArcSourceWrap *wrapper = ObjectWrap::Unwrap<VtkArcSourceWrap>(info.Holder());
	vtkArcSource *native = (vtkArcSource *)wrapper->native.GetPointer();
	vtkArcSource * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
		VtkArcSourceWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkArcSourceWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkArcSourceWrap *w = new VtkArcSourceWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkArcSourceWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkArcSourceWrap *wrapper = ObjectWrap::Unwrap<VtkArcSourceWrap>(info.Holder());
	vtkArcSource *native = (vtkArcSource *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkArcSource * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObject *) a0->native.GetPointer()
		);
			VtkArcSourceWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkArcSourceWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkArcSourceWrap *w = new VtkArcSourceWrap();
		w->native = r;
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkArcSourceWrap::SetAngle(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkArcSourceWrap *wrapper = ObjectWrap::Unwrap<VtkArcSourceWrap>(info.Holder());
	vtkArcSource *native = (vtkArcSource *)wrapper->native.GetPointer();
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

void VtkArcSourceWrap::SetCenter(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkArcSourceWrap *wrapper = ObjectWrap::Unwrap<VtkArcSourceWrap>(info.Holder());
	vtkArcSource *native = (vtkArcSource *)wrapper->native.GetPointer();
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

void VtkArcSourceWrap::SetNegative(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkArcSourceWrap *wrapper = ObjectWrap::Unwrap<VtkArcSourceWrap>(info.Holder());
	vtkArcSource *native = (vtkArcSource *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsBoolean())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetNegative(
			info[0]->BooleanValue()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkArcSourceWrap::SetNormal(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkArcSourceWrap *wrapper = ObjectWrap::Unwrap<VtkArcSourceWrap>(info.Holder());
	vtkArcSource *native = (vtkArcSource *)wrapper->native.GetPointer();
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

void VtkArcSourceWrap::SetOutputPointsPrecision(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkArcSourceWrap *wrapper = ObjectWrap::Unwrap<VtkArcSourceWrap>(info.Holder());
	vtkArcSource *native = (vtkArcSource *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetOutputPointsPrecision(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkArcSourceWrap::SetPoint1(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkArcSourceWrap *wrapper = ObjectWrap::Unwrap<VtkArcSourceWrap>(info.Holder());
	vtkArcSource *native = (vtkArcSource *)wrapper->native.GetPointer();
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
				native->SetPoint1(
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

void VtkArcSourceWrap::SetPoint2(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkArcSourceWrap *wrapper = ObjectWrap::Unwrap<VtkArcSourceWrap>(info.Holder());
	vtkArcSource *native = (vtkArcSource *)wrapper->native.GetPointer();
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
				native->SetPoint2(
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

void VtkArcSourceWrap::SetPolarVector(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkArcSourceWrap *wrapper = ObjectWrap::Unwrap<VtkArcSourceWrap>(info.Holder());
	vtkArcSource *native = (vtkArcSource *)wrapper->native.GetPointer();
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
				native->SetPolarVector(
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

void VtkArcSourceWrap::SetResolution(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkArcSourceWrap *wrapper = ObjectWrap::Unwrap<VtkArcSourceWrap>(info.Holder());
	vtkArcSource *native = (vtkArcSource *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetResolution(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkArcSourceWrap::SetUseNormalAndAngle(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkArcSourceWrap *wrapper = ObjectWrap::Unwrap<VtkArcSourceWrap>(info.Holder());
	vtkArcSource *native = (vtkArcSource *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsBoolean())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetUseNormalAndAngle(
			info[0]->BooleanValue()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkArcSourceWrap::UseNormalAndAngleOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkArcSourceWrap *wrapper = ObjectWrap::Unwrap<VtkArcSourceWrap>(info.Holder());
	vtkArcSource *native = (vtkArcSource *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->UseNormalAndAngleOff();
}

void VtkArcSourceWrap::UseNormalAndAngleOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkArcSourceWrap *wrapper = ObjectWrap::Unwrap<VtkArcSourceWrap>(info.Holder());
	vtkArcSource *native = (vtkArcSource *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->UseNormalAndAngleOn();
}

