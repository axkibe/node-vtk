/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKIMAGENONMAXIMUMSUPPRESSIONWRAP_H
#define NATIVE_EXTENSION_VTK_VTKIMAGENONMAXIMUMSUPPRESSIONWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkImageNonMaximumSuppression.h>

#include "vtkThreadedImageAlgorithmWrap.h"
#include "../../plus/plus.h"

class VtkImageNonMaximumSuppressionWrap : public VtkThreadedImageAlgorithmWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitPtpl();
		static void ConstructorGetter(
			v8::Local<v8::String> property,
			const Nan::PropertyCallbackInfo<v8::Value>& info);

		VtkImageNonMaximumSuppressionWrap(vtkSmartPointer<vtkImageNonMaximumSuppression>);
		VtkImageNonMaximumSuppressionWrap();
		~VtkImageNonMaximumSuppressionWrap( );
		static Nan::Persistent<v8::FunctionTemplate> ptpl;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetDimensionality(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetDimensionalityMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetDimensionalityMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetHandleBoundaries(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void HandleBoundariesOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void HandleBoundariesOn(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void IsA(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetDimensionality(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetHandleBoundaries(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetMagnitudeInputData(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetVectorInputData(const Nan::FunctionCallbackInfo<v8::Value>& info);

#ifdef VTK_NODE_PLUS_VTKIMAGENONMAXIMUMSUPPRESSIONWRAP_CLASSDEF
		VTK_NODE_PLUS_VTKIMAGENONMAXIMUMSUPPRESSIONWRAP_CLASSDEF
#endif
};

#endif
