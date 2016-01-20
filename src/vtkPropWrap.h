/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKPROPWRAP_H
#define NATIVE_EXTENSION_VTK_VTKPROPWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkProp.h>

#include "vtkObjectWrap.h"

class VtkPropWrap : public VtkObjectWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitTpl(v8::Local<v8::FunctionTemplate> tpl);

		VtkPropWrap(vtkSmartPointer<vtkProp>);
		VtkPropWrap();
		~VtkPropWrap( );
		static Nan::Persistent<v8::Function> constructor;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void IsA(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetVisibility(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetVisibility(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void VisibilityOn(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void VisibilityOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetPickable(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetPickable(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void PickableOn(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void PickableOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void Pick(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetDragable(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetDragable(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void DragableOn(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void DragableOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void UseBoundsOn(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void UseBoundsOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void ShallowCopy(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void InitPathTraversal(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetNumberOfPaths(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void HasTranslucentPolygonalGeometry(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetEstimatedRenderTime(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetEstimatedRenderTime(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void RestoreEstimatedRenderTime(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetAllocatedRenderTime(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetRenderTimeMultiplier(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetRenderTimeMultiplier(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetNumberOfConsumers(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void AddConsumer(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void RemoveConsumer(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetConsumer(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void IsConsumer(const Nan::FunctionCallbackInfo<v8::Value>& info);
};

#endif
