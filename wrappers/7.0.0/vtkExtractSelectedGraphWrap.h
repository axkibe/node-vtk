/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKEXTRACTSELECTEDGRAPHWRAP_H
#define NATIVE_EXTENSION_VTK_VTKEXTRACTSELECTEDGRAPHWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkExtractSelectedGraph.h>

#include "vtkGraphAlgorithmWrap.h"
#include "../../plus/plus.h"

class VtkExtractSelectedGraphWrap : public VtkGraphAlgorithmWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitPtpl();
		static void ConstructorGetter(
			v8::Local<v8::String> property,
			const Nan::PropertyCallbackInfo<v8::Value>& info);

		VtkExtractSelectedGraphWrap(vtkSmartPointer<vtkExtractSelectedGraph>);
		VtkExtractSelectedGraphWrap();
		~VtkExtractSelectedGraphWrap( );
		static Nan::Persistent<v8::FunctionTemplate> ptpl;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void FillInputPortInformation(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetRemoveIsolatedVertices(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void IsA(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void RemoveIsolatedVerticesOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void RemoveIsolatedVerticesOn(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetAnnotationLayersConnection(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetRemoveIsolatedVertices(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetSelectionConnection(const Nan::FunctionCallbackInfo<v8::Value>& info);

#ifdef VTK_NODE_PLUS_VTKEXTRACTSELECTEDGRAPHWRAP_CLASSDEF
		VTK_NODE_PLUS_VTKEXTRACTSELECTEDGRAPHWRAP_CLASSDEF
#endif
};

#endif
