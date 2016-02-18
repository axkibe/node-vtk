/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKXMLFILEREADTESTERWRAP_H
#define NATIVE_EXTENSION_VTK_VTKXMLFILEREADTESTERWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkXMLFileReadTester.h>

#include "vtkXMLParserWrap.h"
#include "../../plus/plus.h"

class VtkXMLFileReadTesterWrap : public VtkXMLParserWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitPtpl();
		static void ConstructorGetter(
			v8::Local<v8::String> property,
			const Nan::PropertyCallbackInfo<v8::Value>& info);

		VtkXMLFileReadTesterWrap(vtkSmartPointer<vtkXMLFileReadTester>);
		VtkXMLFileReadTesterWrap();
		~VtkXMLFileReadTesterWrap( );
		static Nan::Persistent<v8::FunctionTemplate> ptpl;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetFileDataType(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetFileName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetFileVersion(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void IsA(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetFileName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void TestReadFile(const Nan::FunctionCallbackInfo<v8::Value>& info);

#ifdef VTK_NODE_PLUS_VTKXMLFILEREADTESTERWRAP_CLASSDEF
		VTK_NODE_PLUS_VTKXMLFILEREADTESTERWRAP_CLASSDEF
#endif
};

#endif
