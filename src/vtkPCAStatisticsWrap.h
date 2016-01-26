/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKPCASTATISTICSWRAP_H
#define NATIVE_EXTENSION_VTK_VTKPCASTATISTICSWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkPCAStatistics.h>

#include "vtkMultiCorrelativeStatisticsWrap.h"

class VtkPCAStatisticsWrap : public VtkMultiCorrelativeStatisticsWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitPtpl();
		static void ConstructorGetter(
			v8::Local<v8::String> property,
			const Nan::PropertyCallbackInfo<v8::Value>& info);

		VtkPCAStatisticsWrap(vtkSmartPointer<vtkPCAStatistics>);
		VtkPCAStatisticsWrap();
		~VtkPCAStatisticsWrap( );
		static Nan::Persistent<v8::Function> constructor;
		static Nan::Persistent<v8::FunctionTemplate> ptpl;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void GetBasisScheme(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetBasisSchemeName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetEigenvalue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetEigenvalues(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetEigenvector(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetEigenvectors(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetFixedBasisEnergy(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetFixedBasisEnergyMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetFixedBasisEnergyMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetFixedBasisSize(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetNormalizationScheme(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetNormalizationSchemeName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetSpecifiedNormalization(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void IsA(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetBasisScheme(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetBasisSchemeByName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetFixedBasisEnergy(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetFixedBasisSize(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetNormalizationScheme(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetNormalizationSchemeByName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetSpecifiedNormalization(const Nan::FunctionCallbackInfo<v8::Value>& info);
};

#endif
