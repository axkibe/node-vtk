/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKJPEGWRITERWRAP_H
#define NATIVE_EXTENSION_VTK_VTKJPEGWRITERWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkJPEGWriter.h>

#include "vtkImageWriterWrap.h"
#include "../../plus/plus.h"

class VtkJPEGWriterWrap : public VtkImageWriterWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitPtpl();
		static void ConstructorGetter(
			v8::Local<v8::String> property,
			const Nan::PropertyCallbackInfo<v8::Value>& info);

		VtkJPEGWriterWrap(vtkSmartPointer<vtkJPEGWriter>);
		VtkJPEGWriterWrap();
		~VtkJPEGWriterWrap( );
		static Nan::Persistent<v8::FunctionTemplate> ptpl;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void GetProgressive(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetQuality(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetQualityMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetQualityMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetResult(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetWriteToMemory(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void ProgressiveOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void ProgressiveOn(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetProgressive(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetQuality(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetResult(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetWriteToMemory(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void Write(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void WriteToMemoryOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void WriteToMemoryOn(const Nan::FunctionCallbackInfo<v8::Value>& info);

#ifdef VTK_NODE_PLUS_VTKJPEGWRITERWRAP_CLASSDEF
		VTK_NODE_PLUS_VTKJPEGWRITERWRAP_CLASSDEF
#endif
};

#endif
