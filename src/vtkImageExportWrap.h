/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKIMAGEEXPORTWRAP_H
#define NATIVE_EXTENSION_VTK_VTKIMAGEEXPORTWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkImageExport.h>

#include "vtkImageAlgorithmWrap.h"

class VtkImageExportWrap : public VtkImageAlgorithmWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitTpl(v8::Local<v8::FunctionTemplate> tpl);

		VtkImageExportWrap(vtkSmartPointer<vtkImageExport>);
		VtkImageExportWrap();
		~VtkImageExportWrap( );
		static Nan::Persistent<v8::Function> constructor;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void Export(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetDataNumberOfScalarComponents(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetDataScalarType(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetDataScalarTypeAsString(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetImageLowerLeft(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetInput(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void ImageLowerLeftOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void ImageLowerLeftOn(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void IsA(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetImageLowerLeft(const Nan::FunctionCallbackInfo<v8::Value>& info);
};

#endif
