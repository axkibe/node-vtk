/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKIMPLICITWINDOWFUNCTIONWRAP_H
#define NATIVE_EXTENSION_VTK_VTKIMPLICITWINDOWFUNCTIONWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkImplicitWindowFunction.h>

#include "vtkImplicitFunctionWrap.h"
#include "../../plus/plus.h"

class VtkImplicitWindowFunctionWrap : public VtkImplicitFunctionWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitPtpl();
		static void ConstructorGetter(
			v8::Local<v8::String> property,
			const Nan::PropertyCallbackInfo<v8::Value>& info);

		VtkImplicitWindowFunctionWrap(vtkSmartPointer<vtkImplicitWindowFunction>);
		VtkImplicitWindowFunctionWrap();
		~VtkImplicitWindowFunctionWrap( );
		static Nan::Persistent<v8::FunctionTemplate> ptpl;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void EvaluateFunction(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void EvaluateGradient(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetImplicitFunction(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetWindowRange(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetWindowValues(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void IsA(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetImplicitFunction(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetWindowRange(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetWindowValues(const Nan::FunctionCallbackInfo<v8::Value>& info);

#ifdef VTK_NODE_PLUS_VTKIMPLICITWINDOWFUNCTIONWRAP_CLASSDEF
		VTK_NODE_PLUS_VTKIMPLICITWINDOWFUNCTIONWRAP_CLASSDEF
#endif
};

#endif
