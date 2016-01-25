/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKXMLPUNIFORMGRIDAMRWRITERWRAP_H
#define NATIVE_EXTENSION_VTK_VTKXMLPUNIFORMGRIDAMRWRITERWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkXMLPUniformGridAMRWriter.h>

#include "vtkXMLUniformGridAMRWriterWrap.h"

class VtkXMLPUniformGridAMRWriterWrap : public VtkXMLUniformGridAMRWriterWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitTpl(v8::Local<v8::FunctionTemplate> tpl);

		VtkXMLPUniformGridAMRWriterWrap(vtkSmartPointer<vtkXMLPUniformGridAMRWriter>);
		VtkXMLPUniformGridAMRWriterWrap();
		~VtkXMLPUniformGridAMRWriterWrap( );
		static Nan::Persistent<v8::Function> constructor;
		static Nan::Persistent<v8::FunctionTemplate> ptpl;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetController(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void IsA(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetController(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetWriteMetaFile(const Nan::FunctionCallbackInfo<v8::Value>& info);
};

#endif
