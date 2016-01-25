/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKPARTICLEREADERWRAP_H
#define NATIVE_EXTENSION_VTK_VTKPARTICLEREADERWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkParticleReader.h>

#include "vtkPolyDataAlgorithmWrap.h"

class VtkParticleReaderWrap : public VtkPolyDataAlgorithmWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitTpl(v8::Local<v8::FunctionTemplate> tpl);

		VtkParticleReaderWrap(vtkSmartPointer<vtkParticleReader>);
		VtkParticleReaderWrap();
		~VtkParticleReaderWrap( );
		static Nan::Persistent<v8::Function> constructor;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetDataByteOrder(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetDataByteOrderAsString(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetDataType(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetDataTypeMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetDataTypeMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetFileName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetFileType(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetFileTypeMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetFileTypeMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetHasScalar(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetSwapBytes(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void HasScalarOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void HasScalarOn(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void IsA(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetDataByteOrder(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetDataByteOrderToBigEndian(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetDataByteOrderToLittleEndian(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetDataType(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetDataTypeToDouble(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetDataTypeToFloat(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetFileName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetFileType(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetFileTypeToBinary(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetFileTypeToText(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetFileTypeToUnknown(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetHasScalar(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetSwapBytes(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SwapBytesOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SwapBytesOn(const Nan::FunctionCallbackInfo<v8::Value>& info);
};

#endif
