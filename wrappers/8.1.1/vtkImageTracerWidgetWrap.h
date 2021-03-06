/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKIMAGETRACERWIDGETWRAP_H
#define NATIVE_EXTENSION_VTK_VTKIMAGETRACERWIDGETWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkImageTracerWidget.h>

#include "vtk3DWidgetWrap.h"
#include "../../plus/plus.h"

class VtkImageTracerWidgetWrap : public Vtk3DWidgetWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitPtpl();
		static void ConstructorGetter(
			v8::Local<v8::String> property,
			const Nan::PropertyCallbackInfo<v8::Value>& info);

		VtkImageTracerWidgetWrap(vtkSmartPointer<vtkImageTracerWidget>);
		VtkImageTracerWidgetWrap();
		~VtkImageTracerWidgetWrap( );
		static Nan::Persistent<v8::FunctionTemplate> ptpl;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void AutoCloseOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void AutoCloseOn(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetAutoClose(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetCaptureRadius(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetGlyphSource(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetHandleLeftMouseButton(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetHandleMiddleMouseButton(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetHandlePosition(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetHandleProperty(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetHandleRightMouseButton(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetImageSnapType(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetImageSnapTypeMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetImageSnapTypeMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetInteraction(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetLineProperty(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetNumberOfHandles(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetPath(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetProjectToPlane(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetProjectionNormal(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetProjectionNormalMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetProjectionNormalMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetProjectionPosition(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetSelectedHandleProperty(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetSelectedLineProperty(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetSnapToImage(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void HandleLeftMouseButtonOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void HandleLeftMouseButtonOn(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void HandleMiddleMouseButtonOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void HandleMiddleMouseButtonOn(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void HandleRightMouseButtonOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void HandleRightMouseButtonOn(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void InitializeHandles(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void InteractionOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void InteractionOn(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void IsClosed(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void PlaceWidget(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void ProjectToPlaneOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void ProjectToPlaneOn(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetAutoClose(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetCaptureRadius(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetEnabled(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetHandleLeftMouseButton(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetHandleMiddleMouseButton(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetHandlePosition(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetHandleProperty(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetHandleRightMouseButton(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetImageSnapType(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetInteraction(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetLineProperty(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetProjectToPlane(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetProjectionNormal(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetProjectionNormalToXAxes(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetProjectionNormalToYAxes(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetProjectionNormalToZAxes(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetProjectionPosition(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetSelectedHandleProperty(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetSelectedLineProperty(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetSnapToImage(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetViewProp(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SnapToImageOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SnapToImageOn(const Nan::FunctionCallbackInfo<v8::Value>& info);

#ifdef VTK_NODE_PLUS_VTKIMAGETRACERWIDGETWRAP_CLASSDEF
		VTK_NODE_PLUS_VTKIMAGETRACERWIDGETWRAP_CLASSDEF
#endif
};

#endif
