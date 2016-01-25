/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKTIFFWRITERWRAP_H
#define NATIVE_EXTENSION_VTK_VTKTIFFWRITERWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkTIFFWriter.h>

#include "vtkImageWriterWrap.h"

class VtkTIFFWriterWrap : public VtkImageWriterWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitTpl(v8::Local<v8::FunctionTemplate> tpl);

		VtkTIFFWriterWrap(vtkSmartPointer<vtkTIFFWriter>);
		VtkTIFFWriterWrap();
		~VtkTIFFWriterWrap( );
		static Nan::Persistent<v8::Function> constructor;
		static Nan::Persistent<v8::FunctionTemplate> ptpl;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetCompression(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetCompressionMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetCompressionMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void IsA(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetCompression(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetCompressionToDeflate(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetCompressionToJPEG(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetCompressionToLZW(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetCompressionToNoCompression(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetCompressionToPackBits(const Nan::FunctionCallbackInfo<v8::Value>& info);
};

#endif
