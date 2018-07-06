/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKSLIDERREPRESENTATIONWRAP_H
#define NATIVE_EXTENSION_VTK_VTKSLIDERREPRESENTATIONWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkSliderRepresentation.h>

#include "vtkWidgetRepresentationWrap.h"
#include "../../plus/plus.h"

class VtkSliderRepresentationWrap : public VtkWidgetRepresentationWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitPtpl();
		static void ConstructorGetter(
			v8::Local<v8::String> property,
			const Nan::PropertyCallbackInfo<v8::Value>& info);

		VtkSliderRepresentationWrap(vtkSmartPointer<vtkSliderRepresentation>);
		VtkSliderRepresentationWrap();
		~VtkSliderRepresentationWrap( );
		static Nan::Persistent<v8::FunctionTemplate> ptpl;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void GetCurrentT(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetEndCapLength(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetEndCapLengthMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetEndCapLengthMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetEndCapWidth(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetEndCapWidthMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetEndCapWidthMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetLabelFormat(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetLabelHeight(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetLabelHeightMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetLabelHeightMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetMaximumValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetMinimumValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetPickedT(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetShowSliderLabel(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetSliderLength(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetSliderLengthMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetSliderLengthMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetSliderWidth(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetSliderWidthMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetSliderWidthMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetTitleHeight(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetTitleHeightMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetTitleHeightMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetTitleText(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetTubeWidth(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetTubeWidthMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetTubeWidthMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetEndCapLength(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetEndCapWidth(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetLabelFormat(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetLabelHeight(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetMaximumValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetMinimumValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetShowSliderLabel(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetSliderLength(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetSliderWidth(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetTitleHeight(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetTitleText(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetTubeWidth(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void ShowSliderLabelOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void ShowSliderLabelOn(const Nan::FunctionCallbackInfo<v8::Value>& info);

#ifdef VTK_NODE_PLUS_VTKSLIDERREPRESENTATIONWRAP_CLASSDEF
		VTK_NODE_PLUS_VTKSLIDERREPRESENTATIONWRAP_CLASSDEF
#endif
};

#endif
