/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkImageAlgorithmWrap.h"
#include "vtkGaussianSplatterWrap.h"
#include "vtkObjectWrap.h"
#include "vtkDataSetWrap.h"
#include "vtkImageDataWrap.h"
#include "vtkInformationWrap.h"
#include "vtkCompositeDataSetWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkGaussianSplatterWrap::ptpl;

VtkGaussianSplatterWrap::VtkGaussianSplatterWrap()
{ }

VtkGaussianSplatterWrap::VtkGaussianSplatterWrap(vtkSmartPointer<vtkGaussianSplatter> _native)
{ native = _native; }

VtkGaussianSplatterWrap::~VtkGaussianSplatterWrap()
{ }

void VtkGaussianSplatterWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkGaussianSplatter").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("GaussianSplatter").ToLocalChecked(), ConstructorGetter);
}

void VtkGaussianSplatterWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkGaussianSplatterWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkImageAlgorithmWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkImageAlgorithmWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkGaussianSplatterWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "CappingOff", CappingOff);
	Nan::SetPrototypeMethod(tpl, "cappingOff", CappingOff);

	Nan::SetPrototypeMethod(tpl, "CappingOn", CappingOn);
	Nan::SetPrototypeMethod(tpl, "cappingOn", CappingOn);

	Nan::SetPrototypeMethod(tpl, "ComputeModelBounds", ComputeModelBounds);
	Nan::SetPrototypeMethod(tpl, "computeModelBounds", ComputeModelBounds);

	Nan::SetPrototypeMethod(tpl, "GetAccumulationMode", GetAccumulationMode);
	Nan::SetPrototypeMethod(tpl, "getAccumulationMode", GetAccumulationMode);

	Nan::SetPrototypeMethod(tpl, "GetAccumulationModeAsString", GetAccumulationModeAsString);
	Nan::SetPrototypeMethod(tpl, "getAccumulationModeAsString", GetAccumulationModeAsString);

	Nan::SetPrototypeMethod(tpl, "GetAccumulationModeMaxValue", GetAccumulationModeMaxValue);
	Nan::SetPrototypeMethod(tpl, "getAccumulationModeMaxValue", GetAccumulationModeMaxValue);

	Nan::SetPrototypeMethod(tpl, "GetAccumulationModeMinValue", GetAccumulationModeMinValue);
	Nan::SetPrototypeMethod(tpl, "getAccumulationModeMinValue", GetAccumulationModeMinValue);

	Nan::SetPrototypeMethod(tpl, "GetCapValue", GetCapValue);
	Nan::SetPrototypeMethod(tpl, "getCapValue", GetCapValue);

	Nan::SetPrototypeMethod(tpl, "GetCapping", GetCapping);
	Nan::SetPrototypeMethod(tpl, "getCapping", GetCapping);

	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "GetEccentricity", GetEccentricity);
	Nan::SetPrototypeMethod(tpl, "getEccentricity", GetEccentricity);

	Nan::SetPrototypeMethod(tpl, "GetEccentricityMaxValue", GetEccentricityMaxValue);
	Nan::SetPrototypeMethod(tpl, "getEccentricityMaxValue", GetEccentricityMaxValue);

	Nan::SetPrototypeMethod(tpl, "GetEccentricityMinValue", GetEccentricityMinValue);
	Nan::SetPrototypeMethod(tpl, "getEccentricityMinValue", GetEccentricityMinValue);

	Nan::SetPrototypeMethod(tpl, "GetExponentFactor", GetExponentFactor);
	Nan::SetPrototypeMethod(tpl, "getExponentFactor", GetExponentFactor);

	Nan::SetPrototypeMethod(tpl, "GetNormalWarping", GetNormalWarping);
	Nan::SetPrototypeMethod(tpl, "getNormalWarping", GetNormalWarping);

	Nan::SetPrototypeMethod(tpl, "GetNullValue", GetNullValue);
	Nan::SetPrototypeMethod(tpl, "getNullValue", GetNullValue);

	Nan::SetPrototypeMethod(tpl, "GetRadius", GetRadius);
	Nan::SetPrototypeMethod(tpl, "getRadius", GetRadius);

	Nan::SetPrototypeMethod(tpl, "GetRadiusMaxValue", GetRadiusMaxValue);
	Nan::SetPrototypeMethod(tpl, "getRadiusMaxValue", GetRadiusMaxValue);

	Nan::SetPrototypeMethod(tpl, "GetRadiusMinValue", GetRadiusMinValue);
	Nan::SetPrototypeMethod(tpl, "getRadiusMinValue", GetRadiusMinValue);

	Nan::SetPrototypeMethod(tpl, "GetScalarWarping", GetScalarWarping);
	Nan::SetPrototypeMethod(tpl, "getScalarWarping", GetScalarWarping);

	Nan::SetPrototypeMethod(tpl, "GetScaleFactor", GetScaleFactor);
	Nan::SetPrototypeMethod(tpl, "getScaleFactor", GetScaleFactor);

	Nan::SetPrototypeMethod(tpl, "GetScaleFactorMaxValue", GetScaleFactorMaxValue);
	Nan::SetPrototypeMethod(tpl, "getScaleFactorMaxValue", GetScaleFactorMaxValue);

	Nan::SetPrototypeMethod(tpl, "GetScaleFactorMinValue", GetScaleFactorMinValue);
	Nan::SetPrototypeMethod(tpl, "getScaleFactorMinValue", GetScaleFactorMinValue);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "NormalWarpingOff", NormalWarpingOff);
	Nan::SetPrototypeMethod(tpl, "normalWarpingOff", NormalWarpingOff);

	Nan::SetPrototypeMethod(tpl, "NormalWarpingOn", NormalWarpingOn);
	Nan::SetPrototypeMethod(tpl, "normalWarpingOn", NormalWarpingOn);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "ScalarWarpingOff", ScalarWarpingOff);
	Nan::SetPrototypeMethod(tpl, "scalarWarpingOff", ScalarWarpingOff);

	Nan::SetPrototypeMethod(tpl, "ScalarWarpingOn", ScalarWarpingOn);
	Nan::SetPrototypeMethod(tpl, "scalarWarpingOn", ScalarWarpingOn);

	Nan::SetPrototypeMethod(tpl, "SetAccumulationMode", SetAccumulationMode);
	Nan::SetPrototypeMethod(tpl, "setAccumulationMode", SetAccumulationMode);

	Nan::SetPrototypeMethod(tpl, "SetAccumulationModeToMax", SetAccumulationModeToMax);
	Nan::SetPrototypeMethod(tpl, "setAccumulationModeToMax", SetAccumulationModeToMax);

	Nan::SetPrototypeMethod(tpl, "SetAccumulationModeToMin", SetAccumulationModeToMin);
	Nan::SetPrototypeMethod(tpl, "setAccumulationModeToMin", SetAccumulationModeToMin);

	Nan::SetPrototypeMethod(tpl, "SetAccumulationModeToSum", SetAccumulationModeToSum);
	Nan::SetPrototypeMethod(tpl, "setAccumulationModeToSum", SetAccumulationModeToSum);

	Nan::SetPrototypeMethod(tpl, "SetCapValue", SetCapValue);
	Nan::SetPrototypeMethod(tpl, "setCapValue", SetCapValue);

	Nan::SetPrototypeMethod(tpl, "SetCapping", SetCapping);
	Nan::SetPrototypeMethod(tpl, "setCapping", SetCapping);

	Nan::SetPrototypeMethod(tpl, "SetEccentricity", SetEccentricity);
	Nan::SetPrototypeMethod(tpl, "setEccentricity", SetEccentricity);

	Nan::SetPrototypeMethod(tpl, "SetExponentFactor", SetExponentFactor);
	Nan::SetPrototypeMethod(tpl, "setExponentFactor", SetExponentFactor);

	Nan::SetPrototypeMethod(tpl, "SetModelBounds", SetModelBounds);
	Nan::SetPrototypeMethod(tpl, "setModelBounds", SetModelBounds);

	Nan::SetPrototypeMethod(tpl, "SetNormalWarping", SetNormalWarping);
	Nan::SetPrototypeMethod(tpl, "setNormalWarping", SetNormalWarping);

	Nan::SetPrototypeMethod(tpl, "SetNullValue", SetNullValue);
	Nan::SetPrototypeMethod(tpl, "setNullValue", SetNullValue);

	Nan::SetPrototypeMethod(tpl, "SetRadius", SetRadius);
	Nan::SetPrototypeMethod(tpl, "setRadius", SetRadius);

	Nan::SetPrototypeMethod(tpl, "SetSampleDimensions", SetSampleDimensions);
	Nan::SetPrototypeMethod(tpl, "setSampleDimensions", SetSampleDimensions);

	Nan::SetPrototypeMethod(tpl, "SetScalarWarping", SetScalarWarping);
	Nan::SetPrototypeMethod(tpl, "setScalarWarping", SetScalarWarping);

	Nan::SetPrototypeMethod(tpl, "SetScaleFactor", SetScaleFactor);
	Nan::SetPrototypeMethod(tpl, "setScaleFactor", SetScaleFactor);

	ptpl.Reset( tpl );
}

void VtkGaussianSplatterWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkGaussianSplatter> native = vtkSmartPointer<vtkGaussianSplatter>::New();
		VtkGaussianSplatterWrap* obj = new VtkGaussianSplatterWrap(native);
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

void VtkGaussianSplatterWrap::CappingOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGaussianSplatterWrap *wrapper = ObjectWrap::Unwrap<VtkGaussianSplatterWrap>(info.Holder());
	vtkGaussianSplatter *native = (vtkGaussianSplatter *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->CappingOff();
}

void VtkGaussianSplatterWrap::CappingOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGaussianSplatterWrap *wrapper = ObjectWrap::Unwrap<VtkGaussianSplatterWrap>(info.Holder());
	vtkGaussianSplatter *native = (vtkGaussianSplatter *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->CappingOn();
}

void VtkGaussianSplatterWrap::ComputeModelBounds(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGaussianSplatterWrap *wrapper = ObjectWrap::Unwrap<VtkGaussianSplatterWrap>(info.Holder());
	vtkGaussianSplatter *native = (vtkGaussianSplatter *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkCompositeDataSetWrap::ptpl))->HasInstance(info[0]))
	{
		VtkCompositeDataSetWrap *a0 = ObjectWrap::Unwrap<VtkCompositeDataSetWrap>(info[0]->ToObject());
		if(info.Length() > 1 && info[1]->IsObject() && (Nan::New(VtkImageDataWrap::ptpl))->HasInstance(info[1]))
		{
			VtkImageDataWrap *a1 = ObjectWrap::Unwrap<VtkImageDataWrap>(info[1]->ToObject());
			if(info.Length() > 2 && info[2]->IsObject() && (Nan::New(VtkInformationWrap::ptpl))->HasInstance(info[2]))
			{
				VtkInformationWrap *a2 = ObjectWrap::Unwrap<VtkInformationWrap>(info[2]->ToObject());
				if(info.Length() != 3)
				{
					Nan::ThrowError("Too many parameters.");
					return;
				}
				native->ComputeModelBounds(
					(vtkCompositeDataSet *) a0->native.GetPointer(),
					(vtkImageData *) a1->native.GetPointer(),
					(vtkInformation *) a2->native.GetPointer()
				);
				return;
			}
		}
	}
	else if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkDataSetWrap::ptpl))->HasInstance(info[0]))
	{
		VtkDataSetWrap *a0 = ObjectWrap::Unwrap<VtkDataSetWrap>(info[0]->ToObject());
		if(info.Length() > 1 && info[1]->IsObject() && (Nan::New(VtkImageDataWrap::ptpl))->HasInstance(info[1]))
		{
			VtkImageDataWrap *a1 = ObjectWrap::Unwrap<VtkImageDataWrap>(info[1]->ToObject());
			if(info.Length() > 2 && info[2]->IsObject() && (Nan::New(VtkInformationWrap::ptpl))->HasInstance(info[2]))
			{
				VtkInformationWrap *a2 = ObjectWrap::Unwrap<VtkInformationWrap>(info[2]->ToObject());
				if(info.Length() != 3)
				{
					Nan::ThrowError("Too many parameters.");
					return;
				}
				native->ComputeModelBounds(
					(vtkDataSet *) a0->native.GetPointer(),
					(vtkImageData *) a1->native.GetPointer(),
					(vtkInformation *) a2->native.GetPointer()
				);
				return;
			}
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkGaussianSplatterWrap::GetAccumulationMode(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGaussianSplatterWrap *wrapper = ObjectWrap::Unwrap<VtkGaussianSplatterWrap>(info.Holder());
	vtkGaussianSplatter *native = (vtkGaussianSplatter *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetAccumulationMode();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkGaussianSplatterWrap::GetAccumulationModeAsString(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGaussianSplatterWrap *wrapper = ObjectWrap::Unwrap<VtkGaussianSplatterWrap>(info.Holder());
	vtkGaussianSplatter *native = (vtkGaussianSplatter *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetAccumulationModeAsString();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkGaussianSplatterWrap::GetAccumulationModeMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGaussianSplatterWrap *wrapper = ObjectWrap::Unwrap<VtkGaussianSplatterWrap>(info.Holder());
	vtkGaussianSplatter *native = (vtkGaussianSplatter *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetAccumulationModeMaxValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkGaussianSplatterWrap::GetAccumulationModeMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGaussianSplatterWrap *wrapper = ObjectWrap::Unwrap<VtkGaussianSplatterWrap>(info.Holder());
	vtkGaussianSplatter *native = (vtkGaussianSplatter *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetAccumulationModeMinValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkGaussianSplatterWrap::GetCapValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGaussianSplatterWrap *wrapper = ObjectWrap::Unwrap<VtkGaussianSplatterWrap>(info.Holder());
	vtkGaussianSplatter *native = (vtkGaussianSplatter *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetCapValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkGaussianSplatterWrap::GetCapping(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGaussianSplatterWrap *wrapper = ObjectWrap::Unwrap<VtkGaussianSplatterWrap>(info.Holder());
	vtkGaussianSplatter *native = (vtkGaussianSplatter *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetCapping();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkGaussianSplatterWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGaussianSplatterWrap *wrapper = ObjectWrap::Unwrap<VtkGaussianSplatterWrap>(info.Holder());
	vtkGaussianSplatter *native = (vtkGaussianSplatter *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkGaussianSplatterWrap::GetEccentricity(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGaussianSplatterWrap *wrapper = ObjectWrap::Unwrap<VtkGaussianSplatterWrap>(info.Holder());
	vtkGaussianSplatter *native = (vtkGaussianSplatter *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetEccentricity();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkGaussianSplatterWrap::GetEccentricityMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGaussianSplatterWrap *wrapper = ObjectWrap::Unwrap<VtkGaussianSplatterWrap>(info.Holder());
	vtkGaussianSplatter *native = (vtkGaussianSplatter *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetEccentricityMaxValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkGaussianSplatterWrap::GetEccentricityMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGaussianSplatterWrap *wrapper = ObjectWrap::Unwrap<VtkGaussianSplatterWrap>(info.Holder());
	vtkGaussianSplatter *native = (vtkGaussianSplatter *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetEccentricityMinValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkGaussianSplatterWrap::GetExponentFactor(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGaussianSplatterWrap *wrapper = ObjectWrap::Unwrap<VtkGaussianSplatterWrap>(info.Holder());
	vtkGaussianSplatter *native = (vtkGaussianSplatter *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetExponentFactor();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkGaussianSplatterWrap::GetNormalWarping(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGaussianSplatterWrap *wrapper = ObjectWrap::Unwrap<VtkGaussianSplatterWrap>(info.Holder());
	vtkGaussianSplatter *native = (vtkGaussianSplatter *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetNormalWarping();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkGaussianSplatterWrap::GetNullValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGaussianSplatterWrap *wrapper = ObjectWrap::Unwrap<VtkGaussianSplatterWrap>(info.Holder());
	vtkGaussianSplatter *native = (vtkGaussianSplatter *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetNullValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkGaussianSplatterWrap::GetRadius(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGaussianSplatterWrap *wrapper = ObjectWrap::Unwrap<VtkGaussianSplatterWrap>(info.Holder());
	vtkGaussianSplatter *native = (vtkGaussianSplatter *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetRadius();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkGaussianSplatterWrap::GetRadiusMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGaussianSplatterWrap *wrapper = ObjectWrap::Unwrap<VtkGaussianSplatterWrap>(info.Holder());
	vtkGaussianSplatter *native = (vtkGaussianSplatter *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetRadiusMaxValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkGaussianSplatterWrap::GetRadiusMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGaussianSplatterWrap *wrapper = ObjectWrap::Unwrap<VtkGaussianSplatterWrap>(info.Holder());
	vtkGaussianSplatter *native = (vtkGaussianSplatter *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetRadiusMinValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkGaussianSplatterWrap::GetScalarWarping(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGaussianSplatterWrap *wrapper = ObjectWrap::Unwrap<VtkGaussianSplatterWrap>(info.Holder());
	vtkGaussianSplatter *native = (vtkGaussianSplatter *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetScalarWarping();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkGaussianSplatterWrap::GetScaleFactor(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGaussianSplatterWrap *wrapper = ObjectWrap::Unwrap<VtkGaussianSplatterWrap>(info.Holder());
	vtkGaussianSplatter *native = (vtkGaussianSplatter *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetScaleFactor();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkGaussianSplatterWrap::GetScaleFactorMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGaussianSplatterWrap *wrapper = ObjectWrap::Unwrap<VtkGaussianSplatterWrap>(info.Holder());
	vtkGaussianSplatter *native = (vtkGaussianSplatter *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetScaleFactorMaxValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkGaussianSplatterWrap::GetScaleFactorMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGaussianSplatterWrap *wrapper = ObjectWrap::Unwrap<VtkGaussianSplatterWrap>(info.Holder());
	vtkGaussianSplatter *native = (vtkGaussianSplatter *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetScaleFactorMinValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkGaussianSplatterWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGaussianSplatterWrap *wrapper = ObjectWrap::Unwrap<VtkGaussianSplatterWrap>(info.Holder());
	vtkGaussianSplatter *native = (vtkGaussianSplatter *)wrapper->native.GetPointer();
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

void VtkGaussianSplatterWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGaussianSplatterWrap *wrapper = ObjectWrap::Unwrap<VtkGaussianSplatterWrap>(info.Holder());
	vtkGaussianSplatter *native = (vtkGaussianSplatter *)wrapper->native.GetPointer();
	vtkGaussianSplatter * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
		VtkGaussianSplatterWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkGaussianSplatterWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkGaussianSplatterWrap *w = new VtkGaussianSplatterWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkGaussianSplatterWrap::NormalWarpingOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGaussianSplatterWrap *wrapper = ObjectWrap::Unwrap<VtkGaussianSplatterWrap>(info.Holder());
	vtkGaussianSplatter *native = (vtkGaussianSplatter *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->NormalWarpingOff();
}

void VtkGaussianSplatterWrap::NormalWarpingOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGaussianSplatterWrap *wrapper = ObjectWrap::Unwrap<VtkGaussianSplatterWrap>(info.Holder());
	vtkGaussianSplatter *native = (vtkGaussianSplatter *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->NormalWarpingOn();
}

void VtkGaussianSplatterWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGaussianSplatterWrap *wrapper = ObjectWrap::Unwrap<VtkGaussianSplatterWrap>(info.Holder());
	vtkGaussianSplatter *native = (vtkGaussianSplatter *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkGaussianSplatter * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObject *) a0->native.GetPointer()
		);
			VtkGaussianSplatterWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkGaussianSplatterWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkGaussianSplatterWrap *w = new VtkGaussianSplatterWrap();
		w->native = r;
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkGaussianSplatterWrap::ScalarWarpingOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGaussianSplatterWrap *wrapper = ObjectWrap::Unwrap<VtkGaussianSplatterWrap>(info.Holder());
	vtkGaussianSplatter *native = (vtkGaussianSplatter *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->ScalarWarpingOff();
}

void VtkGaussianSplatterWrap::ScalarWarpingOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGaussianSplatterWrap *wrapper = ObjectWrap::Unwrap<VtkGaussianSplatterWrap>(info.Holder());
	vtkGaussianSplatter *native = (vtkGaussianSplatter *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->ScalarWarpingOn();
}

void VtkGaussianSplatterWrap::SetAccumulationMode(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGaussianSplatterWrap *wrapper = ObjectWrap::Unwrap<VtkGaussianSplatterWrap>(info.Holder());
	vtkGaussianSplatter *native = (vtkGaussianSplatter *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetAccumulationMode(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkGaussianSplatterWrap::SetAccumulationModeToMax(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGaussianSplatterWrap *wrapper = ObjectWrap::Unwrap<VtkGaussianSplatterWrap>(info.Holder());
	vtkGaussianSplatter *native = (vtkGaussianSplatter *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->SetAccumulationModeToMax();
}

void VtkGaussianSplatterWrap::SetAccumulationModeToMin(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGaussianSplatterWrap *wrapper = ObjectWrap::Unwrap<VtkGaussianSplatterWrap>(info.Holder());
	vtkGaussianSplatter *native = (vtkGaussianSplatter *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->SetAccumulationModeToMin();
}

void VtkGaussianSplatterWrap::SetAccumulationModeToSum(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGaussianSplatterWrap *wrapper = ObjectWrap::Unwrap<VtkGaussianSplatterWrap>(info.Holder());
	vtkGaussianSplatter *native = (vtkGaussianSplatter *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->SetAccumulationModeToSum();
}

void VtkGaussianSplatterWrap::SetCapValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGaussianSplatterWrap *wrapper = ObjectWrap::Unwrap<VtkGaussianSplatterWrap>(info.Holder());
	vtkGaussianSplatter *native = (vtkGaussianSplatter *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsNumber())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetCapValue(
			info[0]->NumberValue()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkGaussianSplatterWrap::SetCapping(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGaussianSplatterWrap *wrapper = ObjectWrap::Unwrap<VtkGaussianSplatterWrap>(info.Holder());
	vtkGaussianSplatter *native = (vtkGaussianSplatter *)wrapper->native.GetPointer();
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

void VtkGaussianSplatterWrap::SetEccentricity(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGaussianSplatterWrap *wrapper = ObjectWrap::Unwrap<VtkGaussianSplatterWrap>(info.Holder());
	vtkGaussianSplatter *native = (vtkGaussianSplatter *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsNumber())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetEccentricity(
			info[0]->NumberValue()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkGaussianSplatterWrap::SetExponentFactor(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGaussianSplatterWrap *wrapper = ObjectWrap::Unwrap<VtkGaussianSplatterWrap>(info.Holder());
	vtkGaussianSplatter *native = (vtkGaussianSplatter *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsNumber())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetExponentFactor(
			info[0]->NumberValue()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkGaussianSplatterWrap::SetModelBounds(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGaussianSplatterWrap *wrapper = ObjectWrap::Unwrap<VtkGaussianSplatterWrap>(info.Holder());
	vtkGaussianSplatter *native = (vtkGaussianSplatter *)wrapper->native.GetPointer();
	size_t i;
	if(info.Length() > 0 && info[0]->IsFloat64Array())
	{
		v8::Local<v8::Float64Array>a0(v8::Local<v8::Float64Array>::Cast(info[0]->ToObject()));
		if( a0->Length() < 6 )
		{
			Nan::ThrowError("Array too short.");
			return;
		}

		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetModelBounds(
			(double *)(a0->Buffer()->GetContents().Data())
		);
		return;
	}
	else if(info.Length() > 0 && info[0]->IsArray())
	{
		v8::Local<v8::Array>a0(v8::Local<v8::Array>::Cast(info[0]->ToObject()));
		double b0[6];
		if( a0->Length() < 6 )
		{
			Nan::ThrowError("Array too short.");
			return;
		}

		for( i = 0; i < 6; i++ )
		{
			if( !a0->Get(i)->IsNumber() )
			{
				Nan::ThrowError("Array contents invalid.");
				return;
			}
			b0[i] = a0->Get(i)->NumberValue();
		}
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetModelBounds(
			b0
		);
		return;
	}
	else if(info.Length() > 0 && info[0]->IsNumber())
	{
		if(info.Length() > 1 && info[1]->IsNumber())
		{
			if(info.Length() > 2 && info[2]->IsNumber())
			{
				if(info.Length() > 3 && info[3]->IsNumber())
				{
					if(info.Length() > 4 && info[4]->IsNumber())
					{
						if(info.Length() > 5 && info[5]->IsNumber())
						{
							if(info.Length() != 6)
							{
								Nan::ThrowError("Too many parameters.");
								return;
							}
							native->SetModelBounds(
								info[0]->NumberValue(),
								info[1]->NumberValue(),
								info[2]->NumberValue(),
								info[3]->NumberValue(),
								info[4]->NumberValue(),
								info[5]->NumberValue()
							);
							return;
						}
					}
				}
			}
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkGaussianSplatterWrap::SetNormalWarping(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGaussianSplatterWrap *wrapper = ObjectWrap::Unwrap<VtkGaussianSplatterWrap>(info.Holder());
	vtkGaussianSplatter *native = (vtkGaussianSplatter *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetNormalWarping(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkGaussianSplatterWrap::SetNullValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGaussianSplatterWrap *wrapper = ObjectWrap::Unwrap<VtkGaussianSplatterWrap>(info.Holder());
	vtkGaussianSplatter *native = (vtkGaussianSplatter *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsNumber())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetNullValue(
			info[0]->NumberValue()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkGaussianSplatterWrap::SetRadius(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGaussianSplatterWrap *wrapper = ObjectWrap::Unwrap<VtkGaussianSplatterWrap>(info.Holder());
	vtkGaussianSplatter *native = (vtkGaussianSplatter *)wrapper->native.GetPointer();
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

void VtkGaussianSplatterWrap::SetSampleDimensions(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGaussianSplatterWrap *wrapper = ObjectWrap::Unwrap<VtkGaussianSplatterWrap>(info.Holder());
	vtkGaussianSplatter *native = (vtkGaussianSplatter *)wrapper->native.GetPointer();
	size_t i;
	if(info.Length() > 0 && info[0]->IsInt32Array())
	{
		v8::Local<v8::Int32Array>a0(v8::Local<v8::Int32Array>::Cast(info[0]->ToObject()));
		if( a0->Length() < 3 )
		{
			Nan::ThrowError("Array too short.");
			return;
		}

		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetSampleDimensions(
			(int *)(a0->Buffer()->GetContents().Data())
		);
		return;
	}
	else if(info.Length() > 0 && info[0]->IsArray())
	{
		v8::Local<v8::Array>a0(v8::Local<v8::Array>::Cast(info[0]->ToObject()));
		int b0[3];
		if( a0->Length() < 3 )
		{
			Nan::ThrowError("Array too short.");
			return;
		}

		for( i = 0; i < 3; i++ )
		{
			if( !a0->Get(i)->IsInt32() )
			{
				Nan::ThrowError("Array contents invalid.");
				return;
			}
			b0[i] = a0->Get(i)->Int32Value();
		}
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetSampleDimensions(
			b0
		);
		return;
	}
	else if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() > 1 && info[1]->IsInt32())
		{
			if(info.Length() > 2 && info[2]->IsInt32())
			{
				if(info.Length() != 3)
				{
					Nan::ThrowError("Too many parameters.");
					return;
				}
				native->SetSampleDimensions(
					info[0]->Int32Value(),
					info[1]->Int32Value(),
					info[2]->Int32Value()
				);
				return;
			}
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkGaussianSplatterWrap::SetScalarWarping(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGaussianSplatterWrap *wrapper = ObjectWrap::Unwrap<VtkGaussianSplatterWrap>(info.Holder());
	vtkGaussianSplatter *native = (vtkGaussianSplatter *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetScalarWarping(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkGaussianSplatterWrap::SetScaleFactor(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGaussianSplatterWrap *wrapper = ObjectWrap::Unwrap<VtkGaussianSplatterWrap>(info.Holder());
	vtkGaussianSplatter *native = (vtkGaussianSplatter *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsNumber())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetScaleFactor(
			info[0]->NumberValue()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

