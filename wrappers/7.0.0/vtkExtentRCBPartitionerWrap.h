/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKEXTENTRCBPARTITIONERWRAP_H
#define NATIVE_EXTENSION_VTK_VTKEXTENTRCBPARTITIONERWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkExtentRCBPartitioner.h>

#include "vtkObjectWrap.h"
#include "../../plus/plus.h"

class VtkExtentRCBPartitionerWrap : public VtkObjectWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitPtpl();
		static void ConstructorGetter(
			v8::Local<v8::String> property,
			const Nan::PropertyCallbackInfo<v8::Value>& info);

		VtkExtentRCBPartitionerWrap(vtkSmartPointer<vtkExtentRCBPartitioner>);
		VtkExtentRCBPartitionerWrap();
		~VtkExtentRCBPartitionerWrap( );
		static Nan::Persistent<v8::FunctionTemplate> ptpl;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void DuplicateNodesOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void DuplicateNodesOn(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetDuplicateNodes(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetNumExtents(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetNumberOfGhostLayers(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetPartitionExtent(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void IsA(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void Partition(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetDuplicateNodes(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetGlobalExtent(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetNumberOfGhostLayers(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetNumberOfPartitions(const Nan::FunctionCallbackInfo<v8::Value>& info);

#ifdef VTK_NODE_PLUS_VTKEXTENTRCBPARTITIONERWRAP_CLASSDEF
		VTK_NODE_PLUS_VTKEXTENTRCBPARTITIONERWRAP_CLASSDEF
#endif
};

#endif
