/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKELLIPSOIDTENSORPROBEREPRESENTATIONWRAP_H
#define NATIVE_EXTENSION_VTK_VTKELLIPSOIDTENSORPROBEREPRESENTATIONWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkEllipsoidTensorProbeRepresentation.h>

#include "vtkTensorProbeRepresentationWrap.h"
#include "../../plus/plus.h"

class VtkEllipsoidTensorProbeRepresentationWrap : public VtkTensorProbeRepresentationWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitPtpl();
		static void ConstructorGetter(
			v8::Local<v8::String> property,
			const Nan::PropertyCallbackInfo<v8::Value>& info);

		VtkEllipsoidTensorProbeRepresentationWrap(vtkSmartPointer<vtkEllipsoidTensorProbeRepresentation>);
		VtkEllipsoidTensorProbeRepresentationWrap();
		~VtkEllipsoidTensorProbeRepresentationWrap( );
		static Nan::Persistent<v8::FunctionTemplate> ptpl;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void BuildRepresentation(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetActors(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void IsA(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void ReleaseGraphicsResources(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void RenderOpaqueGeometry(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SelectProbe(const Nan::FunctionCallbackInfo<v8::Value>& info);

#ifdef VTK_NODE_PLUS_VTKELLIPSOIDTENSORPROBEREPRESENTATIONWRAP_CLASSDEF
		VTK_NODE_PLUS_VTKELLIPSOIDTENSORPROBEREPRESENTATIONWRAP_CLASSDEF
#endif
};

#endif
