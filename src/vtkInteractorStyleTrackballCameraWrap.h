/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKINTERACTORSTYLETRACKBALLCAMERAWRAP_H
#define NATIVE_EXTENSION_VTK_VTKINTERACTORSTYLETRACKBALLCAMERAWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkInteractorStyleTrackballCamera.h>

#include "vtkInteractorStyleWrap.h"

class VtkInteractorStyleTrackballCameraWrap : public VtkInteractorStyleWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitTpl(v8::Local<v8::FunctionTemplate> tpl);

		VtkInteractorStyleTrackballCameraWrap(vtkSmartPointer<vtkInteractorStyleTrackballCamera>);
		VtkInteractorStyleTrackballCameraWrap();
		~VtkInteractorStyleTrackballCameraWrap( );
		static Nan::Persistent<v8::Function> constructor;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void Dolly(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetMotionFactor(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void IsA(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void OnLeftButtonDown(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void OnLeftButtonUp(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void OnMiddleButtonDown(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void OnMiddleButtonUp(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void OnMouseMove(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void OnMouseWheelBackward(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void OnMouseWheelForward(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void OnRightButtonDown(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void OnRightButtonUp(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void Pan(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void Rotate(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetMotionFactor(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void Spin(const Nan::FunctionCallbackInfo<v8::Value>& info);
};

#endif
