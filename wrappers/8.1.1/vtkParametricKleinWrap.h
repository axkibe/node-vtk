/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKPARAMETRICKLEINWRAP_H
#define NATIVE_EXTENSION_VTK_VTKPARAMETRICKLEINWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkParametricKlein.h>

#include "vtkParametricFunctionWrap.h"
#include "../../plus/plus.h"

class VtkParametricKleinWrap : public VtkParametricFunctionWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitPtpl();
		static void ConstructorGetter(
			v8::Local<v8::String> property,
			const Nan::PropertyCallbackInfo<v8::Value>& info);

		VtkParametricKleinWrap(vtkSmartPointer<vtkParametricKlein>);
		VtkParametricKleinWrap();
		~VtkParametricKleinWrap( );
		static Nan::Persistent<v8::FunctionTemplate> ptpl;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void Evaluate(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void EvaluateScalar(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetDimension(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);

#ifdef VTK_NODE_PLUS_VTKPARAMETRICKLEINWRAP_CLASSDEF
		VTK_NODE_PLUS_VTKPARAMETRICKLEINWRAP_CLASSDEF
#endif
};

#endif
