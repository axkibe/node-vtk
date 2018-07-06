/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKWENDLANDQUINTICKERNELWRAP_H
#define NATIVE_EXTENSION_VTK_VTKWENDLANDQUINTICKERNELWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkWendlandQuinticKernel.h>

#include "vtkSPHKernelWrap.h"
#include "../../plus/plus.h"

class VtkWendlandQuinticKernelWrap : public VtkSPHKernelWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitPtpl();
		static void ConstructorGetter(
			v8::Local<v8::String> property,
			const Nan::PropertyCallbackInfo<v8::Value>& info);

		VtkWendlandQuinticKernelWrap(vtkSmartPointer<vtkWendlandQuinticKernel>);
		VtkWendlandQuinticKernelWrap();
		~VtkWendlandQuinticKernelWrap( );
		static Nan::Persistent<v8::FunctionTemplate> ptpl;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void ComputeDerivWeight(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void ComputeFunctionWeight(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void Initialize(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);

#ifdef VTK_NODE_PLUS_VTKWENDLANDQUINTICKERNELWRAP_CLASSDEF
		VTK_NODE_PLUS_VTKWENDLANDQUINTICKERNELWRAP_CLASSDEF
#endif
};

#endif
