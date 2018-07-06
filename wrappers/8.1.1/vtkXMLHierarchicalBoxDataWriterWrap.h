/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKXMLHIERARCHICALBOXDATAWRITERWRAP_H
#define NATIVE_EXTENSION_VTK_VTKXMLHIERARCHICALBOXDATAWRITERWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkXMLHierarchicalBoxDataWriter.h>

#include "vtkXMLUniformGridAMRWriterWrap.h"
#include "../../plus/plus.h"

class VtkXMLHierarchicalBoxDataWriterWrap : public VtkXMLUniformGridAMRWriterWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitPtpl();
		static void ConstructorGetter(
			v8::Local<v8::String> property,
			const Nan::PropertyCallbackInfo<v8::Value>& info);

		VtkXMLHierarchicalBoxDataWriterWrap(vtkSmartPointer<vtkXMLHierarchicalBoxDataWriter>);
		VtkXMLHierarchicalBoxDataWriterWrap();
		~VtkXMLHierarchicalBoxDataWriterWrap( );
		static Nan::Persistent<v8::FunctionTemplate> ptpl;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void GetDefaultFileExtension(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);

#ifdef VTK_NODE_PLUS_VTKXMLHIERARCHICALBOXDATAWRITERWRAP_CLASSDEF
		VTK_NODE_PLUS_VTKXMLHIERARCHICALBOXDATAWRITERWRAP_CLASSDEF
#endif
};

#endif
