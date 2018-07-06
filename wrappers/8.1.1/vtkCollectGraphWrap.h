/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKCOLLECTGRAPHWRAP_H
#define NATIVE_EXTENSION_VTK_VTKCOLLECTGRAPHWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkCollectGraph.h>

#include "vtkGraphAlgorithmWrap.h"
#include "../../plus/plus.h"

class VtkCollectGraphWrap : public VtkGraphAlgorithmWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitPtpl();
		static void ConstructorGetter(
			v8::Local<v8::String> property,
			const Nan::PropertyCallbackInfo<v8::Value>& info);

		VtkCollectGraphWrap(vtkSmartPointer<vtkCollectGraph>);
		VtkCollectGraphWrap();
		~VtkCollectGraphWrap( );
		static Nan::Persistent<v8::FunctionTemplate> ptpl;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void GetController(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetOutputType(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetPassThrough(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetSocketController(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void PassThroughOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void PassThroughOn(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetController(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetOutputType(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetPassThrough(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetSocketController(const Nan::FunctionCallbackInfo<v8::Value>& info);

#ifdef VTK_NODE_PLUS_VTKCOLLECTGRAPHWRAP_CLASSDEF
		VTK_NODE_PLUS_VTKCOLLECTGRAPHWRAP_CLASSDEF
#endif
};

#endif
