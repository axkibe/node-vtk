/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKINTERACTORSTYLERUBBERBAND3DWRAP_H
#define NATIVE_EXTENSION_VTK_VTKINTERACTORSTYLERUBBERBAND3DWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkInteractorStyleRubberBand3D.h>

#include "vtkInteractorStyleTrackballCameraWrap.h"
#include "../../plus/plus.h"

class VtkInteractorStyleRubberBand3DWrap : public VtkInteractorStyleTrackballCameraWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitPtpl();
		static void ConstructorGetter(
			v8::Local<v8::String> property,
			const Nan::PropertyCallbackInfo<v8::Value>& info);

		VtkInteractorStyleRubberBand3DWrap(vtkSmartPointer<vtkInteractorStyleRubberBand3D>);
		VtkInteractorStyleRubberBand3DWrap();
		~VtkInteractorStyleRubberBand3DWrap( );
		static Nan::Persistent<v8::FunctionTemplate> ptpl;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetEndPosition(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetInteraction(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetRenderOnMouseMove(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetStartPosition(const Nan::FunctionCallbackInfo<v8::Value>& info);
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
		static void RenderOnMouseMoveOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void RenderOnMouseMoveOn(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetRenderOnMouseMove(const Nan::FunctionCallbackInfo<v8::Value>& info);

#ifdef VTK_NODE_PLUS_VTKINTERACTORSTYLERUBBERBAND3DWRAP_CLASSDEF
		VTK_NODE_PLUS_VTKINTERACTORSTYLERUBBERBAND3DWRAP_CLASSDEF
#endif
};

#endif
