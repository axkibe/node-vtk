/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>

#include "vtkImageAlgorithmWrap.h"
#include "vtkPointDensityFilterWrap.h"
#include "vtkObjectBaseWrap.h"
#include "vtkAbstractPointLocatorWrap.h"
#include "../../plus/plus.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkPointDensityFilterWrap::ptpl;

VtkPointDensityFilterWrap::VtkPointDensityFilterWrap()
{ }

VtkPointDensityFilterWrap::VtkPointDensityFilterWrap(vtkSmartPointer<vtkPointDensityFilter> _native)
{ native = _native; }

VtkPointDensityFilterWrap::~VtkPointDensityFilterWrap()
{ }

void VtkPointDensityFilterWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkPointDensityFilter").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("PointDensityFilter").ToLocalChecked(), ConstructorGetter);
}

void VtkPointDensityFilterWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkPointDensityFilterWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkImageAlgorithmWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkImageAlgorithmWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkPointDensityFilterWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "ComputeGradientOff", ComputeGradientOff);
	Nan::SetPrototypeMethod(tpl, "computeGradientOff", ComputeGradientOff);

	Nan::SetPrototypeMethod(tpl, "ComputeGradientOn", ComputeGradientOn);
	Nan::SetPrototypeMethod(tpl, "computeGradientOn", ComputeGradientOn);

	Nan::SetPrototypeMethod(tpl, "GetAdjustDistance", GetAdjustDistance);
	Nan::SetPrototypeMethod(tpl, "getAdjustDistance", GetAdjustDistance);

	Nan::SetPrototypeMethod(tpl, "GetAdjustDistanceMaxValue", GetAdjustDistanceMaxValue);
	Nan::SetPrototypeMethod(tpl, "getAdjustDistanceMaxValue", GetAdjustDistanceMaxValue);

	Nan::SetPrototypeMethod(tpl, "GetAdjustDistanceMinValue", GetAdjustDistanceMinValue);
	Nan::SetPrototypeMethod(tpl, "getAdjustDistanceMinValue", GetAdjustDistanceMinValue);

	Nan::SetPrototypeMethod(tpl, "GetComputeGradient", GetComputeGradient);
	Nan::SetPrototypeMethod(tpl, "getComputeGradient", GetComputeGradient);

	Nan::SetPrototypeMethod(tpl, "GetDensityEstimate", GetDensityEstimate);
	Nan::SetPrototypeMethod(tpl, "getDensityEstimate", GetDensityEstimate);

	Nan::SetPrototypeMethod(tpl, "GetDensityEstimateAsString", GetDensityEstimateAsString);
	Nan::SetPrototypeMethod(tpl, "getDensityEstimateAsString", GetDensityEstimateAsString);

	Nan::SetPrototypeMethod(tpl, "GetDensityEstimateMaxValue", GetDensityEstimateMaxValue);
	Nan::SetPrototypeMethod(tpl, "getDensityEstimateMaxValue", GetDensityEstimateMaxValue);

	Nan::SetPrototypeMethod(tpl, "GetDensityEstimateMinValue", GetDensityEstimateMinValue);
	Nan::SetPrototypeMethod(tpl, "getDensityEstimateMinValue", GetDensityEstimateMinValue);

	Nan::SetPrototypeMethod(tpl, "GetDensityForm", GetDensityForm);
	Nan::SetPrototypeMethod(tpl, "getDensityForm", GetDensityForm);

	Nan::SetPrototypeMethod(tpl, "GetDensityFormAsString", GetDensityFormAsString);
	Nan::SetPrototypeMethod(tpl, "getDensityFormAsString", GetDensityFormAsString);

	Nan::SetPrototypeMethod(tpl, "GetDensityFormMaxValue", GetDensityFormMaxValue);
	Nan::SetPrototypeMethod(tpl, "getDensityFormMaxValue", GetDensityFormMaxValue);

	Nan::SetPrototypeMethod(tpl, "GetDensityFormMinValue", GetDensityFormMinValue);
	Nan::SetPrototypeMethod(tpl, "getDensityFormMinValue", GetDensityFormMinValue);

	Nan::SetPrototypeMethod(tpl, "GetLocator", GetLocator);
	Nan::SetPrototypeMethod(tpl, "getLocator", GetLocator);

	Nan::SetPrototypeMethod(tpl, "GetModelBounds", GetModelBounds);
	Nan::SetPrototypeMethod(tpl, "getModelBounds", GetModelBounds);

	Nan::SetPrototypeMethod(tpl, "GetRadius", GetRadius);
	Nan::SetPrototypeMethod(tpl, "getRadius", GetRadius);

	Nan::SetPrototypeMethod(tpl, "GetRadiusMaxValue", GetRadiusMaxValue);
	Nan::SetPrototypeMethod(tpl, "getRadiusMaxValue", GetRadiusMaxValue);

	Nan::SetPrototypeMethod(tpl, "GetRadiusMinValue", GetRadiusMinValue);
	Nan::SetPrototypeMethod(tpl, "getRadiusMinValue", GetRadiusMinValue);

	Nan::SetPrototypeMethod(tpl, "GetRelativeRadius", GetRelativeRadius);
	Nan::SetPrototypeMethod(tpl, "getRelativeRadius", GetRelativeRadius);

	Nan::SetPrototypeMethod(tpl, "GetRelativeRadiusMaxValue", GetRelativeRadiusMaxValue);
	Nan::SetPrototypeMethod(tpl, "getRelativeRadiusMaxValue", GetRelativeRadiusMaxValue);

	Nan::SetPrototypeMethod(tpl, "GetRelativeRadiusMinValue", GetRelativeRadiusMinValue);
	Nan::SetPrototypeMethod(tpl, "getRelativeRadiusMinValue", GetRelativeRadiusMinValue);

	Nan::SetPrototypeMethod(tpl, "GetSampleDimensions", GetSampleDimensions);
	Nan::SetPrototypeMethod(tpl, "getSampleDimensions", GetSampleDimensions);

	Nan::SetPrototypeMethod(tpl, "GetScalarWeighting", GetScalarWeighting);
	Nan::SetPrototypeMethod(tpl, "getScalarWeighting", GetScalarWeighting);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "ScalarWeightingOff", ScalarWeightingOff);
	Nan::SetPrototypeMethod(tpl, "scalarWeightingOff", ScalarWeightingOff);

	Nan::SetPrototypeMethod(tpl, "ScalarWeightingOn", ScalarWeightingOn);
	Nan::SetPrototypeMethod(tpl, "scalarWeightingOn", ScalarWeightingOn);

	Nan::SetPrototypeMethod(tpl, "SetAdjustDistance", SetAdjustDistance);
	Nan::SetPrototypeMethod(tpl, "setAdjustDistance", SetAdjustDistance);

	Nan::SetPrototypeMethod(tpl, "SetComputeGradient", SetComputeGradient);
	Nan::SetPrototypeMethod(tpl, "setComputeGradient", SetComputeGradient);

	Nan::SetPrototypeMethod(tpl, "SetDensityEstimate", SetDensityEstimate);
	Nan::SetPrototypeMethod(tpl, "setDensityEstimate", SetDensityEstimate);

	Nan::SetPrototypeMethod(tpl, "SetDensityEstimateToFixedRadius", SetDensityEstimateToFixedRadius);
	Nan::SetPrototypeMethod(tpl, "setDensityEstimateToFixedRadius", SetDensityEstimateToFixedRadius);

	Nan::SetPrototypeMethod(tpl, "SetDensityEstimateToRelativeRadius", SetDensityEstimateToRelativeRadius);
	Nan::SetPrototypeMethod(tpl, "setDensityEstimateToRelativeRadius", SetDensityEstimateToRelativeRadius);

	Nan::SetPrototypeMethod(tpl, "SetDensityForm", SetDensityForm);
	Nan::SetPrototypeMethod(tpl, "setDensityForm", SetDensityForm);

	Nan::SetPrototypeMethod(tpl, "SetDensityFormToNumberOfPoints", SetDensityFormToNumberOfPoints);
	Nan::SetPrototypeMethod(tpl, "setDensityFormToNumberOfPoints", SetDensityFormToNumberOfPoints);

	Nan::SetPrototypeMethod(tpl, "SetDensityFormToVolumeNormalized", SetDensityFormToVolumeNormalized);
	Nan::SetPrototypeMethod(tpl, "setDensityFormToVolumeNormalized", SetDensityFormToVolumeNormalized);

	Nan::SetPrototypeMethod(tpl, "SetLocator", SetLocator);
	Nan::SetPrototypeMethod(tpl, "setLocator", SetLocator);

	Nan::SetPrototypeMethod(tpl, "SetModelBounds", SetModelBounds);
	Nan::SetPrototypeMethod(tpl, "setModelBounds", SetModelBounds);

	Nan::SetPrototypeMethod(tpl, "SetRadius", SetRadius);
	Nan::SetPrototypeMethod(tpl, "setRadius", SetRadius);

	Nan::SetPrototypeMethod(tpl, "SetRelativeRadius", SetRelativeRadius);
	Nan::SetPrototypeMethod(tpl, "setRelativeRadius", SetRelativeRadius);

	Nan::SetPrototypeMethod(tpl, "SetSampleDimensions", SetSampleDimensions);
	Nan::SetPrototypeMethod(tpl, "setSampleDimensions", SetSampleDimensions);

	Nan::SetPrototypeMethod(tpl, "SetScalarWeighting", SetScalarWeighting);
	Nan::SetPrototypeMethod(tpl, "setScalarWeighting", SetScalarWeighting);

#ifdef VTK_NODE_PLUS_VTKPOINTDENSITYFILTERWRAP_INITPTPL
	VTK_NODE_PLUS_VTKPOINTDENSITYFILTERWRAP_INITPTPL
#endif
	ptpl.Reset( tpl );
}

void VtkPointDensityFilterWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkPointDensityFilter> native = vtkSmartPointer<vtkPointDensityFilter>::New();
		VtkPointDensityFilterWrap* obj = new VtkPointDensityFilterWrap(native);
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

void VtkPointDensityFilterWrap::ComputeGradientOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPointDensityFilterWrap *wrapper = ObjectWrap::Unwrap<VtkPointDensityFilterWrap>(info.Holder());
	vtkPointDensityFilter *native = (vtkPointDensityFilter *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->ComputeGradientOff();
}

void VtkPointDensityFilterWrap::ComputeGradientOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPointDensityFilterWrap *wrapper = ObjectWrap::Unwrap<VtkPointDensityFilterWrap>(info.Holder());
	vtkPointDensityFilter *native = (vtkPointDensityFilter *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->ComputeGradientOn();
}

void VtkPointDensityFilterWrap::GetAdjustDistance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPointDensityFilterWrap *wrapper = ObjectWrap::Unwrap<VtkPointDensityFilterWrap>(info.Holder());
	vtkPointDensityFilter *native = (vtkPointDensityFilter *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetAdjustDistance();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkPointDensityFilterWrap::GetAdjustDistanceMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPointDensityFilterWrap *wrapper = ObjectWrap::Unwrap<VtkPointDensityFilterWrap>(info.Holder());
	vtkPointDensityFilter *native = (vtkPointDensityFilter *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetAdjustDistanceMaxValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkPointDensityFilterWrap::GetAdjustDistanceMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPointDensityFilterWrap *wrapper = ObjectWrap::Unwrap<VtkPointDensityFilterWrap>(info.Holder());
	vtkPointDensityFilter *native = (vtkPointDensityFilter *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetAdjustDistanceMinValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkPointDensityFilterWrap::GetComputeGradient(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPointDensityFilterWrap *wrapper = ObjectWrap::Unwrap<VtkPointDensityFilterWrap>(info.Holder());
	vtkPointDensityFilter *native = (vtkPointDensityFilter *)wrapper->native.GetPointer();
	bool r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetComputeGradient();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkPointDensityFilterWrap::GetDensityEstimate(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPointDensityFilterWrap *wrapper = ObjectWrap::Unwrap<VtkPointDensityFilterWrap>(info.Holder());
	vtkPointDensityFilter *native = (vtkPointDensityFilter *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetDensityEstimate();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkPointDensityFilterWrap::GetDensityEstimateAsString(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPointDensityFilterWrap *wrapper = ObjectWrap::Unwrap<VtkPointDensityFilterWrap>(info.Holder());
	vtkPointDensityFilter *native = (vtkPointDensityFilter *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetDensityEstimateAsString();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkPointDensityFilterWrap::GetDensityEstimateMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPointDensityFilterWrap *wrapper = ObjectWrap::Unwrap<VtkPointDensityFilterWrap>(info.Holder());
	vtkPointDensityFilter *native = (vtkPointDensityFilter *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetDensityEstimateMaxValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkPointDensityFilterWrap::GetDensityEstimateMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPointDensityFilterWrap *wrapper = ObjectWrap::Unwrap<VtkPointDensityFilterWrap>(info.Holder());
	vtkPointDensityFilter *native = (vtkPointDensityFilter *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetDensityEstimateMinValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkPointDensityFilterWrap::GetDensityForm(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPointDensityFilterWrap *wrapper = ObjectWrap::Unwrap<VtkPointDensityFilterWrap>(info.Holder());
	vtkPointDensityFilter *native = (vtkPointDensityFilter *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetDensityForm();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkPointDensityFilterWrap::GetDensityFormAsString(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPointDensityFilterWrap *wrapper = ObjectWrap::Unwrap<VtkPointDensityFilterWrap>(info.Holder());
	vtkPointDensityFilter *native = (vtkPointDensityFilter *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetDensityFormAsString();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkPointDensityFilterWrap::GetDensityFormMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPointDensityFilterWrap *wrapper = ObjectWrap::Unwrap<VtkPointDensityFilterWrap>(info.Holder());
	vtkPointDensityFilter *native = (vtkPointDensityFilter *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetDensityFormMaxValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkPointDensityFilterWrap::GetDensityFormMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPointDensityFilterWrap *wrapper = ObjectWrap::Unwrap<VtkPointDensityFilterWrap>(info.Holder());
	vtkPointDensityFilter *native = (vtkPointDensityFilter *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetDensityFormMinValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkPointDensityFilterWrap::GetLocator(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPointDensityFilterWrap *wrapper = ObjectWrap::Unwrap<VtkPointDensityFilterWrap>(info.Holder());
	vtkPointDensityFilter *native = (vtkPointDensityFilter *)wrapper->native.GetPointer();
	vtkAbstractPointLocator * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetLocator();
	VtkAbstractPointLocatorWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkAbstractPointLocatorWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkAbstractPointLocatorWrap *w = new VtkAbstractPointLocatorWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkPointDensityFilterWrap::GetModelBounds(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPointDensityFilterWrap *wrapper = ObjectWrap::Unwrap<VtkPointDensityFilterWrap>(info.Holder());
	vtkPointDensityFilter *native = (vtkPointDensityFilter *)wrapper->native.GetPointer();
	double const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetModelBounds();
	Local<v8::ArrayBuffer> ab = v8::ArrayBuffer::New(v8::Isolate::GetCurrent(), 6 * sizeof(double));
	Local<v8::Float64Array> at = v8::Float64Array::New(ab, 0, 6);
	memcpy(ab->GetContents().Data(), r, 6 * sizeof(double));
	info.GetReturnValue().Set(at);
}

void VtkPointDensityFilterWrap::GetRadius(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPointDensityFilterWrap *wrapper = ObjectWrap::Unwrap<VtkPointDensityFilterWrap>(info.Holder());
	vtkPointDensityFilter *native = (vtkPointDensityFilter *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetRadius();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkPointDensityFilterWrap::GetRadiusMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPointDensityFilterWrap *wrapper = ObjectWrap::Unwrap<VtkPointDensityFilterWrap>(info.Holder());
	vtkPointDensityFilter *native = (vtkPointDensityFilter *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetRadiusMaxValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkPointDensityFilterWrap::GetRadiusMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPointDensityFilterWrap *wrapper = ObjectWrap::Unwrap<VtkPointDensityFilterWrap>(info.Holder());
	vtkPointDensityFilter *native = (vtkPointDensityFilter *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetRadiusMinValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkPointDensityFilterWrap::GetRelativeRadius(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPointDensityFilterWrap *wrapper = ObjectWrap::Unwrap<VtkPointDensityFilterWrap>(info.Holder());
	vtkPointDensityFilter *native = (vtkPointDensityFilter *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetRelativeRadius();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkPointDensityFilterWrap::GetRelativeRadiusMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPointDensityFilterWrap *wrapper = ObjectWrap::Unwrap<VtkPointDensityFilterWrap>(info.Holder());
	vtkPointDensityFilter *native = (vtkPointDensityFilter *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetRelativeRadiusMaxValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkPointDensityFilterWrap::GetRelativeRadiusMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPointDensityFilterWrap *wrapper = ObjectWrap::Unwrap<VtkPointDensityFilterWrap>(info.Holder());
	vtkPointDensityFilter *native = (vtkPointDensityFilter *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetRelativeRadiusMinValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkPointDensityFilterWrap::GetSampleDimensions(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPointDensityFilterWrap *wrapper = ObjectWrap::Unwrap<VtkPointDensityFilterWrap>(info.Holder());
	vtkPointDensityFilter *native = (vtkPointDensityFilter *)wrapper->native.GetPointer();
	int const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetSampleDimensions();
	Local<v8::ArrayBuffer> ab = v8::ArrayBuffer::New(v8::Isolate::GetCurrent(), 3 * sizeof(int));
	Local<v8::Int32Array> at = v8::Int32Array::New(ab, 0, 3);
	memcpy(ab->GetContents().Data(), r, 3 * sizeof(int));
	info.GetReturnValue().Set(at);
}

void VtkPointDensityFilterWrap::GetScalarWeighting(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPointDensityFilterWrap *wrapper = ObjectWrap::Unwrap<VtkPointDensityFilterWrap>(info.Holder());
	vtkPointDensityFilter *native = (vtkPointDensityFilter *)wrapper->native.GetPointer();
	bool r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetScalarWeighting();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkPointDensityFilterWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPointDensityFilterWrap *wrapper = ObjectWrap::Unwrap<VtkPointDensityFilterWrap>(info.Holder());
	vtkPointDensityFilter *native = (vtkPointDensityFilter *)wrapper->native.GetPointer();
	vtkPointDensityFilter * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
	VtkPointDensityFilterWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkPointDensityFilterWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkPointDensityFilterWrap *w = new VtkPointDensityFilterWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkPointDensityFilterWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPointDensityFilterWrap *wrapper = ObjectWrap::Unwrap<VtkPointDensityFilterWrap>(info.Holder());
	vtkPointDensityFilter *native = (vtkPointDensityFilter *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectBaseWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectBaseWrap *a0 = ObjectWrap::Unwrap<VtkObjectBaseWrap>(info[0]->ToObject());
		vtkPointDensityFilter * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObjectBase *) a0->native.GetPointer()
		);
		VtkPointDensityFilterWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkPointDensityFilterWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkPointDensityFilterWrap *w = new VtkPointDensityFilterWrap();
		w->native = r;
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkPointDensityFilterWrap::ScalarWeightingOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPointDensityFilterWrap *wrapper = ObjectWrap::Unwrap<VtkPointDensityFilterWrap>(info.Holder());
	vtkPointDensityFilter *native = (vtkPointDensityFilter *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->ScalarWeightingOff();
}

void VtkPointDensityFilterWrap::ScalarWeightingOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPointDensityFilterWrap *wrapper = ObjectWrap::Unwrap<VtkPointDensityFilterWrap>(info.Holder());
	vtkPointDensityFilter *native = (vtkPointDensityFilter *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->ScalarWeightingOn();
}

void VtkPointDensityFilterWrap::SetAdjustDistance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPointDensityFilterWrap *wrapper = ObjectWrap::Unwrap<VtkPointDensityFilterWrap>(info.Holder());
	vtkPointDensityFilter *native = (vtkPointDensityFilter *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsNumber())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetAdjustDistance(
			info[0]->NumberValue()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkPointDensityFilterWrap::SetComputeGradient(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPointDensityFilterWrap *wrapper = ObjectWrap::Unwrap<VtkPointDensityFilterWrap>(info.Holder());
	vtkPointDensityFilter *native = (vtkPointDensityFilter *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsBoolean())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetComputeGradient(
			info[0]->BooleanValue()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkPointDensityFilterWrap::SetDensityEstimate(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPointDensityFilterWrap *wrapper = ObjectWrap::Unwrap<VtkPointDensityFilterWrap>(info.Holder());
	vtkPointDensityFilter *native = (vtkPointDensityFilter *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetDensityEstimate(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkPointDensityFilterWrap::SetDensityEstimateToFixedRadius(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPointDensityFilterWrap *wrapper = ObjectWrap::Unwrap<VtkPointDensityFilterWrap>(info.Holder());
	vtkPointDensityFilter *native = (vtkPointDensityFilter *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->SetDensityEstimateToFixedRadius();
}

void VtkPointDensityFilterWrap::SetDensityEstimateToRelativeRadius(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPointDensityFilterWrap *wrapper = ObjectWrap::Unwrap<VtkPointDensityFilterWrap>(info.Holder());
	vtkPointDensityFilter *native = (vtkPointDensityFilter *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->SetDensityEstimateToRelativeRadius();
}

void VtkPointDensityFilterWrap::SetDensityForm(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPointDensityFilterWrap *wrapper = ObjectWrap::Unwrap<VtkPointDensityFilterWrap>(info.Holder());
	vtkPointDensityFilter *native = (vtkPointDensityFilter *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetDensityForm(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkPointDensityFilterWrap::SetDensityFormToNumberOfPoints(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPointDensityFilterWrap *wrapper = ObjectWrap::Unwrap<VtkPointDensityFilterWrap>(info.Holder());
	vtkPointDensityFilter *native = (vtkPointDensityFilter *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->SetDensityFormToNumberOfPoints();
}

void VtkPointDensityFilterWrap::SetDensityFormToVolumeNormalized(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPointDensityFilterWrap *wrapper = ObjectWrap::Unwrap<VtkPointDensityFilterWrap>(info.Holder());
	vtkPointDensityFilter *native = (vtkPointDensityFilter *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->SetDensityFormToVolumeNormalized();
}

void VtkPointDensityFilterWrap::SetLocator(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPointDensityFilterWrap *wrapper = ObjectWrap::Unwrap<VtkPointDensityFilterWrap>(info.Holder());
	vtkPointDensityFilter *native = (vtkPointDensityFilter *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkAbstractPointLocatorWrap::ptpl))->HasInstance(info[0]))
	{
		VtkAbstractPointLocatorWrap *a0 = ObjectWrap::Unwrap<VtkAbstractPointLocatorWrap>(info[0]->ToObject());
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetLocator(
			(vtkAbstractPointLocator *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkPointDensityFilterWrap::SetModelBounds(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPointDensityFilterWrap *wrapper = ObjectWrap::Unwrap<VtkPointDensityFilterWrap>(info.Holder());
	vtkPointDensityFilter *native = (vtkPointDensityFilter *)wrapper->native.GetPointer();
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

void VtkPointDensityFilterWrap::SetRadius(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPointDensityFilterWrap *wrapper = ObjectWrap::Unwrap<VtkPointDensityFilterWrap>(info.Holder());
	vtkPointDensityFilter *native = (vtkPointDensityFilter *)wrapper->native.GetPointer();
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

void VtkPointDensityFilterWrap::SetRelativeRadius(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPointDensityFilterWrap *wrapper = ObjectWrap::Unwrap<VtkPointDensityFilterWrap>(info.Holder());
	vtkPointDensityFilter *native = (vtkPointDensityFilter *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsNumber())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetRelativeRadius(
			info[0]->NumberValue()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkPointDensityFilterWrap::SetSampleDimensions(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPointDensityFilterWrap *wrapper = ObjectWrap::Unwrap<VtkPointDensityFilterWrap>(info.Holder());
	vtkPointDensityFilter *native = (vtkPointDensityFilter *)wrapper->native.GetPointer();
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

void VtkPointDensityFilterWrap::SetScalarWeighting(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPointDensityFilterWrap *wrapper = ObjectWrap::Unwrap<VtkPointDensityFilterWrap>(info.Holder());
	vtkPointDensityFilter *native = (vtkPointDensityFilter *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsBoolean())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetScalarWeighting(
			info[0]->BooleanValue()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}
