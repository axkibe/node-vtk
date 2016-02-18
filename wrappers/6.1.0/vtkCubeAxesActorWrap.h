/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKCUBEAXESACTORWRAP_H
#define NATIVE_EXTENSION_VTK_VTKCUBEAXESACTORWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkCubeAxesActor.h>

#include "vtkActorWrap.h"
#include "../../plus/plus.h"

class VtkCubeAxesActorWrap : public VtkActorWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitPtpl();
		static void ConstructorGetter(
			v8::Local<v8::String> property,
			const Nan::PropertyCallbackInfo<v8::Value>& info);

		VtkCubeAxesActorWrap(vtkSmartPointer<vtkCubeAxesActor>);
		VtkCubeAxesActorWrap();
		~VtkCubeAxesActorWrap( );
		static Nan::Persistent<v8::FunctionTemplate> ptpl;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void DrawXGridlinesOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void DrawXGridlinesOn(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void DrawXGridpolysOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void DrawXGridpolysOn(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void DrawXInnerGridlinesOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void DrawXInnerGridlinesOn(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void DrawYGridlinesOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void DrawYGridlinesOn(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void DrawYGridpolysOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void DrawYGridpolysOn(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void DrawYInnerGridlinesOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void DrawYInnerGridlinesOn(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void DrawZGridlinesOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void DrawZGridlinesOn(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void DrawZGridpolysOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void DrawZGridpolysOn(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void DrawZInnerGridlinesOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void DrawZInnerGridlinesOn(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetAxisBaseForX(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetAxisBaseForY(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetAxisBaseForZ(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetAxisLabels(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetAxisOrigin(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetBounds(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetCamera(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetCornerOffset(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetDistanceLODThreshold(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetDistanceLODThresholdMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetDistanceLODThresholdMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetDrawXGridlines(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetDrawXGridpolys(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetDrawXInnerGridlines(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetDrawYGridlines(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetDrawYGridpolys(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetDrawYInnerGridlines(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetDrawZGridlines(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetDrawZGridpolys(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetDrawZInnerGridlines(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetEnableDistanceLOD(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetEnableViewAngleLOD(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetFlyMode(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetFlyModeMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetFlyModeMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetGridLineLocation(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetInertia(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetInertiaMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetInertiaMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetLabelOffset(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetLabelTextProperty(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetOrientedBounds(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetRebuildAxes(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetRenderedBounds(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetScreenSize(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetTickLocation(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetTickLocationMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetTickLocationMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetTitleOffset(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetTitleTextProperty(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetUse2DMode(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetUseAxisOrigin(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetUseOrientedBounds(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetUseTextActor3D(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetViewAngleLODThreshold(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetViewAngleLODThresholdMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetViewAngleLODThresholdMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetXAxesGridlinesProperty(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetXAxesGridpolysProperty(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetXAxesInnerGridlinesProperty(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetXAxesLinesProperty(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetXAxisLabelVisibility(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetXAxisMinorTickVisibility(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetXAxisRange(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetXAxisTickVisibility(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetXAxisVisibility(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetXLabelFormat(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetXTitle(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetXUnits(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetYAxesGridlinesProperty(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetYAxesGridpolysProperty(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetYAxesInnerGridlinesProperty(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetYAxesLinesProperty(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetYAxisLabelVisibility(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetYAxisMinorTickVisibility(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetYAxisRange(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetYAxisTickVisibility(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetYAxisVisibility(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetYLabelFormat(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetYTitle(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetYUnits(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetZAxesGridlinesProperty(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetZAxesGridpolysProperty(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetZAxesInnerGridlinesProperty(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetZAxesLinesProperty(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetZAxisLabelVisibility(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetZAxisMinorTickVisibility(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetZAxisRange(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetZAxisTickVisibility(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetZAxisVisibility(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetZLabelFormat(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetZTitle(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetZUnits(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void HasTranslucentPolygonalGeometry(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void IsA(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void ReleaseGraphicsResources(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void RenderOpaqueGeometry(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void RenderOverlay(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void RenderTranslucentGeometry(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void RenderTranslucentPolygonalGeometry(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetAxisBaseForX(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetAxisBaseForY(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetAxisBaseForZ(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetAxisLabels(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetAxisOrigin(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetBounds(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetCamera(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetCornerOffset(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetDistanceLODThreshold(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetDrawXGridlines(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetDrawXGridpolys(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetDrawXInnerGridlines(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetDrawYGridlines(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetDrawYGridpolys(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetDrawYInnerGridlines(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetDrawZGridlines(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetDrawZGridpolys(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetDrawZInnerGridlines(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetEnableDistanceLOD(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetEnableViewAngleLOD(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetFlyMode(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetFlyModeToClosestTriad(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetFlyModeToFurthestTriad(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetFlyModeToOuterEdges(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetFlyModeToStaticEdges(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetFlyModeToStaticTriad(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetGridLineLocation(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetInertia(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetLabelOffset(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetLabelScaling(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetOrientedBounds(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetRebuildAxes(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetSaveTitlePosition(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetScreenSize(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetTickLocation(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetTickLocationToBoth(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetTickLocationToInside(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetTickLocationToOutside(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetTitleOffset(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetUse2DMode(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetUseAxisOrigin(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetUseOrientedBounds(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetUseTextActor3D(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetViewAngleLODThreshold(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetXAxesGridlinesProperty(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetXAxesGridpolysProperty(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetXAxesInnerGridlinesProperty(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetXAxesLinesProperty(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetXAxisLabelVisibility(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetXAxisMinorTickVisibility(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetXAxisRange(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetXAxisTickVisibility(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetXAxisVisibility(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetXLabelFormat(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetXTitle(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetXUnits(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetYAxesGridlinesProperty(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetYAxesGridpolysProperty(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetYAxesInnerGridlinesProperty(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetYAxesLinesProperty(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetYAxisLabelVisibility(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetYAxisMinorTickVisibility(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetYAxisRange(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetYAxisTickVisibility(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetYAxisVisibility(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetYLabelFormat(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetYTitle(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetYUnits(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetZAxesGridlinesProperty(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetZAxesGridpolysProperty(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetZAxesInnerGridlinesProperty(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetZAxesLinesProperty(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetZAxisLabelVisibility(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetZAxisMinorTickVisibility(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetZAxisRange(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetZAxisTickVisibility(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetZAxisVisibility(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetZLabelFormat(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetZTitle(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetZUnits(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void XAxisLabelVisibilityOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void XAxisLabelVisibilityOn(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void XAxisMinorTickVisibilityOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void XAxisMinorTickVisibilityOn(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void XAxisTickVisibilityOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void XAxisTickVisibilityOn(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void XAxisVisibilityOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void XAxisVisibilityOn(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void YAxisLabelVisibilityOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void YAxisLabelVisibilityOn(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void YAxisMinorTickVisibilityOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void YAxisMinorTickVisibilityOn(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void YAxisTickVisibilityOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void YAxisTickVisibilityOn(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void YAxisVisibilityOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void YAxisVisibilityOn(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void ZAxisLabelVisibilityOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void ZAxisLabelVisibilityOn(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void ZAxisMinorTickVisibilityOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void ZAxisMinorTickVisibilityOn(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void ZAxisTickVisibilityOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void ZAxisTickVisibilityOn(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void ZAxisVisibilityOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void ZAxisVisibilityOn(const Nan::FunctionCallbackInfo<v8::Value>& info);

#ifdef VTK_NODE_PLUS_VTKCUBEAXESACTORWRAP_CLASSDEF
		VTK_NODE_PLUS_VTKCUBEAXESACTORWRAP_CLASSDEF
#endif
};

#endif
