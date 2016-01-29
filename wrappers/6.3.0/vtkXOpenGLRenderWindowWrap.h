/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKXOPENGLRENDERWINDOWWRAP_H
#define NATIVE_EXTENSION_VTK_VTKXOPENGLRENDERWINDOWWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkXOpenGLRenderWindow.h>

#include "vtkOpenGLRenderWindowWrap.h"

class VtkXOpenGLRenderWindowWrap : public VtkOpenGLRenderWindowWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitPtpl();
		static void ConstructorGetter(
			v8::Local<v8::String> property,
			const Nan::PropertyCallbackInfo<v8::Value>& info);

		VtkXOpenGLRenderWindowWrap(vtkSmartPointer<vtkXOpenGLRenderWindow>);
		VtkXOpenGLRenderWindowWrap();
		~VtkXOpenGLRenderWindowWrap( );
		static Nan::Persistent<v8::FunctionTemplate> ptpl;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void Finalize(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void Frame(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetDesiredDepth(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetEventPending(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void HideCursor(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void Initialize(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void InitializeFromCurrentContext(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void IsA(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void IsCurrent(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void IsDirect(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void MakeCurrent(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void PrefFullScreen(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void Render(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void ReportCapabilities(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetCurrentCursor(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetForceMakeCurrent(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetFullScreen(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetNextWindowInfo(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetOffScreenRendering(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetParentInfo(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetPosition(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetSize(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetStereoCapableWindow(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetWindowInfo(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetWindowName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void ShowCursor(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void Start(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SupportsOpenGL(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void WindowInitialize(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void WindowRemap(const Nan::FunctionCallbackInfo<v8::Value>& info);
};

#endif
