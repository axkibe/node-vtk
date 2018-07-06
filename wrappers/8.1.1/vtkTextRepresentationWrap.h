/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKTEXTREPRESENTATIONWRAP_H
#define NATIVE_EXTENSION_VTK_VTKTEXTREPRESENTATIONWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkTextRepresentation.h>

#include "vtkBorderRepresentationWrap.h"
#include "../../plus/plus.h"

class VtkTextRepresentationWrap : public VtkBorderRepresentationWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitPtpl();
		static void ConstructorGetter(
			v8::Local<v8::String> property,
			const Nan::PropertyCallbackInfo<v8::Value>& info);

		VtkTextRepresentationWrap(vtkSmartPointer<vtkTextRepresentation>);
		VtkTextRepresentationWrap();
		~VtkTextRepresentationWrap( );
		static Nan::Persistent<v8::FunctionTemplate> ptpl;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void BuildRepresentation(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetActors2D(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetSize(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetText(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetTextActor(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetWindowLocation(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void HasTranslucentPolygonalGeometry(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void ReleaseGraphicsResources(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void RenderOpaqueGeometry(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void RenderOverlay(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void RenderTranslucentPolygonalGeometry(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetPosition(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetText(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetTextActor(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetWindowLocation(const Nan::FunctionCallbackInfo<v8::Value>& info);

#ifdef VTK_NODE_PLUS_VTKTEXTREPRESENTATIONWRAP_CLASSDEF
		VTK_NODE_PLUS_VTKTEXTREPRESENTATIONWRAP_CLASSDEF
#endif
};

#endif
