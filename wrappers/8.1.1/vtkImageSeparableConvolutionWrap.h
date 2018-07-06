/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKIMAGESEPARABLECONVOLUTIONWRAP_H
#define NATIVE_EXTENSION_VTK_VTKIMAGESEPARABLECONVOLUTIONWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkImageSeparableConvolution.h>

#include "vtkImageDecomposeFilterWrap.h"
#include "../../plus/plus.h"

class VtkImageSeparableConvolutionWrap : public VtkImageDecomposeFilterWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitPtpl();
		static void ConstructorGetter(
			v8::Local<v8::String> property,
			const Nan::PropertyCallbackInfo<v8::Value>& info);

		VtkImageSeparableConvolutionWrap(vtkSmartPointer<vtkImageSeparableConvolution>);
		VtkImageSeparableConvolutionWrap();
		~VtkImageSeparableConvolutionWrap( );
		static Nan::Persistent<v8::FunctionTemplate> ptpl;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void GetXKernel(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetYKernel(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetZKernel(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetXKernel(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetYKernel(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetZKernel(const Nan::FunctionCallbackInfo<v8::Value>& info);

#ifdef VTK_NODE_PLUS_VTKIMAGESEPARABLECONVOLUTIONWRAP_CLASSDEF
		VTK_NODE_PLUS_VTKIMAGESEPARABLECONVOLUTIONWRAP_CLASSDEF
#endif
};

#endif
