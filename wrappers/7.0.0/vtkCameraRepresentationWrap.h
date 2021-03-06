/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKCAMERAREPRESENTATIONWRAP_H
#define NATIVE_EXTENSION_VTK_VTKCAMERAREPRESENTATIONWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkCameraRepresentation.h>

#include "vtkBorderRepresentationWrap.h"
#include "../../plus/plus.h"

class VtkCameraRepresentationWrap : public VtkBorderRepresentationWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitPtpl();
		static void ConstructorGetter(
			v8::Local<v8::String> property,
			const Nan::PropertyCallbackInfo<v8::Value>& info);

		VtkCameraRepresentationWrap(vtkSmartPointer<vtkCameraRepresentation>);
		VtkCameraRepresentationWrap();
		~VtkCameraRepresentationWrap( );
		static Nan::Persistent<v8::FunctionTemplate> ptpl;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void AddCameraToPath(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void AnimatePath(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void BuildRepresentation(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetActors2D(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetCamera(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetInterpolator(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetNumberOfFrames(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetNumberOfFramesMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetNumberOfFramesMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetProperty(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetSize(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void HasTranslucentPolygonalGeometry(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void InitializePath(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void IsA(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void ReleaseGraphicsResources(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void RenderOpaqueGeometry(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void RenderOverlay(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void RenderTranslucentPolygonalGeometry(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetCamera(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetInterpolator(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetNumberOfFrames(const Nan::FunctionCallbackInfo<v8::Value>& info);

#ifdef VTK_NODE_PLUS_VTKCAMERAREPRESENTATIONWRAP_CLASSDEF
		VTK_NODE_PLUS_VTKCAMERAREPRESENTATIONWRAP_CLASSDEF
#endif
};

#endif
