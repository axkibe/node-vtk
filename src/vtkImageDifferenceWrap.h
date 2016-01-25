/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKIMAGEDIFFERENCEWRAP_H
#define NATIVE_EXTENSION_VTK_VTKIMAGEDIFFERENCEWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkImageDifference.h>

#include "vtkThreadedImageAlgorithmWrap.h"

class VtkImageDifferenceWrap : public VtkThreadedImageAlgorithmWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitTpl(v8::Local<v8::FunctionTemplate> tpl);

		VtkImageDifferenceWrap(vtkSmartPointer<vtkImageDifference>);
		VtkImageDifferenceWrap();
		~VtkImageDifferenceWrap( );
		static Nan::Persistent<v8::Function> constructor;
		static Nan::Persistent<v8::FunctionTemplate> ptpl;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void AllowShiftOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void AllowShiftOn(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void AveragingOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void AveragingOn(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetAllowShift(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetAveraging(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetError(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetImage(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetThreshold(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetThresholdedError(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void IsA(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetAllowShift(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetAveraging(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetImageConnection(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetImageData(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetThreshold(const Nan::FunctionCallbackInfo<v8::Value>& info);
};

#endif
