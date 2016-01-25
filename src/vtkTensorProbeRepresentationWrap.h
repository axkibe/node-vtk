/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKTENSORPROBEREPRESENTATIONWRAP_H
#define NATIVE_EXTENSION_VTK_VTKTENSORPROBEREPRESENTATIONWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkTensorProbeRepresentation.h>

#include "vtkWidgetRepresentationWrap.h"

class VtkTensorProbeRepresentationWrap : public VtkWidgetRepresentationWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitTpl(v8::Local<v8::FunctionTemplate> tpl);

		VtkTensorProbeRepresentationWrap(vtkSmartPointer<vtkTensorProbeRepresentation>);
		VtkTensorProbeRepresentationWrap();
		~VtkTensorProbeRepresentationWrap( );
		static Nan::Persistent<v8::Function> constructor;
		static Nan::Persistent<v8::FunctionTemplate> ptpl;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void BuildRepresentation(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetActors(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void Initialize(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void IsA(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void ReleaseGraphicsResources(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void RenderOpaqueGeometry(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetProbePosition(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetTrajectory(const Nan::FunctionCallbackInfo<v8::Value>& info);
};

#endif