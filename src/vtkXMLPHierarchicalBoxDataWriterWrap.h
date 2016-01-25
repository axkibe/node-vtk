/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKXMLPHIERARCHICALBOXDATAWRITERWRAP_H
#define NATIVE_EXTENSION_VTK_VTKXMLPHIERARCHICALBOXDATAWRITERWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkXMLPHierarchicalBoxDataWriter.h>

#include "vtkXMLPUniformGridAMRWriterWrap.h"

class VtkXMLPHierarchicalBoxDataWriterWrap : public VtkXMLPUniformGridAMRWriterWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitTpl(v8::Local<v8::FunctionTemplate> tpl);

		VtkXMLPHierarchicalBoxDataWriterWrap(vtkSmartPointer<vtkXMLPHierarchicalBoxDataWriter>);
		VtkXMLPHierarchicalBoxDataWriterWrap();
		~VtkXMLPHierarchicalBoxDataWriterWrap( );
		static Nan::Persistent<v8::Function> constructor;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void IsA(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);
};

#endif
