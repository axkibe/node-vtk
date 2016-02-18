/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKOPENGLRENDERERWRAP_H
#define NATIVE_EXTENSION_VTK_VTKOPENGLRENDERERWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkOpenGLRenderer.h>

#include "vtkRendererWrap.h"
#include "../../plus/plus.h"

class VtkOpenGLRendererWrap : public VtkRendererWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitPtpl();
		static void ConstructorGetter(
			v8::Local<v8::String> property,
			const Nan::PropertyCallbackInfo<v8::Value>& info);

		VtkOpenGLRendererWrap(vtkSmartPointer<vtkOpenGLRenderer>);
		VtkOpenGLRendererWrap();
		~VtkOpenGLRendererWrap( );
		static Nan::Persistent<v8::FunctionTemplate> ptpl;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void Clear(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void DeviceRender(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void DeviceRenderTranslucentPolygonalGeometry(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetDepthPeelingHigherLayer(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetPass(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void IsA(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetPass(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void UpdateLights(const Nan::FunctionCallbackInfo<v8::Value>& info);

#ifdef VTK_NODE_PLUS_VTKOPENGLRENDERERWRAP_CLASSDEF
		VTK_NODE_PLUS_VTKOPENGLRENDERERWRAP_CLASSDEF
#endif
};

#endif
