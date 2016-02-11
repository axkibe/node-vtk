/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKSPHEREHANDLEREPRESENTATIONWRAP_H
#define NATIVE_EXTENSION_VTK_VTKSPHEREHANDLEREPRESENTATIONWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkSphereHandleRepresentation.h>

#include "vtkHandleRepresentationWrap.h"

class VtkSphereHandleRepresentationWrap : public VtkHandleRepresentationWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitPtpl();
		static void ConstructorGetter(
			v8::Local<v8::String> property,
			const Nan::PropertyCallbackInfo<v8::Value>& info);

		VtkSphereHandleRepresentationWrap(vtkSmartPointer<vtkSphereHandleRepresentation>);
		VtkSphereHandleRepresentationWrap();
		~VtkSphereHandleRepresentationWrap( );
		static Nan::Persistent<v8::FunctionTemplate> ptpl;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void BuildRepresentation(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void ComputeInteractionState(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void DeepCopy(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetActors(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetBounds(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetHotSpotSize(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetHotSpotSizeMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetHotSpotSizeMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetProperty(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetSelectedProperty(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetSphereRadius(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetTranslationMode(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void HasTranslucentPolygonalGeometry(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void Highlight(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void IsA(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void PlaceWidget(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void ReleaseGraphicsResources(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void RenderOpaqueGeometry(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void RenderTranslucentPolygonalGeometry(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetDisplayPosition(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetHandleSize(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetHotSpotSize(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetProperty(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetSelectedProperty(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetSphereRadius(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetTranslationMode(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetWorldPosition(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void ShallowCopy(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void StartWidgetInteraction(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void TranslationModeOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void TranslationModeOn(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void WidgetInteraction(const Nan::FunctionCallbackInfo<v8::Value>& info);
};

#endif
