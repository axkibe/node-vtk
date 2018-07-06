/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKBACKGROUNDCOLORMONITORWRAP_H
#define NATIVE_EXTENSION_VTK_VTKBACKGROUNDCOLORMONITORWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkBackgroundColorMonitor.h>

#include "vtkObjectWrap.h"
#include "../../plus/plus.h"

class VtkBackgroundColorMonitorWrap : public VtkObjectWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitPtpl();
		static void ConstructorGetter(
			v8::Local<v8::String> property,
			const Nan::PropertyCallbackInfo<v8::Value>& info);

		VtkBackgroundColorMonitorWrap(vtkSmartPointer<vtkBackgroundColorMonitor>);
		VtkBackgroundColorMonitorWrap();
		~VtkBackgroundColorMonitorWrap( );
		static Nan::Persistent<v8::FunctionTemplate> ptpl;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void StateChanged(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void Update(const Nan::FunctionCallbackInfo<v8::Value>& info);

#ifdef VTK_NODE_PLUS_VTKBACKGROUNDCOLORMONITORWRAP_CLASSDEF
		VTK_NODE_PLUS_VTKBACKGROUNDCOLORMONITORWRAP_CLASSDEF
#endif
};

#endif