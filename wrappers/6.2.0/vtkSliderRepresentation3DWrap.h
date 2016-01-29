/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKSLIDERREPRESENTATION3DWRAP_H
#define NATIVE_EXTENSION_VTK_VTKSLIDERREPRESENTATION3DWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkSliderRepresentation3D.h>

#include "vtkSliderRepresentationWrap.h"

class VtkSliderRepresentation3DWrap : public VtkSliderRepresentationWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitPtpl();
		static void ConstructorGetter(
			v8::Local<v8::String> property,
			const Nan::PropertyCallbackInfo<v8::Value>& info);

		VtkSliderRepresentation3DWrap(vtkSmartPointer<vtkSliderRepresentation3D>);
		VtkSliderRepresentation3DWrap();
		~VtkSliderRepresentation3DWrap( );
		static Nan::Persistent<v8::FunctionTemplate> ptpl;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void BuildRepresentation(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetActors(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetCapProperty(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetPoint1Coordinate(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetPoint2Coordinate(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetRotation(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetSelectedProperty(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetSliderProperty(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetSliderShape(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetSliderShapeMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetSliderShapeMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetTitleText(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetTubeProperty(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void HasTranslucentPolygonalGeometry(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void Highlight(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void IsA(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void PlaceWidget(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void ReleaseGraphicsResources(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void RenderOpaqueGeometry(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void RenderTranslucentPolygonalGeometry(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetPoint1InWorldCoordinates(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetPoint2InWorldCoordinates(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetRotation(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetSliderShape(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetSliderShapeToCylinder(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetSliderShapeToSphere(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetTitleText(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void StartWidgetInteraction(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void WidgetInteraction(const Nan::FunctionCallbackInfo<v8::Value>& info);
};

#endif
