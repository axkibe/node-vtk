/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKCHARTPIEWRAP_H
#define NATIVE_EXTENSION_VTK_VTKCHARTPIEWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkChartPie.h>

#include "vtkChartWrap.h"
#include "../../plus/plus.h"

class VtkChartPieWrap : public VtkChartWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitPtpl();
		static void ConstructorGetter(
			v8::Local<v8::String> property,
			const Nan::PropertyCallbackInfo<v8::Value>& info);

		VtkChartPieWrap(vtkSmartPointer<vtkChartPie>);
		VtkChartPieWrap();
		~VtkChartPieWrap( );
		static Nan::Persistent<v8::FunctionTemplate> ptpl;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void AddPlot(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetLegend(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void Paint(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetScene(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetShowLegend(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void Update(const Nan::FunctionCallbackInfo<v8::Value>& info);

#ifdef VTK_NODE_PLUS_VTKCHARTPIEWRAP_CLASSDEF
		VTK_NODE_PLUS_VTKCHARTPIEWRAP_CLASSDEF
#endif
};

#endif
