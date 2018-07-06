/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKCHACOGRAPHREADERWRAP_H
#define NATIVE_EXTENSION_VTK_VTKCHACOGRAPHREADERWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkChacoGraphReader.h>

#include "vtkUndirectedGraphAlgorithmWrap.h"
#include "../../plus/plus.h"

class VtkChacoGraphReaderWrap : public VtkUndirectedGraphAlgorithmWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitPtpl();
		static void ConstructorGetter(
			v8::Local<v8::String> property,
			const Nan::PropertyCallbackInfo<v8::Value>& info);

		VtkChacoGraphReaderWrap(vtkSmartPointer<vtkChacoGraphReader>);
		VtkChacoGraphReaderWrap();
		~VtkChacoGraphReaderWrap( );
		static Nan::Persistent<v8::FunctionTemplate> ptpl;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void GetFileName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetFileName(const Nan::FunctionCallbackInfo<v8::Value>& info);

#ifdef VTK_NODE_PLUS_VTKCHACOGRAPHREADERWRAP_CLASSDEF
		VTK_NODE_PLUS_VTKCHACOGRAPHREADERWRAP_CLASSDEF
#endif
};

#endif
