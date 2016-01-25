/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKPERLINNOISEWRAP_H
#define NATIVE_EXTENSION_VTK_VTKPERLINNOISEWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkPerlinNoise.h>

#include "vtkImplicitFunctionWrap.h"

class VtkPerlinNoiseWrap : public VtkImplicitFunctionWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitTpl(v8::Local<v8::FunctionTemplate> tpl);

		VtkPerlinNoiseWrap(vtkSmartPointer<vtkPerlinNoise>);
		VtkPerlinNoiseWrap();
		~VtkPerlinNoiseWrap( );
		static Nan::Persistent<v8::Function> constructor;
		static Nan::Persistent<v8::FunctionTemplate> ptpl;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void EvaluateFunction(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetAmplitude(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void IsA(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetAmplitude(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetFrequency(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetPhase(const Nan::FunctionCallbackInfo<v8::Value>& info);
};

#endif