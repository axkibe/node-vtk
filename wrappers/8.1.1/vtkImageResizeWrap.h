/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKIMAGERESIZEWRAP_H
#define NATIVE_EXTENSION_VTK_VTKIMAGERESIZEWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkImageResize.h>

#include "vtkThreadedImageAlgorithmWrap.h"
#include "../../plus/plus.h"

class VtkImageResizeWrap : public VtkThreadedImageAlgorithmWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitPtpl();
		static void ConstructorGetter(
			v8::Local<v8::String> property,
			const Nan::PropertyCallbackInfo<v8::Value>& info);

		VtkImageResizeWrap(vtkSmartPointer<vtkImageResize>);
		VtkImageResizeWrap();
		~VtkImageResizeWrap( );
		static Nan::Persistent<v8::FunctionTemplate> ptpl;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void BorderOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void BorderOn(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void CroppingOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void CroppingOn(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetBorder(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetCropping(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetCroppingRegion(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetInterpolate(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetInterpolator(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetMagnificationFactors(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetOutputDimensions(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetOutputSpacing(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetResizeMethod(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetResizeMethodAsString(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetResizeMethodMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetResizeMethodMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void InterpolateOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void InterpolateOn(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetBorder(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetCropping(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetCroppingRegion(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetInterpolate(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetInterpolator(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetMagnificationFactors(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetOutputDimensions(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetOutputSpacing(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetResizeMethod(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetResizeMethodToMagnificationFactors(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetResizeMethodToOutputDimensions(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetResizeMethodToOutputSpacing(const Nan::FunctionCallbackInfo<v8::Value>& info);

#ifdef VTK_NODE_PLUS_VTKIMAGERESIZEWRAP_CLASSDEF
		VTK_NODE_PLUS_VTKIMAGERESIZEWRAP_CLASSDEF
#endif
};

#endif
