/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKSPIDERPLOTACTORWRAP_H
#define NATIVE_EXTENSION_VTK_VTKSPIDERPLOTACTORWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkSpiderPlotActor.h>

#include "vtkActor2DWrap.h"

class VtkSpiderPlotActorWrap : public VtkActor2DWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitTpl(v8::Local<v8::FunctionTemplate> tpl);

		VtkSpiderPlotActorWrap(vtkSmartPointer<vtkSpiderPlotActor>);
		VtkSpiderPlotActorWrap();
		~VtkSpiderPlotActorWrap( );
		static Nan::Persistent<v8::Function> constructor;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void GetAxisLabel(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetIndependentVariables(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetIndependentVariablesMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetIndependentVariablesMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetInput(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetLabelTextProperty(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetLabelVisibility(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetLegendActor(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetLegendVisibility(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetNumberOfRings(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetNumberOfRingsMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetNumberOfRingsMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetTitle(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetTitleTextProperty(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetTitleVisibility(const Nan::FunctionCallbackInfo<v8::Value>& info);
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
		static void SetAxisLabel(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetAxisRange(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetIndependentVariables(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetIndependentVariablesToColumns(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetIndependentVariablesToRows(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetInputConnection(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetInputData(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetLabelTextProperty(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetLabelVisibility(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetLegendVisibility(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetNumberOfRings(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetPlotColor(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetTitle(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetTitleTextProperty(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetTitleVisibility(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void TitleVisibilityOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void TitleVisibilityOn(const Nan::FunctionCallbackInfo<v8::Value>& info);
};

#endif
