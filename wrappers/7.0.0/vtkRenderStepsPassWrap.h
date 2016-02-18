/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKRENDERSTEPSPASSWRAP_H
#define NATIVE_EXTENSION_VTK_VTKRENDERSTEPSPASSWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkRenderStepsPass.h>

#include "vtkRenderPassWrap.h"
#include "../../plus/plus.h"

class VtkRenderStepsPassWrap : public VtkRenderPassWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitPtpl();
		static void ConstructorGetter(
			v8::Local<v8::String> property,
			const Nan::PropertyCallbackInfo<v8::Value>& info);

		VtkRenderStepsPassWrap(vtkSmartPointer<vtkRenderStepsPass>);
		VtkRenderStepsPassWrap();
		~VtkRenderStepsPassWrap( );
		static Nan::Persistent<v8::FunctionTemplate> ptpl;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void GetCameraPass(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetLightsPass(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetOpaquePass(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetOverlayPass(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetPostProcessPass(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetTranslucentPass(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetVolumetricPass(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void IsA(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void ReleaseGraphicsResources(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetCameraPass(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetLightsPass(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetOpaquePass(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetOverlayPass(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetPostProcessPass(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetTranslucentPass(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetVolumetricPass(const Nan::FunctionCallbackInfo<v8::Value>& info);

#ifdef VTK_NODE_PLUS_VTKRENDERSTEPSPASSWRAP_CLASSDEF
		VTK_NODE_PLUS_VTKRENDERSTEPSPASSWRAP_CLASSDEF
#endif
};

#endif
