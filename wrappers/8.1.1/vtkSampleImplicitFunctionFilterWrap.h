/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKSAMPLEIMPLICITFUNCTIONFILTERWRAP_H
#define NATIVE_EXTENSION_VTK_VTKSAMPLEIMPLICITFUNCTIONFILTERWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkSampleImplicitFunctionFilter.h>

#include "vtkDataSetAlgorithmWrap.h"
#include "../../plus/plus.h"

class VtkSampleImplicitFunctionFilterWrap : public VtkDataSetAlgorithmWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitPtpl();
		static void ConstructorGetter(
			v8::Local<v8::String> property,
			const Nan::PropertyCallbackInfo<v8::Value>& info);

		VtkSampleImplicitFunctionFilterWrap(vtkSmartPointer<vtkSampleImplicitFunctionFilter>);
		VtkSampleImplicitFunctionFilterWrap();
		~VtkSampleImplicitFunctionFilterWrap( );
		static Nan::Persistent<v8::FunctionTemplate> ptpl;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void ComputeGradientsOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void ComputeGradientsOn(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetComputeGradients(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetGradientArrayName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetImplicitFunction(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetScalarArrayName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetComputeGradients(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetGradientArrayName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetImplicitFunction(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetScalarArrayName(const Nan::FunctionCallbackInfo<v8::Value>& info);

#ifdef VTK_NODE_PLUS_VTKSAMPLEIMPLICITFUNCTIONFILTERWRAP_CLASSDEF
		VTK_NODE_PLUS_VTKSAMPLEIMPLICITFUNCTIONFILTERWRAP_CLASSDEF
#endif
};

#endif
