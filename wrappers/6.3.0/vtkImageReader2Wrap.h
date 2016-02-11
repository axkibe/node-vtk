/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKIMAGEREADER2WRAP_H
#define NATIVE_EXTENSION_VTK_VTKIMAGEREADER2WRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkImageReader2.h>

#include "vtkImageAlgorithmWrap.h"

class VtkImageReader2Wrap : public VtkImageAlgorithmWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitPtpl();
		static void ConstructorGetter(
			v8::Local<v8::String> property,
			const Nan::PropertyCallbackInfo<v8::Value>& info);

		VtkImageReader2Wrap(vtkSmartPointer<vtkImageReader2>);
		VtkImageReader2Wrap();
		~VtkImageReader2Wrap( );
		static Nan::Persistent<v8::FunctionTemplate> ptpl;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void CanReadFile(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void ComputeInternalFileName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void FileLowerLeftOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void FileLowerLeftOn(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetDataByteOrder(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetDataByteOrderAsString(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetDataExtent(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetDataOrigin(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetDataScalarType(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetDataSpacing(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetDescriptiveName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetFileDimensionality(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetFileExtensions(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetFileLowerLeft(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetFileName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetFileNameSliceOffset(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetFileNameSliceSpacing(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetFileNames(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetFilePattern(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetFilePrefix(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetInternalFileName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetNumberOfScalarComponents(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetSwapBytes(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void IsA(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void OpenFile(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SeekFile(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetDataByteOrder(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetDataByteOrderToBigEndian(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetDataByteOrderToLittleEndian(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetDataExtent(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetDataOrigin(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetDataScalarType(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetDataScalarTypeToChar(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetDataScalarTypeToDouble(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetDataScalarTypeToFloat(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetDataScalarTypeToInt(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetDataScalarTypeToShort(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetDataScalarTypeToSignedChar(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetDataScalarTypeToUnsignedChar(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetDataScalarTypeToUnsignedInt(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetDataScalarTypeToUnsignedShort(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetDataSpacing(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetFileDimensionality(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetFileLowerLeft(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetFileName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetFileNameSliceOffset(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetFileNameSliceSpacing(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetFileNames(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetFilePattern(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetFilePrefix(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetNumberOfScalarComponents(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetSwapBytes(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SwapBytesOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SwapBytesOn(const Nan::FunctionCallbackInfo<v8::Value>& info);
};

#endif
