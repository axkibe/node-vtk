/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKPERLINNOISEWRAP_H
#define NATIVE_EXTENSION_VTK_VTKPERLINNOISEWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkPerlinNoise.h>

#include "vtkImplicitFunctionWrap.h"
#include "../../plus/plus.h"

class VtkPerlinNoiseWrap : public VtkImplicitFunctionWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitPtpl();
		static void ConstructorGetter(
			v8::Local<v8::String> property,
			const Nan::PropertyCallbackInfo<v8::Value>& info);

		VtkPerlinNoiseWrap(vtkSmartPointer<vtkPerlinNoise>);
		VtkPerlinNoiseWrap();
		~VtkPerlinNoiseWrap( );
		static Nan::Persistent<v8::FunctionTemplate> ptpl;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void EvaluateFunction(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void EvaluateGradient(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetAmplitude(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetFrequency(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetPhase(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void IsA(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetAmplitude(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetFrequency(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetPhase(const Nan::FunctionCallbackInfo<v8::Value>& info);

#ifdef VTK_NODE_PLUS_VTKPERLINNOISEWRAP_CLASSDEF
		VTK_NODE_PLUS_VTKPERLINNOISEWRAP_CLASSDEF
#endif
};

#endif
