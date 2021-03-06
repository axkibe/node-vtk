/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKBORDERWIDGETWRAP_H
#define NATIVE_EXTENSION_VTK_VTKBORDERWIDGETWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkBorderWidget.h>

#include "vtkAbstractWidgetWrap.h"
#include "../../plus/plus.h"

class VtkBorderWidgetWrap : public VtkAbstractWidgetWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitPtpl();
		static void ConstructorGetter(
			v8::Local<v8::String> property,
			const Nan::PropertyCallbackInfo<v8::Value>& info);

		VtkBorderWidgetWrap(vtkSmartPointer<vtkBorderWidget>);
		VtkBorderWidgetWrap();
		~VtkBorderWidgetWrap( );
		static Nan::Persistent<v8::FunctionTemplate> ptpl;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void CreateDefaultRepresentation(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetBorderRepresentation(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetResizable(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetSelectable(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void ResizableOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void ResizableOn(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SelectableOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SelectableOn(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetRepresentation(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetResizable(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetSelectable(const Nan::FunctionCallbackInfo<v8::Value>& info);

#ifdef VTK_NODE_PLUS_VTKBORDERWIDGETWRAP_CLASSDEF
		VTK_NODE_PLUS_VTKBORDERWIDGETWRAP_CLASSDEF
#endif
};

#endif
