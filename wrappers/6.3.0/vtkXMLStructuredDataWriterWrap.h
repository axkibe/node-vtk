/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKXMLSTRUCTUREDDATAWRITERWRAP_H
#define NATIVE_EXTENSION_VTK_VTKXMLSTRUCTUREDDATAWRITERWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkXMLStructuredDataWriter.h>

#include "vtkXMLWriterWrap.h"

class VtkXMLStructuredDataWriterWrap : public VtkXMLWriterWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitPtpl();
		static void ConstructorGetter(
			v8::Local<v8::String> property,
			const Nan::PropertyCallbackInfo<v8::Value>& info);

		VtkXMLStructuredDataWriterWrap(vtkSmartPointer<vtkXMLStructuredDataWriter>);
		VtkXMLStructuredDataWriterWrap();
		~VtkXMLStructuredDataWriterWrap( );
		static Nan::Persistent<v8::FunctionTemplate> ptpl;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetGhostLevel(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetNumberOfPieces(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetWritePiece(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void IsA(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetGhostLevel(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetNumberOfPieces(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetWriteExtent(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetWritePiece(const Nan::FunctionCallbackInfo<v8::Value>& info);
};

#endif