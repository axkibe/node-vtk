/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKCONELAYOUTSTRATEGYWRAP_H
#define NATIVE_EXTENSION_VTK_VTKCONELAYOUTSTRATEGYWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkConeLayoutStrategy.h>

#include "vtkGraphLayoutStrategyWrap.h"
#include "../../plus/plus.h"

class VtkConeLayoutStrategyWrap : public VtkGraphLayoutStrategyWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitPtpl();
		static void ConstructorGetter(
			v8::Local<v8::String> property,
			const Nan::PropertyCallbackInfo<v8::Value>& info);

		VtkConeLayoutStrategyWrap(vtkSmartPointer<vtkConeLayoutStrategy>);
		VtkConeLayoutStrategyWrap();
		~VtkConeLayoutStrategyWrap( );
		static Nan::Persistent<v8::FunctionTemplate> ptpl;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void CompressionOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void CompressionOn(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetCompactness(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetCompression(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetSpacing(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void IsA(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void Layout(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetCompactness(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetCompression(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetSpacing(const Nan::FunctionCallbackInfo<v8::Value>& info);

#ifdef VTK_NODE_PLUS_VTKCONELAYOUTSTRATEGYWRAP_CLASSDEF
		VTK_NODE_PLUS_VTKCONELAYOUTSTRATEGYWRAP_CLASSDEF
#endif
};

#endif
