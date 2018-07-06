/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKRENDEREDREPRESENTATIONWRAP_H
#define NATIVE_EXTENSION_VTK_VTKRENDEREDREPRESENTATIONWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkRenderedRepresentation.h>

#include "vtkDataRepresentationWrap.h"
#include "../../plus/plus.h"

class VtkRenderedRepresentationWrap : public VtkDataRepresentationWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitPtpl();
		static void ConstructorGetter(
			v8::Local<v8::String> property,
			const Nan::PropertyCallbackInfo<v8::Value>& info);

		VtkRenderedRepresentationWrap(vtkSmartPointer<vtkRenderedRepresentation>);
		VtkRenderedRepresentationWrap();
		~VtkRenderedRepresentationWrap( );
		static Nan::Persistent<v8::FunctionTemplate> ptpl;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void GetLabelRenderMode(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetLabelRenderMode(const Nan::FunctionCallbackInfo<v8::Value>& info);

#ifdef VTK_NODE_PLUS_VTKRENDEREDREPRESENTATIONWRAP_CLASSDEF
		VTK_NODE_PLUS_VTKRENDEREDREPRESENTATIONWRAP_CLASSDEF
#endif
};

#endif
