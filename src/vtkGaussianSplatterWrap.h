/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKGAUSSIANSPLATTERWRAP_H
#define NATIVE_EXTENSION_VTK_VTKGAUSSIANSPLATTERWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkGaussianSplatter.h>

#include "vtkImageAlgorithmWrap.h"

class VtkGaussianSplatterWrap : public VtkImageAlgorithmWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitTpl(v8::Local<v8::FunctionTemplate> tpl);

		VtkGaussianSplatterWrap(vtkSmartPointer<vtkGaussianSplatter>);
		VtkGaussianSplatterWrap();
		~VtkGaussianSplatterWrap( );
		static Nan::Persistent<v8::Function> constructor;
		static Nan::Persistent<v8::FunctionTemplate> ptpl;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void CappingOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void CappingOn(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void ComputeModelBounds(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetAccumulationMode(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetAccumulationModeAsString(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetAccumulationModeMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetAccumulationModeMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetCapValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetCapping(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetEccentricity(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetEccentricityMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetEccentricityMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetExponentFactor(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetNormalWarping(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetNullValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetRadius(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetRadiusMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetRadiusMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetScalarWarping(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetScaleFactor(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetScaleFactorMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetScaleFactorMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void IsA(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NormalWarpingOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NormalWarpingOn(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void ScalarWarpingOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void ScalarWarpingOn(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetAccumulationMode(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetAccumulationModeToMax(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetAccumulationModeToMin(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetAccumulationModeToSum(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetCapValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetCapping(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetEccentricity(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetExponentFactor(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetModelBounds(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetNormalWarping(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetNullValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetRadius(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetSampleDimensions(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetScalarWarping(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetScaleFactor(const Nan::FunctionCallbackInfo<v8::Value>& info);
};

#endif
