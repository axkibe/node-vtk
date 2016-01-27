/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKIMAGEMASKWRAP_H
#define NATIVE_EXTENSION_VTK_VTKIMAGEMASKWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkImageMask.h>

#include "vtkThreadedImageAlgorithmWrap.h"

class VtkImageMaskWrap : public VtkThreadedImageAlgorithmWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitPtpl();
		static void ConstructorGetter(
			v8::Local<v8::String> property,
			const Nan::PropertyCallbackInfo<v8::Value>& info);

		VtkImageMaskWrap(vtkSmartPointer<vtkImageMask>);
		VtkImageMaskWrap();
		~VtkImageMaskWrap( );
		static Nan::Persistent<v8::FunctionTemplate> ptpl;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetMaskAlpha(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetMaskAlphaMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetMaskAlphaMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetMaskedOutputValueLength(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetNotMask(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void IsA(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NotMaskOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NotMaskOn(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetImageInputData(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetInput1Data(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetInput2Data(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetMaskAlpha(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetMaskInputData(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetMaskedOutputValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetNotMask(const Nan::FunctionCallbackInfo<v8::Value>& info);
};

#endif