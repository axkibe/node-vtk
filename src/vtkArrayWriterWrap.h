/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKARRAYWRITERWRAP_H
#define NATIVE_EXTENSION_VTK_VTKARRAYWRITERWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkArrayWriter.h>

#include "vtkWriterWrap.h"

class VtkArrayWriterWrap : public VtkWriterWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitTpl(v8::Local<v8::FunctionTemplate> tpl);

		VtkArrayWriterWrap(vtkSmartPointer<vtkArrayWriter>);
		VtkArrayWriterWrap();
		~VtkArrayWriterWrap( );
		static Nan::Persistent<v8::Function> constructor;
		static Nan::Persistent<v8::FunctionTemplate> ptpl;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void BinaryOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void BinaryOn(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetBinary(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetFileName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void IsA(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetBinary(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetFileName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void Write(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void WriteToOutputStringOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void WriteToOutputStringOn(const Nan::FunctionCallbackInfo<v8::Value>& info);
};

#endif