/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKHYPEROCTREEFRACTALSOURCEWRAP_H
#define NATIVE_EXTENSION_VTK_VTKHYPEROCTREEFRACTALSOURCEWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkHyperOctreeFractalSource.h>

#include "vtkHyperOctreeAlgorithmWrap.h"
#include "../../plus/plus.h"

class VtkHyperOctreeFractalSourceWrap : public VtkHyperOctreeAlgorithmWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitPtpl();
		static void ConstructorGetter(
			v8::Local<v8::String> property,
			const Nan::PropertyCallbackInfo<v8::Value>& info);

		VtkHyperOctreeFractalSourceWrap(vtkSmartPointer<vtkHyperOctreeFractalSource>);
		VtkHyperOctreeFractalSourceWrap();
		~VtkHyperOctreeFractalSourceWrap( );
		static Nan::Persistent<v8::FunctionTemplate> ptpl;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void GetDimension(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetDimensionMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetDimensionMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetMaximumLevel(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetMaximumNumberOfIterations(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetMaximumNumberOfIterationsMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetMaximumNumberOfIterationsMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetMinimumLevel(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetOriginCX(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetProjectionAxes(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetSizeCX(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetSpanThreshold(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetDimension(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetMaximumLevel(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetMaximumNumberOfIterations(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetMinimumLevel(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetOriginCX(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetProjectionAxes(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetSizeCX(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetSpanThreshold(const Nan::FunctionCallbackInfo<v8::Value>& info);

#ifdef VTK_NODE_PLUS_VTKHYPEROCTREEFRACTALSOURCEWRAP_CLASSDEF
		VTK_NODE_PLUS_VTKHYPEROCTREEFRACTALSOURCEWRAP_CLASSDEF
#endif
};

#endif
