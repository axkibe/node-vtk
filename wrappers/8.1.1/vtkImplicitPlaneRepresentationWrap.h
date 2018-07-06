/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKIMPLICITPLANEREPRESENTATIONWRAP_H
#define NATIVE_EXTENSION_VTK_VTKIMPLICITPLANEREPRESENTATIONWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkImplicitPlaneRepresentation.h>

#include "vtkWidgetRepresentationWrap.h"
#include "../../plus/plus.h"

class VtkImplicitPlaneRepresentationWrap : public VtkWidgetRepresentationWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitPtpl();
		static void ConstructorGetter(
			v8::Local<v8::String> property,
			const Nan::PropertyCallbackInfo<v8::Value>& info);

		VtkImplicitPlaneRepresentationWrap(vtkSmartPointer<vtkImplicitPlaneRepresentation>);
		VtkImplicitPlaneRepresentationWrap();
		~VtkImplicitPlaneRepresentationWrap( );
		static Nan::Persistent<v8::FunctionTemplate> ptpl;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void BuildRepresentation(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void BumpPlane(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void ComputeInteractionState(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void ConstrainToWidgetBoundsOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void ConstrainToWidgetBoundsOn(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void CropPlaneToBoundingBoxOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void CropPlaneToBoundingBoxOn(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void DrawOutlineOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void DrawOutlineOn(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void DrawPlaneOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void DrawPlaneOn(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void EndWidgetInteraction(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetActors(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetBounds(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetBumpDistance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetBumpDistanceMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetBumpDistanceMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetConstrainToWidgetBounds(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetCropPlaneToBoundingBox(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetDrawOutline(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetDrawPlane(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetEdgesProperty(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetInteractionStateMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetInteractionStateMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetLockNormalToCamera(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetNormal(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetNormalProperty(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetNormalToXAxis(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetNormalToYAxis(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetNormalToZAxis(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetOrigin(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetOutlineProperty(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetOutlineTranslation(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetOutsideBounds(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetPlane(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetPlaneProperty(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetPolyData(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetPolyDataAlgorithm(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetRepresentationState(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetScaleEnabled(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetSelectedNormalProperty(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetSelectedOutlineProperty(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetSelectedPlaneProperty(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetTubing(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetUnderlyingPlane(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetWidgetBounds(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void HasTranslucentPolygonalGeometry(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void LockNormalToCameraOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void LockNormalToCameraOn(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NormalToXAxisOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NormalToXAxisOn(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NormalToYAxisOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NormalToYAxisOn(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NormalToZAxisOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NormalToZAxisOn(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void OutlineTranslationOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void OutlineTranslationOn(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void OutsideBoundsOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void OutsideBoundsOn(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void PlaceWidget(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void PushPlane(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void ReleaseGraphicsResources(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void RenderOpaqueGeometry(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void RenderTranslucentPolygonalGeometry(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void ScaleEnabledOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void ScaleEnabledOn(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetBumpDistance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetConstrainToWidgetBounds(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetCropPlaneToBoundingBox(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetDrawOutline(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetDrawPlane(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetEdgeColor(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetInteractionState(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetLockNormalToCamera(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetNormal(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetNormalToCamera(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetNormalToXAxis(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetNormalToYAxis(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetNormalToZAxis(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetOrigin(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetOutlineTranslation(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetOutsideBounds(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetPlane(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetRepresentationState(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetScaleEnabled(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetTubing(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetWidgetBounds(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void StartWidgetInteraction(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void TubingOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void TubingOn(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void UpdatePlacement(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void WidgetInteraction(const Nan::FunctionCallbackInfo<v8::Value>& info);

#ifdef VTK_NODE_PLUS_VTKIMPLICITPLANEREPRESENTATIONWRAP_CLASSDEF
		VTK_NODE_PLUS_VTKIMPLICITPLANEREPRESENTATIONWRAP_CLASSDEF
#endif
};

#endif