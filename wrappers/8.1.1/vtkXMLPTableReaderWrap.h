/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKXMLPTABLEREADERWRAP_H
#define NATIVE_EXTENSION_VTK_VTKXMLPTABLEREADERWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkXMLPTableReader.h>

#include "vtkXMLPDataObjectReaderWrap.h"
#include "../../plus/plus.h"

class VtkXMLPTableReaderWrap : public VtkXMLPDataObjectReaderWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitPtpl();
		static void ConstructorGetter(
			v8::Local<v8::String> property,
			const Nan::PropertyCallbackInfo<v8::Value>& info);

		VtkXMLPTableReaderWrap(vtkSmartPointer<vtkXMLPTableReader>);
		VtkXMLPTableReaderWrap();
		~VtkXMLPTableReaderWrap( );
		static Nan::Persistent<v8::FunctionTemplate> ptpl;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void CopyOutputInformation(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetColumnArrayName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetColumnArrayStatus(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetColumnSelection(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetNumberOfColumnArrays(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetOutput(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetColumnArrayStatus(const Nan::FunctionCallbackInfo<v8::Value>& info);

#ifdef VTK_NODE_PLUS_VTKXMLPTABLEREADERWRAP_CLASSDEF
		VTK_NODE_PLUS_VTKXMLPTABLEREADERWRAP_CLASSDEF
#endif
};

#endif
