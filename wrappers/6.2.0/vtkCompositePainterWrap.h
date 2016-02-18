/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKCOMPOSITEPAINTERWRAP_H
#define NATIVE_EXTENSION_VTK_VTKCOMPOSITEPAINTERWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkCompositePainter.h>

#include "vtkPainterWrap.h"
#include "../../plus/plus.h"

class VtkCompositePainterWrap : public VtkPainterWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitPtpl();
		static void ConstructorGetter(
			v8::Local<v8::String> property,
			const Nan::PropertyCallbackInfo<v8::Value>& info);

		VtkCompositePainterWrap(vtkSmartPointer<vtkCompositePainter>);
		VtkCompositePainterWrap();
		~VtkCompositePainterWrap( );
		static Nan::Persistent<v8::FunctionTemplate> ptpl;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void DISPLAY_ATTRIBUTES(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetCompositeDataDisplayAttributes(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetOutput(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void IsA(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetCompositeDataDisplayAttributes(const Nan::FunctionCallbackInfo<v8::Value>& info);

#ifdef VTK_NODE_PLUS_VTKCOMPOSITEPAINTERWRAP_CLASSDEF
		VTK_NODE_PLUS_VTKCOMPOSITEPAINTERWRAP_CLASSDEF
#endif
};

#endif
