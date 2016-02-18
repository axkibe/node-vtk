/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKPDATASETWRITERWRAP_H
#define NATIVE_EXTENSION_VTK_VTKPDATASETWRITERWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkPDataSetWriter.h>

#include "vtkDataSetWriterWrap.h"
#include "../../plus/plus.h"

class VtkPDataSetWriterWrap : public VtkDataSetWriterWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitPtpl();
		static void ConstructorGetter(
			v8::Local<v8::String> property,
			const Nan::PropertyCallbackInfo<v8::Value>& info);

		VtkPDataSetWriterWrap(vtkSmartPointer<vtkPDataSetWriter>);
		VtkPDataSetWriterWrap();
		~VtkPDataSetWriterWrap( );
		static Nan::Persistent<v8::FunctionTemplate> ptpl;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetEndPiece(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetFilePattern(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetGhostLevel(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetNumberOfPieces(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetStartPiece(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetUseRelativeFileNames(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void IsA(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetEndPiece(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetFilePattern(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetGhostLevel(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetNumberOfPieces(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetStartPiece(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetUseRelativeFileNames(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void UseRelativeFileNamesOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void UseRelativeFileNamesOn(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void Write(const Nan::FunctionCallbackInfo<v8::Value>& info);

#ifdef VTK_NODE_PLUS_VTKPDATASETWRITERWRAP_CLASSDEF
		VTK_NODE_PLUS_VTKPDATASETWRITERWRAP_CLASSDEF
#endif
};

#endif
