/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKSCALARBARACTORWRAP_H
#define NATIVE_EXTENSION_VTK_VTKSCALARBARACTORWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkScalarBarActor.h>

#include "vtkActor2DWrap.h"

class VtkScalarBarActorWrap : public VtkActor2DWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitPtpl();
		static void ConstructorGetter(
			v8::Local<v8::String> property,
			const Nan::PropertyCallbackInfo<v8::Value>& info);

		VtkScalarBarActorWrap(vtkSmartPointer<vtkScalarBarActor>);
		VtkScalarBarActorWrap();
		~VtkScalarBarActorWrap( );
		static Nan::Persistent<v8::FunctionTemplate> ptpl;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void DrawAnnotationsOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void DrawAnnotationsOn(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void DrawBackgroundOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void DrawBackgroundOn(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void DrawColorBarOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void DrawColorBarOn(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void DrawFrameOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void DrawFrameOn(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void DrawNanAnnotationOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void DrawNanAnnotationOn(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void DrawTickLabelsOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void DrawTickLabelsOn(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void FixedAnnotationLeaderLineColorOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void FixedAnnotationLeaderLineColorOn(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetAnnotationLeaderPadding(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetAnnotationTextScaling(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetBackgroundProperty(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetBarRatio(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetBarRatioMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetBarRatioMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetComponentTitle(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetDrawAnnotations(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetDrawBackground(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetDrawColorBar(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetDrawFrame(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetDrawNanAnnotation(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetDrawTickLabels(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetFixedAnnotationLeaderLineColor(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetFrameProperty(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetLabelFormat(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetLabelTextProperty(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetLookupTable(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetMaximumHeightInPixels(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetMaximumNumberOfColors(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetMaximumNumberOfColorsMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetMaximumNumberOfColorsMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetMaximumWidthInPixels(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetNanAnnotation(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetNumberOfLabels(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetNumberOfLabelsMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetNumberOfLabelsMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetOrientation(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetOrientationMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetOrientationMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetScalarBarRect(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetTextPad(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetTextPosition(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetTextPositionMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetTextPositionMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetTextureActor(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetTextureGridWidth(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetTitle(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetTitleRatio(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetTitleRatioMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetTitleRatioMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetTitleTextProperty(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetUseOpacity(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetVerticalTitleSeparation(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void HasTranslucentPolygonalGeometry(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void IsA(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void ReleaseGraphicsResources(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void RenderOpaqueGeometry(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void RenderOverlay(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void RenderTranslucentPolygonalGeometry(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetAnnotationLeaderPadding(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetAnnotationTextScaling(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetBackgroundProperty(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetBarRatio(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetComponentTitle(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetDrawAnnotations(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetDrawBackground(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetDrawColorBar(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetDrawFrame(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetDrawNanAnnotation(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetDrawTickLabels(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetFixedAnnotationLeaderLineColor(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetFrameProperty(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetLabelFormat(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetLabelTextProperty(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetLookupTable(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetMaximumHeightInPixels(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetMaximumNumberOfColors(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetMaximumWidthInPixels(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetNanAnnotation(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetNumberOfLabels(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetOrientation(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetOrientationToHorizontal(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetOrientationToVertical(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetTextPad(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetTextPosition(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetTextPositionToPrecedeScalarBar(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetTextPositionToSucceedScalarBar(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetTextureGridWidth(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetTitle(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetTitleRatio(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetTitleTextProperty(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetUseOpacity(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetVerticalTitleSeparation(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void ShallowCopy(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void UseOpacityOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void UseOpacityOn(const Nan::FunctionCallbackInfo<v8::Value>& info);
};

#endif
