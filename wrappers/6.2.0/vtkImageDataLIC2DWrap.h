/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKIMAGEDATALIC2DWRAP_H
#define NATIVE_EXTENSION_VTK_VTKIMAGEDATALIC2DWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkImageDataLIC2D.h>

#include "vtkImageAlgorithmWrap.h"

class VtkImageDataLIC2DWrap : public VtkImageAlgorithmWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitPtpl();
		static void ConstructorGetter(
			v8::Local<v8::String> property,
			const Nan::PropertyCallbackInfo<v8::Value>& info);

		VtkImageDataLIC2DWrap(vtkSmartPointer<vtkImageDataLIC2D>);
		VtkImageDataLIC2DWrap();
		~VtkImageDataLIC2DWrap( );
		static Nan::Persistent<v8::FunctionTemplate> ptpl;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetContext(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetMagnification(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetOpenGLExtensionsSupported(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetStepSize(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetSteps(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void IsA(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetContext(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetMagnification(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetStepSize(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetSteps(const Nan::FunctionCallbackInfo<v8::Value>& info);
};

#endif
