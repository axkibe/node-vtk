/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKPLOTLINEWRAP_H
#define NATIVE_EXTENSION_VTK_VTKPLOTLINEWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkPlotLine.h>

#include "vtkPlotPointsWrap.h"
#include "../../plus/plus.h"

class VtkPlotLineWrap : public VtkPlotPointsWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitPtpl();
		static void ConstructorGetter(
			v8::Local<v8::String> property,
			const Nan::PropertyCallbackInfo<v8::Value>& info);

		VtkPlotLineWrap(vtkSmartPointer<vtkPlotLine>);
		VtkPlotLineWrap();
		~VtkPlotLineWrap( );
		static Nan::Persistent<v8::FunctionTemplate> ptpl;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void GetPolyLine(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void Paint(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void PolyLineOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void PolyLineOn(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetPolyLine(const Nan::FunctionCallbackInfo<v8::Value>& info);

#ifdef VTK_NODE_PLUS_VTKPLOTLINEWRAP_CLASSDEF
		VTK_NODE_PLUS_VTKPLOTLINEWRAP_CLASSDEF
#endif
};

#endif
