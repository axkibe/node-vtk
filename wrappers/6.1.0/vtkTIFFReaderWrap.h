/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKTIFFREADERWRAP_H
#define NATIVE_EXTENSION_VTK_VTKTIFFREADERWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkTIFFReader.h>

#include "vtkImageReader2Wrap.h"

class VtkTIFFReaderWrap : public VtkImageReader2Wrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitPtpl();
		static void ConstructorGetter(
			v8::Local<v8::String> property,
			const Nan::PropertyCallbackInfo<v8::Value>& info);

		VtkTIFFReaderWrap(vtkSmartPointer<vtkTIFFReader>);
		VtkTIFFReaderWrap();
		~VtkTIFFReaderWrap( );
		static Nan::Persistent<v8::FunctionTemplate> ptpl;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void CanReadFile(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetDescriptiveName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetFileExtensions(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetOrientationTypeSpecifiedFlag(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetOriginSpecifiedFlag(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetSpacingSpecifiedFlag(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void InitializeColors(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void IsA(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void OriginSpecifiedFlagOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void OriginSpecifiedFlagOn(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetOriginSpecifiedFlag(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetSpacingSpecifiedFlag(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SpacingSpecifiedFlagOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SpacingSpecifiedFlagOn(const Nan::FunctionCallbackInfo<v8::Value>& info);
};

#endif
