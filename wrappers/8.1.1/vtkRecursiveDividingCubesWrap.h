/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKRECURSIVEDIVIDINGCUBESWRAP_H
#define NATIVE_EXTENSION_VTK_VTKRECURSIVEDIVIDINGCUBESWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkRecursiveDividingCubes.h>

#include "vtkPolyDataAlgorithmWrap.h"
#include "../../plus/plus.h"

class VtkRecursiveDividingCubesWrap : public VtkPolyDataAlgorithmWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitPtpl();
		static void ConstructorGetter(
			v8::Local<v8::String> property,
			const Nan::PropertyCallbackInfo<v8::Value>& info);

		VtkRecursiveDividingCubesWrap(vtkSmartPointer<vtkRecursiveDividingCubes>);
		VtkRecursiveDividingCubesWrap();
		~VtkRecursiveDividingCubesWrap( );
		static Nan::Persistent<v8::FunctionTemplate> ptpl;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void GetDistance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetDistanceMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetDistanceMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetIncrement(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetIncrementMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetIncrementMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetDistance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetIncrement(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetValue(const Nan::FunctionCallbackInfo<v8::Value>& info);

#ifdef VTK_NODE_PLUS_VTKRECURSIVEDIVIDINGCUBESWRAP_CLASSDEF
		VTK_NODE_PLUS_VTKRECURSIVEDIVIDINGCUBESWRAP_CLASSDEF
#endif
};

#endif