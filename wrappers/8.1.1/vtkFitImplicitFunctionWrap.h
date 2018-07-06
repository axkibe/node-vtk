/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKFITIMPLICITFUNCTIONWRAP_H
#define NATIVE_EXTENSION_VTK_VTKFITIMPLICITFUNCTIONWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkFitImplicitFunction.h>

#include "vtkPointCloudFilterWrap.h"
#include "../../plus/plus.h"

class VtkFitImplicitFunctionWrap : public VtkPointCloudFilterWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitPtpl();
		static void ConstructorGetter(
			v8::Local<v8::String> property,
			const Nan::PropertyCallbackInfo<v8::Value>& info);

		VtkFitImplicitFunctionWrap(vtkSmartPointer<vtkFitImplicitFunction>);
		VtkFitImplicitFunctionWrap();
		~VtkFitImplicitFunctionWrap( );
		static Nan::Persistent<v8::FunctionTemplate> ptpl;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void GetImplicitFunction(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetThreshold(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetThresholdMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetThresholdMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetImplicitFunction(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetThreshold(const Nan::FunctionCallbackInfo<v8::Value>& info);

#ifdef VTK_NODE_PLUS_VTKFITIMPLICITFUNCTIONWRAP_CLASSDEF
		VTK_NODE_PLUS_VTKFITIMPLICITFUNCTIONWRAP_CLASSDEF
#endif
};

#endif
