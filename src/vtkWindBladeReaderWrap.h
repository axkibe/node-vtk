/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKWINDBLADEREADERWRAP_H
#define NATIVE_EXTENSION_VTK_VTKWINDBLADEREADERWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkWindBladeReader.h>

#include "vtkStructuredGridAlgorithmWrap.h"

class VtkWindBladeReaderWrap : public VtkStructuredGridAlgorithmWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitTpl(v8::Local<v8::FunctionTemplate> tpl);

		VtkWindBladeReaderWrap(vtkSmartPointer<vtkWindBladeReader>);
		VtkWindBladeReaderWrap();
		~VtkWindBladeReaderWrap( );
		static Nan::Persistent<v8::Function> constructor;
		static Nan::Persistent<v8::FunctionTemplate> ptpl;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void DisableAllPointArrays(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void EnableAllPointArrays(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetBladeOutput(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetFieldOutput(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetFilename(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetGroundOutput(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetNumberOfPointArrays(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetPointArrayName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetPointArrayStatus(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void IsA(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetFilename(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetPointArrayStatus(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetSubExtent(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetWholeExtent(const Nan::FunctionCallbackInfo<v8::Value>& info);
};

#endif
