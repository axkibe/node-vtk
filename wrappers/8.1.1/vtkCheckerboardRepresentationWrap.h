/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKCHECKERBOARDREPRESENTATIONWRAP_H
#define NATIVE_EXTENSION_VTK_VTKCHECKERBOARDREPRESENTATIONWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkCheckerboardRepresentation.h>

#include "vtkWidgetRepresentationWrap.h"
#include "../../plus/plus.h"

class VtkCheckerboardRepresentationWrap : public VtkWidgetRepresentationWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitPtpl();
		static void ConstructorGetter(
			v8::Local<v8::String> property,
			const Nan::PropertyCallbackInfo<v8::Value>& info);

		VtkCheckerboardRepresentationWrap(vtkSmartPointer<vtkCheckerboardRepresentation>);
		VtkCheckerboardRepresentationWrap();
		~VtkCheckerboardRepresentationWrap( );
		static Nan::Persistent<v8::FunctionTemplate> ptpl;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void BuildRepresentation(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetActors(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetBottomRepresentation(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetCheckerboard(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetCornerOffset(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetCornerOffsetMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetCornerOffsetMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetImageActor(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetLeftRepresentation(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetRightRepresentation(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetTopRepresentation(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void HasTranslucentPolygonalGeometry(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void ReleaseGraphicsResources(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void RenderOpaqueGeometry(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void RenderOverlay(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void RenderTranslucentPolygonalGeometry(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetBottomRepresentation(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetCheckerboard(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetCornerOffset(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetImageActor(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetLeftRepresentation(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetRightRepresentation(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetTopRepresentation(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SliderValueChanged(const Nan::FunctionCallbackInfo<v8::Value>& info);

#ifdef VTK_NODE_PLUS_VTKCHECKERBOARDREPRESENTATIONWRAP_CLASSDEF
		VTK_NODE_PLUS_VTKCHECKERBOARDREPRESENTATIONWRAP_CLASSDEF
#endif
};

#endif