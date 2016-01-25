/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKPNGWRITERWRAP_H
#define NATIVE_EXTENSION_VTK_VTKPNGWRITERWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkPNGWriter.h>

#include "vtkImageWriterWrap.h"

class VtkPNGWriterWrap : public VtkImageWriterWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitTpl(v8::Local<v8::FunctionTemplate> tpl);

		VtkPNGWriterWrap(vtkSmartPointer<vtkPNGWriter>);
		VtkPNGWriterWrap();
		~VtkPNGWriterWrap( );
		static Nan::Persistent<v8::Function> constructor;
		static Nan::Persistent<v8::FunctionTemplate> ptpl;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetCompressionLevel(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetCompressionLevelMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetCompressionLevelMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetResult(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void IsA(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetCompressionLevel(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetResult(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void Write(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void WriteToMemoryOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void WriteToMemoryOn(const Nan::FunctionCallbackInfo<v8::Value>& info);
};

#endif
