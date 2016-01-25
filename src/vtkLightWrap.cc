/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkObjectWrap.h"
#include "vtkLightWrap.h"
#include "vtkRendererWrap.h"
#include "vtkMatrix4x4Wrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::Function> VtkLightWrap::constructor;
Nan::Persistent<v8::FunctionTemplate> VtkLightWrap::ptpl;

VtkLightWrap::VtkLightWrap()
{ }

VtkLightWrap::VtkLightWrap(vtkSmartPointer<vtkLight> _native)
{ native = _native; }

VtkLightWrap::~VtkLightWrap()
{ }

void VtkLightWrap::Init(v8::Local<v8::Object> exports)
{
	if (!constructor.IsEmpty()) return;
	Nan::HandleScope scope;

	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkObjectWrap::Init( exports );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkObjectWrap::ptpl));

	tpl->SetClassName(Nan::New("VtkLightWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);
	InitTpl(tpl);

	constructor.Reset( tpl->GetFunction() );
	ptpl.Reset( tpl );

	exports->Set(Nan::New("vtkLight").ToLocalChecked(),tpl->GetFunction());
	exports->Set(Nan::New("Light").ToLocalChecked(),tpl->GetFunction());
}

void VtkLightWrap::InitTpl(v8::Local<v8::FunctionTemplate> tpl)
{
	Nan::SetPrototypeMethod(tpl, "DeepCopy", DeepCopy);
	Nan::SetPrototypeMethod(tpl, "deepCopy", DeepCopy);

	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "GetConeAngle", GetConeAngle);
	Nan::SetPrototypeMethod(tpl, "getConeAngle", GetConeAngle);

	Nan::SetPrototypeMethod(tpl, "GetExponent", GetExponent);
	Nan::SetPrototypeMethod(tpl, "getExponent", GetExponent);

	Nan::SetPrototypeMethod(tpl, "GetExponentMaxValue", GetExponentMaxValue);
	Nan::SetPrototypeMethod(tpl, "getExponentMaxValue", GetExponentMaxValue);

	Nan::SetPrototypeMethod(tpl, "GetExponentMinValue", GetExponentMinValue);
	Nan::SetPrototypeMethod(tpl, "getExponentMinValue", GetExponentMinValue);

	Nan::SetPrototypeMethod(tpl, "GetIntensity", GetIntensity);
	Nan::SetPrototypeMethod(tpl, "getIntensity", GetIntensity);

	Nan::SetPrototypeMethod(tpl, "GetLightType", GetLightType);
	Nan::SetPrototypeMethod(tpl, "getLightType", GetLightType);

	Nan::SetPrototypeMethod(tpl, "GetPositional", GetPositional);
	Nan::SetPrototypeMethod(tpl, "getPositional", GetPositional);

	Nan::SetPrototypeMethod(tpl, "GetSwitch", GetSwitch);
	Nan::SetPrototypeMethod(tpl, "getSwitch", GetSwitch);

	Nan::SetPrototypeMethod(tpl, "GetTransformMatrix", GetTransformMatrix);
	Nan::SetPrototypeMethod(tpl, "getTransformMatrix", GetTransformMatrix);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "LightTypeIsCameraLight", LightTypeIsCameraLight);
	Nan::SetPrototypeMethod(tpl, "lightTypeIsCameraLight", LightTypeIsCameraLight);

	Nan::SetPrototypeMethod(tpl, "LightTypeIsHeadlight", LightTypeIsHeadlight);
	Nan::SetPrototypeMethod(tpl, "lightTypeIsHeadlight", LightTypeIsHeadlight);

	Nan::SetPrototypeMethod(tpl, "LightTypeIsSceneLight", LightTypeIsSceneLight);
	Nan::SetPrototypeMethod(tpl, "lightTypeIsSceneLight", LightTypeIsSceneLight);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "PositionalOff", PositionalOff);
	Nan::SetPrototypeMethod(tpl, "positionalOff", PositionalOff);

	Nan::SetPrototypeMethod(tpl, "PositionalOn", PositionalOn);
	Nan::SetPrototypeMethod(tpl, "positionalOn", PositionalOn);

	Nan::SetPrototypeMethod(tpl, "Render", Render);
	Nan::SetPrototypeMethod(tpl, "render", Render);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetAmbientColor", SetAmbientColor);
	Nan::SetPrototypeMethod(tpl, "setAmbientColor", SetAmbientColor);

	Nan::SetPrototypeMethod(tpl, "SetAttenuationValues", SetAttenuationValues);
	Nan::SetPrototypeMethod(tpl, "setAttenuationValues", SetAttenuationValues);

	Nan::SetPrototypeMethod(tpl, "SetColor", SetColor);
	Nan::SetPrototypeMethod(tpl, "setColor", SetColor);

	Nan::SetPrototypeMethod(tpl, "SetConeAngle", SetConeAngle);
	Nan::SetPrototypeMethod(tpl, "setConeAngle", SetConeAngle);

	Nan::SetPrototypeMethod(tpl, "SetDiffuseColor", SetDiffuseColor);
	Nan::SetPrototypeMethod(tpl, "setDiffuseColor", SetDiffuseColor);

	Nan::SetPrototypeMethod(tpl, "SetDirectionAngle", SetDirectionAngle);
	Nan::SetPrototypeMethod(tpl, "setDirectionAngle", SetDirectionAngle);

	Nan::SetPrototypeMethod(tpl, "SetExponent", SetExponent);
	Nan::SetPrototypeMethod(tpl, "setExponent", SetExponent);

	Nan::SetPrototypeMethod(tpl, "SetFocalPoint", SetFocalPoint);
	Nan::SetPrototypeMethod(tpl, "setFocalPoint", SetFocalPoint);

	Nan::SetPrototypeMethod(tpl, "SetIntensity", SetIntensity);
	Nan::SetPrototypeMethod(tpl, "setIntensity", SetIntensity);

	Nan::SetPrototypeMethod(tpl, "SetLightType", SetLightType);
	Nan::SetPrototypeMethod(tpl, "setLightType", SetLightType);

	Nan::SetPrototypeMethod(tpl, "SetLightTypeToCameraLight", SetLightTypeToCameraLight);
	Nan::SetPrototypeMethod(tpl, "setLightTypeToCameraLight", SetLightTypeToCameraLight);

	Nan::SetPrototypeMethod(tpl, "SetLightTypeToHeadlight", SetLightTypeToHeadlight);
	Nan::SetPrototypeMethod(tpl, "setLightTypeToHeadlight", SetLightTypeToHeadlight);

	Nan::SetPrototypeMethod(tpl, "SetLightTypeToSceneLight", SetLightTypeToSceneLight);
	Nan::SetPrototypeMethod(tpl, "setLightTypeToSceneLight", SetLightTypeToSceneLight);

	Nan::SetPrototypeMethod(tpl, "SetPosition", SetPosition);
	Nan::SetPrototypeMethod(tpl, "setPosition", SetPosition);

	Nan::SetPrototypeMethod(tpl, "SetPositional", SetPositional);
	Nan::SetPrototypeMethod(tpl, "setPositional", SetPositional);

	Nan::SetPrototypeMethod(tpl, "SetSpecularColor", SetSpecularColor);
	Nan::SetPrototypeMethod(tpl, "setSpecularColor", SetSpecularColor);

	Nan::SetPrototypeMethod(tpl, "SetSwitch", SetSwitch);
	Nan::SetPrototypeMethod(tpl, "setSwitch", SetSwitch);

	Nan::SetPrototypeMethod(tpl, "SetTransformMatrix", SetTransformMatrix);
	Nan::SetPrototypeMethod(tpl, "setTransformMatrix", SetTransformMatrix);

	Nan::SetPrototypeMethod(tpl, "ShallowClone", ShallowClone);
	Nan::SetPrototypeMethod(tpl, "shallowClone", ShallowClone);

	Nan::SetPrototypeMethod(tpl, "SwitchOff", SwitchOff);
	Nan::SetPrototypeMethod(tpl, "switchOff", SwitchOff);

	Nan::SetPrototypeMethod(tpl, "SwitchOn", SwitchOn);
	Nan::SetPrototypeMethod(tpl, "switchOn", SwitchOn);

}

void VtkLightWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkLight> native = vtkSmartPointer<vtkLight>::New();
		VtkLightWrap* obj = new VtkLightWrap(native);		obj->Wrap(info.This());
	}
	else
	{
		Nan::Utf8String s(info[0]);
		if(info[0]->ToObject() != vtkNodeJsNoWrap )
			Nan::ThrowError("Parameter Error");
	}

	info.GetReturnValue().Set(info.This());
}

void VtkLightWrap::DeepCopy(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkLightWrap *wrapper = ObjectWrap::Unwrap<VtkLightWrap>(info.Holder());
	vtkLight *native = (vtkLight *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject())
	{
		VtkLightWrap *a0 = ObjectWrap::Unwrap<VtkLightWrap>(info[0]->ToObject());
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->DeepCopy(
			(vtkLight *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkLightWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkLightWrap *wrapper = ObjectWrap::Unwrap<VtkLightWrap>(info.Holder());
	vtkLight *native = (vtkLight *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkLightWrap::GetConeAngle(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkLightWrap *wrapper = ObjectWrap::Unwrap<VtkLightWrap>(info.Holder());
	vtkLight *native = (vtkLight *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetConeAngle();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkLightWrap::GetExponent(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkLightWrap *wrapper = ObjectWrap::Unwrap<VtkLightWrap>(info.Holder());
	vtkLight *native = (vtkLight *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetExponent();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkLightWrap::GetExponentMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkLightWrap *wrapper = ObjectWrap::Unwrap<VtkLightWrap>(info.Holder());
	vtkLight *native = (vtkLight *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetExponentMaxValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkLightWrap::GetExponentMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkLightWrap *wrapper = ObjectWrap::Unwrap<VtkLightWrap>(info.Holder());
	vtkLight *native = (vtkLight *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetExponentMinValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkLightWrap::GetIntensity(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkLightWrap *wrapper = ObjectWrap::Unwrap<VtkLightWrap>(info.Holder());
	vtkLight *native = (vtkLight *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetIntensity();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkLightWrap::GetLightType(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkLightWrap *wrapper = ObjectWrap::Unwrap<VtkLightWrap>(info.Holder());
	vtkLight *native = (vtkLight *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetLightType();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkLightWrap::GetPositional(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkLightWrap *wrapper = ObjectWrap::Unwrap<VtkLightWrap>(info.Holder());
	vtkLight *native = (vtkLight *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetPositional();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkLightWrap::GetSwitch(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkLightWrap *wrapper = ObjectWrap::Unwrap<VtkLightWrap>(info.Holder());
	vtkLight *native = (vtkLight *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetSwitch();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkLightWrap::GetTransformMatrix(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkLightWrap *wrapper = ObjectWrap::Unwrap<VtkLightWrap>(info.Holder());
	vtkLight *native = (vtkLight *)wrapper->native.GetPointer();
	vtkMatrix4x4 * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetTransformMatrix();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::Function>(VtkMatrix4x4Wrap::constructor);
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkMatrix4x4Wrap *w = new VtkMatrix4x4Wrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkLightWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkLightWrap *wrapper = ObjectWrap::Unwrap<VtkLightWrap>(info.Holder());
	vtkLight *native = (vtkLight *)wrapper->native.GetPointer();
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

void VtkLightWrap::LightTypeIsCameraLight(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkLightWrap *wrapper = ObjectWrap::Unwrap<VtkLightWrap>(info.Holder());
	vtkLight *native = (vtkLight *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->LightTypeIsCameraLight();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkLightWrap::LightTypeIsHeadlight(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkLightWrap *wrapper = ObjectWrap::Unwrap<VtkLightWrap>(info.Holder());
	vtkLight *native = (vtkLight *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->LightTypeIsHeadlight();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkLightWrap::LightTypeIsSceneLight(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkLightWrap *wrapper = ObjectWrap::Unwrap<VtkLightWrap>(info.Holder());
	vtkLight *native = (vtkLight *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->LightTypeIsSceneLight();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkLightWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkLightWrap *wrapper = ObjectWrap::Unwrap<VtkLightWrap>(info.Holder());
	vtkLight *native = (vtkLight *)wrapper->native.GetPointer();
	vtkLight * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::Function>(VtkLightWrap::constructor);
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkLightWrap *w = new VtkLightWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkLightWrap::PositionalOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkLightWrap *wrapper = ObjectWrap::Unwrap<VtkLightWrap>(info.Holder());
	vtkLight *native = (vtkLight *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->PositionalOff();
}

void VtkLightWrap::PositionalOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkLightWrap *wrapper = ObjectWrap::Unwrap<VtkLightWrap>(info.Holder());
	vtkLight *native = (vtkLight *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->PositionalOn();
}

void VtkLightWrap::Render(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkLightWrap *wrapper = ObjectWrap::Unwrap<VtkLightWrap>(info.Holder());
	vtkLight *native = (vtkLight *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject())
	{
		VtkRendererWrap *a0 = ObjectWrap::Unwrap<VtkRendererWrap>(info[0]->ToObject());
		if(info.Length() > 1 && info[1]->IsInt32())
		{
			if(info.Length() != 2)
			{
				Nan::ThrowError("Too many parameters.");
				return;
			}
			native->Render(
				(vtkRenderer *) a0->native.GetPointer(),
				info[1]->Int32Value()
			);
			return;
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkLightWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkLightWrap *wrapper = ObjectWrap::Unwrap<VtkLightWrap>(info.Holder());
	vtkLight *native = (vtkLight *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject())
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkLight * r;
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
			Nan::New<v8::Function>(VtkLightWrap::constructor);
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkLightWrap *w = new VtkLightWrap();
		w->native.TakeReference(r);
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkLightWrap::SetAmbientColor(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkLightWrap *wrapper = ObjectWrap::Unwrap<VtkLightWrap>(info.Holder());
	vtkLight *native = (vtkLight *)wrapper->native.GetPointer();
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
				native->SetAmbientColor(
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

void VtkLightWrap::SetAttenuationValues(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkLightWrap *wrapper = ObjectWrap::Unwrap<VtkLightWrap>(info.Holder());
	vtkLight *native = (vtkLight *)wrapper->native.GetPointer();
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
				native->SetAttenuationValues(
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

void VtkLightWrap::SetColor(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkLightWrap *wrapper = ObjectWrap::Unwrap<VtkLightWrap>(info.Holder());
	vtkLight *native = (vtkLight *)wrapper->native.GetPointer();
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
				native->SetColor(
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

void VtkLightWrap::SetConeAngle(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkLightWrap *wrapper = ObjectWrap::Unwrap<VtkLightWrap>(info.Holder());
	vtkLight *native = (vtkLight *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsNumber())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetConeAngle(
			info[0]->NumberValue()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkLightWrap::SetDiffuseColor(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkLightWrap *wrapper = ObjectWrap::Unwrap<VtkLightWrap>(info.Holder());
	vtkLight *native = (vtkLight *)wrapper->native.GetPointer();
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
				native->SetDiffuseColor(
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

void VtkLightWrap::SetDirectionAngle(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkLightWrap *wrapper = ObjectWrap::Unwrap<VtkLightWrap>(info.Holder());
	vtkLight *native = (vtkLight *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsNumber())
	{
		if(info.Length() > 1 && info[1]->IsNumber())
		{
			if(info.Length() != 2)
			{
				Nan::ThrowError("Too many parameters.");
				return;
			}
			native->SetDirectionAngle(
				info[0]->NumberValue(),
				info[1]->NumberValue()
			);
			return;
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkLightWrap::SetExponent(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkLightWrap *wrapper = ObjectWrap::Unwrap<VtkLightWrap>(info.Holder());
	vtkLight *native = (vtkLight *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsNumber())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetExponent(
			info[0]->NumberValue()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkLightWrap::SetFocalPoint(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkLightWrap *wrapper = ObjectWrap::Unwrap<VtkLightWrap>(info.Holder());
	vtkLight *native = (vtkLight *)wrapper->native.GetPointer();
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
				native->SetFocalPoint(
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

void VtkLightWrap::SetIntensity(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkLightWrap *wrapper = ObjectWrap::Unwrap<VtkLightWrap>(info.Holder());
	vtkLight *native = (vtkLight *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsNumber())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetIntensity(
			info[0]->NumberValue()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkLightWrap::SetLightType(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkLightWrap *wrapper = ObjectWrap::Unwrap<VtkLightWrap>(info.Holder());
	vtkLight *native = (vtkLight *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetLightType(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkLightWrap::SetLightTypeToCameraLight(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkLightWrap *wrapper = ObjectWrap::Unwrap<VtkLightWrap>(info.Holder());
	vtkLight *native = (vtkLight *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->SetLightTypeToCameraLight();
}

void VtkLightWrap::SetLightTypeToHeadlight(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkLightWrap *wrapper = ObjectWrap::Unwrap<VtkLightWrap>(info.Holder());
	vtkLight *native = (vtkLight *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->SetLightTypeToHeadlight();
}

void VtkLightWrap::SetLightTypeToSceneLight(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkLightWrap *wrapper = ObjectWrap::Unwrap<VtkLightWrap>(info.Holder());
	vtkLight *native = (vtkLight *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->SetLightTypeToSceneLight();
}

void VtkLightWrap::SetPosition(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkLightWrap *wrapper = ObjectWrap::Unwrap<VtkLightWrap>(info.Holder());
	vtkLight *native = (vtkLight *)wrapper->native.GetPointer();
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
				native->SetPosition(
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

void VtkLightWrap::SetPositional(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkLightWrap *wrapper = ObjectWrap::Unwrap<VtkLightWrap>(info.Holder());
	vtkLight *native = (vtkLight *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetPositional(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkLightWrap::SetSpecularColor(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkLightWrap *wrapper = ObjectWrap::Unwrap<VtkLightWrap>(info.Holder());
	vtkLight *native = (vtkLight *)wrapper->native.GetPointer();
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
				native->SetSpecularColor(
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

void VtkLightWrap::SetSwitch(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkLightWrap *wrapper = ObjectWrap::Unwrap<VtkLightWrap>(info.Holder());
	vtkLight *native = (vtkLight *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetSwitch(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkLightWrap::SetTransformMatrix(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkLightWrap *wrapper = ObjectWrap::Unwrap<VtkLightWrap>(info.Holder());
	vtkLight *native = (vtkLight *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject())
	{
		VtkMatrix4x4Wrap *a0 = ObjectWrap::Unwrap<VtkMatrix4x4Wrap>(info[0]->ToObject());
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetTransformMatrix(
			(vtkMatrix4x4 *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkLightWrap::ShallowClone(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkLightWrap *wrapper = ObjectWrap::Unwrap<VtkLightWrap>(info.Holder());
	vtkLight *native = (vtkLight *)wrapper->native.GetPointer();
	vtkLight * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->ShallowClone();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::Function>(VtkLightWrap::constructor);
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkLightWrap *w = new VtkLightWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkLightWrap::SwitchOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkLightWrap *wrapper = ObjectWrap::Unwrap<VtkLightWrap>(info.Holder());
	vtkLight *native = (vtkLight *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->SwitchOff();
}

void VtkLightWrap::SwitchOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkLightWrap *wrapper = ObjectWrap::Unwrap<VtkLightWrap>(info.Holder());
	vtkLight *native = (vtkLight *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->SwitchOn();
}
