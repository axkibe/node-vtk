/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKWIDGETCALLBACKMAPPERWRAP_H
#define NATIVE_EXTENSION_VTK_VTKWIDGETCALLBACKMAPPERWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkWidgetCallbackMapper.h>

#include "vtkObjectWrap.h"
#include "../../plus/plus.h"

class VtkWidgetCallbackMapperWrap : public VtkObjectWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitPtpl();
		static void ConstructorGetter(
			v8::Local<v8::String> property,
			const Nan::PropertyCallbackInfo<v8::Value>& info);

		VtkWidgetCallbackMapperWrap(vtkSmartPointer<vtkWidgetCallbackMapper>);
		VtkWidgetCallbackMapperWrap();
		~VtkWidgetCallbackMapperWrap( );
		static Nan::Persistent<v8::FunctionTemplate> ptpl;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetEventTranslator(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void IsA(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetEventTranslator(const Nan::FunctionCallbackInfo<v8::Value>& info);

#ifdef VTK_NODE_PLUS_VTKWIDGETCALLBACKMAPPERWRAP_CLASSDEF
		VTK_NODE_PLUS_VTKWIDGETCALLBACKMAPPERWRAP_CLASSDEF
#endif
};

#endif
