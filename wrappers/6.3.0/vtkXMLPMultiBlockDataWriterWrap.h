/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKXMLPMULTIBLOCKDATAWRITERWRAP_H
#define NATIVE_EXTENSION_VTK_VTKXMLPMULTIBLOCKDATAWRITERWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkXMLPMultiBlockDataWriter.h>

#include "vtkXMLMultiBlockDataWriterWrap.h"

class VtkXMLPMultiBlockDataWriterWrap : public VtkXMLMultiBlockDataWriterWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitPtpl();
		static void ConstructorGetter(
			v8::Local<v8::String> property,
			const Nan::PropertyCallbackInfo<v8::Value>& info);

		VtkXMLPMultiBlockDataWriterWrap(vtkSmartPointer<vtkXMLPMultiBlockDataWriter>);
		VtkXMLPMultiBlockDataWriterWrap();
		~VtkXMLPMultiBlockDataWriterWrap( );
		static Nan::Persistent<v8::FunctionTemplate> ptpl;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetController(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetNumberOfPieces(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetStartPiece(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void IsA(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetController(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetNumberOfPieces(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetStartPiece(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetWriteMetaFile(const Nan::FunctionCallbackInfo<v8::Value>& info);
};

#endif