/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKNEWICKTREEREADERWRAP_H
#define NATIVE_EXTENSION_VTK_VTKNEWICKTREEREADERWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkNewickTreeReader.h>

#include "vtkDataReaderWrap.h"
#include "../../plus/plus.h"

class VtkNewickTreeReaderWrap : public VtkDataReaderWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitPtpl();
		static void ConstructorGetter(
			v8::Local<v8::String> property,
			const Nan::PropertyCallbackInfo<v8::Value>& info);

		VtkNewickTreeReaderWrap(vtkSmartPointer<vtkNewickTreeReader>);
		VtkNewickTreeReaderWrap();
		~VtkNewickTreeReaderWrap( );
		static Nan::Persistent<v8::FunctionTemplate> ptpl;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void GetOutput(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetOutput(const Nan::FunctionCallbackInfo<v8::Value>& info);

#ifdef VTK_NODE_PLUS_VTKNEWICKTREEREADERWRAP_CLASSDEF
		VTK_NODE_PLUS_VTKNEWICKTREEREADERWRAP_CLASSDEF
#endif
};

#endif
