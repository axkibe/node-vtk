/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKIMAGERFFTWRAP_H
#define NATIVE_EXTENSION_VTK_VTKIMAGERFFTWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkImageRFFT.h>

#include "vtkImageFourierFilterWrap.h"

class VtkImageRFFTWrap : public VtkImageFourierFilterWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitPtpl();
		static void ConstructorGetter(
			v8::Local<v8::String> property,
			const Nan::PropertyCallbackInfo<v8::Value>& info);

		VtkImageRFFTWrap(vtkSmartPointer<vtkImageRFFT>);
		VtkImageRFFTWrap();
		~VtkImageRFFTWrap( );
		static Nan::Persistent<v8::FunctionTemplate> ptpl;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void IsA(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SplitExtent(const Nan::FunctionCallbackInfo<v8::Value>& info);
};

#endif
