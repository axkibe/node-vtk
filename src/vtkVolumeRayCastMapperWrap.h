/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKVOLUMERAYCASTMAPPERWRAP_H
#define NATIVE_EXTENSION_VTK_VTKVOLUMERAYCASTMAPPERWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkVolumeRayCastMapper.h>

#include "vtkVolumeMapperWrap.h"

class VtkVolumeRayCastMapperWrap : public VtkVolumeMapperWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitTpl(v8::Local<v8::FunctionTemplate> tpl);

		VtkVolumeRayCastMapperWrap(vtkSmartPointer<vtkVolumeRayCastMapper>);
		VtkVolumeRayCastMapperWrap();
		~VtkVolumeRayCastMapperWrap( );
		static Nan::Persistent<v8::Function> constructor;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void AutoAdjustSampleDistancesOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void AutoAdjustSampleDistancesOn(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetAutoAdjustSampleDistances(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetAutoAdjustSampleDistancesMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetAutoAdjustSampleDistancesMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetGradientEstimator(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetGradientShader(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetImageSampleDistance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetImageSampleDistanceMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetImageSampleDistanceMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetIntermixIntersectingGeometry(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetIntermixIntersectingGeometryMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetIntermixIntersectingGeometryMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetMaximumImageSampleDistance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetMaximumImageSampleDistanceMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetMaximumImageSampleDistanceMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetMinimumImageSampleDistance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetMinimumImageSampleDistanceMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetMinimumImageSampleDistanceMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetNumberOfThreads(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetSampleDistance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetVolumeRayCastFunction(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void IntermixIntersectingGeometryOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void IntermixIntersectingGeometryOn(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void IsA(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void ReleaseGraphicsResources(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void Render(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetAutoAdjustSampleDistances(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetGradientEstimator(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetImageSampleDistance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetIntermixIntersectingGeometry(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetMaximumImageSampleDistance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetMinimumImageSampleDistance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetNumberOfThreads(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetSampleDistance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetVolumeRayCastFunction(const Nan::FunctionCallbackInfo<v8::Value>& info);
};

#endif
