/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKRENDERVIEWWRAP_H
#define NATIVE_EXTENSION_VTK_VTKRENDERVIEWWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkRenderView.h>

#include "vtkRenderViewBaseWrap.h"
#include "../../plus/plus.h"

class VtkRenderViewWrap : public VtkRenderViewBaseWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitPtpl();
		static void ConstructorGetter(
			v8::Local<v8::String> property,
			const Nan::PropertyCallbackInfo<v8::Value>& info);

		VtkRenderViewWrap(vtkSmartPointer<vtkRenderView>);
		VtkRenderViewWrap();
		~VtkRenderViewWrap( );
		static Nan::Persistent<v8::FunctionTemplate> ptpl;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void AddLabels(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void ApplyViewTheme(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void DisplayHoverTextOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void DisplayHoverTextOn(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetDisplayHoverText(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetIconSize(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetIconTexture(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetInteractionMode(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetInteractorStyle(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetLabelPlacementMode(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetLabelRenderMode(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetRenderOnMouseMove(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetSelectionMode(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetSelectionModeMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetSelectionModeMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetTransform(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void RemoveLabels(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void Render(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void RenderOnMouseMoveOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void RenderOnMouseMoveOn(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetDisplayHoverText(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetDisplaySize(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetIconSize(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetIconTexture(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetInteractionMode(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetInteractionModeTo2D(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetInteractionModeTo3D(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetInteractor(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetInteractorStyle(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetLabelPlacementMode(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetLabelPlacementModeToAll(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetLabelPlacementModeToNoOverlap(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetLabelRenderMode(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetLabelRenderModeToFreetype(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetLabelRenderModeToQt(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetRenderOnMouseMove(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetRenderWindow(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetSelectionMode(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetSelectionModeToFrustum(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetSelectionModeToSurface(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetTransform(const Nan::FunctionCallbackInfo<v8::Value>& info);

#ifdef VTK_NODE_PLUS_VTKRENDERVIEWWRAP_CLASSDEF
		VTK_NODE_PLUS_VTKRENDERVIEWWRAP_CLASSDEF
#endif
};

#endif
