/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKTRANSFORMINTERPOLATORWRAP_H
#define NATIVE_EXTENSION_VTK_VTKTRANSFORMINTERPOLATORWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkTransformInterpolator.h>

#include "vtkObjectWrap.h"
#include "../../plus/plus.h"

class VtkTransformInterpolatorWrap : public VtkObjectWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitPtpl();
		static void ConstructorGetter(
			v8::Local<v8::String> property,
			const Nan::PropertyCallbackInfo<v8::Value>& info);

		VtkTransformInterpolatorWrap(vtkSmartPointer<vtkTransformInterpolator>);
		VtkTransformInterpolatorWrap();
		~VtkTransformInterpolatorWrap( );
		static Nan::Persistent<v8::FunctionTemplate> ptpl;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void AddTransform(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetInterpolationType(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetInterpolationTypeMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetInterpolationTypeMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetMTime(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetMaximumT(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetMinimumT(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetNumberOfTransforms(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetPositionInterpolator(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetRotationInterpolator(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetScaleInterpolator(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void Initialize(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void InterpolateTransform(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void IsA(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void RemoveTransform(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetInterpolationType(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetInterpolationTypeToLinear(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetInterpolationTypeToManual(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetInterpolationTypeToSpline(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetPositionInterpolator(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetRotationInterpolator(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetScaleInterpolator(const Nan::FunctionCallbackInfo<v8::Value>& info);

#ifdef VTK_NODE_PLUS_VTKTRANSFORMINTERPOLATORWRAP_CLASSDEF
		VTK_NODE_PLUS_VTKTRANSFORMINTERPOLATORWRAP_CLASSDEF
#endif
};

#endif
