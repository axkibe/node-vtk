/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKTECPLOTREADERWRAP_H
#define NATIVE_EXTENSION_VTK_VTKTECPLOTREADERWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkTecplotReader.h>

#include "vtkMultiBlockDataSetAlgorithmWrap.h"
#include "../../plus/plus.h"

class VtkTecplotReaderWrap : public VtkMultiBlockDataSetAlgorithmWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitPtpl();
		static void ConstructorGetter(
			v8::Local<v8::String> property,
			const Nan::PropertyCallbackInfo<v8::Value>& info);

		VtkTecplotReaderWrap(vtkSmartPointer<vtkTecplotReader>);
		VtkTecplotReaderWrap();
		~VtkTecplotReaderWrap( );
		static Nan::Persistent<v8::FunctionTemplate> ptpl;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void GetBlockName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetDataArrayName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetDataArrayStatus(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetDataAttributeName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetDataTitle(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetNumberOfBlocks(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetNumberOfDataArrays(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetNumberOfDataAttributes(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetNumberOfVariables(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void IsA(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void IsDataAttributeCellBased(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetDataArrayStatus(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetFileName(const Nan::FunctionCallbackInfo<v8::Value>& info);

#ifdef VTK_NODE_PLUS_VTKTECPLOTREADERWRAP_CLASSDEF
		VTK_NODE_PLUS_VTKTECPLOTREADERWRAP_CLASSDEF
#endif
};

#endif
