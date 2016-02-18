/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKAPPENDFILTERWRAP_H
#define NATIVE_EXTENSION_VTK_VTKAPPENDFILTERWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkAppendFilter.h>

#include "vtkUnstructuredGridAlgorithmWrap.h"
#include "../../plus/plus.h"

class VtkAppendFilterWrap : public VtkUnstructuredGridAlgorithmWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitPtpl();
		static void ConstructorGetter(
			v8::Local<v8::String> property,
			const Nan::PropertyCallbackInfo<v8::Value>& info);

		VtkAppendFilterWrap(vtkSmartPointer<vtkAppendFilter>);
		VtkAppendFilterWrap();
		~VtkAppendFilterWrap( );
		static Nan::Persistent<v8::FunctionTemplate> ptpl;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetInput(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetInputList(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetMergePoints(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetOutputPointsPrecision(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetOutputPointsPrecisionMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetOutputPointsPrecisionMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void IsA(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void MergePointsOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void MergePointsOn(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void RemoveInputData(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetMergePoints(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetOutputPointsPrecision(const Nan::FunctionCallbackInfo<v8::Value>& info);

#ifdef VTK_NODE_PLUS_VTKAPPENDFILTERWRAP_CLASSDEF
		VTK_NODE_PLUS_VTKAPPENDFILTERWRAP_CLASSDEF
#endif
};

#endif
