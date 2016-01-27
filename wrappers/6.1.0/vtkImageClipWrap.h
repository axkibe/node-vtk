/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKIMAGECLIPWRAP_H
#define NATIVE_EXTENSION_VTK_VTKIMAGECLIPWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkImageClip.h>

#include "vtkImageAlgorithmWrap.h"

class VtkImageClipWrap : public VtkImageAlgorithmWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitPtpl();
		static void ConstructorGetter(
			v8::Local<v8::String> property,
			const Nan::PropertyCallbackInfo<v8::Value>& info);

		VtkImageClipWrap(vtkSmartPointer<vtkImageClip>);
		VtkImageClipWrap();
		~VtkImageClipWrap( );
		static Nan::Persistent<v8::FunctionTemplate> ptpl;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void ClipDataOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void ClipDataOn(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetClipData(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void IsA(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void ResetOutputWholeExtent(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetClipData(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetOutputWholeExtent(const Nan::FunctionCallbackInfo<v8::Value>& info);
};

#endif