/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKCOMPOSITEDATAPROBEFILTERWRAP_H
#define NATIVE_EXTENSION_VTK_VTKCOMPOSITEDATAPROBEFILTERWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkCompositeDataProbeFilter.h>

#include "vtkProbeFilterWrap.h"
#include "../../plus/plus.h"

class VtkCompositeDataProbeFilterWrap : public VtkProbeFilterWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitPtpl();
		static void ConstructorGetter(
			v8::Local<v8::String> property,
			const Nan::PropertyCallbackInfo<v8::Value>& info);

		VtkCompositeDataProbeFilterWrap(vtkSmartPointer<vtkCompositeDataProbeFilter>);
		VtkCompositeDataProbeFilterWrap();
		~VtkCompositeDataProbeFilterWrap( );
		static Nan::Persistent<v8::FunctionTemplate> ptpl;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetPassPartialArrays(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void IsA(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void PassPartialArraysOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void PassPartialArraysOn(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetPassPartialArrays(const Nan::FunctionCallbackInfo<v8::Value>& info);

#ifdef VTK_NODE_PLUS_VTKCOMPOSITEDATAPROBEFILTERWRAP_CLASSDEF
		VTK_NODE_PLUS_VTKCOMPOSITEDATAPROBEFILTERWRAP_CLASSDEF
#endif
};

#endif
