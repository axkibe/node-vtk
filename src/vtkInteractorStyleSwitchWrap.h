/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKINTERACTORSTYLESWITCHWRAP_H
#define NATIVE_EXTENSION_VTK_VTKINTERACTORSTYLESWITCHWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkInteractorStyleSwitch.h>

#include "vtkInteractorStyleSwitchBaseWrap.h"

class VtkInteractorStyleSwitchWrap : public VtkInteractorStyleSwitchBaseWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitTpl(v8::Local<v8::FunctionTemplate> tpl);

		VtkInteractorStyleSwitchWrap(vtkSmartPointer<vtkInteractorStyleSwitch>);
		VtkInteractorStyleSwitchWrap();
		~VtkInteractorStyleSwitchWrap( );
		static Nan::Persistent<v8::Function> constructor;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetCurrentStyle(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void IsA(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void OnChar(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetAutoAdjustCameraClippingRange(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetCurrentRenderer(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetCurrentStyleToJoystickActor(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetCurrentStyleToJoystickCamera(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetCurrentStyleToTrackballActor(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetCurrentStyleToTrackballCamera(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetDefaultRenderer(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetInteractor(const Nan::FunctionCallbackInfo<v8::Value>& info);
};

#endif
