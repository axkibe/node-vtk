/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKTYPEUINT64ARRAYWRAP_H
#define NATIVE_EXTENSION_VTK_VTKTYPEUINT64ARRAYWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkTypeUInt64Array.h>

#include "vtkUnsignedLongLongArrayWrap.h"
#include "../../plus/plus.h"

class VtkTypeUInt64ArrayWrap : public VtkUnsignedLongLongArrayWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitPtpl();
		static void ConstructorGetter(
			v8::Local<v8::String> property,
			const Nan::PropertyCallbackInfo<v8::Value>& info);

		VtkTypeUInt64ArrayWrap(vtkSmartPointer<vtkTypeUInt64Array>);
		VtkTypeUInt64ArrayWrap();
		~VtkTypeUInt64ArrayWrap( );
		static Nan::Persistent<v8::FunctionTemplate> ptpl;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void FastDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);

#ifdef VTK_NODE_PLUS_VTKTYPEUINT64ARRAYWRAP_CLASSDEF
		VTK_NODE_PLUS_VTKTYPEUINT64ARRAYWRAP_CLASSDEF
#endif
};

#endif
