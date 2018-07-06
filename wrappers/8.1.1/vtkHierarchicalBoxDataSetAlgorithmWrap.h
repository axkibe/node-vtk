/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKHIERARCHICALBOXDATASETALGORITHMWRAP_H
#define NATIVE_EXTENSION_VTK_VTKHIERARCHICALBOXDATASETALGORITHMWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkHierarchicalBoxDataSetAlgorithm.h>

#include "vtkAlgorithmWrap.h"
#include "../../plus/plus.h"

class VtkHierarchicalBoxDataSetAlgorithmWrap : public VtkAlgorithmWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitPtpl();
		static void ConstructorGetter(
			v8::Local<v8::String> property,
			const Nan::PropertyCallbackInfo<v8::Value>& info);

		VtkHierarchicalBoxDataSetAlgorithmWrap(vtkSmartPointer<vtkHierarchicalBoxDataSetAlgorithm>);
		VtkHierarchicalBoxDataSetAlgorithmWrap();
		~VtkHierarchicalBoxDataSetAlgorithmWrap( );
		static Nan::Persistent<v8::FunctionTemplate> ptpl;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void GetOutput(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetInputData(const Nan::FunctionCallbackInfo<v8::Value>& info);

#ifdef VTK_NODE_PLUS_VTKHIERARCHICALBOXDATASETALGORITHMWRAP_CLASSDEF
		VTK_NODE_PLUS_VTKHIERARCHICALBOXDATASETALGORITHMWRAP_CLASSDEF
#endif
};

#endif
