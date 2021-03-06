/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKINCREMENTALOCTREENODEWRAP_H
#define NATIVE_EXTENSION_VTK_VTKINCREMENTALOCTREENODEWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkIncrementalOctreeNode.h>

#include "vtkObjectWrap.h"
#include "../../plus/plus.h"

class VtkIncrementalOctreeNodeWrap : public VtkObjectWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitPtpl();
		static void ConstructorGetter(
			v8::Local<v8::String> property,
			const Nan::PropertyCallbackInfo<v8::Value>& info);

		VtkIncrementalOctreeNodeWrap(vtkSmartPointer<vtkIncrementalOctreeNode>);
		VtkIncrementalOctreeNodeWrap();
		~VtkIncrementalOctreeNodeWrap( );
		static Nan::Persistent<v8::FunctionTemplate> ptpl;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void ContainsPoint(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void ContainsPointByData(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void DeleteChildNodes(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void ExportAllPointIdsByInsertion(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetBounds(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetChild(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetChildIndex(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetDistance2ToBoundary(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetDistance2ToInnerBoundary(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetMaxBounds(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetMinBounds(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetNumberOfPoints(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetPointIdSet(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void IsLeaf(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetBounds(const Nan::FunctionCallbackInfo<v8::Value>& info);

#ifdef VTK_NODE_PLUS_VTKINCREMENTALOCTREENODEWRAP_CLASSDEF
		VTK_NODE_PLUS_VTKINCREMENTALOCTREENODEWRAP_CLASSDEF
#endif
};

#endif
