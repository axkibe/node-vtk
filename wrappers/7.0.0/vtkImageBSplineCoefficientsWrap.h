/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKIMAGEBSPLINECOEFFICIENTSWRAP_H
#define NATIVE_EXTENSION_VTK_VTKIMAGEBSPLINECOEFFICIENTSWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkImageBSplineCoefficients.h>

#include "vtkThreadedImageAlgorithmWrap.h"
#include "../../plus/plus.h"

class VtkImageBSplineCoefficientsWrap : public VtkThreadedImageAlgorithmWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitPtpl();
		static void ConstructorGetter(
			v8::Local<v8::String> property,
			const Nan::PropertyCallbackInfo<v8::Value>& info);

		VtkImageBSplineCoefficientsWrap(vtkSmartPointer<vtkImageBSplineCoefficients>);
		VtkImageBSplineCoefficientsWrap();
		~VtkImageBSplineCoefficientsWrap( );
		static Nan::Persistent<v8::FunctionTemplate> ptpl;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void BypassOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void BypassOn(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void CheckBounds(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void Evaluate(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetBorderMode(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetBorderModeAsString(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetBorderModeMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetBorderModeMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetBypass(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetOutputScalarType(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetOutputScalarTypeAsString(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetOutputScalarTypeMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetOutputScalarTypeMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetSplineDegree(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetSplineDegreeMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetSplineDegreeMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void IsA(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetBorderMode(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetBorderModeToClamp(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetBorderModeToMirror(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetBorderModeToRepeat(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetBypass(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetOutputScalarType(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetOutputScalarTypeToDouble(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetOutputScalarTypeToFloat(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetSplineDegree(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SplitExtent(const Nan::FunctionCallbackInfo<v8::Value>& info);

#ifdef VTK_NODE_PLUS_VTKIMAGEBSPLINECOEFFICIENTSWRAP_CLASSDEF
		VTK_NODE_PLUS_VTKIMAGEBSPLINECOEFFICIENTSWRAP_CLASSDEF
#endif
};

#endif
