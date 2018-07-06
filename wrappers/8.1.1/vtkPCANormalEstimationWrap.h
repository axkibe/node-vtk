/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKPCANORMALESTIMATIONWRAP_H
#define NATIVE_EXTENSION_VTK_VTKPCANORMALESTIMATIONWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkPCANormalEstimation.h>

#include "vtkPolyDataAlgorithmWrap.h"
#include "../../plus/plus.h"

class VtkPCANormalEstimationWrap : public VtkPolyDataAlgorithmWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitPtpl();
		static void ConstructorGetter(
			v8::Local<v8::String> property,
			const Nan::PropertyCallbackInfo<v8::Value>& info);

		VtkPCANormalEstimationWrap(vtkSmartPointer<vtkPCANormalEstimation>);
		VtkPCANormalEstimationWrap();
		~VtkPCANormalEstimationWrap( );
		static Nan::Persistent<v8::FunctionTemplate> ptpl;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void FlipNormalsOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void FlipNormalsOn(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetFlipNormals(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetLocator(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetNormalOrientation(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetOrientationPoint(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetSampleSize(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetSampleSizeMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetSampleSizeMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetFlipNormals(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetLocator(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetNormalOrientation(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetNormalOrientationToAsComputed(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetNormalOrientationToGraphTraversal(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetNormalOrientationToPoint(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetOrientationPoint(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetSampleSize(const Nan::FunctionCallbackInfo<v8::Value>& info);

#ifdef VTK_NODE_PLUS_VTKPCANORMALESTIMATIONWRAP_CLASSDEF
		VTK_NODE_PLUS_VTKPCANORMALESTIMATIONWRAP_CLASSDEF
#endif
};

#endif