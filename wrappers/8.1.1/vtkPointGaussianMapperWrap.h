/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKPOINTGAUSSIANMAPPERWRAP_H
#define NATIVE_EXTENSION_VTK_VTKPOINTGAUSSIANMAPPERWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkPointGaussianMapper.h>

#include "vtkPolyDataMapperWrap.h"
#include "../../plus/plus.h"

class VtkPointGaussianMapperWrap : public VtkPolyDataMapperWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitPtpl();
		static void ConstructorGetter(
			v8::Local<v8::String> property,
			const Nan::PropertyCallbackInfo<v8::Value>& info);

		VtkPointGaussianMapperWrap(vtkSmartPointer<vtkPointGaussianMapper>);
		VtkPointGaussianMapperWrap();
		~VtkPointGaussianMapperWrap( );
		static Nan::Persistent<v8::FunctionTemplate> ptpl;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void EmissiveOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void EmissiveOn(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetEmissive(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetOpacityArray(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetOpacityArrayComponent(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetOpacityTableSize(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetScalarOpacityFunction(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetScaleArray(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetScaleArrayComponent(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetScaleFactor(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetScaleFunction(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetScaleTableSize(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetSplatShaderCode(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetTriangleScale(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetEmissive(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetOpacityArray(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetOpacityArrayComponent(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetOpacityTableSize(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetScalarOpacityFunction(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetScaleArray(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetScaleArrayComponent(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetScaleFactor(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetScaleFunction(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetScaleTableSize(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetSplatShaderCode(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetTriangleScale(const Nan::FunctionCallbackInfo<v8::Value>& info);

#ifdef VTK_NODE_PLUS_VTKPOINTGAUSSIANMAPPERWRAP_CLASSDEF
		VTK_NODE_PLUS_VTKPOINTGAUSSIANMAPPERWRAP_CLASSDEF
#endif
};

#endif
