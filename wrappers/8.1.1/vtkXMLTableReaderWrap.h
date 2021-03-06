/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKXMLTABLEREADERWRAP_H
#define NATIVE_EXTENSION_VTK_VTKXMLTABLEREADERWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkXMLTableReader.h>

#include "vtkXMLReaderWrap.h"
#include "../../plus/plus.h"

class VtkXMLTableReaderWrap : public VtkXMLReaderWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitPtpl();
		static void ConstructorGetter(
			v8::Local<v8::String> property,
			const Nan::PropertyCallbackInfo<v8::Value>& info);

		VtkXMLTableReaderWrap(vtkSmartPointer<vtkXMLTableReader>);
		VtkXMLTableReaderWrap();
		~VtkXMLTableReaderWrap( );
		static Nan::Persistent<v8::FunctionTemplate> ptpl;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void CopyOutputInformation(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetOutput(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetupUpdateExtent(const Nan::FunctionCallbackInfo<v8::Value>& info);

#ifdef VTK_NODE_PLUS_VTKXMLTABLEREADERWRAP_CLASSDEF
		VTK_NODE_PLUS_VTKXMLTABLEREADERWRAP_CLASSDEF
#endif
};

#endif
