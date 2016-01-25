/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKIMAGEMANDELBROTSOURCEWRAP_H
#define NATIVE_EXTENSION_VTK_VTKIMAGEMANDELBROTSOURCEWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkImageMandelbrotSource.h>

#include "vtkImageAlgorithmWrap.h"

class VtkImageMandelbrotSourceWrap : public VtkImageAlgorithmWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitTpl(v8::Local<v8::FunctionTemplate> tpl);

		VtkImageMandelbrotSourceWrap(vtkSmartPointer<vtkImageMandelbrotSource>);
		VtkImageMandelbrotSourceWrap();
		~VtkImageMandelbrotSourceWrap( );
		static Nan::Persistent<v8::Function> constructor;
		static Nan::Persistent<v8::FunctionTemplate> ptpl;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void ConstantSizeOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void ConstantSizeOn(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void CopyOriginAndSample(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetConstantSize(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetSubsampleRate(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetSubsampleRateMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetSubsampleRateMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void IsA(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void Pan(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetConstantSize(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetOriginCX(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetProjectionAxes(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetSampleCX(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetSizeCX(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetSubsampleRate(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetWholeExtent(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void Zoom(const Nan::FunctionCallbackInfo<v8::Value>& info);
};

#endif
