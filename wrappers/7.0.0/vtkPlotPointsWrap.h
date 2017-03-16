/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKPLOTPOINTSWRAP_H
#define NATIVE_EXTENSION_VTK_VTKPLOTPOINTSWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkPlotPoints.h>

#include "vtkPlotWrap.h"
#include "../../plus/plus.h"

class VtkPlotPointsWrap : public VtkPlotWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitPtpl();
		static void ConstructorGetter(
			v8::Local<v8::String> property,
			const Nan::PropertyCallbackInfo<v8::Value>& info);

		VtkPlotPointsWrap(vtkSmartPointer<vtkPlotPoints>);
		VtkPlotPointsWrap();
		~VtkPlotPointsWrap( );
		static Nan::Persistent<v8::FunctionTemplate> ptpl;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void CreateDefaultLookupTable(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetBounds(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetLookupTable(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetMarkerSize(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetMarkerStyle(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetScalarVisibility(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetUnscaledInputBounds(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void IsA(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void Paint(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void ScalarVisibilityOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void ScalarVisibilityOn(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetLookupTable(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetMarkerSize(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetMarkerStyle(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetScalarVisibility(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void Update(const Nan::FunctionCallbackInfo<v8::Value>& info);

#ifdef VTK_NODE_PLUS_VTKPLOTPOINTSWRAP_CLASSDEF
		VTK_NODE_PLUS_VTKPLOTPOINTSWRAP_CLASSDEF
#endif
};

#endif
