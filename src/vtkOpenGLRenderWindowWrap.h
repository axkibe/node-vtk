/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKOPENGLRENDERWINDOWWRAP_H
#define NATIVE_EXTENSION_VTK_VTKOPENGLRENDERWINDOWWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkOpenGLRenderWindow.h>

#include "vtkRenderWindowWrap.h"

class VtkOpenGLRenderWindowWrap : public VtkRenderWindowWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitPtpl();
		static void ConstructorGetter(
			v8::Local<v8::String> property,
			const Nan::PropertyCallbackInfo<v8::Value>& info);

		VtkOpenGLRenderWindowWrap(vtkSmartPointer<vtkOpenGLRenderWindow>);
		VtkOpenGLRenderWindowWrap();
		~VtkOpenGLRenderWindowWrap( );
		static Nan::Persistent<v8::Function> constructor;
		static Nan::Persistent<v8::FunctionTemplate> ptpl;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void CheckGraphicError(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetDepthBufferSize(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetExtensionManager(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetGlobalMaximumNumberOfMultiSamples(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetHardwareSupport(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetLastGraphicErrorString(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetPixelData(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetRGBACharPixelData(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetRGBAPixelData(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetZbufferData(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void HasGraphicError(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void IsA(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void OpenGLInit(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void OpenGLInitContext(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void OpenGLInitState(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetGlobalMaximumNumberOfMultiSamples(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetPixelData(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetRGBACharPixelData(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetRGBAPixelData(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetZbufferData(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void StereoUpdate(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void WaitForCompletion(const Nan::FunctionCallbackInfo<v8::Value>& info);
};

#endif
