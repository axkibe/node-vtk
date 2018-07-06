/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKEXTRACTVOIWRAP_H
#define NATIVE_EXTENSION_VTK_VTKEXTRACTVOIWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkExtractVOI.h>

#include "vtkImageAlgorithmWrap.h"
#include "../../plus/plus.h"

class VtkExtractVOIWrap : public VtkImageAlgorithmWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitPtpl();
		static void ConstructorGetter(
			v8::Local<v8::String> property,
			const Nan::PropertyCallbackInfo<v8::Value>& info);

		VtkExtractVOIWrap(vtkSmartPointer<vtkExtractVOI>);
		VtkExtractVOIWrap();
		~VtkExtractVOIWrap( );
		static Nan::Persistent<v8::FunctionTemplate> ptpl;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void GetIncludeBoundary(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetSampleRate(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetVOI(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void IncludeBoundaryOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void IncludeBoundaryOn(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetIncludeBoundary(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetSampleRate(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetVOI(const Nan::FunctionCallbackInfo<v8::Value>& info);

#ifdef VTK_NODE_PLUS_VTKEXTRACTVOIWRAP_CLASSDEF
		VTK_NODE_PLUS_VTKEXTRACTVOIWRAP_CLASSDEF
#endif
};

#endif
