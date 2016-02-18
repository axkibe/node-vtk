/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKRENDEREDSURFACEREPRESENTATIONWRAP_H
#define NATIVE_EXTENSION_VTK_VTKRENDEREDSURFACEREPRESENTATIONWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkRenderedSurfaceRepresentation.h>

#include "vtkRenderedRepresentationWrap.h"
#include "../../plus/plus.h"

class VtkRenderedSurfaceRepresentationWrap : public VtkRenderedRepresentationWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitPtpl();
		static void ConstructorGetter(
			v8::Local<v8::String> property,
			const Nan::PropertyCallbackInfo<v8::Value>& info);

		VtkRenderedSurfaceRepresentationWrap(vtkSmartPointer<vtkRenderedSurfaceRepresentation>);
		VtkRenderedSurfaceRepresentationWrap();
		~VtkRenderedSurfaceRepresentationWrap( );
		static Nan::Persistent<v8::FunctionTemplate> ptpl;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void ApplyViewTheme(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetCellColorArrayName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void IsA(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetCellColorArrayName(const Nan::FunctionCallbackInfo<v8::Value>& info);

#ifdef VTK_NODE_PLUS_VTKRENDEREDSURFACEREPRESENTATIONWRAP_CLASSDEF
		VTK_NODE_PLUS_VTKRENDEREDSURFACEREPRESENTATIONWRAP_CLASSDEF
#endif
};

#endif
