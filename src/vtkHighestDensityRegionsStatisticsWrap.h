/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKHIGHESTDENSITYREGIONSSTATISTICSWRAP_H
#define NATIVE_EXTENSION_VTK_VTKHIGHESTDENSITYREGIONSSTATISTICSWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkHighestDensityRegionsStatistics.h>

#include "vtkStatisticsAlgorithmWrap.h"

class VtkHighestDensityRegionsStatisticsWrap : public VtkStatisticsAlgorithmWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitTpl(v8::Local<v8::FunctionTemplate> tpl);

		VtkHighestDensityRegionsStatisticsWrap(vtkSmartPointer<vtkHighestDensityRegionsStatistics>);
		VtkHighestDensityRegionsStatisticsWrap();
		~VtkHighestDensityRegionsStatisticsWrap( );
		static Nan::Persistent<v8::Function> constructor;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void Aggregate(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void IsA(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetSigma(const Nan::FunctionCallbackInfo<v8::Value>& info);
};

#endif
