/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKIMAGEMAGNITUDEWRAP_H
#define NATIVE_EXTENSION_VTK_VTKIMAGEMAGNITUDEWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkImageMagnitude.h>

#include "vtkThreadedImageAlgorithmWrap.h"

class VtkImageMagnitudeWrap : public VtkThreadedImageAlgorithmWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitTpl(v8::Local<v8::FunctionTemplate> tpl);

		VtkImageMagnitudeWrap(vtkSmartPointer<vtkImageMagnitude>);
		VtkImageMagnitudeWrap();
		~VtkImageMagnitudeWrap( );
		static Nan::Persistent<v8::Function> constructor;
		static Nan::Persistent<v8::FunctionTemplate> ptpl;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void IsA(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);
};

#endif
