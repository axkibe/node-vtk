/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKGENERICDATASETTESSELLATORWRAP_H
#define NATIVE_EXTENSION_VTK_VTKGENERICDATASETTESSELLATORWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkGenericDataSetTessellator.h>

#include "vtkUnstructuredGridAlgorithmWrap.h"
#include "../../plus/plus.h"

class VtkGenericDataSetTessellatorWrap : public VtkUnstructuredGridAlgorithmWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitPtpl();
		static void ConstructorGetter(
			v8::Local<v8::String> property,
			const Nan::PropertyCallbackInfo<v8::Value>& info);

		VtkGenericDataSetTessellatorWrap(vtkSmartPointer<vtkGenericDataSetTessellator>);
		VtkGenericDataSetTessellatorWrap();
		~VtkGenericDataSetTessellatorWrap( );
		static Nan::Persistent<v8::FunctionTemplate> ptpl;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void CreateDefaultLocator(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetKeepCellIds(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetLocator(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetMerging(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void KeepCellIdsOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void KeepCellIdsOn(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void MergingOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void MergingOn(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetKeepCellIds(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetLocator(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetMerging(const Nan::FunctionCallbackInfo<v8::Value>& info);

#ifdef VTK_NODE_PLUS_VTKGENERICDATASETTESSELLATORWRAP_CLASSDEF
		VTK_NODE_PLUS_VTKGENERICDATASETTESSELLATORWRAP_CLASSDEF
#endif
};

#endif
