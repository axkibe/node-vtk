/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKKMEANSSTATISTICSWRAP_H
#define NATIVE_EXTENSION_VTK_VTKKMEANSSTATISTICSWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkKMeansStatistics.h>

#include "vtkStatisticsAlgorithmWrap.h"

class VtkKMeansStatisticsWrap : public VtkStatisticsAlgorithmWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitPtpl();
		static void ConstructorGetter(
			v8::Local<v8::String> property,
			const Nan::PropertyCallbackInfo<v8::Value>& info);

		VtkKMeansStatisticsWrap(vtkSmartPointer<vtkKMeansStatistics>);
		VtkKMeansStatisticsWrap();
		~VtkKMeansStatisticsWrap( );
		static Nan::Persistent<v8::Function> constructor;
		static Nan::Persistent<v8::FunctionTemplate> ptpl;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void Aggregate(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetDefaultNumberOfClusters(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetDistanceFunctor(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetKValuesArrayName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetMaxNumIterations(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetTolerance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void IsA(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetDefaultNumberOfClusters(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetDistanceFunctor(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetKValuesArrayName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetMaxNumIterations(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetTolerance(const Nan::FunctionCallbackInfo<v8::Value>& info);
};

#endif
