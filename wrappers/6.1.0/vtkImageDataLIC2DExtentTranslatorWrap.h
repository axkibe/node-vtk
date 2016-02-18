/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKIMAGEDATALIC2DEXTENTTRANSLATORWRAP_H
#define NATIVE_EXTENSION_VTK_VTKIMAGEDATALIC2DEXTENTTRANSLATORWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkImageDataLIC2DExtentTranslator.h>

#include "vtkExtentTranslatorWrap.h"
#include "../../plus/plus.h"

class VtkImageDataLIC2DExtentTranslatorWrap : public VtkExtentTranslatorWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitPtpl();
		static void ConstructorGetter(
			v8::Local<v8::String> property,
			const Nan::PropertyCallbackInfo<v8::Value>& info);

		VtkImageDataLIC2DExtentTranslatorWrap(vtkSmartPointer<vtkImageDataLIC2DExtentTranslator>);
		VtkImageDataLIC2DExtentTranslatorWrap();
		~VtkImageDataLIC2DExtentTranslatorWrap( );
		static Nan::Persistent<v8::FunctionTemplate> ptpl;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void GetAlgorithm(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetInputExtentTranslator(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetInputWholeExtent(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void IsA(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetAlgorithm(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetInputExtentTranslator(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetInputWholeExtent(const Nan::FunctionCallbackInfo<v8::Value>& info);

#ifdef VTK_NODE_PLUS_VTKIMAGEDATALIC2DEXTENTTRANSLATORWRAP_CLASSDEF
		VTK_NODE_PLUS_VTKIMAGEDATALIC2DEXTENTTRANSLATORWRAP_CLASSDEF
#endif
};

#endif
