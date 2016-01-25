/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKNRRDREADERWRAP_H
#define NATIVE_EXTENSION_VTK_VTKNRRDREADERWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkNrrdReader.h>

#include "vtkImageReaderWrap.h"

class VtkNrrdReaderWrap : public VtkImageReaderWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitTpl(v8::Local<v8::FunctionTemplate> tpl);

		VtkNrrdReaderWrap(vtkSmartPointer<vtkNrrdReader>);
		VtkNrrdReaderWrap();
		~VtkNrrdReaderWrap( );
		static Nan::Persistent<v8::Function> constructor;
		static Nan::Persistent<v8::FunctionTemplate> ptpl;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void CanReadFile(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void IsA(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);
};

#endif
