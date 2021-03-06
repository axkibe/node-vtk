/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKTREEREADERWRAP_H
#define NATIVE_EXTENSION_VTK_VTKTREEREADERWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkTreeReader.h>

#include "vtkDataReaderWrap.h"
#include "../../plus/plus.h"

class VtkTreeReaderWrap : public VtkDataReaderWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitPtpl();
		static void ConstructorGetter(
			v8::Local<v8::String> property,
			const Nan::PropertyCallbackInfo<v8::Value>& info);

		VtkTreeReaderWrap(vtkSmartPointer<vtkTreeReader>);
		VtkTreeReaderWrap();
		~VtkTreeReaderWrap( );
		static Nan::Persistent<v8::FunctionTemplate> ptpl;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void GetOutput(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetOutput(const Nan::FunctionCallbackInfo<v8::Value>& info);

#ifdef VTK_NODE_PLUS_VTKTREEREADERWRAP_CLASSDEF
		VTK_NODE_PLUS_VTKTREEREADERWRAP_CLASSDEF
#endif
};

#endif
