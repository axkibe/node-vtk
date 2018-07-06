/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKIMAGESTENCILWRAP_H
#define NATIVE_EXTENSION_VTK_VTKIMAGESTENCILWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkImageStencil.h>

#include "vtkThreadedImageAlgorithmWrap.h"
#include "../../plus/plus.h"

class VtkImageStencilWrap : public VtkThreadedImageAlgorithmWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitPtpl();
		static void ConstructorGetter(
			v8::Local<v8::String> property,
			const Nan::PropertyCallbackInfo<v8::Value>& info);

		VtkImageStencilWrap(vtkSmartPointer<vtkImageStencil>);
		VtkImageStencilWrap();
		~VtkImageStencilWrap( );
		static Nan::Persistent<v8::FunctionTemplate> ptpl;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void GetBackgroundColor(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetBackgroundInput(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetBackgroundValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetReverseStencil(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetStencil(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void ReverseStencilOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void ReverseStencilOn(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetBackgroundColor(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetBackgroundInputData(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetBackgroundValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetReverseStencil(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetStencilConnection(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetStencilData(const Nan::FunctionCallbackInfo<v8::Value>& info);

#ifdef VTK_NODE_PLUS_VTKIMAGESTENCILWRAP_CLASSDEF
		VTK_NODE_PLUS_VTKIMAGESTENCILWRAP_CLASSDEF
#endif
};

#endif
