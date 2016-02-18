/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKGEOVIEW2DWRAP_H
#define NATIVE_EXTENSION_VTK_VTKGEOVIEW2DWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkGeoView2D.h>

#include "vtkRenderViewWrap.h"
#include "../../plus/plus.h"

class VtkGeoView2DWrap : public VtkRenderViewWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitPtpl();
		static void ConstructorGetter(
			v8::Local<v8::String> property,
			const Nan::PropertyCallbackInfo<v8::Value>& info);

		VtkGeoView2DWrap(vtkSmartPointer<vtkGeoView2D>);
		VtkGeoView2DWrap();
		~VtkGeoView2DWrap( );
		static Nan::Persistent<v8::FunctionTemplate> ptpl;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void ApplyViewTheme(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetSurface(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetTransform(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void IsA(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void Render(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetSurface(const Nan::FunctionCallbackInfo<v8::Value>& info);

#ifdef VTK_NODE_PLUS_VTKGEOVIEW2DWRAP_CLASSDEF
		VTK_NODE_PLUS_VTKGEOVIEW2DWRAP_CLASSDEF
#endif
};

#endif
