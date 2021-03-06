/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKHIGHESTDENSITYREGIONSSTATISTICSWRAP_H
#define NATIVE_EXTENSION_VTK_VTKHIGHESTDENSITYREGIONSSTATISTICSWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkHighestDensityRegionsStatistics.h>

#include "vtkStatisticsAlgorithmWrap.h"
#include "../../plus/plus.h"

class VtkHighestDensityRegionsStatisticsWrap : public VtkStatisticsAlgorithmWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitPtpl();
		static void ConstructorGetter(
			v8::Local<v8::String> property,
			const Nan::PropertyCallbackInfo<v8::Value>& info);

		VtkHighestDensityRegionsStatisticsWrap(vtkSmartPointer<vtkHighestDensityRegionsStatistics>);
		VtkHighestDensityRegionsStatisticsWrap();
		~VtkHighestDensityRegionsStatisticsWrap( );
		static Nan::Persistent<v8::FunctionTemplate> ptpl;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void Aggregate(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void ComputeHDR(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetSigma(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetSigmaMatrix(const Nan::FunctionCallbackInfo<v8::Value>& info);

#ifdef VTK_NODE_PLUS_VTKHIGHESTDENSITYREGIONSSTATISTICSWRAP_CLASSDEF
		VTK_NODE_PLUS_VTKHIGHESTDENSITYREGIONSSTATISTICSWRAP_CLASSDEF
#endif
};

#endif
