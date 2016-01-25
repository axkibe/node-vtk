/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKGENERICRENDERWINDOWINTERACTORWRAP_H
#define NATIVE_EXTENSION_VTK_VTKGENERICRENDERWINDOWINTERACTORWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkGenericRenderWindowInteractor.h>

#include "vtkRenderWindowInteractorWrap.h"

class VtkGenericRenderWindowInteractorWrap : public VtkRenderWindowInteractorWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitTpl(v8::Local<v8::FunctionTemplate> tpl);

		VtkGenericRenderWindowInteractorWrap(vtkSmartPointer<vtkGenericRenderWindowInteractor>);
		VtkGenericRenderWindowInteractorWrap();
		~VtkGenericRenderWindowInteractorWrap( );
		static Nan::Persistent<v8::Function> constructor;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetTimerEventResetsTimer(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void IsA(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetTimerEventResetsTimer(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void TimerEvent(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void TimerEventResetsTimerOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void TimerEventResetsTimerOn(const Nan::FunctionCallbackInfo<v8::Value>& info);
};

#endif
