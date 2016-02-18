/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKPLOTBAGWRAP_H
#define NATIVE_EXTENSION_VTK_VTKPLOTBAGWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkPlotBag.h>

#include "vtkPlotPointsWrap.h"
#include "../../plus/plus.h"

class VtkPlotBagWrap : public VtkPlotPointsWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitPtpl();
		static void ConstructorGetter(
			v8::Local<v8::String> property,
			const Nan::PropertyCallbackInfo<v8::Value>& info);

		VtkPlotBagWrap(vtkSmartPointer<vtkPlotBag>);
		VtkPlotBagWrap();
		~VtkPlotBagWrap( );
		static Nan::Persistent<v8::FunctionTemplate> ptpl;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetLabels(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void IsA(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void Paint(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetInputData(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void Update(const Nan::FunctionCallbackInfo<v8::Value>& info);

#ifdef VTK_NODE_PLUS_VTKPLOTBAGWRAP_CLASSDEF
		VTK_NODE_PLUS_VTKPLOTBAGWRAP_CLASSDEF
#endif
};

#endif
