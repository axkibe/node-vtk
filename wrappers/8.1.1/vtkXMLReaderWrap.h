/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKXMLREADERWRAP_H
#define NATIVE_EXTENSION_VTK_VTKXMLREADERWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkXMLReader.h>

#include "vtkAlgorithmWrap.h"
#include "../../plus/plus.h"

class VtkXMLReaderWrap : public VtkAlgorithmWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitPtpl();
		static void ConstructorGetter(
			v8::Local<v8::String> property,
			const Nan::PropertyCallbackInfo<v8::Value>& info);

		VtkXMLReaderWrap(vtkSmartPointer<vtkXMLReader>);
		VtkXMLReaderWrap();
		~VtkXMLReaderWrap( );
		static Nan::Persistent<v8::FunctionTemplate> ptpl;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void CanReadFile(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void CopyOutputInformation(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetCellArrayName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetCellArrayStatus(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetCellDataArraySelection(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetColumnArrayName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetColumnArraySelection(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetColumnArrayStatus(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetFileName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetNumberOfCellArrays(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetNumberOfColumnArrays(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetNumberOfPointArrays(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetNumberOfTimeSteps(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetOutputAsDataSet(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetParserErrorObserver(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetPointArrayName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetPointArrayStatus(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetPointDataArraySelection(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetReadFromInputString(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetReaderErrorObserver(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetTimeStep(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetTimeStepRange(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetXMLParser(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void ReadFromInputStringOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void ReadFromInputStringOn(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetCellArrayStatus(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetColumnArrayStatus(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetFileName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetParserErrorObserver(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetPointArrayStatus(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetReadFromInputString(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetReaderErrorObserver(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetTimeStep(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetTimeStepRange(const Nan::FunctionCallbackInfo<v8::Value>& info);

#ifdef VTK_NODE_PLUS_VTKXMLREADERWRAP_CLASSDEF
		VTK_NODE_PLUS_VTKXMLREADERWRAP_CLASSDEF
#endif
};

#endif
