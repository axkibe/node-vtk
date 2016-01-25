/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKORIENTATIONMARKERWIDGETWRAP_H
#define NATIVE_EXTENSION_VTK_VTKORIENTATIONMARKERWIDGETWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkOrientationMarkerWidget.h>

#include "vtkInteractorObserverWrap.h"

class VtkOrientationMarkerWidgetWrap : public VtkInteractorObserverWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitTpl(v8::Local<v8::FunctionTemplate> tpl);

		VtkOrientationMarkerWidgetWrap(vtkSmartPointer<vtkOrientationMarkerWidget>);
		VtkOrientationMarkerWidgetWrap();
		~VtkOrientationMarkerWidgetWrap( );
		static Nan::Persistent<v8::Function> constructor;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetInteractive(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetOrientationMarker(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetTolerance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetToleranceMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetToleranceMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void InteractiveOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void InteractiveOn(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void IsA(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetEnabled(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetInteractive(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetOrientationMarker(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetOutlineColor(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetTolerance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetViewport(const Nan::FunctionCallbackInfo<v8::Value>& info);
};

#endif
