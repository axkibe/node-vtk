/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKCOMPASSREPRESENTATIONWRAP_H
#define NATIVE_EXTENSION_VTK_VTKCOMPASSREPRESENTATIONWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkCompassRepresentation.h>

#include "vtkContinuousValueWidgetRepresentationWrap.h"

class VtkCompassRepresentationWrap : public VtkContinuousValueWidgetRepresentationWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitPtpl();
		static void ConstructorGetter(
			v8::Local<v8::String> property,
			const Nan::PropertyCallbackInfo<v8::Value>& info);

		VtkCompassRepresentationWrap(vtkSmartPointer<vtkCompassRepresentation>);
		VtkCompassRepresentationWrap();
		~VtkCompassRepresentationWrap( );
		static Nan::Persistent<v8::Function> constructor;
		static Nan::Persistent<v8::FunctionTemplate> ptpl;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void BuildRepresentation(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void ComputeInteractionState(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void EndDistance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void EndTilt(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetActors(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetDistance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetHeading(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetLabelProperty(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetPoint1Coordinate(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetPoint2Coordinate(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetRingProperty(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetSelectedProperty(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetTilt(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void Highlight(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void IsA(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void ReleaseGraphicsResources(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void RenderOpaqueGeometry(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void RenderOverlay(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetDistance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetHeading(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetRenderer(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetTilt(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void UpdateDistance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void UpdateTilt(const Nan::FunctionCallbackInfo<v8::Value>& info);
};

#endif
