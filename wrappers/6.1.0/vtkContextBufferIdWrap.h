/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKCONTEXTBUFFERIDWRAP_H
#define NATIVE_EXTENSION_VTK_VTKCONTEXTBUFFERIDWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkContextBufferId.h>

#include "vtkAbstractContextBufferIdWrap.h"
#include "../../plus/plus.h"

class VtkContextBufferIdWrap : public VtkAbstractContextBufferIdWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitPtpl();
		static void ConstructorGetter(
			v8::Local<v8::String> property,
			const Nan::PropertyCallbackInfo<v8::Value>& info);

		VtkContextBufferIdWrap(vtkSmartPointer<vtkContextBufferId>);
		VtkContextBufferIdWrap();
		~VtkContextBufferIdWrap( );
		static Nan::Persistent<v8::FunctionTemplate> ptpl;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void Allocate(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void IsA(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void IsAllocated(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetValues(const Nan::FunctionCallbackInfo<v8::Value>& info);

#ifdef VTK_NODE_PLUS_VTKCONTEXTBUFFERIDWRAP_CLASSDEF
		VTK_NODE_PLUS_VTKCONTEXTBUFFERIDWRAP_CLASSDEF
#endif
};

#endif
