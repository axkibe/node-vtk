/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKSTATISTICALOUTLIERREMOVALWRAP_H
#define NATIVE_EXTENSION_VTK_VTKSTATISTICALOUTLIERREMOVALWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkStatisticalOutlierRemoval.h>

#include "vtkPointCloudFilterWrap.h"
#include "../../plus/plus.h"

class VtkStatisticalOutlierRemovalWrap : public VtkPointCloudFilterWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitPtpl();
		static void ConstructorGetter(
			v8::Local<v8::String> property,
			const Nan::PropertyCallbackInfo<v8::Value>& info);

		VtkStatisticalOutlierRemovalWrap(vtkSmartPointer<vtkStatisticalOutlierRemoval>);
		VtkStatisticalOutlierRemovalWrap();
		~VtkStatisticalOutlierRemovalWrap( );
		static Nan::Persistent<v8::FunctionTemplate> ptpl;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void GetComputedMean(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetComputedMeanMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetComputedMeanMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetComputedStandardDeviation(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetComputedStandardDeviationMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetComputedStandardDeviationMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetLocator(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetSampleSize(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetSampleSizeMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetSampleSizeMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetStandardDeviationFactor(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetStandardDeviationFactorMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetStandardDeviationFactorMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetComputedMean(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetComputedStandardDeviation(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetLocator(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetSampleSize(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetStandardDeviationFactor(const Nan::FunctionCallbackInfo<v8::Value>& info);

#ifdef VTK_NODE_PLUS_VTKSTATISTICALOUTLIERREMOVALWRAP_CLASSDEF
		VTK_NODE_PLUS_VTKSTATISTICALOUTLIERREMOVALWRAP_CLASSDEF
#endif
};

#endif