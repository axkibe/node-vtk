/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKRESLICECURSORREPRESENTATIONWRAP_H
#define NATIVE_EXTENSION_VTK_VTKRESLICECURSORREPRESENTATIONWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkResliceCursorRepresentation.h>

#include "vtkWidgetRepresentationWrap.h"
#include "../../plus/plus.h"

class VtkResliceCursorRepresentationWrap : public VtkWidgetRepresentationWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitPtpl();
		static void ConstructorGetter(
			v8::Local<v8::String> property,
			const Nan::PropertyCallbackInfo<v8::Value>& info);

		VtkResliceCursorRepresentationWrap(vtkSmartPointer<vtkResliceCursorRepresentation>);
		VtkResliceCursorRepresentationWrap();
		~VtkResliceCursorRepresentationWrap( );
		static Nan::Persistent<v8::FunctionTemplate> ptpl;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void ActivateText(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void BuildRepresentation(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void DisplayTextOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void DisplayTextOn(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetColorMap(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetDisplayText(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetImageActor(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetLevel(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetLookupTable(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetManipulationMode(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetPlaneSource(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetReslice(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetResliceAxes(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetRestrictPlaneToVolume(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetShowReslicedImage(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetTextProperty(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetThicknessLabelFormat(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetThicknessLabelPosition(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetThicknessLabelText(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetTolerance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetToleranceMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetToleranceMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetUseImageActor(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetWindow(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetWindowLevel(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetWorldThicknessLabelPosition(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void InitializeReslicePlane(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void IsA(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void ManageTextDisplay(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void ResetCamera(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void RestrictPlaneToVolumeOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void RestrictPlaneToVolumeOn(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetColorMap(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetDisplayText(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetLookupTable(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetManipulationMode(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetRestrictPlaneToVolume(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetShowReslicedImage(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetTextProperty(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetThicknessLabelFormat(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetTolerance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetUseImageActor(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetWindowLevel(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void ShowReslicedImageOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void ShowReslicedImageOn(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void UseImageActorOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void UseImageActorOn(const Nan::FunctionCallbackInfo<v8::Value>& info);

#ifdef VTK_NODE_PLUS_VTKRESLICECURSORREPRESENTATIONWRAP_CLASSDEF
		VTK_NODE_PLUS_VTKRESLICECURSORREPRESENTATIONWRAP_CLASSDEF
#endif
};

#endif
