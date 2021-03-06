/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKBOXCLIPDATASETWRAP_H
#define NATIVE_EXTENSION_VTK_VTKBOXCLIPDATASETWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkBoxClipDataSet.h>

#include "vtkUnstructuredGridAlgorithmWrap.h"
#include "../../plus/plus.h"

class VtkBoxClipDataSetWrap : public VtkUnstructuredGridAlgorithmWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitPtpl();
		static void ConstructorGetter(
			v8::Local<v8::String> property,
			const Nan::PropertyCallbackInfo<v8::Value>& info);

		VtkBoxClipDataSetWrap(vtkSmartPointer<vtkBoxClipDataSet>);
		VtkBoxClipDataSetWrap();
		~VtkBoxClipDataSetWrap( );
		static Nan::Persistent<v8::FunctionTemplate> ptpl;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void CreateDefaultLocator(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GenerateClipScalarsOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GenerateClipScalarsOn(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GenerateClippedOutputOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GenerateClippedOutputOn(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetClippedOutput(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetGenerateClipScalars(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetGenerateClippedOutput(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetLocator(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetMTime(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetNumberOfOutputs(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetOrientation(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void IsA(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetBoxClip(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetGenerateClipScalars(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetGenerateClippedOutput(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetLocator(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetOrientation(const Nan::FunctionCallbackInfo<v8::Value>& info);

#ifdef VTK_NODE_PLUS_VTKBOXCLIPDATASETWRAP_CLASSDEF
		VTK_NODE_PLUS_VTKBOXCLIPDATASETWRAP_CLASSDEF
#endif
};

#endif
