/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKMETAIMAGEREADERWRAP_H
#define NATIVE_EXTENSION_VTK_VTKMETAIMAGEREADERWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkMetaImageReader.h>

#include "vtkImageReader2Wrap.h"
#include "../../plus/plus.h"

class VtkMetaImageReaderWrap : public VtkImageReader2Wrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitPtpl();
		static void ConstructorGetter(
			v8::Local<v8::String> property,
			const Nan::PropertyCallbackInfo<v8::Value>& info);

		VtkMetaImageReaderWrap(vtkSmartPointer<vtkMetaImageReader>);
		VtkMetaImageReaderWrap();
		~VtkMetaImageReaderWrap( );
		static Nan::Persistent<v8::FunctionTemplate> ptpl;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void CanReadFile(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetAnatomicalOrientation(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetBitsAllocated(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetDataByteOrder(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetDate(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetDescriptiveName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetDistanceUnits(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetFileExtensions(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetGantryAngle(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetHeight(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetImageNumber(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetModality(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetNumberOfComponents(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetPatientID(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetPatientName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetPixelRepresentation(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetRescaleOffset(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetRescaleSlope(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetSeries(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetStudyID(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetStudyUID(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetTransferSyntaxUID(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetWidth(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void IsA(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);

#ifdef VTK_NODE_PLUS_VTKMETAIMAGEREADERWRAP_CLASSDEF
		VTK_NODE_PLUS_VTKMETAIMAGEREADERWRAP_CLASSDEF
#endif
};

#endif
