/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKVIEWPORTWRAP_H
#define NATIVE_EXTENSION_VTK_VTKVIEWPORTWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkViewport.h>

#include "vtkObjectWrap.h"
#include "../../plus/plus.h"

class VtkViewportWrap : public VtkObjectWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitPtpl();
		static void ConstructorGetter(
			v8::Local<v8::String> property,
			const Nan::PropertyCallbackInfo<v8::Value>& info);

		VtkViewportWrap(vtkSmartPointer<vtkViewport>);
		VtkViewportWrap();
		~VtkViewportWrap( );
		static Nan::Persistent<v8::FunctionTemplate> ptpl;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void AddActor2D(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void AddViewProp(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void ComputeAspect(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void DisplayToView(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void DisplayToWorld(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetActors2D(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetAspect(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetBackground(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetBackground2(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetBackgroundAlpha(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetBackgroundAlphaMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetBackgroundAlphaMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetCenter(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetCurrentPickId(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetDisplayPoint(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetGradientBackground(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetIsPicking(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetOrigin(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetPickHeight(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetPickResultProps(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetPickWidth(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetPickX(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetPickX1(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetPickX2(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetPickY(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetPickY1(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetPickY2(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetPixelAspect(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetSize(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetViewPoint(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetViewProps(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetViewport(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetWorldPoint(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GradientBackgroundOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GradientBackgroundOn(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void HasViewProp(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void IsInViewport(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void PickPropFrom(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void RemoveActor2D(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void RemoveAllViewProps(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void RemoveViewProp(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetAspect(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetBackground(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetBackground2(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetBackgroundAlpha(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetCurrentPickId(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetDisplayPoint(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetGradientBackground(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetPixelAspect(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetViewPoint(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetViewport(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetWorldPoint(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void ViewToDisplay(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void ViewToWorld(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void WorldToDisplay(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void WorldToView(const Nan::FunctionCallbackInfo<v8::Value>& info);

#ifdef VTK_NODE_PLUS_VTKVIEWPORTWRAP_CLASSDEF
		VTK_NODE_PLUS_VTKVIEWPORTWRAP_CLASSDEF
#endif
};

#endif
