/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKBITARRAYITERATORWRAP_H
#define NATIVE_EXTENSION_VTK_VTKBITARRAYITERATORWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkBitArrayIterator.h>

#include "vtkArrayIteratorWrap.h"
#include "../../plus/plus.h"

class VtkBitArrayIteratorWrap : public VtkArrayIteratorWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitPtpl();
		static void ConstructorGetter(
			v8::Local<v8::String> property,
			const Nan::PropertyCallbackInfo<v8::Value>& info);

		VtkBitArrayIteratorWrap(vtkSmartPointer<vtkBitArrayIterator>);
		VtkBitArrayIteratorWrap();
		~VtkBitArrayIteratorWrap( );
		static Nan::Persistent<v8::FunctionTemplate> ptpl;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void GetArray(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetDataType(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetDataTypeSize(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetNumberOfComponents(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void Initialize(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void IsA(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);

#ifdef VTK_NODE_PLUS_VTKBITARRAYITERATORWRAP_CLASSDEF
		VTK_NODE_PLUS_VTKBITARRAYITERATORWRAP_CLASSDEF
#endif
};

#endif
