/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKPLOTWRAP_H
#define NATIVE_EXTENSION_VTK_VTKPLOTWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkPlot.h>

#include "vtkContextItemWrap.h"
#include "../../plus/plus.h"

class VtkPlotWrap : public VtkContextItemWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitPtpl();
		static void ConstructorGetter(
			v8::Local<v8::String> property,
			const Nan::PropertyCallbackInfo<v8::Value>& info);

		VtkPlotWrap(vtkSmartPointer<vtkPlot>);
		VtkPlotWrap();
		~VtkPlotWrap( );
		static Nan::Persistent<v8::FunctionTemplate> ptpl;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void GetBounds(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetBrush(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetColor(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetData(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetIndexedLabels(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetInput(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetLabels(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetLegendVisibility(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetNumberOfLabels(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetPen(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetSelectable(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetSelection(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetSelectionBrush(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetSelectionPen(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetTooltipNotation(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetTooltipPrecision(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetUnscaledInputBounds(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetUseIndexForXSeries(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetWidth(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetXAxis(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetYAxis(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void LegendVisibilityOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void LegendVisibilityOn(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SelectableOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SelectableOn(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetBrush(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetColor(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetIndexedLabels(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetInputData(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetLabels(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetLegendVisibility(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetPen(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetSelectable(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetSelection(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetSelectionBrush(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetSelectionPen(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetTooltipNotation(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetTooltipPrecision(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetUseIndexForXSeries(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetWidth(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetXAxis(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetYAxis(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void UpdateCache(const Nan::FunctionCallbackInfo<v8::Value>& info);

#ifdef VTK_NODE_PLUS_VTKPLOTWRAP_CLASSDEF
		VTK_NODE_PLUS_VTKPLOTWRAP_CLASSDEF
#endif
};

#endif
