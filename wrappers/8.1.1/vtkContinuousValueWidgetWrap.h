/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKCONTINUOUSVALUEWIDGETWRAP_H
#define NATIVE_EXTENSION_VTK_VTKCONTINUOUSVALUEWIDGETWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkContinuousValueWidget.h>

#include "vtkAbstractWidgetWrap.h"
#include "../../plus/plus.h"

class VtkContinuousValueWidgetWrap : public VtkAbstractWidgetWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitPtpl();
		static void ConstructorGetter(
			v8::Local<v8::String> property,
			const Nan::PropertyCallbackInfo<v8::Value>& info);

		VtkContinuousValueWidgetWrap(vtkSmartPointer<vtkContinuousValueWidget>);
		VtkContinuousValueWidgetWrap();
		~VtkContinuousValueWidgetWrap( );
		static Nan::Persistent<v8::FunctionTemplate> ptpl;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void GetContinuousValueWidgetRepresentation(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetRepresentation(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetValue(const Nan::FunctionCallbackInfo<v8::Value>& info);

#ifdef VTK_NODE_PLUS_VTKCONTINUOUSVALUEWIDGETWRAP_CLASSDEF
		VTK_NODE_PLUS_VTKCONTINUOUSVALUEWIDGETWRAP_CLASSDEF
#endif
};

#endif
