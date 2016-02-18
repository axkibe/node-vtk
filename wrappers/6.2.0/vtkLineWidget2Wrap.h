/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKLINEWIDGET2WRAP_H
#define NATIVE_EXTENSION_VTK_VTKLINEWIDGET2WRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkLineWidget2.h>

#include "vtkAbstractWidgetWrap.h"
#include "../../plus/plus.h"

class VtkLineWidget2Wrap : public VtkAbstractWidgetWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitPtpl();
		static void ConstructorGetter(
			v8::Local<v8::String> property,
			const Nan::PropertyCallbackInfo<v8::Value>& info);

		VtkLineWidget2Wrap(vtkSmartPointer<vtkLineWidget2>);
		VtkLineWidget2Wrap();
		~VtkLineWidget2Wrap( );
		static Nan::Persistent<v8::FunctionTemplate> ptpl;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void CreateDefaultRepresentation(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetLineRepresentation(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void IsA(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetEnabled(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetProcessEvents(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetRepresentation(const Nan::FunctionCallbackInfo<v8::Value>& info);

#ifdef VTK_NODE_PLUS_VTKLINEWIDGET2WRAP_CLASSDEF
		VTK_NODE_PLUS_VTKLINEWIDGET2WRAP_CLASSDEF
#endif
};

#endif
