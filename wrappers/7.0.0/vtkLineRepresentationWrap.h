/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKLINEREPRESENTATIONWRAP_H
#define NATIVE_EXTENSION_VTK_VTKLINEREPRESENTATIONWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkLineRepresentation.h>

#include "vtkWidgetRepresentationWrap.h"
#include "../../plus/plus.h"

class VtkLineRepresentationWrap : public VtkWidgetRepresentationWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitPtpl();
		static void ConstructorGetter(
			v8::Local<v8::String> property,
			const Nan::PropertyCallbackInfo<v8::Value>& info);

		VtkLineRepresentationWrap(vtkSmartPointer<vtkLineRepresentation>);
		VtkLineRepresentationWrap();
		~VtkLineRepresentationWrap( );
		static Nan::Persistent<v8::FunctionTemplate> ptpl;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void BuildRepresentation(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void ComputeInteractionState(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void DistanceAnnotationVisibilityOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void DistanceAnnotationVisibilityOn(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetActors(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetBounds(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetDistance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetDistanceAnnotationFormat(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetDistanceAnnotationProperty(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetDistanceAnnotationVisibility(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetEndPoint2Property(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetEndPointProperty(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetInteractionStateMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetInteractionStateMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetLineHandleRepresentation(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetLineProperty(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetMTime(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetPoint1DisplayPosition(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetPoint1Representation(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetPoint1WorldPosition(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetPoint2DisplayPosition(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetPoint2Representation(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetPoint2WorldPosition(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetPolyData(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetRepresentationState(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetResolution(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetSelectedEndPoint2Property(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetSelectedEndPointProperty(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetSelectedLineProperty(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetTextActor(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetTolerance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetToleranceMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetToleranceMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void HasTranslucentPolygonalGeometry(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void InstantiateHandleRepresentation(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void IsA(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void PlaceWidget(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void ReleaseGraphicsResources(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void RenderOpaqueGeometry(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void RenderTranslucentPolygonalGeometry(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetDistanceAnnotationFormat(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetDistanceAnnotationScale(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetDistanceAnnotationVisibility(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetHandleRepresentation(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetInteractionState(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetLineColor(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetPoint1DisplayPosition(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetPoint1WorldPosition(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetPoint2DisplayPosition(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetPoint2WorldPosition(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetRenderer(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetRepresentationState(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetResolution(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetTolerance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void StartWidgetInteraction(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void WidgetInteraction(const Nan::FunctionCallbackInfo<v8::Value>& info);

#ifdef VTK_NODE_PLUS_VTKLINEREPRESENTATIONWRAP_CLASSDEF
		VTK_NODE_PLUS_VTKLINEREPRESENTATIONWRAP_CLASSDEF
#endif
};

#endif
