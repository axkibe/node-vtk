/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKVOLUMEREADERWRAP_H
#define NATIVE_EXTENSION_VTK_VTKVOLUMEREADERWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkVolumeReader.h>

#include "vtkImageAlgorithmWrap.h"

class VtkVolumeReaderWrap : public VtkImageAlgorithmWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitPtpl();
		static void ConstructorGetter(
			v8::Local<v8::String> property,
			const Nan::PropertyCallbackInfo<v8::Value>& info);

		VtkVolumeReaderWrap(vtkSmartPointer<vtkVolumeReader>);
		VtkVolumeReaderWrap();
		~VtkVolumeReaderWrap( );
		static Nan::Persistent<v8::FunctionTemplate> ptpl;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetFilePattern(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetFilePrefix(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void IsA(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetDataOrigin(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetDataSpacing(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetFilePattern(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetFilePrefix(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetImageRange(const Nan::FunctionCallbackInfo<v8::Value>& info);
};

#endif
