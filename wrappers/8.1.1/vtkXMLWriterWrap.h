/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKXMLWRITERWRAP_H
#define NATIVE_EXTENSION_VTK_VTKXMLWRITERWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkXMLWriter.h>

#include "vtkAlgorithmWrap.h"
#include "../../plus/plus.h"

class VtkXMLWriterWrap : public VtkAlgorithmWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitPtpl();
		static void ConstructorGetter(
			v8::Local<v8::String> property,
			const Nan::PropertyCallbackInfo<v8::Value>& info);

		VtkXMLWriterWrap(vtkSmartPointer<vtkXMLWriter>);
		VtkXMLWriterWrap();
		~VtkXMLWriterWrap( );
		static Nan::Persistent<v8::FunctionTemplate> ptpl;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void EncodeAppendedDataOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void EncodeAppendedDataOn(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetByteOrder(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetCompressor(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetDataMode(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetEncodeAppendedData(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetFileName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetHeaderType(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetIdType(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetInput(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetNumberOfTimeSteps(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetWriteToOutputString(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetByteOrder(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetByteOrderToBigEndian(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetByteOrderToLittleEndian(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetCompressor(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetCompressorType(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetCompressorTypeToLZ4(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetCompressorTypeToNone(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetCompressorTypeToZLib(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetDataMode(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetDataModeToAppended(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetDataModeToAscii(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetDataModeToBinary(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetEncodeAppendedData(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetFileName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetHeaderType(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetHeaderTypeToUInt32(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetHeaderTypeToUInt64(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetIdType(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetIdTypeToInt32(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetIdTypeToInt64(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetInputData(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetNumberOfTimeSteps(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetWriteToOutputString(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void Start(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void Stop(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void Write(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void WriteNextTime(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void WriteToOutputStringOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void WriteToOutputStringOn(const Nan::FunctionCallbackInfo<v8::Value>& info);

#ifdef VTK_NODE_PLUS_VTKXMLWRITERWRAP_CLASSDEF
		VTK_NODE_PLUS_VTKXMLWRITERWRAP_CLASSDEF
#endif
};

#endif
