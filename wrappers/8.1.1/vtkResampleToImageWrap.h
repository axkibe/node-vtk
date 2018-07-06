/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKRESAMPLETOIMAGEWRAP_H
#define NATIVE_EXTENSION_VTK_VTKRESAMPLETOIMAGEWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkResampleToImage.h>

#include "vtkAlgorithmWrap.h"
#include "../../plus/plus.h"

class VtkResampleToImageWrap : public VtkAlgorithmWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitPtpl();
		static void ConstructorGetter(
			v8::Local<v8::String> property,
			const Nan::PropertyCallbackInfo<v8::Value>& info);

		VtkResampleToImageWrap(vtkSmartPointer<vtkResampleToImage>);
		VtkResampleToImageWrap();
		~VtkResampleToImageWrap( );
		static Nan::Persistent<v8::FunctionTemplate> ptpl;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void GetOutput(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetSamplingBounds(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetSamplingDimensions(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetUseInputBounds(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetSamplingBounds(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetSamplingDimensions(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetUseInputBounds(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void UseInputBoundsOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void UseInputBoundsOn(const Nan::FunctionCallbackInfo<v8::Value>& info);

#ifdef VTK_NODE_PLUS_VTKRESAMPLETOIMAGEWRAP_CLASSDEF
		VTK_NODE_PLUS_VTKRESAMPLETOIMAGEWRAP_CLASSDEF
#endif
};

#endif