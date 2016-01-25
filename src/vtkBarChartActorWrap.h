/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKBARCHARTACTORWRAP_H
#define NATIVE_EXTENSION_VTK_VTKBARCHARTACTORWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkBarChartActor.h>

#include "vtkActor2DWrap.h"

class VtkBarChartActorWrap : public VtkActor2DWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitTpl(v8::Local<v8::FunctionTemplate> tpl);

		VtkBarChartActorWrap(vtkSmartPointer<vtkBarChartActor>);
		VtkBarChartActorWrap();
		~VtkBarChartActorWrap( );
		static Nan::Persistent<v8::Function> constructor;
		static Nan::Persistent<v8::FunctionTemplate> ptpl;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void GetBarLabel(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetInput(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetLabelTextProperty(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetLabelVisibility(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetLegendActor(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetLegendVisibility(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetTitle(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetTitleTextProperty(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetTitleVisibility(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetYTitle(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void HasTranslucentPolygonalGeometry(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void IsA(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void LabelVisibilityOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void LabelVisibilityOn(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void LegendVisibilityOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void LegendVisibilityOn(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void ReleaseGraphicsResources(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void RenderOpaqueGeometry(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void RenderOverlay(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void RenderTranslucentPolygonalGeometry(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetBarColor(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetBarLabel(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetInput(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetLabelTextProperty(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetLabelVisibility(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetLegendVisibility(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetTitle(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetTitleTextProperty(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetTitleVisibility(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetYTitle(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void TitleVisibilityOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void TitleVisibilityOn(const Nan::FunctionCallbackInfo<v8::Value>& info);
};

#endif
