/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKGAMBITREADERWRAP_H
#define NATIVE_EXTENSION_VTK_VTKGAMBITREADERWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkGAMBITReader.h>

#include "vtkUnstructuredGridAlgorithmWrap.h"
#include "../../plus/plus.h"

class VtkGAMBITReaderWrap : public VtkUnstructuredGridAlgorithmWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitPtpl();
		static void ConstructorGetter(
			v8::Local<v8::String> property,
			const Nan::PropertyCallbackInfo<v8::Value>& info);

		VtkGAMBITReaderWrap(vtkSmartPointer<vtkGAMBITReader>);
		VtkGAMBITReaderWrap();
		~VtkGAMBITReaderWrap( );
		static Nan::Persistent<v8::FunctionTemplate> ptpl;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void GetFileName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetNumberOfCellFields(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetNumberOfCells(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetNumberOfNodeFields(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetNumberOfNodes(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetFileName(const Nan::FunctionCallbackInfo<v8::Value>& info);

#ifdef VTK_NODE_PLUS_VTKGAMBITREADERWRAP_CLASSDEF
		VTK_NODE_PLUS_VTKGAMBITREADERWRAP_CLASSDEF
#endif
};

#endif
