/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKRESLICECURSORACTORWRAP_H
#define NATIVE_EXTENSION_VTK_VTKRESLICECURSORACTORWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkResliceCursorActor.h>

#include "vtkProp3DWrap.h"

class VtkResliceCursorActorWrap : public VtkProp3DWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitTpl(v8::Local<v8::FunctionTemplate> tpl);

		VtkResliceCursorActorWrap(vtkSmartPointer<vtkResliceCursorActor>);
		VtkResliceCursorActorWrap();
		~VtkResliceCursorActorWrap( );
		static Nan::Persistent<v8::Function> constructor;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void GetCenterlineActor(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetCenterlineProperty(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetCursorAlgorithm(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetThickSlabProperty(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void HasTranslucentPolygonalGeometry(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void IsA(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void ReleaseGraphicsResources(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void RenderOpaqueGeometry(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetUserMatrix(const Nan::FunctionCallbackInfo<v8::Value>& info);
};

#endif
