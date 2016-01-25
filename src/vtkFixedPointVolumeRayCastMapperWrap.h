/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKFIXEDPOINTVOLUMERAYCASTMAPPERWRAP_H
#define NATIVE_EXTENSION_VTK_VTKFIXEDPOINTVOLUMERAYCASTMAPPERWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkFixedPointVolumeRayCastMapper.h>

#include "vtkVolumeMapperWrap.h"

class VtkFixedPointVolumeRayCastMapperWrap : public VtkVolumeMapperWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitTpl(v8::Local<v8::FunctionTemplate> tpl);

		VtkFixedPointVolumeRayCastMapperWrap(vtkSmartPointer<vtkFixedPointVolumeRayCastMapper>);
		VtkFixedPointVolumeRayCastMapperWrap();
		~VtkFixedPointVolumeRayCastMapperWrap( );
		static Nan::Persistent<v8::Function> constructor;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void AbortRender(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void AutoAdjustSampleDistancesOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void AutoAdjustSampleDistancesOn(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void DisplayRenderedImage(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetAutoAdjustSampleDistances(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetAutoAdjustSampleDistancesMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetAutoAdjustSampleDistancesMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetCompositeGOHelper(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetCompositeGOShadeHelper(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetCompositeHelper(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetCompositeShadeHelper(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetCurrentScalars(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetFlipMIPComparison(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetGradientOpacityRequired(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetIntermixIntersectingGeometry(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetIntermixIntersectingGeometryMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetIntermixIntersectingGeometryMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetLockSampleDistanceToInputSpacing(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetLockSampleDistanceToInputSpacingMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetLockSampleDistanceToInputSpacingMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetMIPHelper(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetNumberOfThreads(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetPreviousScalars(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetRayCastImage(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetRenderWindow(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetShadingRequired(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetVolume(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void InitializeRayInfo(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void IntermixIntersectingGeometryOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void IntermixIntersectingGeometryOn(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void IsA(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void LockSampleDistanceToInputSpacingOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void LockSampleDistanceToInputSpacingOn(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void PerSubVolumeInitialization(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void PerVolumeInitialization(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void Render(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void RenderSubVolume(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetAutoAdjustSampleDistances(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetIntermixIntersectingGeometry(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetLockSampleDistanceToInputSpacing(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetNumberOfThreads(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetRayCastImage(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void ShouldUseNearestNeighborInterpolation(const Nan::FunctionCallbackInfo<v8::Value>& info);
};

#endif
