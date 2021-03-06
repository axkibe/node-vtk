/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKSEEDWIDGETWRAP_H
#define NATIVE_EXTENSION_VTK_VTKSEEDWIDGETWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkSeedWidget.h>

#include "vtkAbstractWidgetWrap.h"
#include "../../plus/plus.h"

class VtkSeedWidgetWrap : public VtkAbstractWidgetWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitPtpl();
		static void ConstructorGetter(
			v8::Local<v8::String> property,
			const Nan::PropertyCallbackInfo<v8::Value>& info);

		VtkSeedWidgetWrap(vtkSmartPointer<vtkSeedWidget>);
		VtkSeedWidgetWrap();
		~VtkSeedWidgetWrap( );
		static Nan::Persistent<v8::FunctionTemplate> ptpl;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void CompleteInteraction(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void CreateDefaultRepresentation(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void CreateNewHandle(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void DeleteSeed(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetSeed(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetSeedRepresentation(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetWidgetState(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void IsA(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void RestartInteraction(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetCurrentRenderer(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetEnabled(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetInteractor(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetProcessEvents(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetRepresentation(const Nan::FunctionCallbackInfo<v8::Value>& info);

#ifdef VTK_NODE_PLUS_VTKSEEDWIDGETWRAP_CLASSDEF
		VTK_NODE_PLUS_VTKSEEDWIDGETWRAP_CLASSDEF
#endif
};

#endif
