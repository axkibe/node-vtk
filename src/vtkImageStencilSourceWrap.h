/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKIMAGESTENCILSOURCEWRAP_H
#define NATIVE_EXTENSION_VTK_VTKIMAGESTENCILSOURCEWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkImageStencilSource.h>

#include "vtkImageStencilAlgorithmWrap.h"

class VtkImageStencilSourceWrap : public VtkImageStencilAlgorithmWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitPtpl();
		static void ConstructorGetter(
			v8::Local<v8::String> property,
			const Nan::PropertyCallbackInfo<v8::Value>& info);

		VtkImageStencilSourceWrap(vtkSmartPointer<vtkImageStencilSource>);
		VtkImageStencilSourceWrap();
		~VtkImageStencilSourceWrap( );
		static Nan::Persistent<v8::FunctionTemplate> ptpl;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetInformationInput(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void IsA(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void ReportReferences(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetInformationInput(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetOutputOrigin(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetOutputSpacing(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetOutputWholeExtent(const Nan::FunctionCallbackInfo<v8::Value>& info);
};

#endif
