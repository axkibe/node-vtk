/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKSVGEXPORTERWRAP_H
#define NATIVE_EXTENSION_VTK_VTKSVGEXPORTERWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkSVGExporter.h>

#include "vtkExporterWrap.h"
#include "../../plus/plus.h"

class VtkSVGExporterWrap : public VtkExporterWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitPtpl();
		static void ConstructorGetter(
			v8::Local<v8::String> property,
			const Nan::PropertyCallbackInfo<v8::Value>& info);

		VtkSVGExporterWrap(vtkSmartPointer<vtkSVGExporter>);
		VtkSVGExporterWrap();
		~VtkSVGExporterWrap( );
		static Nan::Persistent<v8::FunctionTemplate> ptpl;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void DrawBackgroundOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void DrawBackgroundOn(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetDescription(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetDrawBackground(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetFileName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetSubdivisionThreshold(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetTextAsPath(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetTitle(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetDescription(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetDrawBackground(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetFileName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetSubdivisionThreshold(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetTextAsPath(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetTitle(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void TextAsPathOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void TextAsPathOn(const Nan::FunctionCallbackInfo<v8::Value>& info);

#ifdef VTK_NODE_PLUS_VTKSVGEXPORTERWRAP_CLASSDEF
		VTK_NODE_PLUS_VTKSVGEXPORTERWRAP_CLASSDEF
#endif
};

#endif
