/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKXRENDERWINDOWINTERACTORWRAP_H
#define NATIVE_EXTENSION_VTK_VTKXRENDERWINDOWINTERACTORWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkXRenderWindowInteractor.h>

#include "vtkRenderWindowInteractorWrap.h"

class VtkXRenderWindowInteractorWrap : public VtkRenderWindowInteractorWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitPtpl();
		static void ConstructorGetter(
			v8::Local<v8::String> property,
			const Nan::PropertyCallbackInfo<v8::Value>& info);

		VtkXRenderWindowInteractorWrap(vtkSmartPointer<vtkXRenderWindowInteractor>);
		VtkXRenderWindowInteractorWrap();
		~VtkXRenderWindowInteractorWrap( );
		static Nan::Persistent<v8::Function> constructor;
		static Nan::Persistent<v8::FunctionTemplate> ptpl;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void BreakLoopFlagOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void BreakLoopFlagOn(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void Disable(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void Enable(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetBreakLoopFlag(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void Initialize(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void IsA(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetBreakLoopFlag(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void Start(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void TerminateApp(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void UpdateSize(const Nan::FunctionCallbackInfo<v8::Value>& info);
};

#endif
