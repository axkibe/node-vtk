/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKFRUSTUMCOVERAGECULLERWRAP_H
#define NATIVE_EXTENSION_VTK_VTKFRUSTUMCOVERAGECULLERWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkFrustumCoverageCuller.h>

#include "vtkCullerWrap.h"
#include "../../plus/plus.h"

class VtkFrustumCoverageCullerWrap : public VtkCullerWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitPtpl();
		static void ConstructorGetter(
			v8::Local<v8::String> property,
			const Nan::PropertyCallbackInfo<v8::Value>& info);

		VtkFrustumCoverageCullerWrap(vtkSmartPointer<vtkFrustumCoverageCuller>);
		VtkFrustumCoverageCullerWrap();
		~VtkFrustumCoverageCullerWrap( );
		static Nan::Persistent<v8::FunctionTemplate> ptpl;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetMaximumCoverage(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetMinimumCoverage(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetSortingStyle(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetSortingStyleAsString(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetSortingStyleMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetSortingStyleMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void IsA(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetMaximumCoverage(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetMinimumCoverage(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetSortingStyle(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetSortingStyleToBackToFront(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetSortingStyleToFrontToBack(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetSortingStyleToNone(const Nan::FunctionCallbackInfo<v8::Value>& info);

#ifdef VTK_NODE_PLUS_VTKFRUSTUMCOVERAGECULLERWRAP_CLASSDEF
		VTK_NODE_PLUS_VTKFRUSTUMCOVERAGECULLERWRAP_CLASSDEF
#endif
};

#endif
