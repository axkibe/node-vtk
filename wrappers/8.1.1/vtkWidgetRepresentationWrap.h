/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKWIDGETREPRESENTATIONWRAP_H
#define NATIVE_EXTENSION_VTK_VTKWIDGETREPRESENTATIONWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkWidgetRepresentation.h>

#include "vtkPropWrap.h"
#include "../../plus/plus.h"

class VtkWidgetRepresentationWrap : public VtkPropWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitPtpl();
		static void ConstructorGetter(
			v8::Local<v8::String> property,
			const Nan::PropertyCallbackInfo<v8::Value>& info);

		VtkWidgetRepresentationWrap(vtkSmartPointer<vtkWidgetRepresentation>);
		VtkWidgetRepresentationWrap();
		~VtkWidgetRepresentationWrap( );
		static Nan::Persistent<v8::FunctionTemplate> ptpl;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void ComputeInteractionState(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void EndWidgetInteraction(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetActors(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetActors2D(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetBounds(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetHandleSize(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetHandleSizeMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetHandleSizeMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetInteractionState(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetNeedToRender(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetNeedToRenderMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetNeedToRenderMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetPickingManaged(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetPlaceFactor(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetPlaceFactorMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetPlaceFactorMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetRenderer(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetVolumes(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void HasTranslucentPolygonalGeometry(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void Highlight(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NeedToRenderOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NeedToRenderOn(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void PickingManagedOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void PickingManagedOn(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void ReleaseGraphicsResources(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void RenderOpaqueGeometry(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void RenderOverlay(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void RenderTranslucentPolygonalGeometry(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void RenderVolumetricGeometry(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetHandleSize(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetNeedToRender(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetPickingManaged(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetPlaceFactor(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetRenderer(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void ShallowCopy(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void StartWidgetInteraction(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void WidgetInteraction(const Nan::FunctionCallbackInfo<v8::Value>& info);

#ifdef VTK_NODE_PLUS_VTKWIDGETREPRESENTATIONWRAP_CLASSDEF
		VTK_NODE_PLUS_VTKWIDGETREPRESENTATIONWRAP_CLASSDEF
#endif
};

#endif
