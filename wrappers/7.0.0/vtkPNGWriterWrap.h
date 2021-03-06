/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKPNGWRITERWRAP_H
#define NATIVE_EXTENSION_VTK_VTKPNGWRITERWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkPNGWriter.h>

#include "vtkImageWriterWrap.h"
#include "../../plus/plus.h"

class VtkPNGWriterWrap : public VtkImageWriterWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitPtpl();
		static void ConstructorGetter(
			v8::Local<v8::String> property,
			const Nan::PropertyCallbackInfo<v8::Value>& info);

		VtkPNGWriterWrap(vtkSmartPointer<vtkPNGWriter>);
		VtkPNGWriterWrap();
		~VtkPNGWriterWrap( );
		static Nan::Persistent<v8::FunctionTemplate> ptpl;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetCompressionLevel(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetCompressionLevelMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetCompressionLevelMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetResult(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetWriteToMemory(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void IsA(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetCompressionLevel(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetResult(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetWriteToMemory(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void Write(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void WriteToMemoryOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void WriteToMemoryOn(const Nan::FunctionCallbackInfo<v8::Value>& info);

#ifdef VTK_NODE_PLUS_VTKPNGWRITERWRAP_CLASSDEF
		VTK_NODE_PLUS_VTKPNGWRITERWRAP_CLASSDEF
#endif
};

#endif
