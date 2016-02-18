/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKIMAGERESLICEMAPPERWRAP_H
#define NATIVE_EXTENSION_VTK_VTKIMAGERESLICEMAPPERWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkImageResliceMapper.h>

#include "vtkImageMapper3DWrap.h"
#include "../../plus/plus.h"

class VtkImageResliceMapperWrap : public VtkImageMapper3DWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitPtpl();
		static void ConstructorGetter(
			v8::Local<v8::String> property,
			const Nan::PropertyCallbackInfo<v8::Value>& info);

		VtkImageResliceMapperWrap(vtkSmartPointer<vtkImageResliceMapper>);
		VtkImageResliceMapperWrap();
		~VtkImageResliceMapperWrap( );
		static Nan::Persistent<v8::FunctionTemplate> ptpl;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void AutoAdjustImageQualityOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void AutoAdjustImageQualityOn(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetAutoAdjustImageQuality(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetBounds(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetImageSampleFactor(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetImageSampleFactorMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetImageSampleFactorMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetInterpolator(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetJumpToNearestSlice(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetResampleToScreenPixels(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetSeparateWindowLevelOperation(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetSlabSampleFactor(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetSlabSampleFactorMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetSlabSampleFactorMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetSlabThickness(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetSlabType(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetSlabTypeAsString(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetSlabTypeMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetSlabTypeMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void IsA(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void JumpToNearestSliceOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void JumpToNearestSliceOn(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void ReleaseGraphicsResources(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void Render(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void ResampleToScreenPixelsOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void ResampleToScreenPixelsOn(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SeparateWindowLevelOperationOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SeparateWindowLevelOperationOn(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetAutoAdjustImageQuality(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetImageSampleFactor(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetInterpolator(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetJumpToNearestSlice(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetResampleToScreenPixels(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetSeparateWindowLevelOperation(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetSlabSampleFactor(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetSlabThickness(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetSlabType(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetSlabTypeToMax(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetSlabTypeToMean(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetSlabTypeToMin(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetSlicePlane(const Nan::FunctionCallbackInfo<v8::Value>& info);

#ifdef VTK_NODE_PLUS_VTKIMAGERESLICEMAPPERWRAP_CLASSDEF
		VTK_NODE_PLUS_VTKIMAGERESLICEMAPPERWRAP_CLASSDEF
#endif
};

#endif
