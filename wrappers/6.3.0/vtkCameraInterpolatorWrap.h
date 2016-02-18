/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKCAMERAINTERPOLATORWRAP_H
#define NATIVE_EXTENSION_VTK_VTKCAMERAINTERPOLATORWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkCameraInterpolator.h>

#include "vtkObjectWrap.h"
#include "../../plus/plus.h"

class VtkCameraInterpolatorWrap : public VtkObjectWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitPtpl();
		static void ConstructorGetter(
			v8::Local<v8::String> property,
			const Nan::PropertyCallbackInfo<v8::Value>& info);

		VtkCameraInterpolatorWrap(vtkSmartPointer<vtkCameraInterpolator>);
		VtkCameraInterpolatorWrap();
		~VtkCameraInterpolatorWrap( );
		static Nan::Persistent<v8::FunctionTemplate> ptpl;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void AddCamera(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetClippingRangeInterpolator(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetFocalPointInterpolator(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetInterpolationType(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetInterpolationTypeMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetInterpolationTypeMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetMaximumT(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetMinimumT(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetNumberOfCameras(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetParallelScaleInterpolator(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetPositionInterpolator(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetViewAngleInterpolator(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetViewUpInterpolator(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void Initialize(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void InterpolateCamera(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void IsA(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void RemoveCamera(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetClippingRangeInterpolator(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetFocalPointInterpolator(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetInterpolationType(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetInterpolationTypeToLinear(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetInterpolationTypeToManual(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetInterpolationTypeToSpline(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetParallelScaleInterpolator(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetPositionInterpolator(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetViewAngleInterpolator(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetViewUpInterpolator(const Nan::FunctionCallbackInfo<v8::Value>& info);

#ifdef VTK_NODE_PLUS_VTKCAMERAINTERPOLATORWRAP_CLASSDEF
		VTK_NODE_PLUS_VTKCAMERAINTERPOLATORWRAP_CLASSDEF
#endif
};

#endif
