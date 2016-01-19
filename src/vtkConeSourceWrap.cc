/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkConeSource.h>

#include "vtkPolyDataAlgorithmWrap.h"
#include "vtkConeSourceWrap.h"
#include "vtkObjectWrap.h"

using namespace v8;

Nan::Persistent<v8::Function> VtkConeSourceWrap::constructor;

VtkConeSourceWrap::VtkConeSourceWrap()
{ }

VtkConeSourceWrap::VtkConeSourceWrap(vtkSmartPointer<vtkConeSource> _native)
{ native = _native; }

VtkConeSourceWrap::~VtkConeSourceWrap()
{ }

void VtkConeSourceWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::HandleScope scope;

	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	tpl->SetClassName(Nan::New("VtkConeSourceWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	VtkObjectBaseWrap::InitTpl(tpl);
	VtkObjectWrap::InitTpl(tpl);
	VtkAlgorithmWrap::InitTpl(tpl);
	VtkPolyDataAlgorithmWrap::InitTpl(tpl);
	InitTpl(tpl);

	constructor.Reset( tpl->GetFunction() );

	exports->Set(Nan::New("vtkConeSource").ToLocalChecked(),tpl->GetFunction());
	exports->Set(Nan::New("coneSource").ToLocalChecked(),tpl->GetFunction());
}

void VtkConeSourceWrap::InitTpl(v8::Local<v8::FunctionTemplate> tpl)
{
	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetHeight", SetHeight);
	Nan::SetPrototypeMethod(tpl, "setHeight", SetHeight);

	Nan::SetPrototypeMethod(tpl, "GetHeightMinValue", GetHeightMinValue);
	Nan::SetPrototypeMethod(tpl, "getHeightMinValue", GetHeightMinValue);

	Nan::SetPrototypeMethod(tpl, "GetHeightMaxValue", GetHeightMaxValue);
	Nan::SetPrototypeMethod(tpl, "getHeightMaxValue", GetHeightMaxValue);

	Nan::SetPrototypeMethod(tpl, "GetHeight", GetHeight);
	Nan::SetPrototypeMethod(tpl, "getHeight", GetHeight);

	Nan::SetPrototypeMethod(tpl, "SetRadius", SetRadius);
	Nan::SetPrototypeMethod(tpl, "setRadius", SetRadius);

	Nan::SetPrototypeMethod(tpl, "GetRadiusMinValue", GetRadiusMinValue);
	Nan::SetPrototypeMethod(tpl, "getRadiusMinValue", GetRadiusMinValue);

	Nan::SetPrototypeMethod(tpl, "GetRadiusMaxValue", GetRadiusMaxValue);
	Nan::SetPrototypeMethod(tpl, "getRadiusMaxValue", GetRadiusMaxValue);

	Nan::SetPrototypeMethod(tpl, "GetRadius", GetRadius);
	Nan::SetPrototypeMethod(tpl, "getRadius", GetRadius);

	Nan::SetPrototypeMethod(tpl, "SetResolution", SetResolution);
	Nan::SetPrototypeMethod(tpl, "setResolution", SetResolution);

	Nan::SetPrototypeMethod(tpl, "GetResolutionMinValue", GetResolutionMinValue);
	Nan::SetPrototypeMethod(tpl, "getResolutionMinValue", GetResolutionMinValue);

	Nan::SetPrototypeMethod(tpl, "GetResolutionMaxValue", GetResolutionMaxValue);
	Nan::SetPrototypeMethod(tpl, "getResolutionMaxValue", GetResolutionMaxValue);

	Nan::SetPrototypeMethod(tpl, "GetResolution", GetResolution);
	Nan::SetPrototypeMethod(tpl, "getResolution", GetResolution);

	Nan::SetPrototypeMethod(tpl, "SetCenter", SetCenter);
	Nan::SetPrototypeMethod(tpl, "setCenter", SetCenter);

	Nan::SetPrototypeMethod(tpl, "SetDirection", SetDirection);
	Nan::SetPrototypeMethod(tpl, "setDirection", SetDirection);

	Nan::SetPrototypeMethod(tpl, "SetAngle", SetAngle);
	Nan::SetPrototypeMethod(tpl, "setAngle", SetAngle);

	Nan::SetPrototypeMethod(tpl, "GetAngle", GetAngle);
	Nan::SetPrototypeMethod(tpl, "getAngle", GetAngle);

	Nan::SetPrototypeMethod(tpl, "SetCapping", SetCapping);
	Nan::SetPrototypeMethod(tpl, "setCapping", SetCapping);

	Nan::SetPrototypeMethod(tpl, "GetCapping", GetCapping);
	Nan::SetPrototypeMethod(tpl, "getCapping", GetCapping);

	Nan::SetPrototypeMethod(tpl, "CappingOn", CappingOn);
	Nan::SetPrototypeMethod(tpl, "cappingOn", CappingOn);

	Nan::SetPrototypeMethod(tpl, "CappingOff", CappingOff);
	Nan::SetPrototypeMethod(tpl, "cappingOff", CappingOff);

	Nan::SetPrototypeMethod(tpl, "SetOutputPointsPrecision", SetOutputPointsPrecision);
	Nan::SetPrototypeMethod(tpl, "setOutputPointsPrecision", SetOutputPointsPrecision);

	Nan::SetPrototypeMethod(tpl, "GetOutputPointsPrecision", GetOutputPointsPrecision);
	Nan::SetPrototypeMethod(tpl, "getOutputPointsPrecision", GetOutputPointsPrecision);

}

void VtkConeSourceWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkConeSource> native = vtkSmartPointer<vtkConeSource>::New();
		VtkConeSourceWrap* obj = new VtkConeSourceWrap(native);		obj->Wrap(info.This());
	}
	else
	{
		Nan::Utf8String s(info[0]);
		if(strcmp(*s, "__nowrap" ))
			Nan::ThrowError("Parameter Error");
	}

	info.GetReturnValue().Set(info.This());
}

void VtkConeSourceWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkConeSourceWrap *wrapper = ObjectWrap::Unwrap<VtkConeSourceWrap>(info.Holder());
	vtkConeSource *native = (vtkConeSource *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkConeSourceWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkConeSourceWrap *wrapper = ObjectWrap::Unwrap<VtkConeSourceWrap>(info.Holder());
	vtkConeSource *native = (vtkConeSource *)wrapper->native.GetPointer();
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

void VtkConeSourceWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkConeSourceWrap *wrapper = ObjectWrap::Unwrap<VtkConeSourceWrap>(info.Holder());
	vtkConeSource *native = (vtkConeSource *)wrapper->native.GetPointer();
	vtkConeSource * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
	const int argc = 1;
	v8::Local<v8::Value> argv[argc] =
		{ Nan::New("__nowrap").ToLocalChecked() };
	v8::Local<v8::Function> cons =
		Nan::New<v8::Function>(VtkConeSourceWrap::constructor);
	v8::Local<v8::Object> wo = cons->NewInstance(argc, argv);
	VtkConeSourceWrap *w = new VtkConeSourceWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkConeSourceWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkConeSourceWrap *wrapper = ObjectWrap::Unwrap<VtkConeSourceWrap>(info.Holder());
	vtkConeSource *native = (vtkConeSource *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject())
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkConeSource * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObject *) a0->native.GetPointer()
		);
		const int argc = 1;
		v8::Local<v8::Value> argv[argc] =
			{ Nan::New("__nowrap").ToLocalChecked() };
		v8::Local<v8::Function> cons =
			Nan::New<v8::Function>(VtkConeSourceWrap::constructor);
		v8::Local<v8::Object> wo = cons->NewInstance(argc, argv);
		VtkConeSourceWrap *w = new VtkConeSourceWrap();
		w->native.TakeReference(r);
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkConeSourceWrap::SetHeight(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkConeSourceWrap *wrapper = ObjectWrap::Unwrap<VtkConeSourceWrap>(info.Holder());
	vtkConeSource *native = (vtkConeSource *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsNumber())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetHeight(
			info[0]->NumberValue()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkConeSourceWrap::GetHeightMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkConeSourceWrap *wrapper = ObjectWrap::Unwrap<VtkConeSourceWrap>(info.Holder());
	vtkConeSource *native = (vtkConeSource *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetHeightMinValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkConeSourceWrap::GetHeightMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkConeSourceWrap *wrapper = ObjectWrap::Unwrap<VtkConeSourceWrap>(info.Holder());
	vtkConeSource *native = (vtkConeSource *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetHeightMaxValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkConeSourceWrap::GetHeight(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkConeSourceWrap *wrapper = ObjectWrap::Unwrap<VtkConeSourceWrap>(info.Holder());
	vtkConeSource *native = (vtkConeSource *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetHeight();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkConeSourceWrap::SetRadius(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkConeSourceWrap *wrapper = ObjectWrap::Unwrap<VtkConeSourceWrap>(info.Holder());
	vtkConeSource *native = (vtkConeSource *)wrapper->native.GetPointer();
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

void VtkConeSourceWrap::GetRadiusMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkConeSourceWrap *wrapper = ObjectWrap::Unwrap<VtkConeSourceWrap>(info.Holder());
	vtkConeSource *native = (vtkConeSource *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetRadiusMinValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkConeSourceWrap::GetRadiusMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkConeSourceWrap *wrapper = ObjectWrap::Unwrap<VtkConeSourceWrap>(info.Holder());
	vtkConeSource *native = (vtkConeSource *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetRadiusMaxValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkConeSourceWrap::GetRadius(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkConeSourceWrap *wrapper = ObjectWrap::Unwrap<VtkConeSourceWrap>(info.Holder());
	vtkConeSource *native = (vtkConeSource *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetRadius();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkConeSourceWrap::SetResolution(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkConeSourceWrap *wrapper = ObjectWrap::Unwrap<VtkConeSourceWrap>(info.Holder());
	vtkConeSource *native = (vtkConeSource *)wrapper->native.GetPointer();
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

void VtkConeSourceWrap::GetResolutionMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkConeSourceWrap *wrapper = ObjectWrap::Unwrap<VtkConeSourceWrap>(info.Holder());
	vtkConeSource *native = (vtkConeSource *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetResolutionMinValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkConeSourceWrap::GetResolutionMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkConeSourceWrap *wrapper = ObjectWrap::Unwrap<VtkConeSourceWrap>(info.Holder());
	vtkConeSource *native = (vtkConeSource *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetResolutionMaxValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkConeSourceWrap::GetResolution(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkConeSourceWrap *wrapper = ObjectWrap::Unwrap<VtkConeSourceWrap>(info.Holder());
	vtkConeSource *native = (vtkConeSource *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetResolution();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkConeSourceWrap::SetCenter(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkConeSourceWrap *wrapper = ObjectWrap::Unwrap<VtkConeSourceWrap>(info.Holder());
	vtkConeSource *native = (vtkConeSource *)wrapper->native.GetPointer();
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

void VtkConeSourceWrap::SetDirection(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkConeSourceWrap *wrapper = ObjectWrap::Unwrap<VtkConeSourceWrap>(info.Holder());
	vtkConeSource *native = (vtkConeSource *)wrapper->native.GetPointer();
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
				native->SetDirection(
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

void VtkConeSourceWrap::SetAngle(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkConeSourceWrap *wrapper = ObjectWrap::Unwrap<VtkConeSourceWrap>(info.Holder());
	vtkConeSource *native = (vtkConeSource *)wrapper->native.GetPointer();
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

void VtkConeSourceWrap::GetAngle(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkConeSourceWrap *wrapper = ObjectWrap::Unwrap<VtkConeSourceWrap>(info.Holder());
	vtkConeSource *native = (vtkConeSource *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetAngle();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkConeSourceWrap::SetCapping(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkConeSourceWrap *wrapper = ObjectWrap::Unwrap<VtkConeSourceWrap>(info.Holder());
	vtkConeSource *native = (vtkConeSource *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetCapping(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkConeSourceWrap::GetCapping(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkConeSourceWrap *wrapper = ObjectWrap::Unwrap<VtkConeSourceWrap>(info.Holder());
	vtkConeSource *native = (vtkConeSource *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetCapping();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkConeSourceWrap::CappingOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkConeSourceWrap *wrapper = ObjectWrap::Unwrap<VtkConeSourceWrap>(info.Holder());
	vtkConeSource *native = (vtkConeSource *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->CappingOn();
}

void VtkConeSourceWrap::CappingOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkConeSourceWrap *wrapper = ObjectWrap::Unwrap<VtkConeSourceWrap>(info.Holder());
	vtkConeSource *native = (vtkConeSource *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->CappingOff();
}

void VtkConeSourceWrap::SetOutputPointsPrecision(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkConeSourceWrap *wrapper = ObjectWrap::Unwrap<VtkConeSourceWrap>(info.Holder());
	vtkConeSource *native = (vtkConeSource *)wrapper->native.GetPointer();
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

void VtkConeSourceWrap::GetOutputPointsPrecision(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkConeSourceWrap *wrapper = ObjectWrap::Unwrap<VtkConeSourceWrap>(info.Holder());
	vtkConeSource *native = (vtkConeSource *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetOutputPointsPrecision();
	info.GetReturnValue().Set(Nan::New(r));
}

