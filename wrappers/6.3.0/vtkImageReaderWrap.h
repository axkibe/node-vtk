/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKIMAGEREADERWRAP_H
#define NATIVE_EXTENSION_VTK_VTKIMAGEREADERWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkImageReader.h>

#include "vtkImageReader2Wrap.h"
#include "../../plus/plus.h"

class VtkImageReaderWrap : public VtkImageReader2Wrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitPtpl();
		static void ConstructorGetter(
			v8::Local<v8::String> property,
			const Nan::PropertyCallbackInfo<v8::Value>& info);

		VtkImageReaderWrap(vtkSmartPointer<vtkImageReader>);
		VtkImageReaderWrap();
		~VtkImageReaderWrap( );
		static Nan::Persistent<v8::FunctionTemplate> ptpl;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void ComputeInverseTransformedExtent(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetDataVOI(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetScalarArrayName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetTransform(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void IsA(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void OpenAndSeekFile(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetDataVOI(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetScalarArrayName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetTransform(const Nan::FunctionCallbackInfo<v8::Value>& info);

#ifdef VTK_NODE_PLUS_VTKIMAGEREADERWRAP_CLASSDEF
		VTK_NODE_PLUS_VTKIMAGEREADERWRAP_CLASSDEF
#endif
};

#endif
