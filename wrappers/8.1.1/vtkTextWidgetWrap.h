/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKTEXTWIDGETWRAP_H
#define NATIVE_EXTENSION_VTK_VTKTEXTWIDGETWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkTextWidget.h>

#include "vtkBorderWidgetWrap.h"
#include "../../plus/plus.h"

class VtkTextWidgetWrap : public VtkBorderWidgetWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitPtpl();
		static void ConstructorGetter(
			v8::Local<v8::String> property,
			const Nan::PropertyCallbackInfo<v8::Value>& info);

		VtkTextWidgetWrap(vtkSmartPointer<vtkTextWidget>);
		VtkTextWidgetWrap();
		~VtkTextWidgetWrap( );
		static Nan::Persistent<v8::FunctionTemplate> ptpl;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void CreateDefaultRepresentation(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetTextActor(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetRepresentation(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetTextActor(const Nan::FunctionCallbackInfo<v8::Value>& info);

#ifdef VTK_NODE_PLUS_VTKTEXTWIDGETWRAP_CLASSDEF
		VTK_NODE_PLUS_VTKTEXTWIDGETWRAP_CLASSDEF
#endif
};

#endif