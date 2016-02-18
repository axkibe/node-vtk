/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKMUTABLEDIRECTEDGRAPHWRAP_H
#define NATIVE_EXTENSION_VTK_VTKMUTABLEDIRECTEDGRAPHWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkMutableDirectedGraph.h>

#include "vtkDirectedGraphWrap.h"
#include "../../plus/plus.h"

class VtkMutableDirectedGraphWrap : public VtkDirectedGraphWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitPtpl();
		static void ConstructorGetter(
			v8::Local<v8::String> property,
			const Nan::PropertyCallbackInfo<v8::Value>& info);

		VtkMutableDirectedGraphWrap(vtkSmartPointer<vtkMutableDirectedGraph>);
		VtkMutableDirectedGraphWrap();
		~VtkMutableDirectedGraphWrap( );
		static Nan::Persistent<v8::FunctionTemplate> ptpl;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void IsA(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void LazyAddVertex(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void RemoveEdges(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void RemoveVertices(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);

#ifdef VTK_NODE_PLUS_VTKMUTABLEDIRECTEDGRAPHWRAP_CLASSDEF
		VTK_NODE_PLUS_VTKMUTABLEDIRECTEDGRAPHWRAP_CLASSDEF
#endif
};

#endif
