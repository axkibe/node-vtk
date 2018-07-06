/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKXYPLOTWIDGETWRAP_H
#define NATIVE_EXTENSION_VTK_VTKXYPLOTWIDGETWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkXYPlotWidget.h>

#include "vtkInteractorObserverWrap.h"
#include "../../plus/plus.h"

class VtkXYPlotWidgetWrap : public VtkInteractorObserverWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitPtpl();
		static void ConstructorGetter(
			v8::Local<v8::String> property,
			const Nan::PropertyCallbackInfo<v8::Value>& info);

		VtkXYPlotWidgetWrap(vtkSmartPointer<vtkXYPlotWidget>);
		VtkXYPlotWidgetWrap();
		~VtkXYPlotWidgetWrap( );
		static Nan::Persistent<v8::FunctionTemplate> ptpl;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void GetXYPlotActor(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetEnabled(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetXYPlotActor(const Nan::FunctionCallbackInfo<v8::Value>& info);

#ifdef VTK_NODE_PLUS_VTKXYPLOTWIDGETWRAP_CLASSDEF
		VTK_NODE_PLUS_VTKXYPLOTWIDGETWRAP_CLASSDEF
#endif
};

#endif
