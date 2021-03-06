/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKIMAGERESLICEWRAP_H
#define NATIVE_EXTENSION_VTK_VTKIMAGERESLICEWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkImageReslice.h>

#include "vtkThreadedImageAlgorithmWrap.h"
#include "../../plus/plus.h"

class VtkImageResliceWrap : public VtkThreadedImageAlgorithmWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitPtpl();
		static void ConstructorGetter(
			v8::Local<v8::String> property,
			const Nan::PropertyCallbackInfo<v8::Value>& info);

		VtkImageResliceWrap(vtkSmartPointer<vtkImageReslice>);
		VtkImageResliceWrap();
		~VtkImageResliceWrap( );
		static Nan::Persistent<v8::FunctionTemplate> ptpl;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void AutoCropOutputOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void AutoCropOutputOn(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void BorderOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void BorderOn(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GenerateStencilOutputOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GenerateStencilOutputOn(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetAutoCropOutput(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetBackgroundColor(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetBackgroundLevel(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetBorder(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetGenerateStencilOutput(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetInformationInput(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetInterpolate(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetInterpolationMode(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetInterpolationModeAsString(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetInterpolationModeMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetInterpolationModeMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetInterpolator(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetMTime(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetMirror(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetOptimization(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetOutputDimensionality(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetOutputExtent(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetOutputOrigin(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetOutputScalarType(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetOutputSpacing(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetResliceAxes(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetResliceAxesDirectionCosines(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetResliceAxesOrigin(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetResliceTransform(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetScalarScale(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetScalarShift(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetSlabMode(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetSlabModeAsString(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetSlabModeMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetSlabModeMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetSlabNumberOfSlices(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetSlabSliceSpacingFraction(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetSlabTrapezoidIntegration(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetStencil(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetStencilOutput(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetStencilOutputPort(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetTransformInputSampling(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetWrap(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void InterpolateOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void InterpolateOn(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void IsA(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void MirrorOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void MirrorOn(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void OptimizationOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void OptimizationOn(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void ReportReferences(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetAutoCropOutput(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetBackgroundColor(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetBackgroundLevel(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetBorder(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetGenerateStencilOutput(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetInformationInput(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetInterpolate(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetInterpolationMode(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetInterpolationModeToCubic(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetInterpolationModeToLinear(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetInterpolationModeToNearestNeighbor(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetInterpolator(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetMirror(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetOptimization(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetOutputDimensionality(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetOutputExtent(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetOutputExtentToDefault(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetOutputOrigin(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetOutputOriginToDefault(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetOutputScalarType(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetOutputSpacing(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetOutputSpacingToDefault(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetResliceAxes(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetResliceAxesDirectionCosines(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetResliceAxesOrigin(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetResliceTransform(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetScalarScale(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetScalarShift(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetSlabMode(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetSlabModeToMax(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetSlabModeToMean(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetSlabModeToMin(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetSlabModeToSum(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetSlabNumberOfSlices(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetSlabSliceSpacingFraction(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetSlabTrapezoidIntegration(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetStencilData(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetStencilOutput(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetTransformInputSampling(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetWrap(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SlabTrapezoidIntegrationOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SlabTrapezoidIntegrationOn(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void TransformInputSamplingOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void TransformInputSamplingOn(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void WrapOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void WrapOn(const Nan::FunctionCallbackInfo<v8::Value>& info);

#ifdef VTK_NODE_PLUS_VTKIMAGERESLICEWRAP_CLASSDEF
		VTK_NODE_PLUS_VTKIMAGERESLICEWRAP_CLASSDEF
#endif
};

#endif
