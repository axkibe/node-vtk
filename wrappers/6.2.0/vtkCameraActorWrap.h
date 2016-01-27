/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKCAMERAACTORWRAP_H
#define NATIVE_EXTENSION_VTK_VTKCAMERAACTORWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkCameraActor.h>

#include "vtkProp3DWrap.h"

class VtkCameraActorWrap : public VtkProp3DWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitPtpl();
		static void ConstructorGetter(
			v8::Local<v8::String> property,
			const Nan::PropertyCallbackInfo<v8::Value>& info);

		VtkCameraActorWrap(vtkSmartPointer<vtkCameraActor>);
		VtkCameraActorWrap();
		~VtkCameraActorWrap( );
		static Nan::Persistent<v8::FunctionTemplate> ptpl;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void GetCamera(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetProperty(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetWidthByHeightRatio(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void HasTranslucentPolygonalGeometry(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void IsA(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void ReleaseGraphicsResources(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void RenderOpaqueGeometry(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetCamera(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetProperty(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetWidthByHeightRatio(const Nan::FunctionCallbackInfo<v8::Value>& info);
};

#endif