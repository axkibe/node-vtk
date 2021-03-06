/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>

#include "vtkObjectWrap.h"
#include "vtkEncodedGradientEstimatorWrap.h"
#include "vtkImageDataWrap.h"
#include "vtkDirectionEncoderWrap.h"
#include "../../plus/plus.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkEncodedGradientEstimatorWrap::ptpl;

VtkEncodedGradientEstimatorWrap::VtkEncodedGradientEstimatorWrap()
{ }

VtkEncodedGradientEstimatorWrap::VtkEncodedGradientEstimatorWrap(vtkSmartPointer<vtkEncodedGradientEstimator> _native)
{ native = _native; }

VtkEncodedGradientEstimatorWrap::~VtkEncodedGradientEstimatorWrap()
{ }

void VtkEncodedGradientEstimatorWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkEncodedGradientEstimator").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("EncodedGradientEstimator").ToLocalChecked(), ConstructorGetter);
}

void VtkEncodedGradientEstimatorWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkEncodedGradientEstimatorWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkObjectWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkObjectWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkEncodedGradientEstimatorWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "BoundsClipOff", BoundsClipOff);
	Nan::SetPrototypeMethod(tpl, "boundsClipOff", BoundsClipOff);

	Nan::SetPrototypeMethod(tpl, "BoundsClipOn", BoundsClipOn);
	Nan::SetPrototypeMethod(tpl, "boundsClipOn", BoundsClipOn);

	Nan::SetPrototypeMethod(tpl, "ComputeGradientMagnitudesOff", ComputeGradientMagnitudesOff);
	Nan::SetPrototypeMethod(tpl, "computeGradientMagnitudesOff", ComputeGradientMagnitudesOff);

	Nan::SetPrototypeMethod(tpl, "ComputeGradientMagnitudesOn", ComputeGradientMagnitudesOn);
	Nan::SetPrototypeMethod(tpl, "computeGradientMagnitudesOn", ComputeGradientMagnitudesOn);

	Nan::SetPrototypeMethod(tpl, "CylinderClipOff", CylinderClipOff);
	Nan::SetPrototypeMethod(tpl, "cylinderClipOff", CylinderClipOff);

	Nan::SetPrototypeMethod(tpl, "CylinderClipOn", CylinderClipOn);
	Nan::SetPrototypeMethod(tpl, "cylinderClipOn", CylinderClipOn);

	Nan::SetPrototypeMethod(tpl, "GetBounds", GetBounds);
	Nan::SetPrototypeMethod(tpl, "getBounds", GetBounds);

	Nan::SetPrototypeMethod(tpl, "GetBoundsClip", GetBoundsClip);
	Nan::SetPrototypeMethod(tpl, "getBoundsClip", GetBoundsClip);

	Nan::SetPrototypeMethod(tpl, "GetBoundsClipMaxValue", GetBoundsClipMaxValue);
	Nan::SetPrototypeMethod(tpl, "getBoundsClipMaxValue", GetBoundsClipMaxValue);

	Nan::SetPrototypeMethod(tpl, "GetBoundsClipMinValue", GetBoundsClipMinValue);
	Nan::SetPrototypeMethod(tpl, "getBoundsClipMinValue", GetBoundsClipMinValue);

	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "GetComputeGradientMagnitudes", GetComputeGradientMagnitudes);
	Nan::SetPrototypeMethod(tpl, "getComputeGradientMagnitudes", GetComputeGradientMagnitudes);

	Nan::SetPrototypeMethod(tpl, "GetCylinderClip", GetCylinderClip);
	Nan::SetPrototypeMethod(tpl, "getCylinderClip", GetCylinderClip);

	Nan::SetPrototypeMethod(tpl, "GetDirectionEncoder", GetDirectionEncoder);
	Nan::SetPrototypeMethod(tpl, "getDirectionEncoder", GetDirectionEncoder);

	Nan::SetPrototypeMethod(tpl, "GetEncodedNormalIndex", GetEncodedNormalIndex);
	Nan::SetPrototypeMethod(tpl, "getEncodedNormalIndex", GetEncodedNormalIndex);

	Nan::SetPrototypeMethod(tpl, "GetGradientMagnitudeBias", GetGradientMagnitudeBias);
	Nan::SetPrototypeMethod(tpl, "getGradientMagnitudeBias", GetGradientMagnitudeBias);

	Nan::SetPrototypeMethod(tpl, "GetGradientMagnitudeScale", GetGradientMagnitudeScale);
	Nan::SetPrototypeMethod(tpl, "getGradientMagnitudeScale", GetGradientMagnitudeScale);

	Nan::SetPrototypeMethod(tpl, "GetInputAspect", GetInputAspect);
	Nan::SetPrototypeMethod(tpl, "getInputAspect", GetInputAspect);

	Nan::SetPrototypeMethod(tpl, "GetInputData", GetInputData);
	Nan::SetPrototypeMethod(tpl, "getInputData", GetInputData);

	Nan::SetPrototypeMethod(tpl, "GetInputSize", GetInputSize);
	Nan::SetPrototypeMethod(tpl, "getInputSize", GetInputSize);

	Nan::SetPrototypeMethod(tpl, "GetLastUpdateTimeInCPUSeconds", GetLastUpdateTimeInCPUSeconds);
	Nan::SetPrototypeMethod(tpl, "getLastUpdateTimeInCPUSeconds", GetLastUpdateTimeInCPUSeconds);

	Nan::SetPrototypeMethod(tpl, "GetLastUpdateTimeInSeconds", GetLastUpdateTimeInSeconds);
	Nan::SetPrototypeMethod(tpl, "getLastUpdateTimeInSeconds", GetLastUpdateTimeInSeconds);

	Nan::SetPrototypeMethod(tpl, "GetNumberOfThreads", GetNumberOfThreads);
	Nan::SetPrototypeMethod(tpl, "getNumberOfThreads", GetNumberOfThreads);

	Nan::SetPrototypeMethod(tpl, "GetNumberOfThreadsMaxValue", GetNumberOfThreadsMaxValue);
	Nan::SetPrototypeMethod(tpl, "getNumberOfThreadsMaxValue", GetNumberOfThreadsMaxValue);

	Nan::SetPrototypeMethod(tpl, "GetNumberOfThreadsMinValue", GetNumberOfThreadsMinValue);
	Nan::SetPrototypeMethod(tpl, "getNumberOfThreadsMinValue", GetNumberOfThreadsMinValue);

	Nan::SetPrototypeMethod(tpl, "GetUseCylinderClip", GetUseCylinderClip);
	Nan::SetPrototypeMethod(tpl, "getUseCylinderClip", GetUseCylinderClip);

	Nan::SetPrototypeMethod(tpl, "GetZeroNormalThreshold", GetZeroNormalThreshold);
	Nan::SetPrototypeMethod(tpl, "getZeroNormalThreshold", GetZeroNormalThreshold);

	Nan::SetPrototypeMethod(tpl, "GetZeroPad", GetZeroPad);
	Nan::SetPrototypeMethod(tpl, "getZeroPad", GetZeroPad);

	Nan::SetPrototypeMethod(tpl, "GetZeroPadMaxValue", GetZeroPadMaxValue);
	Nan::SetPrototypeMethod(tpl, "getZeroPadMaxValue", GetZeroPadMaxValue);

	Nan::SetPrototypeMethod(tpl, "GetZeroPadMinValue", GetZeroPadMinValue);
	Nan::SetPrototypeMethod(tpl, "getZeroPadMinValue", GetZeroPadMinValue);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetBounds", SetBounds);
	Nan::SetPrototypeMethod(tpl, "setBounds", SetBounds);

	Nan::SetPrototypeMethod(tpl, "SetBoundsClip", SetBoundsClip);
	Nan::SetPrototypeMethod(tpl, "setBoundsClip", SetBoundsClip);

	Nan::SetPrototypeMethod(tpl, "SetComputeGradientMagnitudes", SetComputeGradientMagnitudes);
	Nan::SetPrototypeMethod(tpl, "setComputeGradientMagnitudes", SetComputeGradientMagnitudes);

	Nan::SetPrototypeMethod(tpl, "SetCylinderClip", SetCylinderClip);
	Nan::SetPrototypeMethod(tpl, "setCylinderClip", SetCylinderClip);

	Nan::SetPrototypeMethod(tpl, "SetDirectionEncoder", SetDirectionEncoder);
	Nan::SetPrototypeMethod(tpl, "setDirectionEncoder", SetDirectionEncoder);

	Nan::SetPrototypeMethod(tpl, "SetGradientMagnitudeBias", SetGradientMagnitudeBias);
	Nan::SetPrototypeMethod(tpl, "setGradientMagnitudeBias", SetGradientMagnitudeBias);

	Nan::SetPrototypeMethod(tpl, "SetGradientMagnitudeScale", SetGradientMagnitudeScale);
	Nan::SetPrototypeMethod(tpl, "setGradientMagnitudeScale", SetGradientMagnitudeScale);

	Nan::SetPrototypeMethod(tpl, "SetInputData", SetInputData);
	Nan::SetPrototypeMethod(tpl, "setInputData", SetInputData);

	Nan::SetPrototypeMethod(tpl, "SetNumberOfThreads", SetNumberOfThreads);
	Nan::SetPrototypeMethod(tpl, "setNumberOfThreads", SetNumberOfThreads);

	Nan::SetPrototypeMethod(tpl, "SetZeroNormalThreshold", SetZeroNormalThreshold);
	Nan::SetPrototypeMethod(tpl, "setZeroNormalThreshold", SetZeroNormalThreshold);

	Nan::SetPrototypeMethod(tpl, "SetZeroPad", SetZeroPad);
	Nan::SetPrototypeMethod(tpl, "setZeroPad", SetZeroPad);

	Nan::SetPrototypeMethod(tpl, "Update", Update);
	Nan::SetPrototypeMethod(tpl, "update", Update);

	Nan::SetPrototypeMethod(tpl, "ZeroPadOff", ZeroPadOff);
	Nan::SetPrototypeMethod(tpl, "zeroPadOff", ZeroPadOff);

	Nan::SetPrototypeMethod(tpl, "ZeroPadOn", ZeroPadOn);
	Nan::SetPrototypeMethod(tpl, "zeroPadOn", ZeroPadOn);

#ifdef VTK_NODE_PLUS_VTKENCODEDGRADIENTESTIMATORWRAP_INITPTPL
	VTK_NODE_PLUS_VTKENCODEDGRADIENTESTIMATORWRAP_INITPTPL
#endif
	ptpl.Reset( tpl );
}

void VtkEncodedGradientEstimatorWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		Nan::ThrowError("Cannot create instance of abstract class.");
		return;
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

void VtkEncodedGradientEstimatorWrap::BoundsClipOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkEncodedGradientEstimatorWrap *wrapper = ObjectWrap::Unwrap<VtkEncodedGradientEstimatorWrap>(info.Holder());
	vtkEncodedGradientEstimator *native = (vtkEncodedGradientEstimator *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->BoundsClipOff();
}

void VtkEncodedGradientEstimatorWrap::BoundsClipOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkEncodedGradientEstimatorWrap *wrapper = ObjectWrap::Unwrap<VtkEncodedGradientEstimatorWrap>(info.Holder());
	vtkEncodedGradientEstimator *native = (vtkEncodedGradientEstimator *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->BoundsClipOn();
}

void VtkEncodedGradientEstimatorWrap::ComputeGradientMagnitudesOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkEncodedGradientEstimatorWrap *wrapper = ObjectWrap::Unwrap<VtkEncodedGradientEstimatorWrap>(info.Holder());
	vtkEncodedGradientEstimator *native = (vtkEncodedGradientEstimator *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->ComputeGradientMagnitudesOff();
}

void VtkEncodedGradientEstimatorWrap::ComputeGradientMagnitudesOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkEncodedGradientEstimatorWrap *wrapper = ObjectWrap::Unwrap<VtkEncodedGradientEstimatorWrap>(info.Holder());
	vtkEncodedGradientEstimator *native = (vtkEncodedGradientEstimator *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->ComputeGradientMagnitudesOn();
}

void VtkEncodedGradientEstimatorWrap::CylinderClipOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkEncodedGradientEstimatorWrap *wrapper = ObjectWrap::Unwrap<VtkEncodedGradientEstimatorWrap>(info.Holder());
	vtkEncodedGradientEstimator *native = (vtkEncodedGradientEstimator *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->CylinderClipOff();
}

void VtkEncodedGradientEstimatorWrap::CylinderClipOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkEncodedGradientEstimatorWrap *wrapper = ObjectWrap::Unwrap<VtkEncodedGradientEstimatorWrap>(info.Holder());
	vtkEncodedGradientEstimator *native = (vtkEncodedGradientEstimator *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->CylinderClipOn();
}

void VtkEncodedGradientEstimatorWrap::GetBounds(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkEncodedGradientEstimatorWrap *wrapper = ObjectWrap::Unwrap<VtkEncodedGradientEstimatorWrap>(info.Holder());
	vtkEncodedGradientEstimator *native = (vtkEncodedGradientEstimator *)wrapper->native.GetPointer();
	int const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetBounds();
	Local<v8::ArrayBuffer> ab = v8::ArrayBuffer::New(v8::Isolate::GetCurrent(), 6 * sizeof(int));
	Local<v8::Int32Array> at = v8::Int32Array::New(ab, 0, 6);
	memcpy(ab->GetContents().Data(), r, 6 * sizeof(int));
	info.GetReturnValue().Set(at);
}

void VtkEncodedGradientEstimatorWrap::GetBoundsClip(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkEncodedGradientEstimatorWrap *wrapper = ObjectWrap::Unwrap<VtkEncodedGradientEstimatorWrap>(info.Holder());
	vtkEncodedGradientEstimator *native = (vtkEncodedGradientEstimator *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetBoundsClip();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkEncodedGradientEstimatorWrap::GetBoundsClipMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkEncodedGradientEstimatorWrap *wrapper = ObjectWrap::Unwrap<VtkEncodedGradientEstimatorWrap>(info.Holder());
	vtkEncodedGradientEstimator *native = (vtkEncodedGradientEstimator *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetBoundsClipMaxValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkEncodedGradientEstimatorWrap::GetBoundsClipMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkEncodedGradientEstimatorWrap *wrapper = ObjectWrap::Unwrap<VtkEncodedGradientEstimatorWrap>(info.Holder());
	vtkEncodedGradientEstimator *native = (vtkEncodedGradientEstimator *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetBoundsClipMinValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkEncodedGradientEstimatorWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkEncodedGradientEstimatorWrap *wrapper = ObjectWrap::Unwrap<VtkEncodedGradientEstimatorWrap>(info.Holder());
	vtkEncodedGradientEstimator *native = (vtkEncodedGradientEstimator *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkEncodedGradientEstimatorWrap::GetComputeGradientMagnitudes(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkEncodedGradientEstimatorWrap *wrapper = ObjectWrap::Unwrap<VtkEncodedGradientEstimatorWrap>(info.Holder());
	vtkEncodedGradientEstimator *native = (vtkEncodedGradientEstimator *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetComputeGradientMagnitudes();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkEncodedGradientEstimatorWrap::GetCylinderClip(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkEncodedGradientEstimatorWrap *wrapper = ObjectWrap::Unwrap<VtkEncodedGradientEstimatorWrap>(info.Holder());
	vtkEncodedGradientEstimator *native = (vtkEncodedGradientEstimator *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetCylinderClip();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkEncodedGradientEstimatorWrap::GetDirectionEncoder(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkEncodedGradientEstimatorWrap *wrapper = ObjectWrap::Unwrap<VtkEncodedGradientEstimatorWrap>(info.Holder());
	vtkEncodedGradientEstimator *native = (vtkEncodedGradientEstimator *)wrapper->native.GetPointer();
	vtkDirectionEncoder * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetDirectionEncoder();
	VtkDirectionEncoderWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkDirectionEncoderWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkDirectionEncoderWrap *w = new VtkDirectionEncoderWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkEncodedGradientEstimatorWrap::GetEncodedNormalIndex(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkEncodedGradientEstimatorWrap *wrapper = ObjectWrap::Unwrap<VtkEncodedGradientEstimatorWrap>(info.Holder());
	vtkEncodedGradientEstimator *native = (vtkEncodedGradientEstimator *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() > 1 && info[1]->IsInt32())
		{
			if(info.Length() > 2 && info[2]->IsInt32())
			{
				int r;
				if(info.Length() != 3)
				{
					Nan::ThrowError("Too many parameters.");
					return;
				}
				r = native->GetEncodedNormalIndex(
					info[0]->Int32Value(),
					info[1]->Int32Value(),
					info[2]->Int32Value()
				);
				info.GetReturnValue().Set(Nan::New(r));
				return;
			}
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkEncodedGradientEstimatorWrap::GetGradientMagnitudeBias(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkEncodedGradientEstimatorWrap *wrapper = ObjectWrap::Unwrap<VtkEncodedGradientEstimatorWrap>(info.Holder());
	vtkEncodedGradientEstimator *native = (vtkEncodedGradientEstimator *)wrapper->native.GetPointer();
	float r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetGradientMagnitudeBias();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkEncodedGradientEstimatorWrap::GetGradientMagnitudeScale(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkEncodedGradientEstimatorWrap *wrapper = ObjectWrap::Unwrap<VtkEncodedGradientEstimatorWrap>(info.Holder());
	vtkEncodedGradientEstimator *native = (vtkEncodedGradientEstimator *)wrapper->native.GetPointer();
	float r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetGradientMagnitudeScale();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkEncodedGradientEstimatorWrap::GetInputAspect(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkEncodedGradientEstimatorWrap *wrapper = ObjectWrap::Unwrap<VtkEncodedGradientEstimatorWrap>(info.Holder());
	vtkEncodedGradientEstimator *native = (vtkEncodedGradientEstimator *)wrapper->native.GetPointer();
	float const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetInputAspect();
	Local<v8::ArrayBuffer> ab = v8::ArrayBuffer::New(v8::Isolate::GetCurrent(), 3 * sizeof(float));
	Local<v8::Float32Array> at = v8::Float32Array::New(ab, 0, 3);
	memcpy(ab->GetContents().Data(), r, 3 * sizeof(float));
	info.GetReturnValue().Set(at);
}

void VtkEncodedGradientEstimatorWrap::GetInputData(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkEncodedGradientEstimatorWrap *wrapper = ObjectWrap::Unwrap<VtkEncodedGradientEstimatorWrap>(info.Holder());
	vtkEncodedGradientEstimator *native = (vtkEncodedGradientEstimator *)wrapper->native.GetPointer();
	vtkImageData * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetInputData();
	VtkImageDataWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkImageDataWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkImageDataWrap *w = new VtkImageDataWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkEncodedGradientEstimatorWrap::GetInputSize(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkEncodedGradientEstimatorWrap *wrapper = ObjectWrap::Unwrap<VtkEncodedGradientEstimatorWrap>(info.Holder());
	vtkEncodedGradientEstimator *native = (vtkEncodedGradientEstimator *)wrapper->native.GetPointer();
	int const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetInputSize();
	Local<v8::ArrayBuffer> ab = v8::ArrayBuffer::New(v8::Isolate::GetCurrent(), 3 * sizeof(int));
	Local<v8::Int32Array> at = v8::Int32Array::New(ab, 0, 3);
	memcpy(ab->GetContents().Data(), r, 3 * sizeof(int));
	info.GetReturnValue().Set(at);
}

void VtkEncodedGradientEstimatorWrap::GetLastUpdateTimeInCPUSeconds(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkEncodedGradientEstimatorWrap *wrapper = ObjectWrap::Unwrap<VtkEncodedGradientEstimatorWrap>(info.Holder());
	vtkEncodedGradientEstimator *native = (vtkEncodedGradientEstimator *)wrapper->native.GetPointer();
	float r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetLastUpdateTimeInCPUSeconds();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkEncodedGradientEstimatorWrap::GetLastUpdateTimeInSeconds(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkEncodedGradientEstimatorWrap *wrapper = ObjectWrap::Unwrap<VtkEncodedGradientEstimatorWrap>(info.Holder());
	vtkEncodedGradientEstimator *native = (vtkEncodedGradientEstimator *)wrapper->native.GetPointer();
	float r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetLastUpdateTimeInSeconds();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkEncodedGradientEstimatorWrap::GetNumberOfThreads(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkEncodedGradientEstimatorWrap *wrapper = ObjectWrap::Unwrap<VtkEncodedGradientEstimatorWrap>(info.Holder());
	vtkEncodedGradientEstimator *native = (vtkEncodedGradientEstimator *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetNumberOfThreads();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkEncodedGradientEstimatorWrap::GetNumberOfThreadsMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkEncodedGradientEstimatorWrap *wrapper = ObjectWrap::Unwrap<VtkEncodedGradientEstimatorWrap>(info.Holder());
	vtkEncodedGradientEstimator *native = (vtkEncodedGradientEstimator *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetNumberOfThreadsMaxValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkEncodedGradientEstimatorWrap::GetNumberOfThreadsMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkEncodedGradientEstimatorWrap *wrapper = ObjectWrap::Unwrap<VtkEncodedGradientEstimatorWrap>(info.Holder());
	vtkEncodedGradientEstimator *native = (vtkEncodedGradientEstimator *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetNumberOfThreadsMinValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkEncodedGradientEstimatorWrap::GetUseCylinderClip(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkEncodedGradientEstimatorWrap *wrapper = ObjectWrap::Unwrap<VtkEncodedGradientEstimatorWrap>(info.Holder());
	vtkEncodedGradientEstimator *native = (vtkEncodedGradientEstimator *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetUseCylinderClip();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkEncodedGradientEstimatorWrap::GetZeroNormalThreshold(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkEncodedGradientEstimatorWrap *wrapper = ObjectWrap::Unwrap<VtkEncodedGradientEstimatorWrap>(info.Holder());
	vtkEncodedGradientEstimator *native = (vtkEncodedGradientEstimator *)wrapper->native.GetPointer();
	float r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetZeroNormalThreshold();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkEncodedGradientEstimatorWrap::GetZeroPad(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkEncodedGradientEstimatorWrap *wrapper = ObjectWrap::Unwrap<VtkEncodedGradientEstimatorWrap>(info.Holder());
	vtkEncodedGradientEstimator *native = (vtkEncodedGradientEstimator *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetZeroPad();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkEncodedGradientEstimatorWrap::GetZeroPadMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkEncodedGradientEstimatorWrap *wrapper = ObjectWrap::Unwrap<VtkEncodedGradientEstimatorWrap>(info.Holder());
	vtkEncodedGradientEstimator *native = (vtkEncodedGradientEstimator *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetZeroPadMaxValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkEncodedGradientEstimatorWrap::GetZeroPadMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkEncodedGradientEstimatorWrap *wrapper = ObjectWrap::Unwrap<VtkEncodedGradientEstimatorWrap>(info.Holder());
	vtkEncodedGradientEstimator *native = (vtkEncodedGradientEstimator *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetZeroPadMinValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkEncodedGradientEstimatorWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkEncodedGradientEstimatorWrap *wrapper = ObjectWrap::Unwrap<VtkEncodedGradientEstimatorWrap>(info.Holder());
	vtkEncodedGradientEstimator *native = (vtkEncodedGradientEstimator *)wrapper->native.GetPointer();
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

void VtkEncodedGradientEstimatorWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkEncodedGradientEstimatorWrap *wrapper = ObjectWrap::Unwrap<VtkEncodedGradientEstimatorWrap>(info.Holder());
	vtkEncodedGradientEstimator *native = (vtkEncodedGradientEstimator *)wrapper->native.GetPointer();
	vtkEncodedGradientEstimator * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
	VtkEncodedGradientEstimatorWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkEncodedGradientEstimatorWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkEncodedGradientEstimatorWrap *w = new VtkEncodedGradientEstimatorWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkEncodedGradientEstimatorWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkEncodedGradientEstimatorWrap *wrapper = ObjectWrap::Unwrap<VtkEncodedGradientEstimatorWrap>(info.Holder());
	vtkEncodedGradientEstimator *native = (vtkEncodedGradientEstimator *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkEncodedGradientEstimator * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObject *) a0->native.GetPointer()
		);
		VtkEncodedGradientEstimatorWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkEncodedGradientEstimatorWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkEncodedGradientEstimatorWrap *w = new VtkEncodedGradientEstimatorWrap();
		w->native = r;
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkEncodedGradientEstimatorWrap::SetBounds(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkEncodedGradientEstimatorWrap *wrapper = ObjectWrap::Unwrap<VtkEncodedGradientEstimatorWrap>(info.Holder());
	vtkEncodedGradientEstimator *native = (vtkEncodedGradientEstimator *)wrapper->native.GetPointer();
	size_t i;
	if(info.Length() > 0 && info[0]->IsInt32Array())
	{
		v8::Local<v8::Int32Array>a0(v8::Local<v8::Int32Array>::Cast(info[0]->ToObject()));
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
		native->SetBounds(
			(int *)(a0->Buffer()->GetContents().Data())
		);
		return;
	}
	else if(info.Length() > 0 && info[0]->IsArray())
	{
		v8::Local<v8::Array>a0(v8::Local<v8::Array>::Cast(info[0]->ToObject()));
		int b0[6];
		if( a0->Length() < 6 )
		{
			Nan::ThrowError("Array too short.");
			return;
		}

		for( i = 0; i < 6; i++ )
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
		native->SetBounds(
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
				if(info.Length() > 3 && info[3]->IsInt32())
				{
					if(info.Length() > 4 && info[4]->IsInt32())
					{
						if(info.Length() > 5 && info[5]->IsInt32())
						{
														if(info.Length() != 6)
							{
								Nan::ThrowError("Too many parameters.");
								return;
							}
							native->SetBounds(
								info[0]->Int32Value(),
								info[1]->Int32Value(),
								info[2]->Int32Value(),
								info[3]->Int32Value(),
								info[4]->Int32Value(),
								info[5]->Int32Value()
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

void VtkEncodedGradientEstimatorWrap::SetBoundsClip(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkEncodedGradientEstimatorWrap *wrapper = ObjectWrap::Unwrap<VtkEncodedGradientEstimatorWrap>(info.Holder());
	vtkEncodedGradientEstimator *native = (vtkEncodedGradientEstimator *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetBoundsClip(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkEncodedGradientEstimatorWrap::SetComputeGradientMagnitudes(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkEncodedGradientEstimatorWrap *wrapper = ObjectWrap::Unwrap<VtkEncodedGradientEstimatorWrap>(info.Holder());
	vtkEncodedGradientEstimator *native = (vtkEncodedGradientEstimator *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetComputeGradientMagnitudes(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkEncodedGradientEstimatorWrap::SetCylinderClip(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkEncodedGradientEstimatorWrap *wrapper = ObjectWrap::Unwrap<VtkEncodedGradientEstimatorWrap>(info.Holder());
	vtkEncodedGradientEstimator *native = (vtkEncodedGradientEstimator *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetCylinderClip(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkEncodedGradientEstimatorWrap::SetDirectionEncoder(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkEncodedGradientEstimatorWrap *wrapper = ObjectWrap::Unwrap<VtkEncodedGradientEstimatorWrap>(info.Holder());
	vtkEncodedGradientEstimator *native = (vtkEncodedGradientEstimator *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkDirectionEncoderWrap::ptpl))->HasInstance(info[0]))
	{
		VtkDirectionEncoderWrap *a0 = ObjectWrap::Unwrap<VtkDirectionEncoderWrap>(info[0]->ToObject());
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetDirectionEncoder(
			(vtkDirectionEncoder *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkEncodedGradientEstimatorWrap::SetGradientMagnitudeBias(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkEncodedGradientEstimatorWrap *wrapper = ObjectWrap::Unwrap<VtkEncodedGradientEstimatorWrap>(info.Holder());
	vtkEncodedGradientEstimator *native = (vtkEncodedGradientEstimator *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsNumber())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetGradientMagnitudeBias(
			info[0]->NumberValue()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkEncodedGradientEstimatorWrap::SetGradientMagnitudeScale(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkEncodedGradientEstimatorWrap *wrapper = ObjectWrap::Unwrap<VtkEncodedGradientEstimatorWrap>(info.Holder());
	vtkEncodedGradientEstimator *native = (vtkEncodedGradientEstimator *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsNumber())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetGradientMagnitudeScale(
			info[0]->NumberValue()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkEncodedGradientEstimatorWrap::SetInputData(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkEncodedGradientEstimatorWrap *wrapper = ObjectWrap::Unwrap<VtkEncodedGradientEstimatorWrap>(info.Holder());
	vtkEncodedGradientEstimator *native = (vtkEncodedGradientEstimator *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkImageDataWrap::ptpl))->HasInstance(info[0]))
	{
		VtkImageDataWrap *a0 = ObjectWrap::Unwrap<VtkImageDataWrap>(info[0]->ToObject());
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetInputData(
			(vtkImageData *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkEncodedGradientEstimatorWrap::SetNumberOfThreads(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkEncodedGradientEstimatorWrap *wrapper = ObjectWrap::Unwrap<VtkEncodedGradientEstimatorWrap>(info.Holder());
	vtkEncodedGradientEstimator *native = (vtkEncodedGradientEstimator *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetNumberOfThreads(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkEncodedGradientEstimatorWrap::SetZeroNormalThreshold(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkEncodedGradientEstimatorWrap *wrapper = ObjectWrap::Unwrap<VtkEncodedGradientEstimatorWrap>(info.Holder());
	vtkEncodedGradientEstimator *native = (vtkEncodedGradientEstimator *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsNumber())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetZeroNormalThreshold(
			info[0]->NumberValue()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkEncodedGradientEstimatorWrap::SetZeroPad(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkEncodedGradientEstimatorWrap *wrapper = ObjectWrap::Unwrap<VtkEncodedGradientEstimatorWrap>(info.Holder());
	vtkEncodedGradientEstimator *native = (vtkEncodedGradientEstimator *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetZeroPad(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkEncodedGradientEstimatorWrap::Update(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkEncodedGradientEstimatorWrap *wrapper = ObjectWrap::Unwrap<VtkEncodedGradientEstimatorWrap>(info.Holder());
	vtkEncodedGradientEstimator *native = (vtkEncodedGradientEstimator *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->Update();
}

void VtkEncodedGradientEstimatorWrap::ZeroPadOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkEncodedGradientEstimatorWrap *wrapper = ObjectWrap::Unwrap<VtkEncodedGradientEstimatorWrap>(info.Holder());
	vtkEncodedGradientEstimator *native = (vtkEncodedGradientEstimator *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->ZeroPadOff();
}

void VtkEncodedGradientEstimatorWrap::ZeroPadOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkEncodedGradientEstimatorWrap *wrapper = ObjectWrap::Unwrap<VtkEncodedGradientEstimatorWrap>(info.Holder());
	vtkEncodedGradientEstimator *native = (vtkEncodedGradientEstimator *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->ZeroPadOn();
}

