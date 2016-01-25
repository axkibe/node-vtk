/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKIMAGEBUTTERWORTHHIGHPASSWRAP_H
#define NATIVE_EXTENSION_VTK_VTKIMAGEBUTTERWORTHHIGHPASSWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkImageButterworthHighPass.h>

#include "vtkThreadedImageAlgorithmWrap.h"

class VtkImageButterworthHighPassWrap : public VtkThreadedImageAlgorithmWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitTpl(v8::Local<v8::FunctionTemplate> tpl);

		VtkImageButterworthHighPassWrap(vtkSmartPointer<vtkImageButterworthHighPass>);
		VtkImageButterworthHighPassWrap();
		~VtkImageButterworthHighPassWrap( );
		static Nan::Persistent<v8::Function> constructor;
		static Nan::Persistent<v8::FunctionTemplate> ptpl;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetOrder(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetXCutOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetYCutOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetZCutOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void IsA(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetCutOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetOrder(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetXCutOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetYCutOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetZCutOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
};

#endif
