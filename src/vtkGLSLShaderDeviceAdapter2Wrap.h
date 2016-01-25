/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKGLSLSHADERDEVICEADAPTER2WRAP_H
#define NATIVE_EXTENSION_VTK_VTKGLSLSHADERDEVICEADAPTER2WRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkGLSLShaderDeviceAdapter2.h>

#include "vtkShaderDeviceAdapter2Wrap.h"

class VtkGLSLShaderDeviceAdapter2Wrap : public VtkShaderDeviceAdapter2Wrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitTpl(v8::Local<v8::FunctionTemplate> tpl);

		VtkGLSLShaderDeviceAdapter2Wrap(vtkSmartPointer<vtkGLSLShaderDeviceAdapter2>);
		VtkGLSLShaderDeviceAdapter2Wrap();
		~VtkGLSLShaderDeviceAdapter2Wrap( );
		static Nan::Persistent<v8::Function> constructor;
		static Nan::Persistent<v8::FunctionTemplate> ptpl;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void IsA(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void PrepareForRender(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);
};

#endif
