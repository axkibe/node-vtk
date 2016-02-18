/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKSYNCHRONIZEDTEMPLATESCUTTER3DWRAP_H
#define NATIVE_EXTENSION_VTK_VTKSYNCHRONIZEDTEMPLATESCUTTER3DWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkSynchronizedTemplatesCutter3D.h>

#include "vtkSynchronizedTemplates3DWrap.h"
#include "../../plus/plus.h"

class VtkSynchronizedTemplatesCutter3DWrap : public VtkSynchronizedTemplates3DWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitPtpl();
		static void ConstructorGetter(
			v8::Local<v8::String> property,
			const Nan::PropertyCallbackInfo<v8::Value>& info);

		VtkSynchronizedTemplatesCutter3DWrap(vtkSmartPointer<vtkSynchronizedTemplatesCutter3D>);
		VtkSynchronizedTemplatesCutter3DWrap();
		~VtkSynchronizedTemplatesCutter3DWrap( );
		static Nan::Persistent<v8::FunctionTemplate> ptpl;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetCutFunction(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetOutputPointsPrecision(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetOutputPointsPrecisionMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetOutputPointsPrecisionMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void IsA(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetCutFunction(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetOutputPointsPrecision(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void ThreadedExecute(const Nan::FunctionCallbackInfo<v8::Value>& info);

#ifdef VTK_NODE_PLUS_VTKSYNCHRONIZEDTEMPLATESCUTTER3DWRAP_CLASSDEF
		VTK_NODE_PLUS_VTKSYNCHRONIZEDTEMPLATESCUTTER3DWRAP_CLASSDEF
#endif
};

#endif
