/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKMNITRANSFORMWRITERWRAP_H
#define NATIVE_EXTENSION_VTK_VTKMNITRANSFORMWRITERWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkMNITransformWriter.h>

#include "vtkAlgorithmWrap.h"
#include "../../plus/plus.h"

class VtkMNITransformWriterWrap : public VtkAlgorithmWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitPtpl();
		static void ConstructorGetter(
			v8::Local<v8::String> property,
			const Nan::PropertyCallbackInfo<v8::Value>& info);

		VtkMNITransformWriterWrap(vtkSmartPointer<vtkMNITransformWriter>);
		VtkMNITransformWriterWrap();
		~VtkMNITransformWriterWrap( );
		static Nan::Persistent<v8::FunctionTemplate> ptpl;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void AddTransform(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetComments(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetDescriptiveName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetFileExtensions(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetFileName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetNumberOfTransforms(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetTransform(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetComments(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetFileName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetTransform(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void Write(const Nan::FunctionCallbackInfo<v8::Value>& info);

#ifdef VTK_NODE_PLUS_VTKMNITRANSFORMWRITERWRAP_CLASSDEF
		VTK_NODE_PLUS_VTKMNITRANSFORMWRITERWRAP_CLASSDEF
#endif
};

#endif
