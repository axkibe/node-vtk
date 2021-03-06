/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKCOMPOSITEDATAPIPELINEWRAP_H
#define NATIVE_EXTENSION_VTK_VTKCOMPOSITEDATAPIPELINEWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkCompositeDataPipeline.h>

#include "vtkStreamingDemandDrivenPipelineWrap.h"
#include "../../plus/plus.h"

class VtkCompositeDataPipelineWrap : public VtkStreamingDemandDrivenPipelineWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitPtpl();
		static void ConstructorGetter(
			v8::Local<v8::String> property,
			const Nan::PropertyCallbackInfo<v8::Value>& info);

		VtkCompositeDataPipelineWrap(vtkSmartPointer<vtkCompositeDataPipeline>);
		VtkCompositeDataPipelineWrap();
		~VtkCompositeDataPipelineWrap( );
		static Nan::Persistent<v8::FunctionTemplate> ptpl;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void BLOCK_AMOUNT_OF_DETAIL(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void COMPOSITE_DATA_META_DATA(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetCompositeOutputData(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void IsA(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void LOAD_REQUESTED_BLOCKS(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void UPDATE_COMPOSITE_INDICES(const Nan::FunctionCallbackInfo<v8::Value>& info);

#ifdef VTK_NODE_PLUS_VTKCOMPOSITEDATAPIPELINEWRAP_CLASSDEF
		VTK_NODE_PLUS_VTKCOMPOSITEDATAPIPELINEWRAP_CLASSDEF
#endif
};

#endif
