/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKPDFEXPORTERWRAP_H
#define NATIVE_EXTENSION_VTK_VTKPDFEXPORTERWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkPDFExporter.h>

#include "vtkExporterWrap.h"
#include "../../plus/plus.h"

class VtkPDFExporterWrap : public VtkExporterWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitPtpl();
		static void ConstructorGetter(
			v8::Local<v8::String> property,
			const Nan::PropertyCallbackInfo<v8::Value>& info);

		VtkPDFExporterWrap(vtkSmartPointer<vtkPDFExporter>);
		VtkPDFExporterWrap();
		~VtkPDFExporterWrap( );
		static Nan::Persistent<v8::FunctionTemplate> ptpl;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void GetFileName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetTitle(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetFileName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetTitle(const Nan::FunctionCallbackInfo<v8::Value>& info);

#ifdef VTK_NODE_PLUS_VTKPDFEXPORTERWRAP_CLASSDEF
		VTK_NODE_PLUS_VTKPDFEXPORTERWRAP_CLASSDEF
#endif
};

#endif