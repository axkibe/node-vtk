/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKPOLARAXESACTORWRAP_H
#define NATIVE_EXTENSION_VTK_VTKPOLARAXESACTORWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkPolarAxesActor.h>

#include "vtkActorWrap.h"

class VtkPolarAxesActorWrap : public VtkActorWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitPtpl();
		static void ConstructorGetter(
			v8::Local<v8::String> property,
			const Nan::PropertyCallbackInfo<v8::Value>& info);

		VtkPolarAxesActorWrap(vtkSmartPointer<vtkPolarAxesActor>);
		VtkPolarAxesActorWrap();
		~VtkPolarAxesActorWrap( );
		static Nan::Persistent<v8::FunctionTemplate> ptpl;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void AutoSubdividePolarAxisOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void AutoSubdividePolarAxisOn(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetCamera(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetDistanceLODThreshold(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetDistanceLODThresholdMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetDistanceLODThresholdMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetEnableDistanceLOD(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetEnableViewAngleLOD(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetMaximumAngle(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetMaximumRadius(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetMinimumAngle(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetPolarArcsProperty(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetPolarArcsVisibility(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetPolarAxisLabelTextProperty(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetPolarAxisProperty(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetPolarAxisTitle(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetPolarAxisTitleTextProperty(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetPolarAxisVisibility(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetPolarLabelFormat(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetPolarLabelVisibility(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetPolarTickVisibility(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetPolarTitleVisibility(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetRadialAxesProperty(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetRadialAxesVisibility(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetRadialTitleVisibility(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetScreenSize(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetSmallestVisiblePolarAngle(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetSmallestVisiblePolarAngleMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetSmallestVisiblePolarAngleMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetViewAngleLODThreshold(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetViewAngleLODThresholdMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetViewAngleLODThresholdMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void IsA(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void PolarArcsVisibilityOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void PolarArcsVisibilityOn(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void PolarAxisVisibilityOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void PolarAxisVisibilityOn(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void PolarLabelVisibilityOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void PolarLabelVisibilityOn(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void PolarTickVisibilityOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void PolarTickVisibilityOn(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void PolarTitleVisibilityOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void PolarTitleVisibilityOn(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void RadialAxesVisibilityOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void RadialAxesVisibilityOn(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void RadialTitleVisibilityOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void RadialTitleVisibilityOn(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void ReleaseGraphicsResources(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void RenderOpaqueGeometry(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void RenderTranslucentPolygonalGeometry(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetBounds(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetCamera(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetDistanceLODThreshold(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetEnableDistanceLOD(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetEnableViewAngleLOD(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetMaximumAngle(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetMaximumRadius(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetMinimumAngle(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetPolarArcsProperty(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetPolarArcsVisibility(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetPolarAxisLabelTextProperty(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetPolarAxisProperty(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetPolarAxisTitle(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetPolarAxisTitleTextProperty(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetPolarAxisVisibility(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetPolarLabelFormat(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetPolarLabelVisibility(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetPolarTickVisibility(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetPolarTitleVisibility(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetPole(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetRadialAxesProperty(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetRadialAxesVisibility(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetRadialTitleVisibility(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetScreenSize(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetSmallestVisiblePolarAngle(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetViewAngleLODThreshold(const Nan::FunctionCallbackInfo<v8::Value>& info);
};

#endif
