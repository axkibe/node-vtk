/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKGENERICOPENGLRENDERWINDOWWRAP_H
#define NATIVE_EXTENSION_VTK_VTKGENERICOPENGLRENDERWINDOWWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkGenericOpenGLRenderWindow.h>

#include "vtkOpenGLRenderWindowWrap.h"

class VtkGenericOpenGLRenderWindowWrap : public VtkOpenGLRenderWindowWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitPtpl();
		static void ConstructorGetter(
			v8::Local<v8::String> property,
			const Nan::PropertyCallbackInfo<v8::Value>& info);

		VtkGenericOpenGLRenderWindowWrap(vtkSmartPointer<vtkGenericOpenGLRenderWindow>);
		VtkGenericOpenGLRenderWindowWrap();
		~VtkGenericOpenGLRenderWindowWrap( );
		static Nan::Persistent<v8::Function> constructor;
		static Nan::Persistent<v8::FunctionTemplate> ptpl;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void CreateAWindow(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void DestroyWindow(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void Finalize(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void Frame(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetEventPending(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void HideCursor(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void IsA(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void IsDirect(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void MakeCurrent(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void PopState(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void PushState(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetFullScreen(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetIsDirect(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetNextWindowInfo(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetParentInfo(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetSupportsOpenGL(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetWindowInfo(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void ShowCursor(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void Start(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SupportsOpenGL(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void WindowRemap(const Nan::FunctionCallbackInfo<v8::Value>& info);
};

#endif
