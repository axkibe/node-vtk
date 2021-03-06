/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKCONTEXTSCENEWRAP_H
#define NATIVE_EXTENSION_VTK_VTKCONTEXTSCENEWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkContextScene.h>

#include "vtkObjectWrap.h"
#include "../../plus/plus.h"

class VtkContextSceneWrap : public VtkObjectWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitPtpl();
		static void ConstructorGetter(
			v8::Local<v8::String> property,
			const Nan::PropertyCallbackInfo<v8::Value>& info);

		VtkContextSceneWrap(vtkSmartPointer<vtkContextScene>);
		VtkContextSceneWrap();
		~VtkContextSceneWrap( );
		static Nan::Persistent<v8::FunctionTemplate> ptpl;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void AddItem(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void ClearItems(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetAnnotationLink(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetBufferId(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetDirty(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetGeometry(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetItem(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetNumberOfItems(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetRenderer(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetScaleTiles(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetSceneHeight(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetSceneWidth(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetTransform(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetUseBufferId(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetViewHeight(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetViewWidth(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void HasTransform(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void IsA(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void Paint(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void ReleaseGraphicsResources(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void RemoveItem(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void ScaleTilesOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void ScaleTilesOn(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetAnnotationLink(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetDirty(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetGeometry(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetRenderer(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetScaleTiles(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetTransform(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetUseBufferId(const Nan::FunctionCallbackInfo<v8::Value>& info);

#ifdef VTK_NODE_PLUS_VTKCONTEXTSCENEWRAP_CLASSDEF
		VTK_NODE_PLUS_VTKCONTEXTSCENEWRAP_CLASSDEF
#endif
};

#endif
