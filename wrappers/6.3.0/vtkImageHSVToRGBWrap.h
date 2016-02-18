/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKIMAGEHSVTORGBWRAP_H
#define NATIVE_EXTENSION_VTK_VTKIMAGEHSVTORGBWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkImageHSVToRGB.h>

#include "vtkThreadedImageAlgorithmWrap.h"
#include "../../plus/plus.h"

class VtkImageHSVToRGBWrap : public VtkThreadedImageAlgorithmWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitPtpl();
		static void ConstructorGetter(
			v8::Local<v8::String> property,
			const Nan::PropertyCallbackInfo<v8::Value>& info);

		VtkImageHSVToRGBWrap(vtkSmartPointer<vtkImageHSVToRGB>);
		VtkImageHSVToRGBWrap();
		~VtkImageHSVToRGBWrap( );
		static Nan::Persistent<v8::FunctionTemplate> ptpl;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetMaximum(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void IsA(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetMaximum(const Nan::FunctionCallbackInfo<v8::Value>& info);

#ifdef VTK_NODE_PLUS_VTKIMAGEHSVTORGBWRAP_CLASSDEF
		VTK_NODE_PLUS_VTKIMAGEHSVTORGBWRAP_CLASSDEF
#endif
};

#endif
