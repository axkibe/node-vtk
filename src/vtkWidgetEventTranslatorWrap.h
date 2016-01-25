/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKWIDGETEVENTTRANSLATORWRAP_H
#define NATIVE_EXTENSION_VTK_VTKWIDGETEVENTTRANSLATORWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkWidgetEventTranslator.h>

#include "vtkObjectWrap.h"

class VtkWidgetEventTranslatorWrap : public VtkObjectWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitTpl(v8::Local<v8::FunctionTemplate> tpl);

		VtkWidgetEventTranslatorWrap(vtkSmartPointer<vtkWidgetEventTranslator>);
		VtkWidgetEventTranslatorWrap();
		~VtkWidgetEventTranslatorWrap( );
		static Nan::Persistent<v8::Function> constructor;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void ClearEvents(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetTranslation(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void IsA(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void RemoveTranslation(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetTranslation(const Nan::FunctionCallbackInfo<v8::Value>& info);
};

#endif
