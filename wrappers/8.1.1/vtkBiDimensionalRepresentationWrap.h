/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKBIDIMENSIONALREPRESENTATIONWRAP_H
#define NATIVE_EXTENSION_VTK_VTKBIDIMENSIONALREPRESENTATIONWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkBiDimensionalRepresentation.h>

#include "vtkWidgetRepresentationWrap.h"
#include "../../plus/plus.h"

class VtkBiDimensionalRepresentationWrap : public VtkWidgetRepresentationWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitPtpl();
		static void ConstructorGetter(
			v8::Local<v8::String> property,
			const Nan::PropertyCallbackInfo<v8::Value>& info);

		VtkBiDimensionalRepresentationWrap(vtkSmartPointer<vtkBiDimensionalRepresentation>);
		VtkBiDimensionalRepresentationWrap();
		~VtkBiDimensionalRepresentationWrap( );
		static Nan::Persistent<v8::FunctionTemplate> ptpl;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void GetLabelFormat(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetLength1(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetLength2(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetLine1Visibility(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetLine2Visibility(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetPoint1DisplayPosition(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetPoint1Representation(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetPoint1WorldPosition(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetPoint2DisplayPosition(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetPoint2Representation(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetPoint2WorldPosition(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetPoint3DisplayPosition(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetPoint3Representation(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetPoint3WorldPosition(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetPoint4DisplayPosition(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetPoint4Representation(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetPoint4WorldPosition(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetShowLabelAboveWidget(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetTolerance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetToleranceMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetToleranceMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void InstantiateHandleRepresentation(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void Line1VisibilityOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void Line1VisibilityOn(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void Line2VisibilityOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void Line2VisibilityOn(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetHandleRepresentation(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetLabelFormat(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetLine1Visibility(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetLine2Visibility(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetPoint1DisplayPosition(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetPoint1WorldPosition(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetPoint2DisplayPosition(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetPoint2WorldPosition(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetPoint3DisplayPosition(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetPoint3WorldPosition(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetPoint4DisplayPosition(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetPoint4WorldPosition(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetShowLabelAboveWidget(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetTolerance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void ShowLabelAboveWidgetOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void ShowLabelAboveWidgetOn(const Nan::FunctionCallbackInfo<v8::Value>& info);

#ifdef VTK_NODE_PLUS_VTKBIDIMENSIONALREPRESENTATIONWRAP_CLASSDEF
		VTK_NODE_PLUS_VTKBIDIMENSIONALREPRESENTATIONWRAP_CLASSDEF
#endif
};

#endif
