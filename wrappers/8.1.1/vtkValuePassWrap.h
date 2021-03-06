/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKVALUEPASSWRAP_H
#define NATIVE_EXTENSION_VTK_VTKVALUEPASSWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkValuePass.h>

#include "vtkOpenGLRenderPassWrap.h"
#include "../../plus/plus.h"

class VtkValuePassWrap : public VtkOpenGLRenderPassWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitPtpl();
		static void ConstructorGetter(
			v8::Local<v8::String> property,
			const Nan::PropertyCallbackInfo<v8::Value>& info);

		VtkValuePassWrap(vtkSmartPointer<vtkValuePass>);
		VtkValuePassWrap();
		~VtkValuePassWrap( );
		static Nan::Persistent<v8::FunctionTemplate> ptpl;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void GetFloatImageDataArray(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetRenderingMode(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void IsFloatingPointModeSupported(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void ReleaseGraphicsResources(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetInputArrayToProcess(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetInputComponentToProcess(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetRenderingMode(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetScalarRange(const Nan::FunctionCallbackInfo<v8::Value>& info);

#ifdef VTK_NODE_PLUS_VTKVALUEPASSWRAP_CLASSDEF
		VTK_NODE_PLUS_VTKVALUEPASSWRAP_CLASSDEF
#endif
};

#endif
