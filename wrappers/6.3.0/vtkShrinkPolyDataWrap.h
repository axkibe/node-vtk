/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKSHRINKPOLYDATAWRAP_H
#define NATIVE_EXTENSION_VTK_VTKSHRINKPOLYDATAWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkShrinkPolyData.h>

#include "vtkPolyDataAlgorithmWrap.h"
#include "../../plus/plus.h"

class VtkShrinkPolyDataWrap : public VtkPolyDataAlgorithmWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitPtpl();
		static void ConstructorGetter(
			v8::Local<v8::String> property,
			const Nan::PropertyCallbackInfo<v8::Value>& info);

		VtkShrinkPolyDataWrap(vtkSmartPointer<vtkShrinkPolyData>);
		VtkShrinkPolyDataWrap();
		~VtkShrinkPolyDataWrap( );
		static Nan::Persistent<v8::FunctionTemplate> ptpl;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetShrinkFactor(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetShrinkFactorMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetShrinkFactorMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void IsA(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetShrinkFactor(const Nan::FunctionCallbackInfo<v8::Value>& info);

#ifdef VTK_NODE_PLUS_VTKSHRINKPOLYDATAWRAP_CLASSDEF
		VTK_NODE_PLUS_VTKSHRINKPOLYDATAWRAP_CLASSDEF
#endif
};

#endif
