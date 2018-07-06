/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKCELLDERIVATIVESWRAP_H
#define NATIVE_EXTENSION_VTK_VTKCELLDERIVATIVESWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkCellDerivatives.h>

#include "vtkDataSetAlgorithmWrap.h"
#include "../../plus/plus.h"

class VtkCellDerivativesWrap : public VtkDataSetAlgorithmWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitPtpl();
		static void ConstructorGetter(
			v8::Local<v8::String> property,
			const Nan::PropertyCallbackInfo<v8::Value>& info);

		VtkCellDerivativesWrap(vtkSmartPointer<vtkCellDerivatives>);
		VtkCellDerivativesWrap();
		~VtkCellDerivativesWrap( );
		static Nan::Persistent<v8::FunctionTemplate> ptpl;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void GetTensorMode(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetTensorModeAsString(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetVectorMode(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetVectorModeAsString(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetTensorMode(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetTensorModeToComputeGradient(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetTensorModeToComputeGreenLagrangeStrain(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetTensorModeToComputeStrain(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetTensorModeToPassTensors(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetVectorMode(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetVectorModeToComputeGradient(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetVectorModeToComputeVorticity(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetVectorModeToPassVectors(const Nan::FunctionCallbackInfo<v8::Value>& info);

#ifdef VTK_NODE_PLUS_VTKCELLDERIVATIVESWRAP_CLASSDEF
		VTK_NODE_PLUS_VTKCELLDERIVATIVESWRAP_CLASSDEF
#endif
};

#endif
