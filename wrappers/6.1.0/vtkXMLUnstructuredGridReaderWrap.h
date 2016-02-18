/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKXMLUNSTRUCTUREDGRIDREADERWRAP_H
#define NATIVE_EXTENSION_VTK_VTKXMLUNSTRUCTUREDGRIDREADERWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkXMLUnstructuredGridReader.h>

#include "vtkXMLUnstructuredDataReaderWrap.h"
#include "../../plus/plus.h"

class VtkXMLUnstructuredGridReaderWrap : public VtkXMLUnstructuredDataReaderWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitPtpl();
		static void ConstructorGetter(
			v8::Local<v8::String> property,
			const Nan::PropertyCallbackInfo<v8::Value>& info);

		VtkXMLUnstructuredGridReaderWrap(vtkSmartPointer<vtkXMLUnstructuredGridReader>);
		VtkXMLUnstructuredGridReaderWrap();
		~VtkXMLUnstructuredGridReaderWrap( );
		static Nan::Persistent<v8::FunctionTemplate> ptpl;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetOutput(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void IsA(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);

#ifdef VTK_NODE_PLUS_VTKXMLUNSTRUCTUREDGRIDREADERWRAP_CLASSDEF
		VTK_NODE_PLUS_VTKXMLUNSTRUCTUREDGRIDREADERWRAP_CLASSDEF
#endif
};

#endif
