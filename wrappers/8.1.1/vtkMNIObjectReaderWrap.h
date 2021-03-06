/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKMNIOBJECTREADERWRAP_H
#define NATIVE_EXTENSION_VTK_VTKMNIOBJECTREADERWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkMNIObjectReader.h>

#include "vtkPolyDataAlgorithmWrap.h"
#include "../../plus/plus.h"

class VtkMNIObjectReaderWrap : public VtkPolyDataAlgorithmWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitPtpl();
		static void ConstructorGetter(
			v8::Local<v8::String> property,
			const Nan::PropertyCallbackInfo<v8::Value>& info);

		VtkMNIObjectReaderWrap(vtkSmartPointer<vtkMNIObjectReader>);
		VtkMNIObjectReaderWrap();
		~VtkMNIObjectReaderWrap( );
		static Nan::Persistent<v8::FunctionTemplate> ptpl;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void CanReadFile(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetDescriptiveName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetFileExtensions(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetFileName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetProperty(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetFileName(const Nan::FunctionCallbackInfo<v8::Value>& info);

#ifdef VTK_NODE_PLUS_VTKMNIOBJECTREADERWRAP_CLASSDEF
		VTK_NODE_PLUS_VTKMNIOBJECTREADERWRAP_CLASSDEF
#endif
};

#endif
