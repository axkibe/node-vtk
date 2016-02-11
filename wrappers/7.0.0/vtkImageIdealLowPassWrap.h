/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKIMAGEIDEALLOWPASSWRAP_H
#define NATIVE_EXTENSION_VTK_VTKIMAGEIDEALLOWPASSWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkImageIdealLowPass.h>

#include "vtkThreadedImageAlgorithmWrap.h"

class VtkImageIdealLowPassWrap : public VtkThreadedImageAlgorithmWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitPtpl();
		static void ConstructorGetter(
			v8::Local<v8::String> property,
			const Nan::PropertyCallbackInfo<v8::Value>& info);

		VtkImageIdealLowPassWrap(vtkSmartPointer<vtkImageIdealLowPass>);
		VtkImageIdealLowPassWrap();
		~VtkImageIdealLowPassWrap( );
		static Nan::Persistent<v8::FunctionTemplate> ptpl;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetCutOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetXCutOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetYCutOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetZCutOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void IsA(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetCutOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetXCutOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetYCutOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetZCutOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
};

#endif
