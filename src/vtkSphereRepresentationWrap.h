/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKSPHEREREPRESENTATIONWRAP_H
#define NATIVE_EXTENSION_VTK_VTKSPHEREREPRESENTATIONWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkSphereRepresentation.h>

#include "vtkWidgetRepresentationWrap.h"

class VtkSphereRepresentationWrap : public VtkWidgetRepresentationWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitPtpl();
		static void ConstructorGetter(
			v8::Local<v8::String> property,
			const Nan::PropertyCallbackInfo<v8::Value>& info);

		VtkSphereRepresentationWrap(vtkSmartPointer<vtkSphereRepresentation>);
		VtkSphereRepresentationWrap();
		~VtkSphereRepresentationWrap( );
		static Nan::Persistent<v8::Function> constructor;
		static Nan::Persistent<v8::FunctionTemplate> ptpl;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void BuildRepresentation(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void ComputeInteractionState(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetHandleProperty(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetHandleText(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetHandleTextProperty(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetHandleVisibility(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetPhiResolution(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetPolyData(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetRadialLine(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetRadialLineProperty(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetRadius(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetRepresentation(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetRepresentationMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetRepresentationMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetSelectedHandleProperty(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetSelectedSphereProperty(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetSphere(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetSphereProperty(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetThetaResolution(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void HandleTextOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void HandleTextOn(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void HandleVisibilityOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void HandleVisibilityOn(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void HasTranslucentPolygonalGeometry(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void IsA(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void RadialLineOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void RadialLineOn(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void ReleaseGraphicsResources(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void RenderOpaqueGeometry(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void RenderOverlay(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void RenderTranslucentPolygonalGeometry(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetCenter(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetHandleDirection(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetHandlePosition(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetHandleText(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetHandleVisibility(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetInteractionState(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetPhiResolution(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetRadialLine(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetRadius(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetRepresentation(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetRepresentationToOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetRepresentationToSurface(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetRepresentationToWireframe(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetThetaResolution(const Nan::FunctionCallbackInfo<v8::Value>& info);
};

#endif
