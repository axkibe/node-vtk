/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKTYPEINT16ARRAYWRAP_H
#define NATIVE_EXTENSION_VTK_VTKTYPEINT16ARRAYWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkTypeInt16Array.h>

#include "vtkShortArrayWrap.h"
#include "../../plus/plus.h"

class VtkTypeInt16ArrayWrap : public VtkShortArrayWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitPtpl();
		static void ConstructorGetter(
			v8::Local<v8::String> property,
			const Nan::PropertyCallbackInfo<v8::Value>& info);

		VtkTypeInt16ArrayWrap(vtkSmartPointer<vtkTypeInt16Array>);
		VtkTypeInt16ArrayWrap();
		~VtkTypeInt16ArrayWrap( );
		static Nan::Persistent<v8::FunctionTemplate> ptpl;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void FastDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);

#ifdef VTK_NODE_PLUS_VTKTYPEINT16ARRAYWRAP_CLASSDEF
		VTK_NODE_PLUS_VTKTYPEINT16ARRAYWRAP_CLASSDEF
#endif
};

#endif
