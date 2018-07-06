/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKPEXTRACTHISTOGRAM2DWRAP_H
#define NATIVE_EXTENSION_VTK_VTKPEXTRACTHISTOGRAM2DWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkPExtractHistogram2D.h>

#include "vtkExtractHistogram2DWrap.h"
#include "../../plus/plus.h"

class VtkPExtractHistogram2DWrap : public VtkExtractHistogram2DWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitPtpl();
		static void ConstructorGetter(
			v8::Local<v8::String> property,
			const Nan::PropertyCallbackInfo<v8::Value>& info);

		VtkPExtractHistogram2DWrap(vtkSmartPointer<vtkPExtractHistogram2D>);
		VtkPExtractHistogram2DWrap();
		~VtkPExtractHistogram2DWrap( );
		static Nan::Persistent<v8::FunctionTemplate> ptpl;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void GetController(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetController(const Nan::FunctionCallbackInfo<v8::Value>& info);

#ifdef VTK_NODE_PLUS_VTKPEXTRACTHISTOGRAM2DWRAP_CLASSDEF
		VTK_NODE_PLUS_VTKPEXTRACTHISTOGRAM2DWRAP_CLASSDEF
#endif
};

#endif
