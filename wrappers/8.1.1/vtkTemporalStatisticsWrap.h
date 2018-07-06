/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKTEMPORALSTATISTICSWRAP_H
#define NATIVE_EXTENSION_VTK_VTKTEMPORALSTATISTICSWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkTemporalStatistics.h>

#include "vtkPassInputTypeAlgorithmWrap.h"
#include "../../plus/plus.h"

class VtkTemporalStatisticsWrap : public VtkPassInputTypeAlgorithmWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitPtpl();
		static void ConstructorGetter(
			v8::Local<v8::String> property,
			const Nan::PropertyCallbackInfo<v8::Value>& info);

		VtkTemporalStatisticsWrap(vtkSmartPointer<vtkTemporalStatistics>);
		VtkTemporalStatisticsWrap();
		~VtkTemporalStatisticsWrap( );
		static Nan::Persistent<v8::FunctionTemplate> ptpl;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void ComputeAverageOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void ComputeAverageOn(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void ComputeMaximumOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void ComputeMaximumOn(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void ComputeMinimumOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void ComputeMinimumOn(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void ComputeStandardDeviationOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void ComputeStandardDeviationOn(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetComputeAverage(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetComputeMaximum(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetComputeMinimum(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetComputeStandardDeviation(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetComputeAverage(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetComputeMaximum(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetComputeMinimum(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetComputeStandardDeviation(const Nan::FunctionCallbackInfo<v8::Value>& info);

#ifdef VTK_NODE_PLUS_VTKTEMPORALSTATISTICSWRAP_CLASSDEF
		VTK_NODE_PLUS_VTKTEMPORALSTATISTICSWRAP_CLASSDEF
#endif
};

#endif
