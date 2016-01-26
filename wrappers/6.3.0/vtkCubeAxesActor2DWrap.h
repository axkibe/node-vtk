/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKCUBEAXESACTOR2DWRAP_H
#define NATIVE_EXTENSION_VTK_VTKCUBEAXESACTOR2DWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkCubeAxesActor2D.h>

#include "vtkActor2DWrap.h"

class VtkCubeAxesActor2DWrap : public VtkActor2DWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitPtpl();
		static void ConstructorGetter(
			v8::Local<v8::String> property,
			const Nan::PropertyCallbackInfo<v8::Value>& info);

		VtkCubeAxesActor2DWrap(vtkSmartPointer<vtkCubeAxesActor2D>);
		VtkCubeAxesActor2DWrap();
		~VtkCubeAxesActor2DWrap( );
		static Nan::Persistent<v8::FunctionTemplate> ptpl;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void GetAxisLabelTextProperty(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetAxisTitleTextProperty(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetCamera(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetCornerOffset(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetFlyMode(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetFlyModeMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetFlyModeMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetFontFactor(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetFontFactorMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetFontFactorMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetInertia(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetInertiaMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetInertiaMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetInput(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetLabelFormat(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetNumberOfLabels(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetNumberOfLabelsMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetNumberOfLabelsMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetScaling(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetShowActualBounds(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetShowActualBoundsMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetShowActualBoundsMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetUseRanges(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetViewProp(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetXAxisActor2D(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetXAxisVisibility(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetXLabel(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetYAxisActor2D(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetYAxisVisibility(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetYLabel(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetZAxisActor2D(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetZAxisVisibility(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetZLabel(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void HasTranslucentPolygonalGeometry(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void IsA(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void ReleaseGraphicsResources(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void RenderOpaqueGeometry(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void RenderOverlay(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void RenderTranslucentPolygonalGeometry(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void ScalingOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void ScalingOn(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetAxisLabelTextProperty(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetAxisTitleTextProperty(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetBounds(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetCamera(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetCornerOffset(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetFlyMode(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetFlyModeToClosestTriad(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetFlyModeToNone(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetFlyModeToOuterEdges(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetFontFactor(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetInertia(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetInputConnection(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetInputData(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetLabelFormat(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetNumberOfLabels(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetRanges(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetScaling(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetShowActualBounds(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetUseRanges(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetViewProp(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetXAxisVisibility(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetXLabel(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetXOrigin(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetYAxisVisibility(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetYLabel(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetYOrigin(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetZAxisVisibility(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetZLabel(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetZOrigin(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void ShallowCopy(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void UseRangesOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void UseRangesOn(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void XAxisVisibilityOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void XAxisVisibilityOn(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void YAxisVisibilityOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void YAxisVisibilityOn(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void ZAxisVisibilityOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void ZAxisVisibilityOn(const Nan::FunctionCallbackInfo<v8::Value>& info);
};

#endif
