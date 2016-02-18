/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKDISTANCEREPRESENTATIONWRAP_H
#define NATIVE_EXTENSION_VTK_VTKDISTANCEREPRESENTATIONWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkDistanceRepresentation.h>

#include "vtkWidgetRepresentationWrap.h"
#include "../../plus/plus.h"

class VtkDistanceRepresentationWrap : public VtkWidgetRepresentationWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitPtpl();
		static void ConstructorGetter(
			v8::Local<v8::String> property,
			const Nan::PropertyCallbackInfo<v8::Value>& info);

		VtkDistanceRepresentationWrap(vtkSmartPointer<vtkDistanceRepresentation>);
		VtkDistanceRepresentationWrap();
		~VtkDistanceRepresentationWrap( );
		static Nan::Persistent<v8::FunctionTemplate> ptpl;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void BuildRepresentation(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void ComputeInteractionState(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetLabelFormat(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetNumberOfRulerTicks(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetNumberOfRulerTicksMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetNumberOfRulerTicksMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetPoint1Representation(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetPoint2Representation(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetRulerDistance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetRulerDistanceMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetRulerDistanceMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetRulerMode(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetTolerance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetToleranceMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetToleranceMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void InstantiateHandleRepresentation(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void IsA(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void RulerModeOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void RulerModeOn(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetHandleRepresentation(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetLabelFormat(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetNumberOfRulerTicks(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetRulerDistance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetRulerMode(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetTolerance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void StartWidgetInteraction(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void WidgetInteraction(const Nan::FunctionCallbackInfo<v8::Value>& info);

#ifdef VTK_NODE_PLUS_VTKDISTANCEREPRESENTATIONWRAP_CLASSDEF
		VTK_NODE_PLUS_VTKDISTANCEREPRESENTATIONWRAP_CLASSDEF
#endif
};

#endif
