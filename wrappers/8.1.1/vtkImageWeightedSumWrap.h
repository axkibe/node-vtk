/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKIMAGEWEIGHTEDSUMWRAP_H
#define NATIVE_EXTENSION_VTK_VTKIMAGEWEIGHTEDSUMWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkImageWeightedSum.h>

#include "vtkThreadedImageAlgorithmWrap.h"
#include "../../plus/plus.h"

class VtkImageWeightedSumWrap : public VtkThreadedImageAlgorithmWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitPtpl();
		static void ConstructorGetter(
			v8::Local<v8::String> property,
			const Nan::PropertyCallbackInfo<v8::Value>& info);

		VtkImageWeightedSumWrap(vtkSmartPointer<vtkImageWeightedSum>);
		VtkImageWeightedSumWrap();
		~VtkImageWeightedSumWrap( );
		static Nan::Persistent<v8::FunctionTemplate> ptpl;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void CalculateTotalWeight(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetNormalizeByWeight(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetNormalizeByWeightMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetNormalizeByWeightMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetWeights(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NormalizeByWeightOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NormalizeByWeightOn(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetNormalizeByWeight(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetWeights(const Nan::FunctionCallbackInfo<v8::Value>& info);

#ifdef VTK_NODE_PLUS_VTKIMAGEWEIGHTEDSUMWRAP_CLASSDEF
		VTK_NODE_PLUS_VTKIMAGEWEIGHTEDSUMWRAP_CLASSDEF
#endif
};

#endif