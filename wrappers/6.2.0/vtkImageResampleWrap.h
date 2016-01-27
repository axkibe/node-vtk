/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKIMAGERESAMPLEWRAP_H
#define NATIVE_EXTENSION_VTK_VTKIMAGERESAMPLEWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkImageResample.h>

#include "vtkImageResliceWrap.h"

class VtkImageResampleWrap : public VtkImageResliceWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitPtpl();
		static void ConstructorGetter(
			v8::Local<v8::String> property,
			const Nan::PropertyCallbackInfo<v8::Value>& info);

		VtkImageResampleWrap(vtkSmartPointer<vtkImageResample>);
		VtkImageResampleWrap();
		~VtkImageResampleWrap( );
		static Nan::Persistent<v8::FunctionTemplate> ptpl;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void GetAxisMagnificationFactor(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetDimensionality(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void IsA(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetAxisMagnificationFactor(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetAxisOutputSpacing(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetDimensionality(const Nan::FunctionCallbackInfo<v8::Value>& info);
};

#endif