/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKTRANSFORMCOORDINATESYSTEMSWRAP_H
#define NATIVE_EXTENSION_VTK_VTKTRANSFORMCOORDINATESYSTEMSWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkTransformCoordinateSystems.h>

#include "vtkPointSetAlgorithmWrap.h"

class VtkTransformCoordinateSystemsWrap : public VtkPointSetAlgorithmWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitTpl(v8::Local<v8::FunctionTemplate> tpl);

		VtkTransformCoordinateSystemsWrap(vtkSmartPointer<vtkTransformCoordinateSystems>);
		VtkTransformCoordinateSystemsWrap();
		~VtkTransformCoordinateSystemsWrap( );
		static Nan::Persistent<v8::Function> constructor;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetInputCoordinateSystem(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetOutputCoordinateSystem(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetViewport(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void IsA(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetInputCoordinateSystem(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetInputCoordinateSystemToDisplay(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetInputCoordinateSystemToViewport(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetInputCoordinateSystemToWorld(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetOutputCoordinateSystem(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetOutputCoordinateSystemToDisplay(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetOutputCoordinateSystemToViewport(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetOutputCoordinateSystemToWorld(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetViewport(const Nan::FunctionCallbackInfo<v8::Value>& info);
};

#endif
