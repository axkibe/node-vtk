/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKMFIXREADERWRAP_H
#define NATIVE_EXTENSION_VTK_VTKMFIXREADERWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkMFIXReader.h>

#include "vtkUnstructuredGridAlgorithmWrap.h"

class VtkMFIXReaderWrap : public VtkUnstructuredGridAlgorithmWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitPtpl();
		static void ConstructorGetter(
			v8::Local<v8::String> property,
			const Nan::PropertyCallbackInfo<v8::Value>& info);

		VtkMFIXReaderWrap(vtkSmartPointer<vtkMFIXReader>);
		VtkMFIXReaderWrap();
		~VtkMFIXReaderWrap( );
		static Nan::Persistent<v8::FunctionTemplate> ptpl;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void DisableAllCellArrays(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void EnableAllCellArrays(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetCellArrayName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetCellArrayStatus(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetFileName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetNumberOfCellArrays(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetNumberOfCellFields(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetNumberOfCells(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetNumberOfPoints(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetNumberOfTimeSteps(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetTimeStep(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void IsA(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetCellArrayStatus(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetFileName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetTimeStep(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetTimeStepRange(const Nan::FunctionCallbackInfo<v8::Value>& info);
};

#endif