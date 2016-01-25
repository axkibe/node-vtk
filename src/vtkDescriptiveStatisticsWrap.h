/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKDESCRIPTIVESTATISTICSWRAP_H
#define NATIVE_EXTENSION_VTK_VTKDESCRIPTIVESTATISTICSWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkDescriptiveStatistics.h>

#include "vtkStatisticsAlgorithmWrap.h"

class VtkDescriptiveStatisticsWrap : public VtkStatisticsAlgorithmWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitTpl(v8::Local<v8::FunctionTemplate> tpl);

		VtkDescriptiveStatisticsWrap(vtkSmartPointer<vtkDescriptiveStatistics>);
		VtkDescriptiveStatisticsWrap();
		~VtkDescriptiveStatisticsWrap( );
		static Nan::Persistent<v8::Function> constructor;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void Aggregate(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void G1SkewnessOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void G1SkewnessOn(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void G2KurtosisOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void G2KurtosisOn(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetG1Skewness(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetG2Kurtosis(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetSignedDeviations(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetUnbiasedVariance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void IsA(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetG1Skewness(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetG2Kurtosis(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetSignedDeviations(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetUnbiasedVariance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SignedDeviationsOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SignedDeviationsOn(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void UnbiasedVarianceOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void UnbiasedVarianceOn(const Nan::FunctionCallbackInfo<v8::Value>& info);
};

#endif
