/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKIMAGESLICEWRAP_H
#define NATIVE_EXTENSION_VTK_VTKIMAGESLICEWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkImageSlice.h>

#include "vtkProp3DWrap.h"
#include "../../plus/plus.h"

class VtkImageSliceWrap : public VtkProp3DWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitPtpl();
		static void ConstructorGetter(
			v8::Local<v8::String> property,
			const Nan::PropertyCallbackInfo<v8::Value>& info);

		VtkImageSliceWrap(vtkSmartPointer<vtkImageSlice>);
		VtkImageSliceWrap();
		~VtkImageSliceWrap( );
		static Nan::Persistent<v8::FunctionTemplate> ptpl;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void GetBounds(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetImages(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetMapper(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetMaxXBound(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetMaxYBound(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetMaxZBound(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetMinXBound(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetMinYBound(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetMinZBound(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetProperty(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void HasTranslucentPolygonalGeometry(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void IsA(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void ReleaseGraphicsResources(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void Render(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void RenderOpaqueGeometry(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void RenderOverlay(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void RenderTranslucentPolygonalGeometry(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetMapper(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetProperty(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetStackedImagePass(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void ShallowCopy(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void Update(const Nan::FunctionCallbackInfo<v8::Value>& info);

#ifdef VTK_NODE_PLUS_VTKIMAGESLICEWRAP_CLASSDEF
		VTK_NODE_PLUS_VTKIMAGESLICEWRAP_CLASSDEF
#endif
};

#endif
