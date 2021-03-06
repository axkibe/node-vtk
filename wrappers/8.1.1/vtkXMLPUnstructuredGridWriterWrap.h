/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKXMLPUNSTRUCTUREDGRIDWRITERWRAP_H
#define NATIVE_EXTENSION_VTK_VTKXMLPUNSTRUCTUREDGRIDWRITERWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkXMLPUnstructuredGridWriter.h>

#include "vtkXMLPUnstructuredDataWriterWrap.h"
#include "../../plus/plus.h"

class VtkXMLPUnstructuredGridWriterWrap : public VtkXMLPUnstructuredDataWriterWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitPtpl();
		static void ConstructorGetter(
			v8::Local<v8::String> property,
			const Nan::PropertyCallbackInfo<v8::Value>& info);

		VtkXMLPUnstructuredGridWriterWrap(vtkSmartPointer<vtkXMLPUnstructuredGridWriter>);
		VtkXMLPUnstructuredGridWriterWrap();
		~VtkXMLPUnstructuredGridWriterWrap( );
		static Nan::Persistent<v8::FunctionTemplate> ptpl;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void GetDefaultFileExtension(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetInput(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);

#ifdef VTK_NODE_PLUS_VTKXMLPUNSTRUCTUREDGRIDWRITERWRAP_CLASSDEF
		VTK_NODE_PLUS_VTKXMLPUNSTRUCTUREDGRIDWRITERWRAP_CLASSDEF
#endif
};

#endif
