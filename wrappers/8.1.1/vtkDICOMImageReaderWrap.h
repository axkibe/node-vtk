/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKDICOMIMAGEREADERWRAP_H
#define NATIVE_EXTENSION_VTK_VTKDICOMIMAGEREADERWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkDICOMImageReader.h>

#include "vtkImageReader2Wrap.h"
#include "../../plus/plus.h"

class VtkDICOMImageReaderWrap : public VtkImageReader2Wrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitPtpl();
		static void ConstructorGetter(
			v8::Local<v8::String> property,
			const Nan::PropertyCallbackInfo<v8::Value>& info);

		VtkDICOMImageReaderWrap(vtkSmartPointer<vtkDICOMImageReader>);
		VtkDICOMImageReaderWrap();
		~VtkDICOMImageReaderWrap( );
		static Nan::Persistent<v8::FunctionTemplate> ptpl;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void CanReadFile(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetBitsAllocated(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetDescriptiveName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetDirectoryName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetFileExtensions(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetGantryAngle(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetHeight(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetImageOrientationPatient(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetImagePositionPatient(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetNumberOfComponents(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetPatientName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetPixelRepresentation(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetPixelSpacing(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetRescaleOffset(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetRescaleSlope(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetStudyID(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetStudyUID(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetTransferSyntaxUID(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetWidth(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetDirectoryName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetFileName(const Nan::FunctionCallbackInfo<v8::Value>& info);

#ifdef VTK_NODE_PLUS_VTKDICOMIMAGEREADERWRAP_CLASSDEF
		VTK_NODE_PLUS_VTKDICOMIMAGEREADERWRAP_CLASSDEF
#endif
};

#endif
