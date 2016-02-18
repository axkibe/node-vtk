/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKFREETYPELABELRENDERSTRATEGYWRAP_H
#define NATIVE_EXTENSION_VTK_VTKFREETYPELABELRENDERSTRATEGYWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkFreeTypeLabelRenderStrategy.h>

#include "vtkLabelRenderStrategyWrap.h"
#include "../../plus/plus.h"

class VtkFreeTypeLabelRenderStrategyWrap : public VtkLabelRenderStrategyWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitPtpl();
		static void ConstructorGetter(
			v8::Local<v8::String> property,
			const Nan::PropertyCallbackInfo<v8::Value>& info);

		VtkFreeTypeLabelRenderStrategyWrap(vtkSmartPointer<vtkFreeTypeLabelRenderStrategy>);
		VtkFreeTypeLabelRenderStrategyWrap();
		~VtkFreeTypeLabelRenderStrategyWrap( );
		static Nan::Persistent<v8::FunctionTemplate> ptpl;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void IsA(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void ReleaseGraphicsResources(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SupportsBoundedSize(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SupportsRotation(const Nan::FunctionCallbackInfo<v8::Value>& info);

#ifdef VTK_NODE_PLUS_VTKFREETYPELABELRENDERSTRATEGYWRAP_CLASSDEF
		VTK_NODE_PLUS_VTKFREETYPELABELRENDERSTRATEGYWRAP_CLASSDEF
#endif
};

#endif
