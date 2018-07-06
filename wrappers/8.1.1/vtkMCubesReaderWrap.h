/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKMCUBESREADERWRAP_H
#define NATIVE_EXTENSION_VTK_VTKMCUBESREADERWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkMCubesReader.h>

#include "vtkPolyDataAlgorithmWrap.h"
#include "../../plus/plus.h"

class VtkMCubesReaderWrap : public VtkPolyDataAlgorithmWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitPtpl();
		static void ConstructorGetter(
			v8::Local<v8::String> property,
			const Nan::PropertyCallbackInfo<v8::Value>& info);

		VtkMCubesReaderWrap(vtkSmartPointer<vtkMCubesReader>);
		VtkMCubesReaderWrap();
		~VtkMCubesReaderWrap( );
		static Nan::Persistent<v8::FunctionTemplate> ptpl;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void CreateDefaultLocator(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void FlipNormalsOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void FlipNormalsOn(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetDataByteOrder(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetDataByteOrderAsString(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetFileName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetFlipNormals(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetHeaderSize(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetHeaderSizeMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetHeaderSizeMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetLimitsFileName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetLocator(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetNormals(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetSwapBytes(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NormalsOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NormalsOn(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetDataByteOrder(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetDataByteOrderToBigEndian(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetDataByteOrderToLittleEndian(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetFileName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetFlipNormals(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetHeaderSize(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetLimitsFileName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetLocator(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetNormals(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetSwapBytes(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SwapBytesOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SwapBytesOn(const Nan::FunctionCallbackInfo<v8::Value>& info);

#ifdef VTK_NODE_PLUS_VTKMCUBESREADERWRAP_CLASSDEF
		VTK_NODE_PLUS_VTKMCUBESREADERWRAP_CLASSDEF
#endif
};

#endif
