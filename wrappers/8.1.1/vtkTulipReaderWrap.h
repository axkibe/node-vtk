/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKTULIPREADERWRAP_H
#define NATIVE_EXTENSION_VTK_VTKTULIPREADERWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkTulipReader.h>

#include "vtkUndirectedGraphAlgorithmWrap.h"
#include "../../plus/plus.h"

class VtkTulipReaderWrap : public VtkUndirectedGraphAlgorithmWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitPtpl();
		static void ConstructorGetter(
			v8::Local<v8::String> property,
			const Nan::PropertyCallbackInfo<v8::Value>& info);

		VtkTulipReaderWrap(vtkSmartPointer<vtkTulipReader>);
		VtkTulipReaderWrap();
		~VtkTulipReaderWrap( );
		static Nan::Persistent<v8::FunctionTemplate> ptpl;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void GetFileName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetFileName(const Nan::FunctionCallbackInfo<v8::Value>& info);

#ifdef VTK_NODE_PLUS_VTKTULIPREADERWRAP_CLASSDEF
		VTK_NODE_PLUS_VTKTULIPREADERWRAP_CLASSDEF
#endif
};

#endif
