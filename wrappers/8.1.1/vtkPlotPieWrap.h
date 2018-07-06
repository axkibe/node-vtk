/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKPLOTPIEWRAP_H
#define NATIVE_EXTENSION_VTK_VTKPLOTPIEWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkPlotPie.h>

#include "vtkPlotWrap.h"
#include "../../plus/plus.h"

class VtkPlotPieWrap : public VtkPlotWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitPtpl();
		static void ConstructorGetter(
			v8::Local<v8::String> property,
			const Nan::PropertyCallbackInfo<v8::Value>& info);

		VtkPlotPieWrap(vtkSmartPointer<vtkPlotPie>);
		VtkPlotPieWrap();
		~VtkPlotPieWrap( );
		static Nan::Persistent<v8::FunctionTemplate> ptpl;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void GetColorSeries(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetDimensions(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void Paint(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetColorSeries(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetDimensions(const Nan::FunctionCallbackInfo<v8::Value>& info);

#ifdef VTK_NODE_PLUS_VTKPLOTPIEWRAP_CLASSDEF
		VTK_NODE_PLUS_VTKPLOTPIEWRAP_CLASSDEF
#endif
};

#endif
