/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKIMPLICITCYLINDERREPRESENTATIONWRAP_H
#define NATIVE_EXTENSION_VTK_VTKIMPLICITCYLINDERREPRESENTATIONWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkImplicitCylinderRepresentation.h>

#include "vtkWidgetRepresentationWrap.h"
#include "../../plus/plus.h"

class VtkImplicitCylinderRepresentationWrap : public VtkWidgetRepresentationWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitPtpl();
		static void ConstructorGetter(
			v8::Local<v8::String> property,
			const Nan::PropertyCallbackInfo<v8::Value>& info);

		VtkImplicitCylinderRepresentationWrap(vtkSmartPointer<vtkImplicitCylinderRepresentation>);
		VtkImplicitCylinderRepresentationWrap();
		~VtkImplicitCylinderRepresentationWrap( );
		static Nan::Persistent<v8::FunctionTemplate> ptpl;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void AlongXAxisOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void AlongXAxisOn(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void AlongYAxisOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void AlongYAxisOn(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void AlongZAxisOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void AlongZAxisOn(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void BuildRepresentation(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void BumpCylinder(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void ComputeInteractionState(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void DrawCylinderOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void DrawCylinderOn(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void EndWidgetInteraction(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetActors(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetAlongXAxis(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetAlongYAxis(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetAlongZAxis(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetAxis(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetAxisProperty(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetBumpDistance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetBumpDistanceMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetBumpDistanceMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetCenter(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetCylinder(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetCylinderProperty(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetDrawCylinder(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetEdgesProperty(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetInteractionStateMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetInteractionStateMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetMaxRadius(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetMaxRadiusMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetMaxRadiusMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetMinRadius(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetMinRadiusMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetMinRadiusMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetOutlineProperty(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetOutlineTranslation(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetOutsideBounds(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetPolyData(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetRadius(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetRepresentationState(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetResolution(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetResolutionMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetResolutionMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetScaleEnabled(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetSelectedAxisProperty(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetSelectedCylinderProperty(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetSelectedOutlineProperty(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetTubing(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void HasTranslucentPolygonalGeometry(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void IsA(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void OutlineTranslationOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void OutlineTranslationOn(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void OutsideBoundsOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void OutsideBoundsOn(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void PlaceWidget(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void PushCylinder(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void ReleaseGraphicsResources(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void RenderOpaqueGeometry(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void RenderTranslucentPolygonalGeometry(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void ScaleEnabledOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void ScaleEnabledOn(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetAlongXAxis(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetAlongYAxis(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetAlongZAxis(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetAxis(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetBumpDistance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetCenter(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetDrawCylinder(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetEdgeColor(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetInteractionState(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetMaxRadius(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetMinRadius(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetOutlineTranslation(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetOutsideBounds(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetRadius(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetRepresentationState(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetResolution(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetScaleEnabled(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetTubing(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void StartWidgetInteraction(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void TubingOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void TubingOn(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void UpdatePlacement(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void WidgetInteraction(const Nan::FunctionCallbackInfo<v8::Value>& info);

#ifdef VTK_NODE_PLUS_VTKIMPLICITCYLINDERREPRESENTATIONWRAP_CLASSDEF
		VTK_NODE_PLUS_VTKIMPLICITCYLINDERREPRESENTATIONWRAP_CLASSDEF
#endif
};

#endif
