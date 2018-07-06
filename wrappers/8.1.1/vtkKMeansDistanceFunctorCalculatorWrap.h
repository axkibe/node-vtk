/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKKMEANSDISTANCEFUNCTORCALCULATORWRAP_H
#define NATIVE_EXTENSION_VTK_VTKKMEANSDISTANCEFUNCTORCALCULATORWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkKMeansDistanceFunctorCalculator.h>

#include "vtkKMeansDistanceFunctorWrap.h"
#include "../../plus/plus.h"

class VtkKMeansDistanceFunctorCalculatorWrap : public VtkKMeansDistanceFunctorWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitPtpl();
		static void ConstructorGetter(
			v8::Local<v8::String> property,
			const Nan::PropertyCallbackInfo<v8::Value>& info);

		VtkKMeansDistanceFunctorCalculatorWrap(vtkSmartPointer<vtkKMeansDistanceFunctorCalculator>);
		VtkKMeansDistanceFunctorCalculatorWrap();
		~VtkKMeansDistanceFunctorCalculatorWrap( );
		static Nan::Persistent<v8::FunctionTemplate> ptpl;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void GetDistanceExpression(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetFunctionParser(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetDistanceExpression(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetFunctionParser(const Nan::FunctionCallbackInfo<v8::Value>& info);

#ifdef VTK_NODE_PLUS_VTKKMEANSDISTANCEFUNCTORCALCULATORWRAP_CLASSDEF
		VTK_NODE_PLUS_VTKKMEANSDISTANCEFUNCTORCALCULATORWRAP_CLASSDEF
#endif
};

#endif
