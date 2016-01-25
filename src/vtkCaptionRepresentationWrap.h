/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKCAPTIONREPRESENTATIONWRAP_H
#define NATIVE_EXTENSION_VTK_VTKCAPTIONREPRESENTATIONWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkCaptionRepresentation.h>

#include "vtkBorderRepresentationWrap.h"

class VtkCaptionRepresentationWrap : public VtkBorderRepresentationWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitTpl(v8::Local<v8::FunctionTemplate> tpl);

		VtkCaptionRepresentationWrap(vtkSmartPointer<vtkCaptionRepresentation>);
		VtkCaptionRepresentationWrap();
		~VtkCaptionRepresentationWrap( );
		static Nan::Persistent<v8::Function> constructor;
		static Nan::Persistent<v8::FunctionTemplate> ptpl;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void BuildRepresentation(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetActors2D(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetAnchorRepresentation(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetCaptionActor2D(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetFontFactor(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetFontFactorMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetFontFactorMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void HasTranslucentPolygonalGeometry(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void IsA(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void ReleaseGraphicsResources(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void RenderOpaqueGeometry(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void RenderOverlay(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void RenderTranslucentPolygonalGeometry(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetAnchorRepresentation(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetCaptionActor2D(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetFontFactor(const Nan::FunctionCallbackInfo<v8::Value>& info);
};

#endif
