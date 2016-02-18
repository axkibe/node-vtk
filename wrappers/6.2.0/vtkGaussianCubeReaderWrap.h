/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKGAUSSIANCUBEREADERWRAP_H
#define NATIVE_EXTENSION_VTK_VTKGAUSSIANCUBEREADERWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkGaussianCubeReader.h>

#include "vtkMoleculeReaderBaseWrap.h"
#include "../../plus/plus.h"

class VtkGaussianCubeReaderWrap : public VtkMoleculeReaderBaseWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitPtpl();
		static void ConstructorGetter(
			v8::Local<v8::String> property,
			const Nan::PropertyCallbackInfo<v8::Value>& info);

		VtkGaussianCubeReaderWrap(vtkSmartPointer<vtkGaussianCubeReader>);
		VtkGaussianCubeReaderWrap();
		~VtkGaussianCubeReaderWrap( );
		static Nan::Persistent<v8::FunctionTemplate> ptpl;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetFileName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetGridOutput(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetTransform(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void IsA(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetFileName(const Nan::FunctionCallbackInfo<v8::Value>& info);

#ifdef VTK_NODE_PLUS_VTKGAUSSIANCUBEREADERWRAP_CLASSDEF
		VTK_NODE_PLUS_VTKGAUSSIANCUBEREADERWRAP_CLASSDEF
#endif
};

#endif
