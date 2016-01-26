/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKFLUENTREADERWRAP_H
#define NATIVE_EXTENSION_VTK_VTKFLUENTREADERWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkFLUENTReader.h>

#include "vtkMultiBlockDataSetAlgorithmWrap.h"

class VtkFLUENTReaderWrap : public VtkMultiBlockDataSetAlgorithmWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitPtpl();
		static void ConstructorGetter(
			v8::Local<v8::String> property,
			const Nan::PropertyCallbackInfo<v8::Value>& info);

		VtkFLUENTReaderWrap(vtkSmartPointer<vtkFLUENTReader>);
		VtkFLUENTReaderWrap();
		~VtkFLUENTReaderWrap( );
		static Nan::Persistent<v8::Function> constructor;
		static Nan::Persistent<v8::FunctionTemplate> ptpl;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void DisableAllCellArrays(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void EnableAllCellArrays(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetCellArrayName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetCellArrayStatus(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetDataByteOrder(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetDataByteOrderAsString(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetFileName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetNumberOfCellArrays(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetNumberOfCells(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void IsA(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetCellArrayStatus(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetDataByteOrder(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetDataByteOrderToBigEndian(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetDataByteOrderToLittleEndian(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetFileName(const Nan::FunctionCallbackInfo<v8::Value>& info);
};

#endif
