/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKPOINTLOADWRAP_H
#define NATIVE_EXTENSION_VTK_VTKPOINTLOADWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkPointLoad.h>

#include "vtkImageAlgorithmWrap.h"

class VtkPointLoadWrap : public VtkImageAlgorithmWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitPtpl();
		static void ConstructorGetter(
			v8::Local<v8::String> property,
			const Nan::PropertyCallbackInfo<v8::Value>& info);

		VtkPointLoadWrap(vtkSmartPointer<vtkPointLoad>);
		VtkPointLoadWrap();
		~VtkPointLoadWrap( );
		static Nan::Persistent<v8::FunctionTemplate> ptpl;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void ComputeEffectiveStressOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void ComputeEffectiveStressOn(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetComputeEffectiveStress(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetLoadValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetModelBounds(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetPoissonsRatio(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetSampleDimensions(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void IsA(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetComputeEffectiveStress(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetLoadValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetModelBounds(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetPoissonsRatio(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetSampleDimensions(const Nan::FunctionCallbackInfo<v8::Value>& info);
};

#endif
