/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKFIXEDWIDTHTEXTREADERWRAP_H
#define NATIVE_EXTENSION_VTK_VTKFIXEDWIDTHTEXTREADERWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkFixedWidthTextReader.h>

#include "vtkTableAlgorithmWrap.h"

class VtkFixedWidthTextReaderWrap : public VtkTableAlgorithmWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitTpl(v8::Local<v8::FunctionTemplate> tpl);

		VtkFixedWidthTextReaderWrap(vtkSmartPointer<vtkFixedWidthTextReader>);
		VtkFixedWidthTextReaderWrap();
		~VtkFixedWidthTextReaderWrap( );
		static Nan::Persistent<v8::Function> constructor;
		static Nan::Persistent<v8::FunctionTemplate> ptpl;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetFieldWidth(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetFileName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void HaveHeadersOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void HaveHeadersOn(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void IsA(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetFieldWidth(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetFileName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void StripWhiteSpaceOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void StripWhiteSpaceOn(const Nan::FunctionCallbackInfo<v8::Value>& info);
};

#endif