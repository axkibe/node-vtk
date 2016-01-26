/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKIMAGELOGARITHMICSCALEWRAP_H
#define NATIVE_EXTENSION_VTK_VTKIMAGELOGARITHMICSCALEWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkImageLogarithmicScale.h>

#include "vtkThreadedImageAlgorithmWrap.h"

class VtkImageLogarithmicScaleWrap : public VtkThreadedImageAlgorithmWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitPtpl();
		static void ConstructorGetter(
			v8::Local<v8::String> property,
			const Nan::PropertyCallbackInfo<v8::Value>& info);

		VtkImageLogarithmicScaleWrap(vtkSmartPointer<vtkImageLogarithmicScale>);
		VtkImageLogarithmicScaleWrap();
		~VtkImageLogarithmicScaleWrap( );
		static Nan::Persistent<v8::Function> constructor;
		static Nan::Persistent<v8::FunctionTemplate> ptpl;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetConstant(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void IsA(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetConstant(const Nan::FunctionCallbackInfo<v8::Value>& info);
};

#endif
