/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKIMAGESEEDCONNECTIVITYWRAP_H
#define NATIVE_EXTENSION_VTK_VTKIMAGESEEDCONNECTIVITYWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkImageSeedConnectivity.h>

#include "vtkImageAlgorithmWrap.h"
#include "../../plus/plus.h"

class VtkImageSeedConnectivityWrap : public VtkImageAlgorithmWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitPtpl();
		static void ConstructorGetter(
			v8::Local<v8::String> property,
			const Nan::PropertyCallbackInfo<v8::Value>& info);

		VtkImageSeedConnectivityWrap(vtkSmartPointer<vtkImageSeedConnectivity>);
		VtkImageSeedConnectivityWrap();
		~VtkImageSeedConnectivityWrap( );
		static Nan::Persistent<v8::FunctionTemplate> ptpl;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void AddSeed(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetConnector(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetDimensionality(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetInputConnectValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetOutputConnectedValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetOutputUnconnectedValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void RemoveAllSeeds(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetDimensionality(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetInputConnectValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetOutputConnectedValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetOutputUnconnectedValue(const Nan::FunctionCallbackInfo<v8::Value>& info);

#ifdef VTK_NODE_PLUS_VTKIMAGESEEDCONNECTIVITYWRAP_CLASSDEF
		VTK_NODE_PLUS_VTKIMAGESEEDCONNECTIVITYWRAP_CLASSDEF
#endif
};

#endif
