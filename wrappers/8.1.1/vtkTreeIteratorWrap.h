/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKTREEITERATORWRAP_H
#define NATIVE_EXTENSION_VTK_VTKTREEITERATORWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkTreeIterator.h>

#include "vtkObjectWrap.h"
#include "../../plus/plus.h"

class VtkTreeIteratorWrap : public VtkObjectWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitPtpl();
		static void ConstructorGetter(
			v8::Local<v8::String> property,
			const Nan::PropertyCallbackInfo<v8::Value>& info);

		VtkTreeIteratorWrap(vtkSmartPointer<vtkTreeIterator>);
		VtkTreeIteratorWrap();
		~VtkTreeIteratorWrap( );
		static Nan::Persistent<v8::FunctionTemplate> ptpl;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void GetTree(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void HasNext(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void Restart(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetTree(const Nan::FunctionCallbackInfo<v8::Value>& info);

#ifdef VTK_NODE_PLUS_VTKTREEITERATORWRAP_CLASSDEF
		VTK_NODE_PLUS_VTKTREEITERATORWRAP_CLASSDEF
#endif
};

#endif
