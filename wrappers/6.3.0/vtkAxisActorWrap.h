/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKAXISACTORWRAP_H
#define NATIVE_EXTENSION_VTK_VTKAXISACTORWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkAxisActor.h>

#include "vtkActorWrap.h"

class VtkAxisActorWrap : public VtkActorWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitPtpl();
		static void ConstructorGetter(
			v8::Local<v8::String> property,
			const Nan::PropertyCallbackInfo<v8::Value>& info);

		VtkAxisActorWrap(vtkSmartPointer<vtkAxisActor>);
		VtkAxisActorWrap();
		~VtkAxisActorWrap( );
		static Nan::Persistent<v8::FunctionTemplate> ptpl;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void AxisVisibilityOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void AxisVisibilityOn(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void BuildAxis(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void CalculateLabelOffsetOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void CalculateLabelOffsetOn(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void CalculateTitleOffsetOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void CalculateTitleOffsetOn(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void ComputeMaxLabelLength(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void ComputeTitleLength(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void DrawGridlinesOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void DrawGridlinesOn(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void DrawGridlinesOnlyOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void DrawGridlinesOnlyOn(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void DrawGridpolysOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void DrawGridpolysOn(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void DrawInnerGridlinesOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void DrawInnerGridlinesOn(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetAxisLinesProperty(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetAxisOnOrigin(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetAxisPosition(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetAxisPositionMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetAxisPositionMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetAxisType(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetAxisTypeMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetAxisTypeMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetAxisVisibility(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetBounds(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetCalculateLabelOffset(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetCalculateTitleOffset(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetCamera(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetDeltaMajor(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetDeltaMinor(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetDeltaRangeMajor(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetDeltaRangeMinor(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetDrawGridlines(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetDrawGridlinesLocation(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetDrawGridlinesOnly(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetDrawGridpolys(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetDrawInnerGridlines(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetGridlineXLength(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetGridlineYLength(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetGridlineZLength(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetGridlinesProperty(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetGridpolysProperty(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetHorizontalOffsetYTitle2D(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetInnerGridlinesProperty(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetLabelFormat(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetLabelOffset(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetLabelTextProperty(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetLabelVisibility(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetMajorRangeStart(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetMajorStart(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetMajorTickSize(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetMinorRangeStart(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetMinorStart(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetMinorTickSize(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetMinorTicksVisible(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetNumberOfLabelsBuilt(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetPoint1Coordinate(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetPoint2Coordinate(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetSaveTitlePosition(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetScreenSize(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetTickLocation(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetTickLocationMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetTickLocationMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetTickVisibility(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetTitle(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetTitleActor(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetTitleOffset(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetTitleProp3D(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetTitleTextProperty(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetTitleVisibility(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetUse2DMode(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetUseTextActor3D(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetVerticalOffsetXTitle2D(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void HasTranslucentPolygonalGeometry(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void IsA(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void LabelVisibilityOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void LabelVisibilityOn(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void MinorTicksVisibleOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void MinorTicksVisibleOn(const Nan::FunctionCallbackInfo<v8::Value>& info);
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
		static void SetAxisLinesProperty(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetAxisOnOrigin(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetAxisPosition(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetAxisPositionToMaxMax(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetAxisPositionToMaxMin(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetAxisPositionToMinMax(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetAxisPositionToMinMin(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetAxisType(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetAxisTypeToX(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetAxisTypeToY(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetAxisTypeToZ(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetAxisVisibility(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetBounds(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetCalculateLabelOffset(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetCalculateTitleOffset(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetCamera(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetDeltaMajor(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetDeltaMinor(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetDeltaRangeMajor(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetDeltaRangeMinor(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetDrawGridlines(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetDrawGridlinesLocation(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetDrawGridlinesOnly(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetDrawGridpolys(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetDrawInnerGridlines(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetGridlineXLength(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetGridlineYLength(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetGridlineZLength(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetGridlinesProperty(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetGridpolysProperty(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetHorizontalOffsetYTitle2D(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetInnerGridlinesProperty(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetLabelFormat(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetLabelOffset(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetLabelScale(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetLabelTextProperty(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetLabelVisibility(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetLabels(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetMajorRangeStart(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetMajorStart(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetMajorTickSize(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetMinorRangeStart(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetMinorStart(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetMinorTickSize(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetMinorTicksVisible(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetPoint1(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetPoint2(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetRange(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetSaveTitlePosition(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetScreenSize(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetTickLocation(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetTickLocationToBoth(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetTickLocationToInside(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetTickLocationToOutside(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetTickVisibility(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetTitle(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetTitleOffset(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetTitleScale(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetTitleTextProperty(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetTitleVisibility(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetUse2DMode(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetUseTextActor3D(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetVerticalOffsetXTitle2D(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void TickVisibilityOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void TickVisibilityOn(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void TitleVisibilityOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void TitleVisibilityOn(const Nan::FunctionCallbackInfo<v8::Value>& info);
};

#endif
