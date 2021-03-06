/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKTREEMAPVIEWWRAP_H
#define NATIVE_EXTENSION_VTK_VTKTREEMAPVIEWWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkTreeMapView.h>

#include "vtkTreeAreaViewWrap.h"
#include "../../plus/plus.h"

class VtkTreeMapViewWrap : public VtkTreeAreaViewWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitPtpl();
		static void ConstructorGetter(
			v8::Local<v8::String> property,
			const Nan::PropertyCallbackInfo<v8::Value>& info);

		VtkTreeMapViewWrap(vtkSmartPointer<vtkTreeMapView>);
		VtkTreeMapViewWrap();
		~VtkTreeMapViewWrap( );
		static Nan::Persistent<v8::FunctionTemplate> ptpl;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void GetFontSizeRange(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetFontSizeRange(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetLayoutStrategy(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetLayoutStrategyToBox(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetLayoutStrategyToSliceAndDice(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetLayoutStrategyToSquarify(const Nan::FunctionCallbackInfo<v8::Value>& info);

#ifdef VTK_NODE_PLUS_VTKTREEMAPVIEWWRAP_CLASSDEF
		VTK_NODE_PLUS_VTKTREEMAPVIEWWRAP_CLASSDEF
#endif
};

#endif
