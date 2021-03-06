/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKTREEHEATMAPITEMWRAP_H
#define NATIVE_EXTENSION_VTK_VTKTREEHEATMAPITEMWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkTreeHeatmapItem.h>

#include "vtkContextItemWrap.h"
#include "../../plus/plus.h"

class VtkTreeHeatmapItemWrap : public VtkContextItemWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitPtpl();
		static void ConstructorGetter(
			v8::Local<v8::String> property,
			const Nan::PropertyCallbackInfo<v8::Value>& info);

		VtkTreeHeatmapItemWrap(vtkSmartPointer<vtkTreeHeatmapItem>);
		VtkTreeHeatmapItemWrap();
		~VtkTreeHeatmapItemWrap( );
		static Nan::Persistent<v8::FunctionTemplate> ptpl;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void CollapseToNumberOfLeafNodes(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetBounds(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetCenter(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetColumnTree(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetDendrogram(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetHeatmap(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetOrientation(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetPrunedTree(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetSize(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetTable(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetTree(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetTreeLineWidth(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void IsA(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void ReorderTable(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void ReverseTableColumns(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void ReverseTableRows(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetColumnTree(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetDendrogram(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetHeatmap(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetOrientation(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetTable(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetTree(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetTreeColorArray(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetTreeLineWidth(const Nan::FunctionCallbackInfo<v8::Value>& info);

#ifdef VTK_NODE_PLUS_VTKTREEHEATMAPITEMWRAP_CLASSDEF
		VTK_NODE_PLUS_VTKTREEHEATMAPITEMWRAP_CLASSDEF
#endif
};

#endif
