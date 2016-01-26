/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKIMAGECROPPINGREGIONSWIDGETWRAP_H
#define NATIVE_EXTENSION_VTK_VTKIMAGECROPPINGREGIONSWIDGETWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkImageCroppingRegionsWidget.h>

#include "vtk3DWidgetWrap.h"

class VtkImageCroppingRegionsWidgetWrap : public Vtk3DWidgetWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitPtpl();
		static void ConstructorGetter(
			v8::Local<v8::String> property,
			const Nan::PropertyCallbackInfo<v8::Value>& info);

		VtkImageCroppingRegionsWidgetWrap(vtkSmartPointer<vtkImageCroppingRegionsWidget>);
		VtkImageCroppingRegionsWidgetWrap();
		~VtkImageCroppingRegionsWidgetWrap( );
		static Nan::Persistent<v8::Function> constructor;
		static Nan::Persistent<v8::FunctionTemplate> ptpl;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetCroppingRegionFlags(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetSlice(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetSliceOrientation(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetVolumeMapper(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void IsA(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void MoveHorizontalLine(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void MoveIntersectingLines(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void MoveVerticalLine(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void OnButtonPress(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void OnButtonRelease(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void OnMouseMove(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetCroppingRegionFlags(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetEnabled(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetLine1Color(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetLine2Color(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetLine3Color(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetLine4Color(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetPlanePositions(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetSlice(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetSliceOrientation(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetSliceOrientationToXY(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetSliceOrientationToXZ(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetSliceOrientationToYZ(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetVolumeMapper(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void UpdateAccordingToInput(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void UpdateCursorIcon(const Nan::FunctionCallbackInfo<v8::Value>& info);
};

#endif
