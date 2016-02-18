/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKSHADOWMAPPASSWRAP_H
#define NATIVE_EXTENSION_VTK_VTKSHADOWMAPPASSWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkShadowMapPass.h>

#include "vtkRenderPassWrap.h"
#include "../../plus/plus.h"

class VtkShadowMapPassWrap : public VtkRenderPassWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitPtpl();
		static void ConstructorGetter(
			v8::Local<v8::String> property,
			const Nan::PropertyCallbackInfo<v8::Value>& info);

		VtkShadowMapPassWrap(vtkSmartPointer<vtkShadowMapPass>);
		VtkShadowMapPassWrap();
		~VtkShadowMapPassWrap( );
		static Nan::Persistent<v8::FunctionTemplate> ptpl;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetOpaquePass(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetShadowMapBakerPass(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void IsA(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void ReleaseGraphicsResources(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetOpaquePass(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetShadowMapBakerPass(const Nan::FunctionCallbackInfo<v8::Value>& info);

#ifdef VTK_NODE_PLUS_VTKSHADOWMAPPASSWRAP_CLASSDEF
		VTK_NODE_PLUS_VTKSHADOWMAPPASSWRAP_CLASSDEF
#endif
};

#endif
