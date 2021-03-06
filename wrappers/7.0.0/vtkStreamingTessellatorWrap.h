/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKSTREAMINGTESSELLATORWRAP_H
#define NATIVE_EXTENSION_VTK_VTKSTREAMINGTESSELLATORWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkStreamingTessellator.h>

#include "vtkObjectWrap.h"
#include "../../plus/plus.h"

class VtkStreamingTessellatorWrap : public VtkObjectWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitPtpl();
		static void ConstructorGetter(
			v8::Local<v8::String> property,
			const Nan::PropertyCallbackInfo<v8::Value>& info);

		VtkStreamingTessellatorWrap(vtkSmartPointer<vtkStreamingTessellator>);
		VtkStreamingTessellatorWrap();
		~VtkStreamingTessellatorWrap( );
		static Nan::Persistent<v8::FunctionTemplate> ptpl;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetEmbeddingDimension(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetFieldSize(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetMaximumNumberOfSubdivisions(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetSubdivisionAlgorithm(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void IsA(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void ResetCounts(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetEmbeddingDimension(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetFieldSize(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetMaximumNumberOfSubdivisions(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetSubdivisionAlgorithm(const Nan::FunctionCallbackInfo<v8::Value>& info);

#ifdef VTK_NODE_PLUS_VTKSTREAMINGTESSELLATORWRAP_CLASSDEF
		VTK_NODE_PLUS_VTKSTREAMINGTESSELLATORWRAP_CLASSDEF
#endif
};

#endif
