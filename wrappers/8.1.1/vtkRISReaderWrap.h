/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKRISREADERWRAP_H
#define NATIVE_EXTENSION_VTK_VTKRISREADERWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkRISReader.h>

#include "vtkTableAlgorithmWrap.h"
#include "../../plus/plus.h"

class VtkRISReaderWrap : public VtkTableAlgorithmWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitPtpl();
		static void ConstructorGetter(
			v8::Local<v8::String> property,
			const Nan::PropertyCallbackInfo<v8::Value>& info);

		VtkRISReaderWrap(vtkSmartPointer<vtkRISReader>);
		VtkRISReaderWrap();
		~VtkRISReaderWrap( );
		static Nan::Persistent<v8::FunctionTemplate> ptpl;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void GetDelimiter(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetFileName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetMaxRecords(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetDelimiter(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetFileName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetMaxRecords(const Nan::FunctionCallbackInfo<v8::Value>& info);

#ifdef VTK_NODE_PLUS_VTKRISREADERWRAP_CLASSDEF
		VTK_NODE_PLUS_VTKRISREADERWRAP_CLASSDEF
#endif
};

#endif
