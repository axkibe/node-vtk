/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKVIEWPORTWRAP_H
#define NATIVE_EXTENSION_VTK_VTKVIEWPORTWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkViewport.h>

#include "vtkObjectWrap.h"

class VtkViewportWrap : public VtkObjectWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitTpl(v8::Local<v8::FunctionTemplate> tpl);

		VtkViewportWrap(vtkSmartPointer<vtkViewport>);
		VtkViewportWrap();
		~VtkViewportWrap( );
		static Nan::Persistent<v8::Function> constructor;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void IsA(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void AddViewProp(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void HasViewProp(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void RemoveViewProp(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void RemoveAllViewProps(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void AddActor2D(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void RemoveActor2D(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetBackground(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetBackground2(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GradientBackgroundOn(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GradientBackgroundOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetAspect(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void ComputeAspect(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetPixelAspect(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetViewport(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetDisplayPoint(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetViewPoint(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetWorldPoint(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void IsInViewport(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetVTKWindow(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void DisplayToView(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void ViewToDisplay(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void WorldToView(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void ViewToWorld(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void DisplayToWorld(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void WorldToDisplay(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetPickX(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetPickY(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetPickWidth(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetPickHeight(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetPickX1(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetPickY1(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetPickX2(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetPickY2(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetIsPicking(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetPickedZ(const Nan::FunctionCallbackInfo<v8::Value>& info);
};

#endif
