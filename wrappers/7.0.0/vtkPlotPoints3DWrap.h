/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKPLOTPOINTS3DWRAP_H
#define NATIVE_EXTENSION_VTK_VTKPLOTPOINTS3DWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkPlotPoints3D.h>

#include "vtkPlot3DWrap.h"
#include "../../plus/plus.h"

class VtkPlotPoints3DWrap : public VtkPlot3DWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitPtpl();
		static void ConstructorGetter(
			v8::Local<v8::String> property,
			const Nan::PropertyCallbackInfo<v8::Value>& info);

		VtkPlotPoints3DWrap(vtkSmartPointer<vtkPlotPoints3D>);
		VtkPlotPoints3DWrap();
		~VtkPlotPoints3DWrap( );
		static Nan::Persistent<v8::FunctionTemplate> ptpl;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void IsA(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void Paint(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);

#ifdef VTK_NODE_PLUS_VTKPLOTPOINTS3DWRAP_CLASSDEF
		VTK_NODE_PLUS_VTKPLOTPOINTS3DWRAP_CLASSDEF
#endif
};

#endif
