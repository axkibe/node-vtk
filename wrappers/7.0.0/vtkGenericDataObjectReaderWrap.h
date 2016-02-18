/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKGENERICDATAOBJECTREADERWRAP_H
#define NATIVE_EXTENSION_VTK_VTKGENERICDATAOBJECTREADERWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkGenericDataObjectReader.h>

#include "vtkDataReaderWrap.h"
#include "../../plus/plus.h"

class VtkGenericDataObjectReaderWrap : public VtkDataReaderWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitPtpl();
		static void ConstructorGetter(
			v8::Local<v8::String> property,
			const Nan::PropertyCallbackInfo<v8::Value>& info);

		VtkGenericDataObjectReaderWrap(vtkSmartPointer<vtkGenericDataObjectReader>);
		VtkGenericDataObjectReaderWrap();
		~VtkGenericDataObjectReaderWrap( );
		static Nan::Persistent<v8::FunctionTemplate> ptpl;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetGraphOutput(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetOutput(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetPolyDataOutput(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetRectilinearGridOutput(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetStructuredGridOutput(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetStructuredPointsOutput(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetTableOutput(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetTreeOutput(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetUnstructuredGridOutput(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void IsA(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void ReadOutputType(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);

#ifdef VTK_NODE_PLUS_VTKGENERICDATAOBJECTREADERWRAP_CLASSDEF
		VTK_NODE_PLUS_VTKGENERICDATAOBJECTREADERWRAP_CLASSDEF
#endif
};

#endif
