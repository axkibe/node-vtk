/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKDATASETREADERWRAP_H
#define NATIVE_EXTENSION_VTK_VTKDATASETREADERWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkDataSetReader.h>

#include "vtkDataReaderWrap.h"

class VtkDataSetReaderWrap : public VtkDataReaderWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitTpl(v8::Local<v8::FunctionTemplate> tpl);

		VtkDataSetReaderWrap(vtkSmartPointer<vtkDataSetReader>);
		VtkDataSetReaderWrap();
		~VtkDataSetReaderWrap( );
		static Nan::Persistent<v8::Function> constructor;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetOutput(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetPolyDataOutput(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetRectilinearGridOutput(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetStructuredGridOutput(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetStructuredPointsOutput(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetUnstructuredGridOutput(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void IsA(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void ReadOutputType(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);
};

#endif
