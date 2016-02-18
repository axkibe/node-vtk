/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKCONTEXTTRANSFORMWRAP_H
#define NATIVE_EXTENSION_VTK_VTKCONTEXTTRANSFORMWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkContextTransform.h>

#include "vtkAbstractContextItemWrap.h"
#include "../../plus/plus.h"

class VtkContextTransformWrap : public VtkAbstractContextItemWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitPtpl();
		static void ConstructorGetter(
			v8::Local<v8::String> property,
			const Nan::PropertyCallbackInfo<v8::Value>& info);

		VtkContextTransformWrap(vtkSmartPointer<vtkContextTransform>);
		VtkContextTransformWrap();
		~VtkContextTransformWrap( );
		static Nan::Persistent<v8::FunctionTemplate> ptpl;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetPanModifier(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetPanMouseButton(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetPanYOnMouseWheel(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetSecondaryPanModifier(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetSecondaryPanMouseButton(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetSecondaryZoomModifier(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetSecondaryZoomMouseButton(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetTransform(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetZoomModifier(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetZoomMouseButton(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetZoomOnMouseWheel(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void Identity(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void IsA(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void Paint(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void PanYOnMouseWheelOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void PanYOnMouseWheelOn(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetPanModifier(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetPanMouseButton(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetPanYOnMouseWheel(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetSecondaryPanModifier(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetSecondaryPanMouseButton(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetSecondaryZoomModifier(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetSecondaryZoomMouseButton(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetZoomModifier(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetZoomMouseButton(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetZoomOnMouseWheel(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void Update(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void ZoomOnMouseWheelOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void ZoomOnMouseWheelOn(const Nan::FunctionCallbackInfo<v8::Value>& info);

#ifdef VTK_NODE_PLUS_VTKCONTEXTTRANSFORMWRAP_CLASSDEF
		VTK_NODE_PLUS_VTKCONTEXTTRANSFORMWRAP_CLASSDEF
#endif
};

#endif
