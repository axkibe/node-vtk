/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKLEGENDSCALEACTORWRAP_H
#define NATIVE_EXTENSION_VTK_VTKLEGENDSCALEACTORWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkLegendScaleActor.h>

#include "vtkPropWrap.h"

class VtkLegendScaleActorWrap : public VtkPropWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitPtpl();
		static void ConstructorGetter(
			v8::Local<v8::String> property,
			const Nan::PropertyCallbackInfo<v8::Value>& info);

		VtkLegendScaleActorWrap(vtkSmartPointer<vtkLegendScaleActor>);
		VtkLegendScaleActorWrap();
		~VtkLegendScaleActorWrap( );
		static Nan::Persistent<v8::FunctionTemplate> ptpl;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void AllAnnotationsOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void AllAnnotationsOn(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void AllAxesOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void AllAxesOn(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void BottomAxisVisibilityOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void BottomAxisVisibilityOn(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void BuildRepresentation(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetActors2D(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetBottomAxis(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetBottomAxisVisibility(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetBottomBorderOffset(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetBottomBorderOffsetMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetBottomBorderOffsetMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetCornerOffsetFactor(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetCornerOffsetFactorMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetCornerOffsetFactorMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetLabelMode(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetLabelModeMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetLabelModeMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetLeftAxis(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetLeftAxisVisibility(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetLeftBorderOffset(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetLeftBorderOffsetMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetLeftBorderOffsetMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetLegendLabelProperty(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetLegendTitleProperty(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetLegendVisibility(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetRightAxis(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetRightAxisVisibility(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetRightBorderOffset(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetRightBorderOffsetMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetRightBorderOffsetMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetTopAxis(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetTopAxisVisibility(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetTopBorderOffset(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetTopBorderOffsetMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetTopBorderOffsetMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void IsA(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void LeftAxisVisibilityOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void LeftAxisVisibilityOn(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void LegendVisibilityOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void LegendVisibilityOn(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void ReleaseGraphicsResources(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void RenderOpaqueGeometry(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void RenderOverlay(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void RightAxisVisibilityOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void RightAxisVisibilityOn(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetBottomAxisVisibility(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetBottomBorderOffset(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetCornerOffsetFactor(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetLabelMode(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetLabelModeToDistance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetLabelModeToXYCoordinates(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetLeftAxisVisibility(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetLeftBorderOffset(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetLegendVisibility(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetRightAxisVisibility(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetRightBorderOffset(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetTopAxisVisibility(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetTopBorderOffset(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void TopAxisVisibilityOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void TopAxisVisibilityOn(const Nan::FunctionCallbackInfo<v8::Value>& info);
};

#endif