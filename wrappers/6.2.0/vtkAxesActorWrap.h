/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKAXESACTORWRAP_H
#define NATIVE_EXTENSION_VTK_VTKAXESACTORWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkAxesActor.h>

#include "vtkProp3DWrap.h"
#include "../../plus/plus.h"

class VtkAxesActorWrap : public VtkProp3DWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitPtpl();
		static void ConstructorGetter(
			v8::Local<v8::String> property,
			const Nan::PropertyCallbackInfo<v8::Value>& info);

		VtkAxesActorWrap(vtkSmartPointer<vtkAxesActor>);
		VtkAxesActorWrap();
		~VtkAxesActorWrap( );
		static Nan::Persistent<v8::FunctionTemplate> ptpl;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void AxisLabelsOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void AxisLabelsOn(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetActors(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetAxisLabels(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetBounds(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetConeRadius(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetConeRadiusMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetConeRadiusMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetConeResolution(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetConeResolutionMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetConeResolutionMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetCylinderRadius(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetCylinderRadiusMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetCylinderRadiusMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetCylinderResolution(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetCylinderResolutionMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetCylinderResolutionMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetNormalizedLabelPosition(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetNormalizedShaftLength(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetNormalizedTipLength(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetShaftType(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetSphereRadius(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetSphereRadiusMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetSphereRadiusMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetSphereResolution(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetSphereResolutionMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetSphereResolutionMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetTipType(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetTotalLength(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetUserDefinedShaft(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetUserDefinedTip(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetXAxisCaptionActor2D(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetXAxisLabelText(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetXAxisShaftProperty(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetXAxisTipProperty(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetYAxisCaptionActor2D(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetYAxisLabelText(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetYAxisShaftProperty(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetYAxisTipProperty(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetZAxisCaptionActor2D(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetZAxisLabelText(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetZAxisShaftProperty(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetZAxisTipProperty(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void HasTranslucentPolygonalGeometry(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void IsA(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void ReleaseGraphicsResources(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void RenderOpaqueGeometry(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void RenderOverlay(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void RenderTranslucentPolygonalGeometry(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetAxisLabels(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetConeRadius(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetConeResolution(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetCylinderRadius(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetCylinderResolution(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetNormalizedLabelPosition(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetNormalizedShaftLength(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetNormalizedTipLength(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetShaftType(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetShaftTypeToCylinder(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetShaftTypeToLine(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetShaftTypeToUserDefined(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetSphereRadius(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetSphereResolution(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetTipType(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetTipTypeToCone(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetTipTypeToSphere(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetTipTypeToUserDefined(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetTotalLength(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetUserDefinedShaft(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetUserDefinedTip(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetXAxisLabelText(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetYAxisLabelText(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetZAxisLabelText(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void ShallowCopy(const Nan::FunctionCallbackInfo<v8::Value>& info);

#ifdef VTK_NODE_PLUS_VTKAXESACTORWRAP_CLASSDEF
		VTK_NODE_PLUS_VTKAXESACTORWRAP_CLASSDEF
#endif
};

#endif
