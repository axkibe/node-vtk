/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKENCODEDGRADIENTESTIMATORWRAP_H
#define NATIVE_EXTENSION_VTK_VTKENCODEDGRADIENTESTIMATORWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkEncodedGradientEstimator.h>

#include "vtkObjectWrap.h"

class VtkEncodedGradientEstimatorWrap : public VtkObjectWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitTpl(v8::Local<v8::FunctionTemplate> tpl);

		VtkEncodedGradientEstimatorWrap(vtkSmartPointer<vtkEncodedGradientEstimator>);
		VtkEncodedGradientEstimatorWrap();
		~VtkEncodedGradientEstimatorWrap( );
		static Nan::Persistent<v8::Function> constructor;
		static Nan::Persistent<v8::FunctionTemplate> ptpl;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void BoundsClipOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void BoundsClipOn(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void ComputeGradientMagnitudesOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void ComputeGradientMagnitudesOn(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void CylinderClipOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void CylinderClipOn(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetBoundsClip(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetBoundsClipMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetBoundsClipMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetComputeGradientMagnitudes(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetCylinderClip(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetDirectionEncoder(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetEncodedNormalIndex(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetInputData(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetNumberOfThreads(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetNumberOfThreadsMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetNumberOfThreadsMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetUseCylinderClip(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetZeroPad(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetZeroPadMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetZeroPadMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void IsA(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetBounds(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetBoundsClip(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetComputeGradientMagnitudes(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetCylinderClip(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetDirectionEncoder(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetInputData(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetNumberOfThreads(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetZeroPad(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void Update(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void ZeroPadOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void ZeroPadOn(const Nan::FunctionCallbackInfo<v8::Value>& info);
};

#endif
