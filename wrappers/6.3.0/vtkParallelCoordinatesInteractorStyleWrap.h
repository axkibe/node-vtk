/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKPARALLELCOORDINATESINTERACTORSTYLEWRAP_H
#define NATIVE_EXTENSION_VTK_VTKPARALLELCOORDINATESINTERACTORSTYLEWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkParallelCoordinatesInteractorStyle.h>

#include "vtkInteractorStyleTrackballCameraWrap.h"

class VtkParallelCoordinatesInteractorStyleWrap : public VtkInteractorStyleTrackballCameraWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitPtpl();
		static void ConstructorGetter(
			v8::Local<v8::String> property,
			const Nan::PropertyCallbackInfo<v8::Value>& info);

		VtkParallelCoordinatesInteractorStyleWrap(vtkSmartPointer<vtkParallelCoordinatesInteractorStyle>);
		VtkParallelCoordinatesInteractorStyleWrap();
		~VtkParallelCoordinatesInteractorStyleWrap( );
		static Nan::Persistent<v8::FunctionTemplate> ptpl;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void EndInspect(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void EndPan(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void EndZoom(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void Inspect(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void IsA(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void OnChar(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void OnLeave(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void OnLeftButtonDown(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void OnLeftButtonUp(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void OnMiddleButtonDown(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void OnMiddleButtonUp(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void OnMouseMove(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void OnRightButtonDown(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void OnRightButtonUp(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void Pan(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void StartInspect(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void StartPan(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void StartZoom(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void Zoom(const Nan::FunctionCallbackInfo<v8::Value>& info);
};

#endif
