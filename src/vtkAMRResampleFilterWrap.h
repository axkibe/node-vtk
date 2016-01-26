/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKAMRRESAMPLEFILTERWRAP_H
#define NATIVE_EXTENSION_VTK_VTKAMRRESAMPLEFILTERWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkAMRResampleFilter.h>

#include "vtkMultiBlockDataSetAlgorithmWrap.h"

class VtkAMRResampleFilterWrap : public VtkMultiBlockDataSetAlgorithmWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitPtpl();
		static void ConstructorGetter(
			v8::Local<v8::String> property,
			const Nan::PropertyCallbackInfo<v8::Value>& info);

		VtkAMRResampleFilterWrap(vtkSmartPointer<vtkAMRResampleFilter>);
		VtkAMRResampleFilterWrap();
		~VtkAMRResampleFilterWrap( );
		static Nan::Persistent<v8::Function> constructor;
		static Nan::Persistent<v8::FunctionTemplate> ptpl;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void FillInputPortInformation(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void FillOutputPortInformation(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetController(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetDemandDrivenMode(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetNumberOfPartitions(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetTransferToNodes(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void IsA(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetBiasVector(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetController(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetDemandDrivenMode(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetMax(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetMin(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetNumberOfPartitions(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetNumberOfSamples(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetTransferToNodes(const Nan::FunctionCallbackInfo<v8::Value>& info);
};

#endif
