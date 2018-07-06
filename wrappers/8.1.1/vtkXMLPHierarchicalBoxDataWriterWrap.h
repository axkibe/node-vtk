/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKXMLPHIERARCHICALBOXDATAWRITERWRAP_H
#define NATIVE_EXTENSION_VTK_VTKXMLPHIERARCHICALBOXDATAWRITERWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkXMLPHierarchicalBoxDataWriter.h>

#include "vtkXMLPUniformGridAMRWriterWrap.h"
#include "../../plus/plus.h"

class VtkXMLPHierarchicalBoxDataWriterWrap : public VtkXMLPUniformGridAMRWriterWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitPtpl();
		static void ConstructorGetter(
			v8::Local<v8::String> property,
			const Nan::PropertyCallbackInfo<v8::Value>& info);

		VtkXMLPHierarchicalBoxDataWriterWrap(vtkSmartPointer<vtkXMLPHierarchicalBoxDataWriter>);
		VtkXMLPHierarchicalBoxDataWriterWrap();
		~VtkXMLPHierarchicalBoxDataWriterWrap( );
		static Nan::Persistent<v8::FunctionTemplate> ptpl;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);

#ifdef VTK_NODE_PLUS_VTKXMLPHIERARCHICALBOXDATAWRITERWRAP_CLASSDEF
		VTK_NODE_PLUS_VTKXMLPHIERARCHICALBOXDATAWRITERWRAP_CLASSDEF
#endif
};

#endif
